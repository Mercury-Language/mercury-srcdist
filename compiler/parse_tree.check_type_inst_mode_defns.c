/*
** Automatically generated from `check_type_inst_mode_defns.m'
** by the Mercury compiler,
** version rotd-2021-10-13
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module parse_tree.check_type_inst_mode_defns.
// :- implementation.

/*
INIT mercury__parse_tree__check_type_inst_mode_defns__init
ENDINIT
*/

#include "parse_tree.check_type_inst_mode_defns.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign_enum.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__one_or_more__pti_one_or_more_1__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2;

static const MR_PseudoTypeInfo parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_locn_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_locn_0_0[1];

static const MR_DuPtagLayout parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_locn_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_locn_0[1];

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_locn_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__ti_tree234_2parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0;

static const MR_PseudoTypeInfo parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_of_type_ctor_0_0[2];

static const MR_DuFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0;

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_of_type_ctor_0_0[1];

static const MR_DuPtagLayout parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_of_type_ctor_0[1];

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_of_type_ctor_0[1];

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_of_type_ctor_0[1];

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_0;

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_maybe_insist_on_defn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_maybe_insist_on_defn_0[2];

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_maybe_insist_on_defn_0[2];

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__1949__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1723__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1322__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_defn__1234__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__874__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_39);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__789__1_5_p_0(
  MR_Word TypeCtor_12,
  MR_Word AbstractStdDefn_18,
  MR_Word HeadVar__3_91,
  MR_Word HeadVar__4_92,
  MR_Word * HeadVar__5_93);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__decide_du_foreign_type_section__673__1_1_f_0(
  MR_Word HeadVar__1_67);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_foreign_type_section__696__1_5_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_Word HeadVar__3_78,
  MR_Word HeadVar__4_79,
  MR_Word * HeadVar__5_80);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_117_95_105_109_112_95_114_101_112_111_114_116_95_97_110_121_95_102_111_114_101_105_103_110_95_100_101_102_110_95_105_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word ForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_mode_definition_7_p_0(
  MR_Word TypeInfo_for_T1_72,
  MR_Word TypeInfo_for_T2_73,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeModeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_109_111_100_101_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeModeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_Word ModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0(
  MR_Word InsistOnDefn_9,
  MR_Word IntModeDefnMap_10,
  MR_Word ImpModeDefnMap_11,
  MR_Word ModeCtor_12,
  MR_Word STATE_VARIABLE_CheckedMap_0_33,
  MR_Word * STATE_VARIABLE_CheckedMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word AbsModeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(
  MR_Word TypeCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0(
  MR_Word ModeDefnMap_7,
  MR_Word ModeCtor_8,
  MR_Word * AbstractMaybeDefn_9,
  MR_Word * EqvMaybeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word ModeDefns_9,
  MR_Word * MaybeModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_inst_definition_7_p_0(
  MR_Word TypeInfo_for_T1_74,
  MR_Word TypeInfo_for_T2_75,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeInstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_105_110_115_116_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeInstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T1_60,
  MR_Word TypeInfo_for_T2_61,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_Word InstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0(
  MR_Word InsistOnDefn_9,
  MR_Word IntInstDefnMap_10,
  MR_Word ImpInstDefnMap_11,
  MR_Word InstCtor_12,
  MR_Word STATE_VARIABLE_CheckedMap_0_33,
  MR_Word * STATE_VARIABLE_CheckedMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(
  MR_Word InstCtor_5,
  MR_Word AbsInstDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(
  MR_Word TypeCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0(
  MR_Word InstDefnMap_7,
  MR_Word InstCtor_8,
  MR_Word * AbstractMaybeDefn_9,
  MR_Word * EqvMaybeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word InstDefns_9,
  MR_Word * MaybeInstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_field_name_5_p_0(
  MR_Word FieldNameTypeCtor_6,
  MR_Word FirstFNLocn_7,
  MR_Word FNLocn_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0(
  MR_Word FieldNameTypeCtor_5,
  MR_Word OoMFNLocns_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_arg_to_field_name_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_String CtorName_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_FieldNameMap_0_23,
  MR_Word * STATE_VARIABLE_FieldNameMap_24);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_34,
  MR_Word * STATE_VARIABLE_FieldNameMap_35);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(
  MR_String TypeOrEnum_8,
  MR_Word TypeCtor_9,
  MR_Word Lang_10,
  MR_Word LeastContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(
  MR_Word ForeignEnum_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(
  MR_Word ForeignEnumA_4,
  MR_Word ForeignEnumB_5,
  MR_Word * Cmp_6);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_type_defn_6_p_0(
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word OrigTypeDefn_9,
  MR_Word TypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_String UndefOrUndecl_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word Enum_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeDefnContext_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word IntForeignContext_7,
  MR_Word ImpForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word ForeignDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Foreign_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(
  MR_Word InsistOnDefn_10,
  MR_Word IntTypeDefnMap_11,
  MR_Word ImpTypeDefnMap_12,
  MR_Word ImpForeignEnumMap_13,
  MR_Word TypeCtor_14,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_131,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_132,
  MR_Word STATE_VARIABLE_Specs_0_133,
  MR_Word * STATE_VARIABLE_Specs_134);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_117_98_116_121_112_101_95_115_116_97_116_117_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word SubDefn_9,
  MR_Word SubSection_10,
  MR_Word IntAbstractStdMaybeDefn_11,
  MR_Word * Status_12,
  MR_Word * SrcDefnsInt_13,
  MR_Word * SrcDefnsImp_14);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0(
  MR_Word ForeignEnumMap_7,
  MR_Word TypeCtor_8,
  MR_Word * MaybeEnumCJCs_9,
  MR_Word * LeftOverEnumCJCse_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word ForeignEnums_10,
  MR_Word * MaybeForeignEnum_11,
  MR_Word * LeftOverForeignEnums_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DefnsCJCs_7,
  MR_Word * MaybeDefnCJCs_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(
  MR_Word InsistOnDefn_6,
  MR_Word TypeCtor_7,
  MR_Word AbsTypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_String Section_7,
  MR_Word MaybeImpAbstractDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CtorNames_12,
  MR_Word MaybeDefnCJCs_13,
  MR_Word MaybeEnumCJCs_14,
  MR_Word LeftOverEnumsCJCs_15,
  MR_Word * MaybeDefnOrEnumCJCs_16,
  MR_Word * SrcForeignDefns_17,
  MR_Word * SrcForeignEnums_18,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word CtorNames_13,
  MR_Word CtorNamesSet_14,
  MR_Word MaybeDefn_15,
  MR_Word MaybeEnum_16,
  MR_Word LeftOverEnums_17,
  MR_Word * MaybeDefnOrEnum_18,
  MR_Word * SrcForeignDefns_19,
  MR_Word * SrcForeignEnums_20,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word CtorNames_7,
  MR_Word CtorNamesSet_8,
  MR_Word ForeignEnum_9,
  MR_Word * MaybeCheckedForeignEnum_10);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word IntAbstractStdMaybeDefn_13,
  MR_Word ImpAbstractStdMaybeDefn_14,
  MR_Word IntMaybeDefnCJCs_15,
  MR_Word ImpMaybeDefnCJCs_16,
  MR_Word * Status_17,
  MR_Word * AbstractStdDefn_18,
  MR_Word * ChosenMaybeDefnCJCs_19,
  MR_Word * SrcDefns_20,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_Word DuSection_16,
  MR_Word IntAbstractStdMaybeDefn_17,
  MR_Word IntMaybeDefnCJCs_18,
  MR_Word ImpMaybeDefnCJCs_19,
  MR_Word * Status_20,
  MR_Word * ChosenSectionCJCs_21,
  MR_Word * ChosenMaybeDefnCJCs_22,
  MR_Word * SrcDefnsDuInt_23,
  MR_Word * SrcDefnsDuImp_24,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[106][2];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[24][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[8][7];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[1][12];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[5][11];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[10][8];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[5][5];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_8[1][2];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_9[1][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_10[2][6];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_11[3][10];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[2][4];




static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[106][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[4]))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the Mercury definition of"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for it."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so there must not be any"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type,"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That Mercury definition is here."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[19])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is defined to be a subtype,"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[30])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That subtype definition is here."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[22])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since the Mercury definition of"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be in the implementation section as well."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "any foreign type definitions for it"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the implementation section,"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without either"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a Mercury definition or a Mercury declaration for"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since some foreign language definition"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be in the interface section as well."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all other foreign language definitions for it"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the interface section,"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That foreign definition in the interface"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type such as"))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "only in the implementation section."))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(as opposed to declared)"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be defined"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this declaration of"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is redundant,"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the type has a definition in the"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this definition of"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with the"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That definition is here."))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with the"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in the"))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for the"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has this declaration, but it has no definition."))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition for"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The original definition is here."))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate occurrence of the field name"))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the function symbol"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the definition of"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first occurrence of this field name"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the inst has a"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the mode has a"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the mode"))
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row 105 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[8][7] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[5]))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__one_or_more__pti_one_or_more_1__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_maybe_insist_on_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[5][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_maybe_insist_on_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_maybe_insist_on_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[10][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_9[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_10[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_11[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  {
    (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__one_or_more__pti_one_or_more_1__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_inst_ctor_0__plain_parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_mode_ctor_0__plain_parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term__type_ctor_info_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term__type_ctor_info_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_locn_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0 = {
  (MR_String) "field_name_locn",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_locn_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_locn_0_0[1] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0
};

static const MR_DuPtagLayout parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_locn_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_locn_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_locn_0[1] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0
};

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_locn_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0_10001)),
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0_10001)),
  (MR_String) "parse_tree.check_type_inst_mode_defns",
  (MR_String) "field_name_locn",
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_locn_0 },
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_locn_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_locn_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__ti_tree234_2parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0),
    (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0_10001)),
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0_10001)),
  (MR_String) "parse_tree.check_type_inst_mode_defns",
  (MR_String) "field_name_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__tree234__ti_tree234_2parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_of_type_ctor_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)
};

static const MR_DuFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0 = {
  (MR_String) "field_name_of_type_ctor",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_of_type_ctor_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_of_type_ctor_0_0[1] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0
};

static const MR_DuPtagLayout parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_of_type_ctor_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_of_type_ctor_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_of_type_ctor_0[1] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0
};

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_of_type_ctor_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0_10001)),
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0_10001)),
  (MR_String) "parse_tree.check_type_inst_mode_defns",
  (MR_String) "field_name_of_type_ctor",
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_of_type_ctor_0 },
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_of_type_ctor_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_of_type_ctor_0,

};

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_0 = {
  (MR_String) "do_not_insist_on_defn",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_1 = {
  (MR_String) "do_insist_on_defn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_maybe_insist_on_defn_0[2] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_0,
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_maybe_insist_on_defn_0[2] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_1,
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_maybe_insist_on_defn_0_0
};

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_maybe_insist_on_defn_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_maybe_insist_on_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0_10001)),
  (MR_String) "parse_tree.check_type_inst_mode_defns",
  (MR_String) "maybe_insist_on_defn",
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_maybe_insist_on_defn_0 },
  {     parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_maybe_insist_on_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_maybe_insist_on_defn_0,

};

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__1949__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, (MR_Integer) 4))));

    mercury__term____Compare____context_0_0(LambdaHeadVar__3_28, Var_29, Var_30);
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1723__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 5))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, (MR_Integer) 5))));

    mercury__term____Compare____context_0_0(LambdaHeadVar__3_28, Var_29, Var_30);
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1322__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32)
{
  {
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_30, (MR_Integer) 4))));

    mercury__set__insert_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Var_47)), HeadVar__2_31, HeadVar__3_32);
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_defn__1234__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_26,
  MR_Word LambdaHeadVar__2_27,
  MR_Word * LambdaHeadVar__3_28)
{
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_26, (MR_Integer) 4))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_27, (MR_Integer) 4))));

    mercury__term____Compare____context_0_0(LambdaHeadVar__3_28, Var_29, Var_30);
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__874__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_39)
{
  {
    MR_bool succeeded;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[0]), ((MR_Box) (LeftOverEnums_17)), ((MR_Box) (HeadVar__2_39)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__789__1_5_p_0(
  MR_Word TypeCtor_12,
  MR_Word AbstractStdDefn_18,
  MR_Word HeadVar__3_91,
  MR_Word HeadVar__4_92,
  MR_Word * HeadVar__5_93)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_117_95_105_109_112_95_114_101_112_111_114_116_95_97_110_121_95_102_111_114_101_105_103_110_95_100_101_102_110_95_105_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(TypeCtor_12, AbstractStdDefn_18, HeadVar__3_91, HeadVar__4_92, HeadVar__5_93);
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__decide_du_foreign_type_section__673__1_1_f_0(
  MR_Word HeadVar__1_67)
{
  {
    MR_Word HeadVar__2_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_67, (MR_Integer) 4))));

    return HeadVar__2_68;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_foreign_type_section__696__1_5_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_Word HeadVar__3_78,
  MR_Word HeadVar__4_79,
  MR_Word * HeadVar__5_80)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_117_95_105_109_112_95_114_101_112_111_114_116_95_97_110_121_95_102_111_114_101_105_103_110_95_100_101_102_110_95_105_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(TypeCtor_14, DuDefn_15, HeadVar__3_78, HeadVar__4_79, HeadVar__5_80);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_117_95_105_109_112_95_114_101_112_111_114_116_95_97_110_121_95_102_111_114_101_105_103_110_95_100_101_102_110_95_105_110_95_105_110_116_95_95_91_49_93_95_48_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word ForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word ForeignPieces_10;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[42])));
    }
    {
      ForeignPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), ForeignPieces_10, 1) = ((MR_Box) (Var_17));
    }
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_8, (MR_Integer) 4))));
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (ForeignPieces_10));
    }
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_7, (MR_Integer) 4))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[26])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.du_imp_report_any_foreign_defn_in_int\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        parse_tree__prog_data____Compare____type_ctor_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_mode_definition_7_p_0(
  MR_Word TypeInfo_for_T1_72,
  MR_Word TypeInfo_for_T2_73,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeModeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_109_111_100_101_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(ModeCtor_8, OrigModeDefn_9, Kind_10, Section_11, MaybeModeDefn_12, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_109_111_100_101_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeModeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((MaybeModeDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word ModeDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeModeDefn_12, (MR_Integer) 0))));
    MR_Word MainPieces_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (ModeCtor_8));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[75])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_14, (MR_Integer) 4))));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (MainPieces_15));
    }
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_9, (MR_Integer) 4))));
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[79])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_incompatible_mode_definition\'/7"));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_17, 3) = ((MR_Box) (Var_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_Word ModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word MainPieces_12;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Kind_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (ModeCtor_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), MainPieces_12, 1) = ((MR_Box) (Var_19));
    }
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeDefn_10, (MR_Integer) 4))));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MainPieces_12));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigModeDefn_9, (MR_Integer) 4))));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_mode_defn\'/6"));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0(
  MR_Word InsistOnDefn_9,
  MR_Word IntModeDefnMap_10,
  MR_Word ImpModeDefnMap_11,
  MR_Word ModeCtor_12,
  MR_Word STATE_VARIABLE_CheckedMap_0_33,
  MR_Word * STATE_VARIABLE_CheckedMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word IntMaybeAbstractDefn_15;
    MR_Word IntMaybeEqvDefn_16;
    MR_Word ImpMaybeAbstractDefn_17;
    MR_Word ImpMaybeEqvDefn_18;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word EqvDefn_20;
    MR_String EqvWhere_21;
    MR_Word Status_22;
    MR_Word SrcDefns_24;
    MR_Word IntEqvDefn_19;

    parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0(IntModeDefnMap_10, ModeCtor_12, &IntMaybeAbstractDefn_15, &IntMaybeEqvDefn_16, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_37_37);
    parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0(ImpModeDefnMap_11, ModeCtor_12, &ImpMaybeAbstractDefn_17, &ImpMaybeEqvDefn_18, STATE_VARIABLE_Specs_37_37, &STATE_VARIABLE_Specs_38_38);
    succeeded = (IntMaybeEqvDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IntEqvDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, (MR_Integer) 0))));
      {
        MR_Word SrcDefnsInt_23;
        MR_Word Var_39;

        EqvDefn_20 = IntEqvDefn_19;
        EqvWhere_21 = (MR_String) "interface";
        Status_22 = (MR_Integer) 0;
        Var_39 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(IntEqvDefn_19);
        {
          SrcDefnsInt_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_23, 0) = ((MR_Box) (Var_39));
        }
        {
          SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_23));
          MR_hl_field(MR_mktag(0), SrcDefns_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word SrcDefnsImp_27;
      MR_Word Var_42;
      MR_Word SrcDefnsInt_62;

      succeeded = (ImpMaybeEqvDefn_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        EqvDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpMaybeEqvDefn_18, (MR_Integer) 0))));
        EqvWhere_21 = (MR_String) "implementation";
        if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_22 = (MR_Integer) 2;
          SrcDefnsInt_62 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word IntAbstractDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));
          MR_Word Var_41;

          Status_22 = (MR_Integer) 1;
          Var_41 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_26);
          {
            SrcDefnsInt_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SrcDefnsInt_62, 0) = ((MR_Box) (Var_41));
          }
        }
        Var_42 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(EqvDefn_20);
        {
          SrcDefnsImp_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsImp_27, 0) = ((MR_Box) (Var_42));
        }
        {
          SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_62));
          MR_hl_field(MR_mktag(0), SrcDefns_24, 1) = ((MR_Box) (SrcDefnsImp_27));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word StdDefn_28;
      MR_Word CheckedDefn_29;
      MR_Word Var_45;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(ModeCtor_12, (MR_String) "definition", EqvWhere_21, ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_36);
      Var_45 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(EqvDefn_20);
      {
        StdDefn_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StdDefn_28, 0) = (MR_Box) ((MR_Unsigned) (Status_22));
        MR_hl_field(MR_mktag(0), StdDefn_28, 1) = ((MR_Box) (Var_45));
      }
      {
        CheckedDefn_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CheckedDefn_29, 0) = ((MR_Box) (StdDefn_28));
        MR_hl_field(MR_mktag(0), CheckedDefn_29, 1) = ((MR_Box) (SrcDefns_24));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_29)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
    }
    else
    if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ImpMaybeAbstractDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.check_mode_ctor_defns\'/8", (MR_String) "no defns at all");
          return;
        }
      else
      {
        MR_Word ImpAbstractDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpMaybeAbstractDefn_17, (MR_Integer) 0))));

        switch (InsistOnDefn_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(ModeCtor_12, ImpAbstractDefn_31, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_36);
              *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ImpDefn_32;
              MR_Word Var_50;
              MR_Word Var_52;
              MR_Word SrcDefns_78;
              MR_Word StdDefn_79;
              MR_Word CheckedDefn_80;

              Var_50 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(ImpAbstractDefn_31);
              {
                StdDefn_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), StdDefn_79, 1) = ((MR_Box) (Var_50));
              }
              ImpDefn_32 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(ImpAbstractDefn_31);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ImpDefn_32));
              }
              {
                SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), SrcDefns_78, 1) = ((MR_Box) (Var_52));
              }
              {
                CheckedDefn_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedDefn_80, 0) = ((MR_Box) (StdDefn_79));
                MR_hl_field(MR_mktag(0), CheckedDefn_80, 1) = ((MR_Box) (SrcDefns_78));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_80)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
              *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_38_38;
            }
            break;
        }
      }
    else
    {
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(ModeCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_56_56);
      switch (InsistOnDefn_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(ModeCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_36);
            *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word IntDefn_30;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word SrcDefns_65;
            MR_Word StdDefn_66;
            MR_Word CheckedDefn_67;

            Var_58 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_74);
            {
              StdDefn_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), StdDefn_66, 1) = ((MR_Box) (Var_58));
            }
            IntDefn_30 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_74);
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (IntDefn_30));
            }
            {
              SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SrcDefns_65, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
              MR_hl_field(MR_mktag(0), CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_56_56;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(
  MR_Word ModeCtor_5,
  MR_Word AbsModeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_25;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (ModeCtor_5));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[103])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
    }
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsModeDefn_6, (MR_Integer) 4))));
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_mode\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(
  MR_Word TypeCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  if ((MaybeImpAbstractDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
  else
  {
    MR_Word ImpAbstractDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpAbstractDefn_10, (MR_Integer) 0))));
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (DeclOrDefn_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Section_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[102])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_12, (MR_Integer) 4))));
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_mode_in_imp\'/6"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_28;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__1949__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0(
  MR_Word ModeDefnMap_7,
  MR_Word ModeCtor_8,
  MR_Word * AbstractMaybeDefn_9,
  MR_Word * EqvMaybeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word AllDefns_12;
    MR_Box conv0_AllDefns_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ModeDefnMap_7, ((MR_Box) (ModeCtor_8)), &conv0_AllDefns_12);
    if (succeeded)
    {
      AllDefns_12 = ((MR_Word) (conv0_AllDefns_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_12, (MR_Integer) 0))));
      MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_18_18;

      if ((AbstractDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 1))));
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 0))));

        if ((Var_72 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AbstractMaybeDefn_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_73));
          }
          STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
        }
        else
        {
          MR_Word SortedModeDefns_40;
          MR_Word HeadModeDefn_41;
          MR_Word TailModeDefns_42;
          MR_Word Var_49;
          MR_Box conv2_HeadModeDefn_41;
          MR_Box conv4_STATE_VARIABLE_Specs_18_18;

          mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[105]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[1]), AbstractDefns_13, &SortedModeDefns_40);
          mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[105]), SortedModeDefns_40, &conv2_HeadModeDefn_41, &TailModeDefns_42);
          HeadModeDefn_41 = ((MR_Word) (conv2_HeadModeDefn_41));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AbstractMaybeDefn_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadModeDefn_41));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[4]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
            MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) ((MR_String) "abstract mode"));
            MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (ModeCtor_8));
            MR_hl_field(MR_mktag(0), Var_49, 7) = ((MR_Box) (HeadModeDefn_41));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[105]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_49, TailModeDefns_42, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_18_18);
          STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_18));
        }
      }
      parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0), (MR_String) "mode", ModeCtor_8, EqvDefns_14, EqvMaybeDefn_10, STATE_VARIABLE_Specs_18_18, STATE_VARIABLE_Specs_16);
    }
    else
    {
      *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_28;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__1949__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word ModeDefns_9,
  MR_Word * MaybeModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if ((ModeDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeModeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
  else
  {
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeDefns_9, (MR_Integer) 1))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeDefns_9, (MR_Integer) 0))));

    if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModeDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
      }
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word TypeInfo_50_50;
      MR_Word CompareModeDefnsByContext_16;
      MR_Word SortedModeDefns_20;
      MR_Word HeadModeDefn_21;
      MR_Word TailModeDefns_22;
      MR_Word Var_31;
      MR_Word conv1_SortedModeDefns_20;
      MR_Box conv3_HeadModeDefn_21;
      MR_Word conv2_TailModeDefns_22;
      MR_Box conv5_STATE_VARIABLE_Specs_24;

      {
        CompareModeDefnsByContext_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CompareModeDefnsByContext_16, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7]));
        MR_hl_field(MR_mktag(0), CompareModeDefnsByContext_16, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_1));
        MR_hl_field(MR_mktag(0), CompareModeDefnsByContext_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), CompareModeDefnsByContext_16, 3) = ((MR_Box) (TypeInfo_for_T_47));
      }
      {
        TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1));
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_for_T_47));
      }
      mercury__list__sort_3_p_0(TypeInfo_50_50, (MR_Word) (CompareModeDefnsByContext_16), (MR_Word) (ModeDefns_9), &conv1_SortedModeDefns_20);
      SortedModeDefns_20 = (MR_Word) (conv1_SortedModeDefns_20);
      mercury__list__det_head_tail_3_p_0(TypeInfo_50_50, (MR_Word) (SortedModeDefns_20), &conv3_HeadModeDefn_21, &conv2_TailModeDefns_22);
      HeadModeDefn_21 = ((MR_Word) (conv3_HeadModeDefn_21));
      TailModeDefns_22 = (MR_Word) (conv2_TailModeDefns_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModeDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadModeDefn_21));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_mode_defn_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeInfo_for_T_47));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeInfo_for_T_47));
        MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Kind_7));
        MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (ModeCtor_8));
        MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (HeadModeDefn_21));
      }
      mercury__list__foldl_4_p_0(TypeInfo_50_50, (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (Var_31), (MR_Word) (TailModeDefns_22), ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv5_STATE_VARIABLE_Specs_24);
      *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_24));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_inst_definition_7_p_0(
  MR_Word TypeInfo_for_T1_74,
  MR_Word TypeInfo_for_T2_75,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeInstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_105_110_115_116_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(InstCtor_8, OrigInstDefn_9, Kind_10, Section_11, MaybeInstDefn_12, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_97_110_121_95_105_110_99_111_109_112_97_116_105_98_108_101_95_105_110_115_116_95_100_101_102_105_110_105_116_105_111_110_95_95_91_49_44_32_50_93_95_48_7_p_0(
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeInstDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((MaybeInstDefn_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word InstDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstDefn_12, (MR_Integer) 0))));
    MR_Word MainPieces_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (InstCtor_8));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[75])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_14, (MR_Integer) 5))));
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (MainPieces_15));
    }
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstDefn_9, (MR_Integer) 5))));
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[79])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_incompatible_inst_definition\'/7"));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_17, 3) = ((MR_Box) (Var_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T1_60,
  MR_Word TypeInfo_for_T2_61,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_Word InstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word MainPieces_12;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Kind_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (InstCtor_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), MainPieces_12, 1) = ((MR_Box) (Var_19));
    }
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstDefn_10, (MR_Integer) 5))));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MainPieces_12));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigInstDefn_9, (MR_Integer) 5))));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_inst_defn\'/6"));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0(
  MR_Word InsistOnDefn_9,
  MR_Word IntInstDefnMap_10,
  MR_Word ImpInstDefnMap_11,
  MR_Word InstCtor_12,
  MR_Word STATE_VARIABLE_CheckedMap_0_33,
  MR_Word * STATE_VARIABLE_CheckedMap_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  {
    MR_bool succeeded;
    MR_Word IntMaybeAbstractDefn_15;
    MR_Word IntMaybeEqvDefn_16;
    MR_Word ImpMaybeAbstractDefn_17;
    MR_Word ImpMaybeEqvDefn_18;
    MR_Word STATE_VARIABLE_Specs_37_37;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word EqvDefn_20;
    MR_String EqvWhere_21;
    MR_Word Status_22;
    MR_Word SrcDefns_24;
    MR_Word IntEqvDefn_19;

    parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0(IntInstDefnMap_10, InstCtor_12, &IntMaybeAbstractDefn_15, &IntMaybeEqvDefn_16, STATE_VARIABLE_Specs_0_35, &STATE_VARIABLE_Specs_37_37);
    parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0(ImpInstDefnMap_11, InstCtor_12, &ImpMaybeAbstractDefn_17, &ImpMaybeEqvDefn_18, STATE_VARIABLE_Specs_37_37, &STATE_VARIABLE_Specs_38_38);
    succeeded = (IntMaybeEqvDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IntEqvDefn_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, (MR_Integer) 0))));
      {
        MR_Word SrcDefnsInt_23;
        MR_Word Var_39;

        EqvDefn_20 = IntEqvDefn_19;
        EqvWhere_21 = (MR_String) "interface";
        Status_22 = (MR_Integer) 0;
        Var_39 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(IntEqvDefn_19);
        {
          SrcDefnsInt_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_23, 0) = ((MR_Box) (Var_39));
        }
        {
          SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_23));
          MR_hl_field(MR_mktag(0), SrcDefns_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word SrcDefnsImp_27;
      MR_Word Var_42;
      MR_Word SrcDefnsInt_62;

      succeeded = (ImpMaybeEqvDefn_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        EqvDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpMaybeEqvDefn_18, (MR_Integer) 0))));
        EqvWhere_21 = (MR_String) "implementation";
        if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_22 = (MR_Integer) 2;
          SrcDefnsInt_62 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word IntAbstractDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));
          MR_Word Var_41;

          Status_22 = (MR_Integer) 1;
          Var_41 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_26);
          {
            SrcDefnsInt_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SrcDefnsInt_62, 0) = ((MR_Box) (Var_41));
          }
        }
        Var_42 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(EqvDefn_20);
        {
          SrcDefnsImp_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsImp_27, 0) = ((MR_Box) (Var_42));
        }
        {
          SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_62));
          MR_hl_field(MR_mktag(0), SrcDefns_24, 1) = ((MR_Box) (SrcDefnsImp_27));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word StdDefn_28;
      MR_Word CheckedDefn_29;
      MR_Word Var_45;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(InstCtor_12, (MR_String) "definition", EqvWhere_21, ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_36);
      Var_45 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(EqvDefn_20);
      {
        StdDefn_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), StdDefn_28, 0) = (MR_Box) ((MR_Unsigned) (Status_22));
        MR_hl_field(MR_mktag(0), StdDefn_28, 1) = ((MR_Box) (Var_45));
      }
      {
        CheckedDefn_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CheckedDefn_29, 0) = ((MR_Box) (StdDefn_28));
        MR_hl_field(MR_mktag(0), CheckedDefn_29, 1) = ((MR_Box) (SrcDefns_24));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_29)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
    }
    else
    if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((ImpMaybeAbstractDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.check_inst_ctor_defns\'/8", (MR_String) "no defns at all");
          return;
        }
      else
      {
        MR_Word ImpAbstractDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpMaybeAbstractDefn_17, (MR_Integer) 0))));

        switch (InsistOnDefn_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(InstCtor_12, ImpAbstractDefn_31, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_36);
              *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ImpDefn_32;
              MR_Word Var_50;
              MR_Word Var_52;
              MR_Word SrcDefns_78;
              MR_Word StdDefn_79;
              MR_Word CheckedDefn_80;

              Var_50 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(ImpAbstractDefn_31);
              {
                StdDefn_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), StdDefn_79, 1) = ((MR_Box) (Var_50));
              }
              ImpDefn_32 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(ImpAbstractDefn_31);
              {
                Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (ImpDefn_32));
              }
              {
                SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(0), SrcDefns_78, 1) = ((MR_Box) (Var_52));
              }
              {
                CheckedDefn_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedDefn_80, 0) = ((MR_Box) (StdDefn_79));
                MR_hl_field(MR_mktag(0), CheckedDefn_80, 1) = ((MR_Box) (SrcDefns_78));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_80)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
              *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_38_38;
            }
            break;
        }
      }
    else
    {
      MR_Word STATE_VARIABLE_Specs_56_56;
      MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(InstCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_56_56);
      switch (InsistOnDefn_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(InstCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_56_56, STATE_VARIABLE_Specs_36);
            *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word IntDefn_30;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word SrcDefns_65;
            MR_Word StdDefn_66;
            MR_Word CheckedDefn_67;

            Var_58 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_74);
            {
              StdDefn_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), StdDefn_66, 1) = ((MR_Box) (Var_58));
            }
            IntDefn_30 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_74);
            {
              Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (IntDefn_30));
            }
            {
              SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SrcDefns_65, 0) = ((MR_Box) (Var_59));
              MR_hl_field(MR_mktag(0), SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
              MR_hl_field(MR_mktag(0), CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_56_56;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(
  MR_Word InstCtor_5,
  MR_Word AbsInstDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_25;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (InstCtor_5));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[101])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
    }
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsInstDefn_6, (MR_Integer) 5))));
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_inst\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(
  MR_Word TypeCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  if ((MaybeImpAbstractDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
  else
  {
    MR_Word ImpAbstractDefn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpAbstractDefn_10, (MR_Integer) 0))));
    MR_Word Pieces_13;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_43;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (DeclOrDefn_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Section_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[100])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_12, (MR_Integer) 5))));
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_inst_in_imp\'/6"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_14, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_14, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LambdaHeadVar__3_28;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1723__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0(
  MR_Word InstDefnMap_7,
  MR_Word InstCtor_8,
  MR_Word * AbstractMaybeDefn_9,
  MR_Word * EqvMaybeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;
    MR_Word AllDefns_12;
    MR_Box conv0_AllDefns_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), InstDefnMap_7, ((MR_Box) (InstCtor_8)), &conv0_AllDefns_12);
    if (succeeded)
    {
      AllDefns_12 = ((MR_Word) (conv0_AllDefns_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_12, (MR_Integer) 0))));
      MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_12, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_18_18;

      if ((AbstractDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 1))));
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 0))));

        if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AbstractMaybeDefn_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_75));
          }
          STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
        }
        else
        {
          MR_Word SortedInstDefns_40;
          MR_Word HeadInstDefn_41;
          MR_Word TailInstDefns_42;
          MR_Word Var_49;
          MR_Box conv2_HeadInstDefn_41;
          MR_Box conv4_STATE_VARIABLE_Specs_18_18;

          mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[104]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[0]), AbstractDefns_13, &SortedInstDefns_40);
          mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[104]), SortedInstDefns_40, &conv2_HeadInstDefn_41, &TailInstDefns_42);
          HeadInstDefn_41 = ((MR_Word) (conv2_HeadInstDefn_41));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AbstractMaybeDefn_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInstDefn_41));
          }
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
            MR_hl_field(MR_mktag(0), Var_49, 5) = ((MR_Box) ((MR_String) "abstract inst"));
            MR_hl_field(MR_mktag(0), Var_49, 6) = ((MR_Box) (InstCtor_8));
            MR_hl_field(MR_mktag(0), Var_49, 7) = ((MR_Box) (HeadInstDefn_41));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[104]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_49, TailInstDefns_42, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_18_18);
          STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_18));
        }
      }
      parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0), (MR_String) "inst", InstCtor_8, EqvDefns_14, EqvMaybeDefn_10, STATE_VARIABLE_Specs_18_18, STATE_VARIABLE_Specs_16);
    }
    else
    {
      *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_28;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1723__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word InstDefns_9,
  MR_Word * MaybeInstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if ((InstDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeInstDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
  else
  {
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstDefns_9, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InstDefns_9, (MR_Integer) 0))));

    if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
      }
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word TypeInfo_52_52;
      MR_Word CompareInstDefnsByContext_16;
      MR_Word SortedInstDefns_20;
      MR_Word HeadInstDefn_21;
      MR_Word TailInstDefns_22;
      MR_Word Var_31;
      MR_Word conv1_SortedInstDefns_20;
      MR_Box conv3_HeadInstDefn_21;
      MR_Word conv2_TailInstDefns_22;
      MR_Box conv5_STATE_VARIABLE_Specs_24;

      {
        CompareInstDefnsByContext_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CompareInstDefnsByContext_16, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6]));
        MR_hl_field(MR_mktag(0), CompareInstDefnsByContext_16, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_1));
        MR_hl_field(MR_mktag(0), CompareInstDefnsByContext_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), CompareInstDefnsByContext_16, 3) = ((MR_Box) (TypeInfo_for_T_49));
      }
      {
        TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1));
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_49));
      }
      mercury__list__sort_3_p_0(TypeInfo_52_52, (MR_Word) (CompareInstDefnsByContext_16), (MR_Word) (InstDefns_9), &conv1_SortedInstDefns_20);
      SortedInstDefns_20 = (MR_Word) (conv1_SortedInstDefns_20);
      mercury__list__det_head_tail_3_p_0(TypeInfo_52_52, (MR_Word) (SortedInstDefns_20), &conv3_HeadInstDefn_21, &conv2_TailInstDefns_22);
      HeadInstDefn_21 = ((MR_Word) (conv3_HeadInstDefn_21));
      TailInstDefns_22 = (MR_Word) (conv2_TailInstDefns_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeInstDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInstDefn_21));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_inst_defn_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Kind_7));
        MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (InstCtor_8));
        MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (HeadInstDefn_21));
      }
      mercury__list__foldl_4_p_0(TypeInfo_52_52, (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (Var_31), (MR_Word) (TailInstDefns_22), ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv5_STATE_VARIABLE_Specs_24);
      *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_24));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_field_name_5_p_0(
  MR_Word FieldNameTypeCtor_6,
  MR_Word FirstFNLocn_7,
  MR_Word FNLocn_8,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;
    MR_String FieldName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), FieldNameTypeCtor_6, (MR_Integer) 0))));
    MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldNameTypeCtor_6, (MR_Integer) 1))));
    MR_Word FirstContext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstFNLocn_7, (MR_Integer) 0))));
    MR_String FirstCtorName_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), FirstFNLocn_7, (MR_Integer) 1))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FNLocn_8, (MR_Integer) 0))));
    MR_String CtorName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), FNLocn_8, (MR_Integer) 1))));
    MR_Word InitPieces_16;
    MR_Word MainPieces_17;
    MR_Word Spec_19;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (FieldName_10));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      InitPieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InitPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[95])));
      MR_hl_field(MR_mktag(1), InitPieces_16, 1) = ((MR_Box) (Var_24));
    }
    succeeded = (strcmp(CtorName_15, FirstCtorName_13) == 0);
    if (succeeded)
    {
      MR_Word Var_27;
      MR_Word Var_30;
      MR_Word Var_31;

      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (FirstCtorName_13));
      }
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
      }
      {
        Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[96])));
        MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
      }
      MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_16, Var_27);
    }
    else
    {
      MR_Word Var_38;
      MR_Word Var_41;
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (TypeCtor_11));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[97])));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InitPieces_16, Var_38);
    }
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (MainPieces_17));
    }
    {
      Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (FirstContext_12));
      MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[99])));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
    }
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_field_name\'/5"));
      MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_19, 3) = ((MR_Box) (Var_60));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_21;

    parse_tree__check_type_inst_mode_defns__report_duplicate_field_name_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0(
  MR_Word FieldNameTypeCtor_5,
  MR_Word OoMFNLocns_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word FNLocns_8;
    MR_Word SortedFNLocns_9;

    FNLocns_8 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0), OoMFNLocns_6);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0), FNLocns_8, &SortedFNLocns_9);
    if ((SortedFNLocns_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_duplicate_field_names\'/4", (MR_String) "SortedFNLocns = []");
        return;
      }
    else
    {
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 1))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 0))));

      if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      else
      {
        MR_Word Var_17;
        MR_Box conv1_STATE_VARIABLE_Specs_16;

        {
          Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[9]));
          MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1));
          MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (FieldNameTypeCtor_5));
          MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (Var_28));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_17, Var_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv1_STATE_VARIABLE_Specs_16);
        *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16));
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_arg_to_field_name_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_String CtorName_7,
  MR_Word CtorArg_8,
  MR_Word STATE_VARIABLE_FieldNameMap_0_23,
  MR_Word * STATE_VARIABLE_FieldNameMap_24)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCtorFieldName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorArg_8, (MR_Integer) 0))));

    if ((MaybeCtorFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FieldNameMap_24 = STATE_VARIABLE_FieldNameMap_0_23;
    else
    {
      MR_Word CtorFieldName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_10, (MR_Integer) 0))));
      MR_Word FieldSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 0))));
      MR_Word FieldNameContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CtorFieldName_13, (MR_Integer) 1))));
      MR_String FieldName_16;
      MR_Word FieldNameTypeCtor_17;
      MR_Word FNLocn_18;
      MR_Word OoMFNLocns0_19;
      MR_Box conv0_OoMFNLocns0_19;

      FieldName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_14);
      {
        FieldNameTypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FieldNameTypeCtor_17, 0) = ((MR_Box) (FieldName_16));
        MR_hl_field(MR_mktag(0), FieldNameTypeCtor_17, 1) = ((MR_Box) (TypeCtor_6));
      }
      {
        FNLocn_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FNLocn_18, 0) = ((MR_Box) (FieldNameContext_15));
        MR_hl_field(MR_mktag(0), FNLocn_18, 1) = ((MR_Box) (CtorName_7));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), STATE_VARIABLE_FieldNameMap_0_23, ((MR_Box) (FieldNameTypeCtor_17)), &conv0_OoMFNLocns0_19);
      if (succeeded)
      {
        OoMFNLocns0_19 = ((MR_Word) (conv0_OoMFNLocns0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word HeadFNLocn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMFNLocns0_19, (MR_Integer) 0))));
        MR_Word TailFNLocns_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMFNLocns0_19, (MR_Integer) 1))));
        MR_Word OoMFNLocns_22;
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (HeadFNLocn_20));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (TailFNLocns_21));
        }
        {
          OoMFNLocns_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMFNLocns_22, 0) = ((MR_Box) (FNLocn_18));
          MR_hl_field(MR_mktag(0), OoMFNLocns_22, 1) = ((MR_Box) (Var_25));
        }
        mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), ((MR_Box) (FieldNameTypeCtor_17)), ((MR_Box) (OoMFNLocns_22)), STATE_VARIABLE_FieldNameMap_0_23, STATE_VARIABLE_FieldNameMap_24);
      }
      else
      {
        MR_Word OoMFNLocns_29;

        {
          OoMFNLocns_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), OoMFNLocns_29, 0) = ((MR_Box) (FNLocn_18));
          MR_hl_field(MR_mktag(0), OoMFNLocns_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), ((MR_Box) (FieldNameTypeCtor_17)), ((MR_Box) (OoMFNLocns_29)), STATE_VARIABLE_FieldNameMap_0_23, STATE_VARIABLE_FieldNameMap_24);
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FieldNameMap_24;

    parse_tree__check_type_inst_mode_defns__add_data_ctor_arg_to_field_name_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_24);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_24));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16)
{
  {
    MR_Word CtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2))));
    MR_Word CtorArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3))));
    MR_String CtorName_14;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_FieldNameMap_16;

    CtorName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[8]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeCtor_5));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (CtorName_14));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_17, CtorArgs_11, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_15)), &conv1_STATE_VARIABLE_FieldNameMap_16);
    *STATE_VARIABLE_FieldNameMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_FieldNameMap_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FieldNameMap_16;

    parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FieldNameMap_16);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FieldNameMap_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_FieldNameMap_16;

    parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word CheckedDefn_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_34,
  MR_Word * STATE_VARIABLE_FieldNameMap_35)
{
  if (((MR_tag((MR_Word) CheckedDefn_6)) == (MR_Integer) 0))
    *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
  else
  {
    MR_Word CheckedStdDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedDefn_6, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) CheckedStdDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckedStdDefn_10, (MR_Integer) 1))));
          MR_Word DetailsSub_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_29, (MR_Integer) 2))));
          MR_Word OoMCtors_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_30, (MR_Integer) 1))));
          MR_Word HeadCtor_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_59, (MR_Integer) 0))));
          MR_Word TailCtors_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_59, (MR_Integer) 1))));
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Box conv3_STATE_VARIABLE_FieldNameMap_35;

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (TypeCtor_5));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (HeadCtor_60));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (TailCtors_61));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_62, Var_63, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_34)), &conv3_STATE_VARIABLE_FieldNameMap_35);
          *STATE_VARIABLE_FieldNameMap_35 = ((MR_Word) (conv3_STATE_VARIABLE_FieldNameMap_35));
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CheckedStdDefn_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuDefn_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CheckedStdDefn_10, (MR_Integer) 2))));
              MR_Word DetailsDu_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_23, (MR_Integer) 2))));
              MR_Word OoMCtors_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_25, (MR_Integer) 0))));
              MR_Word HeadCtor_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_26, (MR_Integer) 0))));
              MR_Word TailCtors_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_26, (MR_Integer) 1))));
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Box conv1_STATE_VARIABLE_FieldNameMap_35;

              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[5]));
                MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_1));
                MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (TypeCtor_5));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (HeadCtor_32));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (TailCtors_33));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_36, Var_37, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_34)), &conv1_STATE_VARIABLE_FieldNameMap_35);
              *STATE_VARIABLE_FieldNameMap_35 = ((MR_Word) (conv1_STATE_VARIABLE_FieldNameMap_35));
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(
  MR_String TypeOrEnum_8,
  MR_Word TypeCtor_9,
  MR_Word Lang_10,
  MR_Word LeastContext_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word MainPieces_14;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_String Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (TypeOrEnum_8));
    }
    Var_28 = libs__globals__foreign_language_string_1_f_0(Lang_10);
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_27, 0) = ((MR_Box) (Var_28));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[93])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      MainPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), MainPieces_14, 1) = ((MR_Box) (Var_21));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (MainPieces_14));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (LeastContext_11));
      MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_foreign_defn\'/7"));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Var_48));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(
  MR_Word ForeignEnum_3)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_3, (MR_Integer) 3))));

    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(
  MR_Word ForeignEnumA_4,
  MR_Word ForeignEnumB_5,
  MR_Word * Cmp_6)
{
  {
    MR_Word ContextA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumA_4, (MR_Integer) 3))));
    MR_Word ContextB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumB_5, (MR_Integer) 3))));

    mercury__term____Compare____context_0_0(Cmp_6, ContextA_7, ContextB_8);
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_type_defn_6_p_0(
  MR_Word TypeInfo_for_T1_58,
  MR_Word TypeInfo_for_T2_59,
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word OrigTypeDefn_9,
  MR_Word TypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word MainPieces_12;
    MR_Word Spec_14;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (Kind_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[88])));
      MR_hl_field(MR_mktag(1), MainPieces_12, 1) = ((MR_Box) (Var_19));
    }
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_10, (MR_Integer) 4))));
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (MainPieces_12));
    }
    Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeDefn_9, (MR_Integer) 4))));
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_type_defn\'/6"));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_14, 3) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_String UndefOrUndecl_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_38;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (UndefOrUndecl_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[84])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_8, (MR_Integer) 3))));
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_foreign_enum_for_undefined_type\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word Enum_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word MainPieces_14;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
      MR_hl_field(MR_mktag(1), MainPieces_14, 1) = ((MR_Box) (Var_21));
    }
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_12, (MR_Integer) 3))));
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (MainPieces_14));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (UsedContext_9));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[79])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_incompatible_foreign_enum\'/7"));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word UsedContext_9,
  MR_String Kind_10,
  MR_String Section_11,
  MR_Word MaybeDefnContext_12,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  if ((MaybeDefnContext_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  else
  {
    MR_Word DefnContext_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnContext_12, (MR_Integer) 0))));
    MR_Word MainPieces_15;
    MR_Word Spec_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (TypeCtor_8));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Kind_10));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Section_11));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[75])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[74])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      MainPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[73])));
      MR_hl_field(MR_mktag(1), MainPieces_15, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (DefnContext_14));
      MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (MainPieces_15));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (UsedContext_9));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[79])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Spec_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_17, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_incompatible_type_definition\'/7"));
      MR_hl_field(MR_mktag(0), Spec_17, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_17, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_17, 3) = ((MR_Box) (Var_54));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_19 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word IntForeignContext_7,
  MR_Word ImpForeignDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word ImpPieces_10;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[56])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      ImpPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), ImpPieces_10, 1) = ((MR_Box) (Var_17));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpForeignDefn_8, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (ImpPieces_10));
    }
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (IntForeignContext_7));
      MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[60])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.foreign_int_report_any_foreign_defn_in_imp\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word ForeignDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  {
    MR_Word Pieces_8;
    MR_Word Spec_9;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_39;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (TypeCtor_5));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[28])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
    }
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_6, (MR_Integer) 4))));
    {
      Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_foreign_type_without_declaration\'/4"));
      MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_9, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Spec_9, 4) = ((MR_Box) (Pieces_8));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_11 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word EnumPieces_10;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[35])));
    }
    {
      EnumPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), EnumPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])));
      MR_hl_field(MR_mktag(1), EnumPieces_10, 1) = ((MR_Box) (Var_17));
    }
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_8, (MR_Integer) 3))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (EnumPieces_10));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTypeDefn_7, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.subtype_report_any_foreign_enum\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Foreign_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word ForeignPieces_10;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[32])));
    }
    {
      ForeignPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ForeignPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])));
      MR_hl_field(MR_mktag(1), ForeignPieces_10, 1) = ((MR_Box) (Var_17));
    }
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Foreign_8, (MR_Integer) 4))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (ForeignPieces_10));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubTypeDefn_7, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.subtype_report_any_foreign_type\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DuDefn_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word EnumPieces_10;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[24])));
    }
    {
      EnumPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), EnumPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), EnumPieces_10, 1) = ((MR_Box) (Var_17));
    }
    Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_8, (MR_Integer) 3))));
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (EnumPieces_10));
    }
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_7, (MR_Integer) 4))));
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[26])));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.non_enum_du_report_any_foreign_enum\'/5"));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(0), Spec_12, 3) = ((MR_Box) (Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv33_STATE_VARIABLE_Specs_13;

    parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv33_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv33_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv31_STATE_VARIABLE_Specs_13;

    parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv31_STATE_VARIABLE_Specs_13);
    *wrapper_arg_3 = ((MR_Box) (conv31_STATE_VARIABLE_Specs_13));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv29_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv29_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv27_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv25_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv23_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv23_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv23_STATE_VARIABLE_Specs_19));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv21_HeadVar__2_2;

    conv21_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv21_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv20_HeadVar__2_2;

    conv20_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv20_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv18_STATE_VARIABLE_Specs_14;

    parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv16_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_STATE_VARIABLE_Specs_14;

    parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Specs_14;

    parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_14));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_19));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Specs_19;

    parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_definition_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_19);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_19));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(
  MR_Word InsistOnDefn_10,
  MR_Word IntTypeDefnMap_11,
  MR_Word ImpTypeDefnMap_12,
  MR_Word ImpForeignEnumMap_13,
  MR_Word TypeCtor_14,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_131,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_132,
  MR_Word STATE_VARIABLE_Specs_0_133,
  MR_Word * STATE_VARIABLE_Specs_134)
{
  {
    MR_bool succeeded;
    MR_Word IntMaybeDefn_17;
    MR_Word ImpMaybeDefn_18;
    MR_Word ImpMaybeEnumCJCs_19;
    MR_Word ImpLeftOverEnumsCJCs_20;
    MR_Word ImpEnums_25;
    MR_Word IntAbstractSolverMaybeDefn_26;
    MR_Word IntSolverMaybeDefn_27;
    MR_Word IntAbstractStdMaybeDefn_28;
    MR_Word IntEqvMaybeDefn_29;
    MR_Word IntDuMaybeDefn_30;
    MR_Word IntSubMaybeDefn_31;
    MR_Word IntMaybeDefnCJCs_32;
    MR_Word ImpAbstractSolverMaybeDefn_33;
    MR_Word ImpSolverMaybeDefn_34;
    MR_Word ImpAbstractStdMaybeDefn_35;
    MR_Word ImpEqvMaybeDefn_36;
    MR_Word ImpDuMaybeDefn_37;
    MR_Word ImpSubMaybeDefn_38;
    MR_Word ImpMaybeDefnCJCs_39;
    MR_Word IntMaybeDefnC_40;
    MR_Word IntMaybeDefnJava_41;
    MR_Word IntMaybeDefnCsharp_42;
    MR_Word ImpMaybeDefnC_43;
    MR_Word ImpMaybeDefnJava_44;
    MR_Word ImpMaybeDefnCsharp_45;
    MR_Word IntContextAbstractSolver_46;
    MR_Word IntContextAbstractStd_47;
    MR_Word IntContextEqv_48;
    MR_Word IntContextDu_49;
    MR_Word IntContextSub_50;
    MR_Word ImpContextAbstractSolver_51;
    MR_Word ImpContextAbstractStd_52;
    MR_Word ImpContextEqv_53;
    MR_Word ImpContextDu_54;
    MR_Word ImpContextSub_55;
    MR_Word IntContextC_56;
    MR_Word IntContextJava_57;
    MR_Word IntContextCsharp_58;
    MR_Word ImpContextC_59;
    MR_Word ImpContextJava_60;
    MR_Word ImpContextCsharp_61;
    MR_Word STATE_VARIABLE_Specs_135_135;
    MR_Word STATE_VARIABLE_Specs_136_136;
    MR_Word STATE_VARIABLE_Specs_137_137;
    MR_Word STATE_VARIABLE_Specs_139_139;
    MR_Word ImpEnumsCJCs_21;
    MR_Box conv0_ImpEnumsCJCs_21;
    MR_Word ImpSolverDefn_62;

    parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(IntTypeDefnMap_11, TypeCtor_14, &IntMaybeDefn_17, STATE_VARIABLE_Specs_0_133, &STATE_VARIABLE_Specs_135_135);
    parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(ImpTypeDefnMap_12, TypeCtor_14, &ImpMaybeDefn_18, STATE_VARIABLE_Specs_135_135, &STATE_VARIABLE_Specs_136_136);
    parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0(ImpForeignEnumMap_13, TypeCtor_14, &ImpMaybeEnumCJCs_19, &ImpLeftOverEnumsCJCs_20, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_137_137);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[1]), ImpForeignEnumMap_13, ((MR_Box) (TypeCtor_14)), &conv0_ImpEnumsCJCs_21);
    if (succeeded)
    {
      ImpEnumsCJCs_21 = ((MR_Word) (conv0_ImpEnumsCJCs_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ImpEnumsC_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpEnumsCJCs_21, (MR_Integer) 0))));
      MR_Word ImpEnumsJava_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpEnumsCJCs_21, (MR_Integer) 1))));
      MR_Word ImpEnumsCsharp_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpEnumsCJCs_21, (MR_Integer) 2))));
      MR_Word Var_138;

      Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsJava_23, ImpEnumsCsharp_24);
      ImpEnums_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsC_22, Var_138);
    }
    else
      ImpEnums_25 = (MR_Word) ((MR_Unsigned) 0U);
    IntAbstractSolverMaybeDefn_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 0))));
    IntSolverMaybeDefn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 1))));
    IntAbstractStdMaybeDefn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 2))));
    IntEqvMaybeDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 3))));
    IntDuMaybeDefn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 4))));
    IntSubMaybeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 5))));
    IntMaybeDefnCJCs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 6))));
    ImpAbstractSolverMaybeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 0))));
    ImpSolverMaybeDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 1))));
    ImpAbstractStdMaybeDefn_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 2))));
    ImpEqvMaybeDefn_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 3))));
    ImpDuMaybeDefn_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 4))));
    ImpSubMaybeDefn_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 5))));
    ImpMaybeDefnCJCs_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 6))));
    IntMaybeDefnC_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_32, (MR_Integer) 0))));
    IntMaybeDefnJava_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_32, (MR_Integer) 1))));
    IntMaybeDefnCsharp_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_32, (MR_Integer) 2))));
    ImpMaybeDefnC_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_39, (MR_Integer) 0))));
    ImpMaybeDefnJava_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_39, (MR_Integer) 1))));
    ImpMaybeDefnCsharp_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_39, (MR_Integer) 2))));
    IntContextAbstractSolver_46 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntAbstractSolverMaybeDefn_26);
    IntContextAbstractStd_47 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntAbstractStdMaybeDefn_28);
    IntContextEqv_48 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntEqvMaybeDefn_29);
    IntContextDu_49 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntDuMaybeDefn_30);
    IntContextSub_50 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntSubMaybeDefn_31);
    ImpContextAbstractSolver_51 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpAbstractSolverMaybeDefn_33);
    ImpContextAbstractStd_52 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpAbstractStdMaybeDefn_35);
    ImpContextEqv_53 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpEqvMaybeDefn_36);
    ImpContextDu_54 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpDuMaybeDefn_37);
    ImpContextSub_55 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpSubMaybeDefn_38);
    IntContextC_56 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntMaybeDefnC_40);
    IntContextJava_57 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntMaybeDefnJava_41);
    IntContextCsharp_58 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntMaybeDefnCsharp_42);
    ImpContextC_59 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpMaybeDefnC_43);
    ImpContextJava_60 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpMaybeDefnJava_44);
    ImpContextCsharp_61 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(ImpMaybeDefnCsharp_45);
    parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_4_p_0(TypeCtor_14, IntSolverMaybeDefn_27, STATE_VARIABLE_Specs_137_137, &STATE_VARIABLE_Specs_139_139);
    succeeded = (ImpSolverMaybeDefn_34 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ImpSolverDefn_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpSolverMaybeDefn_34, (MR_Integer) 0))));
      {
        MR_Word CheckedSolverDefn_63;
        MR_Word SrcDefns_64;
        MR_Word CheckedDefn_65;
        MR_Word STATE_VARIABLE_Specs_141_141;
        MR_Word Var_142;
        MR_Word Var_143;
        MR_Word STATE_VARIABLE_Specs_144_144;
        MR_Word Var_145;
        MR_Word Var_148;
        MR_Word Var_149;
        MR_Word Var_150;
        MR_Word Var_151;
        MR_Word Var_152;
        MR_Word Var_153;
        MR_Word Var_154;
        MR_Word Var_155;
        MR_Word Var_156;
        MR_Word Var_157;
        MR_Word Var_158;
        MR_Word Var_159;
        MR_Word Var_160;
        MR_Word Var_162;
        MR_Word Var_164;
        MR_Word Var_167;
        MR_Word Var_169;
        MR_Word Var_170;
        MR_Box conv2_STATE_VARIABLE_Specs_144_144;
        MR_Box conv4_STATE_VARIABLE_Specs_134;

        parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, (MR_String) "implementation", ImpAbstractSolverMaybeDefn_33, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_141_141);
        Var_145 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_62, (MR_Integer) 4))));
        {
          Var_142 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_142, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
          MR_hl_field(MR_mktag(0), Var_142, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_142, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_142, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_142, 4) = ((MR_Box) (Var_145));
          MR_hl_field(MR_mktag(0), Var_142, 5) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(MR_mktag(0), Var_142, 6) = ((MR_Box) ((MR_String) "implementation"));
        }
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (ImpContextCsharp_61));
          MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (ImpContextJava_60));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_160));
        }
        {
          Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (ImpContextC_59));
          MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_159));
        }
        {
          Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (ImpContextSub_55));
          MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_158));
        }
        {
          Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (ImpContextDu_54));
          MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) (Var_157));
        }
        {
          Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (ImpContextEqv_53));
          MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_156));
        }
        {
          Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (ImpContextAbstractStd_52));
          MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_155));
        }
        {
          Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (IntContextCsharp_58));
          MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_154));
        }
        {
          Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (IntContextJava_57));
          MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_153));
        }
        {
          Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (IntContextC_56));
          MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
        }
        {
          Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (IntContextSub_50));
          MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
        }
        {
          Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (IntContextDu_49));
          MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
        }
        {
          Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (IntContextEqv_48));
          MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_149));
        }
        {
          Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (IntContextAbstractStd_47));
          MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_148));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_142, Var_143, ((MR_Box) (STATE_VARIABLE_Specs_141_141)), &conv2_STATE_VARIABLE_Specs_144_144);
        STATE_VARIABLE_Specs_144_144 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_144_144));
        Var_164 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_62, (MR_Integer) 4))));
        {
          Var_162 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[2]));
          MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2));
          MR_hl_field(MR_mktag(0), Var_162, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_162, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_162, 4) = ((MR_Box) (Var_164));
          MR_hl_field(MR_mktag(0), Var_162, 5) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(MR_mktag(0), Var_162, 6) = ((MR_Box) ((MR_String) "implementation"));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_162, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_144_144)), &conv4_STATE_VARIABLE_Specs_134);
        *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_134));
        {
          CheckedSolverDefn_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedSolverDefn_63, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_26));
          MR_hl_field(MR_mktag(1), CheckedSolverDefn_63, 1) = ((MR_Box) (ImpSolverDefn_62));
        }
        Var_167 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[21]), IntAbstractSolverMaybeDefn_26);
        Var_170 = parse_tree__item_util__wrap_solver_type_defn_1_f_0(ImpSolverDefn_62);
        {
          Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (Var_170));
        }
        {
          SrcDefns_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_64, 0) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), SrcDefns_64, 1) = ((MR_Box) (Var_169));
        }
        {
          CheckedDefn_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CheckedDefn_65, 0) = ((MR_Box) (CheckedSolverDefn_63));
          MR_hl_field(MR_mktag(0), CheckedDefn_65, 1) = ((MR_Box) (SrcDefns_64));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_65)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
      }
    }
    else
    {
      MR_Word EqvDefn_67;
      MR_String EqvWhere_68;
      MR_Word Status_69;
      MR_Word SrcDefns_369;
      MR_Word IntEqvDefn_66;

      succeeded = (IntEqvMaybeDefn_29 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        IntEqvDefn_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntEqvMaybeDefn_29, (MR_Integer) 0))));
        {
          MR_Word Var_172;
          MR_Word Var_173;

          EqvDefn_67 = IntEqvDefn_66;
          EqvWhere_68 = (MR_String) "interface";
          Status_69 = (MR_Integer) 0;
          Var_173 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(IntEqvDefn_66);
          {
            Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (Var_173));
            MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SrcDefns_369 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_369, 0) = ((MR_Box) (Var_172));
            MR_hl_field(MR_mktag(0), SrcDefns_369, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), SrcDefns_369, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word SrcDefnsInt_72;
        MR_Word SrcDefnsImp_73;
        MR_Word Var_179;
        MR_Word Var_180;

        succeeded = (ImpEqvMaybeDefn_36 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          EqvDefn_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpEqvMaybeDefn_36, (MR_Integer) 0))));
          EqvWhere_68 = (MR_String) "implementation";
          if ((IntAbstractStdMaybeDefn_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Status_69 = (MR_Integer) 2;
            SrcDefnsInt_72 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word AbstractStdDefn_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_28, (MR_Integer) 0))));
            MR_Word Var_177;

            Status_69 = (MR_Integer) 1;
            Var_177 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_71);
            {
              SrcDefnsInt_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), SrcDefnsInt_72, 0) = ((MR_Box) (Var_177));
              MR_hl_field(MR_mktag(1), SrcDefnsInt_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          Var_179 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(EqvDefn_67);
          Var_180 = (MR_Word) ((MR_Unsigned) 0U);
          {
            SrcDefnsImp_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SrcDefnsImp_73, 0) = ((MR_Box) (Var_179));
            MR_hl_field(MR_mktag(1), SrcDefnsImp_73, 1) = ((MR_Box) (Var_180));
          }
          {
            SrcDefns_369 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_369, 0) = ((MR_Box) (SrcDefnsInt_72));
            MR_hl_field(MR_mktag(0), SrcDefns_369, 1) = ((MR_Box) (SrcDefnsImp_73));
            MR_hl_field(MR_mktag(0), SrcDefns_369, 2) = ((MR_Box) (Var_180));
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word CheckedStdDefn_74;
        MR_Word STATE_VARIABLE_Specs_182_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word STATE_VARIABLE_Specs_185_185;
        MR_Word Var_186;
        MR_Word Var_188;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_191;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_195;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_198;
        MR_Word Var_200;
        MR_Word Var_202;
        MR_Word CheckedDefn_303;
        MR_Box conv7_STATE_VARIABLE_Specs_185_185;
        MR_Box conv9_STATE_VARIABLE_Specs_134;

        parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, EqvWhere_68, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_182_182);
        Var_186 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_67, (MR_Integer) 4))));
        {
          Var_183 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_183, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
          MR_hl_field(MR_mktag(0), Var_183, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4));
          MR_hl_field(MR_mktag(0), Var_183, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_183, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_183, 4) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(0), Var_183, 5) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(MR_mktag(0), Var_183, 6) = ((MR_Box) (EqvWhere_68));
        }
        {
          Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (ImpContextCsharp_61));
          MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (ImpContextJava_60));
          MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (Var_198));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (ImpContextC_59));
          MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_197));
        }
        {
          Var_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_195, 0) = ((MR_Box) (ImpContextSub_55));
          MR_hl_field(MR_mktag(1), Var_195, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (ImpContextDu_54));
          MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_195));
        }
        {
          Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_193, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
          MR_hl_field(MR_mktag(1), Var_193, 1) = ((MR_Box) (Var_194));
        }
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (IntContextCsharp_58));
          MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_193));
        }
        {
          Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (IntContextJava_57));
          MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
        }
        {
          Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) (IntContextC_56));
          MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_191));
        }
        {
          Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (IntContextSub_50));
          MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_190));
        }
        {
          Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (IntContextDu_49));
          MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) (Var_189));
        }
        {
          Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (IntContextAbstractSolver_46));
          MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (Var_188));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_183, Var_184, ((MR_Box) (STATE_VARIABLE_Specs_182_182)), &conv7_STATE_VARIABLE_Specs_185_185);
        STATE_VARIABLE_Specs_185_185 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_185_185));
        Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_67, (MR_Integer) 4))));
        {
          Var_200 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_200, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[2]));
          MR_hl_field(MR_mktag(0), Var_200, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5));
          MR_hl_field(MR_mktag(0), Var_200, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_200, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_200, 4) = ((MR_Box) (Var_202));
          MR_hl_field(MR_mktag(0), Var_200, 5) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(MR_mktag(0), Var_200, 6) = ((MR_Box) (EqvWhere_68));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_200, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_185_185)), &conv9_STATE_VARIABLE_Specs_134);
        *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_134));
        {
          CheckedStdDefn_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CheckedStdDefn_74, 0) = (MR_Box) ((MR_Unsigned) (Status_69));
          MR_hl_field(MR_mktag(0), CheckedStdDefn_74, 1) = ((MR_Box) (EqvDefn_67));
        }
        {
          CheckedDefn_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedDefn_303, 0) = ((MR_Box) (CheckedStdDefn_74));
          MR_hl_field(MR_mktag(1), CheckedDefn_303, 1) = ((MR_Box) (SrcDefns_369));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_303)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
      }
      else
      {
        MR_Word SubDefn_76;
        MR_Word SubSection_77;
        MR_String SubWhere_78;
        MR_Word IntSubDefn_75;

        succeeded = (IntSubMaybeDefn_31 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          IntSubDefn_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntSubMaybeDefn_31, (MR_Integer) 0))));
          SubDefn_76 = IntSubDefn_75;
          SubSection_77 = (MR_Integer) 0;
          SubWhere_78 = (MR_String) "interface";
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ImpSubMaybeDefn_38 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            SubDefn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpSubMaybeDefn_38, (MR_Integer) 0))));
            SubSection_77 = (MR_Integer) 1;
            SubWhere_78 = (MR_String) "implementation";
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word ForeignDefns_80;
          MR_Word STATE_VARIABLE_Specs_205_205;
          MR_Word Var_206;
          MR_Word Var_207;
          MR_Word STATE_VARIABLE_Specs_208_208;
          MR_Word Var_209;
          MR_Word Var_211;
          MR_Word Var_212;
          MR_Word Var_213;
          MR_Word Var_215;
          MR_Word Var_216;
          MR_Word Var_217;
          MR_Word Var_218;
          MR_Word Var_219;
          MR_Word Var_220;
          MR_Word Var_222;
          MR_Word STATE_VARIABLE_Specs_223_223;
          MR_Word Var_224;
          MR_Word SrcDefns_304;
          MR_Word CheckedDefn_305;
          MR_Word Status_306;
          MR_Word SrcDefnsInt_307;
          MR_Word SrcDefnsImp_308;
          MR_Word CheckedStdDefn_309;
          MR_Box conv11_STATE_VARIABLE_Specs_208_208;
          MR_Box conv13_STATE_VARIABLE_Specs_223_223;
          MR_Box conv15_STATE_VARIABLE_Specs_134;

          parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, SubWhere_78, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_205_205);
          Var_209 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_76, (MR_Integer) 4))));
          {
            Var_206 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_206, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
            MR_hl_field(MR_mktag(0), Var_206, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6));
            MR_hl_field(MR_mktag(0), Var_206, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_206, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_206, 4) = ((MR_Box) (Var_209));
            MR_hl_field(MR_mktag(0), Var_206, 5) = ((MR_Box) ((MR_String) "subtype"));
            MR_hl_field(MR_mktag(0), Var_206, 6) = ((MR_Box) (SubWhere_78));
          }
          {
            Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
            MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (ImpContextDu_54));
            MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_213));
          }
          {
            Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (IntContextAbstractSolver_46));
            MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
          }
          {
            Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (IntContextDu_49));
            MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_211));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_206, Var_207, ((MR_Box) (STATE_VARIABLE_Specs_205_205)), &conv11_STATE_VARIABLE_Specs_208_208);
          STATE_VARIABLE_Specs_208_208 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_208_208));
          {
            Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
            MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
            MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_220));
          }
          {
            Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
            MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (Var_219));
          }
          {
            Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (IntMaybeDefnJava_41));
            MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) (Var_218));
          }
          {
            Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (ImpMaybeDefnC_43));
            MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_217));
          }
          {
            Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (IntMaybeDefnC_40));
            MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_216));
          }
          ForeignDefns_80 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_215);
          {
            Var_222 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_222, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[4]));
            MR_hl_field(MR_mktag(0), Var_222, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7));
            MR_hl_field(MR_mktag(0), Var_222, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_222, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_222, 4) = ((MR_Box) (SubDefn_76));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_222, ForeignDefns_80, ((MR_Box) (STATE_VARIABLE_Specs_208_208)), &conv13_STATE_VARIABLE_Specs_223_223);
          STATE_VARIABLE_Specs_223_223 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_223_223));
          {
            Var_224 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[5]));
            MR_hl_field(MR_mktag(0), Var_224, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8));
            MR_hl_field(MR_mktag(0), Var_224, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_224, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_224, 4) = ((MR_Box) (SubDefn_76));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_224, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_223_223)), &conv15_STATE_VARIABLE_Specs_134);
          *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_134));
          parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_117_98_116_121_112_101_95_115_116_97_116_117_115_95_95_91_49_93_95_48_7_p_0(SubDefn_76, SubSection_77, IntAbstractStdMaybeDefn_28, &Status_306, &SrcDefnsInt_307, &SrcDefnsImp_308);
          {
            CheckedStdDefn_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_309, 0) = (MR_Box) ((MR_Unsigned) (Status_306));
            MR_hl_field(MR_mktag(1), CheckedStdDefn_309, 1) = ((MR_Box) (SubDefn_76));
          }
          {
            SrcDefns_304 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_304, 0) = ((MR_Box) (SrcDefnsInt_307));
            MR_hl_field(MR_mktag(0), SrcDefns_304, 1) = ((MR_Box) (SrcDefnsImp_308));
            MR_hl_field(MR_mktag(0), SrcDefns_304, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckedDefn_305, 0) = ((MR_Box) (CheckedStdDefn_309));
            MR_hl_field(MR_mktag(1), CheckedDefn_305, 1) = ((MR_Box) (SrcDefns_304));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_305)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
        }
        else
        {
          MR_Word DuDefn_82;
          MR_Word DuSection_83;
          MR_String DuWhere_84;
          MR_Word IntDuDefn_81;

          succeeded = (IntDuMaybeDefn_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            IntDuDefn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntDuMaybeDefn_30, (MR_Integer) 0))));
            DuDefn_82 = IntDuDefn_81;
            DuSection_83 = (MR_Integer) 0;
            DuWhere_84 = (MR_String) "interface";
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ImpDuMaybeDefn_37 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DuDefn_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpDuMaybeDefn_37, (MR_Integer) 0))));
              DuSection_83 = (MR_Integer) 1;
              DuWhere_84 = (MR_String) "implementation";
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            MR_Word DetailsDu_86;
            MR_Word OoMCtors_87;
            MR_Word HeadCtor_90;
            MR_Word TailCtors_91;
            MR_Word ChosenSectionCJCs_92;
            MR_Word ChosenMaybeDefnCJCs_93;
            MR_Word SrcDefnsDuInt_94;
            MR_Word SrcDefnsDuImp_95;
            MR_Word MaybeOnlyConstants_98;
            MR_Word SrcForeignDefns_105;
            MR_Word SrcForeignEnums_106;
            MR_Word STATE_VARIABLE_Specs_228_228;
            MR_Word Var_229;
            MR_Word Var_230;
            MR_Word STATE_VARIABLE_Specs_231_231;
            MR_Word Var_232;
            MR_Word Var_234;
            MR_Word STATE_VARIABLE_Specs_236_236;
            MR_Word SrcDefns_310;
            MR_Word CheckedDefn_311;
            MR_Word Status_312;
            MR_Word SrcDefnsInt_313;
            MR_Word SrcDefnsImp_314;
            MR_Word CheckedStdDefn_315;
            MR_Box conv17_STATE_VARIABLE_Specs_231_231;
            MR_String HeadName0_96;
            MR_Word TailNames0_97;

            parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, DuWhere_84, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_228_228);
            Var_232 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_82, (MR_Integer) 4))));
            {
              Var_229 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
              MR_hl_field(MR_mktag(0), Var_229, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9));
              MR_hl_field(MR_mktag(0), Var_229, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_229, 3) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(MR_mktag(0), Var_229, 4) = ((MR_Box) (Var_232));
              MR_hl_field(MR_mktag(0), Var_229, 5) = ((MR_Box) ((MR_String) "discriminated union type"));
              MR_hl_field(MR_mktag(0), Var_229, 6) = ((MR_Box) (DuWhere_84));
            }
            {
              Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
              MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_230, 0) = ((MR_Box) (IntContextAbstractSolver_46));
              MR_hl_field(MR_mktag(1), Var_230, 1) = ((MR_Box) (Var_234));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_229, Var_230, ((MR_Box) (STATE_VARIABLE_Specs_228_228)), &conv17_STATE_VARIABLE_Specs_231_231);
            STATE_VARIABLE_Specs_231_231 = ((MR_Word) (conv17_STATE_VARIABLE_Specs_231_231));
            DetailsDu_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_82, (MR_Integer) 2))));
            OoMCtors_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_86, (MR_Integer) 0))));
            HeadCtor_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_87, (MR_Integer) 0))));
            TailCtors_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_87, (MR_Integer) 1))));
            parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0(TypeCtor_14, DuDefn_82, DuSection_83, IntAbstractStdMaybeDefn_28, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_312, &ChosenSectionCJCs_92, &ChosenMaybeDefnCJCs_93, &SrcDefnsDuInt_94, &SrcDefnsDuImp_95, STATE_VARIABLE_Specs_231_231, &STATE_VARIABLE_Specs_236_236);
            succeeded = parse_tree__prog_data__ctor_is_constant_2_p_0(HeadCtor_90, &HeadName0_96);
            if (succeeded)
              succeeded = parse_tree__prog_data__ctors_are_all_constants_2_p_0(TailCtors_91, &TailNames0_97);
            if (succeeded)
              if ((TailNames0_97 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                succeeded = parse_tree__prog_type__non_sub_du_type_is_dummy_1_p_0(DetailsDu_86);
                if (succeeded)
                  {
                    MaybeOnlyConstants_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, 0) = ((MR_Box) (HeadName0_96));
                    MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                else
                  MaybeOnlyConstants_98 = (MR_Word) ((MR_Unsigned) 0U);
              }
              else
              {
                MR_Integer _NumFunctors_101;

                succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_86, &_NumFunctors_101);
                if (succeeded)
                  {
                    MaybeOnlyConstants_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, 0) = ((MR_Box) (HeadName0_96));
                    MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, 1) = ((MR_Box) (TailNames0_97));
                  }
                else
                  MaybeOnlyConstants_98 = (MR_Word) ((MR_Unsigned) 0U);
              }
            else
              MaybeOnlyConstants_98 = (MR_Word) ((MR_Unsigned) 0U);
            if ((MaybeOnlyConstants_98 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ChosenMaybeDefnC_102;
              MR_Word ChosenMaybeDefnJava_103;
              MR_Word ChosenMaybeDefnCsharp_104;
              MR_Word Var_240;
              MR_Word Var_242;
              MR_Word Var_243;
              MR_Word Var_244;
              MR_Box conv19_STATE_VARIABLE_Specs_134;

              {
                Var_240 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_240, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[6]));
                MR_hl_field(MR_mktag(0), Var_240, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10));
                MR_hl_field(MR_mktag(0), Var_240, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_240, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_240, 4) = ((MR_Box) (DuDefn_82));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_240, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_236_236)), &conv19_STATE_VARIABLE_Specs_134);
              *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_134));
              {
                CheckedStdDefn_315 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_315, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_315, 1) = (MR_Box) ((MR_Unsigned) (Status_312));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_315, 2) = ((MR_Box) (DuDefn_82));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_315, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_93));
              }
              ChosenMaybeDefnC_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_93, (MR_Integer) 0))));
              ChosenMaybeDefnJava_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_93, (MR_Integer) 1))));
              ChosenMaybeDefnCsharp_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_93, (MR_Integer) 2))));
              {
                Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (ChosenMaybeDefnCsharp_104));
                MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_243, 0) = ((MR_Box) (ChosenMaybeDefnJava_103));
                MR_hl_field(MR_mktag(1), Var_243, 1) = ((MR_Box) (Var_244));
              }
              {
                Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_242, 0) = ((MR_Box) (ChosenMaybeDefnC_102));
                MR_hl_field(MR_mktag(1), Var_242, 1) = ((MR_Box) (Var_243));
              }
              SrcForeignDefns_105 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_242);
              SrcForeignEnums_106 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_String HeadName_107 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, (MR_Integer) 0))));
              MR_Word TailNames_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyConstants_98, (MR_Integer) 1))));
              MR_Word MaybeDefnOrEnumCJCs_109;
              MR_Word Var_238;

              {
                Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (HeadName_107));
                MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (TailNames_108));
              }
              parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_10_p_0(TypeCtor_14, Var_238, ChosenMaybeDefnCJCs_93, ImpMaybeEnumCJCs_19, ImpLeftOverEnumsCJCs_20, &MaybeDefnOrEnumCJCs_109, &SrcForeignDefns_105, &SrcForeignEnums_106, STATE_VARIABLE_Specs_236_236, STATE_VARIABLE_Specs_134);
              {
                CheckedStdDefn_315 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), CheckedStdDefn_315, 0) = (MR_Box) ((MR_Unsigned) (Status_312));
                MR_hl_field(MR_mktag(2), CheckedStdDefn_315, 1) = ((MR_Box) (DuDefn_82));
                MR_hl_field(MR_mktag(2), CheckedStdDefn_315, 2) = ((MR_Box) (HeadName_107));
                MR_hl_field(MR_mktag(2), CheckedStdDefn_315, 3) = ((MR_Box) (TailNames_108));
                MR_hl_field(MR_mktag(2), CheckedStdDefn_315, 4) = ((MR_Box) (MaybeDefnOrEnumCJCs_109));
              }
            }
            switch (ChosenSectionCJCs_92) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_246;

                  SrcDefnsInt_313 = SrcDefnsDuInt_94;
                  Var_246 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[22]), SrcForeignDefns_105);
                  SrcDefnsImp_314 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuImp_95, Var_246);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_248;

                  Var_248 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[23]), SrcForeignDefns_105);
                  SrcDefnsInt_313 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuInt_94, Var_248);
                  SrcDefnsImp_314 = SrcDefnsDuImp_95;
                }
                break;
            }
            {
              SrcDefns_310 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SrcDefns_310, 0) = ((MR_Box) (SrcDefnsInt_313));
              MR_hl_field(MR_mktag(0), SrcDefns_310, 1) = ((MR_Box) (SrcDefnsImp_314));
              MR_hl_field(MR_mktag(0), SrcDefns_310, 2) = ((MR_Box) (SrcForeignEnums_106));
            }
            {
              CheckedDefn_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CheckedDefn_311, 0) = ((MR_Box) (CheckedStdDefn_315));
              MR_hl_field(MR_mktag(1), CheckedDefn_311, 1) = ((MR_Box) (SrcDefns_310));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_311)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
          }
          else
          {
            succeeded = (IntMaybeDefnC_40 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = (IntMaybeDefnJava_41 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
              }
              if (!(succeeded))
              {
                succeeded = (IntMaybeDefnCsharp_42 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                }
                if (!(succeeded))
                {
                  succeeded = (ImpMaybeDefnC_43 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                  }
                  if (!(succeeded))
                  {
                    succeeded = (ImpMaybeDefnJava_44 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                    if (!(succeeded))
                    {
                      succeeded = (ImpMaybeDefnCsharp_45 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word IntForeignContexts_116;
              MR_Word SortedIntForeignContexts_117;
              MR_Word FirstForeignContext_118;
              MR_String ForeignWhere_120;
              MR_Word ChosenAbstractStdDefn_123;
              MR_Word Var_251;
              MR_Word Var_252;
              MR_Word Var_253;
              MR_Word Var_259;
              MR_Word Var_260;
              MR_Word STATE_VARIABLE_Specs_261_261;
              MR_Word Var_263;
              MR_Word Var_265;
              MR_Word STATE_VARIABLE_Specs_266_266;
              MR_Word SrcDefns_316;
              MR_Word CheckedDefn_317;
              MR_Word Status_318;
              MR_Word CheckedStdDefn_319;
              MR_Word ChosenMaybeDefnCJCs_320;
              MR_Box conv24_STATE_VARIABLE_Specs_261_261;
              MR_Box conv26_STATE_VARIABLE_Specs_266_266;

              {
                Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_253, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
                MR_hl_field(MR_mktag(1), Var_253, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (IntMaybeDefnJava_41));
                MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (Var_253));
              }
              {
                Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (IntMaybeDefnC_40));
                MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (Var_252));
              }
              IntForeignContexts_116 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_251);
              mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntForeignContexts_116, &SortedIntForeignContexts_117);
              if ((SortedIntForeignContexts_117 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word ImpForeignContexts_121;
                MR_Word SortedImpForeignContexts_122;
                MR_Word Var_255;
                MR_Word Var_256;
                MR_Word Var_257;
                MR_Box conv22_FirstForeignContext_118;

                {
                  Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
                  MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
                  MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (Var_257));
                }
                {
                  Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (ImpMaybeDefnC_43));
                  MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (Var_256));
                }
                ImpForeignContexts_121 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_255);
                mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpForeignContexts_121, &SortedImpForeignContexts_122);
                conv22_FirstForeignContext_118 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedImpForeignContexts_122);
                FirstForeignContext_118 = ((MR_Word) (conv22_FirstForeignContext_118));
                ForeignWhere_120 = (MR_String) "implementation";
              }
              else
              {
                FirstForeignContext_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntForeignContexts_117, (MR_Integer) 0))));
                ForeignWhere_120 = (MR_String) "interface";
              }
              {
                Var_259 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_259, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
                MR_hl_field(MR_mktag(0), Var_259, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13));
                MR_hl_field(MR_mktag(0), Var_259, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_259, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_259, 4) = ((MR_Box) (FirstForeignContext_118));
                MR_hl_field(MR_mktag(0), Var_259, 5) = ((MR_Box) ((MR_String) "foreign type"));
                MR_hl_field(MR_mktag(0), Var_259, 6) = ((MR_Box) (ForeignWhere_120));
              }
              {
                Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_263, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
                MR_hl_field(MR_mktag(1), Var_263, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_260, 0) = ((MR_Box) (IntContextAbstractSolver_46));
                MR_hl_field(MR_mktag(1), Var_260, 1) = ((MR_Box) (Var_263));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_259, Var_260, ((MR_Box) (STATE_VARIABLE_Specs_139_139)), &conv24_STATE_VARIABLE_Specs_261_261);
              STATE_VARIABLE_Specs_261_261 = ((MR_Word) (conv24_STATE_VARIABLE_Specs_261_261));
              {
                Var_265 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_265, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[2]));
                MR_hl_field(MR_mktag(0), Var_265, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14));
                MR_hl_field(MR_mktag(0), Var_265, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_265, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_265, 4) = ((MR_Box) (FirstForeignContext_118));
                MR_hl_field(MR_mktag(0), Var_265, 5) = ((MR_Box) ((MR_String) "foreign type"));
                MR_hl_field(MR_mktag(0), Var_265, 6) = ((MR_Box) (ForeignWhere_120));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_265, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_261_261)), &conv26_STATE_VARIABLE_Specs_266_266);
              STATE_VARIABLE_Specs_266_266 = ((MR_Word) (conv26_STATE_VARIABLE_Specs_266_266));
              parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0(TypeCtor_14, IntAbstractStdMaybeDefn_28, ImpAbstractStdMaybeDefn_35, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_318, &ChosenAbstractStdDefn_123, &ChosenMaybeDefnCJCs_320, &SrcDefns_316, STATE_VARIABLE_Specs_266_266, STATE_VARIABLE_Specs_134);
              {
                CheckedStdDefn_319 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_319, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_319, 1) = (MR_Box) ((MR_Unsigned) (Status_318));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_319, 2) = ((MR_Box) (ChosenAbstractStdDefn_123));
                MR_hl_field(MR_mktag(3), CheckedStdDefn_319, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_320));
              }
              {
                CheckedDefn_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CheckedDefn_317, 0) = ((MR_Box) (CheckedStdDefn_319));
                MR_hl_field(MR_mktag(1), CheckedDefn_317, 1) = ((MR_Box) (SrcDefns_316));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_317)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
            }
            else
            {
              MR_Word AbstractSolverDefn_125;
              MR_String AbstractSolverWhere_126;
              MR_Word Status_338;
              MR_Word SrcDefnsInt_340;
              MR_Word SrcDefnsImp_341;
              MR_Word IntAbstractSolverDefn_124;

              succeeded = (IntAbstractSolverMaybeDefn_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                IntAbstractSolverDefn_124 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractSolverMaybeDefn_26, (MR_Integer) 0))));
                {
                  MR_Word Var_270;

                  AbstractSolverDefn_125 = IntAbstractSolverDefn_124;
                  AbstractSolverWhere_126 = (MR_String) "interface";
                  Status_338 = (MR_Integer) 0;
                  Var_270 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractSolverDefn_124);
                  {
                    SrcDefnsInt_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcDefnsInt_340, 0) = ((MR_Box) (Var_270));
                  }
                  SrcDefnsImp_341 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                MR_Word Var_271;

                succeeded = (ImpAbstractSolverMaybeDefn_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  AbstractSolverDefn_125 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractSolverMaybeDefn_33, (MR_Integer) 0))));
                  AbstractSolverWhere_126 = (MR_String) "implementation";
                  Status_338 = (MR_Integer) 1;
                  SrcDefnsInt_340 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_271 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractSolverDefn_125);
                  {
                    SrcDefnsImp_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcDefnsImp_341, 0) = ((MR_Box) (Var_271));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Specs_272_272;
                MR_Word Var_273;
                MR_Word Var_274;
                MR_Word STATE_VARIABLE_Specs_275_275;
                MR_Word Var_276;
                MR_Word Var_278;
                MR_Word Var_280;
                MR_Word Var_282;
                MR_Word CheckedSolverDefn_321;
                MR_Word SrcDefns_322;
                MR_Word CheckedDefn_323;
                MR_Box conv28_STATE_VARIABLE_Specs_275_275;
                MR_Box conv30_STATE_VARIABLE_Specs_134;

                parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractSolverDefn_125, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_272_272);
                Var_276 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_125, (MR_Integer) 4))));
                {
                  Var_273 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_273, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1]));
                  MR_hl_field(MR_mktag(0), Var_273, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15));
                  MR_hl_field(MR_mktag(0), Var_273, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_273, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(MR_mktag(0), Var_273, 4) = ((MR_Box) (Var_276));
                  MR_hl_field(MR_mktag(0), Var_273, 5) = ((MR_Box) ((MR_String) "solver type"));
                  MR_hl_field(MR_mktag(0), Var_273, 6) = ((MR_Box) (AbstractSolverWhere_126));
                }
                {
                  Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (ImpContextAbstractStd_52));
                  MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (IntContextAbstractStd_47));
                  MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (Var_278));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_273, Var_274, ((MR_Box) (STATE_VARIABLE_Specs_272_272)), &conv28_STATE_VARIABLE_Specs_275_275);
                STATE_VARIABLE_Specs_275_275 = ((MR_Word) (conv28_STATE_VARIABLE_Specs_275_275));
                Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_125, (MR_Integer) 4))));
                {
                  Var_280 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_280, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[2]));
                  MR_hl_field(MR_mktag(0), Var_280, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16));
                  MR_hl_field(MR_mktag(0), Var_280, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(0), Var_280, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(MR_mktag(0), Var_280, 4) = ((MR_Box) (Var_282));
                  MR_hl_field(MR_mktag(0), Var_280, 5) = ((MR_Box) ((MR_String) "solver type"));
                  MR_hl_field(MR_mktag(0), Var_280, 6) = ((MR_Box) (AbstractSolverWhere_126));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_280, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_275_275)), &conv30_STATE_VARIABLE_Specs_134);
                *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv30_STATE_VARIABLE_Specs_134));
                {
                  CheckedSolverDefn_321 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CheckedSolverDefn_321, 0) = (MR_Box) ((MR_Unsigned) (Status_338));
                  MR_hl_field(MR_mktag(0), CheckedSolverDefn_321, 1) = ((MR_Box) (AbstractSolverDefn_125));
                }
                {
                  SrcDefns_322 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SrcDefns_322, 0) = ((MR_Box) (SrcDefnsInt_340));
                  MR_hl_field(MR_mktag(0), SrcDefns_322, 1) = ((MR_Box) (SrcDefnsImp_341));
                }
                {
                  CheckedDefn_323 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), CheckedDefn_323, 0) = ((MR_Box) (CheckedSolverDefn_321));
                  MR_hl_field(MR_mktag(0), CheckedDefn_323, 1) = ((MR_Box) (SrcDefns_322));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_323)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
              }
              else
              {
                MR_Word Status_330;
                MR_Word AbstractStdDefn_331;
                MR_Word SrcDefnsInt_332;
                MR_Word SrcDefnsImp_333;
                MR_Word IntAbstractStdDefn_128;

                succeeded = (IntAbstractStdMaybeDefn_28 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  IntAbstractStdDefn_128 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_28, (MR_Integer) 0))));
                  if ((ImpAbstractStdMaybeDefn_35 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_285;

                    AbstractStdDefn_331 = IntAbstractStdDefn_128;
                    Var_285 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_128);
                    {
                      SrcDefnsInt_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SrcDefnsInt_332, 0) = ((MR_Box) (Var_285));
                      MR_hl_field(MR_mktag(1), SrcDefnsInt_332, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  else
                  {
                    MR_Word Var_287;

                    AbstractStdDefn_331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_35, (MR_Integer) 0))));
                    Var_287 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_331);
                    {
                      SrcDefnsInt_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SrcDefnsInt_332, 0) = ((MR_Box) (Var_287));
                      MR_hl_field(MR_mktag(1), SrcDefnsInt_332, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                  }
                  Status_330 = (MR_Integer) 1;
                  SrcDefnsImp_333 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_289;
                  MR_Word Var_290;

                  succeeded = (ImpAbstractStdMaybeDefn_35 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    AbstractStdDefn_331 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_35, (MR_Integer) 0))));
                    Status_330 = (MR_Integer) 2;
                    SrcDefnsInt_332 = (MR_Word) ((MR_Unsigned) 0U);
                    Var_289 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_331);
                    Var_290 = (MR_Word) ((MR_Unsigned) 0U);
                    {
                      SrcDefnsImp_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), SrcDefnsImp_333, 0) = ((MR_Box) (Var_289));
                      MR_hl_field(MR_mktag(1), SrcDefnsImp_333, 1) = ((MR_Box) (Var_290));
                    }
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_Specs_291_291;
                  MR_Word Var_292;
                  MR_Word SrcDefns_325;
                  MR_Word CheckedDefn_326;
                  MR_Word CheckedStdDefn_327;
                  MR_Box conv32_STATE_VARIABLE_Specs_134;

                  parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractStdDefn_331, STATE_VARIABLE_Specs_139_139, &STATE_VARIABLE_Specs_291_291);
                  {
                    Var_292 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_292, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[7]));
                    MR_hl_field(MR_mktag(0), Var_292, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17));
                    MR_hl_field(MR_mktag(0), Var_292, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_292, 3) = ((MR_Box) (TypeCtor_14));
                    MR_hl_field(MR_mktag(0), Var_292, 4) = ((MR_Box) ((MR_String) "undefined"));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_292, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_291_291)), &conv32_STATE_VARIABLE_Specs_134);
                  *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv32_STATE_VARIABLE_Specs_134));
                  {
                    CheckedStdDefn_327 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), CheckedStdDefn_327, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), CheckedStdDefn_327, 1) = (MR_Box) ((MR_Unsigned) (Status_330));
                    MR_hl_field(MR_mktag(3), CheckedStdDefn_327, 2) = ((MR_Box) (AbstractStdDefn_331));
                    MR_hl_field(MR_mktag(3), CheckedStdDefn_327, 3) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[5]));
                  }
                  {
                    SrcDefns_325 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), SrcDefns_325, 0) = ((MR_Box) (SrcDefnsInt_332));
                    MR_hl_field(MR_mktag(0), SrcDefns_325, 1) = ((MR_Box) (SrcDefnsImp_333));
                    MR_hl_field(MR_mktag(0), SrcDefns_325, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    CheckedDefn_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), CheckedDefn_326, 0) = ((MR_Box) (CheckedStdDefn_327));
                    MR_hl_field(MR_mktag(1), CheckedDefn_326, 1) = ((MR_Box) (SrcDefns_325));
                  }
                  mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_326)), STATE_VARIABLE_TypeCtorCheckedMap_0_131, STATE_VARIABLE_TypeCtorCheckedMap_132);
                }
                else
                {
                  MR_Word Var_300;
                  MR_Box conv34_STATE_VARIABLE_Specs_134;

                  {
                    Var_300 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_300, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[7]));
                    MR_hl_field(MR_mktag(0), Var_300, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18));
                    MR_hl_field(MR_mktag(0), Var_300, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Var_300, 3) = ((MR_Box) (TypeCtor_14));
                    MR_hl_field(MR_mktag(0), Var_300, 4) = ((MR_Box) ((MR_String) "undeclared"));
                  }
                  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_300, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_139_139)), &conv34_STATE_VARIABLE_Specs_134);
                  *STATE_VARIABLE_Specs_134 = ((MR_Word) (conv34_STATE_VARIABLE_Specs_134));
                  *STATE_VARIABLE_TypeCtorCheckedMap_132 = STATE_VARIABLE_TypeCtorCheckedMap_0_131;
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeTypeDefn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeTypeDefns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailDefns_6;

      TailDefns_6 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(MaybeTypeDefns_4);
      if ((MaybeTypeDefn_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = TailDefns_6;
      else
      {
        MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_3, (MR_Integer) 0))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (TypeDefn_7));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (TailDefns_6));
        }
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_117_98_116_121_112_101_95_115_116_97_116_117_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word SubDefn_9,
  MR_Word SubSection_10,
  MR_Word IntAbstractStdMaybeDefn_11,
  MR_Word * Status_12,
  MR_Word * SrcDefnsInt_13,
  MR_Word * SrcDefnsImp_14)
{
  switch (SubSection_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_18;

        if ((IntAbstractStdMaybeDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Status_12 = (MR_Integer) 2;
          *SrcDefnsInt_13 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word IntAbstractStdDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_11, (MR_Integer) 0))));
          MR_Word Var_16;

          *Status_12 = (MR_Integer) 1;
          Var_16 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsInt_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        Var_18 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(SubDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsImp_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_20;

        *Status_12 = (MR_Integer) 0;
        Var_20 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(SubDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsInt_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *SrcDefnsImp_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefnInfo_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefnInfo_3, (MR_Integer) 4))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word MaybeTypeDefn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeTypeDefns_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TailContexts_6;

      TailContexts_6 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(MaybeTypeDefns_4);
      if ((MaybeTypeDefn_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__2_2 = TailContexts_6;
      else
      {
        MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_3, (MR_Integer) 0))));
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_7, (MR_Integer) 4))));

        {
          HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_8));
          MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (TailContexts_6));
        }
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Cmp_6;

    parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Cmp_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_Cmp_6));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0(
  MR_Word ForeignEnumMap_7,
  MR_Word TypeCtor_8,
  MR_Word * MaybeEnumCJCs_9,
  MR_Word * LeftOverEnumCJCse_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_bool succeeded;
    MR_Word AllEnums_12;
    MR_Box conv0_AllEnums_12;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[1]), ForeignEnumMap_7, ((MR_Box) (TypeCtor_8)), &conv0_AllEnums_12);
    if (succeeded)
    {
      AllEnums_12 = ((MR_Word) (conv0_AllEnums_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word EnumsC_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 0))));
      MR_Word EnumsJava_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 1))));
      MR_Word EnumsCsharp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 2))));
      MR_Word MaybeEnumC_34;
      MR_Word LeftOverEnumsC_35;
      MR_Word MaybeEnumJava_36;
      MR_Word LeftOverEnumsJava_37;
      MR_Word MaybeEnumCsharp_38;
      MR_Word LeftOverEnumsCsharp_39;
      MR_Word STATE_VARIABLE_Specs_24_41;
      MR_Word STATE_VARIABLE_Specs_26_43;
      MR_Word SortedForeignEnums_54;

      mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[19]), EnumsC_31, &SortedForeignEnums_54);
      if ((SortedForeignEnums_54 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeEnumC_34 = (MR_Word) ((MR_Unsigned) 0U);
        LeftOverEnumsC_35 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_24_41 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_54, (MR_Integer) 1))));
        MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_54, (MR_Integer) 0))));

        if ((Var_82 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MaybeEnumC_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnumC_34, 0) = ((MR_Box) (Var_83));
          }
          LeftOverEnumsC_35 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Specs_24_41 = STATE_VARIABLE_Specs_0_13;
        }
        else
        {
          MR_Word LeastContext_58;
          MR_Word LeftOverContexts_59;
          MR_Word Var_62;
          MR_Box conv4_STATE_VARIABLE_Specs_24_41;

          LeftOverEnumsC_35 = Var_82;
          {
            MaybeEnumC_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeEnumC_34, 0) = ((MR_Box) (Var_83));
          }
          LeastContext_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_83, (MR_Integer) 3))));
          LeftOverContexts_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[20]), LeftOverEnumsC_35);
          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) ((MR_String) "enum"));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) (TypeCtor_8));
            MR_hl_field(MR_mktag(0), Var_62, 5) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_62, 6) = ((MR_Box) (LeastContext_58));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_62, LeftOverContexts_59, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv4_STATE_VARIABLE_Specs_24_41);
          STATE_VARIABLE_Specs_24_41 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_24_41));
        }
      }
      parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0(TypeCtor_8, (MR_Integer) 2, EnumsJava_32, &MaybeEnumJava_36, &LeftOverEnumsJava_37, STATE_VARIABLE_Specs_24_41, &STATE_VARIABLE_Specs_26_43);
      parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0(TypeCtor_8, (MR_Integer) 1, EnumsCsharp_33, &MaybeEnumCsharp_38, &LeftOverEnumsCsharp_39, STATE_VARIABLE_Specs_26_43, STATE_VARIABLE_Specs_14);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *MaybeEnumCJCs_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeEnumC_34));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeEnumJava_36));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeEnumCsharp_38));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *LeftOverEnumCJCse_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LeftOverEnumsC_35));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LeftOverEnumsJava_37));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LeftOverEnumsCsharp_39));
      }
    }
    else
    {
      *MaybeEnumCJCs_9 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[6]);
      *LeftOverEnumCJCse_10 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[7]);
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Specs_18));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Cmp_6;

    parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Cmp_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Cmp_6));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Lang_9,
  MR_Word ForeignEnums_10,
  MR_Word * MaybeForeignEnum_11,
  MR_Word * LeftOverForeignEnums_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word SortedForeignEnums_14;

    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[17]), ForeignEnums_10, &SortedForeignEnums_14);
    if ((SortedForeignEnums_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeForeignEnum_11 = (MR_Word) ((MR_Unsigned) 0U);
      *LeftOverForeignEnums_12 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    }
    else
    {
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_14, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_14, (MR_Integer) 0))));

      if ((Var_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignEnum_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
        }
        *LeftOverForeignEnums_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
      }
      else
      {
        MR_Word LeastContext_18;
        MR_Word LeftOverContexts_19;
        MR_Word Var_24;
        MR_Box conv3_STATE_VARIABLE_Specs_21;

        *LeftOverForeignEnums_12 = Var_44;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeForeignEnum_11 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_45));
        }
        LeastContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_45, (MR_Integer) 3))));
        LeftOverContexts_19 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[18]), *LeftOverForeignEnums_12);
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0]));
          MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_enum_for_lang_7_p_0_3));
          MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Lang_9));
          MR_hl_field(MR_mktag(0), Var_24, 6) = ((MR_Box) (LeastContext_18));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_24, LeftOverContexts_19, ((MR_Box) (STATE_VARIABLE_Specs_0_20)), &conv3_STATE_VARIABLE_Specs_21);
        *STATE_VARIABLE_Specs_21 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_21));
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word AllDefns_10;
    MR_Box conv0_AllDefns_10;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), TypeDefnMap_6, ((MR_Box) (TypeCtor_7)), &conv0_AllDefns_10);
    if (succeeded)
    {
      AllDefns_10 = ((MR_Word) (conv0_AllDefns_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word AbstractSolverDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 0))));
      MR_Word SolverDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 1))));
      MR_Word AbstractNonSolverDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 2))));
      MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 3))));
      MR_Word DuDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 4))));
      MR_Word SubDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 5))));
      MR_Word ForeignDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 6))));
      MR_Word AbstractSolverMaybeDefn_18;
      MR_Word SolverMaybeDefn_19;
      MR_Word AbstractNonSolverMaybeDefn_20;
      MR_Word EqvMaybeDefn_21;
      MR_Word DuMaybeDefn_22;
      MR_Word SubMaybeDefn_23;
      MR_Word ForeignMaybeDefn_24;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word STATE_VARIABLE_Specs_34_34;
      MR_Word STATE_VARIABLE_Specs_36_36;
      MR_Word STATE_VARIABLE_Specs_38_38;

      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0), (MR_String) "abstract solver type", TypeCtor_7, AbstractSolverDefns_11, &AbstractSolverMaybeDefn_18, STATE_VARIABLE_Specs_0_25, &STATE_VARIABLE_Specs_28_28);
      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0), (MR_String) "solver type", TypeCtor_7, SolverDefns_12, &SolverMaybeDefn_19, STATE_VARIABLE_Specs_28_28, &STATE_VARIABLE_Specs_30_30);
      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0), (MR_String) "abstract type", TypeCtor_7, AbstractNonSolverDefns_13, &AbstractNonSolverMaybeDefn_20, STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_32_32);
      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0), (MR_String) "equivalence type", TypeCtor_7, EqvDefns_14, &EqvMaybeDefn_21, STATE_VARIABLE_Specs_32_32, &STATE_VARIABLE_Specs_34_34);
      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0), (MR_String) "discriminated union type", TypeCtor_7, DuDefns_15, &DuMaybeDefn_22, STATE_VARIABLE_Specs_34_34, &STATE_VARIABLE_Specs_36_36);
      parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0), (MR_String) "subtype", TypeCtor_7, SubDefns_16, &SubMaybeDefn_23, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_38_38);
      parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(TypeCtor_7, ForeignDefns_17, &ForeignMaybeDefn_24, STATE_VARIABLE_Specs_38_38, STATE_VARIABLE_Specs_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *MaybeDefn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AbstractSolverMaybeDefn_18));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SolverMaybeDefn_19));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbstractNonSolverMaybeDefn_20));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (EqvMaybeDefn_21));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (DuMaybeDefn_22));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (SubMaybeDefn_23));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ForeignMaybeDefn_24));
      }
    }
    else
    {
      *MaybeDefn_8 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[0]);
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_32;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1322__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_32));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DefnsCJCs_7,
  MR_Word * MaybeDefnCJCs_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word DefnsC_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCs_7, (MR_Integer) 0))));
    MR_Word DefnsJava_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCs_7, (MR_Integer) 1))));
    MR_Word DefnsCsharp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DefnsCJCs_7, (MR_Integer) 2))));
    MR_Word MaybeDefnC_13;
    MR_Word MaybeDefnJava_14;
    MR_Word MaybeDefnCsharp_15;
    MR_Word STATE_VARIABLE_Specs_19_19;
    MR_Word STATE_VARIABLE_Specs_21_21;

    if ((DefnsC_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeDefnC_13 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_19_19 = STATE_VARIABLE_Specs_0_16;
    }
    else
    {
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 1))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 0))));

      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeDefnC_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnC_13, 0) = ((MR_Box) (Var_59));
        }
        STATE_VARIABLE_Specs_19_19 = STATE_VARIABLE_Specs_0_16;
      }
      else
      {
        MR_Word Contexts_34;
        MR_Word Var_39;
        MR_Box conv1_Contexts_34;
        MR_Word LeastContext_35;
        MR_Word OtherContexts_36;
        MR_Box conv2_LeastContext_35;

        {
          MaybeDefnC_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeDefnC_13, 0) = ((MR_Box) (Var_59));
        }
        Var_39 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[10]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[16]), DefnsC_10, ((MR_Box) (Var_39)), &conv1_Contexts_34);
        Contexts_34 = ((MR_Word) (conv1_Contexts_34));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_35, Contexts_34, &OtherContexts_36);
        if (succeeded)
        {
          LeastContext_35 = ((MR_Word) (conv2_LeastContext_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_40;
          MR_Box conv4_STATE_VARIABLE_Specs_19_19;

          {
            Var_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) ((MR_String) "type"));
            MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) (TypeCtor_6));
            MR_hl_field(MR_mktag(0), Var_40, 5) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), Var_40, 6) = ((MR_Box) (LeastContext_35));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_40, OtherContexts_36, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv4_STATE_VARIABLE_Specs_19_19);
          STATE_VARIABLE_Specs_19_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19_19));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
    parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0(TypeCtor_6, (MR_Integer) 2, DefnsJava_11, &MaybeDefnJava_14, STATE_VARIABLE_Specs_19_19, &STATE_VARIABLE_Specs_21_21);
    parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0(TypeCtor_6, (MR_Integer) 1, DefnsCsharp_12, &MaybeDefnCsharp_15, STATE_VARIABLE_Specs_21_21, STATE_VARIABLE_Specs_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDefnCJCs_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnC_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnJava_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnCsharp_15));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Specs_18;

    parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_32;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1322__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_32);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_32));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word Lang_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;

    if ((TypeDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *MaybeTypeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
    }
    else
    {
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 1))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 0))));

      if ((Var_41 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
        }
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      }
      else
      {
        MR_Word Contexts_15;
        MR_Word Var_22;
        MR_Box conv1_Contexts_15;
        MR_Word LeastContext_16;
        MR_Word OtherContexts_17;
        MR_Box conv2_LeastContext_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeTypeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
        }
        Var_22 = mercury__set__init_0_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0));
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[10]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[15]), TypeDefns_9, ((MR_Box) (Var_22)), &conv1_Contexts_15);
        Contexts_15 = ((MR_Word) (conv1_Contexts_15));
        succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), &conv2_LeastContext_16, Contexts_15, &OtherContexts_17);
        if (succeeded)
        {
          LeastContext_16 = ((MR_Word) (conv2_LeastContext_16));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_23;
          MR_Box conv4_STATE_VARIABLE_Specs_19;

          {
            Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0]));
            MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_lang_6_p_0_2));
            MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) ((MR_String) "type"));
            MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (TypeCtor_7));
            MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Lang_8));
            MR_hl_field(MR_mktag(0), Var_23, 6) = ((MR_Box) (LeastContext_16));
          }
          mercury__set__foldl_4_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_23, OtherContexts_17, ((MR_Box) (STATE_VARIABLE_Specs_0_18)), &conv4_STATE_VARIABLE_Specs_19);
          *STATE_VARIABLE_Specs_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19));
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
            return;
          }
      }
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_duplicate_type_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_16);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_28;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_defn__1234__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_28);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_28));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_String Kind_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefns_9,
  MR_Word * MaybeTypeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if ((TypeDefns_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTypeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
  else
  {
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 1))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_9, (MR_Integer) 0))));

    if ((Var_55 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
      }
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    }
    else
    {
      MR_Word TypeInfo_50_50;
      MR_Word CompareTypeDefnsByContext_16;
      MR_Word SortedTypeDefns_20;
      MR_Word HeadTypeDefn_21;
      MR_Word TailTypeDefns_22;
      MR_Word Var_31;
      MR_Word conv1_SortedTypeDefns_20;
      MR_Box conv3_HeadTypeDefn_21;
      MR_Word conv2_TailTypeDefns_22;
      MR_Box conv5_STATE_VARIABLE_Specs_24;

      {
        CompareTypeDefnsByContext_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_16, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_16, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_1));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_16, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_16, 3) = ((MR_Box) (TypeInfo_for_T_47));
      }
      {
        TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1));
        MR_hl_field(MR_mktag(0), TypeInfo_50_50, 1) = ((MR_Box) (TypeInfo_for_T_47));
      }
      mercury__list__sort_3_p_0(TypeInfo_50_50, (MR_Word) (CompareTypeDefnsByContext_16), (MR_Word) (TypeDefns_9), &conv1_SortedTypeDefns_20);
      SortedTypeDefns_20 = (MR_Word) (conv1_SortedTypeDefns_20);
      mercury__list__det_head_tail_3_p_0(TypeInfo_50_50, (MR_Word) (SortedTypeDefns_20), &conv3_HeadTypeDefn_21, &conv2_TailTypeDefns_22);
      HeadTypeDefn_21 = ((MR_Word) (conv3_HeadTypeDefn_21));
      TailTypeDefns_22 = (MR_Word) (conv2_TailTypeDefns_22);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypeDefn_21));
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_defn_6_p_0_2));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TypeInfo_for_T_47));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (TypeInfo_for_T_47));
        MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (Kind_7));
        MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (TypeCtor_8));
        MR_hl_field(MR_mktag(0), Var_31, 7) = ((MR_Box) (HeadTypeDefn_21));
      }
      mercury__list__foldl_4_p_0(TypeInfo_50_50, (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (Var_31), (MR_Word) (TailTypeDefns_22), ((MR_Box) (STATE_VARIABLE_Specs_0_23)), &conv5_STATE_VARIABLE_Specs_24);
      *STATE_VARIABLE_Specs_24 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_24));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(
  MR_Word InsistOnDefn_6,
  MR_Word TypeCtor_7,
  MR_Word AbsTypeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
    MR_Word TypeCtorModuleName_12;
    MR_Word BuiltinTypeCtors_13;
    MR_String Var_18;
    MR_Word TypeCtorInfo_39_39;

    mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_10, &TypeCtorModuleName_12);
    BuiltinTypeCtors_13 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
    succeeded = (InsistOnDefn_6 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = mdbcomp__builtin_modules__any_mercury_builtin_module_1_p_0(TypeCtorModuleName_12);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) TypeCtorModuleName_12)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), TypeCtorModuleName_12, (MR_Integer) 0))));
          succeeded = (strcmp(Var_18, (MR_String) "type_desc") == 0);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_39_39 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_39_39, ((MR_Box) (TypeCtor_7)), BuiltinTypeCtors_13);
          succeeded = !(succeeded);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Pieces_14;
      MR_Word Spec_15;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word Var_32;

      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (TypeCtor_7));
      }
      {
        Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])));
      }
      {
        Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[85])));
        MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_21));
      }
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsTypeDefn_8, (MR_Integer) 4))));
      {
        Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.maybe_report_declared_but_undefined_type\'/5"));
        MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
      }
    }
    else
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(
  MR_Word TypeCtor_6,
  MR_String Section_7,
  MR_Word MaybeImpAbstractDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  if ((MaybeImpAbstractDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  else
  {
    MR_Word ImpAbstractDefn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeImpAbstractDefn_8, (MR_Integer) 0))));
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_36;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Section_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[70])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[68])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_10, (MR_Integer) 4))));
    {
      Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_type_in_imp\'/5"));
      MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word MaybeDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  if ((MaybeDefn_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
  else
  {
    MR_Word Defn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn_6, (MR_Integer) 0))));
    MR_Word Pieces_9;
    MR_Word Spec_10;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_32;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_16, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_16, 1) = ((MR_Box) (TypeCtor_5));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[67])));
    }
    {
      Pieces_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[61])));
      MR_hl_field(MR_mktag(1), Pieces_9, 1) = ((MR_Box) (Var_15));
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Defn_8, (MR_Integer) 4))));
    {
      Spec_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_10, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_nonabstract_solver_type_in_int\'/4"));
      MR_hl_field(MR_mktag(1), Spec_10, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_10, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(MR_mktag(1), Spec_10, 3) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Spec_10, 4) = ((MR_Box) (Pieces_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_10_p_0(
  MR_Word TypeCtor_11,
  MR_Word CtorNames_12,
  MR_Word MaybeDefnCJCs_13,
  MR_Word MaybeEnumCJCs_14,
  MR_Word LeftOverEnumsCJCs_15,
  MR_Word * MaybeDefnOrEnumCJCs_16,
  MR_Word * SrcForeignDefns_17,
  MR_Word * SrcForeignEnums_18,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_Word CtorNamesSet_20;
    MR_Word MaybeDefnC_21;
    MR_Word MaybeDefnJava_22;
    MR_Word MaybeDefnCsharp_23;
    MR_Word MaybeEnumC_24;
    MR_Word MaybeEnumJava_25;
    MR_Word MaybeEnumCsharp_26;
    MR_Word LeftOverEnumsC_27;
    MR_Word LeftOverEnumsJava_28;
    MR_Word LeftOverEnumsCsharp_29;
    MR_Word MaybeDefnOrEnumC_30;
    MR_Word SrcForeignDefnsC_31;
    MR_Word SrcForeignEnumsC_32;
    MR_Word MaybeDefnOrEnumJava_33;
    MR_Word SrcForeignDefnsJava_34;
    MR_Word SrcForeignEnumsJava_35;
    MR_Word MaybeDefnOrEnumCsharp_36;
    MR_Word SrcForeignDefnsCsharp_37;
    MR_Word SrcForeignEnumsCsharp_38;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_Specs_42_42;
    MR_Word Var_44;
    MR_Word Var_45;

    mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames_12, &CtorNamesSet_20);
    MaybeDefnC_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCs_13, (MR_Integer) 0))));
    MaybeDefnJava_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCs_13, (MR_Integer) 1))));
    MaybeDefnCsharp_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDefnCJCs_13, (MR_Integer) 2))));
    MaybeEnumC_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeEnumCJCs_14, (MR_Integer) 0))));
    MaybeEnumJava_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeEnumCJCs_14, (MR_Integer) 1))));
    MaybeEnumCsharp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeEnumCJCs_14, (MR_Integer) 2))));
    LeftOverEnumsC_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftOverEnumsCJCs_15, (MR_Integer) 0))));
    LeftOverEnumsJava_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftOverEnumsCJCs_15, (MR_Integer) 1))));
    LeftOverEnumsCsharp_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LeftOverEnumsCJCs_15, (MR_Integer) 2))));
    parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnC_21, MaybeEnumC_24, LeftOverEnumsC_27, &MaybeDefnOrEnumC_30, &SrcForeignDefnsC_31, &SrcForeignEnumsC_32, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_41_41);
    parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnJava_22, MaybeEnumJava_25, LeftOverEnumsJava_28, &MaybeDefnOrEnumJava_33, &SrcForeignDefnsJava_34, &SrcForeignEnumsJava_35, STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_42_42);
    parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnCsharp_23, MaybeEnumCsharp_26, LeftOverEnumsCsharp_29, &MaybeDefnOrEnumCsharp_36, &SrcForeignDefnsCsharp_37, &SrcForeignEnumsCsharp_38, STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_40);
    Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), SrcForeignDefnsJava_34, SrcForeignDefnsCsharp_37);
    *SrcForeignDefns_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), SrcForeignDefnsC_31, Var_44);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SrcForeignEnumsJava_35, SrcForeignEnumsCsharp_38);
    *SrcForeignEnums_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SrcForeignEnumsC_32, Var_45);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDefnOrEnumCJCs_16 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnOrEnumC_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnOrEnumJava_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_36));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MaybeCheckedForeignEnum_10;

    parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCheckedForeignEnum_10);
    *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCheckedForeignEnum_10));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__874__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word CtorNames_13,
  MR_Word CtorNamesSet_14,
  MR_Word MaybeDefn_15,
  MR_Word MaybeEnum_16,
  MR_Word LeftOverEnums_17,
  MR_Word * MaybeDefnOrEnum_18,
  MR_Word * SrcForeignDefns_19,
  MR_Word * SrcForeignEnums_20,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCheckedForeignEnum_22;

    if ((MaybeEnum_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_36;

      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2]));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1));
        MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (LeftOverEnums_17));
        MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.decide_du_repn_foreign_only_constants_lang\'/11", (MR_String) "MaybeEnum = no but LeftOverEnums != []");
      MaybeCheckedForeignEnum_22 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
    }
    else
    {
      MR_Word Enum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnum_16, (MR_Integer) 0))));
      MR_Word CFESpecs_26;
      MR_Word Var_33;
      MR_Word HeadMaybeCFE_50;
      MR_Word TailMaybeCFEs_51;
      MR_Word TailMaybeCFE_54;
      MR_Word TailSpecs_55;

      parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(TypeCtor_12, CtorNames_13, CtorNamesSet_14, Enum_23, &HeadMaybeCFE_50);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (TypeCtor_12));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (CtorNames_13));
        MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (CtorNamesSet_14));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[9]), Var_33, LeftOverEnums_17, &TailMaybeCFEs_51);
      parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(TailMaybeCFEs_51, &TailMaybeCFE_54, &TailSpecs_55);
      if (((MR_tag((MR_Word) HeadMaybeCFE_50)) == (MR_Integer) 0))
      {
        MR_Word HeadSpecs_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMaybeCFE_50, (MR_Integer) 0))));

        MaybeCheckedForeignEnum_22 = TailMaybeCFE_54;
        CFESpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadSpecs_57, TailSpecs_55);
      }
      else
      {
        MR_Word CFE_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeCFE_50, (MR_Integer) 0))));

        {
          MaybeCheckedForeignEnum_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeCheckedForeignEnum_22, 0) = ((MR_Box) (CFE_56));
        }
        CFESpecs_26 = TailSpecs_55;
      }
      *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CFESpecs_26, STATE_VARIABLE_Specs_0_31);
    }
    if ((MaybeDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((MaybeCheckedForeignEnum_22 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *MaybeDefnOrEnum_18 = (MR_Word) ((MR_Unsigned) 0U);
        *SrcForeignDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
        *SrcForeignEnums_20 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word CheckedForeignEnum_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCheckedForeignEnum_22, (MR_Integer) 0))));
        MR_Word EnumInfo_29;
        MR_Word Var_40 = (MR_Word) ((MR_Word) (CheckedForeignEnum_28));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeDefnOrEnum_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
        }
        EnumInfo_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckedForeignEnum_28, (MR_Integer) 0))));
        *SrcForeignDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcForeignEnums_20 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EnumInfo_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (*SrcForeignDefns_19));
        }
      }
    else
    {
      MR_Word Defn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefn_15, (MR_Integer) 0))));
      MR_Word Var_42;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Defn_27));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnum_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SrcForeignDefns_19 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *SrcForeignEnums_20 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word CtorNames_7,
  MR_Word CtorNamesSet_8,
  MR_Word ForeignEnum_9,
  MR_Word * MaybeCheckedForeignEnum_10)
{
  {
    MR_Word MercuryForeignOoM_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_9, (MR_Integer) 2))));
    MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_9, (MR_Integer) 3))));
    MR_Word MercuryForeignAL_16;
    MR_Word ContextPieces_17;
    MR_Word TypeCtorSymName_18;
    MR_Word TypeCtorModuleName_20;
    MR_Word MercuryForeignBiMap_21;
    MR_Word Specs_22;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;

    MercuryForeignAL_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[4]), MercuryForeignOoM_13);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[16])));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      ContextPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ContextPieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
      MR_hl_field(MR_mktag(1), ContextPieces_17, 1) = ((MR_Box) (Var_32));
    }
    TypeCtorSymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_6, (MR_Integer) 0))));
    mdbcomp__sym_name__det_sym_name_get_module_name_2_p_0(TypeCtorSymName_18, &TypeCtorModuleName_20);
    parse_tree__prog_foreign_enum__build_ctor_name_to_foreign_name_map_9_p_0((MR_Integer) 0, Context_14, ContextPieces_17, TypeCtorModuleName_20, CtorNamesSet_8, MercuryForeignAL_16, &MercuryForeignBiMap_21, (MR_Word) ((MR_Unsigned) 0U), &Specs_22);
    if ((Specs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ForeignNames_23;
      MR_Word ForeignNameOoM_26;
      MR_Word CheckedForeignEnum_27;

      mercury__bimap__apply_forward_map_to_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MercuryForeignBiMap_21, CtorNames_7, &ForeignNames_23);
      if ((ForeignNames_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.build_mercury_foreign_enum_map\'/5", (MR_String) "enum type with no constructors");
          return;
        }
      else
      {
        MR_String HeadForeignName_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), ForeignNames_23, (MR_Integer) 0))));
        MR_Word TailForeignNames_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignNames_23, (MR_Integer) 1))));

        {
          ForeignNameOoM_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignNameOoM_26, 0) = ((MR_Box) (HeadForeignName_24));
          MR_hl_field(MR_mktag(0), ForeignNameOoM_26, 1) = ((MR_Box) (TailForeignNames_25));
        }
      }
      {
        CheckedForeignEnum_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CheckedForeignEnum_27, 0) = ((MR_Box) (ForeignEnum_9));
        MR_hl_field(MR_mktag(0), CheckedForeignEnum_27, 1) = ((MR_Box) (ForeignNameOoM_26));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeCheckedForeignEnum_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CheckedForeignEnum_27));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeCheckedForeignEnum_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Specs_22));
      }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word HeadMaybeCFE_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailMaybeCFEs_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TailMaybeCFE_8;
    MR_Word TailSpecs_9;

    parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(TailMaybeCFEs_5, &TailMaybeCFE_8, &TailSpecs_9);
    if (((MR_tag((MR_Word) HeadMaybeCFE_4)) == (MR_Integer) 0))
    {
      MR_Word HeadSpecs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadMaybeCFE_4, (MR_Integer) 0))));

      *HeadVar__2_2 = TailMaybeCFE_8;
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), HeadSpecs_11, TailSpecs_9);
    }
    else
    {
      MR_Word CFE_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadMaybeCFE_4, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CFE_10));
      }
      *HeadVar__3_3 = TailSpecs_9;
    }
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv9_HeadVar__2_2;

    conv9_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_STATE_VARIABLE_Specs_14;

    parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_14));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv6_HeadVar__2_2;

    conv6_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__2_2;

    conv5_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__5_93;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__789__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__5_93);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__5_93));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Specs_11;

    parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_11);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_11));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word IntAbstractStdMaybeDefn_13,
  MR_Word ImpAbstractStdMaybeDefn_14,
  MR_Word IntMaybeDefnCJCs_15,
  MR_Word ImpMaybeDefnCJCs_16,
  MR_Word * Status_17,
  MR_Word * AbstractStdDefn_18,
  MR_Word * ChosenMaybeDefnCJCs_19,
  MR_Word * SrcDefns_20,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_Word IntDefnsCJCs_28;
    MR_Word ImpDefnsCJCs_29;
    MR_Word SrcDefnsInt_35;
    MR_Word SrcDefnsImp_36;
    MR_Word MaybeTypeDefn_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_15, (MR_Integer) 0))));
    MR_Word TailDefns_109;
    MR_Word MaybeTypeDefn_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_15, (MR_Integer) 1))));
    MR_Word MaybeTypeDefns_112;
    MR_Word TailDefns_114;
    MR_Word MaybeTypeDefn_116 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_15, (MR_Integer) 2))));
    MR_Word MaybeTypeDefn_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_16, (MR_Integer) 0))));
    MR_Word TailDefns_129;
    MR_Word MaybeTypeDefn_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_16, (MR_Integer) 1))));
    MR_Word MaybeTypeDefns_132;
    MR_Word TailDefns_134;
    MR_Word MaybeTypeDefn_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_16, (MR_Integer) 2))));
    MR_Word MaybeTypeDefns_107;
    MR_Word MaybeTypeDefns_127;

    {
      MaybeTypeDefns_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_112, 0) = ((MR_Box) (MaybeTypeDefn_116));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeTypeDefns_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_107, 0) = ((MR_Box) (MaybeTypeDefn_111));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_107, 1) = ((MR_Box) (MaybeTypeDefns_112));
    }
    if ((MaybeTypeDefn_116 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_114 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_120 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_116, (MR_Integer) 0))));

      {
        TailDefns_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_114, 0) = ((MR_Box) (TypeDefn_120));
        MR_hl_field(MR_mktag(1), TailDefns_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_111 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_109 = TailDefns_114;
    else
    {
      MR_Word TypeDefn_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_111, (MR_Integer) 0))));

      {
        TailDefns_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_109, 0) = ((MR_Box) (TypeDefn_115));
        MR_hl_field(MR_mktag(1), TailDefns_109, 1) = ((MR_Box) (TailDefns_114));
      }
    }
    if ((MaybeTypeDefn_106 == (MR_Word) ((MR_Unsigned) 0U)))
      IntDefnsCJCs_28 = TailDefns_109;
    else
    {
      MR_Word TypeDefn_110 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_106, (MR_Integer) 0))));

      {
        IntDefnsCJCs_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntDefnsCJCs_28, 0) = ((MR_Box) (TypeDefn_110));
        MR_hl_field(MR_mktag(1), IntDefnsCJCs_28, 1) = ((MR_Box) (TailDefns_109));
      }
    }
    {
      MaybeTypeDefns_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_132, 0) = ((MR_Box) (MaybeTypeDefn_136));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeTypeDefns_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_127, 0) = ((MR_Box) (MaybeTypeDefn_131));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_127, 1) = ((MR_Box) (MaybeTypeDefns_132));
    }
    if ((MaybeTypeDefn_136 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_134 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_140 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_136, (MR_Integer) 0))));

      {
        TailDefns_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_134, 0) = ((MR_Box) (TypeDefn_140));
        MR_hl_field(MR_mktag(1), TailDefns_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_131 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_129 = TailDefns_134;
    else
    {
      MR_Word TypeDefn_135 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_131, (MR_Integer) 0))));

      {
        TailDefns_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_129, 0) = ((MR_Box) (TypeDefn_135));
        MR_hl_field(MR_mktag(1), TailDefns_129, 1) = ((MR_Box) (TailDefns_134));
      }
    }
    if ((MaybeTypeDefn_126 == (MR_Word) ((MR_Unsigned) 0U)))
      ImpDefnsCJCs_29 = TailDefns_129;
    else
    {
      MR_Word TypeDefn_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_126, (MR_Integer) 0))));

      {
        ImpDefnsCJCs_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpDefnsCJCs_29, 0) = ((MR_Box) (TypeDefn_130));
        MR_hl_field(MR_mktag(1), ImpDefnsCJCs_29, 1) = ((MR_Box) (TailDefns_129));
      }
    }
    if ((IntAbstractStdMaybeDefn_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_55;
      MR_Word Var_56;

      *Status_17 = (MR_Integer) 2;
      if ((ImpAbstractStdMaybeDefn_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word IntImpDefnsCJCs_38;
        MR_Word FirstDefn_39;
        MR_Word Var_50;
        MR_Box conv1_STATE_VARIABLE_Specs_41;
        MR_Box conv2_FirstDefn_39;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_74;
        MR_Word Var_75;
        MR_Word Var_76;

        IntImpDefnsCJCs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), IntDefnsCJCs_28, ImpDefnsCJCs_29);
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_1));
          MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TypeCtor_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_50, IntImpDefnsCJCs_38, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv1_STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_41));
        conv2_FirstDefn_39 = mercury__list__det_head_1_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), IntImpDefnsCJCs_38);
        FirstDefn_39 = ((MR_Word) (conv2_FirstDefn_39));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_39, (MR_Integer) 0))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_39, (MR_Integer) 1))));
        Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_39, (MR_Integer) 3))));
        Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_39, (MR_Integer) 4))));
        Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_39, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *AbstractStdDefn_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_76));
        }
      }
      else
      {
        MR_Word Var_53;
        MR_Box conv4_STATE_VARIABLE_Specs_41;

        *AbstractStdDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_14, (MR_Integer) 0))));
        {
          Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_2));
          MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (*AbstractStdDefn_18));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_53, IntDefnsCJCs_28, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv4_STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_41));
      }
      *ChosenMaybeDefnCJCs_19 = ImpMaybeDefnCJCs_16;
      SrcDefnsInt_35 = (MR_Word) ((MR_Unsigned) 0U);
      Var_55 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbstractStdDefn_18);
      Var_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[12]), ImpDefnsCJCs_29);
      {
        SrcDefnsImp_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SrcDefnsImp_36, 0) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(1), SrcDefnsImp_36, 1) = ((MR_Box) (Var_56));
      }
    }
    else
    {
      MR_Word IntContexts_31;
      MR_Word SortedIntContexts_32;
      MR_Word TailContexts_149;
      MR_Word TailContexts_160;

      *AbstractStdDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_13, (MR_Integer) 0))));
      if ((MaybeTypeDefn_116 == (MR_Word) ((MR_Unsigned) 0U)))
        TailContexts_160 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word TypeDefn_172 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_116, (MR_Integer) 0))));
        MR_Word Var_173 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_172, (MR_Integer) 4))));

        {
          TailContexts_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TailContexts_160, 0) = ((MR_Box) (Var_173));
          MR_hl_field(MR_mktag(1), TailContexts_160, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      if ((MaybeTypeDefn_111 == (MR_Word) ((MR_Unsigned) 0U)))
        TailContexts_149 = TailContexts_160;
      else
      {
        MR_Word TypeDefn_161 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_111, (MR_Integer) 0))));
        MR_Word Var_162 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_161, (MR_Integer) 4))));

        {
          TailContexts_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TailContexts_149, 0) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(1), TailContexts_149, 1) = ((MR_Box) (TailContexts_160));
        }
      }
      if ((MaybeTypeDefn_106 == (MR_Word) ((MR_Unsigned) 0U)))
        IntContexts_31 = TailContexts_149;
      else
      {
        MR_Word TypeDefn_150 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_106, (MR_Integer) 0))));
        MR_Word Var_151 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_150, (MR_Integer) 4))));

        {
          IntContexts_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntContexts_31, 0) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(1), IntContexts_31, 1) = ((MR_Box) (TailContexts_149));
        }
      }
      mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntContexts_31, &SortedIntContexts_32);
      if ((SortedIntContexts_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_62;

        *Status_17 = (MR_Integer) 1;
        *ChosenMaybeDefnCJCs_19 = ImpMaybeDefnCJCs_16;
        Var_62 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbstractStdDefn_18);
        {
          SrcDefnsInt_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_35, 0) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        SrcDefnsImp_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[13]), ImpDefnsCJCs_29);
        *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      }
      else
      {
        MR_Word FirstIntContext_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntContexts_32, (MR_Integer) 0))));
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Box conv8_STATE_VARIABLE_Specs_41;

        *Status_17 = (MR_Integer) 0;
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_11_p_0_5));
          MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(MR_mktag(0), Var_65, 4) = ((MR_Box) (FirstIntContext_33));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_65, ImpDefnsCJCs_29, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv8_STATE_VARIABLE_Specs_41);
        *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_41));
        *ChosenMaybeDefnCJCs_19 = IntMaybeDefnCJCs_15;
        Var_67 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbstractStdDefn_18);
        Var_68 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[14]), IntDefnsCJCs_28);
        {
          SrcDefnsInt_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_35, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), SrcDefnsInt_35, 1) = ((MR_Box) (Var_68));
        }
        SrcDefnsImp_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *SrcDefns_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SrcDefnsInt_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefnsImp_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_STATE_VARIABLE_Specs_14;

    parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Specs_14);
    *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_14));
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_68;

    conv3_HeadVar__2_68 = parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__decide_du_foreign_type_section__673__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_68));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    conv2_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_80;

    parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_foreign_type_section__696__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_80);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_80));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_Word DuSection_16,
  MR_Word IntAbstractStdMaybeDefn_17,
  MR_Word IntMaybeDefnCJCs_18,
  MR_Word ImpMaybeDefnCJCs_19,
  MR_Word * Status_20,
  MR_Word * ChosenSectionCJCs_21,
  MR_Word * ChosenMaybeDefnCJCs_22,
  MR_Word * SrcDefnsDuInt_23,
  MR_Word * SrcDefnsDuImp_24,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_Word IntDefnsCJCs_32;
    MR_Word ImpDefnsCJCs_33;
    MR_Word MaybeTypeDefn_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 0))));
    MR_Word TailDefns_87;
    MR_Word MaybeTypeDefn_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 1))));
    MR_Word MaybeTypeDefns_90;
    MR_Word TailDefns_92;
    MR_Word MaybeTypeDefn_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 2))));
    MR_Word MaybeTypeDefn_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 0))));
    MR_Word TailDefns_107;
    MR_Word MaybeTypeDefn_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 1))));
    MR_Word MaybeTypeDefns_110;
    MR_Word TailDefns_112;
    MR_Word MaybeTypeDefn_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 2))));
    MR_Word MaybeTypeDefns_85;
    MR_Word MaybeTypeDefns_105;

    {
      MaybeTypeDefns_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_90, 0) = ((MR_Box) (MaybeTypeDefn_94));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeTypeDefns_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_85, 0) = ((MR_Box) (MaybeTypeDefn_89));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_85, 1) = ((MR_Box) (MaybeTypeDefns_90));
    }
    if ((MaybeTypeDefn_94 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_92 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_94, (MR_Integer) 0))));

      {
        TailDefns_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_92, 0) = ((MR_Box) (TypeDefn_98));
        MR_hl_field(MR_mktag(1), TailDefns_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_89 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_87 = TailDefns_92;
    else
    {
      MR_Word TypeDefn_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_89, (MR_Integer) 0))));

      {
        TailDefns_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_87, 0) = ((MR_Box) (TypeDefn_93));
        MR_hl_field(MR_mktag(1), TailDefns_87, 1) = ((MR_Box) (TailDefns_92));
      }
    }
    if ((MaybeTypeDefn_84 == (MR_Word) ((MR_Unsigned) 0U)))
      IntDefnsCJCs_32 = TailDefns_87;
    else
    {
      MR_Word TypeDefn_88 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_84, (MR_Integer) 0))));

      {
        IntDefnsCJCs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 0) = ((MR_Box) (TypeDefn_88));
        MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 1) = ((MR_Box) (TailDefns_87));
      }
    }
    {
      MaybeTypeDefns_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_110, 0) = ((MR_Box) (MaybeTypeDefn_114));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MaybeTypeDefns_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_105, 0) = ((MR_Box) (MaybeTypeDefn_109));
      MR_hl_field(MR_mktag(1), MaybeTypeDefns_105, 1) = ((MR_Box) (MaybeTypeDefns_110));
    }
    if ((MaybeTypeDefn_114 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_112 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_118 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_114, (MR_Integer) 0))));

      {
        TailDefns_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_112, 0) = ((MR_Box) (TypeDefn_118));
        MR_hl_field(MR_mktag(1), TailDefns_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_109 == (MR_Word) ((MR_Unsigned) 0U)))
      TailDefns_107 = TailDefns_112;
    else
    {
      MR_Word TypeDefn_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_109, (MR_Integer) 0))));

      {
        TailDefns_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailDefns_107, 0) = ((MR_Box) (TypeDefn_113));
        MR_hl_field(MR_mktag(1), TailDefns_107, 1) = ((MR_Box) (TailDefns_112));
      }
    }
    if ((MaybeTypeDefn_104 == (MR_Word) ((MR_Unsigned) 0U)))
      ImpDefnsCJCs_33 = TailDefns_107;
    else
    {
      MR_Word TypeDefn_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_104, (MR_Integer) 0))));

      {
        ImpDefnsCJCs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 0) = ((MR_Box) (TypeDefn_108));
        MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 1) = ((MR_Box) (TailDefns_107));
      }
    }
    switch (DuSection_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_50;
          MR_Word Var_54;
          MR_Box conv1_STATE_VARIABLE_Specs_41;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (DuDefn_15));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_50, IntDefnsCJCs_32, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv1_STATE_VARIABLE_Specs_41);
          *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_41));
          if ((IntAbstractStdMaybeDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *Status_20 = (MR_Integer) 3;
            *SrcDefnsDuInt_23 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word IntAbstractStdDefn_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_17, (MR_Integer) 0))));
            MR_Word Var_52;

            *Status_20 = (MR_Integer) 2;
            Var_52 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_39);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SrcDefnsDuInt_23 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_52));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          *ChosenSectionCJCs_21 = (MR_Integer) 1;
          *ChosenMaybeDefnCJCs_22 = ImpMaybeDefnCJCs_19;
          Var_54 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsDuImp_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 0:
        if ((IntDefnsCJCs_32 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_56;

          *Status_20 = (MR_Integer) 1;
          *ChosenSectionCJCs_21 = (MR_Integer) 1;
          *ChosenMaybeDefnCJCs_22 = ImpMaybeDefnCJCs_19;
          Var_56 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsDuInt_23 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *SrcDefnsDuImp_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[10]), ImpDefnsCJCs_33);
          *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
        }
        else
        {
          MR_Word IntCJCsContexts_36;
          MR_Word SortedIntCJCsContexts_37;
          MR_Word FirstIntContext_38;
          MR_Word Var_60;
          MR_Word Var_62;
          MR_Box conv4_FirstIntContext_38;
          MR_Box conv6_STATE_VARIABLE_Specs_41;

          IntCJCsContexts_36 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[11]), IntDefnsCJCs_32);
          mercury__list__sort_2_p_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntCJCsContexts_36, &SortedIntCJCsContexts_37);
          conv4_FirstIntContext_38 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term__term__type_ctor_info_context_0), SortedIntCJCsContexts_37);
          FirstIntContext_38 = ((MR_Word) (conv4_FirstIntContext_38));
          {
            Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_foreign_type_section_13_p_0_4));
            MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (FirstIntContext_38));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_60, ImpDefnsCJCs_33, ((MR_Box) (STATE_VARIABLE_Specs_0_40)), &conv6_STATE_VARIABLE_Specs_41);
          *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_41));
          *Status_20 = (MR_Integer) 0;
          *ChosenSectionCJCs_21 = (MR_Integer) 0;
          *ChosenMaybeDefnCJCs_22 = IntMaybeDefnCJCs_18;
          Var_62 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsDuInt_23 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *SrcDefnsDuImp_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CheckedMap_34;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CheckedMap_34));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0(
  MR_Word InsistOnDefn_7,
  MR_Word IntModeDefnMap_8,
  MR_Word ImpModeDefnMap_9,
  MR_Word * CheckedMap_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word IntDefnModeCtors_12;
    MR_Word ImpDefnModeCtors_13;
    MR_Word ModeCtors_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv3_CheckedMap_10;
    MR_Box conv2_STATE_VARIABLE_Specs_16;

    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), IntModeDefnMap_8, &IntDefnModeCtors_12);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), ImpModeDefnMap_9, &ImpDefnModeCtors_13);
    Var_17 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), IntDefnModeCtors_12, ImpDefnModeCtors_13);
    ModeCtors_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), Var_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (InsistOnDefn_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (IntModeDefnMap_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ImpModeDefnMap_9));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[3]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_18, ModeCtors_14, ((MR_Box) (Var_19)), &conv3_CheckedMap_10, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_16);
    *CheckedMap_10 = ((MR_Word) (conv3_CheckedMap_10));
    *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_CheckedMap_34;
    MR_Word conv0_STATE_VARIABLE_Specs_36;

    parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CheckedMap_34));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
  }
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0(
  MR_Word InsistOnDefn_7,
  MR_Word IntInstDefnMap_8,
  MR_Word ImpInstDefnMap_9,
  MR_Word * CheckedMap_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word IntDefnInstCtors_12;
    MR_Word ImpDefnInstCtors_13;
    MR_Word InstCtors_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Box conv3_CheckedMap_10;
    MR_Box conv2_STATE_VARIABLE_Specs_16;

    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), IntInstDefnMap_8, &IntDefnInstCtors_12);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), ImpInstDefnMap_9, &ImpDefnInstCtors_13);
    Var_17 = mercury__set__union_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), IntDefnInstCtors_12, ImpDefnInstCtors_13);
    InstCtors_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), Var_17);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (InsistOnDefn_7));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (IntInstDefnMap_8));
      MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ImpInstDefnMap_9));
    }
    Var_19 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[2]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_18, InstCtors_14, ((MR_Box) (Var_19)), &conv3_CheckedMap_10, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_16);
    *CheckedMap_10 = ((MR_Word) (conv3_CheckedMap_10));
    *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_Specs_16;

    parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Specs_16);
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_16));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FieldNameMap_35;

    parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_FieldNameMap_35);
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_FieldNameMap_35));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_TypeCtorCheckedMap_132;
    MR_Word conv0_STATE_VARIABLE_Specs_134;

    parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeCtorCheckedMap_132, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_134);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeCtorCheckedMap_132));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_134));
  }
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0(
  MR_Word InsistOnDefn_8,
  MR_Word IntTypeDefnMap_9,
  MR_Word ImpTypeDefnMap_10,
  MR_Word ImpForeignEnumMap_11,
  MR_Word * CheckedMap_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word IntDefnTypeCtors_14;
    MR_Word ImpDefnTypeCtors_15;
    MR_Word ImpEnumTypeCtors_16;
    MR_Word TypeCtors_17;
    MR_Word FieldNameMap_18;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Specs_28_28;
    MR_Word Var_30;
    MR_Box conv3_CheckedMap_12;
    MR_Box conv2_STATE_VARIABLE_Specs_28_28;
    MR_Box conv5_FieldNameMap_18;
    MR_Box conv7_STATE_VARIABLE_Specs_20;

    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), IntTypeDefnMap_9, &IntDefnTypeCtors_14);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_10, &ImpDefnTypeCtors_15);
    mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[1]), ImpForeignEnumMap_11, &ImpEnumTypeCtors_16);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ImpEnumTypeCtors_16));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ImpDefnTypeCtors_15));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (IntDefnTypeCtors_14));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
    }
    Var_21 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_22);
    TypeCtors_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_21);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (InsistOnDefn_8));
      MR_hl_field(MR_mktag(0), Var_26, 4) = ((MR_Box) (IntTypeDefnMap_9));
      MR_hl_field(MR_mktag(0), Var_26, 5) = ((MR_Box) (ImpTypeDefnMap_10));
      MR_hl_field(MR_mktag(0), Var_26, 6) = ((MR_Box) (ImpForeignEnumMap_11));
    }
    Var_27 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[0]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_26, TypeCtors_17, ((MR_Box) (Var_27)), &conv3_CheckedMap_12, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_28_28);
    *CheckedMap_12 = ((MR_Word) (conv3_CheckedMap_12));
    STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_28_28));
    Var_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[8]), *CheckedMap_12, ((MR_Box) (Var_30)), &conv5_FieldNameMap_18);
    FieldNameMap_18 = ((MR_Word) (conv5_FieldNameMap_18));
    mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[9]), FieldNameMap_18, ((MR_Box) (STATE_VARIABLE_Specs_28_28)), &conv7_STATE_VARIABLE_Specs_20);
    *STATE_VARIABLE_Specs_20 = ((MR_Word) (conv7_STATE_VARIABLE_Specs_20));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__check_type_inst_mode_defns__init(void)
{
}

void mercury__parse_tree__check_type_inst_mode_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0);
	MR_register_type_ctor_info(&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_map_0);
	MR_register_type_ctor_info(&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0);
	MR_register_type_ctor_info(&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_maybe_insist_on_defn_0);
}

void mercury__parse_tree__check_type_inst_mode_defns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__check_type_inst_mode_defns__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.check_type_inst_mode_defns.
