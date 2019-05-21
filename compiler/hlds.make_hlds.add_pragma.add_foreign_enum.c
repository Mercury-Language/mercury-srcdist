/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "libs.dependency_graph.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_ptag_ordered_not_enum_info_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_name_ordered_not_enum_info_0[2];

static const MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__functor_number_map_not_enum_info_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__report_not_enum_type__846__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_53);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_34);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_110);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SymName_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_18,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_19,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_21);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_20,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_21,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_22,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_24);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_9);

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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors0_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_24,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_25);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_4,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Final_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_26,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_27);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_20);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_12);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_5,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_3,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_5);

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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_18);

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

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[73][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2][4];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[9][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[2][11];


/* sealed */ struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0_s {
  const MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_10[4];



static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[73][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign names does not form a bijection."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the user-specified mapping between Mercury and"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot be converted:"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not form a bijection."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury and foreign names"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the type:"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[15])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "foreign values does not form a bijection."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the mapping between Mercury enumeration values and"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is a builtin type."))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: not all the constructors of the type"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The following"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the following"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not match any of the constructors of"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: "))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "this pragma conflicts with"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the reserve_tag pragma on "))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not an enumeration type;"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "it is"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_export_enum"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not have a foreign value:"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: "))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not defined in this module."))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple foreign_enum pragmas."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[9][3] = {
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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "an abstract type"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "an equivalence type"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "a foreign type"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "a solver type"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_tag_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0_s hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_10[4] = {
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum____vpti_tuple_2__plain_parse_tree__error_util__type_ctor_info_error_severity_0__plain_list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_severity_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_foreign_enum__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_uses_reserved_tag_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_foreign_enum__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_0 = {
  (MR_String) "not_enum_du",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_1 = {
  (MR_String) "not_enum_non_du",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__field_types_not_enum_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_0[1] = {
  &hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_0
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_1[1] = {
  &hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_1
};

static const MR_DuPtagLayout hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_ptag_ordered_not_enum_info_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_stag_ordered_not_enum_info_0_1
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_name_ordered_not_enum_info_0[2] = {
  &hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_0,
  &hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_functor_desc_not_enum_info_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__functor_number_map_not_enum_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__type_ctor_info_not_enum_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum",
  (MR_String) "not_enum_info",
  {     hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_name_ordered_not_enum_info_0 },
  {     hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__du_ptag_ordered_not_enum_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__functor_number_map_not_enum_info_0
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__report_not_enum_type__846__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_53)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_12 == hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_53);

    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_106;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_106, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_104));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_106));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_105;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_70;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_70, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__1_68));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_70));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__LambdaHeadVar__2_69;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(
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

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_110)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_110)));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__CastX_17 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__CastY_18 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3;

    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__CastX_17 == hlds__make_hlds__add_pragma__add_foreign_enum__CastY_18);
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      *hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_8;
            MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__Var_25 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__Var_23;
            MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__Var_26 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__make_hlds__add_pragma__add_foreign_enum__Var_8, hlds__make_hlds__add_pragma__add_foreign_enum__Var_25, hlds__make_hlds__add_pragma__add_foreign_enum__Var_26);
            }
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__Var_8 == (MR_Integer) 0);
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
              *hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_foreign_enum__Var_8;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2], hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_22)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ArgY2_7)));
                }
              }
          }
        else
          *hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, hlds__make_hlds__add_pragma__add_foreign_enum__Var_24, hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_16);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__CastX_9 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1;
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__CastY_10 = (MR_Integer) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;

    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__CastX_9 == hlds__make_hlds__add_pragma__add_foreign_enum__CastY_10);
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_11_11;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_4;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ArgY2_6;

        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_foreign_enum__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 1)));
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__ArgX1_3 == hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_4);
            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_11_11, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ArgX2_5)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ArgY2_6)));
                }
              }
          }
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, (MR_Integer) 0)));
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_8;

        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (strcmp(hlds__make_hlds__add_pragma__add_foreign_enum__ArgX1_7, hlds__make_hlds__add_pragma__add_foreign_enum__ArgY1_8) == 0);
          }
      }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_3)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_3));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Severity_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_15;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_16;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_20;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_9);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_16, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_17));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_16));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_15));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_20, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Severity_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SymName_3)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_4;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_4, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__SymName_3));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_4));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_18,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_19,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_21)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_15;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_15;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_11, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_12)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_15);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_15 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_ForeignTagValue_15);
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignLanguage_10));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValue_15));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_12));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_9));
        }
        {
          mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_17)), ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_16)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_18, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_19);
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_21 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_20;
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_21 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnmappedCtors_0_20));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_19 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ConsTagValues_0_18;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_20,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_21,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_22,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_24)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 0)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 1)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_16;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14, (MR_Integer) 0)));

        hlds__make_hlds__add_pragma__add_foreign_enum__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14, (MR_Integer) 1)));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorModuleName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_10);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_10));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_16));
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_22 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_21;
          }
        else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_21));
            }
            hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17 = hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14;
          }
      }
    else
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14, (MR_Integer) 0)));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_10));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_16));
        }
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_22 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_BadCtors_0_21;
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_9, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_16)));
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_0_23;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName0_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_UnknownCtors_0_23));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NamesAndTags_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTag_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_9)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 2)));
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Name_7;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Constructor_4, (MR_Integer) 5)));

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorSymName_6);
    }
    {
      mercury__set_tree234__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Name_7)), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_0_8, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_CtorNameSet_9);
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
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 3)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Ctor_16, (MR_Integer) 5)));
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
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_44;

          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_44, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignName_28));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_44);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "foreign_export_enum for Erlang");
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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv6_STATE_VARIABLE_Specs_14;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Tuple) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv6_STATE_VARIABLE_Specs_14);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv6_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv3_STATE_VARIABLE_ConsTagValues_19;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_UnmappedCtors_21;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_STATE_VARIABLE_ConsTagValues_19, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_UnmappedCtors_21);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv3_STATE_VARIABLE_ConsTagValues_19));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_UnmappedCtors_21));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_CtorNameSet_9;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_CtorNameSet_9);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_CtorNameSet_9));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_21;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_68;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_71;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_74;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_75;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_76;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_137_137;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_76, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_76));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_74, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_75));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_74));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_71));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_68));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_21);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_21, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22);
    }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_23;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_24;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100;

        {
          hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_23);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_24 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeStatus_23);
        }
        switch (hlds__make_hlds__add_pragma__add_foreign_enum__IsTypeLocal_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_86;

              {
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_86 = hlds__status__type_status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9);
              }
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__Var_86 == (MR_Integer) 1);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_167 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

              if ((hlds__make_hlds__add_pragma__add_foreign_enum__Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
              else
              if ((hlds__make_hlds__add_pragma__add_foreign_enum__Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_TRUE;
              else
                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = MR_FALSE;
            }
            break;
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
            hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_89 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__Var_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
              {
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90);
                }
                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
              }
            else
              {
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NotThisModuleErrorPieces_25;
                MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_93;
                MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_101;

                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_75));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[70])));
                }
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__NotThisModuleErrorPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__NotThisModuleErrorPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__NotThisModuleErrorPieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_93));
                }
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__Var_101 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_101, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NotThisModuleErrorPieces_25));
                }
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_101));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85));
                }
                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84;
              }
          }
        {
          hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26);
        }
        switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[3]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
              }
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_138_138;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_139_139;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 4)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 5)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 7)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__EnumSymNames_41;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Globals_43;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_44;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_45;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_51;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_52;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_53;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_104;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_127;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_128_128;
              MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_CtorNameSet_52;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_54;

              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_38, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103);
              }
              hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
              hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_139_139 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_104 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_138_138, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_139_139, hlds__make_hlds__add_pragma__add_foreign_enum__OldTagValues_33);
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_104, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum__EnumSymNames_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42);
              }
              {
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64, &hlds__make_hlds__add_pragma__add_foreign_enum__Globals_43);
              }
              {
                libs__globals__get_target_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Globals_43, &hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_44);
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_45 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TargetLanguage_44);
              }
              switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_35)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind0_35)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_107;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[3]));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          mercury__require__expect_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_107, (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_pragma_foreign_enum\'/7", (MR_String) "direct_dummy or mercury_enum with non-enum cons_id(s)");
                        }
                        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_124;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_38));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_45 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14);
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = !(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded);
                    if (!(hlds__make_hlds__add_pragma__add_foreign_enum__succeeded))
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_111 = (MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__PragmaStatus_9;

                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__Var_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
                    else
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MultiplePragmasErrorPieces_50;
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_114;
                        MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_122;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_114, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_75));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[72])));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__MultiplePragmasErrorPieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MultiplePragmasErrorPieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MultiplePragmasErrorPieces_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_114));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Var_122 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_122, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MultiplePragmasErrorPieces_50));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_122));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103));
                        }
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_124;

                    {
                      hlds__make_hlds__add_pragma__add_foreign_enum__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_38));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_42));
                    }
                    {
                      hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, hlds__make_hlds__add_pragma__add_foreign_enum__Var_124, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_103_103, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                    }
                  }
                  break;
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_127 = mercury__set_tree234__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
              }
              {
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[8], hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_32, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_127)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_CtorNameSet_52);
              }
              hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_52 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_CtorNameSet_52);
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_52, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_16, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_53, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_128_128);
              }
              hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__LangForForeignEnums_45 == hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14);
              if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_53)) == (MR_mktag((MR_Integer) 1)));
                  if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                    hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_53, (MR_Integer) 0)));
                }
              if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_55;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_56;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_129;
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_130;
                  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv5_TagValues_55;
                  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_UnmappedCtors_56;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[1]));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_54));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__Var_130 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_138_138, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_139_139);
                  }
                  {
                    mercury__list__foldl2_6_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__Var_129, hlds__make_hlds__add_pragma__add_foreign_enum__EnumSymNames_41, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_130)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_TagValues_55, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_UnmappedCtors_56);
                  }
                  hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_55 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv5_TagValues_55);
                  hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_56 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv4_UnmappedCtors_56);
                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_128_128;
                  else
                    {
                      hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19, hlds__make_hlds__add_pragma__add_foreign_enum__UnmappedCtors_56, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_128_128, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132);
                    }
                  hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_60;
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_61;

                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_32));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_55));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CheaperTagTest_34));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_51));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeUserEq_36));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MaybeDirectArgCtors_37));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 6) = ((MR_Box) ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_38 | ((hlds__make_hlds__add_pragma__add_foreign_enum__ReservedAddr_39 << (MR_Integer) 1)))));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsForeignType_40));
                      }
                      {
                        hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_59, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn0_22, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_60);
                      }
                      {
                        hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_60, hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable0_21, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_61);
                      }
                      {
                        hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_61, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65);
                      }
                    }
                  else
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
                }
              else
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_128_128;
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[2]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
              }
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody0_26, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[4]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_17, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_90_90;
                }
                break;
            }
            break;
        }
      }
    else
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_84_84;
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_65 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_64;
      }
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_137_137 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132;
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_136;
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_STATE_VARIABLE_Specs_137_137;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_19));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1], hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_135_135, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_132_132)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv7_STATE_VARIABLE_Specs_137_137);
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_137_137 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_STATE_VARIABLE_Specs_137_137);
      }
    {
      *hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_137_137, hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12);
    }
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
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_17;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_23;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_24;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_25;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_32;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_33;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_37;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_8));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_25));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_24));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[39])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_23));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_20));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_17));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_10));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_33));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_32));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_37, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors0_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_24,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_25)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_102_102 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorsStart_11;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorsEnd_12;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_13;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__PrefixPieces_14;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_22;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_29;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_32;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_33;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_93;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_94;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_95;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_99;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_DoOrDoes_13;

    {
      mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors0_8, &hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10);
    }
    {
      mercury__list__split_upto_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_102_102, (MR_Integer) 10, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10, &hlds__make_hlds__add_pragma__add_foreign_enum__CtorsStart_11, &hlds__make_hlds__add_pragma__add_foreign_enum__CtorsEnd_12);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_DoOrDoes_13 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_102_102, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_13 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_DoOrDoes_13);
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__DoOrDoes_13));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_33));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[60])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_29, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_32));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__PrefixPieces_14 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, hlds__make_hlds__add_pragma__add_foreign_enum__Var_29);
    }
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__CtorsEnd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorsPieces_15;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_83;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_84;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_84 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_83 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__Var_84, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[64]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorsPieces_15 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[62]), hlds__make_hlds__add_pragma__add_foreign_enum__Var_83);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorsPieces_15));
        }
      }
    else
      {
        MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__NumEndCtors_19;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonVerboseCtorsPieces_20;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__VerboseCtorsPieces_21;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_38;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_42;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_43;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_51;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_54;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_57;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_58;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_69;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_70;

        {
          mercury__list__length_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_102_102, hlds__make_hlds__add_pragma__add_foreign_enum__CtorsEnd_12, &hlds__make_hlds__add_pragma__add_foreign_enum__NumEndCtors_19);
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[62]);
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_43 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__CtorsStart_11, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[28]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NumEndCtors_19));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_57, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_58));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[30])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[65])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_57));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[63])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_54));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_42 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__Var_43, hlds__make_hlds__add_pragma__add_foreign_enum__Var_51);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__NonVerboseCtorsPieces_20 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__Var_38, hlds__make_hlds__add_pragma__add_foreign_enum__Var_42);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_70 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_69 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__Var_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[64]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__VerboseCtorsPieces_21 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_104_104, hlds__make_hlds__add_pragma__add_foreign_enum__Var_38, hlds__make_hlds__add_pragma__add_foreign_enum__Var_69);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__VerboseCtorsPieces_21));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonVerboseCtorsPieces_20));
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_94, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__PrefixPieces_14));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_95, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorsComponent_16));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_94));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_95));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_22, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_93));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_24));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_4,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Final_5)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Pieces_6;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Components_7;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Components_7 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[7], hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_4);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Pieces_6 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Components_7, hlds__make_hlds__add_pragma__add_foreign_enum__Final_5);
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__Pieces_6;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2 = ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_10[0 + hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0__vct_10_f_0;

    return hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_NamesAndTags_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_BadCtors_22;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnknownCtors_24;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_NamesAndTags_20, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_BadCtors_22, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_5), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnknownCtors_24);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv2_STATE_VARIABLE_NamesAndTags_20));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_BadCtors_22));
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_UnknownCtors_24));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_9,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_11,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_12,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_13,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_14,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_26,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_27)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_42_42;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_43_43;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_16;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_19;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__UnknownCtors_21;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_31;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_BadCtors_20;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_UnknownCtors_21;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_12)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_17;

        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_12, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_12, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/8", (MR_String) "unqualified type name while processing foreign tags.");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__CtorNameSet_11));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleName_16));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_42_42 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[2];
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_43_43 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4];
    {
      mercury__list__map_foldl2_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_42_42, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_42_42, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_43_43, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_43_43, hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues0_13, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_BadCtors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_UnknownCtors_21);
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_20 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv4_BadCtors_20);
    hlds__make_hlds__add_pragma__add_foreign_enum__UnknownCtors_21 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv3_UnknownCtors_21);
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__UnknownCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_26;
    else
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Context_9, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, hlds__make_hlds__add_pragma__add_foreign_enum__UnknownCtors_21, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_26, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34);
      }
    hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__UnknownCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_24;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues1_19, &hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_24);
        }
        if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_25;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_25 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagValues_24);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ForeignTagMap_25));
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_54;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_67;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_68;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_69;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_73;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[37]));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_69));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_68));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Msg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_67));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_54));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_73));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_55));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34));
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    else
      {
        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeForeignTagMap_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_34_34;
      }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv1_HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv1_HeadVar__2_2));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_46_46;
    MR_String hlds__make_hlds__add_pragma__add_foreign_enum__IsOrAre_10;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Msg_12;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_18;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_21;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_22;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_30;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_35;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_36;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_37;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_41;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Components_50;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv0_IsOrAre_10;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_IsOrAre_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_8, ((MR_Box) ((MR_String) "symbol is not a constructor")), ((MR_Box) ((MR_String) "symbols are not constructors")));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__IsOrAre_10 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv0_IsOrAre_10);
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__IsOrAre_10));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_22));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[32])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_18, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_21));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Components_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[6], hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_8);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_30 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Components_50, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_46_46, hlds__make_hlds__add_pragma__add_foreign_enum__Var_18, hlds__make_hlds__add_pragma__add_foreign_enum__Var_30);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_37 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_46_46, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_7, hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_37));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_36));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_35));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_0_14));
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
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58, hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12, hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_Specs_14;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))), ((MR_Tuple) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_Specs_14);
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_STATE_VARIABLE_Specs_14));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__FEEInfo_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_22;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_61;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_64;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_67;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_68;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_69;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_91_91;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_69, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_69));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_68));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_67));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_64));
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_61));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_22);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeTable_22, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15, &hlds__make_hlds__add_pragma__add_foreign_enum__TypeDefn_23);
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
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[3]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
              }
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_40;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_45;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_46;
              MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_47;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_48;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_80;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_85_85;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___CheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 4)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___MaybeDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 5)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___ReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___IsForeignType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 7)));
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum___EnumSymNames_39;

              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_36, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79);
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_80 = mercury__map__keys_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_31);
              }
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum___EnumSymNames_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_40);
              }
              switch (MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(hlds__make_hlds__add_pragma__add_foreign_enum__DuTypeKind_33)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                      break;
                    case (MR_Integer) 1:
                      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_83;

                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_36));
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_40));
                        }
                        {
                          hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_83;

                    {
                      hlds__make_hlds__add_pragma__add_foreign_enum__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_36));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_40));
                    }
                    {
                      hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, hlds__make_hlds__add_pragma__add_foreign_enum__Var_83, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_79_79, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                    }
                  }
                  break;
              }
              hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_16, (MR_Integer) 0)));
              hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Attributes_16, (MR_Integer) 1)));
              if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_47 = (MR_String) "";
              else
                hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_47 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybePrefix_45, (MR_Integer) 0)));
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_17, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_48, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_85_85);
              }
              if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_85_85;
                }
              else
                {
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_48, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_50;

                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20, hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14, hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, hlds__make_hlds__add_pragma__add_foreign_enum__Context_10, hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_47, hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_46, hlds__make_hlds__add_pragma__add_foreign_enum__OverridesMap_49, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30, &hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_50, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_85_85, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86);
                  }
                  if ((hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  else
                    {
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__MaybeMapping_50, (MR_Integer) 0)));
                      MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52;

                      {
                        hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtor_15));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Mapping_51));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_30));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TagValues_31));
                      }
                      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
                        {
                          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_53;
                          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_54;

                          {
                            hlds__hlds_module__module_info_get_exported_enums_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_53);
                          }
                          {
                            hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_54, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnum_52));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums0_53));
                          }
                          {
                            hlds__hlds_module__module_info_set_exported_enums_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__ExportedEnums_54, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58);
                          }
                        }
                      else
                        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[2]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
              }
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__TypeBody_24, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[4]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_18, hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1]), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                  }
                  *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
                }
                break;
            }
            break;
        }
      }
    else
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_78_78;
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_77_77;
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ModuleInfo_0_57;
      }
    if ((hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_91_91 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86;
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_90;
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_Specs_91_91;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_10));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_20));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1], hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_89_89, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_86_86)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_Specs_91_91);
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_91_91 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_STATE_VARIABLE_Specs_91_91);
      }
    {
      *hlds__make_hlds__add_pragma__add_foreign_enum__Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_Specs_91_91, hlds__make_hlds__add_pragma__add_foreign_enum__Specs0_12);
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__2_2));
    return hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__report_not_enum_type__846__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_20)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__SortedNonEnumConsIds_14;

        {
          mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_79_79, hlds__make_hlds__add_pragma__add_foreign_enum__NonEnumConsIds_13, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedNonEnumConsIds_14);
        }
        if ((hlds__make_hlds__add_pragma__add_foreign_enum__SortedNonEnumConsIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_50;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_12));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, 4) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              mercury__require__expect_3_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_50, (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.report_not_enum_type\'/5", (MR_String) "no non-enum cons_ids, but no reserved tag");
            }
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_20 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_19;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_81_81 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsIdPieces_17;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ItHasThese_18;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_21;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_27;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_30;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_31;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_32;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_33;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_36;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_40;
            MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_48;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_76;
            MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv1_ItHasThese_18;

            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_21 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_79_79, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_81_81, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[5], hlds__make_hlds__add_pragma__add_foreign_enum__SortedNonEnumConsIds_14);
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__ConsIdPieces_17 = parse_tree__error_util__component_list_to_pieces_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__Var_21);
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__conv1_ItHasThese_18 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_79_79, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_81_81, hlds__make_hlds__add_pragma__add_foreign_enum__SortedNonEnumConsIds_14, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[49]))), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[50]))));
            }
            hlds__make_hlds__add_pragma__add_foreign_enum__ItHasThese_18 = ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__conv1_ItHasThese_18);
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_32, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_32));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ItHasThese_18));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[51])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_36));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_31));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_30, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_33));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_30));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_40 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_81_81, hlds__make_hlds__add_pragma__add_foreign_enum__ConsIdPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19]));
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_76 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_81_81, hlds__make_hlds__add_pragma__add_foreign_enum__Var_27, hlds__make_hlds__add_pragma__add_foreign_enum__Var_40);
            }
            {
              hlds__make_hlds__add_pragma__add_foreign_enum__Var_48 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_76));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_48));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
            }
          }
      }
    else
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__TypeKind_10 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__NotEnumInfo_8, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_56;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_57;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_58;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_59;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_62;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_65;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_66;
        MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_74;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_58));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeKind_10));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_66));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_65));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[52])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_62));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_57));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_59));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_56));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_74 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_74, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ErrorPieces_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_74));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_8,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_11,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_12)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    switch (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTag_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_12 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_11;
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTagErrorPieces_10;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_15;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_18;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_21;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_22;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_23;
          MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_31;

          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_6));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_7));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_23));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_21, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_22));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19])));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[48])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_18, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_21));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[47])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_18));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTagErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTagErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTagErrorPieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_15));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ReservedTagErrorPieces_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_11));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_5,
  MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_6,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_10)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_6 == (MR_Integer) 0);

    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_5);
      }
    if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
      {
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__BuiltinErrorPieces_8;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_13;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_14;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_15;
        MR_Tuple hlds__make_hlds__add_pragma__add_foreign_enum__Var_23;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_5));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_6));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_14, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_15));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_14));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[41])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__BuiltinErrorPieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BuiltinErrorPieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BuiltinErrorPieces_8, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_13));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BuiltinErrorPieces_8));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_9));
        }
      }
    else
      *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_10 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_ErrorSeveritiesPieces_0_9;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_3,
  MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

        if ((hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_5 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4;
            *hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_3 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2;
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_16;
            MR_Integer hlds__make_hlds__add_pragma__add_foreign_enum__Var_22;
            MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_17;

            hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12, (MR_Integer) 1)));
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12, (MR_Integer) 2)));
                hlds__make_hlds__add_pragma__add_foreign_enum__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12, (MR_Integer) 3)));
                hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = (hlds__make_hlds__add_pragma__add_foreign_enum__Var_22 == (MR_Integer) 0);
              }
            if (hlds__make_hlds__add_pragma__add_foreign_enum__succeeded)
              {
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsSymName_16));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2));
                }
                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4;
              }
            else
              {
                {
                  hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__ConsId_12));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4));
                }
                hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_pragma__add_foreign_enum__ConsIds_13;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_STATE_VARIABLE_EnumSymNames_0_2 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_23_23;
              MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4 = hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_24_24;

              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_NonEnumConsIds_0_4 = hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4;
              hlds__make_hlds__add_pragma__add_foreign_enum__STATE_VARIABLE_EnumSymNames_0_2 = hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_STATE_VARIABLE_EnumSymNames_0_2;
              hlds__make_hlds__add_pragma__add_foreign_enum__HeadVar__1_1 = hlds__make_hlds__add_pragma__add_foreign_enum__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
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
      hlds__make_hlds__add_pragma__add_foreign_enum__conv8_LambdaHeadVar__2_105 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
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
      hlds__make_hlds__add_pragma__add_foreign_enum__conv6_LambdaHeadVar__2_69 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
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
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_51;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_52;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_25;

        hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "unqualified type name for foreign_export_enum");
          return;
        }
      }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Lang_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Prefix_18));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__MakeUpperCase_19));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeModuleQual_24));
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__Var_52 = mercury__map__init_0_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154);
    }
    hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[1];
    {
      mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, hlds__make_hlds__add_pragma__add_foreign_enum__TypeInfo_156_156, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, hlds__make_hlds__add_pragma__add_foreign_enum__Ctors_21, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Overrides0_20)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv5_Overrides_27, ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_52)), &hlds__make_hlds__add_pragma__add_foreign_enum__conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__add_pragma__add_foreign_enum__conv3_BadCtors_29);
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
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_59;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_60;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_61;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_62;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_63;
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_64;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_75;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_78;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_79;
          MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_80;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_90;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_91;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_92;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_93;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_94;
          MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_99;
          MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv7_Var_80;

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
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_61));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", hlds__make_hlds__add_pragma__add_foreign_enum__What_32);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_63, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_64));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_62, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_63));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_60));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_62));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[42])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_59));
          }
          {
            mercury__list__sort_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, &hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[3], hlds__make_hlds__add_pragma__add_foreign_enum__SortedBadCtors_34);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorComponents_35, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5]));
          }
          hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__conv7_Var_80 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
          }
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_80 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv7_Var_80);
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_79, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_80));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_78, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_79));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[17])));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[43])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_75, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_78));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__Var_75, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsList_37);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_92 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_159_159, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsErrorPieces_33);
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_91, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_92));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__Var_94, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_foreign_enum__Var_94, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsVerboseErrorPieces_38));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_94));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_91));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_93));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_90));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_99, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsMsg_39));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__BadCtorsSpec_40, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_99));
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
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_108;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_111;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_112;
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_113;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_116;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_119;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_120;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_121;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_128;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_135;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_136;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_137;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_141;
        MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__conv9_Var_113;

        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41 = mercury__map__keys_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__Overrides_27);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42 = mercury__list__map_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[4], hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41);
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__conv9_Var_113 = parse_tree__error_util__choose_number_3_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_153_153, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_154_154, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamings_41, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
        }
        hlds__make_hlds__add_pragma__add_foreign_enum__Var_113 = ((MR_String) hlds__make_hlds__add_pragma__add_foreign_enum__conv9_Var_113);
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_112, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_113));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_121, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__TypeArity_16));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_foreign_enum__Var_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_121));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_119, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_120));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_116, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_119));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_111, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_112));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_116));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_108, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_111));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_128 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSymNamePieces_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__Var_108, hlds__make_hlds__add_pragma__add_foreign_enum__Var_128);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_137 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_161_161, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_13, hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingPieces_43);
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_136, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_137));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_135, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_136));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_135));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_141, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingMsg_44));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__InvalidRenamingSpec_45, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_141));
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
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_13;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NameMap_9);
    }
    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = mercury__bimap__from_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_foreign_enum__TypeCtorInfo_40_40, hlds__make_hlds__add_pragma__add_foreign_enum__NamesAndForeignNames_12, &hlds__make_hlds__add_pragma__add_foreign_enum__Var_13);
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
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_30;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_31;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_32;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_36;

        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[25]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_32));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_30, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_31));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_7));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_30));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_15));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_36));
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
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__closure = hlds__make_hlds__add_pragma__add_foreign_enum__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_35;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__conv0_LambdaHeadVar__2_35 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1));
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
        MR_String hlds__make_hlds__add_pragma__add_foreign_enum__Var_15;

        hlds__make_hlds__add_pragma__add_foreign_enum__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 0)));
        hlds__make_hlds__add_pragma__add_foreign_enum__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__TypeName_8, (MR_Integer) 1)));
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
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_45;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_46;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_47;
        MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__Var_51;

        *hlds__make_hlds__add_pragma__add_foreign_enum__MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__add_pragma__add_foreign_enum__ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[13]));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Var_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_47));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_45, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_46));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Context_9));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_45));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Msg_27));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_foreign_enum__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_foreign_enum__Spec_28, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__Var_51));
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

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum__succeeded = hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2));
    }
    return hlds__make_hlds__add_pragma__add_foreign_enum__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2,
  MR_Box hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(&hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_2), ((MR_Word) hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_3));
    }
    *hlds__make_hlds__add_pragma__add_foreign_enum__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_pragma__add_foreign_enum__hlds__make_hlds__add_pragma__add_foreign_enum__type_ctor_info_not_enum_info_0);
}

void mercury__hlds__make_hlds__add_pragma__add_foreign_enum__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma__add_foreign_enum__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.add_pragma.add_foreign_enum. */
