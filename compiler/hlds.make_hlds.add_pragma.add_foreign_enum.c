/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "parse_tree.status.mih"
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




#line 160 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 163 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 166 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 169 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

#line 172 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 590 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 356 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 356 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

#line 314 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 314 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 620 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__620__1_1_f_0(
#line 620 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25);

#line 273 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__273__1_1_f_0(
#line 273 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125);

#line 228 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__228__1_1_f_0(
#line 228 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74);

#line 176 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__176__1_2_f_0(
#line 176 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15,
#line 176 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33);

#line 644 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 644 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 644 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

#line 620 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 620 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 620 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 609 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 609 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);

#line 590 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);

#line 581 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 581 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1);

#line 557 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 557 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 557 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17);

#line 536 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 536 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 536 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4);

#line 523 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 523 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22,
#line 523 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23);

#line 314 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 314 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);

#line 294 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 294 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 294 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18);

#line 273 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 273 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 273 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 228 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 228 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 228 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

#line 215 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7);

#line 197 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
#line 197 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
#line 197 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
#line 197 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48,
#line 197 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);

#line 168 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
#line 168 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 168 "add_foreign_enum.m"
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
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29);

#line 448 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 448 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 448 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[65][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[1][4];


#line 385 "add_foreign_enum.m"
/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s {
#line 385 "add_foreign_enum.m"
  const MR_String hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0;
#line 385 "add_foreign_enum.m"
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[8];

#line 584 "add_foreign_enum.m"
/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s {
#line 584 "add_foreign_enum.m"
  const MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;
#line 584 "add_foreign_enum.m"
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[5];



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
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not match"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be converted:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[27])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not form a bijection."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury and foreign names"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign values does not form a bijection."))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple foreign_enum pragmas."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "user-specified foreign names"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for constructors that do not match match"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "any of the constructors of"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: not all the constructors of the type"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: not all constructors have a foreign value."))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 64 */
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

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 2 },
  /* row 4 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1026 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1035 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 1044 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1052 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

#line 1060 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 590 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 590 "add_foreign_enum.m"
{
#line 596 "add_foreign_enum.m"
  {
#line 596 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 596 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17;
#line 599 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 597 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 597 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16;
#line 605 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18;
#line 602 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18;

#line 597 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 597 "add_foreign_enum.m"
      {
#line 597 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 1)));
#line 597 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 2)));
#line 597 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, (MR_Integer) 3)));
#line 597 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 == (MR_Integer) 0);
#line 597 "add_foreign_enum.m"
      }
#line 599 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 598 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17 = hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName0_15;
#line 599 "add_foreign_enum.m"
    else
#line 600 "add_foreign_enum.m"
      {
#line 600 "add_foreign_enum.m"
        {
#line 600 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.make_foreign_tag\'/8", (MR_String) "non arity zero enumeration constant.");
#line 600 "add_foreign_enum.m"
          return;
        }
#line 600 "add_foreign_enum.m"
      }
#line 602 "add_foreign_enum.m"
    {
#line 602 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
    }
#line 602 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 602 "add_foreign_enum.m"
      {
#line 602 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_18);
#line 602 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 602 "add_foreign_enum.m"
      }
#line 605 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 603 "add_foreign_enum.m"
      {
#line 603 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19;

#line 603 "add_foreign_enum.m"
        {
#line 603 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 603 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 603 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9));
#line 603 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_18));
#line 603 "add_foreign_enum.m"
        }
#line 604 "add_foreign_enum.m"
        {
#line 604 "add_foreign_enum.m"
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_19)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21);
        }
#line 603 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22;
#line 603 "add_foreign_enum.m"
      }
#line 605 "add_foreign_enum.m"
    else
#line 606 "add_foreign_enum.m"
      {
#line 606 "add_foreign_enum.m"
        {
#line 606 "add_foreign_enum.m"
          MR_Word base;
#line 606 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23 = base;
#line 606 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_17));
#line 606 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22));
#line 606 "add_foreign_enum.m"
        }
#line 606 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20;
#line 606 "add_foreign_enum.m"
      }
#line 596 "add_foreign_enum.m"
  }
#line 590 "add_foreign_enum.m"
}

#line 356 "add_foreign_enum.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
#line 356 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
#line 356 "add_foreign_enum.m"
{
#line 356 "add_foreign_enum.m"
  {
#line 356 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 356 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

#line 356 "add_foreign_enum.m"
    {
#line 356 "add_foreign_enum.m"
      return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))));
    }
#line 356 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 356 "add_foreign_enum.m"
  }
#line 356 "add_foreign_enum.m"
}

#line 314 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 314 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 314 "add_foreign_enum.m"
{
#line 321 "add_foreign_enum.m"
  {
#line 321 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 321 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 2)));
#line 321 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 321 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24;
#line 321 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27;
#line 321 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28;
#line 321 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29;
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 0)));
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 1)));
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 3)));
#line 322 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 4)));
#line 322 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 5)));
#line 339 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 339 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 337 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26;

#line 331 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20)) == (MR_mktag((MR_Integer) 1))))
#line 328 "add_foreign_enum.m"
      {
#line 329 "add_foreign_enum.m"
        {
#line 329 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_20);
        }
#line 330 "add_foreign_enum.m"
        {
#line 330 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 330 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23));
#line 330 "add_foreign_enum.m"
        }
#line 328 "add_foreign_enum.m"
      }
#line 331 "add_foreign_enum.m"
    else
#line 332 "add_foreign_enum.m"
      {
#line 333 "add_foreign_enum.m"
        {
#line 333 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "unqualified constructor name");
#line 333 "add_foreign_enum.m"
          return;
        }
#line 332 "add_foreign_enum.m"
      }
#line 337 "add_foreign_enum.m"
    {
#line 337 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39);
    }
#line 337 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 337 "add_foreign_enum.m"
      {
#line 337 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_UserForeignName_26);
#line 337 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 337 "add_foreign_enum.m"
      }
#line 339 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 338 "add_foreign_enum.m"
      {
#line 338 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_39_39;
#line 338 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UserForeignName_26;
#line 338 "add_foreign_enum.m"
      }
#line 339 "add_foreign_enum.m"
    else
#line 345 "add_foreign_enum.m"
      {
#line 345 "add_foreign_enum.m"
#line 345 "add_foreign_enum.m"
        switch (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14) {
#line 345 "add_foreign_enum.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_foreign_enum.m"
          case (MR_Integer) 1:
#line 347 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23;
#line 345 "add_foreign_enum.m"
            break;
#line 345 "add_foreign_enum.m"
          case (MR_Integer) 0:
#line 344 "add_foreign_enum.m"
            {
#line 344 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27 = mercury__string__to_upper_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__UnqualCtorName_23);
            }
#line 345 "add_foreign_enum.m"
            break;
#line 345 "add_foreign_enum.m"
        }
#line 345 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30;
#line 345 "add_foreign_enum.m"
      }
#line 350 "add_foreign_enum.m"
    {
#line 350 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignNameTail_27);
    }
#line 357 "add_foreign_enum.m"
#line 357 "add_foreign_enum.m"
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12) {
#line 357 "add_foreign_enum.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 357 "add_foreign_enum.m"
      case (MR_Integer) 0:
#line 357 "add_foreign_enum.m"
      case (MR_Integer) 1:
#line 357 "add_foreign_enum.m"
      case (MR_Integer) 2:
#line 355 "add_foreign_enum.m"
        {
#line 355 "add_foreign_enum.m"
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;

#line 356 "add_foreign_enum.m"
          {
#line 356 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 356 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_10[0]));
#line 356 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
#line 356 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 356 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28));
#line 356 "add_foreign_enum.m"
          }
#line 356 "add_foreign_enum.m"
          {
#line 356 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44);
          }
#line 355 "add_foreign_enum.m"
        }
#line 357 "add_foreign_enum.m"
        break;
#line 357 "add_foreign_enum.m"
      case (MR_Integer) 4:
#line 357 "add_foreign_enum.m"
      case (MR_Integer) 3:
#line 360 "add_foreign_enum.m"
        {
#line 361 "add_foreign_enum.m"
          {
#line 361 "add_foreign_enum.m"
            mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "foreign_export_enum for target language");
#line 361 "add_foreign_enum.m"
            return;
          }
#line 360 "add_foreign_enum.m"
        }
#line 357 "add_foreign_enum.m"
        break;
#line 357 "add_foreign_enum.m"
    }
#line 366 "add_foreign_enum.m"
#line 366 "add_foreign_enum.m"
    switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29) {
#line 366 "add_foreign_enum.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 366 "add_foreign_enum.m"
      case (MR_Integer) 0:
#line 367 "add_foreign_enum.m"
        {
#line 368 "add_foreign_enum.m"
          {
#line 368 "add_foreign_enum.m"
            mercury__list__cons_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
          }
#line 367 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32;
#line 367 "add_foreign_enum.m"
        }
#line 366 "add_foreign_enum.m"
        break;
#line 366 "add_foreign_enum.m"
      case (MR_Integer) 1:
#line 364 "add_foreign_enum.m"
        {
#line 365 "add_foreign_enum.m"
          {
#line 365 "add_foreign_enum.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualSymName_24)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33);
          }
#line 364 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34;
#line 364 "add_foreign_enum.m"
        }
#line 366 "add_foreign_enum.m"
        break;
#line 366 "add_foreign_enum.m"
    }
#line 321 "add_foreign_enum.m"
  }
#line 314 "add_foreign_enum.m"
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
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 51 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_69_69));
#line 51 "add_foreign_enum.m"
    }
#line 50 "add_foreign_enum.m"
    {
#line 50 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[64])));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 50 "add_foreign_enum.m"
    }
#line 50 "add_foreign_enum.m"
    {
#line 50 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 50 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
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
#line 1667 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1669 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1671 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54;
#line 1673 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_55;
#line 1675 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56;
#line 1677 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
#line 1679 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 1681 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_138_138;
#line 1683 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_139_139;
#line 1685 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
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
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
#line 1779 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 1781 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 1783 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 1785 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23;

#line 68 "add_foreign_enum.m"
        {
#line 68 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23);
        }
#line 1793 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 1795 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 1797 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24;

#line 69 "add_foreign_enum.m"
            {
#line 69 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24);
            }
#line 1805 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 1806 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24)) {
#line 1808 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1810 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 0:
#line 1812 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 1814 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 1816 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 1818 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 1820 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 1822 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 1824 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 1826 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 1828 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
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
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
#line 1922 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 1924 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 1926 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 1:
#line 1928 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 1930 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)));
#line 1932 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 3)));
#line 1934 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeError_237;
#line 1936 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
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
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
#line 2415 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2417 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2419 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 2:
#line 2421 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 2423 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 2425 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 2427 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 2429 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 2431 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 2433 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 2435 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 2437 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
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
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
#line 2531 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2533 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2535 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 3:
#line 2537 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 2539 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_122_122;
#line 2541 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155;
#line 2543 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_156;
#line 2545 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157;
#line 2547 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 2549 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 2551 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 2553 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
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
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_155, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
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
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
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
#line 2647 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 2649 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 2651 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            }
#line 2653 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2655 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 2657 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 140 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
#line 144 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_59;
#line 2663 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 2665 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 45 "add_foreign_enum.m"
  }
#line 18 "add_foreign_enum.m"
}

#line 620 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__620__1_1_f_0(
#line 620 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25)
#line 620 "add_foreign_enum.m"
{
#line 620 "add_foreign_enum.m"
  {
#line 620 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 620 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 620 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;

#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_25));
#line 620 "add_foreign_enum.m"
    }
#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27));
#line 620 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_foreign_enum.m"
    }
#line 620 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_26;
#line 620 "add_foreign_enum.m"
  }
#line 620 "add_foreign_enum.m"
}

#line 273 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__273__1_1_f_0(
#line 273 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125)
#line 273 "add_foreign_enum.m"
{
#line 273 "add_foreign_enum.m"
  {
#line 273 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 273 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126;
#line 273 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127;

#line 273 "add_foreign_enum.m"
    {
#line 273 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 273 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_125));
#line 273 "add_foreign_enum.m"
    }
#line 273 "add_foreign_enum.m"
    {
#line 273 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127));
#line 273 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "add_foreign_enum.m"
    }
#line 273 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_126;
#line 273 "add_foreign_enum.m"
  }
#line 273 "add_foreign_enum.m"
}

#line 228 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__228__1_1_f_0(
#line 228 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74)
#line 228 "add_foreign_enum.m"
{
#line 228 "add_foreign_enum.m"
  {
#line 228 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 228 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75;
#line 228 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76;

#line 228 "add_foreign_enum.m"
    {
#line 228 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 228 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_74));
#line 228 "add_foreign_enum.m"
    }
#line 228 "add_foreign_enum.m"
    {
#line 228 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_76_76));
#line 228 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "add_foreign_enum.m"
    }
#line 228 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_75;
#line 228 "add_foreign_enum.m"
  }
#line 228 "add_foreign_enum.m"
}

#line 176 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__176__1_2_f_0(
#line 176 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15,
#line 176 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33)
#line 176 "add_foreign_enum.m"
{
#line 176 "add_foreign_enum.m"
  {
#line 176 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 176 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34;

#line 176 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33)) == (MR_mktag((MR_Integer) 1))))
#line 170 "add_foreign_enum.m"
      {
#line 170 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33, (MR_Integer) 0)));
#line 170 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33, (MR_Integer) 1)));

#line 171 "add_foreign_enum.m"
        {
#line 171 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__add_pragma__add_foreign_enum__ModuleQualifier_19, hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15);
        }
#line 173 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 172 "add_foreign_enum.m"
          {
#line 172 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_foreign_enum.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__UnqualName_20));
#line 172 "add_foreign_enum.m"
          }
#line 173 "add_foreign_enum.m"
        else
#line 174 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33;
#line 170 "add_foreign_enum.m"
      }
#line 176 "add_foreign_enum.m"
    else
#line 178 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_33;
#line 176 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_34;
#line 176 "add_foreign_enum.m"
  }
#line 176 "add_foreign_enum.m"
}

#line 644 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
#line 644 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
#line 644 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
#line 644 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14)
#line 644 "add_foreign_enum.m"
{
#line 649 "add_foreign_enum.m"
  {
#line 649 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33;
#line 649 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;

#line 652 "add_foreign_enum.m"
    {
#line 652 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8));
#line 652 "add_foreign_enum.m"
    }
#line 652 "add_foreign_enum.m"
    {
#line 652 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25));
#line 652 "add_foreign_enum.m"
    }
#line 652 "add_foreign_enum.m"
    {
#line 652 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_24_24));
#line 652 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[45])));
#line 652 "add_foreign_enum.m"
    }
#line 651 "add_foreign_enum.m"
    {
#line 651 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_23_23));
#line 651 "add_foreign_enum.m"
    }
#line 651 "add_foreign_enum.m"
    {
#line 651 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[47])));
#line 651 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_20_20));
#line 651 "add_foreign_enum.m"
    }
#line 650 "add_foreign_enum.m"
    {
#line 650 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[63])));
#line 650 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_17_17));
#line 650 "add_foreign_enum.m"
    }
#line 654 "add_foreign_enum.m"
    {
#line 654 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10));
#line 654 "add_foreign_enum.m"
    }
#line 654 "add_foreign_enum.m"
    {
#line 654 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_33_33));
#line 654 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 654 "add_foreign_enum.m"
    }
#line 654 "add_foreign_enum.m"
    {
#line 654 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 654 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 654 "add_foreign_enum.m"
    }
#line 655 "add_foreign_enum.m"
    {
#line 655 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "add_foreign_enum.m"
    }
#line 655 "add_foreign_enum.m"
    {
#line 655 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 655 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 655 "add_foreign_enum.m"
    }
#line 656 "add_foreign_enum.m"
    {
#line 656 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);
#line 656 "add_foreign_enum.m"
      return;
    }
#line 649 "add_foreign_enum.m"
  }
#line 644 "add_foreign_enum.m"
}

#line 620 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0_1(
#line 620 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 620 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 620 "add_foreign_enum.m"
{
#line 620 "add_foreign_enum.m"
  {
#line 620 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 620 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 620 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26;

#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__add_foreign_enum_unmapped_ctors_error__620__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 620 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_26));
#line 620 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 620 "add_foreign_enum.m"
  }
#line 620 "add_foreign_enum.m"
}

#line 609 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8,
#line 609 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19,
#line 609 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20)
#line 609 "add_foreign_enum.m"
{
#line 615 "add_foreign_enum.m"
  {
#line 615 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14;
#line 615 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47;
#line 615 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52;
#line 622 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15;

#line 619 "add_foreign_enum.m"
    {
#line 619 "add_foreign_enum.m"
      mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors0_8, &hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 620 "add_foreign_enum.m"
    {
#line 620 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5], hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11);
    }
#line 621 "add_foreign_enum.m"
    {
#line 621 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorComponents_12, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
    }
#line 622 "add_foreign_enum.m"
    {
#line 622 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_56_56, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_11, ((MR_Box) ((MR_String) "constructor does not have a foreign value")), ((MR_Box) ((MR_String) "constructors do not have foreign values")));
    }
#line 622 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_DoOrDoes_15);
#line 3134 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 625 "add_foreign_enum.m"
    {
#line 625 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_15));
#line 625 "add_foreign_enum.m"
    }
#line 625 "add_foreign_enum.m"
    {
#line 625 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_38_38));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[62])));
#line 625 "add_foreign_enum.m"
    }
#line 625 "add_foreign_enum.m"
    {
#line 625 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 625 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_37_37));
#line 625 "add_foreign_enum.m"
    }
#line 626 "add_foreign_enum.m"
    {
#line 626 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__V_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__CtorList_14);
    }
#line 628 "add_foreign_enum.m"
    {
#line 628 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_59_59, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[60]));
    }
#line 628 "add_foreign_enum.m"
    {
#line 628 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 628 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 628 "add_foreign_enum.m"
    }
#line 629 "add_foreign_enum.m"
    {
#line 629 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 0) = ((MR_Box) ((MR_Integer) 0));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__VerboseErrorPieces_16));
#line 629 "add_foreign_enum.m"
    }
#line 629 "add_foreign_enum.m"
    {
#line 629 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_47_47));
#line 629 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "add_foreign_enum.m"
    }
#line 628 "add_foreign_enum.m"
    {
#line 628 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
#line 628 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 628 "add_foreign_enum.m"
    }
#line 627 "add_foreign_enum.m"
    {
#line 627 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
#line 627 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_43_43));
#line 627 "add_foreign_enum.m"
    }
#line 630 "add_foreign_enum.m"
    {
#line 630 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_17));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "add_foreign_enum.m"
    }
#line 630 "add_foreign_enum.m"
    {
#line 630 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 630 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_52_52));
#line 630 "add_foreign_enum.m"
    }
#line 631 "add_foreign_enum.m"
    {
#line 631 "add_foreign_enum.m"
      mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_18)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_20);
#line 631 "add_foreign_enum.m"
      return;
    }
#line 615 "add_foreign_enum.m"
  }
#line 609 "add_foreign_enum.m"
}

#line 590 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__4_12,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21,
#line 590 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22,
#line 590 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23)
#line 590 "add_foreign_enum.m"
{
#line 596 "add_foreign_enum.m"
  {
#line 596 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 596 "add_foreign_enum.m"
    {
#line 596 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_102_111_114_101_105_103_110_95_116_97_103_95_95_91_52_93_95_48_8_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_9, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_10, hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_11, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_20, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_21, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_23);
#line 596 "add_foreign_enum.m"
      return;
    }
#line 596 "add_foreign_enum.m"
  }
#line 590 "add_foreign_enum.m"
}

#line 581 "add_foreign_enum.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
#line 581 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)
#line 581 "add_foreign_enum.m"
{
#line 584 "add_foreign_enum.m"
  {
#line 584 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 584 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_9[0 + hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_9_0__vct_9_f_0;

#line 584 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
#line 584 "add_foreign_enum.m"
  }
#line 581 "add_foreign_enum.m"
}

#line 557 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6,
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14,
#line 557 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15,
#line 557 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16,
#line 557 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17)
#line 557 "add_foreign_enum.m"
{
#line 562 "add_foreign_enum.m"
  {
#line 562 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 562 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 0)));
#line 562 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_14, (MR_Integer) 1)));
#line 562 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12;

#line 567 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9)) == (MR_mktag((MR_Integer) 1))))
#line 568 "add_foreign_enum.m"
      {
#line 568 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));
#line 568 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_20 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 1)));

#line 569 "add_foreign_enum.m"
        {
#line 569 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_13, hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6);
        }
#line 571 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 570 "add_foreign_enum.m"
          {
#line 570 "add_foreign_enum.m"
            {
#line 570 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 570 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_20));
#line 570 "add_foreign_enum.m"
            }
#line 570 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 570 "add_foreign_enum.m"
          }
#line 571 "add_foreign_enum.m"
        else
#line 572 "add_foreign_enum.m"
          {
#line 572 "add_foreign_enum.m"
            {
#line 572 "add_foreign_enum.m"
              MR_Word base;
#line 572 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = base;
#line 572 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9));
#line 572 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16));
#line 572 "add_foreign_enum.m"
            }
#line 573 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9;
#line 572 "add_foreign_enum.m"
          }
#line 568 "add_foreign_enum.m"
      }
#line 567 "add_foreign_enum.m"
    else
#line 565 "add_foreign_enum.m"
      {
#line 565 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_9, (MR_Integer) 0)));

#line 566 "add_foreign_enum.m"
        {
#line 566 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_6));
#line 566 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_11));
#line 566 "add_foreign_enum.m"
        }
#line 565 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_17 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_16;
#line 565 "add_foreign_enum.m"
      }
#line 576 "add_foreign_enum.m"
    {
#line 576 "add_foreign_enum.m"
      MR_Word base;
#line 576 "add_foreign_enum.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "add_foreign_enum.m"
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_15 = base;
#line 576 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_12));
#line 576 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_10));
#line 576 "add_foreign_enum.m"
    }
#line 562 "add_foreign_enum.m"
  }
#line 557 "add_foreign_enum.m"
}

#line 536 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1(
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 536 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 536 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 536 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4)
#line 536 "add_foreign_enum.m"
{
#line 536 "add_foreign_enum.m"
  {
#line 536 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 536 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15;
#line 536 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17;

#line 536 "add_foreign_enum.m"
    {
#line 536 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17);
    }
#line 536 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NamesAndTags_15));
#line 536 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_17));
#line 536 "add_foreign_enum.m"
  }
#line 536 "add_foreign_enum.m"
}

#line 523 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_8,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11,
#line 523 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12,
#line 523 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22,
#line 523 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23)
#line 523 "add_foreign_enum.m"
{
#line 529 "add_foreign_enum.m"
  {
#line 529 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 529 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34;
#line 529 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15;
#line 529 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16;
#line 529 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17;
#line 529 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27;
#line 532 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14;
#line 536 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17;

#line 530 "add_foreign_enum.m"
    {
#line 530 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_10, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14);
    }
#line 532 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 531 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15 = hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName0_14;
#line 532 "add_foreign_enum.m"
    else
#line 533 "add_foreign_enum.m"
      {
#line 533 "add_foreign_enum.m"
        {
#line 533 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/7", (MR_String) "unqualified type name while processing foreign tags.");
#line 533 "add_foreign_enum.m"
          return;
        }
#line 533 "add_foreign_enum.m"
      }
#line 536 "add_foreign_enum.m"
    {
#line 536 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
#line 536 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0_1));
#line 536 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_15));
#line 536 "add_foreign_enum.m"
    }
#line 3551 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
#line 536 "add_foreign_enum.m"
    {
#line 536 "add_foreign_enum.m"
      mercury__list__map_foldl_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_34_34, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_27_27, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_11, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17);
    }
#line 536 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_BadCtors_17);
#line 547 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "add_foreign_enum.m"
      {
#line 543 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18;

#line 540 "add_foreign_enum.m"
        {
#line 540 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_16, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18);
        }
#line 543 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 541 "add_foreign_enum.m"
          {
#line 541 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19;

#line 541 "add_foreign_enum.m"
            {
#line 541 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_18);
            }
#line 542 "add_foreign_enum.m"
            {
#line 542 "add_foreign_enum.m"
              MR_Word base;
#line 542 "add_foreign_enum.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "add_foreign_enum.m"
              *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = base;
#line 542 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_19));
#line 542 "add_foreign_enum.m"
            }
#line 541 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22;
#line 541 "add_foreign_enum.m"
          }
#line 543 "add_foreign_enum.m"
        else
#line 544 "add_foreign_enum.m"
          {
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46;
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47;
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59;
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60;
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 544 "add_foreign_enum.m"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65;

#line 640 "add_foreign_enum.m"
            {
#line 640 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_9, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[43]));
            }
#line 640 "add_foreign_enum.m"
            {
#line 640 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 640 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 640 "add_foreign_enum.m"
            }
#line 640 "add_foreign_enum.m"
            {
#line 640 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_60_60));
#line 640 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "add_foreign_enum.m"
            }
#line 640 "add_foreign_enum.m"
            {
#line 640 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 640 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_8));
#line 640 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_59_59));
#line 640 "add_foreign_enum.m"
            }
#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_46));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "add_foreign_enum.m"
            }
#line 641 "add_foreign_enum.m"
            {
#line 641 "add_foreign_enum.m"
              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 641 "add_foreign_enum.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65));
#line 641 "add_foreign_enum.m"
            }
#line 642 "add_foreign_enum.m"
            {
#line 642 "add_foreign_enum.m"
              mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_47)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23);
            }
#line 545 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "add_foreign_enum.m"
          }
#line 543 "add_foreign_enum.m"
      }
#line 547 "add_foreign_enum.m"
    else
#line 548 "add_foreign_enum.m"
      {
#line 549 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 548 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_22;
#line 548 "add_foreign_enum.m"
      }
#line 529 "add_foreign_enum.m"
  }
#line 523 "add_foreign_enum.m"
}

#line 314 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12,
#line 314 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___TypeModQual_15,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33,
#line 314 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34,
#line 314 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35)
#line 314 "add_foreign_enum.m"
{
#line 321 "add_foreign_enum.m"
  {
#line 321 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

#line 321 "add_foreign_enum.m"
    {
#line 321 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Lang_12, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_13, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_14, hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_0_30, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Overrides_31, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_0_32, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NameMap_33, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_34, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_35);
#line 321 "add_foreign_enum.m"
      return;
    }
#line 321 "add_foreign_enum.m"
  }
#line 314 "add_foreign_enum.m"
}

#line 294 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
#line 294 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
#line 294 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
#line 294 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18)
#line 294 "add_foreign_enum.m"
{
#line 299 "add_foreign_enum.m"
  {
#line 299 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 299 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 299 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 299 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12;
#line 301 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13;

#line 300 "add_foreign_enum.m"
    {
#line 300 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9);
    }
#line 301 "add_foreign_enum.m"
    {
#line 301 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12, &hlds__make_hlds__add_pragma__add_foreign_enum__V_13_13);
    }
#line 303 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 302 "add_foreign_enum.m"
      {
#line 302 "add_foreign_enum.m"
        {
#line 302 "add_foreign_enum.m"
          MR_Word base;
#line 302 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = base;
#line 302 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9));
#line 302 "add_foreign_enum.m"
        }
#line 302 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17;
#line 302 "add_foreign_enum.m"
      }
#line 303 "add_foreign_enum.m"
    else
#line 304 "add_foreign_enum.m"
      {
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15;
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16;
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30;
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31;
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32;
#line 304 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36;

#line 304 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "add_foreign_enum.m"
        {
#line 309 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[38]));
        }
#line 309 "add_foreign_enum.m"
        {
#line 309 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 309 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_32_32));
#line 309 "add_foreign_enum.m"
        }
#line 309 "add_foreign_enum.m"
        {
#line 309 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_31_31));
#line 309 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 309 "add_foreign_enum.m"
        }
#line 309 "add_foreign_enum.m"
        {
#line 309 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 309 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_7));
#line 309 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_30_30));
#line 309 "add_foreign_enum.m"
        }
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "add_foreign_enum.m"
        }
#line 310 "add_foreign_enum.m"
        {
#line 310 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 310 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_36_36));
#line 310 "add_foreign_enum.m"
        }
#line 311 "add_foreign_enum.m"
        {
#line 311 "add_foreign_enum.m"
          MR_Word base;
#line 311 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18 = base;
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16));
#line 311 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17));
#line 311 "add_foreign_enum.m"
        }
#line 304 "add_foreign_enum.m"
      }
#line 299 "add_foreign_enum.m"
  }
#line 294 "add_foreign_enum.m"
}

#line 273 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
#line 273 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 273 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 273 "add_foreign_enum.m"
{
#line 273 "add_foreign_enum.m"
  {
#line 273 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 273 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 273 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126;

#line 273 "add_foreign_enum.m"
    {
#line 273 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__273__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 273 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv8_HeadVar__2_126));
#line 273 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 273 "add_foreign_enum.m"
  }
#line 273 "add_foreign_enum.m"
}

#line 228 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
#line 228 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 228 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 228 "add_foreign_enum.m"
{
#line 228 "add_foreign_enum.m"
  {
#line 228 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 228 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 228 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75;

#line 228 "add_foreign_enum.m"
    {
#line 228 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__228__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 228 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv6_HeadVar__2_75));
#line 228 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 228 "add_foreign_enum.m"
  }
#line 228 "add_foreign_enum.m"
}

#line 215 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 215 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6,
#line 215 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7)
#line 215 "add_foreign_enum.m"
{
#line 215 "add_foreign_enum.m"
  {
#line 215 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 215 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31;
#line 215 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33;
#line 215 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35;

#line 215 "add_foreign_enum.m"
    {
#line 215 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35);
    }
#line 215 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_Overrides_31));
#line 215 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_NameMap_33));
#line 215 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_BadCtors_35));
#line 215 "add_foreign_enum.m"
  }
#line 215 "add_foreign_enum.m"
}

#line 197 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15,
#line 197 "add_foreign_enum.m"
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_17,
#line 197 "add_foreign_enum.m"
  MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21,
#line 197 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22,
#line 197 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48,
#line 197 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49)
#line 197 "add_foreign_enum.m"
{
#line 204 "add_foreign_enum.m"
  {
#line 204 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53;
#line 204 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54;
#line 214 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27;
#line 214 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28;
#line 214 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29;

#line 207 "add_foreign_enum.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15)) == (MR_mktag((MR_Integer) 1))))
#line 206 "add_foreign_enum.m"
      {
#line 206 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25;

#line 206 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 0)));
#line 206 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 1)));
#line 206 "add_foreign_enum.m"
      }
#line 207 "add_foreign_enum.m"
    else
#line 209 "add_foreign_enum.m"
      {
#line 210 "add_foreign_enum.m"
        {
#line 210 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "unqualified type name for foreign_export_enum");
#line 210 "add_foreign_enum.m"
          return;
        }
#line 209 "add_foreign_enum.m"
      }
#line 215 "add_foreign_enum.m"
    {
#line 215 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0]));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19));
#line 215 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24));
#line 215 "add_foreign_enum.m"
    }
#line 4113 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4115 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 216 "add_foreign_enum.m"
    {
#line 216 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170);
    }
#line 4122 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1];
#line 214 "add_foreign_enum.m"
    {
#line 214 "add_foreign_enum.m"
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_172_172, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_53_53, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_54_54)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
    }
#line 214 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27);
#line 214 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28);
#line 214 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
#line 221 "add_foreign_enum.m"
    {
#line 221 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__is_empty_1_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
    }
#line 221 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
#line 246 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 225 "add_foreign_enum.m"
      {
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85;
#line 225 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103;
#line 225 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108;
#line 232 "add_foreign_enum.m"
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86;

#line 225 "add_foreign_enum.m"
        {
#line 225 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 225 "add_foreign_enum.m"
        }
#line 225 "add_foreign_enum.m"
        {
#line 225 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_66_66));
#line 225 "add_foreign_enum.m"
        }
#line 225 "add_foreign_enum.m"
        {
#line 225 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_65_65));
#line 225 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[6])));
#line 225 "add_foreign_enum.m"
        }
#line 224 "add_foreign_enum.m"
        {
#line 224 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[56])));
#line 224 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_64_64));
#line 224 "add_foreign_enum.m"
        }
#line 223 "add_foreign_enum.m"
        {
#line 223 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[55])));
#line 223 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_61_61));
#line 223 "add_foreign_enum.m"
        }
#line 222 "add_foreign_enum.m"
        {
#line 222 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[54])));
#line 222 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_58_58));
#line 222 "add_foreign_enum.m"
        }
#line 226 "add_foreign_enum.m"
        {
#line 226 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
        }
#line 228 "add_foreign_enum.m"
        {
#line 228 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31);
        }
#line 229 "add_foreign_enum.m"
        {
#line 229 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingComponents_32, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
        }
#line 4270 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 232 "add_foreign_enum.m"
        {
#line 232 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_31, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
        }
#line 232 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_V_86_86);
#line 232 "add_foreign_enum.m"
        {
#line 232 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 232 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_86_86));
#line 232 "add_foreign_enum.m"
        }
#line 233 "add_foreign_enum.m"
        {
#line 233 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_85_85));
#line 233 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[30])));
#line 233 "add_foreign_enum.m"
        }
#line 231 "add_foreign_enum.m"
        {
#line 231 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 231 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_84_84));
#line 231 "add_foreign_enum.m"
        }
#line 235 "add_foreign_enum.m"
        {
#line 235 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175, hlds__make_hlds__add_pragma__add_foreign_enum__V_81_81, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingList_34);
        }
#line 237 "add_foreign_enum.m"
        {
#line 237 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_175_175, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_30);
        }
#line 237 "add_foreign_enum.m"
        {
#line 237 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_101_101));
#line 237 "add_foreign_enum.m"
        }
#line 238 "add_foreign_enum.m"
        {
#line 238 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103, 0) = ((MR_Box) ((MR_Integer) 0));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingVerbosePieces_35));
#line 238 "add_foreign_enum.m"
        }
#line 238 "add_foreign_enum.m"
        {
#line 238 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_103_103));
#line 238 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "add_foreign_enum.m"
        }
#line 237 "add_foreign_enum.m"
        {
#line 237 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_100_100));
#line 237 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 237 "add_foreign_enum.m"
        }
#line 236 "add_foreign_enum.m"
        {
#line 236 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 236 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 236 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_99_99));
#line 236 "add_foreign_enum.m"
        }
#line 240 "add_foreign_enum.m"
        {
#line 240 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_36));
#line 240 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "add_foreign_enum.m"
        }
#line 239 "add_foreign_enum.m"
        {
#line 239 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 239 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_108_108));
#line 239 "add_foreign_enum.m"
        }
#line 241 "add_foreign_enum.m"
        {
#line 241 "add_foreign_enum.m"
          mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_37)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
        }
#line 242 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "add_foreign_enum.m"
      }
#line 246 "add_foreign_enum.m"
    else
#line 251 "add_foreign_enum.m"
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "add_foreign_enum.m"
      {
#line 249 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_17, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_28, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
#line 249 "add_foreign_enum.m"
        return;
      }
#line 251 "add_foreign_enum.m"
    else
#line 252 "add_foreign_enum.m"
      {
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178;
#line 252 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__What_40;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120;
#line 252 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136;
#line 252 "add_foreign_enum.m"
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151;
#line 252 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156;
#line 278 "add_foreign_enum.m"
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137;

#line 256 "add_foreign_enum.m"
#line 256 "add_foreign_enum.m"
        switch (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14) {
#line 256 "add_foreign_enum.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 256 "add_foreign_enum.m"
          case (MR_Integer) 0:
#line 255 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__What_40 = (MR_String) "C identifiers.";
#line 256 "add_foreign_enum.m"
            break;
#line 256 "add_foreign_enum.m"
          case (MR_Integer) 1:
#line 256 "add_foreign_enum.m"
          case (MR_Integer) 4:
#line 256 "add_foreign_enum.m"
          case (MR_Integer) 3:
#line 263 "add_foreign_enum.m"
            {
#line 264 "add_foreign_enum.m"
              {
#line 264 "add_foreign_enum.m"
                mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "foreign_export_enum pragma for unsupported language");
#line 264 "add_foreign_enum.m"
                return;
              }
#line 263 "add_foreign_enum.m"
            }
#line 256 "add_foreign_enum.m"
            break;
#line 256 "add_foreign_enum.m"
          case (MR_Integer) 2:
#line 258 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__What_40 = (MR_String) "Java identifiers.";
#line 256 "add_foreign_enum.m"
            break;
#line 256 "add_foreign_enum.m"
        }
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
#line 269 "add_foreign_enum.m"
        }
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_118_118));
#line 269 "add_foreign_enum.m"
        }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", hlds__make_hlds__add_pragma__add_foreign_enum__What_40);
        }
#line 270 "add_foreign_enum.m"
        {
#line 270 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 270 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_121_121));
#line 270 "add_foreign_enum.m"
        }
#line 271 "add_foreign_enum.m"
        {
#line 271 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_120_120));
#line 271 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "add_foreign_enum.m"
        }
#line 269 "add_foreign_enum.m"
        {
#line 269 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_117_117));
#line 269 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_119_119));
#line 269 "add_foreign_enum.m"
        }
#line 268 "add_foreign_enum.m"
        {
#line 268 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[58])));
#line 268 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
#line 268 "add_foreign_enum.m"
        }
#line 272 "add_foreign_enum.m"
        {
#line 272 "add_foreign_enum.m"
          mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42);
        }
#line 273 "add_foreign_enum.m"
        {
#line 273 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_42);
        }
#line 275 "add_foreign_enum.m"
        {
#line 275 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_43, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2]));
        }
#line 4584 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 278 "add_foreign_enum.m"
        {
#line 278 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_169_169, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_170_170, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
        }
#line 278 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv9_V_137_137);
#line 278 "add_foreign_enum.m"
        {
#line 278 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_137_137));
#line 278 "add_foreign_enum.m"
        }
#line 278 "add_foreign_enum.m"
        {
#line 278 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_136_136));
#line 278 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[32])));
#line 278 "add_foreign_enum.m"
        }
#line 277 "add_foreign_enum.m"
        {
#line 277 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[57])));
#line 277 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
#line 277 "add_foreign_enum.m"
        }
#line 280 "add_foreign_enum.m"
        {
#line 280 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178, hlds__make_hlds__add_pragma__add_foreign_enum__V_132_132, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_44);
        }
#line 282 "add_foreign_enum.m"
        {
#line 282 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_178_178, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_41);
        }
#line 282 "add_foreign_enum.m"
        {
#line 282 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 282 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_149_149));
#line 282 "add_foreign_enum.m"
        }
#line 283 "add_foreign_enum.m"
        {
#line 283 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151, 0) = ((MR_Box) ((MR_Integer) 0));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_45));
#line 283 "add_foreign_enum.m"
        }
#line 283 "add_foreign_enum.m"
        {
#line 283 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_151_151));
#line 283 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "add_foreign_enum.m"
        }
#line 282 "add_foreign_enum.m"
        {
#line 282 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_148_148));
#line 282 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_150_150));
#line 282 "add_foreign_enum.m"
        }
#line 281 "add_foreign_enum.m"
        {
#line 281 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
#line 281 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_147_147));
#line 281 "add_foreign_enum.m"
        }
#line 285 "add_foreign_enum.m"
        {
#line 285 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_46));
#line 285 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "add_foreign_enum.m"
        }
#line 284 "add_foreign_enum.m"
        {
#line 284 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 284 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_156_156));
#line 284 "add_foreign_enum.m"
        }
#line 286 "add_foreign_enum.m"
        {
#line 286 "add_foreign_enum.m"
          mercury__list__cons_3_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_47)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_49);
        }
#line 287 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "add_foreign_enum.m"
      }
#line 204 "add_foreign_enum.m"
  }
#line 197 "add_foreign_enum.m"
}

#line 168 "add_foreign_enum.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
#line 168 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 168 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
#line 168 "add_foreign_enum.m"
{
#line 168 "add_foreign_enum.m"
  {
#line 168 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 168 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 168 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34;

#line 168 "add_foreign_enum.m"
    {
#line 168 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__176__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
#line 168 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__3_34));
#line 168 "add_foreign_enum.m"
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
#line 168 "add_foreign_enum.m"
  }
#line 168 "add_foreign_enum.m"
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
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28,
#line 152 "add_foreign_enum.m"
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29)
#line 152 "add_foreign_enum.m"
{
#line 158 "add_foreign_enum.m"
  {
#line 158 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16;
#line 158 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22;
#line 161 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14;
#line 186 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23;

#line 159 "add_foreign_enum.m"
    {
#line 159 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__sym_name_get_module_name_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, &hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14);
    }
#line 161 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 160 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15 = hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName0_14;
#line 161 "add_foreign_enum.m"
    else
#line 162 "add_foreign_enum.m"
      {
#line 162 "add_foreign_enum.m"
        {
#line 162 "add_foreign_enum.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_overrides_map\'/7", (MR_String) "unqualified type name while building override map");
#line 162 "add_foreign_enum.m"
          return;
        }
#line 162 "add_foreign_enum.m"
      }
#line 168 "add_foreign_enum.m"
    {
#line 168 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 168 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[0]));
#line 168 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1));
#line 168 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 168 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_15));
#line 168 "add_foreign_enum.m"
    }
#line 4823 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 4825 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 181 "add_foreign_enum.m"
    {
#line 181 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22 = mercury__assoc_list__map_keys_only_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__StripQualifiers_16, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList0_11);
    }
#line 183 "add_foreign_enum.m"
    {
#line 183 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesList_22, &hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23);
    }
#line 186 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 184 "add_foreign_enum.m"
      {
#line 184 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24;

#line 184 "add_foreign_enum.m"
        {
#line 184 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24 = mercury__bimap__forward_map_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_54_54, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_55_55, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap0_23);
        }
#line 185 "add_foreign_enum.m"
        {
#line 185 "add_foreign_enum.m"
          MR_Word base;
#line 185 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = base;
#line 185 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_24));
#line 185 "add_foreign_enum.m"
        }
#line 184 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28;
#line 184 "add_foreign_enum.m"
      }
#line 186 "add_foreign_enum.m"
    else
#line 187 "add_foreign_enum.m"
      {
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26;
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27;
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44;
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45;
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46;
#line 187 "add_foreign_enum.m"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50;

#line 187 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "add_foreign_enum.m"
        {
#line 192 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[25]));
        }
#line 192 "add_foreign_enum.m"
        {
#line 192 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_46_46));
#line 192 "add_foreign_enum.m"
        }
#line 192 "add_foreign_enum.m"
        {
#line 192 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_45_45));
#line 192 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "add_foreign_enum.m"
        }
#line 192 "add_foreign_enum.m"
        {
#line 192 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
#line 192 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_44_44));
#line 192 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_26));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_foreign_enum.m"
        }
#line 193 "add_foreign_enum.m"
        {
#line 193 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 193 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_50_50));
#line 193 "add_foreign_enum.m"
        }
#line 194 "add_foreign_enum.m"
        {
#line 194 "add_foreign_enum.m"
          MR_Word base;
#line 194 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_29 = base;
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_27));
#line 194 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_28));
#line 194 "add_foreign_enum.m"
        }
#line 187 "add_foreign_enum.m"
      }
#line 158 "add_foreign_enum.m"
  }
#line 152 "add_foreign_enum.m"
}

#line 448 "add_foreign_enum.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
#line 448 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
#line 448 "add_foreign_enum.m"
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
#line 448 "add_foreign_enum.m"
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6)
#line 448 "add_foreign_enum.m"
{
#line 448 "add_foreign_enum.m"
  {
#line 448 "add_foreign_enum.m"
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
#line 448 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21;
#line 448 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23;

#line 448 "add_foreign_enum.m"
    {
#line 448 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23);
    }
#line 448 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_ConsTagValues_21));
#line 448 "add_foreign_enum.m"
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnmappedCtors_23));
#line 448 "add_foreign_enum.m"
  }
#line 448 "add_foreign_enum.m"
}

#line 22 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8,
#line 22 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9,
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
#line 373 "add_foreign_enum.m"
  {
#line 373 "add_foreign_enum.m"
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 0)));
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 1)));
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 2)));
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 0)));
#line 373 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, (MR_Integer) 1)));
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74;
#line 373 "add_foreign_enum.m"
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75;
#line 383 "add_foreign_enum.m"
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193;
#line 385 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__lo_0;
#line 385 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hi_1;
#line 385 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__mid_2;
#line 385 "add_foreign_enum.m"
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__result_3;

#line 376 "add_foreign_enum.m"
    {
#line 376 "add_foreign_enum.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18);
    }
#line 379 "add_foreign_enum.m"
    {
#line 379 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17));
#line 379 "add_foreign_enum.m"
    }
#line 379 "add_foreign_enum.m"
    {
#line 379 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_75_75));
#line 379 "add_foreign_enum.m"
    }
#line 379 "add_foreign_enum.m"
    {
#line 379 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 379 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[4])));
#line 379 "add_foreign_enum.m"
    }
#line 378 "add_foreign_enum.m"
    {
#line 378 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[48])));
#line 378 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_73_73));
#line 378 "add_foreign_enum.m"
    }
#line 377 "add_foreign_enum.m"
    {
#line 377 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[47])));
#line 377 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_70_70));
#line 377 "add_foreign_enum.m"
    }
#line 377 "add_foreign_enum.m"
    {
#line 377 "add_foreign_enum.m"
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 377 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[46])));
#line 377 "add_foreign_enum.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_67_67));
#line 377 "add_foreign_enum.m"
    }
#line 383 "add_foreign_enum.m"
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17 == (MR_Integer) 0);
#line 383 "add_foreign_enum.m"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 383 "add_foreign_enum.m"
      {
#line 384 "add_foreign_enum.m"
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16)) == (MR_mktag((MR_Integer) 0)));
#line 384 "add_foreign_enum.m"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 384 "add_foreign_enum.m"
          {
#line 384 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, (MR_Integer) 0)));
#line 385 "add_foreign_enum.m"
            /* binary string simple lookup switch */
#line 385 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (MR_Integer) 0;
#line 385 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (MR_Integer) 3;
#line 385 "add_foreign_enum.m"
            do
#line 385 "add_foreign_enum.m"
              {
#line 385 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 = (((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 + hlds__make_hlds__add_pragma__add_foreign_enum__hi_1)) / (MR_Integer) 2);
#line 385 "add_foreign_enum.m"
                hlds__make_hlds__add_pragma__add_foreign_enum__result_3 = MR_strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__V_193_193, ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_3[0 + hlds__make_hlds__add_pragma__add_foreign_enum__mid_2]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_3_0__vct_3_f_0);
#line 385 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 == (MR_Integer) 0))
#line 385 "add_foreign_enum.m"
                  {
#line 385 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 385 "add_foreign_enum.m"
                    /* jump out of search loop */
#line 385 "add_foreign_enum.m"
                    goto label_0;
#line 385 "add_foreign_enum.m"
                  }
#line 385 "add_foreign_enum.m"
                else
#line 385 "add_foreign_enum.m"
                if ((hlds__make_hlds__add_pragma__add_foreign_enum__result_3 < (MR_Integer) 0))
#line 385 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__hi_1 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 - (MR_Integer) 1);
#line 385 "add_foreign_enum.m"
                else
#line 385 "add_foreign_enum.m"
                  hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 = (hlds__make_hlds__add_pragma__add_foreign_enum__mid_2 + (MR_Integer) 1);
#line 385 "add_foreign_enum.m"
              }
#line 385 "add_foreign_enum.m"
            while ((hlds__make_hlds__add_pragma__add_foreign_enum__lo_0 <= hlds__make_hlds__add_pragma__add_foreign_enum__hi_1));
#line 385 "add_foreign_enum.m"
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 385 "add_foreign_enum.m"
          label_0:;
#line 384 "add_foreign_enum.m"
          }
#line 383 "add_foreign_enum.m"
      }
#line 5187 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5189 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 5191 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58;
#line 5193 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59;
#line 5195 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60;
#line 5197 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88;
#line 5199 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159;
#line 5201 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160;
#line 5203 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161;
#line 5205 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164;

#line 391 "add_foreign_enum.m"
        {
#line 391 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 391 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[18])));
#line 391 "add_foreign_enum.m"
        }
#line 390 "add_foreign_enum.m"
        {
#line 390 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 390 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_88_88));
#line 390 "add_foreign_enum.m"
        }
#line 392 "add_foreign_enum.m"
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
        {
#line 518 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_58);
        }
#line 518 "add_foreign_enum.m"
        {
#line 518 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_161_161));
#line 518 "add_foreign_enum.m"
        }
#line 518 "add_foreign_enum.m"
        {
#line 518 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_160_160));
#line 518 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
        }
#line 518 "add_foreign_enum.m"
        {
#line 518 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_159_159));
#line 518 "add_foreign_enum.m"
        }
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_59));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
        }
#line 519 "add_foreign_enum.m"
        {
#line 519 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_164_164));
#line 519 "add_foreign_enum.m"
        }
#line 520 "add_foreign_enum.m"
        {
#line 520 "add_foreign_enum.m"
          MR_Word base;
#line 520 "add_foreign_enum.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_60));
#line 520 "add_foreign_enum.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
        }
#line 5299 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 5301 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
    else
#line 5303 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      {
#line 5305 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22;

#line 395 "add_foreign_enum.m"
        {
#line 395 "add_foreign_enum.m"
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22);
        }
#line 5313 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5315 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 5317 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23;

#line 397 "add_foreign_enum.m"
            {
#line 397 "add_foreign_enum.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23);
            }
#line 5325 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5326 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23)) {
#line 5328 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 5330 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 0:
#line 5332 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 5334 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146;
#line 5336 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195;
#line 5338 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196;
#line 5340 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197;
#line 5342 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199;
#line 5344 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200;
#line 5346 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201;
#line 5348 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;

#line 405 "add_foreign_enum.m"
                  {
#line 405 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 405 "add_foreign_enum.m"
                  }
#line 404 "add_foreign_enum.m"
                  {
#line 404 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146));
#line 404 "add_foreign_enum.m"
                  }
#line 403 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195);
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199));
#line 518 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 519 "add_foreign_enum.m"
                  }
#line 520 "add_foreign_enum.m"
                  {
#line 520 "add_foreign_enum.m"
                    MR_Word base;
#line 520 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197));
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                  }
#line 5442 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 5444 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 5446 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 1:
#line 5448 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 5450 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 0)));
#line 5452 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 1)));
#line 5454 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 2)));
#line 5456 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 3)));
#line 5458 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 4)));
#line 5460 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 5)));
#line 5462 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 5464 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 5466 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_23, (MR_Integer) 7)));
#line 5468 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38;
#line 5470 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39;
#line 5472 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40;

#line 414 "add_foreign_enum.m"
                  {
#line 414 "add_foreign_enum.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38);
                  }
#line 415 "add_foreign_enum.m"
                  {
#line 415 "add_foreign_enum.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Globals_38, &hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
#line 416 "add_foreign_enum.m"
                  {
#line 416 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_39);
                  }
#line 5490 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5491 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
#line 5493 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 5495 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 0:
#line 5497 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
#line 5498 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_32)) {
#line 5500 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 5502 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 0:
#line 5504 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 1:
#line 5506 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5508 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41;
#line 5510 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42;

#line 422 "add_foreign_enum.m"
                            {
#line 422 "add_foreign_enum.m"
                              hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
#line 426 "add_foreign_enum.m"
                            {
#line 426 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_41);
                            }
#line 433 "add_foreign_enum.m"
#line 433 "add_foreign_enum.m"
                            switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_42) {
#line 433 "add_foreign_enum.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 433 "add_foreign_enum.m"
                              case (MR_Integer) 0:
#line 434 "add_foreign_enum.m"
                                {
#line 434 "add_foreign_enum.m"
                                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125;

#line 435 "add_foreign_enum.m"
                                  {
#line 435 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125 = parse_tree__status__status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9);
                                  }
#line 435 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__V_125_125 == (MR_Integer) 1);
#line 434 "add_foreign_enum.m"
                                }
#line 433 "add_foreign_enum.m"
                                break;
#line 433 "add_foreign_enum.m"
                              case (MR_Integer) 1:
#line 429 "add_foreign_enum.m"
                                if ((hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 431 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 429 "add_foreign_enum.m"
                                else
#line 429 "add_foreign_enum.m"
                                if ((hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 430 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
#line 429 "add_foreign_enum.m"
                                else
#line 429 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
#line 433 "add_foreign_enum.m"
                                break;
#line 433 "add_foreign_enum.m"
                            }
#line 5566 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 5568 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              {
#line 5570 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43;
#line 5572 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44;
#line 5574 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 466 "add_foreign_enum.m"
                                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45;

#line 440 "add_foreign_enum.m"
                                {
#line 440 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "add_foreign_enum.m"
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 440 "add_foreign_enum.m"
                                }
#line 441 "add_foreign_enum.m"
                                {
#line 441 "add_foreign_enum.m"
                                  hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_15, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126);
                                }
#line 445 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 445 "add_foreign_enum.m"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 445 "add_foreign_enum.m"
                                  {
#line 446 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44)) == (MR_mktag((MR_Integer) 1)));
#line 446 "add_foreign_enum.m"
                                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 446 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_44, (MR_Integer) 0)));
#line 445 "add_foreign_enum.m"
                                  }
#line 466 "add_foreign_enum.m"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 450 "add_foreign_enum.m"
                                  {
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188;
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189;
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46;
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47;
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127;
#line 450 "add_foreign_enum.m"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128;
#line 448 "add_foreign_enum.m"
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46;
#line 448 "add_foreign_enum.m"
                                    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47;

#line 448 "add_foreign_enum.m"
                                    {
#line 448 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 448 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[0]));
#line 448 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
#line 448 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13));
#line 448 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_45));
#line 448 "add_foreign_enum.m"
                                    }
#line 5643 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 5645 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 449 "add_foreign_enum.m"
                                    {
#line 449 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189);
                                    }
#line 448 "add_foreign_enum.m"
                                    {
#line 448 "add_foreign_enum.m"
                                      mercury__map__foldl2_6_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_188_188, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_189_189, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], hlds__make_hlds__add_pragma__add_foreign_enum__V_127_127, hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_30, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_128_128)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
                                    }
#line 448 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_TagValues_46);
#line 448 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv2_UnmappedCtors_47);
#line 461 "add_foreign_enum.m"
                                    if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 452 "add_foreign_enum.m"
                                      {
#line 452 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48;
#line 452 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49;
#line 452 "add_foreign_enum.m"
                                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50;

#line 453 "add_foreign_enum.m"
                                        {
#line 453 "add_foreign_enum.m"
                                          hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_29));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_46));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_31));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_43));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_33));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_34));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 6) = ((MR_Box) ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_35 | ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_36 << (MR_Integer) 1)))));
#line 453 "add_foreign_enum.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_37));
#line 453 "add_foreign_enum.m"
                                        }
#line 457 "add_foreign_enum.m"
                                        {
#line 457 "add_foreign_enum.m"
                                          hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_48, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49);
                                        }
#line 458 "add_foreign_enum.m"
                                        {
#line 458 "add_foreign_enum.m"
                                          hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_14, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_49, hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_18, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50);
                                        }
#line 460 "add_foreign_enum.m"
                                        {
#line 460 "add_foreign_enum.m"
                                          hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_50, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62);
                                        }
#line 452 "add_foreign_enum.m"
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 452 "add_foreign_enum.m"
                                      }
#line 461 "add_foreign_enum.m"
                                    else
#line 462 "add_foreign_enum.m"
                                      {
#line 463 "add_foreign_enum.m"
                                        {
#line 463 "add_foreign_enum.m"
                                          hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_47, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
                                        }
#line 462 "add_foreign_enum.m"
                                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 462 "add_foreign_enum.m"
                                      }
#line 450 "add_foreign_enum.m"
                                  }
#line 466 "add_foreign_enum.m"
                                else
#line 469 "add_foreign_enum.m"
                                  {
#line 469 "add_foreign_enum.m"
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_126_126;
#line 469 "add_foreign_enum.m"
                                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 469 "add_foreign_enum.m"
                                  }
#line 5738 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              }
#line 5740 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            else
#line 5742 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              {
#line 478 "add_foreign_enum.m"
                                *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 473 "add_foreign_enum.m"
                                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 5748 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 475 "add_foreign_enum.m"
                                  {
#line 475 "add_foreign_enum.m"
                                    hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_16, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_17, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64);
#line 475 "add_foreign_enum.m"
                                    return;
                                  }
#line 5757 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                else
#line 5759 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                  {
#line 5761 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135;
#line 5763 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239;
#line 5765 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240;
#line 5767 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241;
#line 5769 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243;
#line 5771 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244;
#line 5773 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245;
#line 5775 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248;

#line 480 "add_foreign_enum.m"
                                    {
#line 480 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 480 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[51])));
#line 480 "add_foreign_enum.m"
                                    }
#line 479 "add_foreign_enum.m"
                                    {
#line 479 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 479 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_135_135));
#line 479 "add_foreign_enum.m"
                                    }
#line 518 "add_foreign_enum.m"
                                    {
#line 518 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_239);
                                    }
#line 518 "add_foreign_enum.m"
                                    {
#line 518 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_245_245));
#line 518 "add_foreign_enum.m"
                                    }
#line 518 "add_foreign_enum.m"
                                    {
#line 518 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_244_244));
#line 518 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                                    }
#line 518 "add_foreign_enum.m"
                                    {
#line 518 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_243_243));
#line 518 "add_foreign_enum.m"
                                    }
#line 519 "add_foreign_enum.m"
                                    {
#line 519 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_240));
#line 519 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                                    }
#line 519 "add_foreign_enum.m"
                                    {
#line 519 "add_foreign_enum.m"
                                      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_248_248));
#line 519 "add_foreign_enum.m"
                                    }
#line 520 "add_foreign_enum.m"
                                    {
#line 520 "add_foreign_enum.m"
                                      MR_Word base;
#line 520 "add_foreign_enum.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                                      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_241));
#line 520 "add_foreign_enum.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                                    }
#line 5867 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                                  }
#line 5869 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                              }
#line 5871 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 5873 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          break;
#line 5875 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        case (MR_Integer) 2:
#line 5877 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 5879 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 5881 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323;
#line 5883 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324;
#line 5885 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325;
#line 5887 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327;
#line 5889 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328;
#line 5891 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329;
#line 5893 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;

#line 503 "add_foreign_enum.m"
                            {
#line 503 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 503 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 503 "add_foreign_enum.m"
                            }
#line 502 "add_foreign_enum.m"
                            {
#line 502 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 502 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 502 "add_foreign_enum.m"
                            }
#line 501 "add_foreign_enum.m"
                            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323);
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329));
#line 518 "add_foreign_enum.m"
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327));
#line 518 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
#line 519 "add_foreign_enum.m"
                            }
#line 520 "add_foreign_enum.m"
                            {
#line 520 "add_foreign_enum.m"
                              MR_Word base;
#line 520 "add_foreign_enum.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                            }
#line 5987 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 5989 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          break;
#line 5991 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 5993 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 5995 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 1:
#line 5997 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 485 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 487 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_40 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_13);
#line 487 "add_foreign_enum.m"
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
#line 488 "add_foreign_enum.m"
                        if (!(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded))
#line 488 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ImportStatus_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 6009 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
#line 515 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 6013 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        else
#line 6015 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          {
#line 6017 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116;
#line 6019 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280;
#line 6021 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281;
#line 6023 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282;
#line 6025 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284;
#line 6027 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285;
#line 6029 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286;
#line 6031 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289;

#line 494 "add_foreign_enum.m"
                            {
#line 494 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 494 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[53])));
#line 494 "add_foreign_enum.m"
                            }
#line 493 "add_foreign_enum.m"
                            {
#line 493 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 493 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_116_116));
#line 493 "add_foreign_enum.m"
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_280);
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_286_286));
#line 518 "add_foreign_enum.m"
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_285_285));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                            }
#line 518 "add_foreign_enum.m"
                            {
#line 518 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_284_284));
#line 518 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_281));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                            }
#line 519 "add_foreign_enum.m"
                            {
#line 519 "add_foreign_enum.m"
                              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_289_289));
#line 519 "add_foreign_enum.m"
                            }
#line 520 "add_foreign_enum.m"
                            {
#line 520 "add_foreign_enum.m"
                              MR_Word base;
#line 520 "add_foreign_enum.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_282));
#line 520 "add_foreign_enum.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                            }
#line 6123 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                          }
#line 6125 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 6127 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 6129 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                    case (MR_Integer) 2:
#line 6131 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      {
#line 6133 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102;
#line 6135 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323;
#line 6137 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324;
#line 6139 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325;
#line 6141 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327;
#line 6143 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328;
#line 6145 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329;
#line 6147 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332;

#line 503 "add_foreign_enum.m"
                        {
#line 503 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 503 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 503 "add_foreign_enum.m"
                        }
#line 502 "add_foreign_enum.m"
                        {
#line 502 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 502 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_102_102));
#line 502 "add_foreign_enum.m"
                        }
#line 501 "add_foreign_enum.m"
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
                        {
#line 518 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_323);
                        }
#line 518 "add_foreign_enum.m"
                        {
#line 518 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_329_329));
#line 518 "add_foreign_enum.m"
                        }
#line 518 "add_foreign_enum.m"
                        {
#line 518 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_328_328));
#line 518 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                        }
#line 518 "add_foreign_enum.m"
                        {
#line 518 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_327_327));
#line 518 "add_foreign_enum.m"
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_324));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                        }
#line 519 "add_foreign_enum.m"
                        {
#line 519 "add_foreign_enum.m"
                          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_332_332));
#line 519 "add_foreign_enum.m"
                        }
#line 520 "add_foreign_enum.m"
                        {
#line 520 "add_foreign_enum.m"
                          MR_Word base;
#line 520 "add_foreign_enum.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_325));
#line 520 "add_foreign_enum.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                        }
#line 6241 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      }
#line 6243 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                      break;
#line 6245 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  }
#line 6247 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6249 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6251 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 2:
#line 6253 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 6255 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146;
#line 6257 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195;
#line 6259 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196;
#line 6261 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197;
#line 6263 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199;
#line 6265 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200;
#line 6267 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201;
#line 6269 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;

#line 405 "add_foreign_enum.m"
                  {
#line 405 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 405 "add_foreign_enum.m"
                  }
#line 404 "add_foreign_enum.m"
                  {
#line 404 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146));
#line 404 "add_foreign_enum.m"
                  }
#line 403 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195);
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199));
#line 518 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 519 "add_foreign_enum.m"
                  }
#line 520 "add_foreign_enum.m"
                  {
#line 520 "add_foreign_enum.m"
                    MR_Word base;
#line 520 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197));
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                  }
#line 6363 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6365 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6367 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
              case (MR_Integer) 3:
#line 6369 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                {
#line 6371 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146;
#line 6373 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195;
#line 6375 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196;
#line 6377 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197;
#line 6379 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199;
#line 6381 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200;
#line 6383 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201;
#line 6385 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204;

#line 405 "add_foreign_enum.m"
                  {
#line 405 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_74_74));
#line 405 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[19])));
#line 405 "add_foreign_enum.m"
                  }
#line 404 "add_foreign_enum.m"
                  {
#line 404 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[49])));
#line 404 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_146_146));
#line 404 "add_foreign_enum.m"
                  }
#line 403 "add_foreign_enum.m"
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__MaybeErrorPieces_195);
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_201_201));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_200_200));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 518 "add_foreign_enum.m"
                  }
#line 518 "add_foreign_enum.m"
                  {
#line 518 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
#line 518 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_199_199));
#line 518 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_196));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                  }
#line 519 "add_foreign_enum.m"
                  {
#line 519 "add_foreign_enum.m"
                    hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 519 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__V_204_204));
#line 519 "add_foreign_enum.m"
                  }
#line 520 "add_foreign_enum.m"
                  {
#line 520 "add_foreign_enum.m"
                    MR_Word base;
#line 520 "add_foreign_enum.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "add_foreign_enum.m"
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = base;
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_197));
#line 520 "add_foreign_enum.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63));
#line 520 "add_foreign_enum.m"
                  }
#line 6479 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                }
#line 6481 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
                break;
#line 6483 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
            }
#line 6485 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 6487 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
        else
#line 6489 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          {
#line 512 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_61;
#line 515 "add_foreign_enum.m"
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_63;
#line 6495 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
          }
#line 6497 "hlds.make_hlds.add_pragma.add_foreign_enum.c"
      }
#line 373 "add_foreign_enum.m"
  }
#line 22 "add_foreign_enum.m"
}

#line 18 "add_foreign_enum.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
#line 18 "add_foreign_enum.m"
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ImportStatus_9,
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
