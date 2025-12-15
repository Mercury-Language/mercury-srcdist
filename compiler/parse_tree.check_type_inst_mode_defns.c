/*
** Automatically generated from `check_type_inst_mode_defns.m'
** by the Mercury compiler,
** version rotd-2025-12-15
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign_enum.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_repn.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

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

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

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
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1492__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31);

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__935__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_36);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__834__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word AbsStdDefn_22,
  MR_String HeadVar__3_70,
  MR_String HeadVar__4_71,
  MR_Word HeadVar__5_99,
  MR_Word HeadVar__6_100,
  MR_Word * HeadVar__7_101);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__726__1_7_p_0(
  MR_Word TypeCtor_14,
  MR_Word DuDefn_15,
  MR_String HeadVar__3_47,
  MR_String HeadVar__4_48,
  MR_Word HeadVar__5_60,
  MR_Word HeadVar__6_61,
  MR_Word * HeadVar__7_62);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__737__1_7_p_0(
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

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__check_type_ctor_defns__500__1_1_f_0(
  MR_Word LambdaHeadVar__1_280);

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__report_not_enum_type_du__1058__1_1_f_0(
  MR_Word LambdaHeadVar__1_28);

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
  MR_Word TypeInfo_for_T1_73,
  MR_Word TypeInfo_for_T2_74,
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
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

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
  MR_Word TypeInfo_for_T1_75,
  MR_Word TypeInfo_for_T2_76,
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
  MR_Word InstCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

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
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

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
  MR_Word TypeInfo_for_T1_84,
  MR_Word TypeInfo_for_T2_85,
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_140,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_141,
  MR_Word STATE_VARIABLE_Specs_0_142,
  MR_Word * STATE_VARIABLE_Specs_143);

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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

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
parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NonEnumSNAs_0_2,
  MR_Word * STATE_VARIABLE_NonEnumSNAs_3);

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

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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


static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[151][2];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[28][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[1][1];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[8][7];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[3][12];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[5][5];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[4][11];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_8[5][10];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_9[7][8];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_10[1][2];

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_11[1][3];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[2][6];

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_13[12][4];




static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_1[151][2] = {
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
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It has this non-zero arity constructor:"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "It has these non-zero arity constructors:"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the Mercury definition of"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not an enumeration type, so"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "there must not be any"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations for it."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That Mercury definition is here."))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_enum"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for type"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is defined to be a subtype, so"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[35]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[24])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That subtype definition is here."))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[24])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since the Mercury"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[45]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is in the"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section,"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "any foreign type definition for it"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section as well."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[54]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That Mercury"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition for"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a Mercury definition or a Mercury declaration"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "without either"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since some foreign language definition"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[46])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is in the interface section,"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for it must be in the interface section as well."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "all other foreign language definitions"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That foreign definition in the interface"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a solver type such as"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be defined (as opposed to declared)"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only in the implementation section."))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: this declaration of"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "redundant,"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the type has a definition in the"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "section."))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "incompatible"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with the"))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition in the"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That definition is here."))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for the"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[107]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[111]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[113]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has this declaration, but"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it has no definition."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The original"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate foreign"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition in"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The original definition is here."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[125]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate occurrence"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the field name"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[129]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the function symbol"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the definition of the type constructor"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first occurrence of this field name"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "definition"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[137]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the inst has a"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[140]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "since the mode has a"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the mode"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[143]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row 146 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row 147 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row 148 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row 149 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row 150 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_2[28][3] = {
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
    ((MR_Box) (&parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[2])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[0])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_12[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[3])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_15)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  27 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[1])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 222U) },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_4[8][7] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[6]))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_10[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_5[3][12] = {
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_decl_or_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_6[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_7[4][11] = {
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_11[0])),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_8[5][10] = {
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_foreign_enum__parse_tree__prog_foreign_enum__type_ctor_info_for_fe_or_fee_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_9[7][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
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
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_10[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Integer parse_tree__check_type_inst_mode_defns_scalar_common_11[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_12[2][6] = {
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

static /* final */ const MR_Box parse_tree__check_type_inst_mode_defns_scalar_common_13[12][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[4])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[6])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[7])),
    ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__ti_c_java_csharp_1list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_c_java_csharp_1,
  { (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__one_or_more__ti_one_or_more_1parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_locn_0) }
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
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_foreign_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__parse_tree__prog_data__ti_type_details_foreign_1parse_tree__prog_data__type_ctor_info_generic_language_foreign_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_abstract_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_defn_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_tree234__pti_set_tree234_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__check_type_inst_mode_defns__parse_tree__maybe_error__pti_maybe1_2__plain_parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0__plain_list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &parse_tree__maybe_error__parse_tree__maybe_error__type_ctor_info_maybe1_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_checked_foreign_enum_0),
    (MR_PseudoTypeInfo) (&parse_tree__check_type_inst_mode_defns__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__set_ordlist__pti_set_ordlist_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__maybe__pti_maybe_1__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_type_defn_info_general_1__plain_parse_tree__prog_data__type_ctor_info_type_details_sub_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_sym_name_arity_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_inst_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_1 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__check_type_inst_mode_defns__parse_tree__prog_item__pti_item_mode_defn_info_general_1__pseudo_2 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_general_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 2) }
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

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_locn_0_0[1] = { &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_locn_0[1] = { &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_locn_0_0 };

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_locn_0[1] = { (MR_Integer) 0 };

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

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_stag_ordered_field_name_of_type_ctor_0_0[1] = { &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0 };

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

static const MR_DuFunctorDescPtr parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_name_ordered_field_name_of_type_ctor_0[1] = { &parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__du_functor_desc_field_name_of_type_ctor_0_0 };

static const MR_Integer parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__functor_number_map_field_name_of_type_ctor_0[1] = { (MR_Integer) 0 };

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
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_27, 4))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_28, 4))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_29, Var_30, Var_31);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_27,
  MR_Word LambdaHeadVar__2_28,
  MR_Word * LambdaHeadVar__3_29)
{
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_27, 5))));
  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_28, 5))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_29, Var_30, Var_31);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1492__1_3_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_31,
  MR_Word * HeadVar__3_32)
{
  MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_30, 4))));

  mercury__set__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (Var_34)), HeadVar__2_31, HeadVar__3_32);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(
  MR_Word TypeInfo_for_T_49,
  MR_Word LambdaHeadVar__1_29,
  MR_Word LambdaHeadVar__2_30,
  MR_Word * LambdaHeadVar__3_31)
{
  MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, 4))));
  MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__2_30, 4))));

  mercury__term_context____Compare____term_context_0_0(LambdaHeadVar__3_31, Var_32, Var_33);
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__935__1_2_p_0(
  MR_Word LeftOverEnums_17,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[0]), ((MR_Box) (LeftOverEnums_17)), ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__834__1_7_p_0(
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
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__726__1_7_p_0(
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
parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__737__1_7_p_0(
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
  MR_Word Var_19;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_68;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;

  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (DeclOrDefn_9));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[46])));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[44])));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (TypeCtor_8));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (MerSection_10));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[49])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[47])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  Var_34 = parse_tree__error_spec__color_as_correct_1_f_0(Var_35);
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[55])));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[53])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[52])));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
  }
  Var_50 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_51);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[51])), Var_49);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_44);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
  ForeignPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_28);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])));
  }
  {
    DuPieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DuPieces_15, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[56])));
    MR_hl_field(1, DuPieces_15, 1) = ((MR_Box) (Var_68));
  }
  Var_81 = ((MR_Word) ((MR_hl_field(0, ForeignDefn_12, 4))));
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, Var_80, 1) = ((MR_Box) (ForeignPieces_14));
  }
  Var_84 = ((MR_Word) ((MR_hl_field(0, MerDefn_11, 4))));
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) (DuPieces_15));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_mer_foreign_section_mismatch\'/7"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_79));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__check_type_ctor_defns__500__1_1_f_0(
  MR_Word LambdaHeadVar__1_280)
{
  MR_Word LambdaHeadVar__2_281 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_280, 3))));

  return LambdaHeadVar__2_281;
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__report_not_enum_type_du__1058__1_1_f_0(
  MR_Word LambdaHeadVar__1_28)
{
  MR_Word LambdaHeadVar__2_29;

  {
    LambdaHeadVar__2_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LambdaHeadVar__2_29, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, LambdaHeadVar__2_29, 1) = ((MR_Box) (LambdaHeadVar__1_28));
  }
  return LambdaHeadVar__2_29;
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

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
  MR_Word TypeInfo_for_T1_73,
  MR_Word TypeInfo_for_T2_74,
  MR_String Kind_7,
  MR_Word ModeCtor_8,
  MR_Word OrigModeDefn_9,
  MR_Word ModeDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word MainPieces_12;
  MR_Word Spec_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Kind_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[138])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[120])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  Var_22 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_23);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 25U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (ModeCtor_8));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
  }
  Var_38 = parse_tree__error_spec__color_as_subject_1_f_0(Var_39);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[121])), Var_37);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_32);
  MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])), Var_21);
  Var_58 = ((MR_Word) ((MR_hl_field(0, ModeDefn_10, 4))));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (MainPieces_12));
  }
  Var_61 = ((MR_Word) ((MR_hl_field(0, OrigModeDefn_9, 4))));
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[126])));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_mode_defn\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_56));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
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
  MR_Word STATE_VARIABLE_Specs_1_37;
  MR_Word STATE_VARIABLE_Specs_2_38;
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
    MR_Word AbstractDefns_88 = ((MR_Word) ((MR_hl_field(0, AllDefns_87, 0))));
    MR_Word EqvDefns_89 = ((MR_Word) ((MR_hl_field(0, AllDefns_87, 1))));
    MR_Word STATE_VARIABLE_Specs_1_91;

    if ((AbstractDefns_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_88, 1))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_88, 0))));

      if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeAbstractDefn_15, 0) = ((MR_Box) (Var_106));
        }
        STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_35;
      }
      else
      {
        MR_Word SortedModeDefns_98;
        MR_Word HeadModeDefn_99;
        MR_Word TailModeDefns_100;
        MR_Word Var_101;
        MR_Box conv2_HeadModeDefn_99;
        MR_Box conv4_STATE_VARIABLE_Specs_1_91;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[10]), AbstractDefns_88, &SortedModeDefns_98);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), SortedModeDefns_98, &conv2_HeadModeDefn_99, &TailModeDefns_100);
        HeadModeDefn_99 = ((MR_Word) (conv2_HeadModeDefn_99));
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeAbstractDefn_15, 0) = ((MR_Box) (HeadModeDefn_99));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_101, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3]));
          MR_hl_field(0, Var_101, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_2));
          MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_101, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(0, Var_101, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(0, Var_101, 5) = ((MR_Box) ((MR_String) "abstract mode"));
          MR_hl_field(0, Var_101, 6) = ((MR_Box) (ModeCtor_12));
          MR_hl_field(0, Var_101, 7) = ((MR_Box) (HeadModeDefn_99));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_101, TailModeDefns_100, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv4_STATE_VARIABLE_Specs_1_91);
        STATE_VARIABLE_Specs_1_91 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_91));
      }
    }
    if ((EqvDefns_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_1_91;
    }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(1, EqvDefns_89, 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, EqvDefns_89, 0))));

      if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeEqvDefn_16, 0) = ((MR_Box) (Var_116));
        }
        STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_1_91;
      }
      else
      {
        MR_Word SortedModeDefns_108;
        MR_Word HeadModeDefn_109;
        MR_Word TailModeDefns_110;
        MR_Word Var_111;
        MR_Box conv6_HeadModeDefn_109;
        MR_Box conv8_STATE_VARIABLE_Specs_1_37;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[11]), EqvDefns_89, &SortedModeDefns_108);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), SortedModeDefns_108, &conv6_HeadModeDefn_109, &TailModeDefns_110);
        HeadModeDefn_109 = ((MR_Word) (conv6_HeadModeDefn_109));
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeEqvDefn_16, 0) = ((MR_Box) (HeadModeDefn_109));
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_111, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3]));
          MR_hl_field(0, Var_111, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0_4));
          MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_111, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(0, Var_111, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(0, Var_111, 5) = ((MR_Box) ((MR_String) "mode"));
          MR_hl_field(0, Var_111, 6) = ((MR_Box) (ModeCtor_12));
          MR_hl_field(0, Var_111, 7) = ((MR_Box) (HeadModeDefn_109));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_111, TailModeDefns_110, ((MR_Box) (STATE_VARIABLE_Specs_1_91)), &conv8_STATE_VARIABLE_Specs_1_37);
        STATE_VARIABLE_Specs_1_37 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_1_37));
      }
    }
  }
  else
  {
    IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
    IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_0_35;
  }
  parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0(ImpModeDefnMap_11, ModeCtor_12, &ImpMaybeAbstractDefn_17, &ImpMaybeEqvDefn_18, STATE_VARIABLE_Specs_1_37, &STATE_VARIABLE_Specs_2_38);
  succeeded = (IntMaybeEqvDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    IntEqvDefn_19 = ((MR_Word) ((MR_hl_field(1, IntMaybeEqvDefn_16, 0))));
    {
      MR_Word SrcDefnsInt_23;
      MR_Word Var_39;

      EqvDefn_20 = IntEqvDefn_19;
      EqvWhere_21 = (MR_String) "interface";
      Status_22 = (MR_Integer) 0;
      Var_39 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(IntEqvDefn_19);
      {
        SrcDefnsInt_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsInt_23, 0) = ((MR_Box) (Var_39));
      }
      {
        SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_23));
        MR_hl_field(0, SrcDefns_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      EqvDefn_20 = ((MR_Word) ((MR_hl_field(1, ImpMaybeEqvDefn_18, 0))));
      EqvWhere_21 = (MR_String) "implementation";
      if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Status_22 = (MR_Integer) 2;
        SrcDefnsInt_62 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word IntAbstractDefn_26 = ((MR_Word) ((MR_hl_field(1, IntMaybeAbstractDefn_15, 0))));
        MR_Word Var_41;

        Status_22 = (MR_Integer) 1;
        Var_41 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_26);
        {
          SrcDefnsInt_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SrcDefnsInt_62, 0) = ((MR_Box) (Var_41));
        }
      }
      Var_42 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(EqvDefn_20);
      {
        SrcDefnsImp_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsImp_27, 0) = ((MR_Box) (Var_42));
      }
      {
        SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_62));
        MR_hl_field(0, SrcDefns_24, 1) = ((MR_Box) (SrcDefnsImp_27));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word StdDefn_28;
    MR_Word CheckedDefn_29;
    MR_Word Var_45;

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(ModeCtor_12, (MR_String) "definition", EqvWhere_21, ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_2_38, STATE_VARIABLE_Specs_36);
    Var_45 = parse_tree__item_util__wrap_eqv_mode_defn_1_f_0(EqvDefn_20);
    {
      StdDefn_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StdDefn_28, 0) = (MR_Box) ((MR_Unsigned) (Status_22));
      MR_hl_field(0, StdDefn_28, 1) = ((MR_Box) (Var_45));
    }
    {
      CheckedDefn_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CheckedDefn_29, 0) = ((MR_Box) (StdDefn_28));
      MR_hl_field(0, CheckedDefn_29, 1) = ((MR_Box) (SrcDefns_24));
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
      MR_Word ImpAbstractDefn_31 = ((MR_Word) ((MR_hl_field(1, ImpMaybeAbstractDefn_17, 0))));

      switch (InsistOnDefn_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(ModeCtor_12, ImpAbstractDefn_31, STATE_VARIABLE_Specs_2_38, STATE_VARIABLE_Specs_36);
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
              MR_hl_field(0, StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(0, StdDefn_79, 1) = ((MR_Box) (Var_55));
            }
            ImpDefn_32 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(ImpAbstractDefn_31);
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (ImpDefn_32));
            }
            {
              SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SrcDefns_78, 1) = ((MR_Box) (Var_57));
            }
            {
              CheckedDefn_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CheckedDefn_80, 0) = ((MR_Box) (StdDefn_79));
              MR_hl_field(0, CheckedDefn_80, 1) = ((MR_Box) (SrcDefns_78));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_80)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_2_38;
          }
          break;
      }
    }
  else
  {
    MR_Word STATE_VARIABLE_Specs_4_49;
    MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(1, IntMaybeAbstractDefn_15, 0))));

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(ModeCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_2_38, &STATE_VARIABLE_Specs_4_49);
    switch (InsistOnDefn_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_mode_4_p_0(ModeCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_4_49, STATE_VARIABLE_Specs_36);
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
            MR_hl_field(0, StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, StdDefn_66, 1) = ((MR_Box) (Var_50));
          }
          IntDefn_30 = parse_tree__item_util__wrap_abstract_mode_defn_1_f_0(IntAbstractDefn_74);
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (IntDefn_30));
          }
          {
            SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SrcDefns_65, 0) = ((MR_Box) (Var_51));
            MR_hl_field(0, SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
            MR_hl_field(0, CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_mode_ctor_checked_defn_0), ((MR_Box) (ModeCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_4_49;
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
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_38;

  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 25U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (ModeCtor_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_17 = parse_tree__error_spec__color_as_subject_1_f_0(Var_18);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[118])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[116])), Var_26);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_21);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[144])), Var_16);
  Var_38 = ((MR_Word) ((MR_hl_field(0, AbsModeDefn_6, 4))));
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_mode\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_mode_in_imp_6_p_0(
  MR_Word TypeCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  if ((MaybeImpAbstractDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  else
  {
    MR_Word ImpAbstractDefn_12 = ((MR_Word) ((MR_hl_field(1, MaybeImpAbstractDefn_10, 0))));
    MR_Word Pieces_13;
    MR_Word Spec_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_57;

    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 25U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
    Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (DeclOrDefn_8));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (Section_9));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[53])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[142])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_38);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])), Var_32);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_27);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])), Var_22);
    Var_57 = ((MR_Word) ((MR_hl_field(0, ImpAbstractDefn_12, 4))));
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_mode_in_imp\'/6"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) (MR_mkword(2, &parse_tree__check_type_inst_mode_defns_scalar_common_3[0])));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_57));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_mode_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_mode_defn__2106__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
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
    MR_Word AbstractDefns_13 = ((MR_Word) ((MR_hl_field(0, AllDefns_12, 0))));
    MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(0, AllDefns_12, 1))));
    MR_Word STATE_VARIABLE_Specs_1_18;

    if ((AbstractDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_18 = STATE_VARIABLE_Specs_0_15;
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_13, 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_13, 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
        }
        STATE_VARIABLE_Specs_1_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word SortedModeDefns_25;
        MR_Word HeadModeDefn_26;
        MR_Word TailModeDefns_27;
        MR_Word Var_28;
        MR_Box conv2_HeadModeDefn_26;
        MR_Box conv4_STATE_VARIABLE_Specs_1_18;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[8]), AbstractDefns_13, &SortedModeDefns_25);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), SortedModeDefns_25, &conv2_HeadModeDefn_26, &TailModeDefns_27);
        HeadModeDefn_26 = ((MR_Word) (conv2_HeadModeDefn_26));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadModeDefn_26));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_mode_defn_0));
          MR_hl_field(0, Var_28, 5) = ((MR_Box) ((MR_String) "abstract mode"));
          MR_hl_field(0, Var_28, 6) = ((MR_Box) (ModeCtor_8));
          MR_hl_field(0, Var_28, 7) = ((MR_Box) (HeadModeDefn_26));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[149]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, TailModeDefns_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_1_18);
        STATE_VARIABLE_Specs_1_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_18));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_1_18;
    }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 0))));

      if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
        }
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_1_18;
      }
      else
      {
        MR_Word SortedModeDefns_35;
        MR_Word HeadModeDefn_36;
        MR_Word TailModeDefns_37;
        MR_Word Var_38;
        MR_Box conv6_HeadModeDefn_36;
        MR_Box conv8_STATE_VARIABLE_Specs_16;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[9]), EqvDefns_14, &SortedModeDefns_35);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), SortedModeDefns_35, &conv6_HeadModeDefn_36, &TailModeDefns_37);
        HeadModeDefn_36 = ((MR_Word) (conv6_HeadModeDefn_36));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadModeDefn_36));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[3]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_mode_ctor_defns_for_duplicates_6_p_0_4));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(0, Var_38, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_defn_0));
          MR_hl_field(0, Var_38, 5) = ((MR_Box) ((MR_String) "mode"));
          MR_hl_field(0, Var_38, 6) = ((MR_Box) (ModeCtor_8));
          MR_hl_field(0, Var_38, 7) = ((MR_Box) (HeadModeDefn_36));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[150]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_38, TailModeDefns_37, ((MR_Box) (STATE_VARIABLE_Specs_1_18)), &conv8_STATE_VARIABLE_Specs_16);
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
  MR_Word TypeInfo_for_T1_75,
  MR_Word TypeInfo_for_T2_76,
  MR_String Kind_7,
  MR_Word InstCtor_8,
  MR_Word OrigInstDefn_9,
  MR_Word InstDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word MainPieces_12;
  MR_Word Spec_14;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;

  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (Kind_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[138])));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[120])));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
  }
  Var_22 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_23);
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (InstCtor_8));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
  }
  Var_38 = parse_tree__error_spec__color_as_subject_1_f_0(Var_39);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_38, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[121])), Var_37);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_32);
  MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[136])), Var_21);
  Var_58 = ((MR_Word) ((MR_hl_field(0, InstDefn_10, 5))));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (MainPieces_12));
  }
  Var_61 = ((MR_Word) ((MR_hl_field(0, OrigInstDefn_9, 5))));
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[126])));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_inst_defn\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_56));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_16 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_14));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
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
  MR_Word STATE_VARIABLE_Specs_1_37;
  MR_Word STATE_VARIABLE_Specs_2_38;
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
    MR_Word AbstractDefns_88 = ((MR_Word) ((MR_hl_field(0, AllDefns_87, 0))));
    MR_Word EqvDefns_89 = ((MR_Word) ((MR_hl_field(0, AllDefns_87, 1))));
    MR_Word STATE_VARIABLE_Specs_1_91;

    if ((AbstractDefns_88 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_35;
    }
    else
    {
      MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_88, 1))));
      MR_Word Var_106 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_88, 0))));

      if ((Var_105 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeAbstractDefn_15, 0) = ((MR_Box) (Var_106));
        }
        STATE_VARIABLE_Specs_1_91 = STATE_VARIABLE_Specs_0_35;
      }
      else
      {
        MR_Word SortedInstDefns_98;
        MR_Word HeadInstDefn_99;
        MR_Word TailInstDefns_100;
        MR_Word Var_101;
        MR_Box conv2_HeadInstDefn_99;
        MR_Box conv4_STATE_VARIABLE_Specs_1_91;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[6]), AbstractDefns_88, &SortedInstDefns_98);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), SortedInstDefns_98, &conv2_HeadInstDefn_99, &TailInstDefns_100);
        HeadInstDefn_99 = ((MR_Word) (conv2_HeadInstDefn_99));
        {
          IntMaybeAbstractDefn_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeAbstractDefn_15, 0) = ((MR_Box) (HeadInstDefn_99));
        }
        {
          Var_101 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_101, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2]));
          MR_hl_field(0, Var_101, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_2));
          MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_101, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(0, Var_101, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(0, Var_101, 5) = ((MR_Box) ((MR_String) "abstract inst"));
          MR_hl_field(0, Var_101, 6) = ((MR_Box) (InstCtor_12));
          MR_hl_field(0, Var_101, 7) = ((MR_Box) (HeadInstDefn_99));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_101, TailInstDefns_100, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv4_STATE_VARIABLE_Specs_1_91);
        STATE_VARIABLE_Specs_1_91 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_91));
      }
    }
    if ((EqvDefns_89 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_1_91;
    }
    else
    {
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(1, EqvDefns_89, 1))));
      MR_Word Var_116 = ((MR_Word) ((MR_hl_field(1, EqvDefns_89, 0))));

      if ((Var_115 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeEqvDefn_16, 0) = ((MR_Box) (Var_116));
        }
        STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_1_91;
      }
      else
      {
        MR_Word SortedInstDefns_108;
        MR_Word HeadInstDefn_109;
        MR_Word TailInstDefns_110;
        MR_Word Var_111;
        MR_Box conv6_HeadInstDefn_109;
        MR_Box conv8_STATE_VARIABLE_Specs_1_37;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[7]), EqvDefns_89, &SortedInstDefns_108);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), SortedInstDefns_108, &conv6_HeadInstDefn_109, &TailInstDefns_110);
        HeadInstDefn_109 = ((MR_Word) (conv6_HeadInstDefn_109));
        {
          IntMaybeEqvDefn_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, IntMaybeEqvDefn_16, 0) = ((MR_Box) (HeadInstDefn_109));
        }
        {
          Var_111 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_111, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2]));
          MR_hl_field(0, Var_111, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0_4));
          MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_111, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(0, Var_111, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(0, Var_111, 5) = ((MR_Box) ((MR_String) "inst"));
          MR_hl_field(0, Var_111, 6) = ((MR_Box) (InstCtor_12));
          MR_hl_field(0, Var_111, 7) = ((MR_Box) (HeadInstDefn_109));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_111, TailInstDefns_110, ((MR_Box) (STATE_VARIABLE_Specs_1_91)), &conv8_STATE_VARIABLE_Specs_1_37);
        STATE_VARIABLE_Specs_1_37 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_1_37));
      }
    }
  }
  else
  {
    IntMaybeAbstractDefn_15 = (MR_Word) ((MR_Unsigned) 0U);
    IntMaybeEqvDefn_16 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_1_37 = STATE_VARIABLE_Specs_0_35;
  }
  parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0(ImpInstDefnMap_11, InstCtor_12, &ImpMaybeAbstractDefn_17, &ImpMaybeEqvDefn_18, STATE_VARIABLE_Specs_1_37, &STATE_VARIABLE_Specs_2_38);
  succeeded = (IntMaybeEqvDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    IntEqvDefn_19 = ((MR_Word) ((MR_hl_field(1, IntMaybeEqvDefn_16, 0))));
    {
      MR_Word SrcDefnsInt_23;
      MR_Word Var_39;

      EqvDefn_20 = IntEqvDefn_19;
      EqvWhere_21 = (MR_String) "interface";
      Status_22 = (MR_Integer) 0;
      Var_39 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(IntEqvDefn_19);
      {
        SrcDefnsInt_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsInt_23, 0) = ((MR_Box) (Var_39));
      }
      {
        SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_23));
        MR_hl_field(0, SrcDefns_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      EqvDefn_20 = ((MR_Word) ((MR_hl_field(1, ImpMaybeEqvDefn_18, 0))));
      EqvWhere_21 = (MR_String) "implementation";
      if ((IntMaybeAbstractDefn_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Status_22 = (MR_Integer) 2;
        SrcDefnsInt_62 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word IntAbstractDefn_26 = ((MR_Word) ((MR_hl_field(1, IntMaybeAbstractDefn_15, 0))));
        MR_Word Var_41;

        Status_22 = (MR_Integer) 1;
        Var_41 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_26);
        {
          SrcDefnsInt_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SrcDefnsInt_62, 0) = ((MR_Box) (Var_41));
        }
      }
      Var_42 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(EqvDefn_20);
      {
        SrcDefnsImp_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsImp_27, 0) = ((MR_Box) (Var_42));
      }
      {
        SrcDefns_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_24, 0) = ((MR_Box) (SrcDefnsInt_62));
        MR_hl_field(0, SrcDefns_24, 1) = ((MR_Box) (SrcDefnsImp_27));
      }
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word StdDefn_28;
    MR_Word CheckedDefn_29;
    MR_Word Var_45;

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(InstCtor_12, (MR_String) "definition", EqvWhere_21, ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_2_38, STATE_VARIABLE_Specs_36);
    Var_45 = parse_tree__item_util__wrap_eqv_inst_defn_1_f_0(EqvDefn_20);
    {
      StdDefn_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, StdDefn_28, 0) = (MR_Box) ((MR_Unsigned) (Status_22));
      MR_hl_field(0, StdDefn_28, 1) = ((MR_Box) (Var_45));
    }
    {
      CheckedDefn_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CheckedDefn_29, 0) = ((MR_Box) (StdDefn_28));
      MR_hl_field(0, CheckedDefn_29, 1) = ((MR_Box) (SrcDefns_24));
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
      MR_Word ImpAbstractDefn_31 = ((MR_Word) ((MR_hl_field(1, ImpMaybeAbstractDefn_17, 0))));

      switch (InsistOnDefn_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(InstCtor_12, ImpAbstractDefn_31, STATE_VARIABLE_Specs_2_38, STATE_VARIABLE_Specs_36);
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
              MR_hl_field(0, StdDefn_79, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              MR_hl_field(0, StdDefn_79, 1) = ((MR_Box) (Var_55));
            }
            ImpDefn_32 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(ImpAbstractDefn_31);
            {
              Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_57, 0) = ((MR_Box) (ImpDefn_32));
            }
            {
              SrcDefns_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SrcDefns_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, SrcDefns_78, 1) = ((MR_Box) (Var_57));
            }
            {
              CheckedDefn_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, CheckedDefn_80, 0) = ((MR_Box) (StdDefn_79));
              MR_hl_field(0, CheckedDefn_80, 1) = ((MR_Box) (SrcDefns_78));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_80)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
            *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_2_38;
          }
          break;
      }
    }
  else
  {
    MR_Word STATE_VARIABLE_Specs_4_49;
    MR_Word IntAbstractDefn_74 = ((MR_Word) ((MR_hl_field(1, IntMaybeAbstractDefn_15, 0))));

    parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(InstCtor_12, (MR_String) "declaration", (MR_String) "interface", ImpMaybeAbstractDefn_17, STATE_VARIABLE_Specs_2_38, &STATE_VARIABLE_Specs_4_49);
    switch (InsistOnDefn_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          parse_tree__check_type_inst_mode_defns__report_declared_but_undefined_inst_4_p_0(InstCtor_12, IntAbstractDefn_74, STATE_VARIABLE_Specs_4_49, STATE_VARIABLE_Specs_36);
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
            MR_hl_field(0, StdDefn_66, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(0, StdDefn_66, 1) = ((MR_Box) (Var_50));
          }
          IntDefn_30 = parse_tree__item_util__wrap_abstract_inst_defn_1_f_0(IntAbstractDefn_74);
          {
            Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_51, 0) = ((MR_Box) (IntDefn_30));
          }
          {
            SrcDefns_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SrcDefns_65, 0) = ((MR_Box) (Var_51));
            MR_hl_field(0, SrcDefns_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, CheckedDefn_67, 0) = ((MR_Box) (StdDefn_66));
            MR_hl_field(0, CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_65));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0), ((MR_Box) (InstCtor_12)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_CheckedMap_0_33, STATE_VARIABLE_CheckedMap_34);
          *STATE_VARIABLE_Specs_36 = STATE_VARIABLE_Specs_4_49;
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
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_38;

  {
    Var_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_19, 0) = ((MR_Box) ((MR_Unsigned) 23U));
    MR_hl_field(3, Var_19, 1) = ((MR_Box) (InstCtor_5));
  }
  {
    Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_18, 0) = ((MR_Box) (Var_19));
    MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_17 = parse_tree__error_spec__color_as_subject_1_f_0(Var_18);
  Var_27 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[118])));
  Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[116])), Var_26);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_21);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[141])), Var_16);
  Var_38 = ((MR_Word) ((MR_hl_field(0, AbsInstDefn_6, 5))));
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_declared_but_undefined_inst\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Var_38));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_inst_in_imp_6_p_0(
  MR_Word InstCtor_7,
  MR_String DeclOrDefn_8,
  MR_String Section_9,
  MR_Word MaybeImpAbstractDefn_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  if ((MaybeImpAbstractDefn_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
  else
  {
    MR_Word ImpAbstractDefn_12 = ((MR_Word) ((MR_hl_field(1, MaybeImpAbstractDefn_10, 0))));
    MR_Word Pieces_13;
    MR_Word Spec_15;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_27;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_57;

    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 23U));
      MR_hl_field(3, Var_25, 1) = ((MR_Box) (InstCtor_7));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
    Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    {
      Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_42, 1) = ((MR_Box) (DeclOrDefn_8));
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (Section_9));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[53])));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[139])));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
    }
    Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_38);
    Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])), Var_32);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_27);
    Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])), Var_22);
    Var_57 = ((MR_Word) ((MR_hl_field(0, ImpAbstractDefn_12, 5))));
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_inst_in_imp\'/6"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) (MR_mkword(2, &parse_tree__check_type_inst_mode_defns_scalar_common_3[0])));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_57));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_29);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_inst_defn_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_16);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_inst_defn__1896__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_29);
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
    MR_Word AbstractDefns_13 = ((MR_Word) ((MR_hl_field(0, AllDefns_12, 0))));
    MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(0, AllDefns_12, 1))));
    MR_Word STATE_VARIABLE_Specs_1_18;

    if ((AbstractDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AbstractMaybeDefn_9 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_18 = STATE_VARIABLE_Specs_0_15;
    }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_13, 1))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(1, AbstractDefns_13, 0))));

      if ((Var_32 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_33));
        }
        STATE_VARIABLE_Specs_1_18 = STATE_VARIABLE_Specs_0_15;
      }
      else
      {
        MR_Word SortedInstDefns_25;
        MR_Word HeadInstDefn_26;
        MR_Word TailInstDefns_27;
        MR_Word Var_28;
        MR_Box conv2_HeadInstDefn_26;
        MR_Box conv4_STATE_VARIABLE_Specs_1_18;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[4]), AbstractDefns_13, &SortedInstDefns_25);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), SortedInstDefns_25, &conv2_HeadInstDefn_26, &TailInstDefns_27);
        HeadInstDefn_26 = ((MR_Word) (conv2_HeadInstDefn_26));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *AbstractMaybeDefn_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadInstDefn_26));
        }
        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_no_inst_defn_0));
          MR_hl_field(0, Var_28, 5) = ((MR_Box) ((MR_String) "abstract inst"));
          MR_hl_field(0, Var_28, 6) = ((MR_Box) (InstCtor_8));
          MR_hl_field(0, Var_28, 7) = ((MR_Box) (HeadInstDefn_26));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[147]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, TailInstDefns_27, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv4_STATE_VARIABLE_Specs_1_18);
        STATE_VARIABLE_Specs_1_18 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_18));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *EqvMaybeDefn_10 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_1_18;
    }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 0))));

      if ((Var_42 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
        }
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_1_18;
      }
      else
      {
        MR_Word SortedInstDefns_35;
        MR_Word HeadInstDefn_36;
        MR_Word TailInstDefns_37;
        MR_Word Var_38;
        MR_Box conv6_HeadInstDefn_36;
        MR_Box conv8_STATE_VARIABLE_Specs_16;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[5]), EqvDefns_14, &SortedInstDefns_35);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), SortedInstDefns_35, &conv6_HeadInstDefn_36, &TailInstDefns_37);
        HeadInstDefn_36 = ((MR_Word) (conv6_HeadInstDefn_36));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *EqvMaybeDefn_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (HeadInstDefn_36));
        }
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[2]));
          MR_hl_field(0, Var_38, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_inst_ctor_defns_for_duplicates_6_p_0_4));
          MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 5));
          MR_hl_field(0, Var_38, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(0, Var_38, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_defn_0));
          MR_hl_field(0, Var_38, 5) = ((MR_Box) ((MR_String) "inst"));
          MR_hl_field(0, Var_38, 6) = ((MR_Box) (InstCtor_8));
          MR_hl_field(0, Var_38, 7) = ((MR_Box) (HeadInstDefn_36));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[148]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_38, TailInstDefns_37, ((MR_Box) (STATE_VARIABLE_Specs_1_18)), &conv8_STATE_VARIABLE_Specs_16);
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
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_String FieldName_10 = ((MR_String) ((MR_hl_field(0, FieldNameTypeCtor_6, 0))));
  MR_Word TypeCtor_11 = ((MR_Word) ((MR_hl_field(0, FieldNameTypeCtor_6, 1))));
  MR_Word FirstContext_12 = ((MR_Word) ((MR_hl_field(0, FirstFNLocn_7, 0))));
  MR_String FirstCtorName_13 = ((MR_String) ((MR_hl_field(0, FirstFNLocn_7, 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, FNLocn_8, 0))));
  MR_String CtorName_15 = ((MR_String) ((MR_hl_field(0, FNLocn_8, 1))));
  MR_Word InitPieces_16;
  MR_Word CtorPieces_17;
  MR_Word MainPieces_18;
  MR_Word Spec_20;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_33;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;

  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[128])));
  {
    Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_40, 1) = ((MR_Box) (FieldName_10));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_38 = parse_tree__error_spec__color_as_subject_1_f_0(Var_39);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[130])), Var_38);
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_33);
  InitPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])), Var_27);
  succeeded = (strcmp(CtorName_15, FirstCtorName_13) == 0);
  if (succeeded)
  {
    MR_Word Var_44;
    MR_Word Var_45;

    {
      Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_45, 1) = ((MR_Box) (FirstCtorName_13));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CtorPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CtorPieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[131])));
      MR_hl_field(1, CtorPieces_17, 1) = ((MR_Box) (Var_44));
    }
  }
  else
    CtorPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (TypeCtor_11));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[132])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CtorPieces_17, Var_48);
  MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InitPieces_16, Var_47);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Context_14));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (MainPieces_18));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (FirstContext_12));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[134])));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Spec_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_field_name\'/5"));
    MR_hl_field(2, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_20, 3) = ((MR_Box) (Var_70));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
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
  MR_Word conv0_STATE_VARIABLE_Specs_22;

  parse_tree__check_type_inst_mode_defns__report_duplicate_field_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_22));
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
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(1, SortedFNLocns_9, 1))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, SortedFNLocns_9, 0))));

    if ((Var_26 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    else
    {
      MR_Word Var_20;
      MR_Box conv1_STATE_VARIABLE_Specs_16;

      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[6]));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__report_any_duplicate_field_names_4_p_0_1));
        MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_20, 3) = ((MR_Box) (FieldNameTypeCtor_5));
        MR_hl_field(0, Var_20, 4) = ((MR_Box) (Var_27));
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
  MR_Word MaybeCtorFieldName_10 = ((MR_Word) ((MR_hl_field(0, CtorArg_8, 0))));

  if ((MaybeCtorFieldName_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_FieldNameMap_24 = STATE_VARIABLE_FieldNameMap_0_23;
  else
  {
    MR_Word CtorFieldName_13 = ((MR_Word) ((MR_hl_field(1, MaybeCtorFieldName_10, 0))));
    MR_Word FieldSymName_14 = ((MR_Word) ((MR_hl_field(0, CtorFieldName_13, 0))));
    MR_Word FieldNameContext_15 = ((MR_Word) ((MR_hl_field(0, CtorFieldName_13, 1))));
    MR_String FieldName_16;
    MR_Word FieldNameTypeCtor_17;
    MR_Word FNLocn_18;
    MR_Word OoMFNLocns0_19;
    MR_Box conv0_OoMFNLocns0_19;

    FieldName_16 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldSymName_14);
    {
      FieldNameTypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldNameTypeCtor_17, 0) = ((MR_Box) (FieldName_16));
      MR_hl_field(0, FieldNameTypeCtor_17, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      FNLocn_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FNLocn_18, 0) = ((MR_Box) (FieldNameContext_15));
      MR_hl_field(0, FNLocn_18, 1) = ((MR_Box) (CtorName_7));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), STATE_VARIABLE_FieldNameMap_0_23, ((MR_Box) (FieldNameTypeCtor_17)), &conv0_OoMFNLocns0_19);
    if (succeeded)
    {
      OoMFNLocns0_19 = ((MR_Word) (conv0_OoMFNLocns0_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word HeadFNLocn_20 = ((MR_Word) ((MR_hl_field(0, OoMFNLocns0_19, 0))));
      MR_Word TailFNLocns_21 = ((MR_Word) ((MR_hl_field(0, OoMFNLocns0_19, 1))));
      MR_Word OoMFNLocns_22;
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_25, 0) = ((MR_Box) (HeadFNLocn_20));
        MR_hl_field(1, Var_25, 1) = ((MR_Box) (TailFNLocns_21));
      }
      {
        OoMFNLocns_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMFNLocns_22, 0) = ((MR_Box) (FNLocn_18));
        MR_hl_field(0, OoMFNLocns_22, 1) = ((MR_Box) (Var_25));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), ((MR_Box) (FieldNameTypeCtor_17)), ((MR_Box) (OoMFNLocns_22)), STATE_VARIABLE_FieldNameMap_0_23, STATE_VARIABLE_FieldNameMap_24);
    }
    else
    {
      MR_Word OoMFNLocns_29;

      {
        OoMFNLocns_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, OoMFNLocns_29, 0) = ((MR_Box) (FNLocn_18));
        MR_hl_field(0, OoMFNLocns_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

  parse_tree__check_type_inst_mode_defns__add_data_ctor_arg_to_field_name_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_24);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FieldNameMap_24));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word Ctor_6,
  MR_Word STATE_VARIABLE_FieldNameMap_0_15,
  MR_Word * STATE_VARIABLE_FieldNameMap_16)
{
  MR_Word CtorSymName_10 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 2))));
  MR_Word CtorArgs_11 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 3))));
  MR_String CtorName_14;
  MR_Word Var_17;
  MR_Box conv1_STATE_VARIABLE_FieldNameMap_16;

  CtorName_14 = mdbcomp__sym_name__unqualify_name_1_f_0(CtorSymName_10);
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[5]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (TypeCtor_5));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (CtorName_14));
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

  parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FieldNameMap_16);
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

  parse_tree__check_type_inst_mode_defns__add_data_ctor_to_field_name_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FieldNameMap_16);
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
    MR_Word CheckedStdDefn_10 = ((MR_Word) ((MR_hl_field(1, CheckedDefn_6, 0))));

    switch (MR_tag((MR_Word) CheckedStdDefn_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubDefn_29 = ((MR_Word) ((MR_hl_field(1, CheckedStdDefn_10, 1))));
          MR_Word DetailsSub_30 = ((MR_Word) ((MR_hl_field(0, SubDefn_29, 2))));
          MR_Word OoMCtors_58 = ((MR_Word) ((MR_hl_field(0, DetailsSub_30, 1))));
          MR_Word HeadCtor_59 = ((MR_Word) ((MR_hl_field(0, OoMCtors_58, 0))));
          MR_Word TailCtors_60 = ((MR_Word) ((MR_hl_field(0, OoMCtors_58, 1))));
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Box conv3_STATE_VARIABLE_FieldNameMap_35;

          {
            Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[5]));
            MR_hl_field(0, Var_61, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_2));
            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_61, 3) = ((MR_Box) (TypeCtor_5));
          }
          {
            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_62, 0) = ((MR_Box) (HeadCtor_59));
            MR_hl_field(1, Var_62, 1) = ((MR_Box) (TailCtors_60));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), Var_61, Var_62, ((MR_Box) (STATE_VARIABLE_FieldNameMap_0_34)), &conv3_STATE_VARIABLE_FieldNameMap_35);
          *STATE_VARIABLE_FieldNameMap_35 = ((MR_Word) (conv3_STATE_VARIABLE_FieldNameMap_35));
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_FieldNameMap_35 = STATE_VARIABLE_FieldNameMap_0_34;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, CheckedStdDefn_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word DuDefn_23 = ((MR_Word) ((MR_hl_field(3, CheckedStdDefn_10, 2))));
              MR_Word DetailsDu_25 = ((MR_Word) ((MR_hl_field(0, DuDefn_23, 2))));
              MR_Word OoMCtors_26 = ((MR_Word) ((MR_hl_field(0, DetailsDu_25, 0))));
              MR_Word HeadCtor_32 = ((MR_Word) ((MR_hl_field(0, OoMCtors_26, 0))));
              MR_Word TailCtors_33 = ((MR_Word) ((MR_hl_field(0, OoMCtors_26, 1))));
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Box conv1_STATE_VARIABLE_FieldNameMap_35;

              {
                Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_36, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[5]));
                MR_hl_field(0, Var_36, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__add_type_ctor_to_field_name_map_4_p_0_1));
                MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_36, 3) = ((MR_Box) (TypeCtor_5));
              }
              {
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (HeadCtor_32));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) (TailCtors_33));
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
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_String Var_35;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;

  {
    Var_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_29, 0) = ((MR_Box) (TypeOrEnum_8));
  }
  Var_35 = libs__globals__foreign_language_string_1_f_0(Lang_10);
  {
    Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_34, 0) = ((MR_Box) (Var_35));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[124])));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[123])));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_28));
  }
  Var_24 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_25);
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_45, 1) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
  }
  Var_43 = parse_tree__error_spec__color_as_subject_1_f_0(Var_44);
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[121])), Var_42);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_37);
  MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])), Var_23);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (Context_12));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (MainPieces_14));
  }
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (LeastContext_11));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[126])));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_63));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_foreign_defn\'/7"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_61));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
  }
}

static MR_Word MR_CALL 
parse_tree__check_type_inst_mode_defns__project_foreign_enum_context_1_f_0(
  MR_Word ForeignEnum_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, ForeignEnum_3, 3))));

  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__compare_foreign_enum_infos_by_context_3_p_0(
  MR_Word ForeignEnumA_4,
  MR_Word ForeignEnumB_5,
  MR_Word * Cmp_6)
{
  MR_Word ContextA_7 = ((MR_Word) ((MR_hl_field(0, ForeignEnumA_4, 3))));
  MR_Word ContextB_8 = ((MR_Word) ((MR_hl_field(0, ForeignEnumB_5, 3))));

  mercury__term_context____Compare____term_context_0_0(Cmp_6, ContextA_7, ContextB_8);
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(
  MR_Word TypeInfo_for_T1_84,
  MR_Word TypeInfo_for_T2_85,
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
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_57;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;

  switch (DeclOrDefn_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        DeclOrDefnWord_14 = (MR_String) "declaration";
        SeverityWord_15 = (MR_String) "Warning";
        Severity_16 = (MR_Word) (MR_mkword(2, &parse_tree__check_type_inst_mode_defns_scalar_common_3[0]));
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
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) (SeverityWord_15));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[119])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (Kind_9));
  }
  {
    Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_37, 1) = ((MR_Box) (DeclOrDefnWord_14));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[120])));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
  }
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_31);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (TypeCtor_10));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
  }
  Var_45 = parse_tree__error_spec__color_as_subject_1_f_0(Var_46);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[121])), Var_44);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_39);
  MainPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_29);
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])));
  }
  {
    LeastPieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LeastPieces_18, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[122])));
    MR_hl_field(1, LeastPieces_18, 1) = ((MR_Box) (Var_57));
  }
  Var_69 = ((MR_Word) ((MR_hl_field(0, TypeDefn_12, 4))));
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (MainPieces_17));
  }
  Var_72 = ((MR_Word) ((MR_hl_field(0, OrigTypeDefn_11, 4))));
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (LeastPieces_18));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
  }
  {
    Spec_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_duplicate_type_decl_or_defn\'/7"));
    MR_hl_field(2, Spec_19, 1) = ((MR_Box) (Severity_16));
    MR_hl_field(2, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_19, 3) = ((MR_Box) (Var_67));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_21 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
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
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_46;

  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (UndefOrUndecl_7));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[112])));
  }
  Var_25 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_26);
  {
    Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_35, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])));
  }
  Var_33 = parse_tree__error_spec__color_as_subject_1_f_0(Var_34);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_25, Var_32);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[110])), Var_24);
  Var_46 = ((MR_Word) ((MR_hl_field(0, Enum_8, 3))));
  {
    Spec_11 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_foreign_enum_for_undefined_type\'/5"));
    MR_hl_field(0, Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(0, Spec_11, 3) = ((MR_Box) (Var_46));
    MR_hl_field(0, Spec_11, 4) = ((MR_Box) (Pieces_10));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_13 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
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
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;

  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (TypeCtor_8));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
  Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[97])));
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) (Kind_10));
  }
  {
    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_54, 1) = ((MR_Box) (Section_11));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[104])));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[98])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
  Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])), Var_39);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
  MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[103])), Var_29);
  Var_71 = ((MR_Word) ((MR_hl_field(0, Enum_12, 3))));
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_70, 1) = ((MR_Box) (MainPieces_14));
  }
  {
    Var_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_73, 0) = ((MR_Box) (UsedContext_9));
    MR_hl_field(0, Var_73, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[106])));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
  }
  {
    Spec_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_incompatible_foreign_enum\'/7"));
    MR_hl_field(2, Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_16, 3) = ((MR_Box) (Var_69));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
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
    MR_Word DefnContext_18 = ((MR_Word) ((MR_hl_field(1, MaybeDefnContext_16, 0))));
    MR_Word MainPieces_19;
    MR_Word UsedPieces_20;
    MR_Word Spec_21;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_69;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;

    {
      Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_28, 1) = ((MR_Box) (DeclOrDefn_15));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[46])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[95])));
      MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (TypeCtor_10));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_34 = parse_tree__error_spec__color_as_subject_1_f_0(Var_35);
    Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[97])));
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (Kind_12));
    }
    {
      Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_55, 1) = ((MR_Box) (SectionDeclOrDefn_14));
    }
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (Section_13));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[53])));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[98])));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
    }
    Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_49);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])), Var_43);
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, Var_38);
    MainPieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_33);
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[58])));
    }
    {
      UsedPieces_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, UsedPieces_20, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[99])));
      MR_hl_field(1, UsedPieces_20, 1) = ((MR_Box) (Var_69));
    }
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (DefnContext_18));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) (MainPieces_19));
    }
    {
      Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_83, 0) = ((MR_Box) (UsedContext_11));
      MR_hl_field(0, Var_83, 1) = ((MR_Box) (UsedPieces_20));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_82));
    }
    {
      Spec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_incompatible_type_decl_or_defn\'/9"));
      MR_hl_field(2, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(2, Spec_21, 3) = ((MR_Box) (Var_80));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
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
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;

  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[77])));
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[73])), Var_32);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_27);
  ImpPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[71])), Var_22);
  Var_57 = ((MR_Word) ((MR_hl_field(0, ImpForeignDefn_8, 4))));
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (ImpPieces_10));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (IntForeignContext_7));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[79])));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.foreign_int_report_any_foreign_defn_in_imp\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_55));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_50;

  {
    Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_25, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_25, 1) = ((MR_Box) (TypeCtor_5));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_23 = parse_tree__error_spec__color_as_subject_1_f_0(Var_24);
  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[67])));
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_25));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[69])));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[68])));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
  }
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_36);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_27);
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[63])), Var_22);
  Var_50 = ((MR_Word) ((MR_hl_field(0, ForeignDefn_6, 4))));
  {
    Spec_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_9, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_foreign_type_without_declaration\'/4"));
    MR_hl_field(0, Spec_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_9, 2) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(0, Spec_9, 3) = ((MR_Box) (Var_50));
    MR_hl_field(0, Spec_9, 4) = ((MR_Box) (Pieces_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_11 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
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
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;

  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_20 = parse_tree__error_spec__color_as_subject_1_f_0(Var_21);
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[43])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[36])), Var_29);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_24);
  EnumPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])), Var_19);
  Var_54 = ((MR_Word) ((MR_hl_field(0, Enum_8, 3))));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (EnumPieces_10));
  }
  Var_57 = ((MR_Word) ((MR_hl_field(0, SubTypeDefn_7, 4))));
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[41])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.subtype_report_any_foreign_enum\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_52));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_24;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;

  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_20 = parse_tree__error_spec__color_as_subject_1_f_0(Var_21);
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[39])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[36])), Var_29);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_20, Var_24);
  ForeignPieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[34])), Var_19);
  Var_54 = ((MR_Word) ((MR_hl_field(0, Foreign_8, 4))));
  {
    Var_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_53, 1) = ((MR_Box) (ForeignPieces_10));
  }
  Var_57 = ((MR_Word) ((MR_hl_field(0, SubTypeDefn_7, 4))));
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[41])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.subtype_report_any_foreign_type\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_52));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
  }
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_22(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv40_STATE_VARIABLE_Specs_13;

  parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv40_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv40_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_21(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv38_STATE_VARIABLE_Specs_13;

  parse_tree__check_type_inst_mode_defns__report_foreign_enum_for_undefined_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv38_STATE_VARIABLE_Specs_13);
  *wrapper_arg_3 = ((MR_Box) (conv38_STATE_VARIABLE_Specs_13));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_20(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv36_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv36_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv36_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_19(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv34_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv34_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv34_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv32_STATE_VARIABLE_Specs_18;

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv32_STATE_VARIABLE_Specs_18);
  *wrapper_arg_3 = ((MR_Box) (conv32_STATE_VARIABLE_Specs_18));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv30_STATE_VARIABLE_Specs_23;

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv30_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv30_STATE_VARIABLE_Specs_23));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_16(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv28_HeadVar__2_2;

  conv28_HeadVar__2_2 = parse_tree__item_util__wrap_foreign_type_defn_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv28_HeadVar__2_2));
  return wrapper_arg_2;
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

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv25_STATE_VARIABLE_Specs_26;

  parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv25_STATE_VARIABLE_Specs_26);
  *wrapper_arg_3 = ((MR_Box) (conv25_STATE_VARIABLE_Specs_26));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv24_LambdaHeadVar__2_281;

  conv24_LambdaHeadVar__2_281 = parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__check_type_ctor_defns__500__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv24_LambdaHeadVar__2_281));
  return wrapper_arg_2;
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv22_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_enum_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv20_STATE_VARIABLE_Specs_14);
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

  parse_tree__check_type_inst_mode_defns__subtype_report_any_foreign_type_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv18_STATE_VARIABLE_Specs_14);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv16_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__report_incompatible_foreign_enum_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_23);
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

  parse_tree__check_type_inst_mode_defns__report_any_incompatible_type_decl_or_defn_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) ((MR_hl_field(0, closure, 7)))), ((MR_String) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Specs_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_23));
}

static void MR_CALL 
parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(
  MR_Word InsistOnDefn_10,
  MR_Word IntTypeDefnMap_11,
  MR_Word ImpTypeDefnMap_12,
  MR_Word ImpForeignEnumMap_13,
  MR_Word TypeCtor_14,
  MR_Word STATE_VARIABLE_TypeCtorCheckedMap_0_140,
  MR_Word * STATE_VARIABLE_TypeCtorCheckedMap_141,
  MR_Word STATE_VARIABLE_Specs_0_142,
  MR_Word * STATE_VARIABLE_Specs_143)
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
  MR_Word STATE_VARIABLE_Specs_1_144;
  MR_Word STATE_VARIABLE_Specs_2_145;
  MR_Word STATE_VARIABLE_Specs_3_146;
  MR_Word STATE_VARIABLE_Specs_4_148;
  MR_Word ImpEnumsCJCs_21;
  MR_Box conv0_ImpEnumsCJCs_21;
  MR_Word ImpSolverDefn_64;

  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(IntTypeDefnMap_11, TypeCtor_14, &IntMaybeDefn_17, STATE_VARIABLE_Specs_0_142, &STATE_VARIABLE_Specs_1_144);
  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0(ImpTypeDefnMap_12, TypeCtor_14, &ImpMaybeDefn_18, STATE_VARIABLE_Specs_1_144, &STATE_VARIABLE_Specs_2_145);
  parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0(ImpForeignEnumMap_13, TypeCtor_14, &ImpMaybeEnumCJCs_19, &ImpLeftOverEnumsCJCs_20, STATE_VARIABLE_Specs_2_145, &STATE_VARIABLE_Specs_3_146);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[1]), ImpForeignEnumMap_13, ((MR_Box) (TypeCtor_14)), &conv0_ImpEnumsCJCs_21);
  if (succeeded)
  {
    ImpEnumsCJCs_21 = ((MR_Word) (conv0_ImpEnumsCJCs_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ImpEnumsC_22 = ((MR_Word) ((MR_hl_field(0, ImpEnumsCJCs_21, 0))));
    MR_Word ImpEnumsJava_23 = ((MR_Word) ((MR_hl_field(0, ImpEnumsCJCs_21, 1))));
    MR_Word ImpEnumsCsharp_24 = ((MR_Word) ((MR_hl_field(0, ImpEnumsCJCs_21, 2))));
    MR_Word Var_147;

    Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsJava_23, ImpEnumsCsharp_24);
    ImpEnums_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), ImpEnumsC_22, Var_147);
  }
  else
    ImpEnums_25 = (MR_Word) ((MR_Unsigned) 0U);
  IntAbstractSolverMaybeDefn0_26 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 0))));
  IntSolverMaybeDefn_27 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 1))));
  IntAbstractStdMaybeDefn_28 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 2))));
  IntEqvMaybeDefn_29 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 3))));
  IntDuMaybeDefn_30 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 4))));
  IntSubMaybeDefn_31 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 5))));
  IntMaybeDefnCJCs_32 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefn_17, 6))));
  ImpAbstractSolverMaybeDefn_33 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 0))));
  ImpSolverMaybeDefn0_34 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 1))));
  ImpAbstractStdMaybeDefn_35 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 2))));
  ImpEqvMaybeDefn_36 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 3))));
  ImpDuMaybeDefn_37 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 4))));
  ImpSubMaybeDefn_38 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 5))));
  ImpMaybeDefnCJCs_39 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefn_18, 6))));
  IntMaybeDefnC_40 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_32, 0))));
  IntMaybeDefnJava_41 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_32, 1))));
  IntMaybeDefnCsharp_42 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_32, 2))));
  ImpMaybeDefnC_43 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_39, 0))));
  ImpMaybeDefnJava_44 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_39, 1))));
  ImpMaybeDefnCsharp_45 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_39, 2))));
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
  parse_tree__check_type_inst_mode_defns__report_any_nonabstract_solver_type_in_int_8_p_0(TypeCtor_14, IntSolverMaybeDefn_27, IntAbstractSolverMaybeDefn0_26, &IntAbstractSolverMaybeDefn_62, ImpSolverMaybeDefn0_34, &ImpSolverMaybeDefn_63, STATE_VARIABLE_Specs_3_146, &STATE_VARIABLE_Specs_4_148);
  succeeded = (ImpSolverMaybeDefn_63 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ImpSolverDefn_64 = ((MR_Word) ((MR_hl_field(1, ImpSolverMaybeDefn_63, 0))));
    {
      MR_Word CheckedSolverDefn_65;
      MR_Word SrcDefns_66;
      MR_Word CheckedDefn_67;
      MR_Word STATE_VARIABLE_Specs_5_150;
      MR_Word Var_151;
      MR_Word Var_152;
      MR_Word STATE_VARIABLE_Specs_6_153;
      MR_Word Var_154;
      MR_Word Var_159;
      MR_Word Var_161;
      MR_Word Var_162;
      MR_Word STATE_VARIABLE_Specs_7_163;
      MR_Word Var_164;
      MR_Word Var_169;
      MR_Word Var_170;
      MR_Word Var_171;
      MR_Word Var_172;
      MR_Word Var_173;
      MR_Word Var_174;
      MR_Word Var_175;
      MR_Word Var_176;
      MR_Word Var_177;
      MR_Word Var_178;
      MR_Word Var_179;
      MR_Word Var_181;
      MR_Word Var_183;
      MR_Word Var_186;
      MR_Word Var_188;
      MR_Word Var_189;
      MR_Box conv2_STATE_VARIABLE_Specs_6_153;
      MR_Box conv4_STATE_VARIABLE_Specs_7_163;
      MR_Box conv6_STATE_VARIABLE_Specs_143;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, (MR_String) "implementation", ImpAbstractSolverMaybeDefn_33, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_5_150);
      Var_154 = ((MR_Word) ((MR_hl_field(0, ImpSolverDefn_64, 4))));
      {
        Var_151 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_151, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
        MR_hl_field(0, Var_151, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_1));
        MR_hl_field(0, Var_151, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Var_151, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_151, 4) = ((MR_Box) (Var_154));
        MR_hl_field(0, Var_151, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(0, Var_151, 6) = ((MR_Box) ((MR_String) "implementation"));
        MR_hl_field(0, Var_151, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(0, Var_151, 8) = ((MR_Box) ((MR_String) "declaration"));
      }
      {
        Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_159, 0) = ((MR_Box) (ImpContextAbstractStd_52));
        MR_hl_field(1, Var_159, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_152, 0) = ((MR_Box) (IntContextAbstractStd_47));
        MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_159));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_151, Var_152, ((MR_Box) (STATE_VARIABLE_Specs_5_150)), &conv2_STATE_VARIABLE_Specs_6_153);
      STATE_VARIABLE_Specs_6_153 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_6_153));
      Var_164 = ((MR_Word) ((MR_hl_field(0, ImpSolverDefn_64, 4))));
      {
        Var_161 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_161, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
        MR_hl_field(0, Var_161, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_2));
        MR_hl_field(0, Var_161, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Var_161, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_161, 4) = ((MR_Box) (Var_164));
        MR_hl_field(0, Var_161, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(0, Var_161, 6) = ((MR_Box) ((MR_String) "implementation"));
        MR_hl_field(0, Var_161, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(0, Var_161, 8) = ((MR_Box) ((MR_String) "definition"));
      }
      {
        Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_179, 0) = ((MR_Box) (ImpContextCsharp_61));
        MR_hl_field(1, Var_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_178, 0) = ((MR_Box) (ImpContextJava_60));
        MR_hl_field(1, Var_178, 1) = ((MR_Box) (Var_179));
      }
      {
        Var_177 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_177, 0) = ((MR_Box) (ImpContextC_59));
        MR_hl_field(1, Var_177, 1) = ((MR_Box) (Var_178));
      }
      {
        Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_176, 0) = ((MR_Box) (ImpContextSub_55));
        MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_177));
      }
      {
        Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_175, 0) = ((MR_Box) (ImpContextDu_54));
        MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_176));
      }
      {
        Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_174, 0) = ((MR_Box) (ImpContextEqv_53));
        MR_hl_field(1, Var_174, 1) = ((MR_Box) (Var_175));
      }
      {
        Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_173, 0) = ((MR_Box) (IntContextCsharp_58));
        MR_hl_field(1, Var_173, 1) = ((MR_Box) (Var_174));
      }
      {
        Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_172, 0) = ((MR_Box) (IntContextJava_57));
        MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_173));
      }
      {
        Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_171, 0) = ((MR_Box) (IntContextC_56));
        MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_172));
      }
      {
        Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_170, 0) = ((MR_Box) (IntContextSub_50));
        MR_hl_field(1, Var_170, 1) = ((MR_Box) (Var_171));
      }
      {
        Var_169 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_169, 0) = ((MR_Box) (IntContextDu_49));
        MR_hl_field(1, Var_169, 1) = ((MR_Box) (Var_170));
      }
      {
        Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_162, 0) = ((MR_Box) (IntContextEqv_48));
        MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_169));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_161, Var_162, ((MR_Box) (STATE_VARIABLE_Specs_6_153)), &conv4_STATE_VARIABLE_Specs_7_163);
      STATE_VARIABLE_Specs_7_163 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_7_163));
      Var_183 = ((MR_Word) ((MR_hl_field(0, ImpSolverDefn_64, 4))));
      {
        Var_181 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_181, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[3]));
        MR_hl_field(0, Var_181, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_3));
        MR_hl_field(0, Var_181, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_181, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_181, 4) = ((MR_Box) (Var_183));
        MR_hl_field(0, Var_181, 5) = ((MR_Box) ((MR_String) "solver type"));
        MR_hl_field(0, Var_181, 6) = ((MR_Box) ((MR_String) "implementation"));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_181, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_7_163)), &conv6_STATE_VARIABLE_Specs_143);
      *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv6_STATE_VARIABLE_Specs_143));
      {
        CheckedSolverDefn_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CheckedSolverDefn_65, 0) = ((MR_Box) (IntAbstractSolverMaybeDefn_62));
        MR_hl_field(1, CheckedSolverDefn_65, 1) = ((MR_Box) (ImpSolverDefn_64));
      }
      Var_186 = mercury__maybe__map_maybe_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[24]), IntAbstractSolverMaybeDefn_62);
      Var_189 = parse_tree__item_util__wrap_solver_type_defn_1_f_0(ImpSolverDefn_64);
      {
        Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_188, 0) = ((MR_Box) (Var_189));
      }
      {
        SrcDefns_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SrcDefns_66, 0) = ((MR_Box) (Var_186));
        MR_hl_field(0, SrcDefns_66, 1) = ((MR_Box) (Var_188));
      }
      {
        CheckedDefn_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CheckedDefn_67, 0) = ((MR_Box) (CheckedSolverDefn_65));
        MR_hl_field(0, CheckedDefn_67, 1) = ((MR_Box) (SrcDefns_66));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_67)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
    }
  }
  else
  {
    MR_Word EqvDefn_69;
    MR_String EqvWhere_70;
    MR_Word Status_71;
    MR_Word SrcDefns_419;
    MR_Word IntEqvDefn_68;

    succeeded = (IntEqvMaybeDefn_29 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      IntEqvDefn_68 = ((MR_Word) ((MR_hl_field(1, IntEqvMaybeDefn_29, 0))));
      {
        MR_Word Var_191;
        MR_Word Var_192;

        EqvDefn_69 = IntEqvDefn_68;
        EqvWhere_70 = (MR_String) "interface";
        Status_71 = (MR_Integer) 0;
        Var_192 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(IntEqvDefn_68);
        {
          Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_191, 0) = ((MR_Box) (Var_192));
          MR_hl_field(1, Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          SrcDefns_419 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_419, 0) = ((MR_Box) (Var_191));
          MR_hl_field(0, SrcDefns_419, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SrcDefns_419, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word SrcDefnsInt_74;
      MR_Word SrcDefnsImp_75;
      MR_Word Var_198;
      MR_Word Var_199;

      succeeded = (ImpEqvMaybeDefn_36 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        EqvDefn_69 = ((MR_Word) ((MR_hl_field(1, ImpEqvMaybeDefn_36, 0))));
        EqvWhere_70 = (MR_String) "implementation";
        if ((IntAbstractStdMaybeDefn_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Status_71 = (MR_Integer) 2;
          SrcDefnsInt_74 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word AbstractStdDefn_73 = ((MR_Word) ((MR_hl_field(1, IntAbstractStdMaybeDefn_28, 0))));
          MR_Word Var_196;

          Status_71 = (MR_Integer) 1;
          Var_196 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_73);
          {
            SrcDefnsInt_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SrcDefnsInt_74, 0) = ((MR_Box) (Var_196));
            MR_hl_field(1, SrcDefnsInt_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        Var_198 = parse_tree__item_util__wrap_eqv_type_defn_1_f_0(EqvDefn_69);
        Var_199 = (MR_Word) ((MR_Unsigned) 0U);
        {
          SrcDefnsImp_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SrcDefnsImp_75, 0) = ((MR_Box) (Var_198));
          MR_hl_field(1, SrcDefnsImp_75, 1) = ((MR_Box) (Var_199));
        }
        {
          SrcDefns_419 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_419, 0) = ((MR_Box) (SrcDefnsInt_74));
          MR_hl_field(0, SrcDefns_419, 1) = ((MR_Box) (SrcDefnsImp_75));
          MR_hl_field(0, SrcDefns_419, 2) = ((MR_Box) (Var_199));
        }
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word CheckedStdDefn_76;
      MR_Word STATE_VARIABLE_Specs_9_201;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word STATE_VARIABLE_Specs_10_204;
      MR_Word Var_205;
      MR_Word Var_209;
      MR_Word Var_211;
      MR_Word Var_212;
      MR_Word STATE_VARIABLE_Specs_11_213;
      MR_Word Var_214;
      MR_Word Var_218;
      MR_Word Var_219;
      MR_Word Var_220;
      MR_Word Var_221;
      MR_Word Var_222;
      MR_Word Var_223;
      MR_Word Var_224;
      MR_Word Var_225;
      MR_Word Var_226;
      MR_Word Var_228;
      MR_Word Var_230;
      MR_Word CheckedDefn_352;
      MR_Box conv9_STATE_VARIABLE_Specs_10_204;
      MR_Box conv11_STATE_VARIABLE_Specs_11_213;
      MR_Box conv13_STATE_VARIABLE_Specs_143;

      parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, EqvWhere_70, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_9_201);
      Var_205 = ((MR_Word) ((MR_hl_field(0, EqvDefn_69, 4))));
      {
        Var_202 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_202, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
        MR_hl_field(0, Var_202, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_5));
        MR_hl_field(0, Var_202, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Var_202, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_202, 4) = ((MR_Box) (Var_205));
        MR_hl_field(0, Var_202, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(0, Var_202, 6) = ((MR_Box) (EqvWhere_70));
        MR_hl_field(0, Var_202, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(0, Var_202, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
      }
      {
        Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_209, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
        MR_hl_field(1, Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_203, 0) = ((MR_Box) (IntContextAbstractSolver_46));
        MR_hl_field(1, Var_203, 1) = ((MR_Box) (Var_209));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_202, Var_203, ((MR_Box) (STATE_VARIABLE_Specs_9_201)), &conv9_STATE_VARIABLE_Specs_10_204);
      STATE_VARIABLE_Specs_10_204 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_10_204));
      Var_214 = ((MR_Word) ((MR_hl_field(0, EqvDefn_69, 4))));
      {
        Var_211 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_211, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
        MR_hl_field(0, Var_211, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_6));
        MR_hl_field(0, Var_211, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Var_211, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_211, 4) = ((MR_Box) (Var_214));
        MR_hl_field(0, Var_211, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(0, Var_211, 6) = ((MR_Box) (EqvWhere_70));
        MR_hl_field(0, Var_211, 7) = ((MR_Box) ((MR_String) "definition"));
        MR_hl_field(0, Var_211, 8) = ((MR_Box) ((MR_String) "definition"));
      }
      {
        Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_226, 0) = ((MR_Box) (ImpContextCsharp_61));
        MR_hl_field(1, Var_226, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_225 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_225, 0) = ((MR_Box) (ImpContextJava_60));
        MR_hl_field(1, Var_225, 1) = ((MR_Box) (Var_226));
      }
      {
        Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_224, 0) = ((MR_Box) (ImpContextC_59));
        MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_225));
      }
      {
        Var_223 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_223, 0) = ((MR_Box) (ImpContextSub_55));
        MR_hl_field(1, Var_223, 1) = ((MR_Box) (Var_224));
      }
      {
        Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_222, 0) = ((MR_Box) (ImpContextDu_54));
        MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_223));
      }
      {
        Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_221, 0) = ((MR_Box) (IntContextCsharp_58));
        MR_hl_field(1, Var_221, 1) = ((MR_Box) (Var_222));
      }
      {
        Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_220, 0) = ((MR_Box) (IntContextJava_57));
        MR_hl_field(1, Var_220, 1) = ((MR_Box) (Var_221));
      }
      {
        Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_219, 0) = ((MR_Box) (IntContextC_56));
        MR_hl_field(1, Var_219, 1) = ((MR_Box) (Var_220));
      }
      {
        Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_218, 0) = ((MR_Box) (IntContextSub_50));
        MR_hl_field(1, Var_218, 1) = ((MR_Box) (Var_219));
      }
      {
        Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_212, 0) = ((MR_Box) (IntContextDu_49));
        MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_218));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_211, Var_212, ((MR_Box) (STATE_VARIABLE_Specs_10_204)), &conv11_STATE_VARIABLE_Specs_11_213);
      STATE_VARIABLE_Specs_11_213 = ((MR_Word) (conv11_STATE_VARIABLE_Specs_11_213));
      Var_230 = ((MR_Word) ((MR_hl_field(0, EqvDefn_69, 4))));
      {
        Var_228 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_228, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[3]));
        MR_hl_field(0, Var_228, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_7));
        MR_hl_field(0, Var_228, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_228, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_228, 4) = ((MR_Box) (Var_230));
        MR_hl_field(0, Var_228, 5) = ((MR_Box) ((MR_String) "equivalence type"));
        MR_hl_field(0, Var_228, 6) = ((MR_Box) (EqvWhere_70));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_228, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_11_213)), &conv13_STATE_VARIABLE_Specs_143);
      *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv13_STATE_VARIABLE_Specs_143));
      {
        CheckedStdDefn_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CheckedStdDefn_76, 0) = (MR_Box) ((MR_Unsigned) (Status_71));
        MR_hl_field(0, CheckedStdDefn_76, 1) = ((MR_Box) (EqvDefn_69));
      }
      {
        CheckedDefn_352 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CheckedDefn_352, 0) = ((MR_Box) (CheckedStdDefn_76));
        MR_hl_field(1, CheckedDefn_352, 1) = ((MR_Box) (SrcDefns_419));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_352)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
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
        IntSubDefn_77 = ((MR_Word) ((MR_hl_field(1, IntSubMaybeDefn_31, 0))));
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
          SubDefn_78 = ((MR_Word) ((MR_hl_field(1, ImpSubMaybeDefn_38, 0))));
          SubSection_79 = (MR_Integer) 1;
          SubWhere_80 = (MR_String) "implementation";
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word ForeignDefns_82;
        MR_Word STATE_VARIABLE_Specs_13_233;
        MR_Word Var_234;
        MR_Word Var_235;
        MR_Word STATE_VARIABLE_Specs_14_236;
        MR_Word Var_237;
        MR_Word Var_241;
        MR_Word Var_243;
        MR_Word Var_244;
        MR_Word STATE_VARIABLE_Specs_15_245;
        MR_Word Var_246;
        MR_Word Var_250;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_Word Var_255;
        MR_Word Var_256;
        MR_Word Var_257;
        MR_Word Var_259;
        MR_Word STATE_VARIABLE_Specs_16_260;
        MR_Word Var_261;
        MR_Word SrcDefns_353;
        MR_Word CheckedDefn_354;
        MR_Word Status_355;
        MR_Word SrcDefnsInt_356;
        MR_Word SrcDefnsImp_357;
        MR_Word CheckedStdDefn_358;
        MR_Box conv15_STATE_VARIABLE_Specs_14_236;
        MR_Box conv17_STATE_VARIABLE_Specs_15_245;
        MR_Box conv19_STATE_VARIABLE_Specs_16_260;
        MR_Box conv21_STATE_VARIABLE_Specs_143;

        parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, SubWhere_80, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_13_233);
        Var_237 = ((MR_Word) ((MR_hl_field(0, SubDefn_78, 4))));
        {
          Var_234 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_234, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(0, Var_234, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_8));
          MR_hl_field(0, Var_234, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_234, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_234, 4) = ((MR_Box) (Var_237));
          MR_hl_field(0, Var_234, 5) = ((MR_Box) ((MR_String) "subtype"));
          MR_hl_field(0, Var_234, 6) = ((MR_Box) (SubWhere_80));
          MR_hl_field(0, Var_234, 7) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(0, Var_234, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
        }
        {
          Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_241, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
          MR_hl_field(1, Var_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_235, 0) = ((MR_Box) (IntContextAbstractSolver_46));
          MR_hl_field(1, Var_235, 1) = ((MR_Box) (Var_241));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_234, Var_235, ((MR_Box) (STATE_VARIABLE_Specs_13_233)), &conv15_STATE_VARIABLE_Specs_14_236);
        STATE_VARIABLE_Specs_14_236 = ((MR_Word) (conv15_STATE_VARIABLE_Specs_14_236));
        Var_246 = ((MR_Word) ((MR_hl_field(0, SubDefn_78, 4))));
        {
          Var_243 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_243, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
          MR_hl_field(0, Var_243, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_9));
          MR_hl_field(0, Var_243, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_243, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_243, 4) = ((MR_Box) (Var_246));
          MR_hl_field(0, Var_243, 5) = ((MR_Box) ((MR_String) "subtype"));
          MR_hl_field(0, Var_243, 6) = ((MR_Box) (SubWhere_80));
          MR_hl_field(0, Var_243, 7) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(0, Var_243, 8) = ((MR_Box) ((MR_String) "definition"));
        }
        {
          Var_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_250, 0) = ((MR_Box) (ImpContextDu_54));
          MR_hl_field(1, Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_244 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_244, 0) = ((MR_Box) (IntContextDu_49));
          MR_hl_field(1, Var_244, 1) = ((MR_Box) (Var_250));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_243, Var_244, ((MR_Box) (STATE_VARIABLE_Specs_14_236)), &conv17_STATE_VARIABLE_Specs_15_245);
        STATE_VARIABLE_Specs_15_245 = ((MR_Word) (conv17_STATE_VARIABLE_Specs_15_245));
        {
          Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_257, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
          MR_hl_field(1, Var_257, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_256, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
          MR_hl_field(1, Var_256, 1) = ((MR_Box) (Var_257));
        }
        {
          Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_255, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
          MR_hl_field(1, Var_255, 1) = ((MR_Box) (Var_256));
        }
        {
          Var_254 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_254, 0) = ((MR_Box) (IntMaybeDefnJava_41));
          MR_hl_field(1, Var_254, 1) = ((MR_Box) (Var_255));
        }
        {
          Var_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_253, 0) = ((MR_Box) (ImpMaybeDefnC_43));
          MR_hl_field(1, Var_253, 1) = ((MR_Box) (Var_254));
        }
        {
          Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_252, 0) = ((MR_Box) (IntMaybeDefnC_40));
          MR_hl_field(1, Var_252, 1) = ((MR_Box) (Var_253));
        }
        ForeignDefns_82 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_252);
        {
          Var_259 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_259, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[2]));
          MR_hl_field(0, Var_259, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_10));
          MR_hl_field(0, Var_259, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_259, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_259, 4) = ((MR_Box) (SubDefn_78));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_259, ForeignDefns_82, ((MR_Box) (STATE_VARIABLE_Specs_15_245)), &conv19_STATE_VARIABLE_Specs_16_260);
        STATE_VARIABLE_Specs_16_260 = ((MR_Word) (conv19_STATE_VARIABLE_Specs_16_260));
        {
          Var_261 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_261, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[3]));
          MR_hl_field(0, Var_261, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_11));
          MR_hl_field(0, Var_261, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_261, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_261, 4) = ((MR_Box) (SubDefn_78));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_261, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_16_260)), &conv21_STATE_VARIABLE_Specs_143);
        *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv21_STATE_VARIABLE_Specs_143));
        parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_105_100_101_95_115_117_98_116_121_112_101_95_115_116_97_116_117_115_95_95_91_49_93_95_48_7_p_0(SubDefn_78, SubSection_79, IntAbstractStdMaybeDefn_28, &Status_355, &SrcDefnsInt_356, &SrcDefnsImp_357);
        {
          CheckedStdDefn_358 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CheckedStdDefn_358, 0) = (MR_Box) ((MR_Unsigned) (Status_355));
          MR_hl_field(1, CheckedStdDefn_358, 1) = ((MR_Box) (SubDefn_78));
        }
        {
          SrcDefns_353 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SrcDefns_353, 0) = ((MR_Box) (SrcDefnsInt_356));
          MR_hl_field(0, SrcDefns_353, 1) = ((MR_Box) (SrcDefnsImp_357));
          MR_hl_field(0, SrcDefns_353, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          CheckedDefn_354 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, CheckedDefn_354, 0) = ((MR_Box) (CheckedStdDefn_358));
          MR_hl_field(1, CheckedDefn_354, 1) = ((MR_Box) (SrcDefns_353));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_354)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
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
          IntDuDefn_83 = ((MR_Word) ((MR_hl_field(1, IntDuMaybeDefn_30, 0))));
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
            DuDefn_84 = ((MR_Word) ((MR_hl_field(1, ImpDuMaybeDefn_37, 0))));
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
          MR_Word SrcForeignDefns_114;
          MR_Word SrcForeignEnums_115;
          MR_Word STATE_VARIABLE_Specs_18_265;
          MR_Word Var_266;
          MR_Word Var_267;
          MR_Word STATE_VARIABLE_Specs_19_268;
          MR_Word Var_269;
          MR_Word Var_273;
          MR_Word STATE_VARIABLE_Specs_20_275;
          MR_Word SrcDefns_360;
          MR_Word CheckedDefn_361;
          MR_Word Status_362;
          MR_Word SrcDefnsInt_363;
          MR_Word SrcDefnsImp_364;
          MR_Word CheckedStdDefn_365;
          MR_Box conv23_STATE_VARIABLE_Specs_19_268;
          MR_String HeadName0_98;
          MR_Word TailNames0_99;

          parse_tree__check_type_inst_mode_defns__report_any_redundant_abstract_type_in_imp_5_p_0(TypeCtor_14, DuWhere_86, ImpAbstractStdMaybeDefn_35, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_18_265);
          Var_269 = ((MR_Word) ((MR_hl_field(0, DuDefn_84, 4))));
          {
            Var_266 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_266, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
            MR_hl_field(0, Var_266, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_12));
            MR_hl_field(0, Var_266, 2) = ((MR_Box) ((MR_Integer) 6));
            MR_hl_field(0, Var_266, 3) = ((MR_Box) (TypeCtor_14));
            MR_hl_field(0, Var_266, 4) = ((MR_Box) (Var_269));
            MR_hl_field(0, Var_266, 5) = ((MR_Box) ((MR_String) "discriminated union type"));
            MR_hl_field(0, Var_266, 6) = ((MR_Box) (DuWhere_86));
            MR_hl_field(0, Var_266, 7) = ((MR_Box) ((MR_String) "definition"));
            MR_hl_field(0, Var_266, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
          }
          {
            Var_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_273, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
            MR_hl_field(1, Var_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_267, 0) = ((MR_Box) (IntContextAbstractSolver_46));
            MR_hl_field(1, Var_267, 1) = ((MR_Box) (Var_273));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_266, Var_267, ((MR_Box) (STATE_VARIABLE_Specs_18_265)), &conv23_STATE_VARIABLE_Specs_19_268);
          STATE_VARIABLE_Specs_19_268 = ((MR_Word) (conv23_STATE_VARIABLE_Specs_19_268));
          DetailsDu_88 = ((MR_Word) ((MR_hl_field(0, DuDefn_84, 2))));
          OoMCtors_89 = ((MR_Word) ((MR_hl_field(0, DetailsDu_88, 0))));
          HeadCtor_92 = ((MR_Word) ((MR_hl_field(0, OoMCtors_89, 0))));
          TailCtors_93 = ((MR_Word) ((MR_hl_field(0, OoMCtors_89, 1))));
          parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0(TypeCtor_14, DuDefn_84, DuSection_85, IntAbstractStdMaybeDefn_28, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_362, &ChosenSectionCJCs_94, &ChosenMaybeDefnCJCs_95, &SrcDefnsDuInt_96, &SrcDefnsDuImp_97, STATE_VARIABLE_Specs_19_268, &STATE_VARIABLE_Specs_20_275);
          succeeded = parse_tree__prog_data__ctor_is_constant_2_p_0(HeadCtor_92, &HeadName0_98);
          if (succeeded)
            succeeded = parse_tree__prog_data__ctors_are_all_constants_2_p_0(TailCtors_93, &TailNames0_99);
          if (succeeded)
            if ((TailNames0_99 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              succeeded = parse_tree__prog_type_repn__non_sub_du_type_is_dummy_1_p_0(DetailsDu_88);
              if (succeeded)
                {
                  MaybeOnlyConstants_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeOnlyConstants_100, 0) = ((MR_Box) (HeadName0_98));
                  MR_hl_field(1, MaybeOnlyConstants_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              else
                MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              MR_Integer _NumFunctors_103;

              succeeded = parse_tree__prog_type_repn__non_sub_du_type_is_enum_2_p_0(DetailsDu_88, &_NumFunctors_103);
              if (succeeded)
                {
                  MaybeOnlyConstants_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeOnlyConstants_100, 0) = ((MR_Box) (HeadName0_98));
                  MR_hl_field(1, MaybeOnlyConstants_100, 1) = ((MR_Box) (TailNames0_99));
                }
              else
                MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
            }
          else
            MaybeOnlyConstants_100 = (MR_Word) ((MR_Unsigned) 0U);
          if ((MaybeOnlyConstants_100 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word ChosenMaybeDefnC_111;
            MR_Word ChosenMaybeDefnJava_112;
            MR_Word ChosenMaybeDefnCsharp_113;
            MR_Word Var_285;
            MR_Word Var_286;
            MR_Word Var_287;

            if ((ImpEnums_25 == (MR_Word) ((MR_Unsigned) 0U)))
              *STATE_VARIABLE_Specs_143 = STATE_VARIABLE_Specs_20_275;
            else
            {
              MR_Word NonEnumSNAsCord_106;
              MR_Word NonEnumSNAs_107;
              MR_Word DuDefnContext_108;
              MR_Word ImpEnumContexts_109;
              MR_Word Var_277;
              MR_Word Var_278;
              MR_Word Var_282;
              MR_Box conv26_STATE_VARIABLE_Specs_143;

              {
                Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_277, 0) = ((MR_Box) (HeadCtor_92));
                MR_hl_field(1, Var_277, 1) = ((MR_Box) (TailCtors_93));
              }
              Var_278 = mercury__cord__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0));
              parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_3_p_0(Var_277, Var_278, &NonEnumSNAsCord_106);
              NonEnumSNAs_107 = mercury__cord__to_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), NonEnumSNAsCord_106);
              DuDefnContext_108 = ((MR_Word) ((MR_hl_field(0, DuDefn_84, 4))));
              ImpEnumContexts_109 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[25]), ImpEnums_25);
              {
                Var_282 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_282, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[4]));
                MR_hl_field(0, Var_282, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_14));
                MR_hl_field(0, Var_282, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_282, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(0, Var_282, 4) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(0, Var_282, 5) = ((MR_Box) (DuDefnContext_108));
                MR_hl_field(0, Var_282, 6) = ((MR_Box) (NonEnumSNAs_107));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_282, ImpEnumContexts_109, ((MR_Box) (STATE_VARIABLE_Specs_20_275)), &conv26_STATE_VARIABLE_Specs_143);
              *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv26_STATE_VARIABLE_Specs_143));
            }
            {
              CheckedStdDefn_365 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CheckedStdDefn_365, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, CheckedStdDefn_365, 1) = (MR_Box) ((MR_Unsigned) (Status_362));
              MR_hl_field(3, CheckedStdDefn_365, 2) = ((MR_Box) (DuDefn_84));
              MR_hl_field(3, CheckedStdDefn_365, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_95));
            }
            ChosenMaybeDefnC_111 = ((MR_Word) ((MR_hl_field(0, ChosenMaybeDefnCJCs_95, 0))));
            ChosenMaybeDefnJava_112 = ((MR_Word) ((MR_hl_field(0, ChosenMaybeDefnCJCs_95, 1))));
            ChosenMaybeDefnCsharp_113 = ((MR_Word) ((MR_hl_field(0, ChosenMaybeDefnCJCs_95, 2))));
            {
              Var_287 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_287, 0) = ((MR_Box) (ChosenMaybeDefnCsharp_113));
              MR_hl_field(1, Var_287, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_286 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_286, 0) = ((MR_Box) (ChosenMaybeDefnJava_112));
              MR_hl_field(1, Var_286, 1) = ((MR_Box) (Var_287));
            }
            {
              Var_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_285, 0) = ((MR_Box) (ChosenMaybeDefnC_111));
              MR_hl_field(1, Var_285, 1) = ((MR_Box) (Var_286));
            }
            SrcForeignDefns_114 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(Var_285);
            SrcForeignEnums_115 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_String HeadName_116 = ((MR_String) ((MR_hl_field(1, MaybeOnlyConstants_100, 0))));
            MR_Word TailNames_117 = ((MR_Word) ((MR_hl_field(1, MaybeOnlyConstants_100, 1))));
            MR_Word MaybeDefnOrEnumCJCs_118;
            MR_Word Var_289;

            {
              Var_289 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_289, 0) = ((MR_Box) (HeadName_116));
              MR_hl_field(1, Var_289, 1) = ((MR_Box) (TailNames_117));
            }
            parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_10_p_0(TypeCtor_14, Var_289, ChosenMaybeDefnCJCs_95, ImpMaybeEnumCJCs_19, ImpLeftOverEnumsCJCs_20, &MaybeDefnOrEnumCJCs_118, &SrcForeignDefns_114, &SrcForeignEnums_115, STATE_VARIABLE_Specs_20_275, STATE_VARIABLE_Specs_143);
            {
              CheckedStdDefn_365 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, CheckedStdDefn_365, 0) = (MR_Box) ((MR_Unsigned) (Status_362));
              MR_hl_field(2, CheckedStdDefn_365, 1) = ((MR_Box) (DuDefn_84));
              MR_hl_field(2, CheckedStdDefn_365, 2) = ((MR_Box) (HeadName_116));
              MR_hl_field(2, CheckedStdDefn_365, 3) = ((MR_Box) (TailNames_117));
              MR_hl_field(2, CheckedStdDefn_365, 4) = ((MR_Box) (MaybeDefnOrEnumCJCs_118));
            }
          }
          switch (ChosenSectionCJCs_94) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_293;

                SrcDefnsInt_363 = SrcDefnsDuInt_96;
                Var_293 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[26]), SrcForeignDefns_114);
                SrcDefnsImp_364 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuImp_97, Var_293);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_291;

                Var_291 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[27]), SrcForeignDefns_114);
                SrcDefnsInt_363 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), SrcDefnsDuInt_96, Var_291);
                SrcDefnsImp_364 = SrcDefnsDuImp_97;
              }
              break;
          }
          {
            SrcDefns_360 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SrcDefns_360, 0) = ((MR_Box) (SrcDefnsInt_363));
            MR_hl_field(0, SrcDefns_360, 1) = ((MR_Box) (SrcDefnsImp_364));
            MR_hl_field(0, SrcDefns_360, 2) = ((MR_Box) (SrcForeignEnums_115));
          }
          {
            CheckedDefn_361 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CheckedDefn_361, 0) = ((MR_Box) (CheckedStdDefn_365));
            MR_hl_field(1, CheckedDefn_361, 1) = ((MR_Box) (SrcDefns_360));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_361)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
        }
        else
        {
          succeeded = (IntMaybeDefnC_40 != (MR_Word) ((MR_Unsigned) 0U));
          if (!(succeeded))
          {
            succeeded = (IntMaybeDefnJava_41 != (MR_Word) ((MR_Unsigned) 0U));
            if (!(succeeded))
            {
              succeeded = (IntMaybeDefnCsharp_42 != (MR_Word) ((MR_Unsigned) 0U));
              if (!(succeeded))
              {
                succeeded = (ImpMaybeDefnC_43 != (MR_Word) ((MR_Unsigned) 0U));
                if (!(succeeded))
                {
                  succeeded = (ImpMaybeDefnJava_44 != (MR_Word) ((MR_Unsigned) 0U));
                  if (!(succeeded))
                    succeeded = (ImpMaybeDefnCsharp_45 != (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word IntForeignContexts_125;
            MR_Word SortedIntForeignContexts_126;
            MR_Word FirstForeignContext_127;
            MR_String ForeignWhere_129;
            MR_Word ChosenAbstractStdDefn_132;
            MR_Word Var_296;
            MR_Word Var_297;
            MR_Word Var_298;
            MR_Word Var_304;
            MR_Word Var_305;
            MR_Word STATE_VARIABLE_Specs_23_306;
            MR_Word Var_310;
            MR_Word Var_312;
            MR_Word STATE_VARIABLE_Specs_24_313;
            MR_Word SrcDefns_366;
            MR_Word CheckedDefn_367;
            MR_Word Status_368;
            MR_Word CheckedStdDefn_369;
            MR_Word ChosenMaybeDefnCJCs_370;
            MR_Box conv31_STATE_VARIABLE_Specs_23_306;
            MR_Box conv33_STATE_VARIABLE_Specs_24_313;

            {
              Var_298 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_298, 0) = ((MR_Box) (IntMaybeDefnCsharp_42));
              MR_hl_field(1, Var_298, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_297 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_297, 0) = ((MR_Box) (IntMaybeDefnJava_41));
              MR_hl_field(1, Var_297, 1) = ((MR_Box) (Var_298));
            }
            {
              Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_296, 0) = ((MR_Box) (IntMaybeDefnC_40));
              MR_hl_field(1, Var_296, 1) = ((MR_Box) (Var_297));
            }
            IntForeignContexts_125 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_296);
            mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), IntForeignContexts_125, &SortedIntForeignContexts_126);
            if ((SortedIntForeignContexts_126 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word ImpForeignContexts_130;
              MR_Word SortedImpForeignContexts_131;
              MR_Word Var_300;
              MR_Word Var_301;
              MR_Word Var_302;
              MR_Box conv29_FirstForeignContext_127;

              {
                Var_302 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_302, 0) = ((MR_Box) (ImpMaybeDefnCsharp_45));
                MR_hl_field(1, Var_302, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_301 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_301, 0) = ((MR_Box) (ImpMaybeDefnJava_44));
                MR_hl_field(1, Var_301, 1) = ((MR_Box) (Var_302));
              }
              {
                Var_300 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_300, 0) = ((MR_Box) (ImpMaybeDefnC_43));
                MR_hl_field(1, Var_300, 1) = ((MR_Box) (Var_301));
              }
              ImpForeignContexts_130 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(Var_300);
              mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ImpForeignContexts_130, &SortedImpForeignContexts_131);
              conv29_FirstForeignContext_127 = mercury__list__det_head_1_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), SortedImpForeignContexts_131);
              FirstForeignContext_127 = ((MR_Word) (conv29_FirstForeignContext_127));
              ForeignWhere_129 = (MR_String) "implementation";
            }
            else
            {
              FirstForeignContext_127 = ((MR_Word) ((MR_hl_field(1, SortedIntForeignContexts_126, 0))));
              ForeignWhere_129 = (MR_String) "interface";
            }
            {
              Var_304 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_304, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
              MR_hl_field(0, Var_304, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_17));
              MR_hl_field(0, Var_304, 2) = ((MR_Box) ((MR_Integer) 6));
              MR_hl_field(0, Var_304, 3) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(0, Var_304, 4) = ((MR_Box) (FirstForeignContext_127));
              MR_hl_field(0, Var_304, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(0, Var_304, 6) = ((MR_Box) (ForeignWhere_129));
              MR_hl_field(0, Var_304, 7) = ((MR_Box) ((MR_String) "definition"));
              MR_hl_field(0, Var_304, 8) = ((MR_Box) ((MR_String) "solver type declaration"));
            }
            {
              Var_310 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_310, 0) = ((MR_Box) (ImpContextAbstractSolver_51));
              MR_hl_field(1, Var_310, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_305, 0) = ((MR_Box) (IntContextAbstractSolver_46));
              MR_hl_field(1, Var_305, 1) = ((MR_Box) (Var_310));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_304, Var_305, ((MR_Box) (STATE_VARIABLE_Specs_4_148)), &conv31_STATE_VARIABLE_Specs_23_306);
            STATE_VARIABLE_Specs_23_306 = ((MR_Word) (conv31_STATE_VARIABLE_Specs_23_306));
            {
              Var_312 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_312, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[3]));
              MR_hl_field(0, Var_312, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_18));
              MR_hl_field(0, Var_312, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_312, 3) = ((MR_Box) (TypeCtor_14));
              MR_hl_field(0, Var_312, 4) = ((MR_Box) (FirstForeignContext_127));
              MR_hl_field(0, Var_312, 5) = ((MR_Box) ((MR_String) "foreign type"));
              MR_hl_field(0, Var_312, 6) = ((MR_Box) (ForeignWhere_129));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_312, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_23_306)), &conv33_STATE_VARIABLE_Specs_24_313);
            STATE_VARIABLE_Specs_24_313 = ((MR_Word) (conv33_STATE_VARIABLE_Specs_24_313));
            parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0(TypeCtor_14, IntAbstractSolverMaybeDefn_62, ImpAbstractSolverMaybeDefn_33, IntAbstractStdMaybeDefn_28, ImpAbstractStdMaybeDefn_35, IntMaybeDefnCJCs_32, ImpMaybeDefnCJCs_39, &Status_368, &ChosenAbstractStdDefn_132, &ChosenMaybeDefnCJCs_370, &SrcDefns_366, STATE_VARIABLE_Specs_24_313, STATE_VARIABLE_Specs_143);
            {
              CheckedStdDefn_369 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, CheckedStdDefn_369, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, CheckedStdDefn_369, 1) = (MR_Box) ((MR_Unsigned) (Status_368));
              MR_hl_field(3, CheckedStdDefn_369, 2) = ((MR_Box) (ChosenAbstractStdDefn_132));
              MR_hl_field(3, CheckedStdDefn_369, 3) = ((MR_Box) (ChosenMaybeDefnCJCs_370));
            }
            {
              CheckedDefn_367 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CheckedDefn_367, 0) = ((MR_Box) (CheckedStdDefn_369));
              MR_hl_field(1, CheckedDefn_367, 1) = ((MR_Box) (SrcDefns_366));
            }
            mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_367)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
          }
          else
          {
            MR_Word AbstractSolverDefn_134;
            MR_String AbstractSolverWhere_135;
            MR_Word Status_388;
            MR_Word SrcDefnsInt_390;
            MR_Word SrcDefnsImp_391;
            MR_Word IntAbstractSolverDefn_133;

            succeeded = (IntAbstractSolverMaybeDefn_62 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              IntAbstractSolverDefn_133 = ((MR_Word) ((MR_hl_field(1, IntAbstractSolverMaybeDefn_62, 0))));
              {
                MR_Word Var_317;

                AbstractSolverDefn_134 = IntAbstractSolverDefn_133;
                AbstractSolverWhere_135 = (MR_String) "interface";
                Status_388 = (MR_Integer) 0;
                Var_317 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractSolverDefn_133);
                {
                  SrcDefnsInt_390 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SrcDefnsInt_390, 0) = ((MR_Box) (Var_317));
                }
                SrcDefnsImp_391 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_Word Var_318;

              succeeded = (ImpAbstractSolverMaybeDefn_33 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                AbstractSolverDefn_134 = ((MR_Word) ((MR_hl_field(1, ImpAbstractSolverMaybeDefn_33, 0))));
                AbstractSolverWhere_135 = (MR_String) "implementation";
                Status_388 = (MR_Integer) 1;
                SrcDefnsInt_390 = (MR_Word) ((MR_Unsigned) 0U);
                Var_318 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractSolverDefn_134);
                {
                  SrcDefnsImp_391 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SrcDefnsImp_391, 0) = ((MR_Box) (Var_318));
                }
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              MR_Word STATE_VARIABLE_Specs_26_319;
              MR_Word Var_320;
              MR_Word Var_321;
              MR_Word STATE_VARIABLE_Specs_27_322;
              MR_Word Var_323;
              MR_Word Var_327;
              MR_Word Var_329;
              MR_Word Var_331;
              MR_Word CheckedSolverDefn_371;
              MR_Word SrcDefns_372;
              MR_Word CheckedDefn_373;
              MR_Box conv35_STATE_VARIABLE_Specs_27_322;
              MR_Box conv37_STATE_VARIABLE_Specs_143;

              parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractSolverDefn_134, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_26_319);
              Var_323 = ((MR_Word) ((MR_hl_field(0, AbstractSolverDefn_134, 4))));
              {
                Var_320 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_320, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[2]));
                MR_hl_field(0, Var_320, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_19));
                MR_hl_field(0, Var_320, 2) = ((MR_Box) ((MR_Integer) 6));
                MR_hl_field(0, Var_320, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(0, Var_320, 4) = ((MR_Box) (Var_323));
                MR_hl_field(0, Var_320, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(0, Var_320, 6) = ((MR_Box) (AbstractSolverWhere_135));
                MR_hl_field(0, Var_320, 7) = ((MR_Box) ((MR_String) "declaration"));
                MR_hl_field(0, Var_320, 8) = ((MR_Box) ((MR_String) "declaration"));
              }
              {
                Var_327 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_327, 0) = ((MR_Box) (ImpContextAbstractStd_52));
                MR_hl_field(1, Var_327, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_321 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_321, 0) = ((MR_Box) (IntContextAbstractStd_47));
                MR_hl_field(1, Var_321, 1) = ((MR_Box) (Var_327));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[5]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_320, Var_321, ((MR_Box) (STATE_VARIABLE_Specs_26_319)), &conv35_STATE_VARIABLE_Specs_27_322);
              STATE_VARIABLE_Specs_27_322 = ((MR_Word) (conv35_STATE_VARIABLE_Specs_27_322));
              Var_331 = ((MR_Word) ((MR_hl_field(0, AbstractSolverDefn_134, 4))));
              {
                Var_329 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_329, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[3]));
                MR_hl_field(0, Var_329, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_20));
                MR_hl_field(0, Var_329, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_329, 3) = ((MR_Box) (TypeCtor_14));
                MR_hl_field(0, Var_329, 4) = ((MR_Box) (Var_331));
                MR_hl_field(0, Var_329, 5) = ((MR_Box) ((MR_String) "solver type"));
                MR_hl_field(0, Var_329, 6) = ((MR_Box) (AbstractSolverWhere_135));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_329, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_27_322)), &conv37_STATE_VARIABLE_Specs_143);
              *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv37_STATE_VARIABLE_Specs_143));
              {
                CheckedSolverDefn_371 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CheckedSolverDefn_371, 0) = (MR_Box) ((MR_Unsigned) (Status_388));
                MR_hl_field(0, CheckedSolverDefn_371, 1) = ((MR_Box) (AbstractSolverDefn_134));
              }
              {
                SrcDefns_372 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SrcDefns_372, 0) = ((MR_Box) (SrcDefnsInt_390));
                MR_hl_field(0, SrcDefns_372, 1) = ((MR_Box) (SrcDefnsImp_391));
              }
              {
                CheckedDefn_373 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CheckedDefn_373, 0) = ((MR_Box) (CheckedSolverDefn_371));
                MR_hl_field(0, CheckedDefn_373, 1) = ((MR_Box) (SrcDefns_372));
              }
              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_373)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
            }
            else
            {
              MR_Word Status_380;
              MR_Word AbstractStdDefn_381;
              MR_Word SrcDefnsInt_382;
              MR_Word SrcDefnsImp_383;
              MR_Word IntAbstractStdDefn_137;

              succeeded = (IntAbstractStdMaybeDefn_28 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                IntAbstractStdDefn_137 = ((MR_Word) ((MR_hl_field(1, IntAbstractStdMaybeDefn_28, 0))));
                if ((ImpAbstractStdMaybeDefn_35 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_336;

                  AbstractStdDefn_381 = IntAbstractStdDefn_137;
                  Var_336 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_137);
                  {
                    SrcDefnsInt_382 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SrcDefnsInt_382, 0) = ((MR_Box) (Var_336));
                    MR_hl_field(1, SrcDefnsInt_382, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                {
                  MR_Word Var_334;

                  AbstractStdDefn_381 = ((MR_Word) ((MR_hl_field(1, ImpAbstractStdMaybeDefn_35, 0))));
                  Var_334 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_381);
                  {
                    SrcDefnsInt_382 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SrcDefnsInt_382, 0) = ((MR_Box) (Var_334));
                    MR_hl_field(1, SrcDefnsInt_382, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                Status_380 = (MR_Integer) 1;
                SrcDefnsImp_383 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Word Var_338;
                MR_Word Var_339;

                succeeded = (ImpAbstractStdMaybeDefn_35 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  AbstractStdDefn_381 = ((MR_Word) ((MR_hl_field(1, ImpAbstractStdMaybeDefn_35, 0))));
                  Status_380 = (MR_Integer) 2;
                  SrcDefnsInt_382 = (MR_Word) ((MR_Unsigned) 0U);
                  Var_338 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(AbstractStdDefn_381);
                  Var_339 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    SrcDefnsImp_383 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, SrcDefnsImp_383, 0) = ((MR_Box) (Var_338));
                    MR_hl_field(1, SrcDefnsImp_383, 1) = ((MR_Box) (Var_339));
                  }
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                MR_Word STATE_VARIABLE_Specs_29_340;
                MR_Word Var_341;
                MR_Word SrcDefns_375;
                MR_Word CheckedDefn_376;
                MR_Word CheckedStdDefn_377;
                MR_Box conv39_STATE_VARIABLE_Specs_143;

                parse_tree__check_type_inst_mode_defns__maybe_report_declared_but_undefined_type_5_p_0(InsistOnDefn_10, TypeCtor_14, AbstractStdDefn_381, STATE_VARIABLE_Specs_4_148, &STATE_VARIABLE_Specs_29_340);
                {
                  Var_341 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_341, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[4]));
                  MR_hl_field(0, Var_341, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_21));
                  MR_hl_field(0, Var_341, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_341, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(0, Var_341, 4) = ((MR_Box) ((MR_String) "undefined"));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_341, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_29_340)), &conv39_STATE_VARIABLE_Specs_143);
                *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv39_STATE_VARIABLE_Specs_143));
                {
                  CheckedStdDefn_377 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, CheckedStdDefn_377, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(3, CheckedStdDefn_377, 1) = (MR_Box) ((MR_Unsigned) (Status_380));
                  MR_hl_field(3, CheckedStdDefn_377, 2) = ((MR_Box) (AbstractStdDefn_381));
                  MR_hl_field(3, CheckedStdDefn_377, 3) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[6]));
                }
                {
                  SrcDefns_375 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, SrcDefns_375, 0) = ((MR_Box) (SrcDefnsInt_382));
                  MR_hl_field(0, SrcDefns_375, 1) = ((MR_Box) (SrcDefnsImp_383));
                  MR_hl_field(0, SrcDefns_375, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  CheckedDefn_376 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, CheckedDefn_376, 0) = ((MR_Box) (CheckedStdDefn_377));
                  MR_hl_field(1, CheckedDefn_376, 1) = ((MR_Box) (SrcDefns_375));
                }
                mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), ((MR_Box) (TypeCtor_14)), ((MR_Box) (CheckedDefn_376)), STATE_VARIABLE_TypeCtorCheckedMap_0_140, STATE_VARIABLE_TypeCtorCheckedMap_141);
              }
              else
              {
                MR_Word Var_349;
                MR_Box conv41_STATE_VARIABLE_Specs_143;

                {
                  Var_349 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_349, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[4]));
                  MR_hl_field(0, Var_349, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0_22));
                  MR_hl_field(0, Var_349, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_349, 3) = ((MR_Box) (TypeCtor_14));
                  MR_hl_field(0, Var_349, 4) = ((MR_Box) ((MR_String) "undeclared"));
                }
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_349, ImpEnums_25, ((MR_Box) (STATE_VARIABLE_Specs_4_148)), &conv41_STATE_VARIABLE_Specs_143);
                *STATE_VARIABLE_Specs_143 = ((MR_Word) (conv41_STATE_VARIABLE_Specs_143));
                *STATE_VARIABLE_TypeCtorCheckedMap_141 = STATE_VARIABLE_TypeCtorCheckedMap_0_140;
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
    MR_Word MaybeTypeDefn_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaybeTypeDefns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailDefns_6;

    TailDefns_6 = parse_tree__check_type_inst_mode_defns__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_116_95_109_97_121_98_101_95_116_121_112_101_95_100_101_102_110_115_95_95_91_49_93_95_48_1_f_0(MaybeTypeDefns_4);
    if ((MaybeTypeDefn_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = TailDefns_6;
    else
    {
      MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_3, 0))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (TypeDefn_7));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailDefns_6));
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
          MR_Word IntAbstractStdDefn_15 = ((MR_Word) ((MR_hl_field(1, IntAbstractStdMaybeDefn_11, 0))));
          MR_Word Var_18;

          *Status_12 = (MR_Integer) 1;
          Var_18 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_15);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsInt_13 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        Var_20 = parse_tree__item_util__wrap_sub_type_defn_1_f_0(SubDefn_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsImp_14 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsInt_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word TypeDefnInfo_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(0, TypeDefnInfo_3, 4))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
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
    MR_Word MaybeTypeDefn_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word MaybeTypeDefns_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailContexts_6;

    TailContexts_6 = parse_tree__check_type_inst_mode_defns__get_maybe_type_defn_contexts_1_f_0(MaybeTypeDefns_4);
    if ((MaybeTypeDefn_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = TailContexts_6;
    else
    {
      MR_Word TypeDefn_7 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_3, 0))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, TypeDefn_7, 4))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (TailContexts_6));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
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
    MR_Word EnumsC_24 = ((MR_Word) ((MR_hl_field(0, AllEnums_12, 0))));
    MR_Word EnumsJava_25 = ((MR_Word) ((MR_hl_field(0, AllEnums_12, 1))));
    MR_Word EnumsCsharp_26 = ((MR_Word) ((MR_hl_field(0, AllEnums_12, 2))));
    MR_Word MaybeEnumC_27;
    MR_Word LeftOverEnumsC_28;
    MR_Word MaybeEnumJava_29;
    MR_Word LeftOverEnumsJava_30;
    MR_Word MaybeEnumCsharp_31;
    MR_Word LeftOverEnumsCsharp_32;
    MR_Word STATE_VARIABLE_Specs_1_34;
    MR_Word STATE_VARIABLE_Specs_2_36;
    MR_Word SortedForeignEnums_38;
    MR_Word SortedForeignEnums_54;
    MR_Word SortedForeignEnums_70;

    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[18]), EnumsC_24, &SortedForeignEnums_38);
    if ((SortedForeignEnums_38 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumC_27 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsC_28 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_34 = STATE_VARIABLE_Specs_0_13;
    }
    else
    {
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_38, 1))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_38, 0))));

      if ((Var_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumC_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumC_27, 0) = ((MR_Box) (Var_53));
        }
        LeftOverEnumsC_28 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_1_34 = STATE_VARIABLE_Specs_0_13;
      }
      else
      {
        MR_Word LeastContext_39;
        MR_Word LeftOverContexts_40;
        MR_Word Var_43;
        MR_Box conv4_STATE_VARIABLE_Specs_1_34;

        LeftOverEnumsC_28 = Var_52;
        {
          MaybeEnumC_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumC_27, 0) = ((MR_Box) (Var_53));
        }
        LeastContext_39 = ((MR_Word) ((MR_hl_field(0, Var_53, 3))));
        LeftOverContexts_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[19]), LeftOverEnumsC_28);
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_3));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(0, Var_43, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(0, Var_43, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_43, 6) = ((MR_Box) (LeastContext_39));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_43, LeftOverContexts_40, ((MR_Box) (STATE_VARIABLE_Specs_0_13)), &conv4_STATE_VARIABLE_Specs_1_34);
        STATE_VARIABLE_Specs_1_34 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_34));
      }
    }
    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[20]), EnumsJava_25, &SortedForeignEnums_54);
    if ((SortedForeignEnums_54 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumJava_29 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsJava_30 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_2_36 = STATE_VARIABLE_Specs_1_34;
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_54, 1))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_54, 0))));

      if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumJava_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumJava_29, 0) = ((MR_Box) (Var_69));
        }
        LeftOverEnumsJava_30 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Specs_2_36 = STATE_VARIABLE_Specs_1_34;
      }
      else
      {
        MR_Word LeastContext_55;
        MR_Word LeftOverContexts_56;
        MR_Word Var_59;
        MR_Box conv8_STATE_VARIABLE_Specs_2_36;

        LeftOverEnumsJava_30 = Var_68;
        {
          MaybeEnumJava_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumJava_29, 0) = ((MR_Box) (Var_69));
        }
        LeastContext_55 = ((MR_Word) ((MR_hl_field(0, Var_69, 3))));
        LeftOverContexts_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[21]), LeftOverEnumsJava_30);
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_59, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_59, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_6));
          MR_hl_field(0, Var_59, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_59, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(0, Var_59, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(0, Var_59, 5) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_59, 6) = ((MR_Box) (LeastContext_55));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_59, LeftOverContexts_56, ((MR_Box) (STATE_VARIABLE_Specs_1_34)), &conv8_STATE_VARIABLE_Specs_2_36);
        STATE_VARIABLE_Specs_2_36 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_2_36));
      }
    }
    mercury__list__sort_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[22]), EnumsCsharp_26, &SortedForeignEnums_70);
    if ((SortedForeignEnums_70 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MaybeEnumCsharp_31 = (MR_Word) ((MR_Unsigned) 0U);
      LeftOverEnumsCsharp_32 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_2_36;
    }
    else
    {
      MR_Word Var_84 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_70, 1))));
      MR_Word Var_85 = ((MR_Word) ((MR_hl_field(1, SortedForeignEnums_70, 0))));

      if ((Var_84 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MaybeEnumCsharp_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumCsharp_31, 0) = ((MR_Box) (Var_85));
        }
        LeftOverEnumsCsharp_32 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_2_36;
      }
      else
      {
        MR_Word LeastContext_71;
        MR_Word LeftOverContexts_72;
        MR_Word Var_75;
        MR_Box conv12_STATE_VARIABLE_Specs_14;

        LeftOverEnumsCsharp_32 = Var_84;
        {
          MaybeEnumCsharp_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeEnumCsharp_31, 0) = ((MR_Box) (Var_85));
        }
        LeastContext_71 = ((MR_Word) ((MR_hl_field(0, Var_85, 3))));
        LeftOverContexts_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[23]), LeftOverEnumsCsharp_32);
        {
          Var_75 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_75, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_75, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_enums_for_duplicates_6_p_0_9));
          MR_hl_field(0, Var_75, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_75, 3) = ((MR_Box) ((MR_String) "enum"));
          MR_hl_field(0, Var_75, 4) = ((MR_Box) (TypeCtor_8));
          MR_hl_field(0, Var_75, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_75, 6) = ((MR_Box) (LeastContext_71));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_75, LeftOverContexts_72, ((MR_Box) (STATE_VARIABLE_Specs_2_36)), &conv12_STATE_VARIABLE_Specs_14);
        *STATE_VARIABLE_Specs_14 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_14));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *MaybeEnumCJCs_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (MaybeEnumC_27));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeEnumJava_29));
      MR_hl_field(0, base, 2) = ((MR_Box) (MaybeEnumCsharp_31));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *LeftOverEnumCJCse_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (LeftOverEnumsC_28));
      MR_hl_field(0, base, 1) = ((MR_Box) (LeftOverEnumsJava_30));
      MR_hl_field(0, base, 2) = ((MR_Box) (LeftOverEnumsCsharp_32));
    }
  }
  else
  {
    *MaybeEnumCJCs_9 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[7]);
    *LeftOverEnumCJCse_10 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[8]);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv15_STATE_VARIABLE_Specs_21);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_LambdaHeadVar__3_31);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv11_STATE_VARIABLE_Specs_21);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_LambdaHeadVar__3_31);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_21);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_LambdaHeadVar__3_31);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_21);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_LambdaHeadVar__3_31);
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
    MR_Word AbsSolverDefns_11 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 0))));
    MR_Word SolverDefns_12 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 1))));
    MR_Word AbsNonSolverDefns_13 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 2))));
    MR_Word EqvDefns_14 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 3))));
    MR_Word DuDefns_15 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 4))));
    MR_Word SubDefns_16 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 5))));
    MR_Word ForeignDefns_17 = ((MR_Word) ((MR_hl_field(0, AllDefns_10, 6))));
    MR_Word AbsSolverMaybeDefn_18;
    MR_Word SolverMaybeDefn_19;
    MR_Word AbsNonSolverMaybeDefn_20;
    MR_Word EqvMaybeDefn_21;
    MR_Word DuMaybeDefn_22;
    MR_Word SubMaybeDefn_23;
    MR_Word ForeignMaybeDefn_24;
    MR_Word STATE_VARIABLE_Specs_1_29;
    MR_Word STATE_VARIABLE_Specs_2_32;
    MR_Word STATE_VARIABLE_Specs_3_35;
    MR_Word STATE_VARIABLE_Specs_4_38;
    MR_Word STATE_VARIABLE_Specs_5_41;
    MR_Word STATE_VARIABLE_Specs_6_44;

    if ((AbsSolverDefns_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AbsSolverMaybeDefn_18 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_1_29 = STATE_VARIABLE_Specs_0_25;
    }
    else
    {
      MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, AbsSolverDefns_11, 1))));
      MR_Word Var_72 = ((MR_Word) ((MR_hl_field(1, AbsSolverDefns_11, 0))));

      if ((Var_71 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          AbsSolverMaybeDefn_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AbsSolverMaybeDefn_18, 0) = ((MR_Box) (Var_72));
        }
        STATE_VARIABLE_Specs_1_29 = STATE_VARIABLE_Specs_0_25;
      }
      else
      {
        MR_Word SortedTypeDefns_64;
        MR_Word HeadTypeDefn_65;
        MR_Word TailTypeDefns_66;
        MR_Word Var_67;
        MR_Box conv2_HeadTypeDefn_65;
        MR_Box conv4_STATE_VARIABLE_Specs_1_29;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[0]), AbsSolverDefns_11, &SortedTypeDefns_64);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), SortedTypeDefns_64, &conv2_HeadTypeDefn_65, &TailTypeDefns_66);
        HeadTypeDefn_65 = ((MR_Word) (conv2_HeadTypeDefn_65));
        {
          AbsSolverMaybeDefn_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AbsSolverMaybeDefn_18, 0) = ((MR_Box) (HeadTypeDefn_65));
        }
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_2));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(0, Var_67, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(0, Var_67, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_67, 6) = ((MR_Box) ((MR_String) "abstract solver type"));
          MR_hl_field(0, Var_67, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(0, Var_67, 8) = ((MR_Box) (HeadTypeDefn_65));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_67, TailTypeDefns_66, ((MR_Box) (STATE_VARIABLE_Specs_0_25)), &conv4_STATE_VARIABLE_Specs_1_29);
        STATE_VARIABLE_Specs_1_29 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_29));
      }
    }
    if ((SolverDefns_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      SolverMaybeDefn_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_2_32 = STATE_VARIABLE_Specs_1_29;
    }
    else
    {
      MR_Word Var_81 = ((MR_Word) ((MR_hl_field(1, SolverDefns_12, 1))));
      MR_Word Var_82 = ((MR_Word) ((MR_hl_field(1, SolverDefns_12, 0))));

      if ((Var_81 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          SolverMaybeDefn_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SolverMaybeDefn_19, 0) = ((MR_Box) (Var_82));
        }
        STATE_VARIABLE_Specs_2_32 = STATE_VARIABLE_Specs_1_29;
      }
      else
      {
        MR_Word SortedTypeDefns_74;
        MR_Word HeadTypeDefn_75;
        MR_Word TailTypeDefns_76;
        MR_Word Var_77;
        MR_Box conv6_HeadTypeDefn_75;
        MR_Box conv8_STATE_VARIABLE_Specs_2_32;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[145]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[1]), SolverDefns_12, &SortedTypeDefns_74);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[145]), SortedTypeDefns_74, &conv6_HeadTypeDefn_75, &TailTypeDefns_76);
        HeadTypeDefn_75 = ((MR_Word) (conv6_HeadTypeDefn_75));
        {
          SolverMaybeDefn_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SolverMaybeDefn_19, 0) = ((MR_Box) (HeadTypeDefn_75));
        }
        {
          Var_77 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
          MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_4));
          MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_77, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0));
          MR_hl_field(0, Var_77, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_solver_0));
          MR_hl_field(0, Var_77, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_77, 6) = ((MR_Box) ((MR_String) "solver type"));
          MR_hl_field(0, Var_77, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(0, Var_77, 8) = ((MR_Box) (HeadTypeDefn_75));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[145]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_77, TailTypeDefns_76, ((MR_Box) (STATE_VARIABLE_Specs_1_29)), &conv8_STATE_VARIABLE_Specs_2_32);
        STATE_VARIABLE_Specs_2_32 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_2_32));
      }
    }
    if ((AbsNonSolverDefns_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      AbsNonSolverMaybeDefn_20 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_3_35 = STATE_VARIABLE_Specs_2_32;
    }
    else
    {
      MR_Word Var_91 = ((MR_Word) ((MR_hl_field(1, AbsNonSolverDefns_13, 1))));
      MR_Word Var_92 = ((MR_Word) ((MR_hl_field(1, AbsNonSolverDefns_13, 0))));

      if ((Var_91 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          AbsNonSolverMaybeDefn_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AbsNonSolverMaybeDefn_20, 0) = ((MR_Box) (Var_92));
        }
        STATE_VARIABLE_Specs_3_35 = STATE_VARIABLE_Specs_2_32;
      }
      else
      {
        MR_Word SortedTypeDefns_84;
        MR_Word HeadTypeDefn_85;
        MR_Word TailTypeDefns_86;
        MR_Word Var_87;
        MR_Box conv10_HeadTypeDefn_85;
        MR_Box conv12_STATE_VARIABLE_Specs_3_35;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[2]), AbsNonSolverDefns_13, &SortedTypeDefns_84);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), SortedTypeDefns_84, &conv10_HeadTypeDefn_85, &TailTypeDefns_86);
        HeadTypeDefn_85 = ((MR_Word) (conv10_HeadTypeDefn_85));
        {
          AbsNonSolverMaybeDefn_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, AbsNonSolverMaybeDefn_20, 0) = ((MR_Box) (HeadTypeDefn_85));
        }
        {
          Var_87 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_87, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
          MR_hl_field(0, Var_87, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_6));
          MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_87, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(0, Var_87, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_abstract_0));
          MR_hl_field(0, Var_87, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_87, 6) = ((MR_Box) ((MR_String) "abstract type"));
          MR_hl_field(0, Var_87, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(0, Var_87, 8) = ((MR_Box) (HeadTypeDefn_85));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[6]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_87, TailTypeDefns_86, ((MR_Box) (STATE_VARIABLE_Specs_2_32)), &conv12_STATE_VARIABLE_Specs_3_35);
        STATE_VARIABLE_Specs_3_35 = ((MR_Word) (conv12_STATE_VARIABLE_Specs_3_35));
      }
    }
    if ((EqvDefns_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      EqvMaybeDefn_21 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_4_38 = STATE_VARIABLE_Specs_3_35;
    }
    else
    {
      MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 1))));
      MR_Word Var_102 = ((MR_Word) ((MR_hl_field(1, EqvDefns_14, 0))));

      if ((Var_101 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          EqvMaybeDefn_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, EqvMaybeDefn_21, 0) = ((MR_Box) (Var_102));
        }
        STATE_VARIABLE_Specs_4_38 = STATE_VARIABLE_Specs_3_35;
      }
      else
      {
        MR_Word SortedTypeDefns_94;
        MR_Word HeadTypeDefn_95;
        MR_Word TailTypeDefns_96;
        MR_Word Var_97;
        MR_Box conv14_HeadTypeDefn_95;
        MR_Box conv16_STATE_VARIABLE_Specs_4_38;

        mercury__list__sort_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[146]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_13[3]), EqvDefns_14, &SortedTypeDefns_94);
        mercury__list__det_head_tail_3_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[146]), SortedTypeDefns_94, &conv14_HeadTypeDefn_95, &TailTypeDefns_96);
        HeadTypeDefn_95 = ((MR_Word) (conv14_HeadTypeDefn_95));
        {
          EqvMaybeDefn_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, EqvMaybeDefn_21, 0) = ((MR_Box) (HeadTypeDefn_95));
        }
        {
          Var_97 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
          MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_any_type_ctor_defns_for_duplicates_5_p_0_8));
          MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 6));
          MR_hl_field(0, Var_97, 3) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0));
          MR_hl_field(0, Var_97, 4) = ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_eqv_0));
          MR_hl_field(0, Var_97, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_97, 6) = ((MR_Box) ((MR_String) "equivalence type"));
          MR_hl_field(0, Var_97, 7) = ((MR_Box) (TypeCtor_7));
          MR_hl_field(0, Var_97, 8) = ((MR_Box) (HeadTypeDefn_95));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[146]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_97, TailTypeDefns_96, ((MR_Box) (STATE_VARIABLE_Specs_3_35)), &conv16_STATE_VARIABLE_Specs_4_38);
        STATE_VARIABLE_Specs_4_38 = ((MR_Word) (conv16_STATE_VARIABLE_Specs_4_38));
      }
    }
    parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_du_0), (MR_Integer) 1, (MR_String) "discriminated union type", TypeCtor_7, DuDefns_15, &DuMaybeDefn_22, STATE_VARIABLE_Specs_4_38, &STATE_VARIABLE_Specs_5_41);
    parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_details_sub_0), (MR_Integer) 1, (MR_String) "subtype", TypeCtor_7, SubDefns_16, &SubMaybeDefn_23, STATE_VARIABLE_Specs_5_41, &STATE_VARIABLE_Specs_6_44);
    parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0(TypeCtor_7, ForeignDefns_17, &ForeignMaybeDefn_24, STATE_VARIABLE_Specs_6_44, STATE_VARIABLE_Specs_26);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDefn_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (AbsSolverMaybeDefn_18));
      MR_hl_field(0, base, 1) = ((MR_Box) (SolverMaybeDefn_19));
      MR_hl_field(0, base, 2) = ((MR_Box) (AbsNonSolverMaybeDefn_20));
      MR_hl_field(0, base, 3) = ((MR_Box) (EqvMaybeDefn_21));
      MR_hl_field(0, base, 4) = ((MR_Box) (DuMaybeDefn_22));
      MR_hl_field(0, base, 5) = ((MR_Box) (SubMaybeDefn_23));
      MR_hl_field(0, base, 6) = ((MR_Box) (ForeignMaybeDefn_24));
    }
  }
  else
  {
    *MaybeDefn_8 = (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[0]);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv13_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1492__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_HeadVar__3_32);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1492__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__3_32);
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_foreign_defn_7_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Specs_18);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_foreign_type_for_lang__1492__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_32);
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
  MR_Word DefnsC_10 = ((MR_Word) ((MR_hl_field(0, DefnsCJCs_7, 0))));
  MR_Word DefnsJava_11 = ((MR_Word) ((MR_hl_field(0, DefnsCJCs_7, 1))));
  MR_Word DefnsCsharp_12 = ((MR_Word) ((MR_hl_field(0, DefnsCJCs_7, 2))));
  MR_Word MaybeDefnC_13;
  MR_Word MaybeDefnJava_14;
  MR_Word MaybeDefnCsharp_15;
  MR_Word STATE_VARIABLE_Specs_1_19;
  MR_Word STATE_VARIABLE_Specs_2_21;

  if ((DefnsC_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeDefnC_13 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_1_19 = STATE_VARIABLE_Specs_0_16;
  }
  else
  {
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, DefnsC_10, 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, DefnsC_10, 0))));

    if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnC_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnC_13, 0) = ((MR_Box) (Var_37));
      }
      STATE_VARIABLE_Specs_1_19 = STATE_VARIABLE_Specs_0_16;
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
        MaybeDefnC_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnC_13, 0) = ((MR_Box) (Var_37));
      }
      Var_27 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[9]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[15]), DefnsC_10, ((MR_Box) (Var_27)), &conv1_Contexts_23);
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
        MR_Box conv4_STATE_VARIABLE_Specs_1_19;

        {
          Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_2));
          MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_28, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(0, Var_28, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(0, Var_28, 5) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(0, Var_28, 6) = ((MR_Box) (LeastContext_24));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_28, OtherContexts_25, ((MR_Box) (STATE_VARIABLE_Specs_0_16)), &conv4_STATE_VARIABLE_Specs_1_19);
        STATE_VARIABLE_Specs_1_19 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_1_19));
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
    STATE_VARIABLE_Specs_2_21 = STATE_VARIABLE_Specs_1_19;
  }
  else
  {
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, DefnsJava_11, 1))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(1, DefnsJava_11, 0))));

    if ((Var_51 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnJava_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnJava_14, 0) = ((MR_Box) (Var_52));
      }
      STATE_VARIABLE_Specs_2_21 = STATE_VARIABLE_Specs_1_19;
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
        MaybeDefnJava_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnJava_14, 0) = ((MR_Box) (Var_52));
      }
      Var_42 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[9]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[16]), DefnsJava_11, ((MR_Box) (Var_42)), &conv6_Contexts_38);
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
        MR_Box conv9_STATE_VARIABLE_Specs_2_21;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_43, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_4));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_43, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(0, Var_43, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(0, Var_43, 5) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_43, 6) = ((MR_Box) (LeastContext_39));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_43, OtherContexts_40, ((MR_Box) (STATE_VARIABLE_Specs_1_19)), &conv9_STATE_VARIABLE_Specs_2_21);
        STATE_VARIABLE_Specs_2_21 = ((MR_Word) (conv9_STATE_VARIABLE_Specs_2_21));
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
    *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_2_21;
  }
  else
  {
    MR_Word Var_66 = ((MR_Word) ((MR_hl_field(1, DefnsCsharp_12, 1))));
    MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, DefnsCsharp_12, 0))));

    if ((Var_66 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MaybeDefnCsharp_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnCsharp_15, 0) = ((MR_Box) (Var_67));
      }
      *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_2_21;
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
        MaybeDefnCsharp_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeDefnCsharp_15, 0) = ((MR_Box) (Var_67));
      }
      Var_57 = mercury__set__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[9]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[17]), DefnsCsharp_12, ((MR_Box) (Var_57)), &conv11_Contexts_53);
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
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[2]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_foreign_type_for_all_langs_5_p_0_6));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) ((MR_String) "type"));
          MR_hl_field(0, Var_58, 4) = ((MR_Box) (TypeCtor_6));
          MR_hl_field(0, Var_58, 5) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_58, 6) = ((MR_Box) (LeastContext_54));
        }
        mercury__set__foldl_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_58, OtherContexts_55, ((MR_Box) (STATE_VARIABLE_Specs_2_21)), &conv14_STATE_VARIABLE_Specs_17);
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
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnC_13));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnJava_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnCsharp_15));
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

  parse_tree__check_type_inst_mode_defns__report_duplicate_type_decl_or_defn_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_Specs_21);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__at_most_one_type_decl_or_defn__1386__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_31);
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
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(1, TypeDefns_11, 1))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, TypeDefns_11, 0))));

    if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_58));
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
        MR_hl_field(0, CompareTypeDefnsByContext_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[4]));
        MR_hl_field(0, CompareTypeDefnsByContext_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_1));
        MR_hl_field(0, CompareTypeDefnsByContext_18, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, CompareTypeDefnsByContext_18, 3) = ((MR_Box) (TypeInfo_for_T_49));
      }
      {
        TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_52_52, 0) = ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_general_1));
        MR_hl_field(0, TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_49));
      }
      mercury__list__sort_3_p_0(TypeInfo_52_52, (MR_Word) (CompareTypeDefnsByContext_18), (MR_Word) (TypeDefns_11), &conv1_SortedTypeDefns_22);
      SortedTypeDefns_22 = (MR_Word) (conv1_SortedTypeDefns_22);
      mercury__list__det_head_tail_3_p_0(TypeInfo_52_52, (MR_Word) (SortedTypeDefns_22), &conv3_HeadTypeDefn_23, &conv2_TailTypeDefns_24);
      HeadTypeDefn_23 = ((MR_Word) (conv3_HeadTypeDefn_23));
      TailTypeDefns_24 = (MR_Word) (conv2_TailTypeDefns_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeTypeDefn_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadTypeDefn_23));
      }
      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[1]));
        MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__at_most_one_type_decl_or_defn_7_p_0_2));
        MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 6));
        MR_hl_field(0, Var_34, 3) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(0, Var_34, 4) = ((MR_Box) (TypeInfo_for_T_49));
        MR_hl_field(0, Var_34, 5) = ((MR_Box) (DeclOrDefn_8));
        MR_hl_field(0, Var_34, 6) = ((MR_Box) (Kind_9));
        MR_hl_field(0, Var_34, 7) = ((MR_Box) (TypeCtor_10));
        MR_hl_field(0, Var_34, 8) = ((MR_Box) (HeadTypeDefn_23));
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
  MR_Word TypeCtorSymName_10 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, 0))));
  MR_Word TypeCtorModuleName_12;
  MR_Word BuiltinTypeCtors_13;
  MR_String Var_18;
  MR_Word TypeCtorInfo_51_51;

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
        Var_18 = ((MR_String) ((MR_hl_field(0, TypeCtorModuleName_12, 0))));
        succeeded = (strcmp(Var_18, (MR_String) "type_desc") == 0);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_51_51 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_51_51, ((MR_Box) (TypeCtor_7)), BuiltinTypeCtors_13);
        succeeded = !(succeeded);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_45;

    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (TypeCtor_7));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_24 = parse_tree__error_spec__color_as_subject_1_f_0(Var_25);
    Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[118])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_34, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[116])), Var_33);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_28);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[114])), Var_23);
    Var_45 = ((MR_Word) ((MR_hl_field(0, AbsTypeDefn_8, 4))));
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.maybe_report_declared_but_undefined_type\'/5"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
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
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  if ((MaybeImpAbstractDefn_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
  else
  {
    MR_Word ImpAbstractDefn_10 = ((MR_Word) ((MR_hl_field(1, MaybeImpAbstractDefn_8, 0))));
    MR_Word Pieces_11;
    MR_Word Spec_13;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_50;

    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (TypeCtor_6));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_21 = parse_tree__error_spec__color_as_subject_1_f_0(Var_22);
    Var_31 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[91])));
    {
      Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_40, 1) = ((MR_Box) (Section_7));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[94])));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[92])));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
    }
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_36);
    Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[89])), Var_30);
    Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_25);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[87])), Var_20);
    Var_50 = ((MR_Word) ((MR_hl_field(0, ImpAbstractDefn_10, 4))));
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_redundant_abstract_type_in_imp\'/5"));
      MR_hl_field(0, Spec_13, 1) = ((MR_Box) (MR_mkword(2, &parse_tree__check_type_inst_mode_defns_scalar_common_3[0])));
      MR_hl_field(0, Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(0, Spec_13, 3) = ((MR_Box) (Var_50));
      MR_hl_field(0, Spec_13, 4) = ((MR_Box) (Pieces_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
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
    MR_Word IntDefn_16 = ((MR_Word) ((MR_hl_field(1, IntMaybeDefn_10, 0))));
    MR_Word Pieces_17;
    MR_Word Spec_18;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_56;
    MR_Word Var_57;

    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 21U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (TypeCtor_9));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_29 = parse_tree__error_spec__color_as_subject_1_f_0(Var_30);
    Var_39 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[85])));
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
    Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[83])), Var_38);
    Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, Var_33);
    Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[81])), Var_28);
    Var_53 = ((MR_Word) ((MR_hl_field(0, IntDefn_16, 0))));
    Var_54 = ((MR_Word) ((MR_hl_field(0, IntDefn_16, 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(0, IntDefn_16, 3))));
    Var_50 = ((MR_Word) ((MR_hl_field(0, IntDefn_16, 4))));
    Var_57 = ((MR_Word) ((MR_hl_field(0, IntDefn_16, 5))));
    {
      Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_any_nonabstract_solver_type_in_int\'/8"));
      MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Var_50));
      MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
    }
    if ((IntMaybeAbstractDefn0_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word IntAbstractDefn_19;

      {
        IntAbstractDefn_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, IntAbstractDefn_19, 0) = ((MR_Box) (Var_53));
        MR_hl_field(0, IntAbstractDefn_19, 1) = ((MR_Box) (Var_54));
        MR_hl_field(0, IntAbstractDefn_19, 2) = ((MR_Box) ((MR_Unsigned) 12U));
        MR_hl_field(0, IntAbstractDefn_19, 3) = ((MR_Box) (Var_56));
        MR_hl_field(0, IntAbstractDefn_19, 4) = ((MR_Box) (Var_50));
        MR_hl_field(0, IntAbstractDefn_19, 5) = ((MR_Box) (Var_57));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *IntMaybeAbstractDefn_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (IntAbstractDefn_19));
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
parse_tree__check_type_inst_mode_defns__find_non_enum_ctors_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_NonEnumSNAs_0_2,
  MR_Word * STATE_VARIABLE_NonEnumSNAs_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_NonEnumSNAs_3 = STATE_VARIABLE_NonEnumSNAs_0_2;
    else
    {
      MR_Word Ctor_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ctors_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CtorSymName_10 = ((MR_Word) ((MR_hl_field(0, Ctor_7, 2))));
      MR_Integer CtorArity_11 = ((MR_Integer) ((MR_hl_field(0, Ctor_7, 4))));
      MR_Word STATE_VARIABLE_NonEnumSNAs_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_NonEnumSNAs_0_2;

      succeeded = (CtorArity_11 == (MR_Integer) 0);
      if (succeeded)
        STATE_VARIABLE_NonEnumSNAs_1_15 = STATE_VARIABLE_NonEnumSNAs_0_2;
      else
      {
        MR_Word CtorSNA_12;

        {
          CtorSNA_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CtorSNA_12, 0) = ((MR_Box) (CtorSymName_10));
          MR_hl_field(0, CtorSNA_12, 1) = ((MR_Box) (CtorArity_11));
        }
        mercury__cord__snoc_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), ((MR_Box) (CtorSNA_12)), STATE_VARIABLE_NonEnumSNAs_0_2, &STATE_VARIABLE_NonEnumSNAs_1_15);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_8;
      next_value_of_STATE_VARIABLE_NonEnumSNAs_0_2 = STATE_VARIABLE_NonEnumSNAs_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NonEnumSNAs_0_2 = next_value_of_STATE_VARIABLE_NonEnumSNAs_0_2;
      continue;
    }
    break;
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
  MR_Word STATE_VARIABLE_Specs_1_41;
  MR_Word STATE_VARIABLE_Specs_2_42;
  MR_Word Var_44;
  MR_Word Var_45;

  mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CtorNames_12, &CtorNamesSet_20);
  MaybeDefnC_21 = ((MR_Word) ((MR_hl_field(0, MaybeDefnCJCs_13, 0))));
  MaybeDefnJava_22 = ((MR_Word) ((MR_hl_field(0, MaybeDefnCJCs_13, 1))));
  MaybeDefnCsharp_23 = ((MR_Word) ((MR_hl_field(0, MaybeDefnCJCs_13, 2))));
  MaybeEnumC_24 = ((MR_Word) ((MR_hl_field(0, MaybeEnumCJCs_14, 0))));
  MaybeEnumJava_25 = ((MR_Word) ((MR_hl_field(0, MaybeEnumCJCs_14, 1))));
  MaybeEnumCsharp_26 = ((MR_Word) ((MR_hl_field(0, MaybeEnumCJCs_14, 2))));
  LeftOverEnumsC_27 = ((MR_Word) ((MR_hl_field(0, LeftOverEnumsCJCs_15, 0))));
  LeftOverEnumsJava_28 = ((MR_Word) ((MR_hl_field(0, LeftOverEnumsCJCs_15, 1))));
  LeftOverEnumsCsharp_29 = ((MR_Word) ((MR_hl_field(0, LeftOverEnumsCJCs_15, 2))));
  parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnC_21, MaybeEnumC_24, LeftOverEnumsC_27, &MaybeDefnOrEnumC_30, &SrcForeignDefnsC_31, &SrcForeignEnumsC_32, STATE_VARIABLE_Specs_0_39, &STATE_VARIABLE_Specs_1_41);
  parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnJava_22, MaybeEnumJava_25, LeftOverEnumsJava_28, &MaybeDefnOrEnumJava_33, &SrcForeignDefnsJava_34, &SrcForeignEnumsJava_35, STATE_VARIABLE_Specs_1_41, &STATE_VARIABLE_Specs_2_42);
  parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0(TypeCtor_11, CtorNames_12, CtorNamesSet_20, MaybeDefnCsharp_23, MaybeEnumCsharp_26, LeftOverEnumsCsharp_29, &MaybeDefnOrEnumCsharp_36, &SrcForeignDefnsCsharp_37, &SrcForeignEnumsCsharp_38, STATE_VARIABLE_Specs_2_42, STATE_VARIABLE_Specs_40);
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), SrcForeignDefnsJava_34, SrcForeignDefnsCsharp_37);
  *SrcForeignDefns_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), SrcForeignDefnsC_31, Var_44);
  Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SrcForeignEnumsJava_35, SrcForeignEnumsCsharp_38);
  *SrcForeignEnums_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), SrcForeignEnumsC_32, Var_45);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *MaybeDefnOrEnumCJCs_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MaybeDefnOrEnumC_30));
    MR_hl_field(0, base, 1) = ((MR_Box) (MaybeDefnOrEnumJava_33));
    MR_hl_field(0, base, 2) = ((MR_Box) (MaybeDefnOrEnumCsharp_36));
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

  parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MaybeCheckedForeignEnum_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_MaybeCheckedForeignEnum_10));
}

static MR_bool MR_CALL 
parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_du_repn_foreign_only_constants_lang__935__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_6[2]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_1));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (LeftOverEnums_17));
      MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.decide_du_repn_foreign_only_constants_lang\'/11", (MR_String) "MaybeEnum = no but LeftOverEnums != []");
    MaybeCheckedForeignEnum_22 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_32 = STATE_VARIABLE_Specs_0_31;
  }
  else
  {
    MR_Word Enum_23 = ((MR_Word) ((MR_hl_field(1, MaybeEnum_16, 0))));
    MR_Word CFESpecs_26;
    MR_Word Var_37;
    MR_Word HeadMaybeCFE_50;
    MR_Word TailMaybeCFEs_51;
    MR_Word TailMaybeCFE_54;
    MR_Word TailSpecs_55;

    parse_tree__check_type_inst_mode_defns__build_mercury_foreign_enum_map_5_p_0(TypeCtor_12, CtorNames_13, CtorNamesSet_14, Enum_23, &HeadMaybeCFE_50);
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[1]));
      MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_du_repn_foreign_only_constants_lang_11_p_0_2));
      MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_37, 3) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(0, Var_37, 4) = ((MR_Box) (CtorNames_13));
      MR_hl_field(0, Var_37, 5) = ((MR_Box) (CtorNamesSet_14));
    }
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_enum_info_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[4]), Var_37, LeftOverEnums_17, &TailMaybeCFEs_51);
    parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(TailMaybeCFEs_51, &TailMaybeCFE_54, &TailSpecs_55);
    if (((MR_tag((MR_Word) HeadMaybeCFE_50)) == (MR_Integer) 0))
    {
      MR_Word HeadSpecs_57 = ((MR_Word) ((MR_hl_field(0, HeadMaybeCFE_50, 0))));

      MaybeCheckedForeignEnum_22 = TailMaybeCFE_54;
      CFESpecs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadSpecs_57, TailSpecs_55);
    }
    else
    {
      MR_Word CFE_56 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCFE_50, 0))));

      {
        MaybeCheckedForeignEnum_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCheckedForeignEnum_22, 0) = ((MR_Box) (CFE_56));
      }
      CFESpecs_26 = TailSpecs_55;
    }
    *STATE_VARIABLE_Specs_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), CFESpecs_26, STATE_VARIABLE_Specs_0_31);
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
      MR_Word CheckedForeignEnum_28 = ((MR_Word) ((MR_hl_field(1, MaybeCheckedForeignEnum_22, 0))));
      MR_Word EnumInfo_29;
      MR_Word Var_42 = (MR_Word) ((MR_Word) (CheckedForeignEnum_28));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDefnOrEnum_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_42));
      }
      EnumInfo_29 = ((MR_Word) ((MR_hl_field(0, CheckedForeignEnum_28, 0))));
      *SrcForeignDefns_19 = (MR_Word) ((MR_Unsigned) 0U);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *SrcForeignEnums_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (EnumInfo_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (*SrcForeignDefns_19));
      }
    }
  else
  {
    MR_Word Defn_27 = ((MR_Word) ((MR_hl_field(1, MaybeDefn_15, 0))));
    MR_Word Var_40;

    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Defn_27));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeDefnOrEnum_18 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SrcForeignDefns_19 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Defn_27));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Word MercuryForeignOoM_13 = ((MR_Word) ((MR_hl_field(0, ForeignEnum_9, 2))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, ForeignEnum_9, 3))));
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

  MercuryForeignAL_16 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[5]), MercuryForeignOoM_13);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeCtor_6));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[32])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[30])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[29])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    ContextPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ContextPieces_17, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[28])));
    MR_hl_field(1, ContextPieces_17, 1) = ((MR_Box) (Var_32));
  }
  TypeCtorSymName_18 = ((MR_Word) ((MR_hl_field(0, TypeCtor_6, 0))));
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
      MR_String HeadForeignName_24 = ((MR_String) ((MR_hl_field(1, ForeignNames_23, 0))));
      MR_Word TailForeignNames_25 = ((MR_Word) ((MR_hl_field(1, ForeignNames_23, 1))));

      {
        ForeignNameOoM_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ForeignNameOoM_26, 0) = ((MR_Box) (HeadForeignName_24));
        MR_hl_field(0, ForeignNameOoM_26, 1) = ((MR_Box) (TailForeignNames_25));
      }
    }
    {
      CheckedForeignEnum_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CheckedForeignEnum_27, 0) = ((MR_Box) (ForeignEnum_9));
      MR_hl_field(0, CheckedForeignEnum_27, 1) = ((MR_Box) (ForeignNameOoM_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeCheckedForeignEnum_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (CheckedForeignEnum_27));
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCheckedForeignEnum_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_22));
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
    MR_Word HeadMaybeCFE_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailMaybeCFEs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word TailMaybeCFE_8;
    MR_Word TailSpecs_9;

    parse_tree__check_type_inst_mode_defns__pick_first_error_free_enum_if_any_3_p_0(TailMaybeCFEs_5, &TailMaybeCFE_8, &TailSpecs_9);
    if (((MR_tag((MR_Word) HeadMaybeCFE_4)) == (MR_Integer) 0))
    {
      MR_Word HeadSpecs_11 = ((MR_Word) ((MR_hl_field(0, HeadMaybeCFE_4, 0))));

      *HeadVar__2_2 = TailMaybeCFE_8;
      *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), HeadSpecs_11, TailSpecs_9);
    }
    else
    {
      MR_Word CFE_10 = ((MR_Word) ((MR_hl_field(1, HeadMaybeCFE_4, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CFE_10));
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

  parse_tree__check_type_inst_mode_defns__foreign_int_report_any_foreign_defn_in_imp_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_STATE_VARIABLE_Specs_14);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__decide_only_foreign_type_section__834__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__7_101);
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

  parse_tree__check_type_inst_mode_defns__report_any_foreign_type_without_declaration_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Specs_11);
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
  MR_Word MaybeTypeDefn_112 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_19, 0))));
  MR_Word TailDefns_115;
  MR_Word MaybeTypeDefn_117 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_19, 1))));
  MR_Word MaybeTypeDefns_118;
  MR_Word TailDefns_120;
  MR_Word MaybeTypeDefn_122 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_19, 2))));
  MR_Word MaybeTypeDefn_132 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_20, 0))));
  MR_Word TailDefns_135;
  MR_Word MaybeTypeDefn_137 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_20, 1))));
  MR_Word MaybeTypeDefns_138;
  MR_Word TailDefns_140;
  MR_Word MaybeTypeDefn_142 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_20, 2))));
  MR_Word MaybeTypeDefns_113;
  MR_Word MaybeTypeDefns_133;

  {
    MaybeTypeDefns_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_118, 0) = ((MR_Box) (MaybeTypeDefn_122));
    MR_hl_field(1, MaybeTypeDefns_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_113, 0) = ((MR_Box) (MaybeTypeDefn_117));
    MR_hl_field(1, MaybeTypeDefns_113, 1) = ((MR_Box) (MaybeTypeDefns_118));
  }
  if ((MaybeTypeDefn_122 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_120 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_126 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_122, 0))));

    {
      TailDefns_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_120, 0) = ((MR_Box) (TypeDefn_126));
      MR_hl_field(1, TailDefns_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_117 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_115 = TailDefns_120;
  else
  {
    MR_Word TypeDefn_121 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_117, 0))));

    {
      TailDefns_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_115, 0) = ((MR_Box) (TypeDefn_121));
      MR_hl_field(1, TailDefns_115, 1) = ((MR_Box) (TailDefns_120));
    }
  }
  if ((MaybeTypeDefn_112 == (MR_Word) ((MR_Unsigned) 0U)))
    IntDefnsCJCs_32 = TailDefns_115;
  else
  {
    MR_Word TypeDefn_116 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_112, 0))));

    {
      IntDefnsCJCs_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IntDefnsCJCs_32, 0) = ((MR_Box) (TypeDefn_116));
      MR_hl_field(1, IntDefnsCJCs_32, 1) = ((MR_Box) (TailDefns_115));
    }
  }
  {
    MaybeTypeDefns_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_138, 0) = ((MR_Box) (MaybeTypeDefn_142));
    MR_hl_field(1, MaybeTypeDefns_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_133, 0) = ((MR_Box) (MaybeTypeDefn_137));
    MR_hl_field(1, MaybeTypeDefns_133, 1) = ((MR_Box) (MaybeTypeDefns_138));
  }
  if ((MaybeTypeDefn_142 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_140 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_146 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_142, 0))));

    {
      TailDefns_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_140, 0) = ((MR_Box) (TypeDefn_146));
      MR_hl_field(1, TailDefns_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_137 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_135 = TailDefns_140;
  else
  {
    MR_Word TypeDefn_141 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_137, 0))));

    {
      TailDefns_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_135, 0) = ((MR_Box) (TypeDefn_141));
      MR_hl_field(1, TailDefns_135, 1) = ((MR_Box) (TailDefns_140));
    }
  }
  if ((MaybeTypeDefn_132 == (MR_Word) ((MR_Unsigned) 0U)))
    ImpDefnsCJCs_33 = TailDefns_135;
  else
  {
    MR_Word TypeDefn_136 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_132, 0))));

    {
      ImpDefnsCJCs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpDefnsCJCs_33, 0) = ((MR_Box) (TypeDefn_136));
      MR_hl_field(1, ImpDefnsCJCs_33, 1) = ((MR_Box) (TailDefns_135));
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
      if (!(succeeded))
        succeeded = (ImpAbsSolverMaybeDefn_16 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
      else
      {
        MR_Word Var_72;
        MR_Box conv1_STATE_VARIABLE_Specs_47;

        {
          Var_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_72, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_4[3]));
          MR_hl_field(0, Var_72, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_1));
          MR_hl_field(0, Var_72, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_72, 3) = ((MR_Box) (TypeCtor_14));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_72, IntImpDefnsCJCs_42, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv1_STATE_VARIABLE_Specs_47);
        *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv1_STATE_VARIABLE_Specs_47));
      }
      conv2_FirstDefn_45 = mercury__list__det_head_1_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), IntImpDefnsCJCs_42);
      FirstDefn_45 = ((MR_Word) (conv2_FirstDefn_45));
      Var_79 = ((MR_Word) ((MR_hl_field(0, FirstDefn_45, 0))));
      Var_80 = ((MR_Word) ((MR_hl_field(0, FirstDefn_45, 1))));
      Var_82 = ((MR_Word) ((MR_hl_field(0, FirstDefn_45, 3))));
      Var_83 = ((MR_Word) ((MR_hl_field(0, FirstDefn_45, 4))));
      Var_84 = ((MR_Word) ((MR_hl_field(0, FirstDefn_45, 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *AbsStdDefn_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_79));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_80));
        MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_82));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_83));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_84));
      }
    }
    else
    {
      MR_Word Var_68;
      MR_Box conv4_STATE_VARIABLE_Specs_47;

      *AbsStdDefn_22 = ((MR_Word) ((MR_hl_field(1, ImpAbsStdMaybeDefn_18, 0))));
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[1]));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_2));
        MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(0, Var_68, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_68, 4) = ((MR_Box) (*AbsStdDefn_22));
        MR_hl_field(0, Var_68, 5) = ((MR_Box) ((MR_String) "declaration"));
        MR_hl_field(0, Var_68, 6) = ((MR_Box) ((MR_String) "implementation"));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_68, IntDefnsCJCs_32, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv4_STATE_VARIABLE_Specs_47);
      *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_47));
    }
    *ChosenMaybeDefnCJCs_23 = ImpMaybeDefnCJCs_20;
    SrcDefnsInt_39 = (MR_Word) ((MR_Unsigned) 0U);
    Var_75 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbsStdDefn_22);
    Var_76 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[12]), ImpDefnsCJCs_33);
    {
      SrcDefnsImp_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SrcDefnsImp_40, 0) = ((MR_Box) (Var_75));
      MR_hl_field(1, SrcDefnsImp_40, 1) = ((MR_Box) (Var_76));
    }
  }
  else
  {
    MR_Word IntContexts_35;
    MR_Word SortedIntContexts_36;
    MR_Word TailContexts_155;
    MR_Word TailContexts_166;

    *AbsStdDefn_22 = ((MR_Word) ((MR_hl_field(1, IntAbsStdMaybeDefn_17, 0))));
    if ((MaybeTypeDefn_122 == (MR_Word) ((MR_Unsigned) 0U)))
      TailContexts_166 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word TypeDefn_178 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_122, 0))));
      MR_Word Var_179 = ((MR_Word) ((MR_hl_field(0, TypeDefn_178, 4))));

      {
        TailContexts_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TailContexts_166, 0) = ((MR_Box) (Var_179));
        MR_hl_field(1, TailContexts_166, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    if ((MaybeTypeDefn_117 == (MR_Word) ((MR_Unsigned) 0U)))
      TailContexts_155 = TailContexts_166;
    else
    {
      MR_Word TypeDefn_167 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_117, 0))));
      MR_Word Var_168 = ((MR_Word) ((MR_hl_field(0, TypeDefn_167, 4))));

      {
        TailContexts_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TailContexts_155, 0) = ((MR_Box) (Var_168));
        MR_hl_field(1, TailContexts_155, 1) = ((MR_Box) (TailContexts_166));
      }
    }
    if ((MaybeTypeDefn_112 == (MR_Word) ((MR_Unsigned) 0U)))
      IntContexts_35 = TailContexts_155;
    else
    {
      MR_Word TypeDefn_156 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_112, 0))));
      MR_Word Var_157 = ((MR_Word) ((MR_hl_field(0, TypeDefn_156, 4))));

      {
        IntContexts_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, IntContexts_35, 0) = ((MR_Box) (Var_157));
        MR_hl_field(1, IntContexts_35, 1) = ((MR_Box) (TailContexts_155));
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
        SrcDefnsInt_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsInt_39, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, SrcDefnsInt_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      SrcDefnsImp_40 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[13]), ImpDefnsCJCs_33);
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
    }
    else
    {
      MR_Word FirstIntContext_37 = ((MR_Word) ((MR_hl_field(1, SortedIntContexts_36, 0))));
      MR_Word Var_60;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Box conv8_STATE_VARIABLE_Specs_47;

      *Status_21 = (MR_Integer) 0;
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_9[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__decide_only_foreign_type_section_13_p_0_5));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (TypeCtor_14));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) (FirstIntContext_37));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_60, ImpDefnsCJCs_33, ((MR_Box) (STATE_VARIABLE_Specs_0_46)), &conv8_STATE_VARIABLE_Specs_47);
      *STATE_VARIABLE_Specs_47 = ((MR_Word) (conv8_STATE_VARIABLE_Specs_47));
      *ChosenMaybeDefnCJCs_23 = IntMaybeDefnCJCs_19;
      Var_62 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(*AbsStdDefn_22);
      Var_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[7]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[14]), IntDefnsCJCs_32);
      {
        SrcDefnsInt_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SrcDefnsInt_39, 0) = ((MR_Box) (Var_62));
        MR_hl_field(1, SrcDefnsInt_39, 1) = ((MR_Box) (Var_63));
      }
      SrcDefnsImp_40 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *SrcDefns_24 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SrcDefnsInt_39));
    MR_hl_field(0, base, 1) = ((MR_Box) (SrcDefnsImp_40));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__726__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__7_62);
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

  parse_tree__check_type_inst_mode_defns__IntroducedFrom__pred__check_du_foreign_type_section__737__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__7_68);
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
  MR_Word MaybeTypeDefn_72 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_18, 0))));
  MR_Word TailDefns_75;
  MR_Word MaybeTypeDefn_77 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_18, 1))));
  MR_Word MaybeTypeDefns_78;
  MR_Word TailDefns_80;
  MR_Word MaybeTypeDefn_82 = ((MR_Word) ((MR_hl_field(0, IntMaybeDefnCJCs_18, 2))));
  MR_Word MaybeTypeDefn_92 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_19, 0))));
  MR_Word TailDefns_95;
  MR_Word MaybeTypeDefn_97 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_19, 1))));
  MR_Word MaybeTypeDefns_98;
  MR_Word TailDefns_100;
  MR_Word MaybeTypeDefn_102 = ((MR_Word) ((MR_hl_field(0, ImpMaybeDefnCJCs_19, 2))));
  MR_Word MaybeTypeDefns_73;
  MR_Word MaybeTypeDefns_93;

  {
    MaybeTypeDefns_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_78, 0) = ((MR_Box) (MaybeTypeDefn_82));
    MR_hl_field(1, MaybeTypeDefns_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_73, 0) = ((MR_Box) (MaybeTypeDefn_77));
    MR_hl_field(1, MaybeTypeDefns_73, 1) = ((MR_Box) (MaybeTypeDefns_78));
  }
  if ((MaybeTypeDefn_82 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_80 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_86 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_82, 0))));

    {
      TailDefns_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_80, 0) = ((MR_Box) (TypeDefn_86));
      MR_hl_field(1, TailDefns_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_77 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_75 = TailDefns_80;
  else
  {
    MR_Word TypeDefn_81 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_77, 0))));

    {
      TailDefns_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_75, 0) = ((MR_Box) (TypeDefn_81));
      MR_hl_field(1, TailDefns_75, 1) = ((MR_Box) (TailDefns_80));
    }
  }
  if ((MaybeTypeDefn_72 == (MR_Word) ((MR_Unsigned) 0U)))
    IntDefnsCJCs_32 = TailDefns_75;
  else
  {
    MR_Word TypeDefn_76 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_72, 0))));

    {
      IntDefnsCJCs_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IntDefnsCJCs_32, 0) = ((MR_Box) (TypeDefn_76));
      MR_hl_field(1, IntDefnsCJCs_32, 1) = ((MR_Box) (TailDefns_75));
    }
  }
  {
    MaybeTypeDefns_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_98, 0) = ((MR_Box) (MaybeTypeDefn_102));
    MR_hl_field(1, MaybeTypeDefns_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MaybeTypeDefns_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeTypeDefns_93, 0) = ((MR_Box) (MaybeTypeDefn_97));
    MR_hl_field(1, MaybeTypeDefns_93, 1) = ((MR_Box) (MaybeTypeDefns_98));
  }
  if ((MaybeTypeDefn_102 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_100 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TypeDefn_106 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_102, 0))));

    {
      TailDefns_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_100, 0) = ((MR_Box) (TypeDefn_106));
      MR_hl_field(1, TailDefns_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeTypeDefn_97 == (MR_Word) ((MR_Unsigned) 0U)))
    TailDefns_95 = TailDefns_100;
  else
  {
    MR_Word TypeDefn_101 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_97, 0))));

    {
      TailDefns_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TailDefns_95, 0) = ((MR_Box) (TypeDefn_101));
      MR_hl_field(1, TailDefns_95, 1) = ((MR_Box) (TailDefns_100));
    }
  }
  if ((MaybeTypeDefn_92 == (MR_Word) ((MR_Unsigned) 0U)))
    ImpDefnsCJCs_33 = TailDefns_95;
  else
  {
    MR_Word TypeDefn_96 = ((MR_Word) ((MR_hl_field(1, MaybeTypeDefn_92, 0))));

    {
      ImpDefnsCJCs_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ImpDefnsCJCs_33, 0) = ((MR_Box) (TypeDefn_96));
      MR_hl_field(1, ImpDefnsCJCs_33, 1) = ((MR_Box) (TailDefns_95));
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
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_1));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) (DuDefn_15));
          MR_hl_field(0, Var_51, 5) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(0, Var_51, 6) = ((MR_Box) ((MR_String) "implementation"));
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
          MR_Word IntAbstractStdDefn_34 = ((MR_Word) ((MR_hl_field(1, IntAbstractStdMaybeDefn_17, 0))));
          MR_Word Var_55;

          *Status_20 = (MR_Integer) 2;
          Var_55 = parse_tree__item_util__wrap_abstract_type_defn_1_f_0(IntAbstractStdDefn_34);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *SrcDefnsDuInt_23 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_55));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        *ChosenSectionCJCs_21 = (MR_Integer) 1;
        *ChosenMaybeDefnCJCs_22 = ImpMaybeDefnCJCs_19;
        Var_57 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsDuImp_24 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
          MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_8[0]));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__check_du_foreign_type_section_13_p_0_2));
          MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_45, 3) = ((MR_Box) (TypeCtor_14));
          MR_hl_field(0, Var_45, 4) = ((MR_Box) (DuDefn_15));
          MR_hl_field(0, Var_45, 5) = ((MR_Box) ((MR_String) "definition"));
          MR_hl_field(0, Var_45, 6) = ((MR_Box) ((MR_String) "interface"));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[8]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_45, ImpDefnsCJCs_33, ((MR_Box) (STATE_VARIABLE_Specs_0_35)), &conv3_STATE_VARIABLE_Specs_36);
        *STATE_VARIABLE_Specs_36 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_36));
        *Status_20 = (MR_Integer) 0;
        *ChosenSectionCJCs_21 = (MR_Integer) 0;
        *ChosenMaybeDefnCJCs_22 = IntMaybeDefnCJCs_18;
        Var_49 = parse_tree__item_util__wrap_du_type_defn_1_f_0(DuDefn_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *SrcDefnsDuInt_23 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

  parse_tree__check_type_inst_mode_defns__check_mode_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
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
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[1]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_mode_ctor_checked_map_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (InsistOnDefn_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (IntModeDefnMap_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (ImpModeDefnMap_9));
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

  parse_tree__check_type_inst_mode_defns__check_inst_ctor_defns_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_CheckedMap_34, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_36);
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
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_7[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_inst_ctor_checked_map_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (InsistOnDefn_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (IntInstDefnMap_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (ImpInstDefnMap_9));
  }
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_inst_ctor_checked_defn_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[2]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_18, InstCtors_14, ((MR_Box) (Var_19)), &conv3_CheckedMap_10, ((MR_Box) (STATE_VARIABLE_Specs_0_15)), &conv2_STATE_VARIABLE_Specs_16);
  *CheckedMap_10 = ((MR_Word) (conv3_CheckedMap_10));
  *STATE_VARIABLE_Specs_16 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_16));
}

static MR_Box MR_CALL 
parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_29;

  conv0_LambdaHeadVar__2_29 = parse_tree__check_type_inst_mode_defns__IntroducedFrom__func__report_not_enum_type_du__1058__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_29));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__check_type_inst_mode_defns__report_not_enum_type_du_7_p_0(
  MR_Word ForWhat_8,
  MR_Word TypeCtor_9,
  MR_Word TypeDefnContext_10,
  MR_Word NonEnumSNAs_11,
  MR_Word EnumContext_12,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_Word NonEnumCtorPieces_14;
  MR_String PragmaName_21;
  MR_Word EnumPieces_22;
  MR_Word TypePieces_23;
  MR_Word Spec_24;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;

  if ((NonEnumSNAs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    NonEnumCtorPieces_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word NonEnumSNAPieces_17;
    MR_Word NonEnumSNAsPieces_19;
    MR_Word ItHasThese_20;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Box conv1_ItHasThese_20;

    NonEnumSNAPieces_17 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[11]), NonEnumSNAs_11);
    NonEnumSNAsPieces_19 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 2, (MR_String) "and", (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[11])), NonEnumSNAPieces_17);
    conv1_ItHasThese_20 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonEnumSNAs_11, ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[12]))), ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[13]))));
    ItHasThese_20 = ((MR_Word) (conv1_ItHasThese_20));
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (ItHasThese_20));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[15])));
    }
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NonEnumSNAsPieces_19, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[17])));
    NonEnumCtorPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
  }
  switch (ForWhat_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      PragmaName_21 = (MR_String) "foreign_enum";
      break;
    case (MR_Integer) 1:
      PragmaName_21 = (MR_String) "foreign_export_enum";
      break;
  }
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 20U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_55 = parse_tree__error_spec__color_as_subject_1_f_0(Var_56);
  {
    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_70, 1) = ((MR_Box) (PragmaName_21));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[24])));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__check_type_inst_mode_defns_scalar_common_1[22])));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
  }
  Var_65 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_66);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[25])));
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[21])), Var_64);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_59);
  EnumPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[19])), Var_54);
  TypePieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &parse_tree__check_type_inst_mode_defns_scalar_common_1[27])), NonEnumCtorPieces_14);
  {
    Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_88, 0) = ((MR_Box) (EnumContext_12));
    MR_hl_field(0, Var_88, 1) = ((MR_Box) (EnumPieces_22));
  }
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_90, 0) = ((MR_Box) (TypeDefnContext_10));
    MR_hl_field(0, Var_90, 1) = ((MR_Box) (TypePieces_23));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
  }
  {
    Spec_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.check_type_inst_mode_defns.report_not_enum_type_du\'/7"));
    MR_hl_field(2, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_24, 3) = ((MR_Box) (Var_87));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_26 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
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
  MR_Word conv1_STATE_VARIABLE_TypeCtorCheckedMap_141;
  MR_Word conv0_STATE_VARIABLE_Specs_143;

  parse_tree__check_type_inst_mode_defns__check_type_ctor_defns_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TypeCtorCheckedMap_141, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_143);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TypeCtorCheckedMap_141));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_143));
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
  MR_Word STATE_VARIABLE_Specs_1_28;
  MR_Word Var_30;
  MR_Box conv3_CheckedMap_12;
  MR_Box conv2_STATE_VARIABLE_Specs_1_28;
  MR_Box conv5_FieldNameMap_18;
  MR_Box conv7_STATE_VARIABLE_Specs_20;

  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), IntTypeDefnMap_9, &IntDefnTypeCtors_14);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_all_defns_0), ImpTypeDefnMap_10, &ImpDefnTypeCtors_15);
  mercury__map__keys_as_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[1]), ImpForeignEnumMap_11, &ImpEnumTypeCtors_16);
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (ImpEnumTypeCtors_16));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (ImpDefnTypeCtors_15));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (IntDefnTypeCtors_14));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_23));
  }
  Var_21 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_22);
  TypeCtors_17 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), Var_21);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__check_type_inst_mode_defns_scalar_common_5[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__check_type_inst_mode_defns__create_type_ctor_checked_map_7_p_0_1));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (InsistOnDefn_8));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (IntTypeDefnMap_9));
    MR_hl_field(0, Var_26, 5) = ((MR_Box) (ImpTypeDefnMap_10));
    MR_hl_field(0, Var_26, 6) = ((MR_Box) (ImpForeignEnumMap_11));
  }
  Var_27 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[0]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), Var_26, TypeCtors_17, ((MR_Box) (Var_27)), &conv3_CheckedMap_12, ((MR_Box) (STATE_VARIABLE_Specs_0_19)), &conv2_STATE_VARIABLE_Specs_1_28);
  *CheckedMap_12 = ((MR_Word) (conv3_CheckedMap_12));
  STATE_VARIABLE_Specs_1_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_28));
  Var_30 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_type_ctor_checked_defn_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[1]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[9]), *CheckedMap_12, ((MR_Box) (Var_30)), &conv5_FieldNameMap_18);
  FieldNameMap_18 = ((MR_Word) (conv5_FieldNameMap_18));
  mercury__map__foldl_4_p_0((MR_Word) (&parse_tree__check_type_inst_mode_defns__parse_tree__check_type_inst_mode_defns__type_ctor_info_field_name_of_type_ctor_0), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[3]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_1[2]), (MR_Word) (&parse_tree__check_type_inst_mode_defns_scalar_common_2[10]), FieldNameMap_18, ((MR_Box) (STATE_VARIABLE_Specs_1_28)), &conv7_STATE_VARIABLE_Specs_20);
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
