/*
** Automatically generated from `add_foreign_enum.m'
** by the Mercury compiler,
** version rotd-2017-12-31
** configured for x86_64-pc-linux-gnu.
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


// :- module hlds.make_hlds.add_pragma.add_foreign_enum.
// :- implementation.

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
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
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
  MR_Word ReservedTag_12,
  MR_Word HeadVar__2_54);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(
  MR_Word LambdaHeadVar__1_104);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(
  MR_Word LambdaHeadVar__1_68);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(
  MR_Word ModuleName_14,
  MR_Word LambdaHeadVar__1_34);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(
  MR_Word NonEnumConsIds_42,
  MR_Word HeadVar__2_110);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word ConsId_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Tuple HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word ForeignLanguage_10,
  MR_Word ForeignTagMap_11,
  MR_Word ConsSymName_12,
  MR_Word STATE_VARIABLE_ConsTagValues_0_18,
  MR_Word * STATE_VARIABLE_ConsTagValues_19,
  MR_Word STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * STATE_VARIABLE_UnmappedCtors_21);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word CtorNameSet_9,
  MR_Word TypeModuleName_10,
  MR_Word STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * STATE_VARIABLE_NamesAndTags_20,
  MR_Word STATE_VARIABLE_BadCtors_0_21,
  MR_Word * STATE_VARIABLE_BadCtors_22,
  MR_Word STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * STATE_VARIABLE_UnknownCtors_24);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word Constructor_4,
  MR_Word STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * STATE_VARIABLE_CtorNameSet_9);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
  MR_Word Lang_12,
  MR_String Prefix_13,
  MR_Word MakeUpperCase_14,
  MR_Word _TypeModQual_15,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_Overrides_0_30,
  MR_Word * STATE_VARIABLE_Overrides_31,
  MR_Word STATE_VARIABLE_NameMap_0_32,
  MR_Word * STATE_VARIABLE_NameMap_33,
  MR_Word STATE_VARIABLE_BadCtors_0_34,
  MR_Word * STATE_VARIABLE_BadCtors_35);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
  MR_Word Lang_12,
  MR_String Prefix_13,
  MR_Word MakeUpperCase_14,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_Overrides_0_30,
  MR_Word * STATE_VARIABLE_Overrides_31,
  MR_Word STATE_VARIABLE_NameMap_0_32,
  MR_Word * STATE_VARIABLE_NameMap_33,
  MR_Word STATE_VARIABLE_BadCtors_0_34,
  MR_Word * STATE_VARIABLE_BadCtors_35);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word Context_6,
  MR_Word TypeName_7,
  MR_Integer TypeArity_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word Ctors_4,
  MR_Word Final_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word CtorNameSet_11,
  MR_Word TypeName_12,
  MR_Word ForeignTagValues0_13,
  MR_Word * MaybeForeignTagMap_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word TypeName_6,
  MR_Integer TypeArity_7,
  MR_Word NotEnumInfo_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_20);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(
  MR_Word TypeName_6,
  MR_Integer TypeArity_7,
  MR_Word ReservedTag_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_11,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_12);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word TypeName_5,
  MR_Integer TypeArity_6,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * STATE_VARIABLE_EnumSymNames_3,
  MR_Word STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * STATE_VARIABLE_NonEnumConsIds_5);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
  MR_Word ContextPieces_13,
  MR_Word Lang_14,
  MR_Word TypeName_15,
  MR_Integer TypeArity_16,
  MR_Word Context_17,
  MR_String Prefix_18,
  MR_Word MakeUpperCase_19,
  MR_Word Overrides0_20,
  MR_Word Ctors_21,
  MR_Word * MaybeMapping_22,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word NameMap_9,
  MR_Word * MaybeNameMap_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
  MR_Word TypeName_8,
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word OverridesList0_11,
  MR_Word * MaybeOverridesMap_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_Word ReservedTag_12,
  MR_Word HeadVar__2_54)
{
  {
    MR_bool succeeded = (ReservedTag_12 == HeadVar__2_54);

    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(
  MR_Word LambdaHeadVar__1_104)
{
  {
    MR_Word LambdaHeadVar__2_105;
    MR_Word Var_106;

    {
      Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (LambdaHeadVar__1_104));
    }
    {
      LambdaHeadVar__2_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return LambdaHeadVar__2_105;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(
  MR_Word LambdaHeadVar__1_68)
{
  {
    MR_Word LambdaHeadVar__2_69;
    MR_Word Var_70;

    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (LambdaHeadVar__1_68));
    }
    {
      LambdaHeadVar__2_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), LambdaHeadVar__2_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return LambdaHeadVar__2_69;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(
  MR_Word ModuleName_14,
  MR_Word LambdaHeadVar__1_34)
{
  {
    MR_bool succeeded;
    MR_Word LambdaHeadVar__2_35;

    if (((MR_tag((MR_Word) LambdaHeadVar__1_34)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ModuleQualifier_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), LambdaHeadVar__1_34, (MR_Integer) 0)));
      MR_String UnqualName_21 = ((MR_String) (MR_hl_field(MR_mktag(1), LambdaHeadVar__1_34, (MR_Integer) 1)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleQualifier_20, ModuleName_14);
      if (succeeded)
        {
          LambdaHeadVar__2_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), LambdaHeadVar__2_35, 0) = ((MR_Box) (UnqualName_21));
        }
      else
        LambdaHeadVar__2_35 = LambdaHeadVar__1_34;
    }
    else
      LambdaHeadVar__2_35 = LambdaHeadVar__1_34;
    return LambdaHeadVar__2_35;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(
  MR_Word NonEnumConsIds_42,
  MR_Word HeadVar__2_110)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2], ((MR_Box) (NonEnumConsIds_42)), ((MR_Box) (HeadVar__2_110)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word Var_8;
        MR_Integer Var_25 = (MR_Integer) Var_23;
        MR_Integer Var_26 = (MR_Integer) ArgY1_5;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, Var_25, Var_26);
        succeeded = (Var_8 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_8;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (Var_22)), ((MR_Box) (ArgY2_7)));
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_String Var_24 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_24, ArgY1_16);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeInfo_11_11;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          TypeInfo_11_11 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[2];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        }
      }
    }
    else
    {
      MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(
  MR_Word ConsId_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (ConsId_3));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Tuple HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Severity_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word ErrorPieces_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;

    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_7, ErrorPieces_9);
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (Severity_8));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(
  MR_Word SymName_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Var_4, 1) = ((MR_Box) (SymName_3));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word ForeignLanguage_10,
  MR_Word ForeignTagMap_11,
  MR_Word ConsSymName_12,
  MR_Word STATE_VARIABLE_ConsTagValues_0_18,
  MR_Word * STATE_VARIABLE_ConsTagValues_19,
  MR_Word STATE_VARIABLE_UnmappedCtors_0_20,
  MR_Word * STATE_VARIABLE_UnmappedCtors_21)
{
  {
    MR_bool succeeded;
    MR_String ForeignTagValue_15;
    MR_Box conv0_ForeignTagValue_15;

    succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagMap_11, ((MR_Box) (ConsSymName_12)), &conv0_ForeignTagValue_15);
    if (succeeded)
    {
      ForeignTagValue_15 = ((MR_String) conv0_ForeignTagValue_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ForeignTag_16;
      MR_Word ConsId_17;

      {
        ForeignTag_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 1) = ((MR_Box) (ForeignLanguage_10));
        MR_hl_field(MR_mktag(3), ForeignTag_16, 2) = ((MR_Box) (ForeignTagValue_15));
      }
      {
        ConsId_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), ConsId_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), ConsId_17, 1) = ((MR_Box) (ConsSymName_12));
        MR_hl_field(MR_mktag(3), ConsId_17, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), ConsId_17, 3) = ((MR_Box) (TypeCtor_9));
      }
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ((MR_Box) (ConsId_17)), ((MR_Box) (ForeignTag_16)), STATE_VARIABLE_ConsTagValues_0_18, STATE_VARIABLE_ConsTagValues_19);
      *STATE_VARIABLE_UnmappedCtors_21 = STATE_VARIABLE_UnmappedCtors_0_20;
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UnmappedCtors_21 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsSymName_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnmappedCtors_0_20));
      }
      *STATE_VARIABLE_ConsTagValues_19 = STATE_VARIABLE_ConsTagValues_0_18;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(
  MR_Word CtorNameSet_9,
  MR_Word TypeModuleName_10,
  MR_Word STATE_VARIABLE_NamesAndTags_0_19,
  MR_Word * STATE_VARIABLE_NamesAndTags_20,
  MR_Word STATE_VARIABLE_BadCtors_0_21,
  MR_Word * STATE_VARIABLE_BadCtors_22,
  MR_Word STATE_VARIABLE_UnknownCtors_0_23,
  MR_Word * STATE_VARIABLE_UnknownCtors_24)
{
  {
    MR_bool succeeded;
    MR_Word CtorSymName0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 0)));
    MR_String ForeignTag_15 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_NamesAndTags_0_19, (MR_Integer) 1)));
    MR_String Name_16;
    MR_Word CtorSymName_17;

    if (((MR_tag((MR_Word) CtorSymName0_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word CtorModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), CtorSymName0_14, (MR_Integer) 0)));

      Name_16 = ((MR_String) (MR_hl_field(MR_mktag(1), CtorSymName0_14, (MR_Integer) 1)));
      succeeded = mdbcomp__sym_name__partial_sym_name_matches_full_2_p_0(CtorModuleName_18, TypeModuleName_10);
      if (succeeded)
      {
        {
          CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CtorSymName_17, 0) = ((MR_Box) (TypeModuleName_10));
          MR_hl_field(MR_mktag(1), CtorSymName_17, 1) = ((MR_Box) (Name_16));
        }
        *STATE_VARIABLE_BadCtors_22 = STATE_VARIABLE_BadCtors_0_21;
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_BadCtors_22 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorSymName0_14));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_BadCtors_0_21));
        }
        CtorSymName_17 = CtorSymName0_14;
      }
    }
    else
    {
      Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), CtorSymName0_14, (MR_Integer) 0)));
      {
        CtorSymName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CtorSymName_17, 0) = ((MR_Box) (TypeModuleName_10));
        MR_hl_field(MR_mktag(1), CtorSymName_17, 1) = ((MR_Box) (Name_16));
      }
      *STATE_VARIABLE_BadCtors_22 = STATE_VARIABLE_BadCtors_0_21;
    }
    succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, CtorNameSet_9, ((MR_Box) (Name_16)));
    if (succeeded)
      *STATE_VARIABLE_UnknownCtors_24 = STATE_VARIABLE_UnknownCtors_0_23;
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_UnknownCtors_24 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorSymName0_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_UnknownCtors_0_23));
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_NamesAndTags_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CtorSymName_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ForeignTag_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(
  MR_Word Constructor_4,
  MR_Word STATE_VARIABLE_CtorNameSet_0_8,
  MR_Word * STATE_VARIABLE_CtorNameSet_9)
{
  {
    MR_Word CtorSymName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 2)));
    MR_String Name_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 3)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Constructor_4, (MR_Integer) 5)));

    Name_7 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_6);
    mercury__set_tree234__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (Name_7)), STATE_VARIABLE_CtorNameSet_0_8, STATE_VARIABLE_CtorNameSet_9);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(
  MR_Word Lang_12,
  MR_String Prefix_13,
  MR_Word MakeUpperCase_14,
  MR_Word _TypeModQual_15,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_Overrides_0_30,
  MR_Word * STATE_VARIABLE_Overrides_31,
  MR_Word STATE_VARIABLE_NameMap_0_32,
  MR_Word * STATE_VARIABLE_NameMap_33,
  MR_Word STATE_VARIABLE_BadCtors_0_34,
  MR_Word * STATE_VARIABLE_BadCtors_35)
{
  hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(Lang_12, Prefix_13, MakeUpperCase_14, Ctor_16, STATE_VARIABLE_Overrides_0_30, STATE_VARIABLE_Overrides_31, STATE_VARIABLE_NameMap_0_32, STATE_VARIABLE_NameMap_33, STATE_VARIABLE_BadCtors_0_34, STATE_VARIABLE_BadCtors_35);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = backend_libs__c_util__is_valid_c_identifier_1_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0(
  MR_Word Lang_12,
  MR_String Prefix_13,
  MR_Word MakeUpperCase_14,
  MR_Word Ctor_16,
  MR_Word STATE_VARIABLE_Overrides_0_30,
  MR_Word * STATE_VARIABLE_Overrides_31,
  MR_Word STATE_VARIABLE_NameMap_0_32,
  MR_Word * STATE_VARIABLE_NameMap_33,
  MR_Word STATE_VARIABLE_BadCtors_0_34,
  MR_Word * STATE_VARIABLE_BadCtors_35)
{
  {
    MR_bool succeeded;
    MR_Word CtorSymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2)));
    MR_String UnqualCtorName_23;
    MR_Word UnqualSymName_24;
    MR_String ForeignNameTail_27;
    MR_String ForeignName_28;
    MR_Word IsValidForeignName_29;
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3)));
    MR_Integer Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4)));
    MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5)));
    MR_String UserForeignName_26;
    MR_Word STATE_VARIABLE_Overrides_39_39;
    MR_Box conv0_UserForeignName_26;

    if (((MR_tag((MR_Word) CtorSymName_20)) == (MR_mktag((MR_Integer) 1))))
    {
      UnqualCtorName_23 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_20);
      {
        UnqualSymName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnqualSymName_24, 0) = ((MR_Box) (UnqualCtorName_23));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_ctor_to_name_map\'/11", (MR_String) "unqualified constructor name");
        return;
      }
    }
    succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (UnqualSymName_24)), &conv0_UserForeignName_26, STATE_VARIABLE_Overrides_0_30, &STATE_VARIABLE_Overrides_39_39);
    if (succeeded)
    {
      UserForeignName_26 = ((MR_String) conv0_UserForeignName_26);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Overrides_31 = STATE_VARIABLE_Overrides_39_39;
      ForeignNameTail_27 = UserForeignName_26;
    }
    else
    {
      switch (MakeUpperCase_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          ForeignNameTail_27 = UnqualCtorName_23;
          break;
        case (MR_Integer) 0:
          ForeignNameTail_27 = mercury__string__to_upper_1_f_0(UnqualCtorName_23);
          break;
      }
      *STATE_VARIABLE_Overrides_31 = STATE_VARIABLE_Overrides_0_30;
    }
    ForeignName_28 = mercury__string__f_43_43_2_f_0(Prefix_13, ForeignNameTail_27);
    switch (Lang_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_44;

          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[1]));
            MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_116_111_114_95_116_111_95_110_97_109_101_95_109_97_112_95_95_91_52_93_95_48_11_p_0_1));
            MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (ForeignName_28));
          }
          IsValidForeignName_29 = mercury__bool__pred_to_bool_1_f_0(Var_44);
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
    switch (IsValidForeignName_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__list__cons_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (UnqualSymName_24)), STATE_VARIABLE_BadCtors_0_34, STATE_VARIABLE_BadCtors_35);
          *STATE_VARIABLE_NameMap_33 = STATE_VARIABLE_NameMap_0_32;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (UnqualSymName_24)), ((MR_Box) (ForeignName_28)), STATE_VARIABLE_NameMap_0_32, STATE_VARIABLE_NameMap_33);
          *STATE_VARIABLE_BadCtors_35 = STATE_VARIABLE_BadCtors_0_34;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Specs_14;

    hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv6_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_ConsTagValues_19;
    MR_Word conv2_STATE_VARIABLE_UnmappedCtors_21;

    hlds__make_hlds__add_pragma__add_foreign_enum__make_foreign_tag_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_STATE_VARIABLE_ConsTagValues_19, ((MR_Word) wrapper_arg_4), &conv2_STATE_VARIABLE_UnmappedCtors_21);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ConsTagValues_19));
    *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_UnmappedCtors_21));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_CtorNameSet_9;

    hlds__make_hlds__add_pragma__add_foreign_enum__gather_ctor_name_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_CtorNameSet_9);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CtorNameSet_9));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__add_pragma_foreign_enum__482__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0(
  MR_Word FEInfo_8,
  MR_Word PragmaStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_64,
  MR_Word * STATE_VARIABLE_ModuleInfo_65,
  MR_Word Specs0_12,
  MR_Word * Specs_13)
{
  {
    MR_bool succeeded;
    MR_Word Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_8, (MR_Integer) 0)));
    MR_Word TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_8, (MR_Integer) 1)));
    MR_Word ForeignTagValues_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEInfo_8, (MR_Integer) 2)));
    MR_Word TypeName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
    MR_Integer TypeArity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
    MR_Word ContextPieces_19;
    MR_Word TypeTable0_21;
    MR_Word Var_68;
    MR_Word Var_71;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word STATE_VARIABLE_Specs_84_84;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
    MR_Word STATE_VARIABLE_Specs_132_132;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_135_135;
    MR_Word STATE_VARIABLE_Specs_137_137;
    MR_Word TypeDefn0_22;

    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (TypeName_17));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (TypeArity_18));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
    }
    {
      ContextPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), ContextPieces_19, 1) = ((MR_Box) (Var_68));
    }
    STATE_VARIABLE_Specs_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(TypeName_17, TypeArity_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_ErrorSeveritiesPieces_85_85);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_64, &TypeTable0_21);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_21, TypeCtor_15, &TypeDefn0_22);
    if (succeeded)
    {
      MR_Word TypeStatus_23;
      MR_Word IsTypeLocal_24;
      MR_Word TypeBody0_26;
      MR_Word STATE_VARIABLE_Specs_90_90;
      MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_100_100;

      hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn0_22, &TypeStatus_23);
      IsTypeLocal_24 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_23);
      switch (IsTypeLocal_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_86;

            Var_86 = hlds__status__type_status_is_imported_1_f_0(PragmaStatus_9);
            succeeded = (Var_86 == (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_167 = (MR_Word) PragmaStatus_9;

            if ((Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
              succeeded = MR_TRUE;
            else
            if ((Var_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      if (succeeded)
      {
        STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
        STATE_VARIABLE_Specs_90_90 = STATE_VARIABLE_Specs_84_84;
      }
      else
      {
        MR_Word Var_89 = (MR_Word) PragmaStatus_9;

        succeeded = (Var_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (succeeded)
        {
          hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(Context_10, TypeName_17, TypeArity_18, STATE_VARIABLE_Specs_84_84, &STATE_VARIABLE_Specs_90_90);
          STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
        }
        else
        {
          MR_Word NotThisModuleErrorPieces_25;
          MR_Word Var_93;
          MR_Tuple Var_101;

          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[70])));
          }
          {
            NotThisModuleErrorPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NotThisModuleErrorPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
            MR_hl_field(MR_mktag(1), NotThisModuleErrorPieces_25, 1) = ((MR_Box) (Var_93));
          }
          {
            Var_101 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (NotThisModuleErrorPieces_25));
          }
          {
            STATE_VARIABLE_ErrorSeveritiesPieces_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_85_85));
          }
          STATE_VARIABLE_Specs_90_90 = STATE_VARIABLE_Specs_84_84;
        }
      }
      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn0_22, &TypeBody0_26);
      switch (MR_tag((MR_Word) TypeBody0_26)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[3]), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
            STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_90_90;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_138_138;
            MR_Word TypeCtorInfo_139_139;
            MR_Word Ctors_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 0)));
            MR_Word OldTagValues_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 1)));
            MR_Word CheaperTagTest_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 2)));
            MR_Word DuTypeKind0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 3)));
            MR_Word MaybeUserEq_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 4)));
            MR_Word MaybeDirectArgCtors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 5)));
            MR_Word ReservedTag_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word ReservedAddr_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word IsForeignType_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody0_26, (MR_Integer) 7)));
            MR_Word EnumSymNames_41;
            MR_Word NonEnumConsIds_42;
            MR_Word Globals_43;
            MR_Word TargetLanguage_44;
            MR_Word LangForForeignEnums_45;
            MR_Word DuTypeKind_51;
            MR_Word CtorNameSet_52;
            MR_Word MaybeForeignTagMap_53;
            MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
            MR_Word Var_104;
            MR_Word Var_127;
            MR_Word STATE_VARIABLE_Specs_128_128;
            MR_Box conv1_CtorNameSet_52;
            MR_Word ForeignTagMap_54;

            hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(TypeName_17, TypeArity_18, ReservedTag_38, STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &STATE_VARIABLE_ErrorSeveritiesPieces_103_103);
            TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
            TypeCtorInfo_139_139 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
            Var_104 = mercury__map__keys_1_f_0(TypeCtorInfo_138_138, TypeCtorInfo_139_139, OldTagValues_33);
            hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(Var_104, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &EnumSymNames_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NonEnumConsIds_42);
            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_64, &Globals_43);
            libs__globals__get_target_2_p_0(Globals_43, &TargetLanguage_44);
            LangForForeignEnums_45 = hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(TargetLanguage_44);
            switch (MR_tag((MR_Word) DuTypeKind0_35)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind0_35)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_107;

                      {
                        Var_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_107, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[3]));
                        MR_hl_field(MR_mktag(0), Var_107, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_107, 3) = ((MR_Box) (NonEnumConsIds_42));
                        MR_hl_field(MR_mktag(0), Var_107, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      mercury__require__expect_3_p_0(Var_107, (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.add_pragma_foreign_enum\'/7", (MR_String) "direct_dummy or mercury_enum with non-enum cons_id(s)");
                      STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_124;

                      {
                        Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (ReservedTag_38));
                        MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (NonEnumConsIds_42));
                      }
                      hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, Var_124, STATE_VARIABLE_ErrorSeveritiesPieces_103_103, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = (LangForForeignEnums_45 == Lang_14);
                  succeeded = !(succeeded);
                  if (!(succeeded))
                  {
                    MR_Word Var_111 = (MR_Word) PragmaStatus_9;

                    succeeded = (Var_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  if (succeeded)
                    STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = STATE_VARIABLE_ErrorSeveritiesPieces_103_103;
                  else
                  {
                    MR_Word MultiplePragmasErrorPieces_50;
                    MR_Word Var_114;
                    MR_Tuple Var_122;

                    {
                      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (Var_75));
                      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[72])));
                    }
                    {
                      MultiplePragmasErrorPieces_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MultiplePragmasErrorPieces_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
                      MR_hl_field(MR_mktag(1), MultiplePragmasErrorPieces_50, 1) = ((MR_Box) (Var_114));
                    }
                    {
                      Var_122 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), Var_122, 1) = ((MR_Box) (MultiplePragmasErrorPieces_50));
                    }
                    {
                      STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_135_135, 0) = ((MR_Box) (Var_122));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_ErrorSeveritiesPieces_135_135, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_103_103));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_124;

                  {
                    Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (ReservedTag_38));
                    MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (NonEnumConsIds_42));
                  }
                  hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, Var_124, STATE_VARIABLE_ErrorSeveritiesPieces_103_103, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                }
                break;
            }
            {
              DuTypeKind_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), DuTypeKind_51, 0) = ((MR_Box) (Lang_14));
            }
            Var_127 = mercury__set_tree234__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[3], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[8], Ctors_32, ((MR_Box) (Var_127)), &conv1_CtorNameSet_52);
            CtorNameSet_52 = ((MR_Word) conv1_CtorNameSet_52);
            hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(Context_10, ContextPieces_19, CtorNameSet_52, TypeName_17, ForeignTagValues_16, &MaybeForeignTagMap_53, STATE_VARIABLE_Specs_90_90, &STATE_VARIABLE_Specs_128_128);
            succeeded = (LangForForeignEnums_45 == Lang_14);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeForeignTagMap_53)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                ForeignTagMap_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeForeignTagMap_53, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word TagValues_55;
              MR_Word UnmappedCtors_56;
              MR_Word Var_129;
              MR_Word Var_130;
              MR_Box conv5_TagValues_55;
              MR_Box conv4_UnmappedCtors_56;

              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[1]));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_3));
                MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (TypeCtor_15));
                MR_hl_field(MR_mktag(0), Var_129, 4) = ((MR_Box) (Lang_14));
                MR_hl_field(MR_mktag(0), Var_129, 5) = ((MR_Box) (ForeignTagMap_54));
              }
              Var_130 = mercury__map__init_0_f_0(TypeCtorInfo_138_138, TypeCtorInfo_139_139);
              mercury__list__foldl2_6_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], Var_129, EnumSymNames_41, ((MR_Box) (Var_130)), &conv5_TagValues_55, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_UnmappedCtors_56);
              TagValues_55 = ((MR_Word) conv5_TagValues_55);
              UnmappedCtors_56 = ((MR_Word) conv4_UnmappedCtors_56);
              if ((UnmappedCtors_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_128_128;
              else
                hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(Context_10, ContextPieces_19, UnmappedCtors_56, STATE_VARIABLE_Specs_128_128, &STATE_VARIABLE_Specs_132_132);
              succeeded = (STATE_VARIABLE_ErrorSeveritiesPieces_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
                succeeded = (STATE_VARIABLE_Specs_132_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                MR_Word TypeBody_59;
                MR_Word TypeDefn_60;
                MR_Word TypeTable_61;

                {
                  TypeBody_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 0) = ((MR_Box) (Ctors_32));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 1) = ((MR_Box) (TagValues_55));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 2) = ((MR_Box) (CheaperTagTest_34));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 3) = ((MR_Box) (DuTypeKind_51));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 4) = ((MR_Box) (MaybeUserEq_36));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 5) = ((MR_Box) (MaybeDirectArgCtors_37));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 6) = ((MR_Box) ((ReservedTag_38 | ((ReservedAddr_39 << (MR_Integer) 1)))));
                  MR_hl_field(MR_mktag(1), TypeBody_59, 7) = ((MR_Box) (IsForeignType_40));
                }
                hlds__hlds_data__set_type_defn_body_3_p_0(TypeBody_59, TypeDefn0_22, &TypeDefn_60);
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_60, TypeTable0_21, &TypeTable_61);
                hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_61, STATE_VARIABLE_ModuleInfo_0_64, STATE_VARIABLE_ModuleInfo_65);
              }
              else
                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
            }
            else
            {
              STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_128_128;
              *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[2]), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
            *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
            STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_90_90;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody0_26, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[4]), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_90_90;
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_17, TypeArity_18, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1]), STATE_VARIABLE_ErrorSeveritiesPieces_100_100, &STATE_VARIABLE_ErrorSeveritiesPieces_135_135);
                *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
                STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_90_90;
              }
              break;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_ErrorSeveritiesPieces_135_135 = STATE_VARIABLE_ErrorSeveritiesPieces_85_85;
      STATE_VARIABLE_Specs_132_132 = STATE_VARIABLE_Specs_84_84;
      *STATE_VARIABLE_ModuleInfo_65 = STATE_VARIABLE_ModuleInfo_0_64;
    }
    if ((STATE_VARIABLE_ErrorSeveritiesPieces_135_135 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_137_137 = STATE_VARIABLE_Specs_132_132;
    else
    {
      MR_Word Var_136;
      MR_Box conv7_STATE_VARIABLE_Specs_137_137;

      {
        Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_136, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_enum_7_p_0_4));
        MR_hl_field(MR_mktag(0), Var_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_136, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_136, 4) = ((MR_Box) (ContextPieces_19));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1], Var_136, STATE_VARIABLE_ErrorSeveritiesPieces_135_135, ((MR_Box) (STATE_VARIABLE_Specs_132_132)), &conv7_STATE_VARIABLE_Specs_137_137);
      STATE_VARIABLE_Specs_137_137 = ((MR_Word) conv7_STATE_VARIABLE_Specs_137_137);
    }
    *Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, STATE_VARIABLE_Specs_137_137, Specs0_12);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_pragma_in_interface_error_5_p_0(
  MR_Word Context_6,
  MR_Word TypeName_7,
  MR_Integer TypeArity_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word ErrorPieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_37;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (TypeName_7));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (TypeArity_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[39])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[67])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      ErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[66])));
      MR_hl_field(MR_mktag(1), ErrorPieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (ErrorPieces_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_foreign_enum_unmapped_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors0_8,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word TypeCtorInfo_102_102 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word TypeCtorInfo_104_104;
    MR_Word Ctors_10;
    MR_Word CtorsStart_11;
    MR_Word CtorsEnd_12;
    MR_String DoOrDoes_13;
    MR_Word PrefixPieces_14;
    MR_Word CtorsComponent_16;
    MR_Word Msg_22;
    MR_Word Spec_23;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_99;
    MR_Box conv0_DoOrDoes_13;

    mercury__list__sort_2_p_0(TypeCtorInfo_102_102, Ctors0_8, &Ctors_10);
    mercury__list__split_upto_4_p_0(TypeCtorInfo_102_102, (MR_Integer) 10, Ctors_10, &CtorsStart_11, &CtorsEnd_12);
    conv0_DoOrDoes_13 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_102_102, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Ctors_10, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
    DoOrDoes_13 = ((MR_String) conv0_DoOrDoes_13);
    TypeCtorInfo_104_104 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (DoOrDoes_13));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[60])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    PrefixPieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, ContextPieces_7, Var_29);
    if ((CtorsEnd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word CtorsPieces_15;
      MR_Word Var_83;
      MR_Word Var_84;

      Var_84 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
      Var_83 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_84, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[64]));
      CtorsPieces_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[62]), Var_83);
      {
        CtorsComponent_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorsComponent_16, 0) = ((MR_Box) (CtorsPieces_15));
      }
    }
    else
    {
      MR_Integer NumEndCtors_19;
      MR_Word NonVerboseCtorsPieces_20;
      MR_Word VerboseCtorsPieces_21;
      MR_Word Var_38;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_69;
      MR_Word Var_70;

      mercury__list__length_2_p_0(TypeCtorInfo_102_102, CtorsEnd_12, &NumEndCtors_19);
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[62]);
      Var_43 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(CtorsStart_11, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[28]));
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (NumEndCtors_19));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[30])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[65])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[63])));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
      }
      Var_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_43, Var_51);
      NonVerboseCtorsPieces_20 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_38, Var_42);
      Var_70 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(Ctors_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
      Var_69 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[64]));
      VerboseCtorsPieces_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_104_104, Var_38, Var_69);
      {
        CtorsComponent_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 1) = ((MR_Box) (VerboseCtorsPieces_21));
        MR_hl_field(MR_mktag(3), CtorsComponent_16, 2) = ((MR_Box) (NonVerboseCtorsPieces_20));
      }
    }
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (PrefixPieces_14));
    }
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (CtorsComponent_16));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_95));
    }
    {
      Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_22, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_22, 1) = ((MR_Box) (Var_93));
    }
    {
      Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Msg_22));
      MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_99));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctors_to_line_pieces_2_f_0(
  MR_Word Ctors_4,
  MR_Word Final_5)
{
  {
    MR_Word Pieces_6;
    MR_Word Components_7;

    Components_7 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[7], Ctors_4);
    Pieces_6 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_7, Final_5);
    return Pieces_6;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__target_lang_to_foreign_enum_lang_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((&hlds__make_hlds__add_pragma__add_foreign_enum_vector_common_10[0 + HeadVar__1_1]))->hlds__make_hlds__add_pragma__add_foreign_enum__vector_common_type_10_0__vct_10_f_0;

    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_NamesAndTags_20;
    MR_Word conv1_STATE_VARIABLE_BadCtors_22;
    MR_Word conv0_STATE_VARIABLE_UnknownCtors_24;

    hlds__make_hlds__add_pragma__add_foreign_enum__fixup_foreign_tag_val_qualification_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_STATE_VARIABLE_NamesAndTags_20, ((MR_Word) wrapper_arg_3), &conv1_STATE_VARIABLE_BadCtors_22, ((MR_Word) wrapper_arg_5), &conv0_STATE_VARIABLE_UnknownCtors_24);
    *wrapper_arg_2 = ((MR_Box) (conv2_STATE_VARIABLE_NamesAndTags_20));
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_BadCtors_22));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_UnknownCtors_24));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0(
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word CtorNameSet_11,
  MR_Word TypeName_12,
  MR_Word ForeignTagValues0_13,
  MR_Word * MaybeForeignTagMap_14,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_43_43;
    MR_Word TypeModuleName_16;
    MR_Word ForeignTagValues1_19;
    MR_Word BadCtors_20;
    MR_Word UnknownCtors_21;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Specs_34_34;
    MR_Box conv4_BadCtors_20;
    MR_Box conv3_UnknownCtors_21;

    if (((MR_tag((MR_Word) TypeName_12)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_17;

      TypeModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeName_12, (MR_Integer) 0)));
      Var_17 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeName_12, (MR_Integer) 1)));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_foreign_enum_tag_map\'/8", (MR_String) "unqualified type name while processing foreign tags.");
        return;
      }
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_foreign_enum_tag_map_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (CtorNameSet_11));
      MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeModuleName_16));
    }
    TypeInfo_42_42 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[2];
    TypeInfo_43_43 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4];
    mercury__list__map_foldl2_7_p_0(TypeInfo_42_42, TypeInfo_42_42, TypeInfo_43_43, TypeInfo_43_43, Var_31, ForeignTagValues0_13, &ForeignTagValues1_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_BadCtors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_UnknownCtors_21);
    BadCtors_20 = ((MR_Word) conv4_BadCtors_20);
    UnknownCtors_21 = ((MR_Word) conv3_UnknownCtors_21);
    if ((UnknownCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_0_26;
    else
      hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(Context_9, ContextPieces_10, UnknownCtors_21, STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_34_34);
    succeeded = (BadCtors_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      succeeded = (UnknownCtors_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      MR_Word ForeignTagValues_24;

      succeeded = mercury__bimap__from_assoc_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagValues1_19, &ForeignTagValues_24);
      if (succeeded)
      {
        MR_Word ForeignTagMap_25;

        ForeignTagMap_25 = mercury__bimap__forward_map_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ForeignTagValues_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignTagMap_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignTagMap_25));
        }
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_34_34;
      }
      else
      {
        MR_Word Msg_54;
        MR_Word Spec_55;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_73;

        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[37]));
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Var_69));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Msg_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_54, 0) = ((MR_Box) (Context_9));
          MR_hl_field(MR_mktag(0), Msg_54, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Msg_54));
          MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_55, 2) = ((MR_Box) (Var_73));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_55));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_34_34));
        }
        *MaybeForeignTagMap_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    else
    {
      *MaybeForeignTagMap_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_34_34;
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__unqual_ctor_to_format_component_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_unknown_ctors_error_5_p_0(
  MR_Word Context_6,
  MR_Word ContextPieces_7,
  MR_Word Ctors_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word TypeCtorInfo_46_46;
    MR_String IsOrAre_10;
    MR_Word ErrorPieces_11;
    MR_Word Msg_12;
    MR_Word Spec_13;
    MR_Word Var_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_41;
    MR_Word Components_50;
    MR_Box conv0_IsOrAre_10;

    conv0_IsOrAre_10 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Ctors_8, ((MR_Box) ((MR_String) "symbol is not a constructor")), ((MR_Box) ((MR_String) "symbols are not constructors")));
    IsOrAre_10 = ((MR_String) conv0_IsOrAre_10);
    TypeCtorInfo_46_46 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (IsOrAre_10));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[32])));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
    }
    Components_50 = mercury__list__map_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[6], Ctors_8);
    Var_30 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Components_50, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[58]));
    ErrorPieces_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_46_46, Var_18, Var_30);
    Var_37 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_46_46, ContextPieces_7, ErrorPieces_11);
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (Var_37));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_41));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__add_pragma_foreign_export_enum_7_p_0(
  MR_Word FEEInfo_8,
  MR_Word _TypeStatus_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word Specs0_12,
  MR_Word * Specs_13)
{
  hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(FEEInfo_8, Context_10, STATE_VARIABLE_ModuleInfo_0_57, STATE_VARIABLE_ModuleInfo_58, Specs0_12, Specs_13);
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_14;

    hlds__make_hlds__add_pragma__add_foreign_enum__add_error_severity_pieces_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Tuple) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_14));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0(
  MR_Word FEEInfo_8,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * STATE_VARIABLE_ModuleInfo_58,
  MR_Word Specs0_12,
  MR_Word * Specs_13)
{
  {
    MR_bool succeeded;
    MR_Word Lang_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_8, (MR_Integer) 0)));
    MR_Word TypeCtor_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_8, (MR_Integer) 1)));
    MR_Word Attributes_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_8, (MR_Integer) 2)));
    MR_Word Overrides_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), FEEInfo_8, (MR_Integer) 3)));
    MR_Word TypeName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0)));
    MR_Integer TypeArity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1)));
    MR_Word ContextPieces_20;
    MR_Word TypeTable_22;
    MR_Word Var_61;
    MR_Word Var_64;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word STATE_VARIABLE_Specs_77_77;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_78_78;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_89_89;
    MR_Word STATE_VARIABLE_Specs_91_91;
    MR_Word TypeDefn_23;

    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (TypeName_18));
      MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (TypeArity_19));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[56])));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[55])));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
    }
    {
      ContextPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[54])));
      MR_hl_field(MR_mktag(1), ContextPieces_20, 1) = ((MR_Box) (Var_61));
    }
    STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(TypeName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &STATE_VARIABLE_ErrorSeveritiesPieces_78_78);
    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &TypeTable_22);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_22, TypeCtor_15, &TypeDefn_23);
    if (succeeded)
    {
      MR_Word TypeBody_24;

      hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_23, &TypeBody_24);
      switch (MR_tag((MR_Word) TypeBody_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[3]), STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
            *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
            STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_77_77;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ctors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 0)));
            MR_Word TagValues_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 1)));
            MR_Word DuTypeKind_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 3)));
            MR_Word ReservedTag_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 6)))) & (MR_Integer) 1);
            MR_Word NonEnumConsIds_40;
            MR_Word MaybePrefix_45;
            MR_Word MakeUpperCase_46;
            MR_String Prefix_47;
            MR_Word MaybeOverridesMap_48;
            MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
            MR_Word Var_80;
            MR_Word STATE_VARIABLE_Specs_85_85;
            MR_Word _CheaperTagTest_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 2)));
            MR_Word _MaybeUserEq_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 4)));
            MR_Word _MaybeDirectArgCtors_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 5)));
            MR_Word _ReservedAddr_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word _IsForeignType_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_24, (MR_Integer) 7)));
            MR_Word _EnumSymNames_39;

            hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(TypeName_18, TypeArity_19, ReservedTag_36, STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &STATE_VARIABLE_ErrorSeveritiesPieces_79_79);
            Var_80 = mercury__map__keys_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, TagValues_31);
            hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(Var_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &_EnumSymNames_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &NonEnumConsIds_40);
            switch (MR_tag((MR_Word) DuTypeKind_33)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(DuTypeKind_33)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_83;

                      {
                        Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ReservedTag_36));
                        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (NonEnumConsIds_40));
                      }
                      hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, Var_83, STATE_VARIABLE_ErrorSeveritiesPieces_79_79, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = STATE_VARIABLE_ErrorSeveritiesPieces_79_79;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_83;

                  {
                    Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (ReservedTag_36));
                    MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (NonEnumConsIds_40));
                  }
                  hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, Var_83, STATE_VARIABLE_ErrorSeveritiesPieces_79_79, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                }
                break;
            }
            MaybePrefix_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 0)));
            MakeUpperCase_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), Attributes_16, (MR_Integer) 1)));
            if ((MaybePrefix_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              Prefix_47 = (MR_String) "";
            else
              Prefix_47 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybePrefix_45, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(TypeName_18, Context_10, ContextPieces_20, Overrides_17, &MaybeOverridesMap_48, STATE_VARIABLE_Specs_77_77, &STATE_VARIABLE_Specs_85_85);
            if ((MaybeOverridesMap_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
              STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_85_85;
            }
            else
            {
              MR_Word OverridesMap_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeOverridesMap_48, (MR_Integer) 0)));
              MR_Word MaybeMapping_50;

              hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(ContextPieces_20, Lang_14, TypeName_18, TypeArity_19, Context_10, Prefix_47, MakeUpperCase_46, OverridesMap_49, Ctors_30, &MaybeMapping_50, STATE_VARIABLE_Specs_85_85, &STATE_VARIABLE_Specs_86_86);
              if ((MaybeMapping_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
              else
              {
                MR_Word Mapping_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeMapping_50, (MR_Integer) 0)));
                MR_Word ExportedEnum_52;

                {
                  ExportedEnum_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 0) = ((MR_Box) (Lang_14));
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 1) = ((MR_Box) (Context_10));
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 2) = ((MR_Box) (TypeCtor_15));
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 3) = ((MR_Box) (Mapping_51));
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 4) = ((MR_Box) (Ctors_30));
                  MR_hl_field(MR_mktag(0), ExportedEnum_52, 5) = ((MR_Box) (TagValues_31));
                }
                succeeded = (STATE_VARIABLE_ErrorSeveritiesPieces_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                  succeeded = (STATE_VARIABLE_Specs_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (succeeded)
                {
                  MR_Word ExportedEnums0_53;
                  MR_Word ExportedEnums_54;

                  hlds__hlds_module__module_info_get_exported_enums_2_p_0(STATE_VARIABLE_ModuleInfo_0_57, &ExportedEnums0_53);
                  {
                    ExportedEnums_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ExportedEnums_54, 0) = ((MR_Box) (ExportedEnum_52));
                    MR_hl_field(MR_mktag(1), ExportedEnums_54, 1) = ((MR_Box) (ExportedEnums0_53));
                  }
                  hlds__hlds_module__module_info_set_exported_enums_3_p_0(ExportedEnums_54, STATE_VARIABLE_ModuleInfo_0_57, STATE_VARIABLE_ModuleInfo_58);
                }
                else
                  *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[2]), STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
            *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
            STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_77_77;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_24, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[4]), STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
                STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_77_77;
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(TypeName_18, TypeArity_19, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_4[1]), STATE_VARIABLE_ErrorSeveritiesPieces_78_78, &STATE_VARIABLE_ErrorSeveritiesPieces_89_89);
                *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
                STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_77_77;
              }
              break;
          }
          break;
      }
    }
    else
    {
      STATE_VARIABLE_ErrorSeveritiesPieces_89_89 = STATE_VARIABLE_ErrorSeveritiesPieces_78_78;
      STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_77_77;
      *STATE_VARIABLE_ModuleInfo_58 = STATE_VARIABLE_ModuleInfo_0_57;
    }
    if ((STATE_VARIABLE_ErrorSeveritiesPieces_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_91_91 = STATE_VARIABLE_Specs_86_86;
    else
    {
      MR_Word Var_90;
      MR_Box conv1_STATE_VARIABLE_Specs_91_91;

      {
        Var_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_114_97_103_109_97_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_101_110_117_109_95_95_91_50_93_95_48_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (ContextPieces_20));
      }
      mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[1], Var_90, STATE_VARIABLE_ErrorSeveritiesPieces_89_89, ((MR_Box) (STATE_VARIABLE_Specs_86_86)), &conv1_STATE_VARIABLE_Specs_91_91);
      STATE_VARIABLE_Specs_91_91 = ((MR_Word) conv1_STATE_VARIABLE_Specs_91_91);
    }
    *Specs_13 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, STATE_VARIABLE_Specs_91_91, Specs0_12);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_foreign_enum__wrap_unqual_cons_id_and_maybe_arity_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__pred__report_not_enum_type__846__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0(
  MR_Word TypeName_6,
  MR_Integer TypeArity_7,
  MR_Word NotEnumInfo_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_19,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_20)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) NotEnumInfo_8)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
      MR_Word ReservedTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotEnumInfo_8, (MR_Integer) 0)));
      MR_Word NonEnumConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), NotEnumInfo_8, (MR_Integer) 1)));
      MR_Word SortedNonEnumConsIds_14;

      mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_80_80, NonEnumConsIds_13, &SortedNonEnumConsIds_14);
      if ((SortedNonEnumConsIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_51;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_7[1]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__report_not_enum_type_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (ReservedTag_12));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) ((MR_Integer) 0));
        }
        mercury__require__expect_3_p_0(Var_51, (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.report_not_enum_type\'/5", (MR_String) "no non-enum cons_ids, but no reserved tag");
        *STATE_VARIABLE_ErrorSeveritiesPieces_20 = STATE_VARIABLE_ErrorSeveritiesPieces_0_19;
      }
      else
      {
        MR_Word TypeCtorInfo_82_82 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word ConsIdPieces_17;
        MR_Word ItHasThese_18;
        MR_Word Var_22;
        MR_Word Var_28;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_41;
        MR_Tuple Var_49;
        MR_Word ErrorPieces_77;
        MR_Box conv1_ItHasThese_18;

        Var_22 = mercury__list__map_2_f_0(TypeCtorInfo_80_80, TypeCtorInfo_82_82, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[5], SortedNonEnumConsIds_14);
        ConsIdPieces_17 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_22);
        conv1_ItHasThese_18 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_80_80, TypeCtorInfo_82_82, SortedNonEnumConsIds_14, ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[49]))), ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[50]))));
        ItHasThese_18 = ((MR_Word) conv1_ItHasThese_18);
        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (TypeName_6));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (TypeArity_7));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ItHasThese_18));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5])));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[51])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
        }
        Var_41 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_82_82, ConsIdPieces_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19]));
        ErrorPieces_77 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_82_82, Var_28, Var_41);
        {
          Var_49 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (ErrorPieces_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
        }
      }
    }
    else
    {
      MR_String TypeKind_10 = ((MR_String) (MR_hl_field(MR_mktag(1), NotEnumInfo_8, (MR_Integer) 0)));
      MR_Word ErrorPieces_11;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Tuple Var_75;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (TypeName_6));
        MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (TypeArity_7));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (TypeKind_10));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19])));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[53])));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[52])));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
      }
      {
        ErrorPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ErrorPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), ErrorPieces_11, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_75 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (ErrorPieces_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrorSeveritiesPieces_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_19));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_reserved_tag_5_p_0(
  MR_Word TypeName_6,
  MR_Integer TypeArity_7,
  MR_Word ReservedTag_8,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_11,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_12)
{
  switch (ReservedTag_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ErrorSeveritiesPieces_12 = STATE_VARIABLE_ErrorSeveritiesPieces_0_11;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ReservedTagErrorPieces_10;
        MR_Word Var_15;
        MR_Word Var_18;
        MR_Word Var_21;
        MR_Word Var_22;
        MR_Word Var_23;
        MR_Tuple Var_31;

        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (TypeName_6));
          MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (TypeArity_7));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
          MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_23));
        }
        {
          Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19])));
        }
        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_21));
        }
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[47])));
          MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
        }
        {
          ReservedTagErrorPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ReservedTagErrorPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), ReservedTagErrorPieces_10, 1) = ((MR_Box) (Var_15));
        }
        {
          Var_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (ReservedTagErrorPieces_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ErrorSeveritiesPieces_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_11));
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__report_if_builtin_type_4_p_0(
  MR_Word TypeName_5,
  MR_Integer TypeArity_6,
  MR_Word STATE_VARIABLE_ErrorSeveritiesPieces_0_9,
  MR_Word * STATE_VARIABLE_ErrorSeveritiesPieces_10)
{
  {
    MR_bool succeeded = (TypeArity_6 == (MR_Integer) 0);

    if (succeeded)
      succeeded = parse_tree__prog_data__is_builtin_type_sym_name_1_p_0(TypeName_5);
    if (succeeded)
    {
      MR_Word BuiltinErrorPieces_8;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Tuple Var_23;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (TypeName_5));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (TypeArity_6));
      }
      {
        Var_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
        MR_hl_field(MR_mktag(3), Var_14, 1) = ((MR_Box) (Var_15));
      }
      {
        Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[41])));
      }
      {
        BuiltinErrorPieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), BuiltinErrorPieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), BuiltinErrorPieces_8, 1) = ((MR_Box) (Var_13));
      }
      {
        Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (BuiltinErrorPieces_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ErrorSeveritiesPieces_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ErrorSeveritiesPieces_0_9));
      }
    }
    else
      *STATE_VARIABLE_ErrorSeveritiesPieces_10 = STATE_VARIABLE_ErrorSeveritiesPieces_0_9;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__find_enum_nonenum_cons_ids_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_EnumSymNames_0_2,
  MR_Word * STATE_VARIABLE_EnumSymNames_3,
  MR_Word STATE_VARIABLE_NonEnumConsIds_0_4,
  MR_Word * STATE_VARIABLE_NonEnumConsIds_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_NonEnumConsIds_5 = STATE_VARIABLE_NonEnumConsIds_0_4;
      *STATE_VARIABLE_EnumSymNames_3 = STATE_VARIABLE_EnumSymNames_0_2;
    }
    else
    {
      MR_Word ConsId_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ConsIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_EnumSymNames_23_23;
      MR_Word STATE_VARIABLE_NonEnumConsIds_24_24;
      MR_Word ConsSymName_16;
      MR_Integer Var_22;
      MR_Word Var_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_EnumSymNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4;

      succeeded = ((((MR_tag((MR_Word) ConsId_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        ConsSymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 1)));
        Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 2)));
        Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_12, (MR_Integer) 3)));
        succeeded = (Var_22 == (MR_Integer) 0);
      }
      if (succeeded)
      {
        {
          STATE_VARIABLE_EnumSymNames_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_EnumSymNames_23_23, 0) = ((MR_Box) (ConsSymName_16));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_EnumSymNames_23_23, 1) = ((MR_Box) (STATE_VARIABLE_EnumSymNames_0_2));
        }
        STATE_VARIABLE_NonEnumConsIds_24_24 = STATE_VARIABLE_NonEnumConsIds_0_4;
      }
      else
      {
        {
          STATE_VARIABLE_NonEnumConsIds_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonEnumConsIds_24_24, 0) = ((MR_Box) (ConsId_12));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_NonEnumConsIds_24_24, 1) = ((MR_Box) (STATE_VARIABLE_NonEnumConsIds_0_4));
        }
        STATE_VARIABLE_EnumSymNames_23_23 = STATE_VARIABLE_EnumSymNames_0_2;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = ConsIds_13;
      next_value_of_STATE_VARIABLE_EnumSymNames_0_2 = STATE_VARIABLE_EnumSymNames_23_23;
      next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4 = STATE_VARIABLE_NonEnumConsIds_24_24;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_EnumSymNames_0_2 = next_value_of_STATE_VARIABLE_EnumSymNames_0_2;
      STATE_VARIABLE_NonEnumConsIds_0_4 = next_value_of_STATE_VARIABLE_NonEnumConsIds_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv8_LambdaHeadVar__2_105;

    conv8_LambdaHeadVar__2_105 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__271__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_105));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_LambdaHeadVar__2_69;

    conv6_LambdaHeadVar__2_69 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_name_map__252__1_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_69));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Overrides_31;
    MR_Word conv1_STATE_VARIABLE_NameMap_33;
    MR_Word conv0_STATE_VARIABLE_BadCtors_35;

    hlds__make_hlds__add_pragma__add_foreign_enum__add_ctor_to_name_map_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_Overrides_31, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_NameMap_33, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_BadCtors_35);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Overrides_31));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_NameMap_33));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_BadCtors_35));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0(
  MR_Word ContextPieces_13,
  MR_Word Lang_14,
  MR_Word TypeName_15,
  MR_Integer TypeArity_16,
  MR_Word Context_17,
  MR_String Prefix_18,
  MR_Word MakeUpperCase_19,
  MR_Word Overrides0_20,
  MR_Word Ctors_21,
  MR_Word * MaybeMapping_22,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_153_153;
    MR_Word TypeCtorInfo_154_154;
    MR_Word TypeInfo_156_156;
    MR_Word TypeModuleQual_24;
    MR_Word Overrides_27;
    MR_Word NameMap_28;
    MR_Word BadCtors_29;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Box conv5_Overrides_27;
    MR_Box conv4_NameMap_28;
    MR_Box conv3_BadCtors_29;

    if (((MR_tag((MR_Word) TypeName_15)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_25;

      TypeModuleQual_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeName_15, (MR_Integer) 0)));
      Var_25 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeName_15, (MR_Integer) 1)));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_name_map\'/12", (MR_String) "unqualified type name for foreign_export_enum");
        return;
      }
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_name_map_12_p_0_1));
      MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (Lang_14));
      MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (Prefix_18));
      MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) (MakeUpperCase_19));
      MR_hl_field(MR_mktag(0), Var_51, 6) = ((MR_Box) (TypeModuleQual_24));
    }
    TypeCtorInfo_153_153 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeCtorInfo_154_154 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    Var_52 = mercury__map__init_0_f_0(TypeCtorInfo_153_153, TypeCtorInfo_154_154);
    TypeInfo_156_156 = (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[1];
    mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, TypeInfo_156_156, TypeInfo_156_156, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[4], Var_51, Ctors_21, ((MR_Box) (Overrides0_20)), &conv5_Overrides_27, ((MR_Box) (Var_52)), &conv4_NameMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_BadCtors_29);
    Overrides_27 = ((MR_Word) conv5_Overrides_27);
    NameMap_28 = ((MR_Word) conv4_NameMap_28);
    BadCtors_29 = ((MR_Word) conv3_BadCtors_29);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_153_153, TypeCtorInfo_154_154, Overrides_27);
    if (succeeded)
      if ((BadCtors_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(Context_17, ContextPieces_13, NameMap_28, MaybeMapping_22, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
      else
      {
        MR_Word TypeCtorInfo_159_159;
        MR_String What_32;
        MR_Word BadCtorsErrorPieces_33;
        MR_Word SortedBadCtors_34;
        MR_Word BadCtorComponents_35;
        MR_Word BadCtorsList_37;
        MR_Word BadCtorsVerboseErrorPieces_38;
        MR_Word BadCtorsMsg_39;
        MR_Word BadCtorsSpec_40;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_String Var_64;
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_String Var_80;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_99;
        MR_Box conv7_Var_80;

        switch (Lang_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            What_32 = (MR_String) "C identifiers.";
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
            What_32 = (MR_String) "Java identifiers.";
            break;
        }
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (TypeName_15));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (TypeArity_16));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), Var_60, 1) = ((MR_Box) (Var_61));
        }
        Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "can be converted into valid ", What_32);
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          BadCtorsErrorPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), BadCtorsErrorPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[42])));
          MR_hl_field(MR_mktag(1), BadCtorsErrorPieces_33, 1) = ((MR_Box) (Var_59));
        }
        mercury__list__sort_2_p_0(TypeCtorInfo_153_153, BadCtors_29, &SortedBadCtors_34);
        BadCtorComponents_35 = mercury__list__map_2_f_0(TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[3], SortedBadCtors_34);
        BadCtorsList_37 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(BadCtorComponents_35, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[5]));
        TypeCtorInfo_159_159 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        conv7_Var_80 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_153_153, TypeCtorInfo_154_154, BadCtors_29, ((MR_Box) ((MR_String) "constructor")), ((MR_Box) ((MR_String) "constructors")));
        Var_80 = ((MR_String) conv7_Var_80);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[17])));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[43])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        BadCtorsVerboseErrorPieces_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_159_159, Var_75, BadCtorsList_37);
        Var_92 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_159_159, ContextPieces_13, BadCtorsErrorPieces_33);
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (Var_92));
        }
        {
          Var_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_94, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(2), Var_94, 1) = ((MR_Box) (BadCtorsVerboseErrorPieces_38));
        }
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
        }
        {
          BadCtorsMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BadCtorsMsg_39, 0) = ((MR_Box) (Context_17));
          MR_hl_field(MR_mktag(0), BadCtorsMsg_39, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (BadCtorsMsg_39));
          MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          BadCtorsSpec_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), BadCtorsSpec_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), BadCtorsSpec_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), BadCtorsSpec_40, 2) = ((MR_Box) (Var_99));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_47 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (BadCtorsSpec_40));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
        }
        *MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
    {
      MR_Word TypeCtorInfo_161_161;
      MR_Word InvalidRenamings_41;
      MR_Word InvalidRenamingSymNamePieces_42;
      MR_Word InvalidRenamingPieces_43;
      MR_Word InvalidRenamingMsg_44;
      MR_Word InvalidRenamingSpec_45;
      MR_Word Var_108;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_String Var_113;
      MR_Word Var_116;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_128;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_141;
      MR_Box conv9_Var_113;

      InvalidRenamings_41 = mercury__map__keys_1_f_0(TypeCtorInfo_153_153, TypeCtorInfo_154_154, Overrides_27);
      InvalidRenamingSymNamePieces_42 = mercury__list__map_2_f_0(TypeCtorInfo_153_153, (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_3[4], InvalidRenamings_41);
      TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      conv9_Var_113 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_153_153, TypeCtorInfo_154_154, InvalidRenamings_41, ((MR_Box) ((MR_String) "constructor does")), ((MR_Box) ((MR_String) "constructors do")));
      Var_113 = ((MR_String) conv9_Var_113);
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (Var_113));
      }
      {
        Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (TypeName_15));
        MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (TypeArity_16));
      }
      {
        Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
        MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (Var_120));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[7])));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_119));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Var_112));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[44])));
        MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_111));
      }
      Var_128 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(InvalidRenamingSymNamePieces_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[19]));
      InvalidRenamingPieces_43 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_161_161, Var_108, Var_128);
      Var_137 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_161_161, ContextPieces_13, InvalidRenamingPieces_43);
      {
        Var_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_136, 0) = ((MR_Box) (Var_137));
      }
      {
        Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (Var_136));
        MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        InvalidRenamingMsg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InvalidRenamingMsg_44, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), InvalidRenamingMsg_44, 1) = ((MR_Box) (Var_135));
      }
      {
        Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (InvalidRenamingMsg_44));
        MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        InvalidRenamingSpec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), InvalidRenamingSpec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), InvalidRenamingSpec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), InvalidRenamingSpec_45, 2) = ((MR_Box) (Var_141));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_47 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InvalidRenamingSpec_45));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
      }
      *MaybeMapping_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__check_name_map_for_conflicts_6_p_0(
  MR_Word Context_7,
  MR_Word ContextPieces_8,
  MR_Word NameMap_9,
  MR_Word * MaybeNameMap_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_39_39 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Word NamesAndForeignNames_12;
    MR_Word Var_13;

    NamesAndForeignNames_12 = mercury__map__to_assoc_list_1_f_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, NameMap_9);
    succeeded = mercury__bimap__from_assoc_list_2_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, NamesAndForeignNames_12, &Var_13);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeNameMap_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NameMap_9));
      }
      *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
    }
    else
    {
      MR_Word Msg_15;
      MR_Word Spec_16;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_36;

      *MaybeNameMap_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_8, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[25]));
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_32));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_7));
        MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_30));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Msg_15));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_36));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__2_35;

    conv0_LambdaHeadVar__2_35 = hlds__make_hlds__add_pragma__add_foreign_enum__IntroducedFrom__func__build_export_enum_overrides_map__181__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_35));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0(
  MR_Word TypeName_8,
  MR_Word Context_9,
  MR_Word ContextPieces_10,
  MR_Word OverridesList0_11,
  MR_Word * MaybeOverridesMap_12,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_55_55;
    MR_Word TypeCtorInfo_56_56;
    MR_Word ModuleName_14;
    MR_Word StripQualifiers_17;
    MR_Word OverridesList_23;
    MR_Word OverridesMap0_24;

    if (((MR_tag((MR_Word) TypeName_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_15;

      ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeName_8, (MR_Integer) 0)));
      Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), TypeName_8, (MR_Integer) 1)));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_foreign_enum", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_foreign_enum.build_export_enum_overrides_map\'/7", (MR_String) "unqualified type name while building override map");
        return;
      }
    }
    {
      StripQualifiers_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), StripQualifiers_17, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), StripQualifiers_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_foreign_enum__build_export_enum_overrides_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), StripQualifiers_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), StripQualifiers_17, 3) = ((MR_Box) (ModuleName_14));
    }
    TypeCtorInfo_55_55 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    OverridesList_23 = mercury__assoc_list__map_keys_only_2_f_0(TypeCtorInfo_55_55, TypeCtorInfo_55_55, TypeCtorInfo_56_56, StripQualifiers_17, OverridesList0_11);
    succeeded = mercury__bimap__from_assoc_list_2_p_0(TypeCtorInfo_55_55, TypeCtorInfo_56_56, OverridesList_23, &OverridesMap0_24);
    if (succeeded)
    {
      MR_Word OverridesMap_25;

      OverridesMap_25 = mercury__bimap__forward_map_1_f_0(TypeCtorInfo_55_55, TypeCtorInfo_56_56, OverridesMap0_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeOverridesMap_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OverridesMap_25));
      }
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      MR_Word Msg_27;
      MR_Word Spec_28;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_51;

      *MaybeOverridesMap_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, ContextPieces_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_foreign_enum_scalar_common_1[13]));
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      }
      {
        Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_9));
        MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_45));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_27));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), Spec_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_28, 2) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_30 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_pragma__add_foreign_enum____Unify____not_enum_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_pragma__add_foreign_enum____Compare____not_enum_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.make_hlds.add_pragma.add_foreign_enum.
