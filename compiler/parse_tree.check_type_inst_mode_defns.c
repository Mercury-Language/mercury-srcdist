/*
** Automatically generated from `check_type_inst_mode_defns.m'
** by the Mercury compiler,
** version rotd-2022-08-25
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
#include "term_context.mih"
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_1__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term_context__type_ctor_info_term_context_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2;

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_0;

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_1;

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_decl_or_defn_0[2];

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_decl_or_defn_0[2];

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_decl_or_defn_0[2];

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
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1442__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__non_enum_du_report_any_foreign_enum__1032__1_1_f_0(
  MR_Word LambdaHeadVar__1_26);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__910__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_36);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__809__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word AbsStdDefn_22,
  MR_String HeadVar__3_70,
  MR_String HeadVar__4_71,
  MR_Word HeadVar__5_99,
  MR_Word HeadVar__6_100,
  MR_Word * HeadVar__7_101);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__701__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_String HeadVar__3_47,
  MR_String HeadVar__4_48,
  MR_Word HeadVar__5_60,
  MR_Word HeadVar__6_61,
  MR_Word * HeadVar__7_62);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__712__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_String HeadVar__3_53,
  MR_String HeadVar__4_54,
  MR_Word HeadVar__5_66,
  MR_Word HeadVar__6_67,
  MR_Word * HeadVar__7_68);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_109_101_114_95_102_111_114_101_105_103_110_95_115_101_99_116_105_111_110_95_109_105_115_109_97_116_99_104_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeCtor_8,
  MR_String DeclOrDefn_9,
  MR_String MerSection_10,
  MR_Word MerDefn_11,
  MR_Word ForeignDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

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
parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T1_57,
  MR_Word TypeInfo_for_T2_58,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_Word ModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T1_59,
  MR_Word TypeInfo_for_T2_60,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_Word InstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(
  MR_Word TypeInfo_for_T1_73,
  MR_Word TypeInfo_for_T2_74,
  MR_Word DeclOrDefn_8,
  MR_String Kind_9,
  MR_Word TypeCtor_10,
  MR_Word OrigTypeDefn_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

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
parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word UsedContext_11,
  MR_String Kind_12,
  MR_String Section_13,
  MR_String SectionDeclOrDefn_14,
  MR_String DeclOrDefn_15,
  MR_Word MaybeDefnContext_16,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word DuDefn_8,
  MR_Word NonEnumSNAs_9,
  MR_Word Enum_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_136,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_137,
  MR_Word STATE_VARIABLE_Specs_0_138,
  MR_Word * STATE_VARIABLE_Specs_139);

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
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word DeclOrDefn_8,
  MR_String Kind_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefns_11,
  MR_Word * MaybeTypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

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
parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word IntMaybeDefn_10,
  MR_Word IntMaybeAbstractDefn0_11,
  MR_Word * IntMaybeAbstractDefn_12,
  MR_Word ImpMaybeDefn0_13,
  MR_Word * ImpMaybeDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0(
  MR_Word TypeCtor_14,
  MR_Word IntAbsSolverMaybeDefn_15,
  MR_Word ImpAbsSolverMaybeDefn_16,
  MR_Word IntAbsStdMaybeDefn_17,
  MR_Word ImpAbsStdMaybeDefn_18,
  MR_Word IntMaybeDefnCJCs_19,
  MR_Word ImpMaybeDefnCJCs_20,
  MR_Word * Status_21,
  MR_Word * AbsStdDefn_22,
  MR_Word * ChosenMaybeDefnCJCs_23,
  MR_Word * SrcDefns_24,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

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
parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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


static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[118][2];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[26][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[8][7];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[3][12];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[4][11];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[4][10];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_8[7][8];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_9[1][2];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_10[1][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_11[2][6];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[12][4];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_13[1][9];




static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[118][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[4]))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 30U)),
    ((MR_Box) ((MR_Integer) -2))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the Mercury definition of"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations for it."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "so there must not be any"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not an enumeration type,"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That Mercury definition is here."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is defined to be a subtype,"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That subtype definition is here."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[30])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since the Mercury"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section,"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "any foreign type definition for it"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section as well."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That Mercury"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition for"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "without either"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a Mercury definition or a Mercury declaration for"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: since some foreign language definition"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be in the interface section as well."))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "all other foreign language definitions for it"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is in the interface section,"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That foreign definition in the interface"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: a solver type such as"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "only in the implementation section."))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(as opposed to declared)"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be defined"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[73])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: this declaration of"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is redundant,"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the type has a definition in the"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with the"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with the"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in the"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That definition is here."))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for the"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has this declaration, but it has no definition."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The original"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate foreign"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "definition in"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The original definition is here."))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[14])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate occurrence of the field name"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the function symbol"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the definition of"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first occurrence of this field name"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: duplicate"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the inst has a"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "since the mode has a"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the mode"))
  },
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row 116 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row 117 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[26][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[8][7] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[5]))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__one_or_more__pti_one_or_more_1__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0__plain_one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[3][12] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_decl_or_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[4][11] = {
  /* row   0 */
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
  /* row   1 */
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
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
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
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
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

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[4][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_8[7][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
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
  /* row   2 */
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
  /* row   3 */
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
  /* row   4 */
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
  /* row   5 */
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
  /* row   6 */
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

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_9[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_10[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_11[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[12][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_13[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_du_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0)
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)
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

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_0 = {
  (MR_String) "dd_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_1 = {
  (MR_String) "dd_defn",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_decl_or_defn_0[2] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_0,
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_decl_or_defn_0[2] = {
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_0,
  &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_functor_desc_decl_or_defn_0_1
};

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_decl_or_defn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_decl_or_defn_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0_10001)),
  ((MR_Box) (parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0_10001)),
  (MR_String) "parse_tree.check_type_inst_mode_defns",
  (MR_String) "decl_or_defn",
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_decl_or_defn_0 },
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_decl_or_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_decl_or_defn_0,

};

static const MR_PseudoTypeInfo parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__field_types_field_name_locn_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
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
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_locn_0 },
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_locn_0 },
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
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__tree234__ti_tree234_2parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0) },
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
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_of_type_ctor_0 },
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_ptag_ordered_field_name_of_type_ctor_0 },
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
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_name_ordered_maybe_insist_on_defn_0 },
  { parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__enum_ordinal_ordered_maybe_insist_on_defn_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_maybe_insist_on_defn_0,

};

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 4))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, (MR_Integer) 4))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_29, Var_30, Var_31);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_27, (MR_Integer) 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_28, (MR_Integer) 5))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_29, Var_30, Var_31);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1442__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32)
{
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_30, (MR_Integer) 4))));

  mercury__set__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Var_34)), HeadVar__2_31, HeadVar__3_32);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_29, (MR_Integer) 4))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__2_30, (MR_Integer) 4))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_31, Var_32, Var_33);
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__non_enum_du_report_any_foreign_enum__1032__1_1_f_0(
  MR_Word LambdaHeadVar__1_26)
{
  MR_Word LambdaHeadVar__2_27;

  {
    LambdaHeadVar__2_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(MR_mktag(3), LambdaHeadVar__2_27, 1) = ((MR_Box) (LambdaHeadVar__1_26));
  }
  return LambdaHeadVar__2_27;
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__910__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[0]), ((MR_Box) (LeftOverEnums_17)), ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__809__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word AbsStdDefn_22,
  MR_String HeadVar__3_70,
  MR_String HeadVar__4_71,
  MR_Word HeadVar__5_99,
  MR_Word HeadVar__6_100,
  MR_Word * HeadVar__7_101)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_109_101_114_95_102_111_114_101_105_103_110_95_115_101_99_116_105_111_110_95_109_105_115_109_97_116_99_104_95_95_91_49_93_95_48_7_p_0(TypeCtor_14, HeadVar__3_70, HeadVar__4_71, AbsStdDefn_22, HeadVar__5_99, HeadVar__6_100, HeadVar__7_101);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__701__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_String HeadVar__3_47,
  MR_String HeadVar__4_48,
  MR_Word HeadVar__5_60,
  MR_Word HeadVar__6_61,
  MR_Word * HeadVar__7_62)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_109_101_114_95_102_111_114_101_105_103_110_95_115_101_99_116_105_111_110_95_109_105_115_109_97_116_99_104_95_95_91_49_93_95_48_7_p_0(TypeCtor_14, HeadVar__3_47, HeadVar__4_48, DuDefn_15, HeadVar__5_60, HeadVar__6_61, HeadVar__7_62);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__712__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_String HeadVar__3_53,
  MR_String HeadVar__4_54,
  MR_Word HeadVar__5_66,
  MR_Word HeadVar__6_67,
  MR_Word * HeadVar__7_68)
{
  parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_109_101_114_95_102_111_114_101_105_103_110_95_115_101_99_116_105_111_110_95_109_105_115_109_97_116_99_104_95_95_91_49_93_95_48_7_p_0(TypeCtor_14, HeadVar__3_53, HeadVar__4_54, DuDefn_15, HeadVar__5_66, HeadVar__6_67, HeadVar__7_68);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_112_111_114_116_95_109_101_114_95_102_111_114_101_105_103_110_95_115_101_99_116_105_111_110_95_109_105_115_109_97_116_99_104_95_95_91_49_93_95_48_7_p_0(
  MR_Word TypeCtor_8,
  MR_String DeclOrDefn_9,
  MR_String MerSection_10,
  MR_Word MerDefn_11,
  MR_Word ForeignDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_Word ForeignPieces_14;
  MR_Word DuPieces_15;
  MR_Word Spec_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_55;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;

  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (DeclOrDefn_9));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (TypeCtor_8));
  }
  {
    Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (MerSection_10));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[51])));
  }
  {
    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[48])));
    MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[47])));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[46])));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[45])));
    MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    ForeignPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ForeignPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[43])));
    MR_hl_field(MR_mktag(1), ForeignPieces_14, 1) = ((MR_Box) (Var_21));
  }
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])));
  }
  {
    DuPieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), DuPieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[52])));
    MR_hl_field(MR_mktag(1), DuPieces_15, 1) = ((MR_Box) (Var_55));
  }
  Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_12, (MR_Integer) 4))));
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (ForeignPieces_14));
  }
  Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MerDefn_11, (MR_Integer) 4))));
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (DuPieces_15));
  }
  {
    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_69));
  }
  {
    Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_mer_foreign_section_mismatch\'/7"));
    MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Var_66));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(
  MR_Word TypeInfo_for_T1_57,
  MR_Word TypeInfo_for_T2_58,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_Word ModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
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
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[56])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[107])));
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
    MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[101])));
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
    MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_29));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_29));
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
  MR_bool succeeded;
  MR_Word IntMaybeAbstractDefn_15;
  MR_Word IntMaybeEqvDefn_16;
  MR_Word ImpMaybeAbstractDefn_17;
  MR_Word ImpMaybeEqvDefn_18;
  MR_Word STATE_VARIABLE_Specs_37_37;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word AllDefns_87;
  MR_Box conv0_AllDefns_87;
  MR_Word EqvDefn_20;
  MR_String EqvWhere_21;
  MR_Word Status_22;
  MR_Word SrcDefns_24;
  MR_Word IntEqvDefn_19;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_all_defns_0), IntModeDefnMap_10, ((MR_Box) (ModeCtor_12)), &conv0_AllDefns_87);
  if (succeeded)
  {
    AllDefns_87 = ((MR_Word) (conv0_AllDefns_87));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_87, (MR_Integer) 0))));
    MR_Word EqvDefns_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_87, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Specs_18_91;

    if ((AbstractDefns_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_18_91 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_88, (MR_Integer) 1))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_88, (MR_Integer) 0))));

      if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, 0) = ((MR_Box) (Var_106));
        }
        STATE_VARIABLE_Specs_18_91 = STATE_VARIABLE_Specs_0_35;
      }
      else
      {
        MR_Word SortedModeDefns_98;
        MR_Word HeadModeDefn_99;
        MR_Word TailModeDefns_100;
        MR_Word Var_101;
        MR_Box conv2_HeadModeDefn_99;
        MR_Box conv4_STATE_VARIABLE_Specs_18_91;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[10]), AbstractDefns_88, &SortedModeDefns_98);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), SortedModeDefns_98, &conv2_HeadModeDefn_99, &TailModeDefns_100);
        HeadModeDefn_99 = ((MR_Word) (conv2_HeadModeDefn_99));
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, 0) = ((MR_Box) (HeadModeDefn_99));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_101, 5) = ((MR_Box) ((MR_String) "abstract mode"));
          MR_hl_field(MR_mktag(0), Var_101, 6) = ((MR_Box) (ModeCtor_12));
          MR_hl_field(MR_mktag(0), Var_101, 7) = ((MR_Box) (HeadModeDefn_99));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_101, TailModeDefns_100, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv4_STATE_VARIABLE_Specs_18_91);
        STATE_VARIABLE_Specs_18_91 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_91));
      }
    }
    if ((EqvDefns_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_18_91;
    }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_89, (MR_Integer) 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_89, (MR_Integer) 0))));

      if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, 0) = ((MR_Box) (Var_116));
        }
        STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_18_91;
      }
      else
      {
        MR_Word SortedModeDefns_108;
        MR_Word HeadModeDefn_109;
        MR_Word TailModeDefns_110;
        MR_Word Var_111;
        MR_Box conv6_HeadModeDefn_109;
        MR_Box conv8_STATE_VARIABLE_Specs_37_37;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[11]), EqvDefns_89, &SortedModeDefns_108);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), SortedModeDefns_108, &conv6_HeadModeDefn_109, &TailModeDefns_110);
        HeadModeDefn_109 = ((MR_Word) (conv6_HeadModeDefn_109));
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, 0) = ((MR_Box) (HeadModeDefn_109));
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_4));
          MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_111, 5) = ((MR_Box) ((MR_String) "mode"));
          MR_hl_field(MR_mktag(0), Var_111, 6) = ((MR_Box) (ModeCtor_12));
          MR_hl_field(MR_mktag(0), Var_111, 7) = ((MR_Box) (HeadModeDefn_109));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_111, TailModeDefns_110, ((MR_Box) (STATE_VARIABLE_Specs_18_91)), &conv8_STATE_VARIABLE_Specs_37_37);
        STATE_VARIABLE_Specs_37_37 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_37_37));
      }
    }
  }
  else
  {
    IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
    IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_0_35;
  }
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
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word SrcDefns_78;
            MR_Word StdDefn_79;
            MR_Word CheckedDefn_80;

            Var_55 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(ImpAbstractDefn_31);
            {
              StdDefn_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), StdDefn_79, 1) = ((MR_Box) (Var_55));
            }
            ImpDefn_32 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(ImpAbstractDefn_31);
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ImpDefn_32));
            }
            {
              SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SrcDefns_78, 1) = ((MR_Box) (Var_57));
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
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(ModeCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_49_49);
    switch (InsistOnDefn_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(ModeCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_36);
          *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word IntDefn_30;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word SrcDefns_65;
          MR_Word StdDefn_66;
          MR_Word CheckedDefn_67;

          Var_50 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_74);
          {
            StdDefn_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), StdDefn_66, 1) = ((MR_Box) (Var_50));
          }
          IntDefn_30 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_74);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (IntDefn_30));
          }
          {
            SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_65, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
            MR_hl_field(MR_mktag(0), CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_49_49;
        }
        break;
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
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[111])));
    MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
  }
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsModeDefn_6, (MR_Integer) 4))));
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_mode\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[110])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_12, (MR_Integer) 4))));
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_mode_in_imp\'/6"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_29));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2043__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_29));
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
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
        }
        STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word SortedModeDefns_25;
        MR_Word HeadModeDefn_26;
        MR_Word TailModeDefns_27;
        MR_Word Var_28;
        MR_Box conv2_HeadModeDefn_26;
        MR_Box conv4_STATE_VARIABLE_Specs_18_18;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[8]), AbstractDefns_13, &SortedModeDefns_25);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), SortedModeDefns_25, &conv2_HeadModeDefn_26, &TailModeDefns_27);
        HeadModeDefn_26 = ((MR_Word) (conv2_HeadModeDefn_26));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadModeDefn_26));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) ((MR_String) "abstract mode"));
          MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (ModeCtor_8));
          MR_hl_field(MR_mktag(0), Var_28, 7) = ((MR_Box) (HeadModeDefn_26));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[116]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, TailModeDefns_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_18_18);
        STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_18));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_18_18;
    }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 0))));

      if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
        }
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_18_18;
      }
      else
      {
        MR_Word SortedModeDefns_35;
        MR_Word HeadModeDefn_36;
        MR_Word TailModeDefns_37;
        MR_Word Var_38;
        MR_Box conv6_HeadModeDefn_36;
        MR_Box conv8_STATE_VARIABLE_Specs_16;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[9]), EqvDefns_14, &SortedModeDefns_35);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), SortedModeDefns_35, &conv6_HeadModeDefn_36, &TailModeDefns_37);
        HeadModeDefn_36 = ((MR_Word) (conv6_HeadModeDefn_36));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadModeDefn_36));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) ((MR_String) "mode"));
          MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (ModeCtor_8));
          MR_hl_field(MR_mktag(0), Var_38, 7) = ((MR_Box) (HeadModeDefn_36));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[117]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_38, TailModeDefns_37, ((MR_Box) (STATE_VARIABLE_Specs_18_18)), &conv8_STATE_VARIABLE_Specs_16);
        *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_16));
      }
    }
  }
  else
  {
    *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
    *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(
  MR_Word TypeInfo_for_T1_59,
  MR_Word TypeInfo_for_T2_60,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_Word InstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
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
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[56])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
  }
  {
    MainPieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[107])));
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
    MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[101])));
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
    MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_29));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_29));
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
  MR_bool succeeded;
  MR_Word IntMaybeAbstractDefn_15;
  MR_Word IntMaybeEqvDefn_16;
  MR_Word ImpMaybeAbstractDefn_17;
  MR_Word ImpMaybeEqvDefn_18;
  MR_Word STATE_VARIABLE_Specs_37_37;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word AllDefns_87;
  MR_Box conv0_AllDefns_87;
  MR_Word EqvDefn_20;
  MR_String EqvWhere_21;
  MR_Word Status_22;
  MR_Word SrcDefns_24;
  MR_Word IntEqvDefn_19;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_all_defns_0), IntInstDefnMap_10, ((MR_Box) (InstCtor_12)), &conv0_AllDefns_87);
  if (succeeded)
  {
    AllDefns_87 = ((MR_Word) (conv0_AllDefns_87));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word AbstractDefns_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_87, (MR_Integer) 0))));
    MR_Word EqvDefns_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_87, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Specs_18_91;

    if ((AbstractDefns_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_18_91 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_88, (MR_Integer) 1))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_88, (MR_Integer) 0))));

      if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, 0) = ((MR_Box) (Var_106));
        }
        STATE_VARIABLE_Specs_18_91 = STATE_VARIABLE_Specs_0_35;
      }
      else
      {
        MR_Word SortedInstDefns_98;
        MR_Word HeadInstDefn_99;
        MR_Word TailInstDefns_100;
        MR_Word Var_101;
        MR_Box conv2_HeadInstDefn_99;
        MR_Box conv4_STATE_VARIABLE_Specs_18_91;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[6]), AbstractDefns_88, &SortedInstDefns_98);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), SortedInstDefns_98, &conv2_HeadInstDefn_99, &TailInstDefns_100);
        HeadInstDefn_99 = ((MR_Word) (conv2_HeadInstDefn_99));
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, 0) = ((MR_Box) (HeadInstDefn_99));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_2));
          MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_101, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_101, 5) = ((MR_Box) ((MR_String) "abstract inst"));
          MR_hl_field(MR_mktag(0), Var_101, 6) = ((MR_Box) (InstCtor_12));
          MR_hl_field(MR_mktag(0), Var_101, 7) = ((MR_Box) (HeadInstDefn_99));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_101, TailInstDefns_100, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv4_STATE_VARIABLE_Specs_18_91);
        STATE_VARIABLE_Specs_18_91 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_91));
      }
    }
    if ((EqvDefns_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_18_91;
    }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_89, (MR_Integer) 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_89, (MR_Integer) 0))));

      if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, 0) = ((MR_Box) (Var_116));
        }
        STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_18_91;
      }
      else
      {
        MR_Word SortedInstDefns_108;
        MR_Word HeadInstDefn_109;
        MR_Word TailInstDefns_110;
        MR_Word Var_111;
        MR_Box conv6_HeadInstDefn_109;
        MR_Box conv8_STATE_VARIABLE_Specs_37_37;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[7]), EqvDefns_89, &SortedInstDefns_108);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), SortedInstDefns_108, &conv6_HeadInstDefn_109, &TailInstDefns_110);
        HeadInstDefn_109 = ((MR_Word) (conv6_HeadInstDefn_109));
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), IntMaybeEqvDefn_16, 0) = ((MR_Box) (HeadInstDefn_109));
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_111, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_4));
          MR_hl_field(MR_mktag(0), Var_111, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_111, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_111, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_111, 5) = ((MR_Box) ((MR_String) "inst"));
          MR_hl_field(MR_mktag(0), Var_111, 6) = ((MR_Box) (InstCtor_12));
          MR_hl_field(MR_mktag(0), Var_111, 7) = ((MR_Box) (HeadInstDefn_109));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_111, TailInstDefns_110, ((MR_Box) (STATE_VARIABLE_Specs_18_91)), &conv8_STATE_VARIABLE_Specs_37_37);
        STATE_VARIABLE_Specs_37_37 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_37_37));
      }
    }
  }
  else
  {
    IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
    IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_0_35;
  }
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
            MR_Word Var_55;
            MR_Word Var_57;
            MR_Word SrcDefns_78;
            MR_Word StdDefn_79;
            MR_Word CheckedDefn_80;

            Var_55 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(ImpAbstractDefn_31);
            {
              StdDefn_79 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), StdDefn_79, 1) = ((MR_Box) (Var_55));
            }
            ImpDefn_32 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(ImpAbstractDefn_31);
            {
              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (ImpDefn_32));
            }
            {
              SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), SrcDefns_78, 1) = ((MR_Box) (Var_57));
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
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeAbstractDefn_15, (MR_Integer) 0))));

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(InstCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_49_49);
    switch (InsistOnDefn_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(InstCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_36);
          *STATE_VARIABLE_CheckedMap_34 = STATE_VARIABLE_CheckedMap_0_33;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word IntDefn_30;
          MR_Word Var_50;
          MR_Word Var_51;
          MR_Word SrcDefns_65;
          MR_Word StdDefn_66;
          MR_Word CheckedDefn_67;

          Var_50 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_74);
          {
            StdDefn_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), StdDefn_66, 1) = ((MR_Box) (Var_50));
          }
          IntDefn_30 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_74);
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (IntDefn_30));
          }
          {
            SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_65, 0) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(0), SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
            MR_hl_field(MR_mktag(0), CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_49_49;
        }
        break;
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
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[109])));
    MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
  }
  Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsInstDefn_6, (MR_Integer) 5))));
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_inst\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 28U));
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
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[108])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_21));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_19));
    }
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_12, (MR_Integer) 5))));
    {
      Spec_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_inst_in_imp\'/6"));
      MR_hl_field(MR_mktag(1), Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_29));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_29;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1839__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_29));
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
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbstractDefns_13, (MR_Integer) 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_33));
        }
        STATE_VARIABLE_Specs_18_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word SortedInstDefns_25;
        MR_Word HeadInstDefn_26;
        MR_Word TailInstDefns_27;
        MR_Word Var_28;
        MR_Box conv2_HeadInstDefn_26;
        MR_Box conv4_STATE_VARIABLE_Specs_18_18;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[4]), AbstractDefns_13, &SortedInstDefns_25);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), SortedInstDefns_25, &conv2_HeadInstDefn_26, &TailInstDefns_27);
        HeadInstDefn_26 = ((MR_Word) (conv2_HeadInstDefn_26));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInstDefn_26));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) ((MR_String) "abstract inst"));
          MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (InstCtor_8));
          MR_hl_field(MR_mktag(0), Var_28, 7) = ((MR_Box) (HeadInstDefn_26));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[114]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, TailInstDefns_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_18_18);
        STATE_VARIABLE_Specs_18_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_18_18));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_18_18;
    }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 0))));

      if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
        }
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_18_18;
      }
      else
      {
        MR_Word SortedInstDefns_35;
        MR_Word HeadInstDefn_36;
        MR_Word TailInstDefns_37;
        MR_Word Var_38;
        MR_Box conv6_HeadInstDefn_36;
        MR_Box conv8_STATE_VARIABLE_Specs_16;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[5]), EqvDefns_14, &SortedInstDefns_35);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), SortedInstDefns_35, &conv6_HeadInstDefn_36, &TailInstDefns_37);
        HeadInstDefn_36 = ((MR_Word) (conv6_HeadInstDefn_36));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadInstDefn_36));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_4));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) ((MR_String) "inst"));
          MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (InstCtor_8));
          MR_hl_field(MR_mktag(0), Var_38, 7) = ((MR_Box) (HeadInstDefn_36));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[115]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_38, TailInstDefns_37, ((MR_Box) (STATE_VARIABLE_Specs_18_18)), &conv8_STATE_VARIABLE_Specs_16);
        *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_16));
      }
    }
  }
  else
  {
    *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
    *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
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
    MR_hl_field(MR_mktag(1), InitPieces_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[102])));
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
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[103])));
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
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[104])));
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
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[106])));
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
    MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_field_name_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0(
  MR_Word FieldNameTypeCtor_5,
  MR_Word OoMFNLocns_6,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
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
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedFNLocns_9, (MR_Integer) 0))));

    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    else
    {
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_Specs_16;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[6]));
        MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (FieldNameTypeCtor_5));
        MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Var_27));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_20, Var_26, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv1_STATE_VARIABLE_Specs_16);
      *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_16));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FieldNameMap_24;

  parse_tree__check_type_inst_mode_defns__add_data_ctor_arg_to_field_name_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_24));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16)
{
  MR_Word CtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 2))));
  MR_Word CtorArgs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_6, (MR_Integer) 3))));
  MR_String CtorName_14;
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_FieldNameMap_16;

  CtorName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_10);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[5]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (TypeCtor_5));
    MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (CtorName_14));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_17, CtorArgs_11, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_15)), &conv1_STATE_VARIABLE_FieldNameMap_16);
  *STATE_VARIABLE_FieldNameMap_16 = ((MR_Word) (conv1_STATE_VARIABLE_FieldNameMap_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FieldNameMap_16;

  parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FieldNameMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FieldNameMap_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FieldNameMap_16;

  parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_16);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_16));
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
          MR_Word OoMCtors_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsSub_30, (MR_Integer) 1))));
          MR_Word HeadCtor_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_58, (MR_Integer) 0))));
          MR_Word TailCtors_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_58, (MR_Integer) 1))));
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Box conv3_STATE_VARIABLE_FieldNameMap_35;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[5]));
            MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2));
            MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (TypeCtor_5));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (HeadCtor_59));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (TailCtors_60));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_61, Var_62, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_34)), &conv3_STATE_VARIABLE_FieldNameMap_35);
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
    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[96])));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[99])));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
  }
  {
    MainPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[98])));
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
    MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[101])));
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
    MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(
  MR_Word ForeignEnum_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnum_3, (MR_Integer) 3))));

  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(
  MR_Word ForeignEnumA_4,
  MR_Word ForeignEnumB_5,
  MR_Word * Cmp_6)
{
  MR_Word ContextA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumA_4, (MR_Integer) 3))));
  MR_Word ContextB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignEnumB_5, (MR_Integer) 3))));

  mercury__term_context____Compare____term_context_0_0(Cmp_6, ContextA_7, ContextB_8);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(
  MR_Word TypeInfo_for_T1_73,
  MR_Word TypeInfo_for_T2_74,
  MR_Word DeclOrDefn_8,
  MR_String Kind_9,
  MR_Word TypeCtor_10,
  MR_Word OrigTypeDefn_11,
  MR_Word TypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_String DeclOrDefnWord_14;
  MR_String SeverityWord_15;
  MR_Word Severity_16;
  MR_Word MainPieces_17;
  MR_Word LeastPieces_18;
  MR_Word Spec_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_46;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  switch (DeclOrDefn_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DeclOrDefnWord_14 = (MR_String) "declaration";
        SeverityWord_15 = (MR_String) "Warning";
        Severity_16 = (MR_Word) ((MR_Unsigned) 4U);
      }
      break;
    case (MR_Integer) 1:
      {
        DeclOrDefnWord_14 = (MR_String) "definition";
        SeverityWord_15 = (MR_String) "Error";
        Severity_16 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (SeverityWord_15));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Kind_9));
  }
  {
    Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (DeclOrDefnWord_14));
  }
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (TypeCtor_10));
  }
  {
    Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[96])));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[95])));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[15])));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
  }
  {
    MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_17, 0) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(1), MainPieces_17, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])));
  }
  {
    LeastPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), LeastPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[97])));
    MR_hl_field(MR_mktag(1), LeastPieces_18, 1) = ((MR_Box) (Var_46));
  }
  Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_12, (MR_Integer) 4))));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MainPieces_17));
  }
  Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigTypeDefn_11, (MR_Integer) 4))));
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (LeastPieces_18));
  }
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Spec_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_type_decl_or_defn\'/7"));
    MR_hl_field(MR_mktag(0), Spec_19, 1) = ((MR_Box) (Severity_16));
    MR_hl_field(MR_mktag(0), Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(MR_mktag(0), Spec_19, 3) = ((MR_Box) (Var_56));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
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
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[90])));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12])));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
  }
  {
    Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])));
    MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
  }
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_8, (MR_Integer) 3))));
  {
    Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_foreign_enum_for_undefined_type\'/5"));
    MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[86])));
    MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[85])));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[12])));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_24));
  }
  {
    MainPieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MainPieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[81])));
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
    MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])));
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
    MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word UsedContext_11,
  MR_String Kind_12,
  MR_String Section_13,
  MR_String SectionDeclOrDefn_14,
  MR_String DeclOrDefn_15,
  MR_Word MaybeDefnContext_16,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((MaybeDefnContext_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word DefnContext_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnContext_16, (MR_Integer) 0))));
    MR_Word MainPieces_19;
    MR_Word UsedPieces_20;
    MR_Word Spec_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_56;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (DeclOrDefn_15));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (TypeCtor_10));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (Kind_12));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (SectionDeclOrDefn_14));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (Section_13));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[83])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[82])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      MainPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[81])));
      MR_hl_field(MR_mktag(1), MainPieces_19, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[54])));
    }
    {
      UsedPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), UsedPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[84])));
      MR_hl_field(MR_mktag(1), UsedPieces_20, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (DefnContext_18));
      MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (MainPieces_19));
    }
    {
      Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (UsedContext_11));
      MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (UsedPieces_20));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
    }
    {
      Spec_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_incompatible_type_decl_or_defn\'/9"));
      MR_hl_field(MR_mktag(0), Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 24U));
      MR_hl_field(MR_mktag(0), Spec_21, 3) = ((MR_Box) (Var_67));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
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
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[66])));
  }
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    ImpPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ImpPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[60])));
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
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[68])));
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
    MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word ForeignDefn_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
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
    MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[59])));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[57])));
    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[56])));
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[35])));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[55])));
    MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_14));
  }
  Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignDefn_6, (MR_Integer) 4))));
  {
    Spec_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_foreign_type_without_declaration\'/4"));
    MR_hl_field(MR_mktag(1), Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 24U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Enum_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
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
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[42])));
  }
  {
    EnumPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), EnumPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])));
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
    MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[41])));
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
    MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word SubTypeDefn_7,
  MR_Word Foreign_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
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
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[39])));
  }
  {
    ForeignPieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), ForeignPieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])));
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
    MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[41])));
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
    MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__non_enum_du_report_any_foreign_enum__1032__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0(
  MR_Word TypeCtor_7,
  MR_Word DuDefn_8,
  MR_Word NonEnumSNAs_9,
  MR_Word Enum_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word CtorPieces_12;
  MR_Word EnumPieces_18;
  MR_Word DuPieces_19;
  MR_Word Spec_20;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_66;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;

  if ((NonEnumSNAs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    CtorPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SNAPieces_15;
    MR_Word ItHasThese_17;
    MR_Word Var_24;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Box conv1_ItHasThese_17;

    Var_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[25]), NonEnumSNAs_9);
    SNAPieces_15 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_24);
    conv1_ItHasThese_17 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NonEnumSNAs_9, ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[17]))), ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[18]))));
    ItHasThese_17 = ((MR_Word) (conv1_ItHasThese_17));
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (ItHasThese_17));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[20])));
    }
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), SNAPieces_15, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[24])));
    CtorPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, Var_37);
  }
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (TypeCtor_7));
  }
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[32])));
  }
  {
    EnumPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), EnumPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
    MR_hl_field(MR_mktag(1), EnumPieces_18, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (CtorPieces_12));
  }
  {
    DuPieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), DuPieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[33])));
    MR_hl_field(MR_mktag(1), DuPieces_19, 1) = ((MR_Box) (Var_66));
  }
  Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Enum_10, (MR_Integer) 3))));
  {
    Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (EnumPieces_18));
  }
  Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_8, (MR_Integer) 4))));
  {
    Var_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (DuPieces_19));
  }
  {
    Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_74));
  }
  {
    Spec_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.non_enum_du_report_any_foreign_enum\'/6"));
    MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(MR_mktag(0), Spec_20, 3) = ((MR_Box) (Var_71));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_22 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv39_STATE_VARIABLE_Specs_13;

  parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv39_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv39_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv37_STATE_VARIABLE_Specs_13;

  parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv37_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv37_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv35_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv35_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv35_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv33_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv33_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv33_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv31_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv31_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv31_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv29_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv29_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv29_STATE_VARIABLE_Specs_23));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv27_HeadVar__2_2;

  conv27_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv27_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv26_HeadVar__2_2;

  conv26_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv26_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv24_STATE_VARIABLE_Specs_22;

  parse_tree__check_type_inst_mode_defns__non_enum_du_report_any_foreign_enum_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv24_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv24_STATE_VARIABLE_Specs_22));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv22_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv22_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv20_STATE_VARIABLE_Specs_14;

  parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Specs_14);
  *wrapper_arg_3 = ((MR_Box) (conv20_STATE_VARIABLE_Specs_14));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv18_STATE_VARIABLE_Specs_14;

  parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Specs_14);
  *wrapper_arg_3 = ((MR_Box) (conv18_STATE_VARIABLE_Specs_14));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv16_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv16_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv14_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv14_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv12_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_23));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(
  MR_Word InsistOnDefn_10,
  MR_Word IntTypeDefnMap_11,
  MR_Word ImpTypeDefnMap_12,
  MR_Word ImpForeignEnumMap_13,
  MR_Word TypeCtor_14,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_136,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_137,
  MR_Word STATE_VARIABLE_Specs_0_138,
  MR_Word * STATE_VARIABLE_Specs_139)
{
  MR_bool succeeded;
  MR_Word IntMaybeDefn_17;
  MR_Word ImpMaybeDefn_18;
  MR_Word ImpMaybeEnumCJCs_19;
  MR_Word ImpLeftOverEnumsCJCs_20;
  MR_Word ImpEnums_25;
  MR_Word IntAbstractSolverMaybeDefn0_26;
  MR_Word IntSolverMaybeDefn_27;
  MR_Word IntAbstractStdMaybeDefn_28;
  MR_Word IntEqvMaybeDefn_29;
  MR_Word IntDuMaybeDefn_30;
  MR_Word IntSubMaybeDefn_31;
  MR_Word IntMaybeDefnCJCs_32;
  MR_Word ImpAbstractSolverMaybeDefn_33;
  MR_Word ImpSolverMaybeDefn0_34;
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
  MR_Word IntAbstractSolverMaybeDefn_62;
  MR_Word ImpSolverMaybeDefn_63;
  MR_Word STATE_VARIABLE_Specs_140_140;
  MR_Word STATE_VARIABLE_Specs_141_141;
  MR_Word STATE_VARIABLE_Specs_142_142;
  MR_Word STATE_VARIABLE_Specs_144_144;
  MR_Word ImpEnumsCJCs_21;
  MR_Box conv0_ImpEnumsCJCs_21;
  MR_Word ImpSolverDefn_64;

  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(IntTypeDefnMap_11, TypeCtor_14, &IntMaybeDefn_17, STATE_VARIABLE_Specs_0_138, &STATE_VARIABLE_Specs_140_140);
  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(ImpTypeDefnMap_12, TypeCtor_14, &ImpMaybeDefn_18, STATE_VARIABLE_Specs_140_140, &STATE_VARIABLE_Specs_141_141);
  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0(ImpForeignEnumMap_13, TypeCtor_14, &ImpMaybeEnumCJCs_19, &ImpLeftOverEnumsCJCs_20, STATE_VARIABLE_Specs_141_141, &STATE_VARIABLE_Specs_142_142);
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
    MR_Word Var_143;

    Var_143 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsJava_23, ImpEnumsCsharp_24);
    ImpEnums_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsC_22, Var_143);
  }
  else
    ImpEnums_25 = (MR_Word) ((MR_Unsigned) 0U);
  IntAbstractSolverMaybeDefn0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 0))));
  IntSolverMaybeDefn_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 1))));
  IntAbstractStdMaybeDefn_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 2))));
  IntEqvMaybeDefn_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 3))));
  IntDuMaybeDefn_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 4))));
  IntSubMaybeDefn_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 5))));
  IntMaybeDefnCJCs_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefn_17, (MR_Integer) 6))));
  ImpAbstractSolverMaybeDefn_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 0))));
  ImpSolverMaybeDefn0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefn_18, (MR_Integer) 1))));
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
  IntContextAbstractSolver_46 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_1_f_0(IntAbstractSolverMaybeDefn0_26);
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
  parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_8_p_0(TypeCtor_14, IntSolverMaybeDefn_27, IntAbstractSolverMaybeDefn0_26, &IntAbstractSolverMaybeDefn_62, ImpSolverMaybeDefn0_34, &ImpSolverMaybeDefn_63, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_144_144);
  succeeded = (ImpSolverMaybeDefn_63 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ImpSolverDefn_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpSolverMaybeDefn_63, (MR_Integer) 0))));
    {
      MR_Word CheckedSolverDefn_65;
      MR_Word SrcDefns_66;
      MR_Word CheckedDefn_67;
      MR_Word STATE_VARIABLE_Specs_146_146;
      MR_Word Var_147;
      MR_Word Var_148;
      MR_Word STATE_VARIABLE_Specs_149_149;
      MR_Word Var_150;
      MR_Word Var_155;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word STATE_VARIABLE_Specs_159_159;
      MR_Word Var_160;
      MR_Word Var_165;
      MR_Word Var_166;
      MR_Word Var_167;
      MR_Word Var_168;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_177;
      MR_Word Var_179;
      MR_Word Var_182;
      MR_Word Var_184;
      MR_Word Var_185;
      MR_Box conv2_STATE_VARIABLE_Specs_149_149;
      MR_Box conv4_STATE_VARIABLE_Specs_159_159;
      MR_Box conv6_STATE_VARIABLE_Specs_139;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, (MR_String) "implementation", ImpAbstractSolverMaybeDefn_33, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_146_146);
      Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_64, (MR_Integer) 4))));
      {
        Var_147 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_147, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_147, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1));
        MR_hl_field(MR_mktag(0), Var_147, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_147, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_147, 4) = ((MR_Box) (Var_150));
        MR_hl_field(MR_mktag(0), Var_147, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(MR_mktag(0), Var_147, 6) = ((MR_Box) ((MR_String) "implementation"));
        MR_hl_field(MR_mktag(0), Var_147, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(MR_mktag(0), Var_147, 8) = ((MR_Box) ((MR_String) "declaration"));
      }
      {
        Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) (ImpContextAbstractStd_52));
        MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (IntContextAbstractStd_47));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_155));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_147, Var_148, ((MR_Box) (STATE_VARIABLE_Specs_146_146)), &conv2_STATE_VARIABLE_Specs_149_149);
      STATE_VARIABLE_Specs_149_149 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_149_149));
      Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_64, (MR_Integer) 4))));
      {
        Var_157 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_157, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_157, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2));
        MR_hl_field(MR_mktag(0), Var_157, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_157, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_157, 4) = ((MR_Box) (Var_160));
        MR_hl_field(MR_mktag(0), Var_157, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(MR_mktag(0), Var_157, 6) = ((MR_Box) ((MR_String) "implementation"));
        MR_hl_field(MR_mktag(0), Var_157, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(MR_mktag(0), Var_157, 8) = ((MR_Box) ((MR_String) "definition"));
      }
      {
        Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (ImpContextCsharp_61));
        MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_174, 0) = ((MR_Box) (ImpContextJava_60));
        MR_hl_field(MR_mktag(1), Var_174, 1) = ((MR_Box) (Var_175));
      }
      {
        Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (ImpContextC_59));
        MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) (Var_174));
      }
      {
        Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (ImpContextSub_55));
        MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
      }
      {
        Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (ImpContextDu_54));
        MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (Var_172));
      }
      {
        Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (ImpContextEqv_53));
        MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) (Var_171));
      }
      {
        Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (IntContextCsharp_58));
        MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_170));
      }
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_168, 0) = ((MR_Box) (IntContextJava_57));
        MR_hl_field(MR_mktag(1), Var_168, 1) = ((MR_Box) (Var_169));
      }
      {
        Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (IntContextC_56));
        MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (Var_168));
      }
      {
        Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (IntContextSub_50));
        MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_167));
      }
      {
        Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (IntContextDu_49));
        MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) (Var_166));
      }
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (IntContextEqv_48));
        MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) (Var_165));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_157, Var_158, ((MR_Box) (STATE_VARIABLE_Specs_149_149)), &conv4_STATE_VARIABLE_Specs_159_159);
      STATE_VARIABLE_Specs_159_159 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_159_159));
      Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpSolverDefn_64, (MR_Integer) 4))));
      {
        Var_177 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_177, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_177, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3));
        MR_hl_field(MR_mktag(0), Var_177, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_177, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_177, 4) = ((MR_Box) (Var_179));
        MR_hl_field(MR_mktag(0), Var_177, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(MR_mktag(0), Var_177, 6) = ((MR_Box) ((MR_String) "implementation"));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_177, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_159_159)), &conv6_STATE_VARIABLE_Specs_139);
      *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_139));
      {
        CheckedSolverDefn_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CheckedSolverDefn_65, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_62));
        MR_hl_field(MR_mktag(1), CheckedSolverDefn_65, 1) = ((MR_Box) (ImpSolverDefn_64));
      }
      Var_182 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[22]), IntAbstractSolverMaybeDefn_62);
      Var_185 = parse_tree__item_util__wrap_solver_type_defn_1_f_0(ImpSolverDefn_64);
      {
        Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
      }
      {
        SrcDefns_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SrcDefns_66, 0) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(0), SrcDefns_66, 1) = ((MR_Box) (Var_184));
      }
      {
        CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CheckedDefn_67, 0) = ((MR_Box) (CheckedSolverDefn_65));
        MR_hl_field(MR_mktag(0), CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_66));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
    }
  }
  else
  {
    MR_Word EqvDefn_69;
    MR_String EqvWhere_70;
    MR_Word Status_71;
    MR_Word SrcDefns_409;
    MR_Word IntEqvDefn_68;

    succeeded = (IntEqvMaybeDefn_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IntEqvDefn_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntEqvMaybeDefn_29, (MR_Integer) 0))));
      {
        MR_Word Var_187;
        MR_Word Var_188;

        EqvDefn_69 = IntEqvDefn_68;
        EqvWhere_70 = (MR_String) "interface";
        Status_71 = (MR_Integer) 0;
        Var_188 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(IntEqvDefn_68);
        {
          Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (Var_188));
          MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          SrcDefns_409 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_409, 0) = ((MR_Box) (Var_187));
          MR_hl_field(MR_mktag(0), SrcDefns_409, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), SrcDefns_409, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word SrcDefnsInt_74;
      MR_Word SrcDefnsImp_75;
      MR_Word Var_194;
      MR_Word Var_195;

      succeeded = (ImpEqvMaybeDefn_36 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        EqvDefn_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpEqvMaybeDefn_36, (MR_Integer) 0))));
        EqvWhere_70 = (MR_String) "implementation";
        if ((IntAbstractStdMaybeDefn_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_71 = (MR_Integer) 2;
          SrcDefnsInt_74 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word AbstractStdDefn_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_28, (MR_Integer) 0))));
          MR_Word Var_192;

          Status_71 = (MR_Integer) 1;
          Var_192 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_73);
          {
            SrcDefnsInt_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SrcDefnsInt_74, 0) = ((MR_Box) (Var_192));
            MR_hl_field(MR_mktag(1), SrcDefnsInt_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        Var_194 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(EqvDefn_69);
        Var_195 = (MR_Word) ((MR_Unsigned) 0U);
        {
          SrcDefnsImp_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SrcDefnsImp_75, 0) = ((MR_Box) (Var_194));
          MR_hl_field(MR_mktag(1), SrcDefnsImp_75, 1) = ((MR_Box) (Var_195));
        }
        {
          SrcDefns_409 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_409, 0) = ((MR_Box) (SrcDefnsInt_74));
          MR_hl_field(MR_mktag(0), SrcDefns_409, 1) = ((MR_Box) (SrcDefnsImp_75));
          MR_hl_field(MR_mktag(0), SrcDefns_409, 2) = ((MR_Box) (Var_195));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word CheckedStdDefn_76;
      MR_Word STATE_VARIABLE_Specs_197_197;
      MR_Word Var_198;
      MR_Word Var_199;
      MR_Word STATE_VARIABLE_Specs_200_200;
      MR_Word Var_201;
      MR_Word Var_205;
      MR_Word Var_207;
      MR_Word Var_208;
      MR_Word STATE_VARIABLE_Specs_209_209;
      MR_Word Var_210;
      MR_Word Var_214;
      MR_Word Var_215;
      MR_Word Var_216;
      MR_Word Var_217;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word Var_222;
      MR_Word Var_224;
      MR_Word Var_226;
      MR_Word CheckedDefn_343;
      MR_Box conv9_STATE_VARIABLE_Specs_200_200;
      MR_Box conv11_STATE_VARIABLE_Specs_209_209;
      MR_Box conv13_STATE_VARIABLE_Specs_139;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, EqvWhere_70, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_197_197);
      Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_69, (MR_Integer) 4))));
      {
        Var_198 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_198, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_198, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5));
        MR_hl_field(MR_mktag(0), Var_198, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_198, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_198, 4) = ((MR_Box) (Var_201));
        MR_hl_field(MR_mktag(0), Var_198, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(MR_mktag(0), Var_198, 6) = ((MR_Box) (EqvWhere_70));
        MR_hl_field(MR_mktag(0), Var_198, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(MR_mktag(0), Var_198, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
      }
      {
        Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_205, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
        MR_hl_field(MR_mktag(1), Var_205, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (IntContextAbstractSolver_46));
        MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_205));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_198, Var_199, ((MR_Box) (STATE_VARIABLE_Specs_197_197)), &conv9_STATE_VARIABLE_Specs_200_200);
      STATE_VARIABLE_Specs_200_200 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_200_200));
      Var_210 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_69, (MR_Integer) 4))));
      {
        Var_207 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_207, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_207, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6));
        MR_hl_field(MR_mktag(0), Var_207, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_207, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_207, 4) = ((MR_Box) (Var_210));
        MR_hl_field(MR_mktag(0), Var_207, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(MR_mktag(0), Var_207, 6) = ((MR_Box) (EqvWhere_70));
        MR_hl_field(MR_mktag(0), Var_207, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(MR_mktag(0), Var_207, 8) = ((MR_Box) ((MR_String) "definition"));
      }
      {
        Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (ImpContextCsharp_61));
        MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (ImpContextJava_60));
        MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_222));
      }
      {
        Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ImpContextC_59));
        MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (Var_221));
      }
      {
        Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (ImpContextSub_55));
        MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_220));
      }
      {
        Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (ImpContextDu_54));
        MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (Var_219));
      }
      {
        Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (IntContextCsharp_58));
        MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) (Var_218));
      }
      {
        Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (IntContextJava_57));
        MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_217));
      }
      {
        Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_215, 0) = ((MR_Box) (IntContextC_56));
        MR_hl_field(MR_mktag(1), Var_215, 1) = ((MR_Box) (Var_216));
      }
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (IntContextSub_50));
        MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_215));
      }
      {
        Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) (IntContextDu_49));
        MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_214));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_207, Var_208, ((MR_Box) (STATE_VARIABLE_Specs_200_200)), &conv11_STATE_VARIABLE_Specs_209_209);
      STATE_VARIABLE_Specs_209_209 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_209_209));
      Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EqvDefn_69, (MR_Integer) 4))));
      {
        Var_224 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3]));
        MR_hl_field(MR_mktag(0), Var_224, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7));
        MR_hl_field(MR_mktag(0), Var_224, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_224, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_224, 4) = ((MR_Box) (Var_226));
        MR_hl_field(MR_mktag(0), Var_224, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(MR_mktag(0), Var_224, 6) = ((MR_Box) (EqvWhere_70));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_224, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_209_209)), &conv13_STATE_VARIABLE_Specs_139);
      *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_139));
      {
        CheckedStdDefn_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CheckedStdDefn_76, 0) = (MR_Box) ((MR_Unsigned) (Status_71));
        MR_hl_field(MR_mktag(0), CheckedStdDefn_76, 1) = ((MR_Box) (EqvDefn_69));
      }
      {
        CheckedDefn_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CheckedDefn_343, 0) = ((MR_Box) (CheckedStdDefn_76));
        MR_hl_field(MR_mktag(1), CheckedDefn_343, 1) = ((MR_Box) (SrcDefns_409));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_343)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
    }
    else
    {
      MR_Word SubDefn_78;
      MR_Word SubSection_79;
      MR_String SubWhere_80;
      MR_Word IntSubDefn_77;

      succeeded = (IntSubMaybeDefn_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        IntSubDefn_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntSubMaybeDefn_31, (MR_Integer) 0))));
        SubDefn_78 = IntSubDefn_77;
        SubSection_79 = (MR_Integer) 0;
        SubWhere_80 = (MR_String) "interface";
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ImpSubMaybeDefn_38 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          SubDefn_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpSubMaybeDefn_38, (MR_Integer) 0))));
          SubSection_79 = (MR_Integer) 1;
          SubWhere_80 = (MR_String) "implementation";
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word ForeignDefns_82;
        MR_Word STATE_VARIABLE_Specs_229_229;
        MR_Word Var_230;
        MR_Word Var_231;
        MR_Word STATE_VARIABLE_Specs_232_232;
        MR_Word Var_233;
        MR_Word Var_237;
        MR_Word Var_239;
        MR_Word Var_240;
        MR_Word STATE_VARIABLE_Specs_241_241;
        MR_Word Var_242;
        MR_Word Var_246;
        MR_Word Var_248;
        MR_Word Var_249;
        MR_Word Var_250;
        MR_Word Var_251;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_255;
        MR_Word STATE_VARIABLE_Specs_256_256;
        MR_Word Var_257;
        MR_Word SrcDefns_344;
        MR_Word CheckedDefn_345;
        MR_Word Status_346;
        MR_Word SrcDefnsInt_347;
        MR_Word SrcDefnsImp_348;
        MR_Word CheckedStdDefn_349;
        MR_Box conv15_STATE_VARIABLE_Specs_232_232;
        MR_Box conv17_STATE_VARIABLE_Specs_241_241;
        MR_Box conv19_STATE_VARIABLE_Specs_256_256;
        MR_Box conv21_STATE_VARIABLE_Specs_139;

        parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, SubWhere_80, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_229_229);
        Var_233 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_78, (MR_Integer) 4))));
        {
          Var_230 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_230, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_230, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8));
          MR_hl_field(MR_mktag(0), Var_230, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_230, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_230, 4) = ((MR_Box) (Var_233));
          MR_hl_field(MR_mktag(0), Var_230, 5) = ((MR_Box) ((MR_String) "subtype"));
          MR_hl_field(MR_mktag(0), Var_230, 6) = ((MR_Box) (SubWhere_80));
          MR_hl_field(MR_mktag(0), Var_230, 7) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(MR_mktag(0), Var_230, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
        }
        {
          Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
          MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (IntContextAbstractSolver_46));
          MR_hl_field(MR_mktag(1), Var_231, 1) = ((MR_Box) (Var_237));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_230, Var_231, ((MR_Box) (STATE_VARIABLE_Specs_229_229)), &conv15_STATE_VARIABLE_Specs_232_232);
        STATE_VARIABLE_Specs_232_232 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_232_232));
        Var_242 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubDefn_78, (MR_Integer) 4))));
        {
          Var_239 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_239, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_239, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9));
          MR_hl_field(MR_mktag(0), Var_239, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_239, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_239, 4) = ((MR_Box) (Var_242));
          MR_hl_field(MR_mktag(0), Var_239, 5) = ((MR_Box) ((MR_String) "subtype"));
          MR_hl_field(MR_mktag(0), Var_239, 6) = ((MR_Box) (SubWhere_80));
          MR_hl_field(MR_mktag(0), Var_239, 7) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(MR_mktag(0), Var_239, 8) = ((MR_Box) ((MR_String) "definition"));
        }
        {
          Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) (ImpContextDu_54));
          MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_240, 0) = ((MR_Box) (IntContextDu_49));
          MR_hl_field(MR_mktag(1), Var_240, 1) = ((MR_Box) (Var_246));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_239, Var_240, ((MR_Box) (STATE_VARIABLE_Specs_232_232)), &conv17_STATE_VARIABLE_Specs_241_241);
        STATE_VARIABLE_Specs_241_241 = ((MR_Word) (conv17_STATE_VARIABLE_Specs_241_241));
        {
          Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_253, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
          MR_hl_field(MR_mktag(1), Var_253, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
          MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (Var_253));
        }
        {
          Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_251, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
          MR_hl_field(MR_mktag(1), Var_251, 1) = ((MR_Box) (Var_252));
        }
        {
          Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (IntMaybeDefnJava_41));
          MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (Var_251));
        }
        {
          Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (ImpMaybeDefnC_43));
          MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Var_250));
        }
        {
          Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (IntMaybeDefnC_40));
          MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_249));
        }
        ForeignDefns_82 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_248);
        {
          Var_255 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_255, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), Var_255, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10));
          MR_hl_field(MR_mktag(0), Var_255, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_255, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_255, 4) = ((MR_Box) (SubDefn_78));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_255, ForeignDefns_82, ((MR_Box) (STATE_VARIABLE_Specs_241_241)), &conv19_STATE_VARIABLE_Specs_256_256);
        STATE_VARIABLE_Specs_256_256 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_256_256));
        {
          Var_257 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_257, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[3]));
          MR_hl_field(MR_mktag(0), Var_257, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11));
          MR_hl_field(MR_mktag(0), Var_257, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_257, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_257, 4) = ((MR_Box) (SubDefn_78));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_257, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_256_256)), &conv21_STATE_VARIABLE_Specs_139);
        *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv21_STATE_VARIABLE_Specs_139));
        parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_117_98_116_121_112_101_95_115_116_97_116_117_115_95_95_91_49_93_95_48_7_p_0(SubDefn_78, SubSection_79, IntAbstractStdMaybeDefn_28, &Status_346, &SrcDefnsInt_347, &SrcDefnsImp_348);
        {
          CheckedStdDefn_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedStdDefn_349, 0) = (MR_Box) ((MR_Unsigned) (Status_346));
          MR_hl_field(MR_mktag(1), CheckedStdDefn_349, 1) = ((MR_Box) (SubDefn_78));
        }
        {
          SrcDefns_344 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), SrcDefns_344, 0) = ((MR_Box) (SrcDefnsInt_347));
          MR_hl_field(MR_mktag(0), SrcDefns_344, 1) = ((MR_Box) (SrcDefnsImp_348));
          MR_hl_field(MR_mktag(0), SrcDefns_344, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedDefn_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CheckedDefn_345, 0) = ((MR_Box) (CheckedStdDefn_349));
          MR_hl_field(MR_mktag(1), CheckedDefn_345, 1) = ((MR_Box) (SrcDefns_344));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_345)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
      }
      else
      {
        MR_Word DuDefn_84;
        MR_Word DuSection_85;
        MR_String DuWhere_86;
        MR_Word IntDuDefn_83;

        succeeded = (IntDuMaybeDefn_30 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          IntDuDefn_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntDuMaybeDefn_30, (MR_Integer) 0))));
          DuDefn_84 = IntDuDefn_83;
          DuSection_85 = (MR_Integer) 0;
          DuWhere_86 = (MR_String) "interface";
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ImpDuMaybeDefn_37 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            DuDefn_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpDuMaybeDefn_37, (MR_Integer) 0))));
            DuSection_85 = (MR_Integer) 1;
            DuWhere_86 = (MR_String) "implementation";
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word DetailsDu_88;
          MR_Word OoMCtors_89;
          MR_Word HeadCtor_92;
          MR_Word TailCtors_93;
          MR_Word ChosenSectionCJCs_94;
          MR_Word ChosenMaybeDefnCJCs_95;
          MR_Word SrcDefnsDuInt_96;
          MR_Word SrcDefnsDuImp_97;
          MR_Word MaybeOnlyConstants_100;
          MR_Word SrcForeignDefns_110;
          MR_Word SrcForeignEnums_111;
          MR_Word STATE_VARIABLE_Specs_261_261;
          MR_Word Var_262;
          MR_Word Var_263;
          MR_Word STATE_VARIABLE_Specs_264_264;
          MR_Word Var_265;
          MR_Word Var_269;
          MR_Word STATE_VARIABLE_Specs_271_271;
          MR_Word SrcDefns_350;
          MR_Word CheckedDefn_351;
          MR_Word Status_352;
          MR_Word SrcDefnsInt_353;
          MR_Word SrcDefnsImp_354;
          MR_Word CheckedStdDefn_355;
          MR_Box conv23_STATE_VARIABLE_Specs_264_264;
          MR_String HeadName0_98;
          MR_Word TailNames0_99;

          parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, DuWhere_86, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_261_261);
          Var_265 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_84, (MR_Integer) 4))));
          {
            Var_262 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_262, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
            MR_hl_field(MR_mktag(0), Var_262, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12));
            MR_hl_field(MR_mktag(0), Var_262, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(MR_mktag(0), Var_262, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(MR_mktag(0), Var_262, 4) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), Var_262, 5) = ((MR_Box) ((MR_String) "discriminated union type"));
            MR_hl_field(MR_mktag(0), Var_262, 6) = ((MR_Box) (DuWhere_86));
            MR_hl_field(MR_mktag(0), Var_262, 7) = ((MR_Box) ((MR_String) "definition"));
            MR_hl_field(MR_mktag(0), Var_262, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
          }
          {
            Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_269, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
            MR_hl_field(MR_mktag(1), Var_269, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_263, 0) = ((MR_Box) (IntContextAbstractSolver_46));
            MR_hl_field(MR_mktag(1), Var_263, 1) = ((MR_Box) (Var_269));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_262, Var_263, ((MR_Box) (STATE_VARIABLE_Specs_261_261)), &conv23_STATE_VARIABLE_Specs_264_264);
          STATE_VARIABLE_Specs_264_264 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_264_264));
          DetailsDu_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DuDefn_84, (MR_Integer) 2))));
          OoMCtors_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_88, (MR_Integer) 0))));
          HeadCtor_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_89, (MR_Integer) 0))));
          TailCtors_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OoMCtors_89, (MR_Integer) 1))));
          parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0(TypeCtor_14, DuDefn_84, DuSection_85, IntAbstractStdMaybeDefn_28, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_352, &ChosenSectionCJCs_94, &ChosenMaybeDefnCJCs_95, &SrcDefnsDuInt_96, &SrcDefnsDuImp_97, STATE_VARIABLE_Specs_264_264, &STATE_VARIABLE_Specs_271_271);
          succeeded = parse_tree__prog_data__ctor_is_constant_2_p_0(HeadCtor_92, &HeadName0_98);
          if (succeeded)
            succeeded = parse_tree__prog_data__ctors_are_all_constants_2_p_0(TailCtors_93, &TailNames0_99);
          if (succeeded)
            if ((TailNames0_99 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              succeeded = parse_tree__prog_type__non_sub_du_type_is_dummy_1_p_0(DetailsDu_88);
              if (succeeded)
                {
                  MaybeOnlyConstants_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, 0) = ((MR_Box) (HeadName0_98));
                  MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              else
                MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Integer _NumFunctors_103;

              succeeded = parse_tree__prog_type__non_sub_du_type_is_enum_2_p_0(DetailsDu_88, &_NumFunctors_103);
              if (succeeded)
                {
                  MaybeOnlyConstants_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, 0) = ((MR_Box) (HeadName0_98));
                  MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, 1) = ((MR_Box) (TailNames0_99));
                }
              else
                MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
            }
          else
            MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
          if ((MaybeOnlyConstants_100 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ChosenMaybeDefnC_107;
            MR_Word ChosenMaybeDefnJava_108;
            MR_Word ChosenMaybeDefnCsharp_109;
            MR_Word Var_276;
            MR_Word Var_277;
            MR_Word Var_278;

            if ((ImpEnums_25 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Specs_139 = STATE_VARIABLE_Specs_271_271;
            else
            {
              MR_Word NonEnumSNAs_106;
              MR_Word Var_273;
              MR_Word Var_274;
              MR_Box conv25_STATE_VARIABLE_Specs_139;

              {
                Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (HeadCtor_92));
                MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (TailCtors_93));
              }
              parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_2_p_0(Var_273, &NonEnumSNAs_106);
              {
                Var_274 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_274, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[0]));
                MR_hl_field(MR_mktag(0), Var_274, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13));
                MR_hl_field(MR_mktag(0), Var_274, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_274, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_274, 4) = ((MR_Box) (DuDefn_84));
                MR_hl_field(MR_mktag(0), Var_274, 5) = ((MR_Box) (NonEnumSNAs_106));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_274, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_271_271)), &conv25_STATE_VARIABLE_Specs_139);
              *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv25_STATE_VARIABLE_Specs_139));
            }
            {
              CheckedStdDefn_355 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_355, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_355, 1) = (MR_Box) ((MR_Unsigned) (Status_352));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_355, 2) = ((MR_Box) (DuDefn_84));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_355, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_95));
            }
            ChosenMaybeDefnC_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_95, (MR_Integer) 0))));
            ChosenMaybeDefnJava_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_95, (MR_Integer) 1))));
            ChosenMaybeDefnCsharp_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ChosenMaybeDefnCJCs_95, (MR_Integer) 2))));
            {
              Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_278, 0) = ((MR_Box) (ChosenMaybeDefnCsharp_109));
              MR_hl_field(MR_mktag(1), Var_278, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (ChosenMaybeDefnJava_108));
              MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) (Var_278));
            }
            {
              Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (ChosenMaybeDefnC_107));
              MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (Var_277));
            }
            SrcForeignDefns_110 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_276);
            SrcForeignEnums_111 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_String HeadName_112 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, (MR_Integer) 0))));
            MR_Word TailNames_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOnlyConstants_100, (MR_Integer) 1))));
            MR_Word MaybeDefnOrEnumCJCs_114;
            MR_Word Var_280;

            {
              Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_280, 0) = ((MR_Box) (HeadName_112));
              MR_hl_field(MR_mktag(1), Var_280, 1) = ((MR_Box) (TailNames_113));
            }
            parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_10_p_0(TypeCtor_14, Var_280, ChosenMaybeDefnCJCs_95, ImpMaybeEnumCJCs_19, ImpLeftOverEnumsCJCs_20, &MaybeDefnOrEnumCJCs_114, &SrcForeignDefns_110, &SrcForeignEnums_111, STATE_VARIABLE_Specs_271_271, STATE_VARIABLE_Specs_139);
            {
              CheckedStdDefn_355 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_355, 0) = (MR_Box) ((MR_Unsigned) (Status_352));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_355, 1) = ((MR_Box) (DuDefn_84));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_355, 2) = ((MR_Box) (HeadName_112));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_355, 3) = ((MR_Box) (TailNames_113));
              MR_hl_field(MR_mktag(2), CheckedStdDefn_355, 4) = ((MR_Box) (MaybeDefnOrEnumCJCs_114));
            }
          }
          switch (ChosenSectionCJCs_94) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_284;

                SrcDefnsInt_353 = SrcDefnsDuInt_96;
                Var_284 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[23]), SrcForeignDefns_110);
                SrcDefnsImp_354 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuImp_97, Var_284);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_282;

                Var_282 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[24]), SrcForeignDefns_110);
                SrcDefnsInt_353 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuInt_96, Var_282);
                SrcDefnsImp_354 = SrcDefnsDuImp_97;
              }
              break;
          }
          {
            SrcDefns_350 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SrcDefns_350, 0) = ((MR_Box) (SrcDefnsInt_353));
            MR_hl_field(MR_mktag(0), SrcDefns_350, 1) = ((MR_Box) (SrcDefnsImp_354));
            MR_hl_field(MR_mktag(0), SrcDefns_350, 2) = ((MR_Box) (SrcForeignEnums_111));
          }
          {
            CheckedDefn_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckedDefn_351, 0) = ((MR_Box) (CheckedStdDefn_355));
            MR_hl_field(MR_mktag(1), CheckedDefn_351, 1) = ((MR_Box) (SrcDefns_350));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_351)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
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
            MR_Word IntForeignContexts_121;
            MR_Word SortedIntForeignContexts_122;
            MR_Word FirstForeignContext_123;
            MR_String ForeignWhere_125;
            MR_Word ChosenAbstractStdDefn_128;
            MR_Word Var_287;
            MR_Word Var_288;
            MR_Word Var_289;
            MR_Word Var_295;
            MR_Word Var_296;
            MR_Word STATE_VARIABLE_Specs_297_297;
            MR_Word Var_301;
            MR_Word Var_303;
            MR_Word STATE_VARIABLE_Specs_304_304;
            MR_Word SrcDefns_356;
            MR_Word CheckedDefn_357;
            MR_Word Status_358;
            MR_Word CheckedStdDefn_359;
            MR_Word ChosenMaybeDefnCJCs_360;
            MR_Box conv30_STATE_VARIABLE_Specs_297_297;
            MR_Box conv32_STATE_VARIABLE_Specs_304_304;

            {
              Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_289, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
              MR_hl_field(MR_mktag(1), Var_289, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_288, 0) = ((MR_Box) (IntMaybeDefnJava_41));
              MR_hl_field(MR_mktag(1), Var_288, 1) = ((MR_Box) (Var_289));
            }
            {
              Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_287, 0) = ((MR_Box) (IntMaybeDefnC_40));
              MR_hl_field(MR_mktag(1), Var_287, 1) = ((MR_Box) (Var_288));
            }
            IntForeignContexts_121 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_287);
            mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntForeignContexts_121, &SortedIntForeignContexts_122);
            if ((SortedIntForeignContexts_122 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ImpForeignContexts_126;
              MR_Word SortedImpForeignContexts_127;
              MR_Word Var_291;
              MR_Word Var_292;
              MR_Word Var_293;
              MR_Box conv28_FirstForeignContext_123;

              {
                Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_293, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
                MR_hl_field(MR_mktag(1), Var_293, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_292, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
                MR_hl_field(MR_mktag(1), Var_292, 1) = ((MR_Box) (Var_293));
              }
              {
                Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_291, 0) = ((MR_Box) (ImpMaybeDefnC_43));
                MR_hl_field(MR_mktag(1), Var_291, 1) = ((MR_Box) (Var_292));
              }
              ImpForeignContexts_126 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_291);
              mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpForeignContexts_126, &SortedImpForeignContexts_127);
              conv28_FirstForeignContext_123 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedImpForeignContexts_127);
              FirstForeignContext_123 = ((MR_Word) (conv28_FirstForeignContext_123));
              ForeignWhere_125 = (MR_String) "implementation";
            }
            else
            {
              FirstForeignContext_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntForeignContexts_122, (MR_Integer) 0))));
              ForeignWhere_125 = (MR_String) "interface";
            }
            {
              Var_295 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_295, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), Var_295, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16));
              MR_hl_field(MR_mktag(0), Var_295, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(MR_mktag(0), Var_295, 3) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(MR_mktag(0), Var_295, 4) = ((MR_Box) (FirstForeignContext_123));
              MR_hl_field(MR_mktag(0), Var_295, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(MR_mktag(0), Var_295, 6) = ((MR_Box) (ForeignWhere_125));
              MR_hl_field(MR_mktag(0), Var_295, 7) = ((MR_Box) ((MR_String) "definition"));
              MR_hl_field(MR_mktag(0), Var_295, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
            }
            {
              Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_301, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
              MR_hl_field(MR_mktag(1), Var_301, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_296, 0) = ((MR_Box) (IntContextAbstractSolver_46));
              MR_hl_field(MR_mktag(1), Var_296, 1) = ((MR_Box) (Var_301));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_295, Var_296, ((MR_Box) (STATE_VARIABLE_Specs_144_144)), &conv30_STATE_VARIABLE_Specs_297_297);
            STATE_VARIABLE_Specs_297_297 = ((MR_Word) (conv30_STATE_VARIABLE_Specs_297_297));
            {
              Var_303 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_303, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3]));
              MR_hl_field(MR_mktag(0), Var_303, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17));
              MR_hl_field(MR_mktag(0), Var_303, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(MR_mktag(0), Var_303, 3) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(MR_mktag(0), Var_303, 4) = ((MR_Box) (FirstForeignContext_123));
              MR_hl_field(MR_mktag(0), Var_303, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(MR_mktag(0), Var_303, 6) = ((MR_Box) (ForeignWhere_125));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_303, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_297_297)), &conv32_STATE_VARIABLE_Specs_304_304);
            STATE_VARIABLE_Specs_304_304 = ((MR_Word) (conv32_STATE_VARIABLE_Specs_304_304));
            parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0(TypeCtor_14, IntAbstractSolverMaybeDefn_62, ImpAbstractSolverMaybeDefn_33, IntAbstractStdMaybeDefn_28, ImpAbstractStdMaybeDefn_35, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_358, &ChosenAbstractStdDefn_128, &ChosenMaybeDefnCJCs_360, &SrcDefns_356, STATE_VARIABLE_Specs_304_304, STATE_VARIABLE_Specs_139);
            {
              CheckedStdDefn_359 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_359, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_359, 1) = (MR_Box) ((MR_Unsigned) (Status_358));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_359, 2) = ((MR_Box) (ChosenAbstractStdDefn_128));
              MR_hl_field(MR_mktag(3), CheckedStdDefn_359, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_360));
            }
            {
              CheckedDefn_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CheckedDefn_357, 0) = ((MR_Box) (CheckedStdDefn_359));
              MR_hl_field(MR_mktag(1), CheckedDefn_357, 1) = ((MR_Box) (SrcDefns_356));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_357)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
          }
          else
          {
            MR_Word AbstractSolverDefn_130;
            MR_String AbstractSolverWhere_131;
            MR_Word Status_378;
            MR_Word SrcDefnsInt_380;
            MR_Word SrcDefnsImp_381;
            MR_Word IntAbstractSolverDefn_129;

            succeeded = (IntAbstractSolverMaybeDefn_62 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IntAbstractSolverDefn_129 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractSolverMaybeDefn_62, (MR_Integer) 0))));
              {
                MR_Word Var_308;

                AbstractSolverDefn_130 = IntAbstractSolverDefn_129;
                AbstractSolverWhere_131 = (MR_String) "interface";
                Status_378 = (MR_Integer) 0;
                Var_308 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractSolverDefn_129);
                {
                  SrcDefnsInt_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SrcDefnsInt_380, 0) = ((MR_Box) (Var_308));
                }
                SrcDefnsImp_381 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word Var_309;

              succeeded = (ImpAbstractSolverMaybeDefn_33 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                AbstractSolverDefn_130 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractSolverMaybeDefn_33, (MR_Integer) 0))));
                AbstractSolverWhere_131 = (MR_String) "implementation";
                Status_378 = (MR_Integer) 1;
                SrcDefnsInt_380 = (MR_Word) ((MR_Unsigned) 0U);
                Var_309 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractSolverDefn_130);
                {
                  SrcDefnsImp_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SrcDefnsImp_381, 0) = ((MR_Box) (Var_309));
                }
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_Specs_310_310;
              MR_Word Var_311;
              MR_Word Var_312;
              MR_Word STATE_VARIABLE_Specs_313_313;
              MR_Word Var_314;
              MR_Word Var_318;
              MR_Word Var_320;
              MR_Word Var_322;
              MR_Word CheckedSolverDefn_361;
              MR_Word SrcDefns_362;
              MR_Word CheckedDefn_363;
              MR_Box conv34_STATE_VARIABLE_Specs_313_313;
              MR_Box conv36_STATE_VARIABLE_Specs_139;

              parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractSolverDefn_130, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_310_310);
              Var_314 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_130, (MR_Integer) 4))));
              {
                Var_311 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_311, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2]));
                MR_hl_field(MR_mktag(0), Var_311, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18));
                MR_hl_field(MR_mktag(0), Var_311, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(0), Var_311, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_311, 4) = ((MR_Box) (Var_314));
                MR_hl_field(MR_mktag(0), Var_311, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(MR_mktag(0), Var_311, 6) = ((MR_Box) (AbstractSolverWhere_131));
                MR_hl_field(MR_mktag(0), Var_311, 7) = ((MR_Box) ((MR_String) "declaration"));
                MR_hl_field(MR_mktag(0), Var_311, 8) = ((MR_Box) ((MR_String) "declaration"));
              }
              {
                Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_318, 0) = ((MR_Box) (ImpContextAbstractStd_52));
                MR_hl_field(MR_mktag(1), Var_318, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_312, 0) = ((MR_Box) (IntContextAbstractStd_47));
                MR_hl_field(MR_mktag(1), Var_312, 1) = ((MR_Box) (Var_318));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_311, Var_312, ((MR_Box) (STATE_VARIABLE_Specs_310_310)), &conv34_STATE_VARIABLE_Specs_313_313);
              STATE_VARIABLE_Specs_313_313 = ((MR_Word) (conv34_STATE_VARIABLE_Specs_313_313));
              Var_322 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbstractSolverDefn_130, (MR_Integer) 4))));
              {
                Var_320 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_320, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3]));
                MR_hl_field(MR_mktag(0), Var_320, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_19));
                MR_hl_field(MR_mktag(0), Var_320, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(0), Var_320, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(MR_mktag(0), Var_320, 4) = ((MR_Box) (Var_322));
                MR_hl_field(MR_mktag(0), Var_320, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(MR_mktag(0), Var_320, 6) = ((MR_Box) (AbstractSolverWhere_131));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_320, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_313_313)), &conv36_STATE_VARIABLE_Specs_139);
              *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv36_STATE_VARIABLE_Specs_139));
              {
                CheckedSolverDefn_361 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedSolverDefn_361, 0) = (MR_Box) ((MR_Unsigned) (Status_378));
                MR_hl_field(MR_mktag(0), CheckedSolverDefn_361, 1) = ((MR_Box) (AbstractSolverDefn_130));
              }
              {
                SrcDefns_362 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SrcDefns_362, 0) = ((MR_Box) (SrcDefnsInt_380));
                MR_hl_field(MR_mktag(0), SrcDefns_362, 1) = ((MR_Box) (SrcDefnsImp_381));
              }
              {
                CheckedDefn_363 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), CheckedDefn_363, 0) = ((MR_Box) (CheckedSolverDefn_361));
                MR_hl_field(MR_mktag(0), CheckedDefn_363, 1) = ((MR_Box) (SrcDefns_362));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_363)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
            }
            else
            {
              MR_Word Status_370;
              MR_Word AbstractStdDefn_371;
              MR_Word SrcDefnsInt_372;
              MR_Word SrcDefnsImp_373;
              MR_Word IntAbstractStdDefn_133;

              succeeded = (IntAbstractStdMaybeDefn_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                IntAbstractStdDefn_133 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_28, (MR_Integer) 0))));
                if ((ImpAbstractStdMaybeDefn_35 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_327;

                  AbstractStdDefn_371 = IntAbstractStdDefn_133;
                  Var_327 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_133);
                  {
                    SrcDefnsInt_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcDefnsInt_372, 0) = ((MR_Box) (Var_327));
                    MR_hl_field(MR_mktag(1), SrcDefnsInt_372, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word Var_325;

                  AbstractStdDefn_371 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_35, (MR_Integer) 0))));
                  Var_325 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_371);
                  {
                    SrcDefnsInt_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcDefnsInt_372, 0) = ((MR_Box) (Var_325));
                    MR_hl_field(MR_mktag(1), SrcDefnsInt_372, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                Status_370 = (MR_Integer) 1;
                SrcDefnsImp_373 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_329;
                MR_Word Var_330;

                succeeded = (ImpAbstractStdMaybeDefn_35 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  AbstractStdDefn_371 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbstractStdMaybeDefn_35, (MR_Integer) 0))));
                  Status_370 = (MR_Integer) 2;
                  SrcDefnsInt_372 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_329 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_371);
                  Var_330 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    SrcDefnsImp_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), SrcDefnsImp_373, 0) = ((MR_Box) (Var_329));
                    MR_hl_field(MR_mktag(1), SrcDefnsImp_373, 1) = ((MR_Box) (Var_330));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Specs_331_331;
                MR_Word Var_332;
                MR_Word SrcDefns_365;
                MR_Word CheckedDefn_366;
                MR_Word CheckedStdDefn_367;
                MR_Box conv38_STATE_VARIABLE_Specs_139;

                parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractStdDefn_371, STATE_VARIABLE_Specs_144_144, &STATE_VARIABLE_Specs_331_331);
                {
                  Var_332 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_332, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[4]));
                  MR_hl_field(MR_mktag(0), Var_332, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_20));
                  MR_hl_field(MR_mktag(0), Var_332, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_332, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(MR_mktag(0), Var_332, 4) = ((MR_Box) ((MR_String) "undefined"));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_332, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_331_331)), &conv38_STATE_VARIABLE_Specs_139);
                *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv38_STATE_VARIABLE_Specs_139));
                {
                  CheckedStdDefn_367 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), CheckedStdDefn_367, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), CheckedStdDefn_367, 1) = (MR_Box) ((MR_Unsigned) (Status_370));
                  MR_hl_field(MR_mktag(3), CheckedStdDefn_367, 2) = ((MR_Box) (AbstractStdDefn_371));
                  MR_hl_field(MR_mktag(3), CheckedStdDefn_367, 3) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[5]));
                }
                {
                  SrcDefns_365 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), SrcDefns_365, 0) = ((MR_Box) (SrcDefnsInt_372));
                  MR_hl_field(MR_mktag(0), SrcDefns_365, 1) = ((MR_Box) (SrcDefnsImp_373));
                  MR_hl_field(MR_mktag(0), SrcDefns_365, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedDefn_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CheckedDefn_366, 0) = ((MR_Box) (CheckedStdDefn_367));
                  MR_hl_field(MR_mktag(1), CheckedDefn_366, 1) = ((MR_Box) (SrcDefns_365));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_366)), STATE_VARIABLE_TypeCtorCheckedMap_0_136, STATE_VARIABLE_TypeCtorCheckedMap_137);
              }
              else
              {
                MR_Word Var_340;
                MR_Box conv40_STATE_VARIABLE_Specs_139;

                {
                  Var_340 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_340, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[4]));
                  MR_hl_field(MR_mktag(0), Var_340, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_21));
                  MR_hl_field(MR_mktag(0), Var_340, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_340, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(MR_mktag(0), Var_340, 4) = ((MR_Box) ((MR_String) "undeclared"));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_340, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_144_144)), &conv40_STATE_VARIABLE_Specs_139);
                *STATE_VARIABLE_Specs_139 = ((MR_Word) (conv40_STATE_VARIABLE_Specs_139));
                *STATE_VARIABLE_TypeCtorCheckedMap_137 = STATE_VARIABLE_TypeCtorCheckedMap_0_136;
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
        MR_Word Var_20;

        if ((IntAbstractStdMaybeDefn_11 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Status_12 = (MR_Integer) 2;
          *SrcDefnsInt_13 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word IntAbstractStdDefn_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_11, (MR_Integer) 0))));
          MR_Word Var_18;

          *Status_12 = (MR_Integer) 1;
          Var_18 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsInt_13 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        Var_20 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(SubDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsImp_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_16;

        *Status_12 = (MR_Integer) 0;
        Var_16 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(SubDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsInt_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
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

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(
  MR_Word HeadVar__1_1)
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_18));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__2_2;

  conv10_HeadVar__2_2 = parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Cmp_6;

  parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Cmp_6);
  *wrapper_arg_3 = ((MR_Box) (conv9_Cmp_6));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_18));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Cmp_6;

  parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Cmp_6);
  *wrapper_arg_3 = ((MR_Box) (conv5_Cmp_6));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Cmp_6;

  parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Cmp_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_Cmp_6));
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
    MR_Word EnumsC_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 0))));
    MR_Word EnumsJava_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 1))));
    MR_Word EnumsCsharp_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllEnums_12, (MR_Integer) 2))));
    MR_Word MaybeEnumC_27;
    MR_Word LeftOverEnumsC_28;
    MR_Word MaybeEnumJava_29;
    MR_Word LeftOverEnumsJava_30;
    MR_Word MaybeEnumCsharp_31;
    MR_Word LeftOverEnumsCsharp_32;
    MR_Word STATE_VARIABLE_Specs_24_34;
    MR_Word STATE_VARIABLE_Specs_26_36;
    MR_Word SortedForeignEnums_38;
    MR_Word SortedForeignEnums_54;
    MR_Word SortedForeignEnums_70;

    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[16]), EnumsC_24, &SortedForeignEnums_38);
    if ((SortedForeignEnums_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumC_27 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsC_28 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_24_34 = STATE_VARIABLE_Specs_0_13;
    }
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_38, (MR_Integer) 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_38, (MR_Integer) 0))));

      if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumC_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumC_27, 0) = ((MR_Box) (Var_53));
        }
        LeftOverEnumsC_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_24_34 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        MR_Word LeastContext_39;
        MR_Word LeftOverContexts_40;
        MR_Word Var_43;
        MR_Box conv4_STATE_VARIABLE_Specs_24_34;

        LeftOverEnumsC_28 = Var_52;
        {
          MaybeEnumC_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumC_27, 0) = ((MR_Box) (Var_53));
        }
        LeastContext_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 3))));
        LeftOverContexts_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[17]), LeftOverEnumsC_28);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_43, 6) = ((MR_Box) (LeastContext_39));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_43, LeftOverContexts_40, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv4_STATE_VARIABLE_Specs_24_34);
        STATE_VARIABLE_Specs_24_34 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_24_34));
      }
    }
    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[18]), EnumsJava_25, &SortedForeignEnums_54);
    if ((SortedForeignEnums_54 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumJava_29 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsJava_30 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_26_36 = STATE_VARIABLE_Specs_24_34;
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_54, (MR_Integer) 1))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_54, (MR_Integer) 0))));

      if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumJava_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumJava_29, 0) = ((MR_Box) (Var_69));
        }
        LeftOverEnumsJava_30 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_26_36 = STATE_VARIABLE_Specs_24_34;
      }
      else
      {
        MR_Word LeastContext_55;
        MR_Word LeftOverContexts_56;
        MR_Word Var_59;
        MR_Box conv8_STATE_VARIABLE_Specs_26_36;

        LeftOverEnumsJava_30 = Var_68;
        {
          MaybeEnumJava_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumJava_29, 0) = ((MR_Box) (Var_69));
        }
        LeastContext_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_69, (MR_Integer) 3))));
        LeftOverContexts_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[19]), LeftOverEnumsJava_30);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_6));
          MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_59, 6) = ((MR_Box) (LeastContext_55));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_59, LeftOverContexts_56, ((MR_Box) (STATE_VARIABLE_Specs_24_34)), &conv8_STATE_VARIABLE_Specs_26_36);
        STATE_VARIABLE_Specs_26_36 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_26_36));
      }
    }
    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[20]), EnumsCsharp_26, &SortedForeignEnums_70);
    if ((SortedForeignEnums_70 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumCsharp_31 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsCsharp_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_26_36;
    }
    else
    {
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_70, (MR_Integer) 1))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedForeignEnums_70, (MR_Integer) 0))));

      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumCsharp_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumCsharp_31, 0) = ((MR_Box) (Var_85));
        }
        LeftOverEnumsCsharp_32 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_26_36;
      }
      else
      {
        MR_Word LeastContext_71;
        MR_Word LeftOverContexts_72;
        MR_Word Var_75;
        MR_Box conv12_STATE_VARIABLE_Specs_14;

        LeftOverEnumsCsharp_32 = Var_84;
        {
          MaybeEnumCsharp_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeEnumCsharp_31, 0) = ((MR_Box) (Var_85));
        }
        LeastContext_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_85, (MR_Integer) 3))));
        LeftOverContexts_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[21]), LeftOverEnumsCsharp_32);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_9));
          MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(MR_mktag(0), Var_75, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_75, 6) = ((MR_Box) (LeastContext_71));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_75, LeftOverContexts_72, ((MR_Box) (STATE_VARIABLE_Specs_26_36)), &conv12_STATE_VARIABLE_Specs_14);
        *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_14));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeEnumCJCs_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeEnumC_27));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeEnumJava_29));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeEnumCsharp_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *LeftOverEnumCJCse_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LeftOverEnumsC_28));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LeftOverEnumsJava_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (LeftOverEnumsCsharp_32));
    }
  }
  else
  {
    *MaybeEnumCJCs_9 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[6]);
    *LeftOverEnumCJCse_10 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[7]);
    *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv15_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_LambdaHeadVar__3_31;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv13_LambdaHeadVar__3_31));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv11_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_LambdaHeadVar__3_31;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv9_LambdaHeadVar__3_31));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__3_31;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv5_LambdaHeadVar__3_31));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__3_31;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_31));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(
  MR_Word TypeDefnMap_6,
  MR_Word TypeCtor_7,
  MR_Word * MaybeDefn_8,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
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
    MR_Word AbsSolverDefns_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 0))));
    MR_Word SolverDefns_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 1))));
    MR_Word AbsNonSolverDefns_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 2))));
    MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 3))));
    MR_Word DuDefns_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 4))));
    MR_Word SubDefns_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 5))));
    MR_Word ForeignDefns_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AllDefns_10, (MR_Integer) 6))));
    MR_Word AbsSolverMaybeDefn_18;
    MR_Word SolverMaybeDefn_19;
    MR_Word AbsNonSolverMaybeDefn_20;
    MR_Word EqvMaybeDefn_21;
    MR_Word DuMaybeDefn_22;
    MR_Word SubMaybeDefn_23;
    MR_Word ForeignMaybeDefn_24;
    MR_Word STATE_VARIABLE_Specs_29_29;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_Specs_44_44;

    if ((AbsSolverDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AbsSolverMaybeDefn_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_25;
    }
    else
    {
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbsSolverDefns_11, (MR_Integer) 1))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbsSolverDefns_11, (MR_Integer) 0))));

      if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          AbsSolverMaybeDefn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbsSolverMaybeDefn_18, 0) = ((MR_Box) (Var_72));
        }
        STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_25;
      }
      else
      {
        MR_Word SortedTypeDefns_64;
        MR_Word HeadTypeDefn_65;
        MR_Word TailTypeDefns_66;
        MR_Word Var_67;
        MR_Box conv2_HeadTypeDefn_65;
        MR_Box conv4_STATE_VARIABLE_Specs_29_29;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[0]), AbsSolverDefns_11, &SortedTypeDefns_64);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), SortedTypeDefns_64, &conv2_HeadTypeDefn_65, &TailTypeDefns_66);
        HeadTypeDefn_65 = ((MR_Word) (conv2_HeadTypeDefn_65));
        {
          AbsSolverMaybeDefn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbsSolverMaybeDefn_18, 0) = ((MR_Box) (HeadTypeDefn_65));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(MR_mktag(0), Var_67, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(MR_mktag(0), Var_67, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_67, 6) = ((MR_Box) ((MR_String) "abstract solver type"));
          MR_hl_field(MR_mktag(0), Var_67, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(MR_mktag(0), Var_67, 8) = ((MR_Box) (HeadTypeDefn_65));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_67, TailTypeDefns_66, ((MR_Box) (STATE_VARIABLE_Specs_0_25)), &conv4_STATE_VARIABLE_Specs_29_29);
        STATE_VARIABLE_Specs_29_29 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_29_29));
      }
    }
    if ((SolverDefns_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      SolverMaybeDefn_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_29_29;
    }
    else
    {
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefns_12, (MR_Integer) 1))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SolverDefns_12, (MR_Integer) 0))));

      if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          SolverMaybeDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SolverMaybeDefn_19, 0) = ((MR_Box) (Var_82));
        }
        STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_29_29;
      }
      else
      {
        MR_Word SortedTypeDefns_74;
        MR_Word HeadTypeDefn_75;
        MR_Word TailTypeDefns_76;
        MR_Word Var_77;
        MR_Box conv6_HeadTypeDefn_75;
        MR_Box conv8_STATE_VARIABLE_Specs_32_32;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[112]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[1]), SolverDefns_12, &SortedTypeDefns_74);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[112]), SortedTypeDefns_74, &conv6_HeadTypeDefn_75, &TailTypeDefns_76);
        HeadTypeDefn_75 = ((MR_Word) (conv6_HeadTypeDefn_75));
        {
          SolverMaybeDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SolverMaybeDefn_19, 0) = ((MR_Box) (HeadTypeDefn_75));
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_77, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_77, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0));
          MR_hl_field(MR_mktag(0), Var_77, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0));
          MR_hl_field(MR_mktag(0), Var_77, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_77, 6) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(MR_mktag(0), Var_77, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(MR_mktag(0), Var_77, 8) = ((MR_Box) (HeadTypeDefn_75));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[112]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_77, TailTypeDefns_76, ((MR_Box) (STATE_VARIABLE_Specs_29_29)), &conv8_STATE_VARIABLE_Specs_32_32);
        STATE_VARIABLE_Specs_32_32 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_32_32));
      }
    }
    if ((AbsNonSolverDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AbsNonSolverMaybeDefn_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_35_35 = STATE_VARIABLE_Specs_32_32;
    }
    else
    {
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbsNonSolverDefns_13, (MR_Integer) 1))));
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AbsNonSolverDefns_13, (MR_Integer) 0))));

      if ((Var_91 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          AbsNonSolverMaybeDefn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbsNonSolverMaybeDefn_20, 0) = ((MR_Box) (Var_92));
        }
        STATE_VARIABLE_Specs_35_35 = STATE_VARIABLE_Specs_32_32;
      }
      else
      {
        MR_Word SortedTypeDefns_84;
        MR_Word HeadTypeDefn_85;
        MR_Word TailTypeDefns_86;
        MR_Word Var_87;
        MR_Box conv10_HeadTypeDefn_85;
        MR_Box conv12_STATE_VARIABLE_Specs_35_35;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[2]), AbsNonSolverDefns_13, &SortedTypeDefns_84);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), SortedTypeDefns_84, &conv10_HeadTypeDefn_85, &TailTypeDefns_86);
        HeadTypeDefn_85 = ((MR_Word) (conv10_HeadTypeDefn_85));
        {
          AbsNonSolverMaybeDefn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), AbsNonSolverMaybeDefn_20, 0) = ((MR_Box) (HeadTypeDefn_85));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_87, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_6));
          MR_hl_field(MR_mktag(0), Var_87, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_87, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(MR_mktag(0), Var_87, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(MR_mktag(0), Var_87, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_87, 6) = ((MR_Box) ((MR_String) "abstract type"));
          MR_hl_field(MR_mktag(0), Var_87, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(MR_mktag(0), Var_87, 8) = ((MR_Box) (HeadTypeDefn_85));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_87, TailTypeDefns_86, ((MR_Box) (STATE_VARIABLE_Specs_32_32)), &conv12_STATE_VARIABLE_Specs_35_35);
        STATE_VARIABLE_Specs_35_35 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_35_35));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      EqvMaybeDefn_21 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_35_35;
    }
    else
    {
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 1))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), EqvDefns_14, (MR_Integer) 0))));

      if ((Var_101 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          EqvMaybeDefn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EqvMaybeDefn_21, 0) = ((MR_Box) (Var_102));
        }
        STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_35_35;
      }
      else
      {
        MR_Word SortedTypeDefns_94;
        MR_Word HeadTypeDefn_95;
        MR_Word TailTypeDefns_96;
        MR_Word Var_97;
        MR_Box conv14_HeadTypeDefn_95;
        MR_Box conv16_STATE_VARIABLE_Specs_38_38;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[113]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[3]), EqvDefns_14, &SortedTypeDefns_94);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[113]), SortedTypeDefns_94, &conv14_HeadTypeDefn_95, &TailTypeDefns_96);
        HeadTypeDefn_95 = ((MR_Word) (conv14_HeadTypeDefn_95));
        {
          EqvMaybeDefn_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), EqvMaybeDefn_21, 0) = ((MR_Box) (HeadTypeDefn_95));
        }
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_8));
          MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(0), Var_97, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0));
          MR_hl_field(MR_mktag(0), Var_97, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0));
          MR_hl_field(MR_mktag(0), Var_97, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_97, 6) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(MR_mktag(0), Var_97, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(MR_mktag(0), Var_97, 8) = ((MR_Box) (HeadTypeDefn_95));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[113]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_97, TailTypeDefns_96, ((MR_Box) (STATE_VARIABLE_Specs_35_35)), &conv16_STATE_VARIABLE_Specs_38_38);
        STATE_VARIABLE_Specs_38_38 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_38_38));
      }
    }
    parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0), (MR_Integer) 1, (MR_String) "discriminated union type", TypeCtor_7, DuDefns_15, &DuMaybeDefn_22, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_41_41);
    parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0), (MR_Integer) 1, (MR_String) "subtype", TypeCtor_7, SubDefns_16, &SubMaybeDefn_23, STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_44_44);
    parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(TypeCtor_7, ForeignDefns_17, &ForeignMaybeDefn_24, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDefn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (AbsSolverMaybeDefn_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SolverMaybeDefn_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AbsNonSolverMaybeDefn_20));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv13_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv13_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__3_32;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1442__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__3_32);
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__3_32));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__3_32;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1442__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_32);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__3_32));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_32;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1442__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_32);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_32));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word DefnsCJCs_7,
  MR_Word * MaybeDefnCJCs_8,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
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
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsC_10, (MR_Integer) 0))));

    if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnC_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnC_13, 0) = ((MR_Box) (Var_37));
      }
      STATE_VARIABLE_Specs_19_19 = STATE_VARIABLE_Specs_0_16;
    }
    else
    {
      MR_Word Contexts_23;
      MR_Word Var_27;
      MR_Box conv1_Contexts_23;
      MR_Word LeastContext_24;
      MR_Word OtherContexts_25;
      MR_Box conv2_LeastContext_24;

      {
        MaybeDefnC_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnC_13, 0) = ((MR_Box) (Var_37));
      }
      Var_27 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[10]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[13]), DefnsC_10, ((MR_Box) (Var_27)), &conv1_Contexts_23);
      Contexts_23 = ((MR_Word) (conv1_Contexts_23));
      succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &conv2_LeastContext_24, Contexts_23, &OtherContexts_25);
      if (succeeded)
      {
        LeastContext_24 = ((MR_Word) (conv2_LeastContext_24));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_28;
        MR_Box conv4_STATE_VARIABLE_Specs_19_19;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2));
          MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(MR_mktag(0), Var_28, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (LeastContext_24));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, OtherContexts_25, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv4_STATE_VARIABLE_Specs_19_19);
        STATE_VARIABLE_Specs_19_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_19_19));
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
          return;
        }
    }
  }
  if ((DefnsJava_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeDefnJava_14 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_21_21 = STATE_VARIABLE_Specs_19_19;
  }
  else
  {
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsJava_11, (MR_Integer) 1))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsJava_11, (MR_Integer) 0))));

    if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnJava_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnJava_14, 0) = ((MR_Box) (Var_52));
      }
      STATE_VARIABLE_Specs_21_21 = STATE_VARIABLE_Specs_19_19;
    }
    else
    {
      MR_Word Contexts_38;
      MR_Word Var_42;
      MR_Box conv6_Contexts_38;
      MR_Word LeastContext_39;
      MR_Word OtherContexts_40;
      MR_Box conv7_LeastContext_39;

      {
        MaybeDefnJava_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnJava_14, 0) = ((MR_Box) (Var_52));
      }
      Var_42 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[10]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[14]), DefnsJava_11, ((MR_Box) (Var_42)), &conv6_Contexts_38);
      Contexts_38 = ((MR_Word) (conv6_Contexts_38));
      succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &conv7_LeastContext_39, Contexts_38, &OtherContexts_40);
      if (succeeded)
      {
        LeastContext_39 = ((MR_Word) (conv7_LeastContext_39));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_43;
        MR_Box conv9_STATE_VARIABLE_Specs_21_21;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_4));
          MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(MR_mktag(0), Var_43, 5) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_43, 6) = ((MR_Box) (LeastContext_39));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_43, OtherContexts_40, ((MR_Box) (STATE_VARIABLE_Specs_19_19)), &conv9_STATE_VARIABLE_Specs_21_21);
        STATE_VARIABLE_Specs_21_21 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_21_21));
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
          return;
        }
    }
  }
  if ((DefnsCsharp_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeDefnCsharp_15 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_21_21;
  }
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsCsharp_12, (MR_Integer) 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnsCsharp_12, (MR_Integer) 0))));

    if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnCsharp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnCsharp_15, 0) = ((MR_Box) (Var_67));
      }
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_21_21;
    }
    else
    {
      MR_Word Contexts_53;
      MR_Word Var_57;
      MR_Box conv11_Contexts_53;
      MR_Word LeastContext_54;
      MR_Word OtherContexts_55;
      MR_Box conv12_LeastContext_54;

      {
        MaybeDefnCsharp_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDefnCsharp_15, 0) = ((MR_Box) (Var_67));
      }
      Var_57 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[10]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[15]), DefnsCsharp_12, ((MR_Box) (Var_57)), &conv11_Contexts_53);
      Contexts_53 = ((MR_Word) (conv11_Contexts_53));
      succeeded = mercury__set__remove_least_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), &conv12_LeastContext_54, Contexts_53, &OtherContexts_55);
      if (succeeded)
      {
        LeastContext_54 = ((MR_Word) (conv12_LeastContext_54));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_58;
        MR_Box conv14_STATE_VARIABLE_Specs_17;

        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
          MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_6));
          MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(MR_mktag(0), Var_58, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_58, 6) = ((MR_Box) (LeastContext_54));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_58, OtherContexts_55, ((MR_Box) (STATE_VARIABLE_Specs_21_21)), &conv14_STATE_VARIABLE_Specs_17);
        *STATE_VARIABLE_Specs_17 = ((MR_Word) (conv14_STATE_VARIABLE_Specs_17));
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.at_most_one_foreign_type_for_lang\'/6", (MR_String) "nonempty set doesn\'t have least element");
          return;
        }
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MaybeDefnCJCs_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeDefnC_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeDefnJava_14));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeDefnCsharp_15));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_Specs_21;

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_21);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_Specs_21));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_31;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1338__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_31));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word DeclOrDefn_8,
  MR_String Kind_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefns_11,
  MR_Word * MaybeTypeDefn_12,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  if ((TypeDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MaybeTypeDefn_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
  }
  else
  {
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_11, (MR_Integer) 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeDefns_11, (MR_Integer) 0))));

    if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_58));
      }
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    }
    else
    {
      MR_Word TypeInfo_52_52;
      MR_Word CompareTypeDefnsByContext_18;
      MR_Word SortedTypeDefns_22;
      MR_Word HeadTypeDefn_23;
      MR_Word TailTypeDefns_24;
      MR_Word Var_34;
      MR_Word conv1_SortedTypeDefns_22;
      MR_Box conv3_HeadTypeDefn_23;
      MR_Word conv2_TailTypeDefns_24;
      MR_Box conv5_STATE_VARIABLE_Specs_26;

      {
        CompareTypeDefnsByContext_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[4]));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_1));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), CompareTypeDefnsByContext_18, 3) = ((MR_Box) (TypeInfo_for_T_49));
      }
      {
        TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1));
        MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_49));
      }
      mercury__list__sort_3_p_0(TypeInfo_52_52, (MR_Word) (CompareTypeDefnsByContext_18), (MR_Word) (TypeDefns_11), &conv1_SortedTypeDefns_22);
      SortedTypeDefns_22 = (MR_Word) (conv1_SortedTypeDefns_22);
      mercury__list__det_head_tail_3_p_0(TypeInfo_52_52, (MR_Word) (SortedTypeDefns_22), &conv3_HeadTypeDefn_23, &conv2_TailTypeDefns_24);
      HeadTypeDefn_23 = ((MR_Word) (conv3_HeadTypeDefn_23));
      TailTypeDefns_24 = (MR_Word) (conv2_TailTypeDefns_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadTypeDefn_23));
      }
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1]));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(MR_mktag(0), Var_34, 4) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(MR_mktag(0), Var_34, 5) = ((MR_Box) (DeclOrDefn_8));
        MR_hl_field(MR_mktag(0), Var_34, 6) = ((MR_Box) (Kind_9));
        MR_hl_field(MR_mktag(0), Var_34, 7) = ((MR_Box) (TypeCtor_10));
        MR_hl_field(MR_mktag(0), Var_34, 8) = ((MR_Box) (HeadTypeDefn_23));
      }
      mercury__list__foldl_4_p_0(TypeInfo_52_52, (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (Var_34), (MR_Word) (TailTypeDefns_24), ((MR_Box) (STATE_VARIABLE_Specs_0_25)), &conv5_STATE_VARIABLE_Specs_26);
      *STATE_VARIABLE_Specs_26 = ((MR_Word) (conv5_STATE_VARIABLE_Specs_26));
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
  MR_bool succeeded;
  MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0))));
  MR_Word TypeCtorModuleName_12;
  MR_Word BuiltinTypeCtors_13;
  MR_String Var_18;
  MR_Word TypeCtorInfo_38_38;

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
        TypeCtorInfo_38_38 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_38_38, ((MR_Box) (TypeCtor_7)), BuiltinTypeCtors_13);
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
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
    }
    {
      Pieces_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[92])));
      MR_hl_field(MR_mktag(1), Pieces_14, 1) = ((MR_Box) (Var_21));
    }
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AbsTypeDefn_8, (MR_Integer) 4))));
    {
      Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.maybe_report_declared_but_undefined_type\'/5"));
      MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[80])));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[78])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[76])));
      MR_hl_field(MR_mktag(1), Pieces_11, 1) = ((MR_Box) (Var_17));
    }
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpAbstractDefn_10, (MR_Integer) 4))));
    {
      Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_type_in_imp\'/5"));
      MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 32U));
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
parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word IntMaybeDefn_10,
  MR_Word IntMaybeAbstractDefn0_11,
  MR_Word * IntMaybeAbstractDefn_12,
  MR_Word ImpMaybeDefn0_13,
  MR_Word * ImpMaybeDefn_14,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  if ((IntMaybeDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *IntMaybeAbstractDefn_12 = IntMaybeAbstractDefn0_11;
    *ImpMaybeDefn_14 = ImpMaybeDefn0_13;
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
  else
  {
    MR_Word IntDefn_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntMaybeDefn_10, (MR_Integer) 0))));
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_49;
    MR_Word Var_50;

    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__check_type_inst_mode_defns_scalar_common_1[75])));
    }
    {
      Pieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
      MR_hl_field(MR_mktag(1), Pieces_17, 1) = ((MR_Box) (Var_26));
    }
    Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntDefn_16, (MR_Integer) 0))));
    Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntDefn_16, (MR_Integer) 1))));
    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntDefn_16, (MR_Integer) 3))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntDefn_16, (MR_Integer) 4))));
    Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntDefn_16, (MR_Integer) 5))));
    {
      Spec_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_nonabstract_solver_type_in_int\'/8"));
      MR_hl_field(MR_mktag(1), Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 32U));
      MR_hl_field(MR_mktag(1), Spec_18, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(1), Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
    }
    if ((IntMaybeAbstractDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IntAbstractDefn_19;

      {
        IntAbstractDefn_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 4) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), IntAbstractDefn_19, 5) = ((MR_Box) (Var_50));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *IntMaybeAbstractDefn_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IntAbstractDefn_19));
      }
    }
    else
      *IntMaybeAbstractDefn_12 = IntMaybeAbstractDefn0_11;
    if ((ImpMaybeDefn0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      *ImpMaybeDefn_14 = IntMaybeDefn_10;
    else
      *ImpMaybeDefn_14 = ImpMaybeDefn0_13;
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Ctors_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word NonEnumSNAsTail_6;
    MR_Word CtorSymName_7;
    MR_Integer CtorArity_8;

    parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_2_p_0(Ctors_4, &NonEnumSNAsTail_6);
    CtorSymName_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 2))));
    CtorArity_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_3, (MR_Integer) 4))));
    succeeded = (CtorArity_8 == (MR_Integer) 0);
    if (succeeded)
      *HeadVar__2_2 = NonEnumSNAsTail_6;
    else
    {
      MR_Word CtorSNA_9;

      {
        CtorSNA_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CtorSNA_9, 0) = ((MR_Box) (CtorSymName_7));
        MR_hl_field(MR_mktag(0), CtorSNA_9, 1) = ((MR_Box) (CtorArity_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CtorSNA_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NonEnumSNAsTail_6));
      }
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MaybeCheckedForeignEnum_10;

  parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCheckedForeignEnum_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCheckedForeignEnum_10));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__910__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word MaybeCheckedForeignEnum_22;

  if ((MaybeEnum_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (LeftOverEnums_17));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.decide_du_repn_foreign_only_constants_lang\'/11", (MR_String) "MaybeEnum = no but LeftOverEnums != []");
    MaybeCheckedForeignEnum_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
  else
  {
    MR_Word Enum_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeEnum_16, (MR_Integer) 0))));
    MR_Word CFESpecs_26;
    MR_Word Var_37;
    MR_Word HeadMaybeCFE_50;
    MR_Word TailMaybeCFEs_51;
    MR_Word TailMaybeCFE_54;
    MR_Word TailSpecs_55;

    parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(TypeCtor_12, CtorNames_13, CtorNamesSet_14, Enum_23, &HeadMaybeCFE_50);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (CtorNames_13));
      MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (CtorNamesSet_14));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[9]), Var_37, LeftOverEnums_17, &TailMaybeCFEs_51);
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
      MR_Word Var_42 = (MR_Word) ((MR_Word) (CheckedForeignEnum_28));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnum_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_42));
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
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Defn_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefnOrEnum_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_40));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word CtorNames_7,
  MR_Word CtorNamesSet_8,
  MR_Word ForeignEnum_9,
  MR_Word * MaybeCheckedForeignEnum_10)
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
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  conv9_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_STATE_VARIABLE_Specs_14;

  parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_14);
  *wrapper_arg_3 = ((MR_Box) (conv7_STATE_VARIABLE_Specs_14));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__2_2;

  conv6_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__7_101;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__809__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__7_101);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__7_101));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Specs_11;

  parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_11);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_11));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0(
  MR_Word TypeCtor_14,
  MR_Word IntAbsSolverMaybeDefn_15,
  MR_Word ImpAbsSolverMaybeDefn_16,
  MR_Word IntAbsStdMaybeDefn_17,
  MR_Word ImpAbsStdMaybeDefn_18,
  MR_Word IntMaybeDefnCJCs_19,
  MR_Word ImpMaybeDefnCJCs_20,
  MR_Word * Status_21,
  MR_Word * AbsStdDefn_22,
  MR_Word * ChosenMaybeDefnCJCs_23,
  MR_Word * SrcDefns_24,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word IntDefnsCJCs_32;
  MR_Word ImpDefnsCJCs_33;
  MR_Word SrcDefnsInt_39;
  MR_Word SrcDefnsImp_40;
  MR_Word MaybeTypeDefn_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_19, (MR_Integer) 0))));
  MR_Word TailDefns_115;
  MR_Word MaybeTypeDefn_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_19, (MR_Integer) 1))));
  MR_Word MaybeTypeDefns_118;
  MR_Word TailDefns_120;
  MR_Word MaybeTypeDefn_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_19, (MR_Integer) 2))));
  MR_Word MaybeTypeDefn_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_20, (MR_Integer) 0))));
  MR_Word TailDefns_135;
  MR_Word MaybeTypeDefn_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_20, (MR_Integer) 1))));
  MR_Word MaybeTypeDefns_138;
  MR_Word TailDefns_140;
  MR_Word MaybeTypeDefn_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_20, (MR_Integer) 2))));
  MR_Word MaybeTypeDefns_113;
  MR_Word MaybeTypeDefns_133;

  {
    MaybeTypeDefns_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_118, 0) = ((MR_Box) (MaybeTypeDefn_122));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_113, 0) = ((MR_Box) (MaybeTypeDefn_117));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_113, 1) = ((MR_Box) (MaybeTypeDefns_118));
  }
  if ((MaybeTypeDefn_122 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_120 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_126 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_122, (MR_Integer) 0))));

    {
      TailDefns_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_120, 0) = ((MR_Box) (TypeDefn_126));
      MR_hl_field(MR_mktag(1), TailDefns_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_117 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_115 = TailDefns_120;
  else
  {
    MR_Word TypeDefn_121 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_117, (MR_Integer) 0))));

    {
      TailDefns_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_115, 0) = ((MR_Box) (TypeDefn_121));
      MR_hl_field(MR_mktag(1), TailDefns_115, 1) = ((MR_Box) (TailDefns_120));
    }
  }
  if ((MaybeTypeDefn_112 == (MR_Word) ((MR_Unsigned) 0U)))
    IntDefnsCJCs_32 = TailDefns_115;
  else
  {
    MR_Word TypeDefn_116 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_112, (MR_Integer) 0))));

    {
      IntDefnsCJCs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 0) = ((MR_Box) (TypeDefn_116));
      MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 1) = ((MR_Box) (TailDefns_115));
    }
  }
  {
    MaybeTypeDefns_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_138, 0) = ((MR_Box) (MaybeTypeDefn_142));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_133, 0) = ((MR_Box) (MaybeTypeDefn_137));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_133, 1) = ((MR_Box) (MaybeTypeDefns_138));
  }
  if ((MaybeTypeDefn_142 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_140 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_146 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_142, (MR_Integer) 0))));

    {
      TailDefns_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_140, 0) = ((MR_Box) (TypeDefn_146));
      MR_hl_field(MR_mktag(1), TailDefns_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_137 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_135 = TailDefns_140;
  else
  {
    MR_Word TypeDefn_141 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_137, (MR_Integer) 0))));

    {
      TailDefns_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_135, 0) = ((MR_Box) (TypeDefn_141));
      MR_hl_field(MR_mktag(1), TailDefns_135, 1) = ((MR_Box) (TailDefns_140));
    }
  }
  if ((MaybeTypeDefn_132 == (MR_Word) ((MR_Unsigned) 0U)))
    ImpDefnsCJCs_33 = TailDefns_135;
  else
  {
    MR_Word TypeDefn_136 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_132, (MR_Integer) 0))));

    {
      ImpDefnsCJCs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 0) = ((MR_Box) (TypeDefn_136));
      MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 1) = ((MR_Box) (TailDefns_135));
    }
  }
  if ((IntAbsStdMaybeDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_75;
    MR_Word Var_76;

    *Status_21 = (MR_Integer) 2;
    if ((ImpAbsStdMaybeDefn_18 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IntImpDefnsCJCs_42;
      MR_Word FirstDefn_45;
      MR_Box conv2_FirstDefn_45;
      MR_Word Var_79;
      MR_Word Var_80;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;

      IntImpDefnsCJCs_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), IntDefnsCJCs_32, ImpDefnsCJCs_33);
      succeeded = (IntAbsSolverMaybeDefn_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (ImpAbsSolverMaybeDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
        }
      }
      if (succeeded)
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
      else
      {
        MR_Word Var_72;
        MR_Box conv1_STATE_VARIABLE_Specs_47;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (TypeCtor_14));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_72, IntImpDefnsCJCs_42, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv1_STATE_VARIABLE_Specs_47);
        *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_47));
      }
      conv2_FirstDefn_45 = mercury__list__det_head_1_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), IntImpDefnsCJCs_42);
      FirstDefn_45 = ((MR_Word) (conv2_FirstDefn_45));
      Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_45, (MR_Integer) 0))));
      Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_45, (MR_Integer) 1))));
      Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_45, (MR_Integer) 3))));
      Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_45, (MR_Integer) 4))));
      Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstDefn_45, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *AbsStdDefn_22 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_79));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_80));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_83));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_84));
      }
    }
    else
    {
      MR_Word Var_68;
      MR_Box conv4_STATE_VARIABLE_Specs_47;

      *AbsStdDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ImpAbsStdMaybeDefn_18, (MR_Integer) 0))));
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_2));
        MR_hl_field(MR_mktag(0), Var_68, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_68, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_68, 4) = ((MR_Box) (*AbsStdDefn_22));
        MR_hl_field(MR_mktag(0), Var_68, 5) = ((MR_Box) ((MR_String) "declaration"));
        MR_hl_field(MR_mktag(0), Var_68, 6) = ((MR_Box) ((MR_String) "implementation"));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_68, IntDefnsCJCs_32, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv4_STATE_VARIABLE_Specs_47);
      *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_47));
    }
    *ChosenMaybeDefnCJCs_23 = ImpMaybeDefnCJCs_20;
    SrcDefnsInt_39 = (MR_Word) ((MR_Unsigned) 0U);
    Var_75 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbsStdDefn_22);
    Var_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[10]), ImpDefnsCJCs_33);
    {
      SrcDefnsImp_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SrcDefnsImp_40, 0) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(1), SrcDefnsImp_40, 1) = ((MR_Box) (Var_76));
    }
  }
  else
  {
    MR_Word IntContexts_35;
    MR_Word SortedIntContexts_36;
    MR_Word TailContexts_155;
    MR_Word TailContexts_166;

    *AbsStdDefn_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbsStdMaybeDefn_17, (MR_Integer) 0))));
    if ((MaybeTypeDefn_122 == (MR_Word) ((MR_Unsigned) 0U)))
      TailContexts_166 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_178 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_122, (MR_Integer) 0))));
      MR_Word Var_179 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_178, (MR_Integer) 4))));

      {
        TailContexts_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailContexts_166, 0) = ((MR_Box) (Var_179));
        MR_hl_field(MR_mktag(1), TailContexts_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_117 == (MR_Word) ((MR_Unsigned) 0U)))
      TailContexts_155 = TailContexts_166;
    else
    {
      MR_Word TypeDefn_167 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_117, (MR_Integer) 0))));
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_167, (MR_Integer) 4))));

      {
        TailContexts_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TailContexts_155, 0) = ((MR_Box) (Var_168));
        MR_hl_field(MR_mktag(1), TailContexts_155, 1) = ((MR_Box) (TailContexts_166));
      }
    }
    if ((MaybeTypeDefn_112 == (MR_Word) ((MR_Unsigned) 0U)))
      IntContexts_35 = TailContexts_155;
    else
    {
      MR_Word TypeDefn_156 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_112, (MR_Integer) 0))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeDefn_156, (MR_Integer) 4))));

      {
        IntContexts_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IntContexts_35, 0) = ((MR_Box) (Var_157));
        MR_hl_field(MR_mktag(1), IntContexts_35, 1) = ((MR_Box) (TailContexts_155));
      }
    }
    mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntContexts_35, &SortedIntContexts_36);
    if ((SortedIntContexts_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_65;

      *Status_21 = (MR_Integer) 1;
      *ChosenMaybeDefnCJCs_23 = ImpMaybeDefnCJCs_20;
      Var_65 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbsStdDefn_22);
      {
        SrcDefnsInt_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SrcDefnsInt_39, 0) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(1), SrcDefnsInt_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      SrcDefnsImp_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[11]), ImpDefnsCJCs_33);
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
    }
    else
    {
      MR_Word FirstIntContext_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedIntContexts_36, (MR_Integer) 0))));
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Box conv8_STATE_VARIABLE_Specs_47;

      *Status_21 = (MR_Integer) 0;
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_60, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_5));
        MR_hl_field(MR_mktag(0), Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_60, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(MR_mktag(0), Var_60, 4) = ((MR_Box) (FirstIntContext_37));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_60, ImpDefnsCJCs_33, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv8_STATE_VARIABLE_Specs_47);
      *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_47));
      *ChosenMaybeDefnCJCs_23 = IntMaybeDefnCJCs_19;
      Var_62 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbsStdDefn_22);
      Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[12]), IntDefnsCJCs_32);
      {
        SrcDefnsInt_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SrcDefnsInt_39, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), SrcDefnsInt_39, 1) = ((MR_Box) (Var_63));
      }
      SrcDefnsImp_40 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *SrcDefns_24 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (SrcDefnsInt_39));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (SrcDefnsImp_40));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__7_62;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__701__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__7_62);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__7_62));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__7_68;

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__712__1_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_68);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_68));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_Word IntDefnsCJCs_32;
  MR_Word ImpDefnsCJCs_33;
  MR_Word MaybeTypeDefn_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 0))));
  MR_Word TailDefns_75;
  MR_Word MaybeTypeDefn_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 1))));
  MR_Word MaybeTypeDefns_78;
  MR_Word TailDefns_80;
  MR_Word MaybeTypeDefn_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntMaybeDefnCJCs_18, (MR_Integer) 2))));
  MR_Word MaybeTypeDefn_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 0))));
  MR_Word TailDefns_95;
  MR_Word MaybeTypeDefn_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 1))));
  MR_Word MaybeTypeDefns_98;
  MR_Word TailDefns_100;
  MR_Word MaybeTypeDefn_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ImpMaybeDefnCJCs_19, (MR_Integer) 2))));
  MR_Word MaybeTypeDefns_73;
  MR_Word MaybeTypeDefns_93;

  {
    MaybeTypeDefns_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_78, 0) = ((MR_Box) (MaybeTypeDefn_82));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_73, 0) = ((MR_Box) (MaybeTypeDefn_77));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_73, 1) = ((MR_Box) (MaybeTypeDefns_78));
  }
  if ((MaybeTypeDefn_82 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_80 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_82, (MR_Integer) 0))));

    {
      TailDefns_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_80, 0) = ((MR_Box) (TypeDefn_86));
      MR_hl_field(MR_mktag(1), TailDefns_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_77 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_75 = TailDefns_80;
  else
  {
    MR_Word TypeDefn_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_77, (MR_Integer) 0))));

    {
      TailDefns_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_75, 0) = ((MR_Box) (TypeDefn_81));
      MR_hl_field(MR_mktag(1), TailDefns_75, 1) = ((MR_Box) (TailDefns_80));
    }
  }
  if ((MaybeTypeDefn_72 == (MR_Word) ((MR_Unsigned) 0U)))
    IntDefnsCJCs_32 = TailDefns_75;
  else
  {
    MR_Word TypeDefn_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_72, (MR_Integer) 0))));

    {
      IntDefnsCJCs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 0) = ((MR_Box) (TypeDefn_76));
      MR_hl_field(MR_mktag(1), IntDefnsCJCs_32, 1) = ((MR_Box) (TailDefns_75));
    }
  }
  {
    MaybeTypeDefns_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_98, 0) = ((MR_Box) (MaybeTypeDefn_102));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_93, 0) = ((MR_Box) (MaybeTypeDefn_97));
    MR_hl_field(MR_mktag(1), MaybeTypeDefns_93, 1) = ((MR_Box) (MaybeTypeDefns_98));
  }
  if ((MaybeTypeDefn_102 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_100 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_102, (MR_Integer) 0))));

    {
      TailDefns_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_100, 0) = ((MR_Box) (TypeDefn_106));
      MR_hl_field(MR_mktag(1), TailDefns_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_97 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_95 = TailDefns_100;
  else
  {
    MR_Word TypeDefn_101 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_97, (MR_Integer) 0))));

    {
      TailDefns_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TailDefns_95, 0) = ((MR_Box) (TypeDefn_101));
      MR_hl_field(MR_mktag(1), TailDefns_95, 1) = ((MR_Box) (TailDefns_100));
    }
  }
  if ((MaybeTypeDefn_92 == (MR_Word) ((MR_Unsigned) 0U)))
    ImpDefnsCJCs_33 = TailDefns_95;
  else
  {
    MR_Word TypeDefn_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTypeDefn_92, (MR_Integer) 0))));

    {
      ImpDefnsCJCs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 0) = ((MR_Box) (TypeDefn_96));
      MR_hl_field(MR_mktag(1), ImpDefnsCJCs_33, 1) = ((MR_Box) (TailDefns_95));
    }
  }
  switch (DuSection_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_51;
        MR_Word Var_57;
        MR_Box conv1_STATE_VARIABLE_Specs_36;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_51, 4) = ((MR_Box) (DuDefn_15));
          MR_hl_field(MR_mktag(0), Var_51, 5) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(MR_mktag(0), Var_51, 6) = ((MR_Box) ((MR_String) "implementation"));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_51, IntDefnsCJCs_32, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv1_STATE_VARIABLE_Specs_36);
        *STATE_VARIABLE_Specs_36 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_36));
        if ((IntAbstractStdMaybeDefn_17 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Status_20 = (MR_Integer) 3;
          *SrcDefnsDuInt_23 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word IntAbstractStdDefn_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntAbstractStdMaybeDefn_17, (MR_Integer) 0))));
          MR_Word Var_55;

          *Status_20 = (MR_Integer) 2;
          Var_55 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_34);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsDuInt_23 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        *ChosenSectionCJCs_21 = (MR_Integer) 1;
        *ChosenMaybeDefnCJCs_22 = ImpMaybeDefnCJCs_19;
        Var_57 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsDuImp_24 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_45;
        MR_Word Var_49;
        MR_Box conv3_STATE_VARIABLE_Specs_36;

        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_2));
          MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(MR_mktag(0), Var_45, 4) = ((MR_Box) (DuDefn_15));
          MR_hl_field(MR_mktag(0), Var_45, 5) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(MR_mktag(0), Var_45, 6) = ((MR_Box) ((MR_String) "interface"));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_45, ImpDefnsCJCs_33, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv3_STATE_VARIABLE_Specs_36);
        *STATE_VARIABLE_Specs_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36));
        *Status_20 = (MR_Integer) 0;
        *ChosenSectionCJCs_21 = (MR_Integer) 0;
        *ChosenMaybeDefnCJCs_22 = IntMaybeDefnCJCs_18;
        Var_49 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsDuInt_23 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *SrcDefnsDuImp_24 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CheckedMap_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CheckedMap_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_CheckedMap_34;
  MR_Word conv0_STATE_VARIABLE_Specs_36;

  parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_CheckedMap_34));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_36));
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_Specs_16;

  parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_Specs_16);
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_Specs_16));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_FieldNameMap_35;

  parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_FieldNameMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_FieldNameMap_35));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TypeCtorCheckedMap_137;
  MR_Word conv0_STATE_VARIABLE_Specs_139;

  parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeCtorCheckedMap_137, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_139);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeCtorCheckedMap_137));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_139));
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

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_type_inst_mode_defns____Unify____decl_or_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_type_inst_mode_defns____Compare____decl_or_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_locn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_type_inst_mode_defns____Compare____field_name_locn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_type_inst_mode_defns____Compare____field_name_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_type_inst_mode_defns____Unify____field_name_of_type_ctor_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_type_inst_mode_defns____Compare____field_name_of_type_ctor_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__check_type_inst_mode_defns____Unify____maybe_insist_on_defn_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__check_type_inst_mode_defns____Compare____maybe_insist_on_defn_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__check_type_inst_mode_defns__init(void)
{
}

void mercury__parse_tree__check_type_inst_mode_defns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_decl_or_defn_0);
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
