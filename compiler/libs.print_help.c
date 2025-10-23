/*
** Automatically generated from `print_help.m'
** by the Mercury compiler,
** version rotd-2025-10-23
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


// :- module libs.print_help.
// :- implementation.

/*
INIT mercury__libs__print_help__init
REQUIRED_INIT mercury__libs__print_help__required_init
ENDINIT
*/

#include "libs.print_help.mih"
#include "libs.print_help.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0_s {
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Cat_3;
  MR_Word * libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont;
  void * libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont_env_ptr;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Opt_7;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__OptData_8;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Help_9;
};

struct libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0_s {
  MR_Box * libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont;
  void * libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};

struct libs__print_help__document_options_for_users_guide_3_p_0_5_env_0_s {
  MR_Box * libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont;
  void * libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont_env_ptr;
  MR_Word libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__conv6_LambdaHeadVar__1_48;
};

struct libs__print_help__long_usage_4_p_0_5_env_0_s {
  MR_Box * libs__print_help__long_usage_4_p_0_5_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__long_usage_4_p_0_5_env_0__cont;
  void * libs__print_help__long_usage_4_p_0_5_env_0__cont_env_ptr;
  MR_Word libs__print_help__long_usage_4_p_0_5_env_0__conv6_LambdaHeadVar__1_48;
};


static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__set_ordlist__pti_set_ordlist_1__plain_libs__print_help__type_ctor_info_optdb_record_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__cord__ti_cord_1builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_help_format_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_help_format_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_format_0[2];

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_option_group_0_0[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_option_group_0_0[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_option_group_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_option_group_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_option_group_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_option_group_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_option_group_0[1];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_structure_0_0[1];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_structure_0_0[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_structure_0_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_structure_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_structure_0_1[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_structure_0_1[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_structure_0_1;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_1[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_structure_0[2];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_structure_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_structure_0[2];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_1;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_2;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_index_versions_0[3];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_index_versions_0[3];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_index_versions_0[3];

static const MR_FA_TypeInfo_Struct2 libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0bool__type_ctor_info_bool_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_add_negative_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_add_negative_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_add_negative_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_maybe_aligned_text_0_1[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_1;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_1[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_maybe_aligned_text_0[2];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_maybe_aligned_text_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_aligned_text_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_maybe_arg_name_0_1[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_1;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_1[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_maybe_arg_name_0[2];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_maybe_arg_name_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_arg_name_0[2];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_expect_arg_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_expect_arg_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_expect_arg_0[2];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_negate_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_negate_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_negate_0[2];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_menu_item_0_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_menu_item_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_menu_item_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_menu_item_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_menu_item_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_menu_item_0[1];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_optdb_record_0_0[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_optdb_record_0_0[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_optdb_record_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_optdb_record_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_optdb_record_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_optdb_record_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_optdb_record_0[1];

static const MR_FA_TypeInfo_Struct2 libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_maps_0_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_option_maps_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_option_maps_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_option_maps_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_option_maps_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_option_maps_0[1];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_params_0_0[4];

static const MR_ConstString libs__print_help__libs__print_help__field_names_option_params_0_0[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_option_params_0_0[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_option_params_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_option_params_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_option_params_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_option_params_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_option_params_0[1];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_print_what_help_0[2];

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_1;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_2;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_section_depth_0[3];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_section_depth_0[3];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_section_depth_0[3];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_set_at_opt_level_0_0[2];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_set_at_opt_level_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_set_at_opt_level_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_set_at_opt_level_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_set_at_opt_level_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_set_at_opt_level_0[1];

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__short_option_name_line_plain__1864__1_2_p_0(
  MR_Word MaybeArgName_8,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__long_option_name_line_plain__1835__1_2_p_0(
  MR_Word MaybeArgName_8,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1564__1_2_p_0(
  MR_Word IndexVersions_18,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1562__1_2_p_0(
  MR_Word MaybeAddNegVersionOpt_17,
  MR_Word HeadVar__2_40);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1560__1_2_p_0(
  MR_Word MaybeNegate_16,
  MR_Word HeadVar__2_36);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1558__1_2_p_0(
  MR_Word MaybeExpectArg_15,
  MR_Word HeadVar__2_32);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1541__1_2_p_0(
  MR_Word IndexVersions_15,
  MR_Word HeadVar__2_38);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1539__1_2_p_0(
  MR_Word MaybeAddNegVersionOpt_14,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1537__1_2_p_0(
  MR_Word MaybeNegate_13,
  MR_Word HeadVar__2_30);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1535__1_2_p_0(
  MR_Word MaybeExpectArg_12,
  MR_Word HeadVar__2_26);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0(
  MR_Word Cat_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__650__2_1_p_0(
  MR_Word * LambdaHeadVar__1_48,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__650__1_1_p_0(
  MR_Word * LambdaHeadVar__1_48,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____section_depth_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____section_depth_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____option_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____option_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____option_maps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____option_maps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____optdb_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____optdb_record_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____menu_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____menu_item_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____maybe_negate_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_negate_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____maybe_expect_arg_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_expect_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____maybe_arg_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_arg_name_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____maybe_aligned_text_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_aligned_text_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____maybe_add_negative_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_add_negative_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____initial_bool_value_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____initial_bool_value_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____index_versions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____index_versions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____help_structure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_structure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____help_option_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_option_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____help_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____finished_lines_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____finished_lines_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help____Compare____cur_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____cur_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__print_help__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__print_help__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__print_help__unlock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__print_help__lock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__print_help__pre_initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__print_help__initialise_mutable_already_printed_usage_0_p_0(void);

static MR_String MR_CALL 
libs__print_help__comment_out_texinfo_line_1_f_0(
  MR_String Line_3);

static MR_String MR_CALL 
libs__print_help__menu_item_to_menu_line_1_f_0(
  MR_Word MenuItem_3);

static MR_bool MR_CALL 
libs__print_help__is_bool_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
libs__print_help__acc_prefixed_line_4_p_0(
  MR_String Prefix_5,
  MR_String LineBody_6,
  MR_Word STATE_VARIABLE_LineCord_0_9,
  MR_Word * STATE_VARIABLE_LineCord_10);

static void MR_CALL 
libs__print_help__document_one_optimization_option_3_p_0(
  MR_Word DocOpt_4,
  MR_Word STATE_VARIABLE_Lines_0_14,
  MR_Word * STATE_VARIABLE_Lines_15);

static void MR_CALL 
libs__print_help__add_cindex_line_texinfo_3_p_0(
  MR_String Topic_4,
  MR_Word STATE_VARIABLE_IndexLineCord_0_7,
  MR_Word * STATE_VARIABLE_IndexLineCord_8);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0(
  MR_Word Params_9,
  MR_Word Option_10,
  MR_String LongName_11,
  MR_Word ArgAlign_12,
  MR_Word STATE_VARIABLE_OptLineCord_0_25,
  MR_Word * STATE_VARIABLE_OptLineCord_26,
  MR_Word STATE_VARIABLE_IndexLineCord_0_27,
  MR_Word * STATE_VARIABLE_IndexLineCord_28);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_4(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_String LongName_9,
  MR_Word ArgAlign_10,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22);

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0(
  MR_Word Cat_3,
  MR_Word * OptdbRecordSet_4);

static void MR_CALL 
libs__print_help__record_option_at_opt_level_map_4_p_0(
  MR_Integer Level_5,
  MR_Word DocOpt_6,
  MR_Word STATE_VARIABLE_SetAtOptLevelMap_0_12,
  MR_Word * STATE_VARIABLE_SetAtOptLevelMap_13);

static void MR_CALL 
libs__print_help__build_set_at_opt_level_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__build_set_at_opt_level_map_3_p_0(
  MR_Integer Level_4,
  MR_Word STATE_VARIABLE_SetAtOptLevelMap_0_8,
  MR_Word * STATE_VARIABLE_SetAtOptLevelMap_9);

static void MR_CALL 
libs__print_help__insert_initial_4_p_0(
  MR_Word InitialValue_5,
  MR_Word Option_6,
  MR_Word STATE_VARIABLE_InitialValueMap_0_8,
  MR_Word * STATE_VARIABLE_InitialValueMap_9);

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0(
  MR_Word MaybeUpTo_5,
  MR_Integer CurLevel_6,
  MR_Word STATE_VARIABLE_LineCord_0_17,
  MR_Word * STATE_VARIABLE_LineCord_18);

static MR_Box MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_1,
  MR_Word Depth_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Categories_0_6,
  MR_Word * STATE_VARIABLE_Categories_7,
  MR_Word STATE_VARIABLE_MenuItemCord_0_8,
  MR_Word * STATE_VARIABLE_MenuItemCord_9,
  MR_Word STATE_VARIABLE_LineCord_0_10,
  MR_Word * STATE_VARIABLE_LineCord_11,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_12,
  MR_Integer * STATE_VARIABLE_NumDocOpts_13);

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_14,
  MR_Word Depth_17,
  MR_Word Structure_18,
  MR_Word STATE_VARIABLE_Categories_0_45,
  MR_Word * STATE_VARIABLE_Categories_46,
  MR_Word STATE_VARIABLE_MenuItemCord_0_47,
  MR_Word * STATE_VARIABLE_MenuItemCord_48,
  MR_Word STATE_VARIABLE_LineCord_0_49,
  MR_Word * STATE_VARIABLE_LineCord_50,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_51,
  MR_Integer * STATE_VARIABLE_NumDocOpts_52);

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_14,
  MR_Word Depth_17,
  MR_Word Group_18,
  MR_Word STATE_VARIABLE_Categories_0_40,
  MR_Word * STATE_VARIABLE_Categories_41,
  MR_Word STATE_VARIABLE_MenuItemCord_0_42,
  MR_Word * STATE_VARIABLE_MenuItemCord_43,
  MR_Word STATE_VARIABLE_LineCord_0_44,
  MR_Word * STATE_VARIABLE_LineCord_45,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_46,
  MR_Integer * STATE_VARIABLE_NumDocOpts_47);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word OptionMaps_1,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_5,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_6,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_7,
  MR_Integer * STATE_VARIABLE_NumDocOpts_8);

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0(
  MR_Word OptionMaps_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_63,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_64,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_65,
  MR_Integer * STATE_VARIABLE_NumDocOpts_66);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_6_p_1(
  MR_Integer LineLen_8,
  MR_Word Pieces_9,
  MR_Word * CindexTopics_10,
  MR_Word * FindexTopics_11,
  MR_Word * FinishedLines_12);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1(
  MR_Integer LineLen_15,
  MR_Word Pieces_16,
  MR_Word STATE_VARIABLE_CindexCord_0_103,
  MR_Word * STATE_VARIABLE_CindexCord_104,
  MR_Word STATE_VARIABLE_FindexCord_0_105,
  MR_Word * STATE_VARIABLE_FindexCord_106,
  MR_Integer STATE_VARIABLE_CurLineLen_0_107,
  MR_Integer * STATE_VARIABLE_CurLineLen_108,
  MR_Word STATE_VARIABLE_CurLine_0_109,
  MR_Word * STATE_VARIABLE_CurLine_110,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_111,
  MR_Word * STATE_VARIABLE_FinishedLineCord_112);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OptLineCord_0_6,
  MR_Word * STATE_VARIABLE_OptLineCord_7,
  MR_Word STATE_VARIABLE_IndexLineCord_0_8,
  MR_Word * STATE_VARIABLE_IndexLineCord_9);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Char ShortName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OptLineCord_0_6,
  MR_Word * STATE_VARIABLE_OptLineCord_7,
  MR_Word STATE_VARIABLE_IndexLineCord_0_8,
  MR_Word * STATE_VARIABLE_IndexLineCord_9);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_String LongName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36);

static MR_Box MR_CALL 
libs__print_help__comment_out_texinfo_lines_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__print_help__comment_out_texinfo_lines_2_p_0(
  MR_Word STATE_VARIABLE_LineCord_0_4,
  MR_Word * STATE_VARIABLE_LineCord_5);

static void MR_CALL 
libs__print_help__get_main_long_name_2_p_0(
  MR_Word Option_3,
  MR_Word * MaybeLongName_4);

static void MR_CALL 
libs__print_help__add_findex_line_texinfo_3_p_0(
  MR_String OptionStr_4,
  MR_Word STATE_VARIABLE_IndexLineCord_0_7,
  MR_Word * STATE_VARIABLE_IndexLineCord_8);

static void MR_CALL 
libs__print_help__acc_short_option_name_texinfo_9_p_1(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Word MaybeAlignedText_13,
  MR_Char ShortName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36);

static void MR_CALL 
libs__print_help__short_option_name_lines_texinfo_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_Word MaybeArgName_9,
  MR_Char ShortName0_10,
  MR_String * OptLine_11,
  MR_String * IndexLine_12);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_4_p_0(
  MR_Word MaybeExpectArg_5,
  MR_Word Option_6,
  MR_Box OptionName0_7,
  MR_Box * OptionName_8);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_110_111_95_97_114_103_95_95_91_49_93_95_48_4_p_0(
  MR_Word MaybeExpectArg_5,
  MR_Word Option_6,
  MR_Box OptionName0_7,
  MR_Box * OptionName_8);

static MR_String MR_CALL 
libs__print_help__maybe_wrap_arg_name_texinfo_2_f_0(
  MR_Word Option_4,
  MR_String ArgName_5);

static MR_String MR_CALL 
libs__print_help__short_negated_option_name_texinfo_1_f_0(
  MR_Char ShortName_3);

static void MR_CALL 
libs__print_help__acc_long_option_name_texinfo_9_p_1(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Word MaybeAlignedText_13,
  MR_String LongName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36);

static void MR_CALL 
libs__print_help__add_option_line_texinfo_3_p_0(
  MR_String OptionStr_4,
  MR_Word STATE_VARIABLE_OptLineCord_0_8,
  MR_Word * STATE_VARIABLE_OptLineCord_9);

static void MR_CALL 
libs__print_help__long_option_name_lines_texinfo_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_Word MaybeArgName_9,
  MR_String LongName0_10,
  MR_String * OptLine_11,
  MR_String * IndexLine_12);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(
  MR_Word MaybeExpectArg_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Box OptionName0_9,
  MR_Box * OptionName_10);

static MR_String MR_CALL 
libs__print_help__long_negated_option_name_texinfo_1_f_0(
  MR_String LongName_3);

static void MR_CALL 
libs__print_help__acc_set_at_opt_level_pieces_5_p_0(
  MR_String LongName_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextLevel_3,
  MR_Word STATE_VARIABLE_HelpPieces_0_4,
  MR_Word * STATE_VARIABLE_HelpPieces_5);

static void MR_CALL 
libs__print_help__add_node_line_4_p_0(
  MR_String NodeCmd_5,
  MR_String SectionName_6,
  MR_Word STATE_VARIABLE_LineCord_0_9,
  MR_Word * STATE_VARIABLE_LineCord_10);

static MR_Box MR_CALL 
libs__print_help__menu_items_to_menu_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
libs__print_help__menu_items_to_menu_1_f_0(
  MR_Word MenuItems_3);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_1,
  MR_Word What_3,
  MR_Word Depth_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Categories_0_6,
  MR_Word * STATE_VARIABLE_Categories_7,
  MR_Word STATE_VARIABLE_MenuItemCord_0_8,
  MR_Word * STATE_VARIABLE_MenuItemCord_9,
  MR_Word STATE_VARIABLE_LineCord_0_10,
  MR_Word * STATE_VARIABLE_LineCord_11,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_12,
  MR_Integer * STATE_VARIABLE_NumDocOpts_13);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_14,
  MR_Word What_16,
  MR_Word Depth_17,
  MR_Word Structure_18,
  MR_Word STATE_VARIABLE_Categories_0_45,
  MR_Word * STATE_VARIABLE_Categories_46,
  MR_Word STATE_VARIABLE_MenuItemCord_0_47,
  MR_Word * STATE_VARIABLE_MenuItemCord_48,
  MR_Word STATE_VARIABLE_LineCord_0_49,
  MR_Word * STATE_VARIABLE_LineCord_50,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_51,
  MR_Integer * STATE_VARIABLE_NumDocOpts_52);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_14,
  MR_Word What_16,
  MR_Word Depth_17,
  MR_Word Group_18,
  MR_Word STATE_VARIABLE_Categories_0_40,
  MR_Word * STATE_VARIABLE_Categories_41,
  MR_Word STATE_VARIABLE_MenuItemCord_0_42,
  MR_Word * STATE_VARIABLE_MenuItemCord_43,
  MR_Word STATE_VARIABLE_LineCord_0_44,
  MR_Word * STATE_VARIABLE_LineCord_45,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_46,
  MR_Integer * STATE_VARIABLE_NumDocOpts_47);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word OptionMaps_1,
  MR_Word What_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_5,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_6,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_7,
  MR_Integer * STATE_VARIABLE_NumDocOpts_8);

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0(
  MR_Word OptionMaps_8,
  MR_Word What_9,
  MR_Word OptdbRecord_10,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_51,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_52,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_53,
  MR_Integer * STATE_VARIABLE_NumDocOpts_54);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer LineLen_8,
  MR_Word Pieces_9,
  MR_Word * CindexTopics_10,
  MR_Word * FindexTopics_11,
  MR_Word * FinishedLines_12);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_13_p_0(
  MR_Integer LineLen_15,
  MR_Word Pieces_16,
  MR_Word STATE_VARIABLE_CindexCord_0_103,
  MR_Word * STATE_VARIABLE_CindexCord_104,
  MR_Word STATE_VARIABLE_FindexCord_0_105,
  MR_Word * STATE_VARIABLE_FindexCord_106,
  MR_Integer STATE_VARIABLE_CurLineLen_0_107,
  MR_Integer * STATE_VARIABLE_CurLineLen_108,
  MR_Word STATE_VARIABLE_CurLine_0_109,
  MR_Word * STATE_VARIABLE_CurLine_110,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_111,
  MR_Word * STATE_VARIABLE_FinishedLineCord_112);

static void MR_CALL 
libs__print_help__finish_cur_line_3_p_0(
  MR_Word CurLine_4,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_7,
  MR_Word * STATE_VARIABLE_FinishedLineCord_8);

static void MR_CALL 
libs__print_help__reflow_lines_loop_over_words_8_p_0(
  MR_Integer LineLen_9,
  MR_Word Words_10,
  MR_Word STATE_VARIABLE_CurLine_0_16,
  MR_Word * STATE_VARIABLE_CurLine_17,
  MR_Integer STATE_VARIABLE_CurLineLen_0_18,
  MR_Integer * STATE_VARIABLE_CurLineLen_19,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_20,
  MR_Word * STATE_VARIABLE_FinishedLineCord_21);

static void MR_CALL 
libs__print_help__add_word_8_p_0(
  MR_Integer LineLen_9,
  MR_String Word_10,
  MR_Word STATE_VARIABLE_CurLine_0_16,
  MR_Word * STATE_VARIABLE_CurLine_17,
  MR_Integer STATE_VARIABLE_CurLineLen_0_18,
  MR_Integer * STATE_VARIABLE_CurLineLen_19,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_20,
  MR_Word * STATE_VARIABLE_FinishedLineCord_21);

static MR_String MR_CALL 
libs__print_help__after_str_1_f_0(
  MR_String AfterStr0_3);

static MR_String MR_CALL 
libs__print_help__before_str_1_f_0(
  MR_String BeforeStr0_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23);

static MR_String MR_CALL 
libs__print_help__double_indent_0_f_0(void);

static MR_String MR_CALL 
libs__print_help__single_indent_0_f_0(void);

static void MR_CALL 
libs__print_help__add_aligned_text_3_p_0(
  MR_String AlignedText_4,
  MR_String Line0_5,
  MR_String * Line_6);

static MR_String MR_CALL 
libs__print_help__long_negated_option_name_line_plain_1_f_0(
  MR_String LongName_3);

static void MR_CALL 
libs__print_help__acc_short_option_name_plain_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23);

static MR_bool MR_CALL 
libs__print_help__short_option_name_line_plain_4_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
libs__print_help__short_option_name_line_plain_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Char ShortName0_9);

static MR_String MR_CALL 
libs__print_help__short_negated_option_name_line_plain_1_f_0(
  MR_Char ShortName_3);

static void MR_CALL 
libs__print_help__acc_long_option_name_plain_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23);

static MR_bool MR_CALL 
libs__print_help__long_option_name_line_plain_4_f_0_1(
  MR_Box closure_arg);

static MR_String MR_CALL 
libs__print_help__long_option_name_line_plain_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_String LongName0_9);

static void MR_CALL 
libs__print_help__get_optdb_record_params_3_p_0(
  MR_Word OptionMaps_4,
  MR_Word OptdbRecord_5,
  MR_Word * Params_6);

static void MR_CALL 
libs__print_help__write_lines_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
libs__print_help__all_chapters_0_f_0(void);

static MR_bool MR_CALL 
libs__print_help____Unify____cur_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____cur_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____finished_lines_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____finished_lines_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_option_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_option_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_structure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_structure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____index_versions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____index_versions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____initial_bool_value_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____initial_bool_value_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_add_negative_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____maybe_add_negative_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_aligned_text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____maybe_aligned_text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_arg_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____maybe_arg_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_expect_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____maybe_expect_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_negate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____maybe_negate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____menu_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____menu_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____optdb_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____optdb_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____option_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____option_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____option_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____option_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____section_depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____section_depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__print_help_scalar_common_1[17][3];

static /* final */ const MR_Box libs__print_help_scalar_common_2[205][2];

static /* final */ const MR_Box libs__print_help_scalar_common_3[96][4];

static /* final */ const MR_Box libs__print_help_scalar_common_4[3][1];

static /* final */ const MR_Box libs__print_help_scalar_common_5[10][5];

static /* final */ const MR_Box libs__print_help_scalar_common_6[1][9];

static /* final */ const MR_Box libs__print_help_scalar_common_7[4][7];

static /* final */ const MR_Box libs__print_help_scalar_common_8[3][6];

static /* final */ const MR_Box libs__print_help_scalar_common_9[1][11];




static /* final */ const MR_Box libs__print_help_scalar_common_1[17][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__print_help_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[1])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[0])),
    ((MR_Box) (libs__print_help__long_usage_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_3[91])),
    ((MR_Box) (libs__print_help__long_usage_4_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[2])),
    ((MR_Box) (libs__print_help__menu_items_to_menu_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__comment_out_texinfo_lines_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[1])),
    ((MR_Box) (libs__print_help__acc_help_message_texinfo_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[1])),
    ((MR_Box) (libs__print_help__acc_help_message_texinfo_6_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[1])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[0])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_3[91])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[2])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[2])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_2[205][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_help_structure_0))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Invocation overview")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2025 The Mercury team")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "Options:")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 31)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 35)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Integer) 34)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 36)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Integer) 44)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Integer) 46)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 47)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Integer) 48)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 49)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Integer) 50)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 55)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Integer) 54)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 53)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 57)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Integer) 58)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Integer) 60)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Integer) 61)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_Integer) 62)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_Integer) 65)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Integer) 66)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_Integer) 67)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_Integer) 68)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_Integer) 69)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_Integer) 70)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_Integer) 71)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_Integer) 73)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_Integer) 72)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_Integer) 74)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_Integer) 75)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_Integer) 76)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_Integer) 77)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_Integer) 78)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_Integer) 79)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_Integer) 81)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_Integer) 82)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_Integer) 83)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_Integer) 84)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_4[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &libs__print_help_scalar_common_2[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "\100menu")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "\100end menu")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[8])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[7])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[12])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[11])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[10])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[9])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[14])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[13])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[76]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[75]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[6])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[5])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[4])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[3])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[19])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 125 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[18])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[25])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[24])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[23])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[22])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[21])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[20])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[31])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[30])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[29])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[28])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[134])))
  },
  /* row 136 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[27])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[33])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 138 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[32])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[80]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[26])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[79]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[46])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[45])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[44])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[43])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[144])))
  },
  /* row 146 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[42])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[41])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[49])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 149 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[48])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[148])))
  },
  /* row 150 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[47])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[149])))
  },
  /* row 151 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[52])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[51])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[50])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[58])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[57])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[56])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[155])))
  },
  /* row 157 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[55])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[62])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 159 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[63])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[158])))
  },
  /* row 160 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[61])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[159])))
  },
  /* row 161 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[60])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[160])))
  },
  /* row 162 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[59])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[73])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 164 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[72])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[71])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[70])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[69])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[166])))
  },
  /* row 168 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[74])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[87]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[68])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[169])))
  },
  /* row 171 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[67])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[66])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[65])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[64])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[86]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[174])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[85]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[175])))
  },
  /* row 177 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[54])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[53])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[84]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[83]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[82]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[180])))
  },
  /* row 182 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[40])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[39])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[38])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[37])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[36])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[35])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[186])))
  },
  /* row 188 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[34])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[81]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[78]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[189])))
  },
  /* row 191 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[17])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[16])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[15])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[192])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_3[77]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[2])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[194])))
  },
  /* row 196 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[1])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[195])))
  },
  /* row 197 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_3[0])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[196])))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_String) "Name: mmc - Melbourne Mercury Compiler")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[10])))
  },
  /* row 199 */
  {
    ((MR_Box) ((MR_String) "    Arguments of the form \140\100file\' are replaced with the contents of the file.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[12])))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_String) "    Arguments that do not end in \140.m\' are assumed to be module names.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[199])))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_String) "    Arguments ending in \140.m\' are assumed to be source file names.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[200])))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_String) "Arguments:")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[201])))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[202])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[203])))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_3[96][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "Help options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[13])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "Options for modifying the command line")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[14])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "Options that give the compiler its overall task")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[15])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "Grades and grade components")),
    ((MR_Box) ((MR_String) "Setting the compilation model")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[16])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Target options")),
    ((MR_Box) ((MR_String) "Choosing the target language")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[17])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "LLDS backend grade options")),
    ((MR_Box) ((MR_String) "For the low-level C backend")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[18])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "MLDS backend grade options")),
    ((MR_Box) ((MR_String) "For the high-level C/Java/C# backend")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[19])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Mdb debugging grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[20])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Ssdb debugging grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[21])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Mprof profiling grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[22])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "Deep profiling grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[23])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "Complexity profiling grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[24])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "Threadscope profiling grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[25])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "Optional feature grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[26])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "Developer grade options")),
    ((MR_Box) ((MR_String) "Not for general use")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[27])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "Options that control inference")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[28])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "Options specifying the intended semantics")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[29])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "Verbosity options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[30])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "Options that control diagnostics")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[31])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "Options that control color in diagnostics")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[33])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible module incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[34])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible inst incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[35])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible predicate incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[36])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible pragma incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[37])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible goal incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[38])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "Warnings about missing files")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[39])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible performance issues")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[41])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "Warnings about style issues with modules")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[42])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "Warnings about style issues with predicates")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[43])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "Warnings about style issues with goals")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[45])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "Warnings about missing order")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[46])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "Warnings about missing contiguity")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[48])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "Options that control warnings")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[49])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "Options about halting for warnings")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[50])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "Options that request information")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[51])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "Options that ask for informational files")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[52])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "Options that control some compiler reports")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[53])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "Controlling trace goals")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[54])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "Preparing code for mdb debugging")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[56])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "Preparing code for ssdb debugging")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[58])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "Preparing code for mdprof profiling")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[59])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "Overall control of optimizations")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[60])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "Source-to-source optimizations")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[61])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "Experimental source-to-source optimizations")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[62])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "Optimizations during code generation")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[63])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "Optimizations specific to high level code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[65])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "Optimizations specific to low level code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[68])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "Non-transitive intermodule optimization")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[69])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "Transitive intermodule optimization")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[70])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "Intermodule optimization to a fixpoint")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[71])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "The termination analyser based on linear inequality constraints")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[72])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "The termination analyser based on convex constraints")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[73])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "Other program analyses")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[74])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "Options that ask for modified output")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[76])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "Options for controlling mmc --make")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[77])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "General options for compiling target language code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[78])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "Options for compiling C code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[79])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "Options for compiling Java code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[80])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "Options for compiling C# code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[81])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "General options for linking")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[82])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "Options for linking C or C# code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[83])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "Options for linking just C code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[84])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "Options for linking just C# code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[85])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "Options for linking just Java code")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[86])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "Options controlling searches for files")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[87])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "Options controlling the library installation process")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[88])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "Options specifying properties of the environment")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[89])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "Options that record autoconfigured parameters")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[90])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "Options reserved for Mercury.config files")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[91])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "Operation selection options for developers only")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[92])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "Verbosity options for developers only")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[93])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) "Options that can help debug the compiler")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[94])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "Dumping out internal compiler data structures")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[95])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "Options intended for internal use by the compiler only")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[96])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "Now-unused former options kept for compatibility")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[97])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_String) "Debugging grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[111])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_String) "Profiling grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[115])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "Grade options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[123])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) "Diagnostics options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[125])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible incorrectness")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[131])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) "Warnings about programming style")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[136])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "Warning options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[141])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) "Optimization options")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[147])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_String) "Intermodule optimization")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[150])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) "Program analyses")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[153])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_String) "Options for target language compilation")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[157])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) "Options for linking")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[162])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_String) "Options for developers only")),
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[167])))
  },
  /* row  88 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row  89 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[1])),
    ((MR_Box) (libs__print_help__long_usage_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  90 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[1])),
    ((MR_Box) (libs__print_help__long_usage_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  91 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0))
  },
  /* row  92 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[1])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  93 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[1])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  94 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "    "))
  },
  /* row  95 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "        "))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_4[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "There is no help text available.")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};

static /* final */ const MR_Box libs__print_help_scalar_common_5[10][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_arg_name_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_arg_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0)),
    ((MR_Box) (&libs__print_help__set_ordlist__pti_set_ordlist_1__plain_libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[2])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1_1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) "e.g.")),
    ((MR_Box) ((MR_String) "e.g.\100:"))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_index_versions_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_index_versions_0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_6[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_option_params_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_7[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_bool__type_ctor_info_bool_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_8[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0)),
    ((MR_Box) (&libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0)),
    ((MR_Box) (&libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_option_params_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.print_help.mh"
#line 69 "print_help.m"
MR_Word libs__print_help__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__print_help__mutable_variable_already_printed_usage_lock;
#endif


#line 69 "print_help.m"
void 
libs__print_help__user_init_pred_29_0(void)
#line 69 "print_help.m"
{
#line 69 "print_help.m"
	libs__print_help__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__set_ordlist__pti_set_ordlist_1__plain_libs__print_help__type_ctor_info_optdb_record_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  { (MR_TypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__print_help__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&libs__print_help__one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__cord__ti_cord_1builtin__type_ctor_info_string_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_cur_line_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__print_help____Unify____cur_line_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____cur_line_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "cur_line",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__print_help__cord__ti_cord_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_finished_lines_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__print_help____Unify____finished_lines_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____finished_lines_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "finished_lines",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__print_help__cord__ti_cord_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_0 = {
  (MR_String) "help_plain_text",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_1 = {
  (MR_String) "help_texinfo",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_help_format_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_help_format_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_help_format_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_help_format_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_help_format_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_help_format_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_format_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_format_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____help_format_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_format_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_format",
  { libs__print_help__libs__print_help__enum_name_ordered_help_format_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_help_format_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_format_0,

};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_option_group_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_option_group_0_0[4] = {
  (MR_String) "hog_name",
  (MR_String) "hog_menu_desc",
  (MR_String) "hog_comment_lines",
  (MR_String) "hog_categories"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_option_group_0_0 = {
  (MR_String) "help_option_group",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_help_option_group_0_0,
  libs__print_help__libs__print_help__field_names_help_option_group_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_option_group_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_option_group_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_option_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_option_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_option_group_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_option_group_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_option_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_option_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____help_option_group_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_option_group_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_option_group",
  { libs__print_help__libs__print_help__du_name_ordered_help_option_group_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_help_option_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_option_group_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_structure_0_0[1] = { (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_help_option_group_0) };

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_structure_0_0[1] = { (MR_String) "help_atomic_group" };

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_structure_0_0 = {
  (MR_String) "help_atomic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_help_structure_0_0,
  libs__print_help__libs__print_help__field_names_help_structure_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_structure_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_help_structure_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_structure_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_structure_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_structure_0_1[4] = {
  (MR_String) "help_composite_name",
  (MR_String) "help_composite_menu_desc",
  (MR_String) "help_composite_comment_lines",
  (MR_String) "help_composite_parts"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_structure_0_1 = {
  (MR_String) "help_composite",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help__libs__print_help__field_types_help_structure_0_1,
  libs__print_help__libs__print_help__field_names_help_structure_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_structure_0_0 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_1[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_structure_0_1 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_structure_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_structure_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_structure_0[2] = {
  &libs__print_help__libs__print_help__du_functor_desc_help_structure_0_0,
  &libs__print_help__libs__print_help__du_functor_desc_help_structure_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_structure_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_structure_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____help_structure_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_structure_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_structure",
  { libs__print_help__libs__print_help__du_name_ordered_help_structure_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_help_structure_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_structure_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_0 = {
  (MR_String) "index_positive_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_1 = {
  (MR_String) "index_negative_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_2 = {
  (MR_String) "index_positive_and_negative",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_index_versions_0[3] = {
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_2
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_index_versions_0[3] = {
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_2,
  &libs__print_help__libs__print_help__enum_functor_desc_index_versions_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_index_versions_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_index_versions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____index_versions_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____index_versions_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "index_versions",
  { libs__print_help__libs__print_help__enum_name_ordered_index_versions_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_index_versions_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_index_versions_0,

};

static const MR_FA_TypeInfo_Struct2 libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0bool__type_ctor_info_bool_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
  }
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_initial_bool_value_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__print_help____Unify____initial_bool_value_map_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____initial_bool_value_map_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "initial_bool_value_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0bool__type_ctor_info_bool_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_0 = {
  (MR_String) "no_negative_version",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_1 = {
  (MR_String) "add_negative_version",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_add_negative_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_add_negative_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_add_negative_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_add_negative_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____maybe_add_negative_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____maybe_add_negative_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "maybe_add_negative",
  { libs__print_help__libs__print_help__enum_name_ordered_maybe_add_negative_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_add_negative_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_maybe_add_negative_0,

};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_0 = {
  (MR_String) "no_align",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_maybe_aligned_text_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_1 = {
  (MR_String) "aligned_text",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help__libs__print_help__field_types_maybe_aligned_text_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_0 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_1[1] = { &libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_1 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_maybe_aligned_text_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_maybe_aligned_text_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_maybe_aligned_text_0[2] = {
  &libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_1,
  &libs__print_help__libs__print_help__du_functor_desc_maybe_aligned_text_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_aligned_text_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_maybe_aligned_text_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____maybe_aligned_text_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____maybe_aligned_text_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "maybe_aligned_text",
  { libs__print_help__libs__print_help__du_name_ordered_maybe_aligned_text_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_maybe_aligned_text_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_maybe_aligned_text_0,

};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_0 = {
  (MR_String) "no_arg",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_maybe_arg_name_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_1 = {
  (MR_String) "arg_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help__libs__print_help__field_types_maybe_arg_name_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_0 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_1[1] = { &libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_1 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_maybe_arg_name_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_maybe_arg_name_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_maybe_arg_name_0[2] = {
  &libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_1,
  &libs__print_help__libs__print_help__du_functor_desc_maybe_arg_name_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_arg_name_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_maybe_arg_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____maybe_arg_name_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____maybe_arg_name_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "maybe_arg_name",
  { libs__print_help__libs__print_help__du_name_ordered_maybe_arg_name_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_maybe_arg_name_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_maybe_arg_name_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_0 = {
  (MR_String) "do_not_expect_arg",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_1 = {
  (MR_String) "expect_arg",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_expect_arg_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_expect_arg_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_expect_arg_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_expect_arg_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____maybe_expect_arg_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____maybe_expect_arg_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "maybe_expect_arg",
  { libs__print_help__libs__print_help__enum_name_ordered_maybe_expect_arg_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_expect_arg_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_maybe_expect_arg_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_0 = {
  (MR_String) "do_not_negate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_1 = {
  (MR_String) "negate",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_negate_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_maybe_negate_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_maybe_negate_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_maybe_negate_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____maybe_negate_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____maybe_negate_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "maybe_negate",
  { libs__print_help__libs__print_help__enum_name_ordered_maybe_negate_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_maybe_negate_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_maybe_negate_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_menu_item_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_menu_item_0_0 = {
  (MR_String) "menu_item",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_menu_item_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_menu_item_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_menu_item_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_menu_item_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_menu_item_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_menu_item_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_menu_item_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_menu_item_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_menu_item_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____menu_item_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____menu_item_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "menu_item",
  { libs__print_help__libs__print_help__du_name_ordered_menu_item_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_menu_item_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_menu_item_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_optdb_record_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
  (MR_PseudoTypeInfo) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_0)
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_optdb_record_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 7,
    (MR_Integer) 10
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_optdb_record_0_0 = {
  (MR_String) "optdb_record",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_optdb_record_0_0,
  NULL,
  libs__print_help__libs__print_help__field_locns_optdb_record_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_optdb_record_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_optdb_record_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_optdb_record_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_optdb_record_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_optdb_record_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_optdb_record_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_optdb_record_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_optdb_record_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____optdb_record_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____optdb_record_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "optdb_record",
  { libs__print_help__libs__print_help__du_name_ordered_optdb_record_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_optdb_record_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_optdb_record_0,

};

static const MR_FA_TypeInfo_Struct2 libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&libs__print_help__one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0)
  }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_maps_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0)
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_option_maps_0_0 = {
  (MR_String) "option_maps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_option_maps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_option_maps_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_option_maps_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_option_maps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_option_maps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_option_maps_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_option_maps_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_option_maps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_option_maps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____option_maps_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____option_maps_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "option_maps",
  { libs__print_help__libs__print_help__du_name_ordered_option_maps_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_option_maps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_option_maps_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_params_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_index_versions_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_option_params_0_0[4] = {
  (MR_String) "op_expect_arg",
  (MR_String) "op_negate",
  (MR_String) "op_add_negative_opt",
  (MR_String) "op_index_versions"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_option_params_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_option_params_0_0 = {
  (MR_String) "option_params",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_option_params_0_0,
  libs__print_help__libs__print_help__field_names_option_params_0_0,
  libs__print_help__libs__print_help__field_locns_option_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_option_params_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_option_params_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_option_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_option_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_option_params_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_option_params_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_option_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_option_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____option_params_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____option_params_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "option_params",
  { libs__print_help__libs__print_help__du_name_ordered_option_params_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_option_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_option_params_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0 = {
  (MR_String) "print_public_help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1 = {
  (MR_String) "print_public_and_private_help",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0[2] = {
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_print_what_help_0_0
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_print_what_help_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_print_what_help_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____print_what_help_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____print_what_help_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "print_what_help",
  { libs__print_help__libs__print_help__enum_name_ordered_print_what_help_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_print_what_help_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_print_what_help_0,

};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_0 = {
  (MR_String) "sd_section",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_1 = {
  (MR_String) "sd_subsection",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_2 = {
  (MR_String) "sd_subsubsection",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_section_depth_0[3] = {
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_2
};

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_section_depth_0[3] = {
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_0,
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_1,
  &libs__print_help__libs__print_help__enum_functor_desc_section_depth_0_2
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_section_depth_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_section_depth_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__print_help____Unify____section_depth_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____section_depth_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "section_depth",
  { libs__print_help__libs__print_help__enum_name_ordered_section_depth_0 },
  { libs__print_help__libs__print_help__enum_ordinal_ordered_section_depth_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_section_depth_0,

};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_set_at_opt_level_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_option_data_bool_int_0)
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_set_at_opt_level_0_0 = {
  (MR_String) "set_at_opt_level",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_set_at_opt_level_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_set_at_opt_level_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_set_at_opt_level_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_set_at_opt_level_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_set_at_opt_level_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_set_at_opt_level_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_set_at_opt_level_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_set_at_opt_level_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____set_at_opt_level_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____set_at_opt_level_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "set_at_opt_level",
  { libs__print_help__libs__print_help__du_name_ordered_set_at_opt_level_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_set_at_opt_level_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_set_at_opt_level_0,

};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__print_help____Unify____set_at_opt_level_map_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____set_at_opt_level_map_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "set_at_opt_level_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__print_help__tree234__ti_tree234_2libs__options__type_ctor_info_option_0one_or_more__ti_one_or_more_1libs__print_help__type_ctor_info_set_at_opt_level_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__short_option_name_line_plain__1864__1_2_p_0(
  MR_Word MaybeArgName_8,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;
  MR_Integer CastX_44 = (MR_Integer) (MaybeArgName_8);
  MR_Integer CastY_45 = (MR_Integer) (HeadVar__2_22);

  succeeded = (CastX_44 == CastY_45);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_42;
    MR_Integer CastY_43;

    succeeded = (MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CastX_42 = (MR_Integer) (MaybeArgName_8);
      CastY_43 = (MR_Integer) (HeadVar__2_22);
      succeeded = (CastY_43 == CastX_42);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__long_option_name_line_plain__1835__1_2_p_0(
  MR_Word MaybeArgName_8,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;
  MR_Integer CastX_44 = (MR_Integer) (MaybeArgName_8);
  MR_Integer CastY_45 = (MR_Integer) (HeadVar__2_22);

  succeeded = (CastX_44 == CastY_45);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer CastX_42;
    MR_Integer CastY_43;

    succeeded = (MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      CastX_42 = (MR_Integer) (MaybeArgName_8);
      CastY_43 = (MR_Integer) (HeadVar__2_22);
      succeeded = (CastY_43 == CastX_42);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1564__1_2_p_0(
  MR_Word IndexVersions_18,
  MR_Word HeadVar__2_44)
{
  MR_bool succeeded = (IndexVersions_18 == HeadVar__2_44);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1562__1_2_p_0(
  MR_Word MaybeAddNegVersionOpt_17,
  MR_Word HeadVar__2_40)
{
  MR_bool succeeded = (MaybeAddNegVersionOpt_17 == HeadVar__2_40);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1560__1_2_p_0(
  MR_Word MaybeNegate_16,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded = (MaybeNegate_16 == HeadVar__2_36);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1558__1_2_p_0(
  MR_Word MaybeExpectArg_15,
  MR_Word HeadVar__2_32)
{
  MR_bool succeeded = (MaybeExpectArg_15 == HeadVar__2_32);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1541__1_2_p_0(
  MR_Word IndexVersions_15,
  MR_Word HeadVar__2_38)
{
  MR_bool succeeded = (IndexVersions_15 == HeadVar__2_38);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1539__1_2_p_0(
  MR_Word MaybeAddNegVersionOpt_14,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded = (MaybeAddNegVersionOpt_14 == HeadVar__2_34);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1537__1_2_p_0(
  MR_Word MaybeNegate_13,
  MR_Word HeadVar__2_30)
{
  MR_bool succeeded = (MaybeNegate_13 == HeadVar__2_30);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1535__1_2_p_0(
  MR_Word MaybeExpectArg_12,
  MR_Word HeadVar__2_26)
{
  MR_bool succeeded = (MaybeExpectArg_12 == HeadVar__2_26);

  return succeeded;
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0_s * env_ptr = (struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__LambdaHeadVar__1_10) = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Opt_7) << 7)) | (MR_Unsigned) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Cat_3)));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__OptData_8));
    MR_hl_field(0, base, 2) = ((MR_Box) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Help_9));
  }
  ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont)((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0(
  MR_Word Cat_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0_s env;

  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Cat_3 = Cat_3;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont = cont;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  libs__options__optdb_4_p_1((env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Cat_3, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Opt_7, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__OptData_8, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_env_0__Help_9, libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0_1, &env);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__650__2_1_p_0(
  MR_Word * LambdaHeadVar__1_48,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_18;

  libs__option_categories__option_categories_2_p_1(LambdaHeadVar__1_48, &Var_18, cont, cont_env_ptr);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__650__1_1_p_0(
  MR_Word * LambdaHeadVar__1_48,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_18;

  libs__option_categories__option_categories_2_p_1(LambdaHeadVar__1_48, &Var_18, cont, cont_env_ptr);
}

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      libs__optimization_options____Compare____option_data_bool_int_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = libs__optimization_options____Unify____option_data_bool_int_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____section_depth_0_0(
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
libs__print_help____Unify____section_depth_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__print_help____Compare____print_what_help_0_0(
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
libs__print_help____Unify____print_what_help_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____option_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_23 < Var_24);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_23 > Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_25 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_26 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_25 < Var_26);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_25 > Var_26);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_27 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_28 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_27 < Var_28);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_27 > Var_28);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____option_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____option_maps_0_0(
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____option_maps_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&libs__print_help_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____optdb_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1023);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 7)) & (MR_Integer) 1023);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 127);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_21 < Var_22);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_21 > Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_23 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_24 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_23 < Var_24);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_23 > Var_24);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__getopt____Compare____option_data_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          libs__optdb_help____Compare____help_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____optdb_record_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 7)) & (MR_Integer) 1023);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 7)) & (MR_Integer) 1023);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 127);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 127);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__getopt____Unify____option_data_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = libs__optdb_help____Unify____help_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____menu_item_0_0(
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
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____menu_item_0_0(
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
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_negate_0_0(
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
libs__print_help____Unify____maybe_negate_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_expect_arg_0_0(
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
libs__print_help____Unify____maybe_expect_arg_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_arg_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_arg_name_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_aligned_text_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_aligned_text_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_add_negative_0_0(
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
libs__print_help____Unify____maybe_add_negative_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____initial_bool_value_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____initial_bool_value_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____index_versions_0_0(
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
libs__print_help____Unify____index_versions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_structure_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      libs__print_help____Compare____help_option_group_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String ArgY2_10 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
    MR_Word ArgY4_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
    MR_Word SubResult1_8;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
      {
        MR_Word SubResult3_14;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[4]), &SubResult3_14, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
        succeeded = (SubResult3_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_14;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX4_15)), ((MR_Box) (ArgY4_16)));
      }
    }
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_structure_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = libs__print_help____Unify____help_option_group_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_String ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
    MR_Word ArgY4_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
        if (succeeded)
        {
          TypeInfo_15_15 = (MR_Word) (&libs__print_help_scalar_common_2[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&libs__print_help_scalar_common_2[5]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_option_group_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_option_group_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&libs__print_help_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&libs__print_help_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_format_0_0(
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
libs__print_help____Unify____help_format_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____finished_lines_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____finished_lines_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__print_help_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____cur_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____cur_line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__print_help_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
libs__print_help__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL libs__print_help__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__print_help__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__print_help__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL libs__print_help__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
X = libs__print_help__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
libs__print_help__unlock_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__print_help__unlock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__print_help__lock_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__print_help__lock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__print_help__pre_initialise_mutable_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__print_help__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__print_help__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__print_help__initialise_mutable_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__print_help__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__print_help__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
libs__print_help__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static MR_String MR_CALL 
libs__print_help__comment_out_texinfo_line_1_f_0(
  MR_String Line_3)
{
  MR_bool succeeded = (strcmp(Line_3, (MR_String) "") == 0);
  MR_String CommentedOutLine_4;

  if (succeeded)
    CommentedOutLine_4 = (MR_String) "";
  else
    CommentedOutLine_4 = mercury__string__f_43_43_2_f_0((MR_String) "\100c ", Line_3);
  return CommentedOutLine_4;
}

static MR_String MR_CALL 
libs__print_help__menu_item_to_menu_line_1_f_0(
  MR_Word MenuItem_3)
{
  MR_String Line_4;
  MR_String Name_5 = ((MR_String) ((MR_hl_field(0, MenuItem_3, 0))));
  MR_String Desc_6 = ((MR_String) ((MR_hl_field(0, MenuItem_3, 1))));
  MR_String Var_14;
  MR_String Var_15;

  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) ":: ", Desc_6);
  Var_15 = mercury__string__f_43_43_2_f_0(Name_5, Var_14);
  Line_4 = mercury__string__f_43_43_2_f_0((MR_String) "* ", Var_15);
  return Line_4;
}

static MR_bool MR_CALL 
libs__print_help__is_bool_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_prefixed_line_4_p_0(
  MR_String Prefix_5,
  MR_String LineBody_6,
  MR_Word STATE_VARIABLE_LineCord_0_9,
  MR_Word * STATE_VARIABLE_LineCord_10)
{
  MR_String Line_8;

  Line_8 = mercury__string__f_43_43_2_f_0(Prefix_5, LineBody_6);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_8)), STATE_VARIABLE_LineCord_0_9, STATE_VARIABLE_LineCord_10);
}

static void MR_CALL 
libs__print_help__document_one_optimization_option_3_p_0(
  MR_Word DocOpt_4,
  MR_Word STATE_VARIABLE_Lines_0_14,
  MR_Word * STATE_VARIABLE_Lines_15)
{
  MR_Word Option_7 = ((MR_Unsigned) ((MR_hl_field(0, DocOpt_4, 1))) & (MR_Integer) 1023);
  MR_Word OptionData_8 = ((MR_Word) ((MR_hl_field(0, DocOpt_4, 2))));
  MR_Word MaybeLongName_9;

  libs__print_help__get_main_long_name_2_p_0(Option_7, &MaybeLongName_9);
  if ((MaybeLongName_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Lines_15 = STATE_VARIABLE_Lines_0_14;
  else
  {
    MR_String LongName_10 = ((MR_String) ((MR_hl_field(1, MaybeLongName_9, 0))));

    if (((MR_tag((MR_Word) OptionData_8)) == (MR_Integer) 1))
    {
      MR_Word Bool_11 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_8, 0))) & (MR_Integer) 1);
      MR_String Line_12;

      switch (Bool_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Line_12 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_10);
          break;
        case (MR_Integer) 1:
          Line_12 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_10);
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Lines_15 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Line_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Lines_0_14));
      }
    }
    else
    {
      MR_Integer Int_13 = ((MR_Integer) ((MR_hl_field(2, OptionData_8, 0))));
      MR_String Line_32;
      MR_String Var_33;
      MR_String Var_41;
      MR_String Var_42;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), Int_13, &Var_33);
      Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "=", Var_33);
      Var_42 = mercury__string__f_43_43_2_f_0(LongName_10, Var_41);
      Line_32 = mercury__string__f_43_43_2_f_0((MR_String) "--", Var_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Lines_15 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Line_32));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Lines_0_14));
      }
    }
  }
}

static void MR_CALL 
libs__print_help__add_cindex_line_texinfo_3_p_0(
  MR_String Topic_4,
  MR_Word STATE_VARIABLE_IndexLineCord_0_7,
  MR_Word * STATE_VARIABLE_IndexLineCord_8)
{
  MR_String IndexLine_6;

  IndexLine_6 = mercury__string__f_43_43_2_f_0((MR_String) "\100cindex ", Topic_4);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_6)), STATE_VARIABLE_IndexLineCord_0_7, STATE_VARIABLE_IndexLineCord_8);
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1564__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1562__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1560__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_texinfo__1558__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_arg_align_text_texinfo_8_p_0(
  MR_Word Params_9,
  MR_Word Option_10,
  MR_String LongName_11,
  MR_Word ArgAlign_12,
  MR_Word STATE_VARIABLE_OptLineCord_0_25,
  MR_Word * STATE_VARIABLE_OptLineCord_26,
  MR_Word STATE_VARIABLE_IndexLineCord_0_27,
  MR_Word * STATE_VARIABLE_IndexLineCord_28)
{
  MR_bool succeeded;
  MR_Word MaybeExpectArg_15 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_16 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word MaybeAddNegVersionOpt_17 = ((((MR_Unsigned) ((MR_hl_field(0, Params_9, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word IndexVersions_18 = ((MR_Unsigned) ((MR_hl_field(0, Params_9, 0))) & (MR_Integer) 3);
  MR_String ArgName_19;
  MR_String AlignedText_21;
  MR_String OptLine0_22;
  MR_String IndexLine_23;
  MR_String OptLine_24;
  MR_Word Var_29;
  MR_Word Var_33;
  MR_Word Var_37;
  MR_Word Var_41;
  MR_Word Var_45;
  MR_String Var_46;
  MR_String IndexLine_48;

  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[6]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_texinfo_8_p_0_1));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (MaybeExpectArg_15));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_texinfo\'/8", (MR_String) "unexpected MaybeExpectArg");
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[7]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_texinfo_8_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (MaybeNegate_16));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_33, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_texinfo\'/8", (MR_String) "unexpected MaybeNegate");
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[8]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_texinfo_8_p_0_3));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (MaybeAddNegVersionOpt_17));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_37, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_texinfo\'/8", (MR_String) "unexpected MaybeAddNegVersionOpt");
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[9]));
    MR_hl_field(0, Var_41, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_texinfo_8_p_0_4));
    MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_41, 3) = ((MR_Box) (IndexVersions_18));
    MR_hl_field(0, Var_41, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_41, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_texinfo\'/8", (MR_String) "unexpected IndexVersions");
  ArgName_19 = ((MR_String) ((MR_hl_field(0, ArgAlign_12, 0))));
  AlignedText_21 = ((MR_String) ((MR_hl_field(0, ArgAlign_12, 2))));
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (ArgName_19));
  }
  libs__print_help__long_option_name_lines_texinfo_6_p_0(Params_9, Option_10, Var_45, LongName_11, &OptLine0_22, &IndexLine_23);
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_21);
  OptLine_24 = mercury__string__f_43_43_2_f_0(OptLine0_22, Var_46);
  libs__print_help__add_option_line_texinfo_3_p_0(OptLine_24, STATE_VARIABLE_OptLineCord_0_25, STATE_VARIABLE_OptLineCord_26);
  IndexLine_48 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", IndexLine_23);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_48)), STATE_VARIABLE_IndexLineCord_0_27, STATE_VARIABLE_IndexLineCord_28);
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_4(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1541__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1539__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1537__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text_plain__1535__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_arg_align_text_plain_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_String LongName_9,
  MR_Word ArgAlign_10,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22)
{
  MR_bool succeeded;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 3)) & (MR_Integer) 1);
  MR_Word MaybeAddNegVersionOpt_14 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word IndexVersions_15 = ((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) & (MR_Integer) 3);
  MR_String ArgName_16;
  MR_String AlignedText_17;
  MR_String Line0_19;
  MR_String Line_20;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_31;
  MR_Word Var_35;
  MR_Word Var_39;
  MR_String Var_52;
  MR_String Var_53;

  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[6]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_plain_6_p_0_1));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (MaybeExpectArg_12));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_23, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_plain\'/6", (MR_String) "unexpected MaybeExpectArg");
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[7]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_plain_6_p_0_2));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (MaybeNegate_13));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_plain\'/6", (MR_String) "unexpected MaybeNegate");
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[8]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_plain_6_p_0_3));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (MaybeAddNegVersionOpt_14));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_plain\'/6", (MR_String) "unexpected MaybeAddNegVersionOpt");
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[9]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_plain_6_p_0_4));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (IndexVersions_15));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_35, (MR_String) "predicate \140libs.print_help.acc_arg_align_text_plain\'/6", (MR_String) "unexpected IndexVersions");
  ArgName_16 = ((MR_String) ((MR_hl_field(0, ArgAlign_10, 0))));
  AlignedText_17 = ((MR_String) ((MR_hl_field(0, ArgAlign_10, 1))));
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (ArgName_16));
  }
  Line0_19 = libs__print_help__long_option_name_line_plain_4_f_0(Params_7, Option_8, Var_39, LongName_9);
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_17);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 39, Line0_19, &Var_53);
  Line_20 = mercury__string__f_43_43_2_f_0(Var_53, Var_52);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_20)), STATE_VARIABLE_LineCord_0_21, STATE_VARIABLE_LineCord_22);
}

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0_s * env_ptr = (struct libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
  ((env_ptr)->libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont)((env_ptr)->libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0_s env;

  (env).libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont = cont;
  (env).libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__931__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &(env).libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, libs__print_help__get_optdb_records_in_category_2_p_0_1, &env);
  }
}

static void MR_CALL 
libs__print_help__get_optdb_records_in_category_2_p_0(
  MR_Word Cat_3,
  MR_Word * OptdbRecordSet_4)
{
  MR_Word OptdbPred_5;

  {
    OptdbPred_5 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OptdbPred_5, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[5]));
    MR_hl_field(0, OptdbPred_5, 1) = ((MR_Box) (libs__print_help__get_optdb_records_in_category_2_p_0_2));
    MR_hl_field(0, OptdbPred_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, OptdbPred_5, 3) = ((MR_Box) (Cat_3));
  }
  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbPred_5, OptdbRecordSet_4);
}

static void MR_CALL 
libs__print_help__record_option_at_opt_level_map_4_p_0(
  MR_Integer Level_5,
  MR_Word DocOpt_6,
  MR_Word STATE_VARIABLE_SetAtOptLevelMap_0_12,
  MR_Word * STATE_VARIABLE_SetAtOptLevelMap_13)
{
  MR_Word Option_9 = ((MR_Unsigned) ((MR_hl_field(0, DocOpt_6, 1))) & (MR_Integer) 1023);
  MR_Word OptionData_10 = ((MR_Word) ((MR_hl_field(0, DocOpt_6, 2))));
  MR_Word SetAtOptLevel_11;

  {
    SetAtOptLevel_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SetAtOptLevel_11, 0) = ((MR_Box) (Level_5));
    MR_hl_field(0, SetAtOptLevel_11, 1) = ((MR_Box) (OptionData_10));
  }
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0), ((MR_Box) (Option_9)), ((MR_Box) (SetAtOptLevel_11)), STATE_VARIABLE_SetAtOptLevelMap_0_12, STATE_VARIABLE_SetAtOptLevelMap_13);
}

static void MR_CALL 
libs__print_help__build_set_at_opt_level_map_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_SetAtOptLevelMap_13;

  libs__print_help__record_option_at_opt_level_map_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_SetAtOptLevelMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_SetAtOptLevelMap_13));
}

static void MR_CALL 
libs__print_help__build_set_at_opt_level_map_3_p_0(
  MR_Integer Level_4,
  MR_Word STATE_VARIABLE_SetAtOptLevelMap_0_8,
  MR_Word * STATE_VARIABLE_SetAtOptLevelMap_9)
{
  MR_bool succeeded;
  MR_Word DocOpts_7;
  MR_Word _LevelDesc_6;

  succeeded = libs__optimization_options__opts_enabled_at_level_3_p_0(Level_4, &_LevelDesc_6, &DocOpts_7);
  if (succeeded)
  {
    MR_Word Var_10;
    MR_Box conv1_STATE_VARIABLE_SetAtOptLevelMap_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_10, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[3]));
      MR_hl_field(0, Var_10, 1) = ((MR_Box) (libs__print_help__build_set_at_opt_level_map_3_p_0_1));
      MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_10, 3) = ((MR_Box) (Level_4));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_10, DocOpts_7, ((MR_Box) (STATE_VARIABLE_SetAtOptLevelMap_0_8)), &conv1_STATE_VARIABLE_SetAtOptLevelMap_9);
    *STATE_VARIABLE_SetAtOptLevelMap_9 = ((MR_Word) (conv1_STATE_VARIABLE_SetAtOptLevelMap_9));
  }
  else
    *STATE_VARIABLE_SetAtOptLevelMap_9 = STATE_VARIABLE_SetAtOptLevelMap_0_8;
}

static void MR_CALL 
libs__print_help__insert_initial_4_p_0(
  MR_Word InitialValue_5,
  MR_Word Option_6,
  MR_Word STATE_VARIABLE_InitialValueMap_0_8,
  MR_Word * STATE_VARIABLE_InitialValueMap_9)
{
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), ((MR_Box) (Option_6)), ((MR_Box) (InitialValue_5)), STATE_VARIABLE_InitialValueMap_0_8, STATE_VARIABLE_InitialValueMap_9);
}

void MR_CALL 
libs__print_help__list_optimization_options_4_p_0(
  MR_Word Stream_5,
  MR_Word MaybeUpTo_6)
{
  MR_Word LineCord_8;
  MR_Word Var_12;
  MR_Word Var_13;

  Var_12 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__acc_optimization_options_loop_4_p_0(MaybeUpTo_6, (MR_Integer) 0, Var_12, &LineCord_8);
  Var_13 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LineCord_8);
  libs__print_help__write_lines_4_p_0(Stream_5, Var_13);
}

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_LineCord_10));
}

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LineCord_10));
}

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Lines_15;

  libs__print_help__document_one_optimization_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Lines_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Lines_15));
}

static void MR_CALL 
libs__print_help__acc_optimization_options_loop_4_p_0(
  MR_Word MaybeUpTo_5,
  MR_Integer CurLevel_6,
  MR_Word STATE_VARIABLE_LineCord_0_17,
  MR_Word * STATE_VARIABLE_LineCord_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word LevelDescLines_9;
    MR_Word DocumentedOpts_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((MaybeUpTo_5 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Integer UpTo_8 = ((MR_Integer) ((MR_hl_field(1, MaybeUpTo_5, 0))));

      succeeded = (CurLevel_6 <= UpTo_8);
    }
    if (succeeded)
      succeeded = libs__optimization_options__opts_enabled_at_level_3_p_0(CurLevel_6, &LevelDescLines_9, &DocumentedOpts_10);
    if (succeeded)
    {
      MR_String LevelHeading_11;
      MR_Word OptLines_13;
      MR_Word SortedOptLines_14;
      MR_Word STATE_VARIABLE_LineCord_1_32;
      MR_Word STATE_VARIABLE_LineCord_2_33;
      MR_Word STATE_VARIABLE_LineCord_4_37;
      MR_Word STATE_VARIABLE_LineCord_5_40;
      MR_Word STATE_VARIABLE_LineCord_6_41;
      MR_Word STATE_VARIABLE_LineCord_7_43;
      MR_Word STATE_VARIABLE_LineCord_8_45;
      MR_Integer Var_47;
      MR_String Var_65;
      MR_String Var_72;
      MR_Box conv1_OptLines_13;
      MR_Box conv5_STATE_VARIABLE_LineCord_8_45;
      MR_Integer next_value_of_CurLevel_6;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_17;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), CurLevel_6, &Var_65);
      Var_72 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) ":");
      LevelHeading_11 = mercury__string__f_43_43_2_f_0((MR_String) "Optimization level ", Var_72);
      mercury__list__foldl_4_p_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0), (MR_Word) (&libs__print_help_scalar_common_2[4]), (MR_Word) (&libs__print_help_scalar_common_1[16]), DocumentedOpts_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_OptLines_13);
      OptLines_13 = ((MR_Word) (conv1_OptLines_13));
      mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptLines_13, &SortedOptLines_14);
      succeeded = (CurLevel_6 > (MR_Integer) 0);
      if (succeeded)
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_17, &STATE_VARIABLE_LineCord_1_32);
      else
        STATE_VARIABLE_LineCord_1_32 = STATE_VARIABLE_LineCord_0_17;
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (LevelHeading_11)), STATE_VARIABLE_LineCord_1_32, &STATE_VARIABLE_LineCord_2_33);
      if ((LevelDescLines_9 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_LineCord_4_37 = STATE_VARIABLE_LineCord_2_33;
      else
      {
        MR_Word STATE_VARIABLE_LineCord_3_35;
        MR_Box conv3_STATE_VARIABLE_LineCord_4_37;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_2_33, &STATE_VARIABLE_LineCord_3_35);
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), (MR_Word) (&libs__print_help_scalar_common_3[94]), LevelDescLines_9, ((MR_Box) (STATE_VARIABLE_LineCord_3_35)), &conv3_STATE_VARIABLE_LineCord_4_37);
        STATE_VARIABLE_LineCord_4_37 = ((MR_Word) (conv3_STATE_VARIABLE_LineCord_4_37));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_4_37, &STATE_VARIABLE_LineCord_5_40);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "    The options set at this level are:")), STATE_VARIABLE_LineCord_5_40, &STATE_VARIABLE_LineCord_6_41);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_6_41, &STATE_VARIABLE_LineCord_7_43);
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), (MR_Word) (&libs__print_help_scalar_common_3[95]), SortedOptLines_14, ((MR_Box) (STATE_VARIABLE_LineCord_7_43)), &conv5_STATE_VARIABLE_LineCord_8_45);
      STATE_VARIABLE_LineCord_8_45 = ((MR_Word) (conv5_STATE_VARIABLE_LineCord_8_45));
      Var_47 = (MR_Integer) ((MR_Unsigned) CurLevel_6 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurLevel_6 = Var_47;
      next_value_of_STATE_VARIABLE_LineCord_0_17 = STATE_VARIABLE_LineCord_8_45;
      CurLevel_6 = next_value_of_CurLevel_6;
      STATE_VARIABLE_LineCord_0_17 = next_value_of_STATE_VARIABLE_LineCord_0_17;
      continue;
    }
    else
      *STATE_VARIABLE_LineCord_18 = STATE_VARIABLE_LineCord_0_17;
    break;
  }
}

void MR_CALL 
libs__print_help__write_copyright_notice_3_p_0(
  MR_Word Stream_4)
{
  MR_Word Var_8 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[10]));
  MR_String Line_13 = ((MR_String) ((MR_hl_field(1, Var_8, 0))));
  MR_Word Lines_14 = ((MR_Word) ((MR_hl_field(1, Var_8, 1))));
  MR_String Line_23;

  mercury__io__write_string_4_p_0(Stream_4, Line_13);
  mercury__io__nl_3_p_0(Stream_4);
  Line_23 = ((MR_String) ((MR_hl_field(1, Lines_14, 0))));
  mercury__io__write_string_4_p_0(Stream_4, Line_23);
  mercury__io__nl_3_p_0(Stream_4);
}

static MR_Box MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_Line_4;

  conv7_Line_4 = libs__print_help__menu_item_to_menu_line_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Line_4));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_4(
  void * env_ptr_arg)
{
  struct libs__print_help__document_options_for_users_guide_3_p_0_5_env_0_s * env_ptr = (struct libs__print_help__document_options_for_users_guide_3_p_0_5_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__conv6_LambdaHeadVar__1_48));
  ((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont)((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__document_options_for_users_guide_3_p_0_5_env_0_s env;

  (env).libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont = cont;
  (env).libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__print_help__IntroducedFrom__pred__document_requested_options__650__2_1_p_0(&(env).libs__print_help__document_options_for_users_guide_3_p_0_5_env_0__conv6_LambdaHeadVar__1_48, libs__print_help__document_options_for_users_guide_3_p_0_4, &env);
  }
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_SetAtOptLevelMap_9;

  libs__print_help__build_set_at_opt_level_map_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_SetAtOptLevelMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_SetAtOptLevelMap_9));
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InitialValueMap_9;

  libs__print_help__insert_initial_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InitialValueMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InitialValueMap_9));
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InitialValueMap_9;

  libs__print_help__insert_initial_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InitialValueMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InitialValueMap_9));
}

void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0(
  MR_Word ProgressStream_4)
{
  MR_Word MenuItemsTail_6;
  MR_Word OptionsLines_7;
  MR_Word MenuItems_8;
  MR_Word MenuLines_9;
  MR_Word OverviewLines_10;
  MR_Word AllLines_11;
  MR_Word Var_21;
  MR_Word InitialNoOptions_23;
  MR_Word InitialYesOptions_24;
  MR_Word InitialValueMap0_25;
  MR_Word InitialValueMap1_26;
  MR_Word InitialValueMap_27;
  MR_Word SetAtOptLevelMap_28;
  MR_Word OptionMaps_29;
  MR_Word AllCategoriesSet_31;
  MR_Word UndoneCategoriesSet_32;
  MR_Word SectionNameCord_33;
  MR_Word OptionsLineCord_34;
  MR_Word UndoneCategories_36;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word MenuItemLines_63;
  MR_Word Var_66;
  MR_Box conv1_InitialValueMap1_26;
  MR_Box conv3_InitialValueMap_27;
  MR_Box conv5_SetAtOptLevelMap_28;
  MR_Integer _NumDocOpts_35;

  libs__optimization_options__bool_option_initial_n_y_2_p_0(&InitialNoOptions_23, &InitialYesOptions_24);
  mercury__map__init_1_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), &InitialValueMap0_25);
  mercury__list__foldl_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_1[0]), (MR_Word) (&libs__print_help_scalar_common_3[92]), InitialNoOptions_23, ((MR_Box) (InitialValueMap0_25)), &conv1_InitialValueMap1_26);
  InitialValueMap1_26 = ((MR_Word) (conv1_InitialValueMap1_26));
  mercury__list__foldl_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_1[0]), (MR_Word) (&libs__print_help_scalar_common_3[93]), InitialYesOptions_24, ((MR_Box) (InitialValueMap1_26)), &conv3_InitialValueMap_27);
  InitialValueMap_27 = ((MR_Word) (conv3_InitialValueMap_27));
  Var_43 = mercury__map__init_0_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_2[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_1[13]), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[104])), ((MR_Box) (Var_43)), &conv5_SetAtOptLevelMap_28);
  SetAtOptLevelMap_28 = ((MR_Word) (conv5_SetAtOptLevelMap_28));
  {
    OptionMaps_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OptionMaps_29, 0) = ((MR_Box) (InitialValueMap_27));
    MR_hl_field(0, OptionMaps_29, 1) = ((MR_Box) (SetAtOptLevelMap_28));
  }
  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[14]), &AllCategoriesSet_31);
  Var_45 = libs__print_help__all_chapters_0_f_0();
  Var_46 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
  Var_47 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_44_32_51_93_95_49_13_p_1(OptionMaps_29, (MR_Integer) 0, Var_45, AllCategoriesSet_31, &UndoneCategoriesSet_32, Var_46, &SectionNameCord_33, Var_47, &OptionsLineCord_34, (MR_Integer) 0, &_NumDocOpts_35);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), UndoneCategoriesSet_32, &UndoneCategories_36);
  if (!((UndoneCategories_36 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_50;
    MR_String Var_52;

    Var_52 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_2[1]), ((MR_Box) (UndoneCategories_36)));
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "undone: ", Var_52);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.document_requested_options\'/4", Var_50);
      return;
    }
  }
  MenuItemsTail_6 = mercury__cord__list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), SectionNameCord_33);
  OptionsLines_7 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionsLineCord_34);
  {
    MenuItems_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MenuItems_8, 0) = ((MR_Box) (&libs__print_help_scalar_common_2[8]));
    MR_hl_field(1, MenuItems_8, 1) = ((MR_Box) (MenuItemsTail_6));
  }
  MenuItemLines_63 = mercury__list__map_2_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[15]), MenuItems_8);
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MenuItemLines_63, (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[109])));
  MenuLines_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[108])), Var_66);
  OverviewLines_10 = mercury__string__split_at_char_2_f_0((MR_Char) 10, (MR_String) "\n\100node Invocation overview\n\100section Invocation overview\n\100findex --no-\n\n\100code{mmc} is invoked as\n\100example\nmmc [\100var{options}] \100var{arguments}\n\100end example\n\nArgum" "ents can be either module names or file names.\nArguments ending in \100samp{.m} are assumed to be file names,\nwhile other arguments are assumed to be module names." "\nThe compiler will convert module names to file names\nby looking up the module name in the module-name-to-file-name map\nin the \100file{Mercury.modules} file it if" " exists.\n(It can be created using a command such as \100code{mmc -f *.m}.)\nIt \100file{Mercury.modules} does not exist, then the compiler\nwill search for a module nam" "ed e.g. \100samp{foo.bar.baz}\nin the files \100file{foo.bar.baz.m}, \100file{bar.baz.m}, and \100file{baz.m},\nin that order.\n\nOptions are either short (single-letter) optio" "ns preceded by a single \100samp{-},\nor long options preceded by \100samp{--}.\nOptions are case-sensitive.\nWe call options that do not take arguments \100dfn{flags}.\nSin" "gle-letter flags may be grouped with a single \100samp{-}, e.g.\100: \100samp{-vVc}.\nSingle-letter flags may be negated\nby appending another trailing \100samp{-}, e.g.\100: \100s" "amp{-v-}.\n(You cannot both group \100emph{and} negate single-letter flags at the same time.)\nLong flags may be negated by preceding them with \100samp{no-},\ne.g.\100: \100s" "amp{--no-verbose}.\n");
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OverviewLines_10, OptionsLines_7);
  AllLines_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MenuLines_9, Var_21);
  libs__print_help__write_lines_4_p_0(ProgressStream_4, AllLines_11);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_1,
  MR_Word Depth_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Categories_0_6,
  MR_Word * STATE_VARIABLE_Categories_7,
  MR_Word STATE_VARIABLE_MenuItemCord_0_8,
  MR_Word * STATE_VARIABLE_MenuItemCord_9,
  MR_Word STATE_VARIABLE_LineCord_0_10,
  MR_Word * STATE_VARIABLE_LineCord_11,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_12,
  MR_Integer * STATE_VARIABLE_NumDocOpts_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumDocOpts_13 = STATE_VARIABLE_NumDocOpts_0_12;
      *STATE_VARIABLE_LineCord_11 = STATE_VARIABLE_LineCord_0_10;
      *STATE_VARIABLE_MenuItemCord_9 = STATE_VARIABLE_MenuItemCord_0_8;
      *STATE_VARIABLE_Categories_7 = STATE_VARIABLE_Categories_0_6;
    }
    else
    {
      MR_Word Structure_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Structures_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_Categories_1_48;
      MR_Word STATE_VARIABLE_MenuItemCord_1_49;
      MR_Word STATE_VARIABLE_LineCord_1_50;
      MR_Integer STATE_VARIABLE_NumDocOpts_1_51;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_6;
      MR_Word next_value_of_STATE_VARIABLE_MenuItemCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_10;
      MR_Integer next_value_of_STATE_VARIABLE_NumDocOpts_0_12;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1(OptionMaps_1, Depth_4, Structure_34, STATE_VARIABLE_Categories_0_6, &STATE_VARIABLE_Categories_1_48, STATE_VARIABLE_MenuItemCord_0_8, &STATE_VARIABLE_MenuItemCord_1_49, STATE_VARIABLE_LineCord_0_10, &STATE_VARIABLE_LineCord_1_50, STATE_VARIABLE_NumDocOpts_0_12, &STATE_VARIABLE_NumDocOpts_1_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Structures_35;
      next_value_of_STATE_VARIABLE_Categories_0_6 = STATE_VARIABLE_Categories_1_48;
      next_value_of_STATE_VARIABLE_MenuItemCord_0_8 = STATE_VARIABLE_MenuItemCord_1_49;
      next_value_of_STATE_VARIABLE_LineCord_0_10 = STATE_VARIABLE_LineCord_1_50;
      next_value_of_STATE_VARIABLE_NumDocOpts_0_12 = STATE_VARIABLE_NumDocOpts_1_51;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Categories_0_6 = next_value_of_STATE_VARIABLE_Categories_0_6;
      STATE_VARIABLE_MenuItemCord_0_8 = next_value_of_STATE_VARIABLE_MenuItemCord_0_8;
      STATE_VARIABLE_LineCord_0_10 = next_value_of_STATE_VARIABLE_LineCord_0_10;
      STATE_VARIABLE_NumDocOpts_0_12 = next_value_of_STATE_VARIABLE_NumDocOpts_0_12;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_CommentedOutLine_4;

  conv0_CommentedOutLine_4 = libs__print_help__comment_out_texinfo_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_CommentedOutLine_4));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_14,
  MR_Word Depth_17,
  MR_Word Structure_18,
  MR_Word STATE_VARIABLE_Categories_0_45,
  MR_Word * STATE_VARIABLE_Categories_46,
  MR_Word STATE_VARIABLE_MenuItemCord_0_47,
  MR_Word * STATE_VARIABLE_MenuItemCord_48,
  MR_Word STATE_VARIABLE_LineCord_0_49,
  MR_Word * STATE_VARIABLE_LineCord_50,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_51,
  MR_Integer * STATE_VARIABLE_NumDocOpts_52)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Structure_18)) == (MR_Integer) 0))
  {
    MR_Word SubSection_23 = (MR_Word) ((MR_Word) (Structure_18));
    MR_String GroupName_24 = ((MR_String) ((MR_hl_field(0, SubSection_23, 0))));
    MR_String MenuDesc_25 = ((MR_String) ((MR_hl_field(0, SubSection_23, 1))));
    MR_Integer SubNumDocOpts_29;
    MR_Word Var_54;
    MR_Word _MenuItemCord_28;

    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
    libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1(OptionMaps_14, Depth_17, SubSection_23, STATE_VARIABLE_Categories_0_45, STATE_VARIABLE_Categories_46, Var_54, &_MenuItemCord_28, STATE_VARIABLE_LineCord_0_49, STATE_VARIABLE_LineCord_50, (MR_Integer) 0, &SubNumDocOpts_29);
    *STATE_VARIABLE_NumDocOpts_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_51 + (MR_Unsigned) SubNumDocOpts_29);
    succeeded = (SubNumDocOpts_29 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_59;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (GroupName_24));
        MR_hl_field(0, Var_59, 1) = ((MR_Box) (MenuDesc_25));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), ((MR_Box) (Var_59)), STATE_VARIABLE_MenuItemCord_0_47, STATE_VARIABLE_MenuItemCord_48);
    }
    else
      *STATE_VARIABLE_MenuItemCord_48 = STATE_VARIABLE_MenuItemCord_0_47;
  }
  else
  {
    MR_String StructureName_30 = ((MR_String) ((MR_hl_field(1, Structure_18, 0))));
    MR_String StructureDesc_31 = ((MR_String) ((MR_hl_field(1, Structure_18, 1))));
    MR_Word CommentLines_32 = ((MR_Word) ((MR_hl_field(1, Structure_18, 2))));
    MR_Word SubStructures_33 = ((MR_Word) ((MR_hl_field(1, Structure_18, 3))));
    MR_Word SubDepth_34;
    MR_Word SubMenuItemCord_35;
    MR_Word SubStructuresLineCord_36;
    MR_String SectionKind_41;
    MR_Word SubMenuLines_42;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word STATE_VARIABLE_GroupLineCord_7_77;
    MR_Word STATE_VARIABLE_GroupLineCord_8_79;
    MR_Word STATE_VARIABLE_GroupLineCord_9_81;
    MR_Word STATE_VARIABLE_GroupLineCord_10_82;
    MR_Word STATE_VARIABLE_GroupLineCord_11_84;
    MR_Word STATE_VARIABLE_GroupLineCord_12_86;
    MR_Word Var_87;
    MR_Word STATE_VARIABLE_GroupLineCord_13_88;
    MR_Word Var_89;
    MR_Word STATE_VARIABLE_GroupLineCord_15_92;
    MR_Word STATE_VARIABLE_GroupLineCord_16_94;
    MR_Word STATE_VARIABLE_GroupLineCord_17_97;
    MR_Integer SubNumDocOpts_99;
    MR_String Line_105;
    MR_String Var_114;
    MR_String Var_115;

    Var_62 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
    Var_63 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    STATE_VARIABLE_GroupLineCord_7_77 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    switch (Depth_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          SubDepth_34 = (MR_Integer) 1;
          SectionKind_41 = (MR_String) "\100section";
        }
        break;
      case (MR_Integer) 1:
        {
          SubDepth_34 = (MR_Integer) 2;
          SectionKind_41 = (MR_String) "\100subsection";
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.next_depth\'/2", (MR_String) "sd_subsubsection");
          return;
        }
        break;
    }
    libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_44_32_51_93_95_49_13_p_1(OptionMaps_14, SubDepth_34, SubStructures_33, STATE_VARIABLE_Categories_0_45, STATE_VARIABLE_Categories_46, Var_62, &SubMenuItemCord_35, Var_63, &SubStructuresLineCord_36, (MR_Integer) 0, &SubNumDocOpts_99);
    *STATE_VARIABLE_NumDocOpts_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_51 + (MR_Unsigned) SubNumDocOpts_99);
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_7_77, &STATE_VARIABLE_GroupLineCord_8_79);
    Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " ", StructureName_30);
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 15, (MR_String) "\100node", &Var_115);
    Line_105 = mercury__string__f_43_43_2_f_0(Var_115, Var_114);
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_105)), STATE_VARIABLE_GroupLineCord_8_79, &STATE_VARIABLE_GroupLineCord_9_81);
    libs__print_help__add_node_line_4_p_0(SectionKind_41, StructureName_30, STATE_VARIABLE_GroupLineCord_9_81, &STATE_VARIABLE_GroupLineCord_10_82);
    libs__print_help__add_node_line_4_p_0((MR_String) "\100cindex", StructureName_30, STATE_VARIABLE_GroupLineCord_10_82, &STATE_VARIABLE_GroupLineCord_11_84);
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_11_84, &STATE_VARIABLE_GroupLineCord_12_86);
    Var_87 = mercury__cord__list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), SubMenuItemCord_35);
    SubMenuLines_42 = libs__print_help__menu_items_to_menu_1_f_0(Var_87);
    Var_89 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubMenuLines_42);
    STATE_VARIABLE_GroupLineCord_13_88 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_12_86, Var_89);
    if ((CommentLines_32 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_GroupLineCord_15_92 = STATE_VARIABLE_GroupLineCord_13_88;
    else
    {
      MR_Word STATE_VARIABLE_GroupLineCord_14_91;
      MR_Word Var_93;

      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_13_88, &STATE_VARIABLE_GroupLineCord_14_91);
      Var_93 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CommentLines_32);
      STATE_VARIABLE_GroupLineCord_15_92 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_14_91, Var_93);
    }
    succeeded = (SubNumDocOpts_99 == (MR_Integer) 0);
    if (succeeded)
    {
      STATE_VARIABLE_GroupLineCord_16_94 = mercury__cord__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[12]), STATE_VARIABLE_GroupLineCord_15_92);
      *STATE_VARIABLE_MenuItemCord_48 = STATE_VARIABLE_MenuItemCord_0_47;
    }
    else
    {
      MR_Word Var_95;

      {
        Var_95 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_95, 0) = ((MR_Box) (StructureName_30));
        MR_hl_field(0, Var_95, 1) = ((MR_Box) (StructureDesc_31));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), ((MR_Box) (Var_95)), STATE_VARIABLE_MenuItemCord_0_47, STATE_VARIABLE_MenuItemCord_48);
      STATE_VARIABLE_GroupLineCord_16_94 = STATE_VARIABLE_GroupLineCord_15_92;
    }
    STATE_VARIABLE_GroupLineCord_17_97 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_16_94, SubStructuresLineCord_36);
    *STATE_VARIABLE_LineCord_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_0_49, STATE_VARIABLE_GroupLineCord_17_97);
  }
}

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_CommentedOutLine_4;

  conv2_CommentedOutLine_4 = libs__print_help__comment_out_texinfo_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_CommentedOutLine_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_CommentedOutLine_4;

  conv1_CommentedOutLine_4 = libs__print_help__comment_out_texinfo_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_CommentedOutLine_4));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_OptdbRecordSet_4;

  libs__print_help__get_optdb_records_in_category_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_OptdbRecordSet_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_OptdbRecordSet_4));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_44_32_51_93_95_49_13_p_1(
  MR_Word OptionMaps_14,
  MR_Word Depth_17,
  MR_Word Group_18,
  MR_Word STATE_VARIABLE_Categories_0_40,
  MR_Word * STATE_VARIABLE_Categories_41,
  MR_Word STATE_VARIABLE_MenuItemCord_0_42,
  MR_Word * STATE_VARIABLE_MenuItemCord_43,
  MR_Word STATE_VARIABLE_LineCord_0_44,
  MR_Word * STATE_VARIABLE_LineCord_45,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_46,
  MR_Integer * STATE_VARIABLE_NumDocOpts_47)
{
  MR_bool succeeded;
  MR_Word Categories_19 = ((MR_Word) ((MR_hl_field(0, Group_18, 3))));
  MR_String GroupName_23 = ((MR_String) ((MR_hl_field(0, Group_18, 0))));
  MR_String MenuDesc_24 = ((MR_String) ((MR_hl_field(0, Group_18, 1))));
  MR_Word CommentLines_25 = ((MR_Word) ((MR_hl_field(0, Group_18, 2))));
  MR_Word OptdbRecordSets_27;
  MR_Word OptdbRecordSet_28;
  MR_Word HelpTextLinesCord_29;
  MR_Integer GroupNumDocOpts_30;
  MR_Word GroupLineCord_32;
  MR_String SectionKind_37;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_GroupStartLineCord_1_72;
  MR_Word STATE_VARIABLE_GroupEndLineCord_1_73;
  MR_Word STATE_VARIABLE_GroupStartLineCord_2_75;
  MR_Word STATE_VARIABLE_GroupStartLineCord_3_77;
  MR_Word STATE_VARIABLE_GroupStartLineCord_4_78;
  MR_Word STATE_VARIABLE_GroupStartLineCord_5_80;
  MR_Word STATE_VARIABLE_GroupStartLineCord_7_83;
  MR_Word STATE_VARIABLE_GroupStartLineCord_8_86;
  MR_Word STATE_VARIABLE_GroupStartLineCord_9_88;
  MR_Word STATE_VARIABLE_GroupEndLineCord_2_90;
  MR_Word STATE_VARIABLE_GroupEndLineCord_3_92;
  MR_Word STATE_VARIABLE_GroupStartLineCord_10_93;
  MR_Word STATE_VARIABLE_GroupEndLineCord_4_95;
  MR_Word Var_99;
  MR_String Line_117;
  MR_String Var_126;
  MR_String Var_127;
  MR_Word STATE_VARIABLE_Categories_1_48;

  succeeded = mercury__set__remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), Categories_19, STATE_VARIABLE_Categories_0_40, &STATE_VARIABLE_Categories_1_48);
  if (succeeded)
    *STATE_VARIABLE_Categories_41 = STATE_VARIABLE_Categories_1_48;
  else
  {
    MR_String Msg_26;
    MR_String Var_52;
    MR_String Var_136;

    Var_52 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_2[1]), ((MR_Box) (Categories_19)));
    Var_136 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) " is listed more than once");
    Msg_26 = mercury__string__f_43_43_2_f_0((MR_String) "some category in ", Var_136);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.acc_help_option_group\'/13", Msg_26);
      return;
    }
  }
  mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_2[2]), (MR_Word) (&libs__print_help_scalar_common_1[9]), Categories_19, &OptdbRecordSets_27);
  OptdbRecordSet_28 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_27);
  Var_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_28);
  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_44_32_51_93_95_49_8_p_1(OptionMaps_14, Var_57, Var_58, &HelpTextLinesCord_29, (MR_Integer) 0, &GroupNumDocOpts_30);
  *STATE_VARIABLE_NumDocOpts_47 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_46 + (MR_Unsigned) GroupNumDocOpts_30);
  STATE_VARIABLE_GroupStartLineCord_1_72 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  STATE_VARIABLE_GroupEndLineCord_1_73 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  switch (Depth_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SectionKind_37 = (MR_String) "\100section";
      break;
    case (MR_Integer) 1:
      SectionKind_37 = (MR_String) "\100subsection";
      break;
    case (MR_Integer) 2:
      SectionKind_37 = (MR_String) "\100subsubsection";
      break;
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupStartLineCord_1_72, &STATE_VARIABLE_GroupStartLineCord_2_75);
  Var_126 = mercury__string__f_43_43_2_f_0((MR_String) " ", GroupName_23);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 15, (MR_String) "\100node", &Var_127);
  Line_117 = mercury__string__f_43_43_2_f_0(Var_127, Var_126);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_117)), STATE_VARIABLE_GroupStartLineCord_2_75, &STATE_VARIABLE_GroupStartLineCord_3_77);
  libs__print_help__add_node_line_4_p_0(SectionKind_37, GroupName_23, STATE_VARIABLE_GroupStartLineCord_3_77, &STATE_VARIABLE_GroupStartLineCord_4_78);
  libs__print_help__add_node_line_4_p_0((MR_String) "\100cindex", GroupName_23, STATE_VARIABLE_GroupStartLineCord_4_78, &STATE_VARIABLE_GroupStartLineCord_5_80);
  if ((CommentLines_25 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_GroupStartLineCord_7_83 = STATE_VARIABLE_GroupStartLineCord_5_80;
  else
  {
    MR_Word STATE_VARIABLE_GroupStartLineCord_6_82;
    MR_Word Var_84;

    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupStartLineCord_5_80, &STATE_VARIABLE_GroupStartLineCord_6_82);
    Var_84 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CommentLines_25);
    STATE_VARIABLE_GroupStartLineCord_7_83 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupStartLineCord_6_82, Var_84);
  }
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupStartLineCord_7_83, &STATE_VARIABLE_GroupStartLineCord_8_86);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\100table \100asis")), STATE_VARIABLE_GroupStartLineCord_8_86, &STATE_VARIABLE_GroupStartLineCord_9_88);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupEndLineCord_1_73, &STATE_VARIABLE_GroupEndLineCord_2_90);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\100end table")), STATE_VARIABLE_GroupEndLineCord_2_90, &STATE_VARIABLE_GroupEndLineCord_3_92);
  succeeded = (GroupNumDocOpts_30 == (MR_Integer) 0);
  if (succeeded)
  {
    STATE_VARIABLE_GroupStartLineCord_10_93 = mercury__cord__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[10]), STATE_VARIABLE_GroupStartLineCord_9_88);
    STATE_VARIABLE_GroupEndLineCord_4_95 = mercury__cord__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[11]), STATE_VARIABLE_GroupEndLineCord_3_92);
    *STATE_VARIABLE_MenuItemCord_43 = STATE_VARIABLE_MenuItemCord_0_42;
  }
  else
  {
    MR_Word Var_97;

    {
      Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_97, 0) = ((MR_Box) (GroupName_23));
      MR_hl_field(0, Var_97, 1) = ((MR_Box) (MenuDesc_24));
    }
    mercury__cord__snoc_3_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), ((MR_Box) (Var_97)), STATE_VARIABLE_MenuItemCord_0_42, STATE_VARIABLE_MenuItemCord_43);
    STATE_VARIABLE_GroupEndLineCord_4_95 = STATE_VARIABLE_GroupEndLineCord_3_92;
    STATE_VARIABLE_GroupStartLineCord_10_93 = STATE_VARIABLE_GroupStartLineCord_9_88;
  }
  Var_99 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HelpTextLinesCord_29, STATE_VARIABLE_GroupEndLineCord_4_95);
  GroupLineCord_32 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupStartLineCord_10_93, Var_99);
  *STATE_VARIABLE_LineCord_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_0_44, GroupLineCord_32);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_44_32_51_93_95_49_8_p_1(
  MR_Word OptionMaps_1,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_5,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_6,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_7,
  MR_Integer * STATE_VARIABLE_NumDocOpts_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumDocOpts_8 = STATE_VARIABLE_NumDocOpts_0_7;
      *STATE_VARIABLE_EffectiveLinesCord_6 = STATE_VARIABLE_EffectiveLinesCord_0_5;
    }
    else
    {
      MR_Word OptdbRecord_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word OptdbRecords_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_EffectiveLinesCord_1_29;
      MR_Integer STATE_VARIABLE_NumDocOpts_1_30;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5;
      MR_Integer next_value_of_STATE_VARIABLE_NumDocOpts_0_7;

      libs__print_help__acc_help_message_texinfo_6_p_0(OptionMaps_1, OptdbRecord_21, STATE_VARIABLE_EffectiveLinesCord_0_5, &STATE_VARIABLE_EffectiveLinesCord_1_29, STATE_VARIABLE_NumDocOpts_0_7, &STATE_VARIABLE_NumDocOpts_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OptdbRecords_22;
      next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5 = STATE_VARIABLE_EffectiveLinesCord_1_29;
      next_value_of_STATE_VARIABLE_NumDocOpts_0_7 = STATE_VARIABLE_NumDocOpts_1_30;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_EffectiveLinesCord_0_5 = next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5;
      STATE_VARIABLE_NumDocOpts_0_7 = next_value_of_STATE_VARIABLE_NumDocOpts_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_IndexLineCord_8;

  libs__print_help__add_findex_line_texinfo_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_IndexLineCord_8);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_IndexLineCord_8));
}

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_IndexLineCord_8;

  libs__print_help__add_cindex_line_texinfo_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_IndexLineCord_8);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_IndexLineCord_8));
}

static MR_bool MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__is_bool_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_OptLineCord_26;
  MR_Word conv0_STATE_VARIABLE_IndexLineCord_28;

  libs__print_help__acc_arg_align_text_texinfo_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_OptLineCord_26, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_IndexLineCord_28);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_OptLineCord_26));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_IndexLineCord_28));
}

static void MR_CALL 
libs__print_help__acc_help_message_texinfo_6_p_0(
  MR_Word OptionMaps_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_63,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_64,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_65,
  MR_Integer * STATE_VARIABLE_NumDocOpts_66)
{
  MR_bool succeeded;
  MR_Word Params_11;
  MR_Word Option_12;
  MR_Word OptionData_14;
  MR_Word Help_15;
  MR_Word PublicOrPrivate_19;
  MR_Word DescPieces_21;
  MR_Word EffDescPieces0_46;
  MR_Word SetAtOptLevelMap_50;
  MR_Word EffDescPieces_57;
  MR_Word CindexTopics_58;
  MR_Word FindexTopics_59;
  MR_Word ReflowLines_60;
  MR_Word BlankLineCord_61;
  MR_Word SpaceLine_62;
  MR_Word STATE_VARIABLE_OptLineCord_1_67;
  MR_Word STATE_VARIABLE_IndexLineCord_1_68;
  MR_Word STATE_VARIABLE_OptLineCord_2_74;
  MR_Word STATE_VARIABLE_IndexLineCord_4_92;
  MR_Word STATE_VARIABLE_IndexLineCord_20_158;
  MR_Word STATE_VARIABLE_IndexLineCord_21_160;
  MR_Word STATE_VARIABLE_LineCord_1_163;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word STATE_VARIABLE_LineCord_2_169;
  MR_Word Var_171;
  MR_Word OoMSetAtOptLevels_51;
  MR_String OptionLongName_52;
  MR_Word Var_152;
  MR_Box conv5_STATE_VARIABLE_IndexLineCord_20_158;
  MR_Box conv7_STATE_VARIABLE_IndexLineCord_21_160;

  libs__print_help__get_optdb_record_params_3_p_0(OptionMaps_7, OptdbRecord_8, &Params_11);
  Option_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptdbRecord_8, 0))) >> 7)) & (MR_Integer) 1023);
  OptionData_14 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 1))));
  Help_15 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 2))));
  STATE_VARIABLE_OptLineCord_1_67 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  STATE_VARIABLE_IndexLineCord_1_68 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  switch (MR_tag((MR_Word) Help_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String NameLine_20;
        MR_String Var_72;

        PublicOrPrivate_19 = (MR_Integer) 1;
        Var_72 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_12)));
        NameLine_20 = mercury__string__f_43_43_2_f_0((MR_String) "NO_HELP OPTION ", Var_72);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (NameLine_20)), STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74);
        DescPieces_21 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_IndexLineCord_4_92 = STATE_VARIABLE_IndexLineCord_1_68;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ShortNames_22 = ((MR_Word) ((MR_hl_field(1, Help_15, 0))));
        MR_String LongName_23 = ((MR_String) ((MR_hl_field(1, Help_15, 1))));
        MR_Word AltLongNames_24 = ((MR_Word) ((MR_hl_field(1, Help_15, 2))));
        MR_Word STATE_VARIABLE_OptLineCord_4_83;
        MR_Word STATE_VARIABLE_IndexLineCord_2_84;
        MR_Word STATE_VARIABLE_OptLineCord_5_87;
        MR_Word STATE_VARIABLE_IndexLineCord_3_88;

        PublicOrPrivate_19 = ((MR_Unsigned) ((MR_hl_field(1, Help_15, 3))) & (MR_Integer) 1);
        DescPieces_21 = ((MR_Word) ((MR_hl_field(1, Help_15, 4))));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortNames_22, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_4_83, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_2_84);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_23, STATE_VARIABLE_OptLineCord_4_83, &STATE_VARIABLE_OptLineCord_5_87, STATE_VARIABLE_IndexLineCord_2_84, &STATE_VARIABLE_IndexLineCord_3_88);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_24, STATE_VARIABLE_OptLineCord_5_87, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_3_88, &STATE_VARIABLE_IndexLineCord_4_92);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_233 = ((MR_String) ((MR_hl_field(2, Help_15, 0))));

        DescPieces_21 = ((MR_Word) ((MR_hl_field(2, Help_15, 1))));
        PublicOrPrivate_19 = (MR_Integer) 0;
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_233, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_4_92);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_15, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeArg_25;
            MR_String ArgName_26 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_String LongName_174 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            {
              MaybeArg_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_25, 0) = ((MR_Box) (ArgName_26));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_25, LongName_174, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_261 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_261, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgName_173 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word MaybeArg_256;
            MR_String LongName_258 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            {
              MaybeArg_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_256, 0) = ((MR_Box) (ArgName_173));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_256, LongName_258, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_OptLineCord_8_225;
            MR_Word STATE_VARIABLE_IndexLineCord_6_226;
            MR_String LongName_228 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_229 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_228, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_8_225, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_6_226);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_229, STATE_VARIABLE_OptLineCord_8_225, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_6_226, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ArgAligns_43 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AAIndexLines0_44;
            MR_Word AAIndexLines_45;
            MR_Word Var_145;
            MR_Word STATE_VARIABLE_IndexLineCord_18_147;
            MR_String LongName_198 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Box conv3_STATE_VARIABLE_OptLineCord_2_74;
            MR_Box conv2_STATE_VARIABLE_IndexLineCord_18_147;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_145 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_145, 0) = ((MR_Box) (&libs__print_help_scalar_common_9[0]));
              MR_hl_field(0, Var_145, 1) = ((MR_Box) (libs__print_help__acc_help_message_texinfo_6_p_0_1));
              MR_hl_field(0, Var_145, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_145, 3) = ((MR_Box) (Params_11));
              MR_hl_field(0, Var_145, 4) = ((MR_Box) (Option_12));
              MR_hl_field(0, Var_145, 5) = ((MR_Box) (LongName_198));
            }
            mercury__list__foldl2_6_p_0((MR_Word) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), (MR_Word) (&libs__print_help_scalar_common_2[3]), Var_145, ArgAligns_43, ((MR_Box) (STATE_VARIABLE_OptLineCord_1_67)), &conv3_STATE_VARIABLE_OptLineCord_2_74, ((MR_Box) (STATE_VARIABLE_IndexLineCord_1_68)), &conv2_STATE_VARIABLE_IndexLineCord_18_147);
            STATE_VARIABLE_OptLineCord_2_74 = ((MR_Word) (conv3_STATE_VARIABLE_OptLineCord_2_74));
            STATE_VARIABLE_IndexLineCord_18_147 = ((MR_Word) (conv2_STATE_VARIABLE_IndexLineCord_18_147));
            AAIndexLines0_44 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_IndexLineCord_18_147);
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AAIndexLines0_44, &AAIndexLines_45);
            STATE_VARIABLE_IndexLineCord_4_92 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AAIndexLines_45);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String AlignedText_29 = ((MR_String) ((MR_hl_field(3, Help_15, 4))));
            MR_Word Align_31;
            MR_Word STATE_VARIABLE_OptLineCord_13_111;
            MR_Word STATE_VARIABLE_IndexLineCord_11_112;
            MR_String LongName_189 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_190 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 5))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Align_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_31, 0) = ((MR_Box) (AlignedText_29));
            }
            libs__print_help__acc_long_option_name_texinfo_9_p_1(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_31, LongName_189, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_13_111, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_11_112);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_190, STATE_VARIABLE_OptLineCord_13_111, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_11_112, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String NoAlignedText_35 = ((MR_String) ((MR_hl_field(3, Help_15, 5))));
            MR_Word ParamsNN_36;
            MR_String FirstOptLine0_37;
            MR_String FirstIndexLine_38;
            MR_String SecondIndexLine_39;
            MR_String SecondOptLine0_40;
            MR_String FirstOptLine_41;
            MR_String SecondOptLine_42;
            MR_Word Var_128;
            MR_String Var_137;
            MR_String Var_139;
            MR_Word STATE_VARIABLE_OptLineCord_18_141;
            MR_Word STATE_VARIABLE_IndexLineCord_16_143;
            MR_String LongName_196 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_String AlignedText_197 = ((MR_String) ((MR_hl_field(3, Help_15, 4))));
            MR_String Var_298;
            MR_Word Var_199;
            MR_Word Var_201;
            MR_Word Var_202;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 6))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_128 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_128, 0) = ((MR_Box) (&libs__print_help_scalar_common_3[88]));
              MR_hl_field(0, Var_128, 1) = ((MR_Box) (libs__print_help__acc_help_message_texinfo_6_p_0_2));
              MR_hl_field(0, Var_128, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_128, 3) = ((MR_Box) (OptionData_14));
            }
            mercury__require__expect_3_p_0(Var_128, (MR_String) "predicate \140libs.print_help.acc_help_message_texinfo\'/6", (MR_String) "unexpected use of no_align_help");
            Var_199 = ((((MR_Unsigned) ((MR_hl_field(0, Params_11, 0))) >> 4)) & (MR_Integer) 1);
            Var_201 = ((((MR_Unsigned) ((MR_hl_field(0, Params_11, 0))) >> 2)) & (MR_Integer) 1);
            Var_202 = ((MR_Unsigned) ((MR_hl_field(0, Params_11, 0))) & (MR_Integer) 3);
            {
              ParamsNN_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParamsNN_36, 0) = (MR_Box) (((((MR_Unsigned) (Var_199) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_201) << 2)) | (MR_Unsigned) (Var_202)))))));
            }
            libs__print_help__long_option_name_lines_texinfo_6_p_0(ParamsNN_36, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_196, &FirstOptLine0_37, &FirstIndexLine_38);
            SecondIndexLine_39 = libs__print_help__long_negated_option_name_texinfo_1_f_0(LongName_196);
            Var_298 = mercury__string__f_43_43_2_f_0(SecondIndexLine_39, (MR_String) "}");
            SecondOptLine0_40 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{", Var_298);
            Var_137 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_197);
            FirstOptLine_41 = mercury__string__f_43_43_2_f_0(FirstOptLine0_37, Var_137);
            Var_139 = mercury__string__f_43_43_2_f_0((MR_String) " ", NoAlignedText_35);
            SecondOptLine_42 = mercury__string__f_43_43_2_f_0(SecondOptLine0_40, Var_139);
            libs__print_help__add_option_line_texinfo_3_p_0(FirstOptLine_41, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_18_141);
            libs__print_help__add_option_line_texinfo_3_p_0(SecondOptLine_42, STATE_VARIABLE_OptLineCord_18_141, &STATE_VARIABLE_OptLineCord_2_74);
            libs__print_help__add_findex_line_texinfo_3_p_0(FirstIndexLine_38, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_16_143);
            libs__print_help__add_findex_line_texinfo_3_p_0(SecondIndexLine_39, STATE_VARIABLE_IndexLineCord_16_143, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String AlignedText_234 = ((MR_String) ((MR_hl_field(3, Help_15, 4))));
            MR_Word Align_235;
            MR_Word STATE_VARIABLE_OptLineCord_13_236;
            MR_Word STATE_VARIABLE_IndexLineCord_11_237;
            MR_String LongName_239 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_240 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 5))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            {
              Align_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_235, 0) = ((MR_Box) (AlignedText_234));
            }
            libs__print_help__acc_long_option_name_texinfo_9_p_1(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_235, LongName_239, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_13_236, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_11_237);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_240, STATE_VARIABLE_OptLineCord_13_236, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_11_237, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_117;
            MR_Word STATE_VARIABLE_OptLineCord_15_118;
            MR_Word STATE_VARIABLE_IndexLineCord_13_119;
            MR_Word STATE_VARIABLE_OptLineCord_16_122;
            MR_Word STATE_VARIABLE_IndexLineCord_14_123;
            MR_String LongName_192 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AltLongNames_193 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            MR_Char ShortName_194 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_15, 1)));
            MR_String AlignedText_195 = ((MR_String) ((MR_hl_field(3, Help_15, 5))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 6))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_117, 0) = ((MR_Box) (AlignedText_195));
            }
            libs__print_help__acc_short_option_name_texinfo_9_p_1(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), Var_117, ShortName_194, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_15_118, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_13_119);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_192, STATE_VARIABLE_OptLineCord_15_118, &STATE_VARIABLE_OptLineCord_16_122, STATE_VARIABLE_IndexLineCord_13_119, &STATE_VARIABLE_IndexLineCord_14_123);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_193, STATE_VARIABLE_OptLineCord_16_122, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_14_123, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_OptLineCord_8_97;
            MR_Word STATE_VARIABLE_IndexLineCord_6_98;
            MR_String ArgName_175 = ((MR_String) ((MR_hl_field(3, Help_15, 3))));
            MR_String LongName_178 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_179 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));
            MR_Word MaybeArg_180;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 4))));
            {
              MaybeArg_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_180, 0) = ((MR_Box) (ArgName_175));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_180, LongName_178, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_8_97, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_6_98);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_180, AltLongNames_179, STATE_VARIABLE_OptLineCord_8_97, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_6_98, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_OptLineCord_8_250;
            MR_Word STATE_VARIABLE_IndexLineCord_6_251;
            MR_String LongName_253 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_254 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_253, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_8_250, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_6_251);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_254, STATE_VARIABLE_OptLineCord_8_250, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_6_251, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String ArgName_176 = ((MR_String) ((MR_hl_field(3, Help_15, 3))));
            MR_Word STATE_VARIABLE_OptLineCord_8_243;
            MR_Word STATE_VARIABLE_IndexLineCord_6_244;
            MR_String LongName_246 = ((MR_String) ((MR_hl_field(3, Help_15, 1))));
            MR_Word AltLongNames_247 = ((MR_Word) ((MR_hl_field(3, Help_15, 2))));
            MR_Word MaybeArg_248;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 4))));
            {
              MaybeArg_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_248, 0) = ((MR_Box) (ArgName_176));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_248, LongName_246, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_8_243, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_6_244);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_248, AltLongNames_247, STATE_VARIABLE_OptLineCord_8_243, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_6_244, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Char ShortName_284 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_15, 1)));
            MR_Word STATE_VARIABLE_OptLineCord_10_286;
            MR_Word STATE_VARIABLE_IndexLineCord_8_287;
            MR_Word STATE_VARIABLE_OptLineCord_11_289;
            MR_Word STATE_VARIABLE_IndexLineCord_9_290;
            MR_String LongName_292 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AltLongNames_293 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 4))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_284, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_10_286, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_8_287);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_292, STATE_VARIABLE_OptLineCord_10_286, &STATE_VARIABLE_OptLineCord_11_289, STATE_VARIABLE_IndexLineCord_8_287, &STATE_VARIABLE_IndexLineCord_9_290);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_293, STATE_VARIABLE_OptLineCord_11_289, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_9_290, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Char ShortName_262 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_15, 1)));
            MR_Word STATE_VARIABLE_OptLineCord_10_264;
            MR_Word STATE_VARIABLE_IndexLineCord_8_265;
            MR_Word STATE_VARIABLE_OptLineCord_11_267;
            MR_Word STATE_VARIABLE_IndexLineCord_9_268;
            MR_String LongName_270 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AltLongNames_271 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 4))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_262, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_10_264, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_8_265);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_270, STATE_VARIABLE_OptLineCord_10_264, &STATE_VARIABLE_OptLineCord_11_267, STATE_VARIABLE_IndexLineCord_8_265, &STATE_VARIABLE_IndexLineCord_9_268);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_271, STATE_VARIABLE_OptLineCord_11_267, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_9_268, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String ArgName_182 = ((MR_String) ((MR_hl_field(3, Help_15, 4))));
            MR_Char ShortName_273 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_15, 1)));
            MR_Word STATE_VARIABLE_OptLineCord_10_275;
            MR_Word STATE_VARIABLE_IndexLineCord_8_276;
            MR_Word STATE_VARIABLE_OptLineCord_11_278;
            MR_Word STATE_VARIABLE_IndexLineCord_9_279;
            MR_String LongName_281 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AltLongNames_282 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            MR_Word MaybeArg_283;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 5))));
            {
              MaybeArg_283 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_283, 0) = ((MR_Box) (ArgName_182));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_283, ShortName_273, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_10_275, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_8_276);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_283, LongName_281, STATE_VARIABLE_OptLineCord_10_275, &STATE_VARIABLE_OptLineCord_11_278, STATE_VARIABLE_IndexLineCord_8_276, &STATE_VARIABLE_IndexLineCord_9_279);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_283, AltLongNames_282, STATE_VARIABLE_OptLineCord_11_278, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_9_279, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Char ShortName_27 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_15, 1)));
            MR_Word STATE_VARIABLE_OptLineCord_10_103;
            MR_Word STATE_VARIABLE_IndexLineCord_8_104;
            MR_Word STATE_VARIABLE_OptLineCord_11_106;
            MR_Word STATE_VARIABLE_IndexLineCord_9_107;
            MR_String ArgName_183 = ((MR_String) ((MR_hl_field(3, Help_15, 4))));
            MR_String LongName_185 = ((MR_String) ((MR_hl_field(3, Help_15, 2))));
            MR_Word AltLongNames_186 = ((MR_Word) ((MR_hl_field(3, Help_15, 3))));
            MR_Word MaybeArg_187;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 5))));
            {
              MaybeArg_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_187, 0) = ((MR_Box) (ArgName_183));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_187, ShortName_27, STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_10_103, STATE_VARIABLE_IndexLineCord_1_68, &STATE_VARIABLE_IndexLineCord_8_104);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_187, LongName_185, STATE_VARIABLE_OptLineCord_10_103, &STATE_VARIABLE_OptLineCord_11_106, STATE_VARIABLE_IndexLineCord_8_104, &STATE_VARIABLE_IndexLineCord_9_107);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_11, Option_12, MaybeArg_187, AltLongNames_186, STATE_VARIABLE_OptLineCord_11_106, &STATE_VARIABLE_OptLineCord_2_74, STATE_VARIABLE_IndexLineCord_9_107, &STATE_VARIABLE_IndexLineCord_4_92);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String Var_78;
            MR_String NameLine_172;

            DescPieces_21 = ((MR_Word) ((MR_hl_field(3, Help_15, 1))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            Var_78 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_12)));
            NameLine_172 = mercury__string__f_43_43_2_f_0((MR_String) "UNNAMED OPTION ", Var_78);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (NameLine_172)), STATE_VARIABLE_OptLineCord_1_67, &STATE_VARIABLE_OptLineCord_2_74);
            STATE_VARIABLE_IndexLineCord_4_92 = STATE_VARIABLE_IndexLineCord_1_68;
          }
          break;
      }
      break;
  }
  if ((DescPieces_21 == (MR_Word) ((MR_Unsigned) 0U)))
    EffDescPieces0_46 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[105]));
  else
    EffDescPieces0_46 = DescPieces_21;
  SetAtOptLevelMap_50 = ((MR_Word) ((MR_hl_field(0, OptionMaps_7, 1))));
  succeeded = mercury__one_or_more_map__search_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0), SetAtOptLevelMap_50, ((MR_Box) (Option_12)), &OoMSetAtOptLevels_51);
  if (succeeded)
  {
    libs__print_help__get_main_long_name_2_p_0(Option_12, &Var_152);
    succeeded = (Var_152 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      OptionLongName_52 = ((MR_String) ((MR_hl_field(1, Var_152, 0))));
  }
  if (succeeded)
  {
    MR_Word SetAtOptLevels_53;
    MR_Word SortedSetAtOptLevels_54;
    MR_Word RevSortedSetAtOptLevels_55;
    MR_Word SetAtLevelPieces_56;

    SetAtOptLevels_53 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0), OoMSetAtOptLevels_51);
    mercury__list__sort_2_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0), SetAtOptLevels_53, &SortedSetAtOptLevels_54);
    mercury__list__reverse_2_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0), SortedSetAtOptLevels_54, &RevSortedSetAtOptLevels_55);
    libs__print_help__acc_set_at_opt_level_pieces_5_p_0(OptionLongName_52, RevSortedSetAtOptLevels_55, (MR_Integer) 7, (MR_Word) ((MR_Unsigned) 0U), &SetAtLevelPieces_56);
    EffDescPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_piece_0), EffDescPieces0_46, SetAtLevelPieces_56);
  }
  else
    EffDescPieces_57 = EffDescPieces0_46;
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_6_p_1((MR_Integer) 71, EffDescPieces_57, &CindexTopics_58, &FindexTopics_59, &ReflowLines_60);
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), (MR_Word) (&libs__print_help_scalar_common_1[7]), CindexTopics_58, ((MR_Box) (STATE_VARIABLE_IndexLineCord_4_92)), &conv5_STATE_VARIABLE_IndexLineCord_20_158);
  STATE_VARIABLE_IndexLineCord_20_158 = ((MR_Word) (conv5_STATE_VARIABLE_IndexLineCord_20_158));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), (MR_Word) (&libs__print_help_scalar_common_1[8]), FindexTopics_59, ((MR_Box) (STATE_VARIABLE_IndexLineCord_20_158)), &conv7_STATE_VARIABLE_IndexLineCord_21_160);
  STATE_VARIABLE_IndexLineCord_21_160 = ((MR_Word) (conv7_STATE_VARIABLE_IndexLineCord_21_160));
  BlankLineCord_61 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")));
  SpaceLine_62 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\100sp 1")));
  Var_166 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReflowLines_60);
  Var_165 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_IndexLineCord_21_160, Var_166);
  Var_164 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_OptLineCord_2_74, Var_165);
  STATE_VARIABLE_LineCord_1_163 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SpaceLine_62, Var_164);
  switch (PublicOrPrivate_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        libs__print_help__comment_out_texinfo_lines_2_p_0(STATE_VARIABLE_LineCord_1_163, &STATE_VARIABLE_LineCord_2_169);
        *STATE_VARIABLE_NumDocOpts_66 = STATE_VARIABLE_NumDocOpts_0_65;
      }
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_NumDocOpts_66 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_65 + (MR_Unsigned) 1);
        STATE_VARIABLE_LineCord_2_169 = STATE_VARIABLE_LineCord_1_163;
      }
      break;
  }
  Var_171 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BlankLineCord_61, STATE_VARIABLE_LineCord_2_169);
  *STATE_VARIABLE_EffectiveLinesCord_64 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_EffectiveLinesCord_0_63, Var_171);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_6_p_1(
  MR_Integer LineLen_8,
  MR_Word Pieces_9,
  MR_Word * CindexTopics_10,
  MR_Word * FindexTopics_11,
  MR_Word * FinishedLines_12)
{
  MR_bool succeeded;
  MR_Word CindexCord_13;
  MR_Word FindexCord_14;
  MR_Word CurLine1_16;
  MR_Word FinishedLineCord1_17;
  MR_Word FinishedLineCord_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String FinishedLine_25;
  MR_Word Var_26;
  MR_Integer _CurLineLen_15;

  Var_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_20 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_22 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_23 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1(LineLen_8, Pieces_9, Var_19, &CindexCord_13, Var_20, &FindexCord_14, (MR_Integer) 0, &_CurLineLen_15, Var_22, &CurLine1_16, Var_23, &FinishedLineCord1_17);
  *CindexTopics_10 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CindexCord_13);
  *FindexTopics_11 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FindexCord_14);
  Var_26 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurLine1_16);
  FinishedLine_25 = mercury__string__append_list_1_f_0(Var_26);
  succeeded = (strcmp(FinishedLine_25, (MR_String) "") == 0);
  if (succeeded)
    FinishedLineCord_18 = FinishedLineCord1_17;
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_25)), FinishedLineCord1_17, &FinishedLineCord_18);
  *FinishedLines_12 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinishedLineCord_18);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  mercury__string__replace_all_sv_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1(
  MR_Integer LineLen_15,
  MR_Word Pieces_16,
  MR_Word STATE_VARIABLE_CindexCord_0_103,
  MR_Word * STATE_VARIABLE_CindexCord_104,
  MR_Word STATE_VARIABLE_FindexCord_0_105,
  MR_Word * STATE_VARIABLE_FindexCord_106,
  MR_Integer STATE_VARIABLE_CurLineLen_0_107,
  MR_Integer * STATE_VARIABLE_CurLineLen_108,
  MR_Word STATE_VARIABLE_CurLine_0_109,
  MR_Word * STATE_VARIABLE_CurLine_110,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_111,
  MR_Word * STATE_VARIABLE_FinishedLineCord_112)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CindexCord_104 = STATE_VARIABLE_CindexCord_0_103;
      *STATE_VARIABLE_FindexCord_106 = STATE_VARIABLE_FindexCord_0_105;
      *STATE_VARIABLE_CurLineLen_108 = STATE_VARIABLE_CurLineLen_0_107;
      *STATE_VARIABLE_CurLine_110 = STATE_VARIABLE_CurLine_0_109;
      *STATE_VARIABLE_FinishedLineCord_112 = STATE_VARIABLE_FinishedLineCord_0_111;
    }
    else
    {
      MR_Word HeadPiece_22 = ((MR_Word) ((MR_hl_field(1, Pieces_16, 0))));
      MR_Word TailPieces_23 = ((MR_Word) ((MR_hl_field(1, Pieces_16, 1))));
      MR_Word STATE_VARIABLE_CurLine_1_116;
      MR_Integer STATE_VARIABLE_CurLineLen_1_117;
      MR_Word STATE_VARIABLE_FinishedLineCord_1_118;
      MR_Word STATE_VARIABLE_CindexCord_1_313;
      MR_Word STATE_VARIABLE_FindexCord_1_314;
      MR_Word next_value_of_Pieces_16;
      MR_Word next_value_of_STATE_VARIABLE_CindexCord_0_103;
      MR_Word next_value_of_STATE_VARIABLE_FindexCord_0_105;
      MR_Integer next_value_of_STATE_VARIABLE_CurLineLen_0_107;
      MR_Word next_value_of_STATE_VARIABLE_CurLine_0_109;
      MR_Word next_value_of_STATE_VARIABLE_FinishedLineCord_0_111;

      switch (MR_tag((MR_Word) HeadPiece_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_FinishedLineCord_5_304;
            MR_Word STATE_VARIABLE_FinishedLineCord_7_308;

            libs__print_help__finish_cur_line_3_p_0(STATE_VARIABLE_CurLine_0_109, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_5_304);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_FinishedLineCord_5_304, &STATE_VARIABLE_FinishedLineCord_7_308);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\100sp 1")), STATE_VARIABLE_FinishedLineCord_7_308, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CurLine_1_116 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            STATE_VARIABLE_CurLineLen_1_117 = (MR_Integer) 0;
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String WordsStr_24 = ((MR_String) ((MR_hl_field(1, HeadPiece_22, 0))));
            MR_Word Words0_25;
            MR_Word Words_26;

            Words0_25 = mercury__string__words_1_f_0(WordsStr_24);
            mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_5[4]), Words0_25, &Words_26);
            libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_26, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String FixedStr_27 = ((MR_String) ((MR_hl_field(2, HeadPiece_22, 0))));

            libs__print_help__add_word_8_p_0(LineLen_15, FixedStr_27, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadPiece_22, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Option_81 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Var_141;
                MR_Word Var_142;
                MR_String Str_589;

                {
                  Var_142 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_142, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_142, 1) = ((MR_Box) (Option_81));
                }
                {
                  Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
                  MR_hl_field(1, Var_141, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s}%s", Var_141, &Str_589);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_589, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Option_435 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_442 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_590;
                MR_String Var_627;
                MR_String Var_628;

                Var_627 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_442);
                Var_628 = mercury__string__f_43_43_2_f_0(Option_435, Var_627);
                Str_590 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_628);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_590, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Str_80;
                MR_String Arg_82 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Var_153;
                MR_Word Var_154;

                {
                  Var_154 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_154, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_154, 1) = ((MR_Box) (Arg_82));
                }
                {
                  Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
                  MR_hl_field(1, Var_153, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100var{%s}%s", Var_153, &Str_80);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_80, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Arg_376 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_383 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_576;
                MR_String Var_658;
                MR_String Var_659;

                Var_658 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_383);
                Var_659 = mercury__string__f_43_43_2_f_0(Arg_376, Var_658);
                Str_576 = mercury__string__f_43_43_2_f_0((MR_String) "\100var{", Var_659);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_576, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_165;
                MR_Word Var_166;
                MR_String Arg_343 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_577;

                {
                  Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_166, 1) = ((MR_Box) (Arg_343));
                }
                {
                  Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
                  MR_hl_field(1, Var_165, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s}%s", Var_165, &Str_577);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_577, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String Suffix_390 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Arg_391 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_578;
                MR_String Var_654;
                MR_String Var_655;

                Var_654 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_390);
                Var_655 = mercury__string__f_43_43_2_f_0(Arg_391, Var_654);
                Str_578 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_655);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_578, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Var_179;
                MR_Word Var_180;
                MR_Word Var_181;
                MR_Word Var_182;
                MR_String Option_345 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Arg_346 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_591;

                {
                  Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_180, 1) = ((MR_Box) (Option_345));
                }
                {
                  Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_182, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_182, 1) = ((MR_Box) (Arg_346));
                }
                {
                  Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_181, 0) = ((MR_Box) (Var_182));
                  MR_hl_field(1, Var_181, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                {
                  Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
                  MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_181));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s \100var{%s}}%s", Var_179, &Str_591);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_591, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Suffix_451 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Option_452 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Arg_453 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_592;
                MR_String Var_620;
                MR_String Var_621;
                MR_String Var_623;
                MR_String Var_624;

                Var_620 = mercury__string__f_43_43_2_f_0((MR_String) "}}", Suffix_451);
                Var_621 = mercury__string__f_43_43_2_f_0(Arg_453, Var_620);
                Var_623 = mercury__string__f_43_43_2_f_0((MR_String) " \100var{", Var_621);
                Var_624 = mercury__string__f_43_43_2_f_0(Option_452, Var_623);
                Str_592 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_624);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_592, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String Text_78 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Var_129;
                MR_Word Var_130;
                MR_String Str_593;

                {
                  Var_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_130, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_130, 1) = ((MR_Box) (Text_78));
                }
                {
                  Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
                  MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\140\140%s\'\'%s", Var_129, &Str_593);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_593, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_String Text_454 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_455 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_594;
                MR_String Var_616;
                MR_String Var_617;

                Var_616 = mercury__string__f_43_43_2_f_0((MR_String) "\'\'", Suffix_455);
                Var_617 = mercury__string__f_43_43_2_f_0(Text_454, Var_616);
                Str_594 = mercury__string__f_43_43_2_f_0((MR_String) "\140\140", Var_617);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_594, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_String RefName_98 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_Word Var_290;
                MR_Word Var_291;
                MR_Word Words_362;
                MR_String Str_364;

                {
                  Var_291 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_291, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_291, 1) = ((MR_Box) (RefName_98));
                }
                {
                  Var_290 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_290, 0) = ((MR_Box) (Var_291));
                  MR_hl_field(1, Var_290, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100ref{%s}%s", Var_290, &Str_364);
                Words_362 = mercury__string__words_1_f_0(Str_364);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_362, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_String RefName_484 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Suffix_492 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 4))));
                MR_Word Words_513;
                MR_String Str_514;
                MR_String Var_604;
                MR_String Var_605;

                Var_604 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_492);
                Var_605 = mercury__string__f_43_43_2_f_0(RefName_484, Var_604);
                Str_514 = mercury__string__f_43_43_2_f_0((MR_String) "\100ref{", Var_605);
                Words_513 = mercury__string__words_1_f_0(Str_514);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_513, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Var_296;
                MR_Word Var_297;
                MR_String RefName_360 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Words_530;
                MR_String Str_531;

                {
                  Var_297 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_297, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_297, 1) = ((MR_Box) (RefName_360));
                }
                {
                  Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_296, 0) = ((MR_Box) (Var_297));
                  MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100xref{%s}%s", Var_296, &Str_531);
                Words_530 = mercury__string__words_1_f_0(Str_531);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_530, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_String Suffix_543 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String RefName_544 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Words_561;
                MR_String Str_562;
                MR_String Var_600;
                MR_String Var_601;

                Var_600 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_543);
                Var_601 = mercury__string__f_43_43_2_f_0(RefName_544, Var_600);
                Str_562 = mercury__string__f_43_43_2_f_0((MR_String) "\100xref{", Var_601);
                Words_561 = mercury__string__words_1_f_0(Str_562);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_561, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_Word Var_193;
                MR_Word Var_194;
                MR_String Option_348 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_595;

                {
                  Var_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_194, 1) = ((MR_Box) (Option_348));
                }
                {
                  Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_193, 0) = ((MR_Box) (Var_194));
                  MR_hl_field(1, Var_193, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s}%s", Var_193, &Str_595);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_595, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String Suffix_468 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Option_469 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_596;
                MR_String Var_612;
                MR_String Var_613;

                Var_612 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_468);
                Var_613 = mercury__string__f_43_43_2_f_0(Option_469, Var_612);
                Str_596 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_613);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_596, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_Word Var_205;
                MR_Word Var_206;
                MR_String Text_349 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_581;

                {
                  Var_206 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_206, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_206, 1) = ((MR_Box) (Text_349));
                }
                {
                  Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
                  MR_hl_field(1, Var_205, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100emph{%s}%s", Var_205, &Str_581);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_581, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_String Text_406 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_407 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_582;
                MR_String Var_646;
                MR_String Var_647;

                Var_646 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_407);
                Var_647 = mercury__string__f_43_43_2_f_0(Text_406, Var_646);
                Str_582 = mercury__string__f_43_43_2_f_0((MR_String) "\100emph{", Var_647);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_582, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Code_83 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Var_217;
                MR_Word Var_218;
                MR_String Str_583;

                {
                  Var_218 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_218, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_218, 1) = ((MR_Box) (Code_83));
                }
                {
                  Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_217, 0) = ((MR_Box) (Var_218));
                  MR_hl_field(1, Var_217, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100env{%s}%s", Var_217, &Str_583);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_583, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_String Code_408 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_415 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_584;
                MR_String Var_642;
                MR_String Var_643;

                Var_642 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_415);
                Var_643 = mercury__string__f_43_43_2_f_0(Code_408, Var_642);
                Str_584 = mercury__string__f_43_43_2_f_0((MR_String) "\100env{", Var_643);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_584, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_Word Var_229;
                MR_Word Var_230;
                MR_String Code_353 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_579;

                {
                  Var_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_230, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_230, 1) = ((MR_Box) (Code_353));
                }
                {
                  Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
                  MR_hl_field(1, Var_229, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100code{%s}%s", Var_229, &Str_579);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_579, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_String Suffix_398 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Code_399 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_580;
                MR_String Var_650;
                MR_String Var_651;

                Var_650 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_398);
                Var_651 = mercury__string__f_43_43_2_f_0(Code_399, Var_650);
                Str_580 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{", Var_651);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_580, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String Var_84 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_Word Var_241;
                MR_Word Var_242;
                MR_String Str_585;

                {
                  Var_242 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_242, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_242, 1) = ((MR_Box) (Var_84));
                }
                {
                  Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_241, 0) = ((MR_Box) (Var_242));
                  MR_hl_field(1, Var_241, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100file{%s}%s", Var_241, &Str_585);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_585, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_String Var_416 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_423 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Str_586;
                MR_String Var_638;
                MR_String Var_639;

                Var_638 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_423);
                Var_639 = mercury__string__f_43_43_2_f_0(Var_416, Var_638);
                Str_586 = mercury__string__f_43_43_2_f_0((MR_String) "\100file{", Var_639);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_586, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_Word Var_253;
                MR_Word Var_254;
                MR_String Var_356 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_597;

                {
                  Var_254 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_254, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_254, 1) = ((MR_Box) (Var_356));
                }
                {
                  Var_253 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_253, 0) = ((MR_Box) (Var_254));
                  MR_hl_field(1, Var_253, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                mercury__string__format_3_p_0((MR_String) "\100var{%s}%s", Var_253, &Str_597);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_597, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_String Suffix_476 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_477 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_598;
                MR_String Var_608;
                MR_String Var_609;

                Var_608 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_476);
                Var_609 = mercury__string__f_43_43_2_f_0(Var_477, Var_608);
                Str_598 = mercury__string__f_43_43_2_f_0((MR_String) "\100var{", Var_609);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_598, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 26:
              {
                MR_String File_85 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Ext_86 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_Word Var_267;
                MR_Word Var_268;
                MR_Word Var_269;
                MR_Word Var_270;
                MR_String Str_587;

                {
                  Var_268 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_268, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_268, 1) = ((MR_Box) (File_85));
                }
                {
                  Var_270 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_270, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_270, 1) = ((MR_Box) (Ext_86));
                }
                {
                  Var_269 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_269, 0) = ((MR_Box) (Var_270));
                  MR_hl_field(1, Var_269, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[107])));
                }
                {
                  Var_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_267, 0) = ((MR_Box) (Var_268));
                  MR_hl_field(1, Var_267, 1) = ((MR_Box) (Var_269));
                }
                mercury__string__format_3_p_0((MR_String) "\100file{\100var{%s}.%s}%s", Var_267, &Str_587);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_587, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_String File_424 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Ext_425 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Suffix_434 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Str_588;
                MR_String Var_631;
                MR_String Var_632;
                MR_String Var_634;
                MR_String Var_635;

                Var_631 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_434);
                Var_632 = mercury__string__f_43_43_2_f_0(Ext_425, Var_631);
                Var_634 = mercury__string__f_43_43_2_f_0((MR_String) "}.", Var_632);
                Var_635 = mercury__string__f_43_43_2_f_0(File_424, Var_634);
                Str_588 = mercury__string__f_43_43_2_f_0((MR_String) "\100file{\100var{", Var_635);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_588, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 28:
              {
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
            case (MR_Integer) 29:
              {
                MR_Word TexInfoPieces_101 = ((MR_Word) ((MR_hl_field(3, HeadPiece_22, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1(LineLen_15, TexInfoPieces_101, STATE_VARIABLE_CindexCord_0_103, &STATE_VARIABLE_CindexCord_1_313, STATE_VARIABLE_FindexCord_0_105, &STATE_VARIABLE_FindexCord_1_314, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word TexInfoPieces_366 = ((MR_Word) ((MR_hl_field(3, HeadPiece_22, 2))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_13_p_1(LineLen_15, TexInfoPieces_366, STATE_VARIABLE_CindexCord_0_103, &STATE_VARIABLE_CindexCord_1_313, STATE_VARIABLE_FindexCord_0_105, &STATE_VARIABLE_FindexCord_1_314, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
              }
              break;
            case (MR_Integer) 31:
              {
                MR_String Topic_102 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Topic_102)), STATE_VARIABLE_CindexCord_0_103, &STATE_VARIABLE_CindexCord_1_313);
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
            case (MR_Integer) 32:
              {
                MR_String Topic_367 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));

                mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Topic_367)), STATE_VARIABLE_FindexCord_0_105, &STATE_VARIABLE_FindexCord_1_314);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Pieces_16 = TailPieces_23;
      next_value_of_STATE_VARIABLE_CindexCord_0_103 = STATE_VARIABLE_CindexCord_1_313;
      next_value_of_STATE_VARIABLE_FindexCord_0_105 = STATE_VARIABLE_FindexCord_1_314;
      next_value_of_STATE_VARIABLE_CurLineLen_0_107 = STATE_VARIABLE_CurLineLen_1_117;
      next_value_of_STATE_VARIABLE_CurLine_0_109 = STATE_VARIABLE_CurLine_1_116;
      next_value_of_STATE_VARIABLE_FinishedLineCord_0_111 = STATE_VARIABLE_FinishedLineCord_1_118;
      Pieces_16 = next_value_of_Pieces_16;
      STATE_VARIABLE_CindexCord_0_103 = next_value_of_STATE_VARIABLE_CindexCord_0_103;
      STATE_VARIABLE_FindexCord_0_105 = next_value_of_STATE_VARIABLE_FindexCord_0_105;
      STATE_VARIABLE_CurLineLen_0_107 = next_value_of_STATE_VARIABLE_CurLineLen_0_107;
      STATE_VARIABLE_CurLine_0_109 = next_value_of_STATE_VARIABLE_CurLine_0_109;
      STATE_VARIABLE_FinishedLineCord_0_111 = next_value_of_STATE_VARIABLE_FinishedLineCord_0_111;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OptLineCord_0_6,
  MR_Word * STATE_VARIABLE_OptLineCord_7,
  MR_Word STATE_VARIABLE_IndexLineCord_0_8,
  MR_Word * STATE_VARIABLE_IndexLineCord_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IndexLineCord_9 = STATE_VARIABLE_IndexLineCord_0_8;
      *STATE_VARIABLE_OptLineCord_7 = STATE_VARIABLE_OptLineCord_0_6;
    }
    else
    {
      MR_Char ShortName_24 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__5_5, 0)));
      MR_Word ShortNames_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_OptLineCord_1_32;
      MR_Word STATE_VARIABLE_IndexLineCord_1_33;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OptLineCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IndexLineCord_0_8;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_1, Option_2, MaybeArgName_3, ShortName_24, STATE_VARIABLE_OptLineCord_0_6, &STATE_VARIABLE_OptLineCord_1_32, STATE_VARIABLE_IndexLineCord_0_8, &STATE_VARIABLE_IndexLineCord_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ShortNames_25;
      next_value_of_STATE_VARIABLE_OptLineCord_0_6 = STATE_VARIABLE_OptLineCord_1_32;
      next_value_of_STATE_VARIABLE_IndexLineCord_0_8 = STATE_VARIABLE_IndexLineCord_1_33;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_OptLineCord_0_6 = next_value_of_STATE_VARIABLE_OptLineCord_0_6;
      STATE_VARIABLE_IndexLineCord_0_8 = next_value_of_STATE_VARIABLE_IndexLineCord_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Char ShortName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36)
{
  MR_String FirstOptLine_19;
  MR_Word MaybeAddNegVersionOpt_23;
  MR_Word IndexVersions_24;
  MR_String NegatedOptionName_25;
  MR_Word PosParams_26;
  MR_Word NegParams_27;
  MR_String PosIndexLine_29;
  MR_Word STATE_VARIABLE_OptLineCord_1_39;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_String Var_61;
  MR_String Var_68;
  MR_String _FirstIndexLine_18;
  MR_String Var_28;

  libs__print_help__short_option_name_lines_texinfo_6_p_0(Params_10, Option_11, MaybeArgName_12, ShortName_14, &FirstOptLine_19, &_FirstIndexLine_18);
  libs__print_help__add_option_line_texinfo_3_p_0(FirstOptLine_19, STATE_VARIABLE_OptLineCord_0_33, &STATE_VARIABLE_OptLineCord_1_39);
  MaybeAddNegVersionOpt_23 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  IndexVersions_24 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_14, &Var_61);
  Var_68 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) "-");
  NegatedOptionName_25 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_68);
  switch (MaybeAddNegVersionOpt_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__print_help__add_option_line_texinfo_3_p_0(NegatedOptionName_25, STATE_VARIABLE_OptLineCord_1_39, STATE_VARIABLE_OptLineCord_34);
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_OptLineCord_34 = STATE_VARIABLE_OptLineCord_1_39;
      break;
  }
  Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 4)) & (MR_Integer) 1);
  Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  Var_51 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  {
    PosParams_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PosParams_26, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  {
    NegParams_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NegParams_27, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  libs__print_help__short_option_name_lines_texinfo_6_p_0(PosParams_26, Option_11, MaybeArgName_12, ShortName_14, &Var_28, &PosIndexLine_29);
  switch (IndexVersions_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String NegIndexLine_31;
        MR_String IndexLine_70;
        MR_String Var_30;

        libs__print_help__short_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, ShortName_14, &Var_30, &NegIndexLine_31);
        IndexLine_70 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_70)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_IndexLineCord_3_45;
        MR_String NegIndexLine_47;
        MR_String IndexLine_77;
        MR_String IndexLine_84;
        MR_String Var_32;

        libs__print_help__short_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, ShortName_14, &Var_32, &NegIndexLine_47);
        IndexLine_77 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_77)), STATE_VARIABLE_IndexLineCord_0_35, &STATE_VARIABLE_IndexLineCord_3_45);
        IndexLine_84 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_47);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_84)), STATE_VARIABLE_IndexLineCord_3_45, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String IndexLine_91;

        IndexLine_91 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_91)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_OptLineCord_0_6,
  MR_Word * STATE_VARIABLE_OptLineCord_7,
  MR_Word STATE_VARIABLE_IndexLineCord_0_8,
  MR_Word * STATE_VARIABLE_IndexLineCord_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_IndexLineCord_9 = STATE_VARIABLE_IndexLineCord_0_8;
      *STATE_VARIABLE_OptLineCord_7 = STATE_VARIABLE_OptLineCord_0_6;
    }
    else
    {
      MR_String LongName_24 = ((MR_String) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word LongNames_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_OptLineCord_1_32;
      MR_Word STATE_VARIABLE_IndexLineCord_1_33;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_OptLineCord_0_6;
      MR_Word next_value_of_STATE_VARIABLE_IndexLineCord_0_8;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(Params_1, Option_2, MaybeArgName_3, LongName_24, STATE_VARIABLE_OptLineCord_0_6, &STATE_VARIABLE_OptLineCord_1_32, STATE_VARIABLE_IndexLineCord_0_8, &STATE_VARIABLE_IndexLineCord_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = LongNames_25;
      next_value_of_STATE_VARIABLE_OptLineCord_0_6 = STATE_VARIABLE_OptLineCord_1_32;
      next_value_of_STATE_VARIABLE_IndexLineCord_0_8 = STATE_VARIABLE_IndexLineCord_1_33;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_OptLineCord_0_6 = next_value_of_STATE_VARIABLE_OptLineCord_0_6;
      STATE_VARIABLE_IndexLineCord_0_8 = next_value_of_STATE_VARIABLE_IndexLineCord_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_116_101_120_105_110_102_111_95_95_91_52_93_95_48_9_p_0(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_String LongName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36)
{
  MR_String FirstOptLine_19;
  MR_Word MaybeAddNegVersionOpt_23;
  MR_Word IndexVersions_24;
  MR_String NegatedOptionName_25;
  MR_Word PosParams_26;
  MR_Word NegParams_27;
  MR_String PosIndexLine_29;
  MR_Word STATE_VARIABLE_OptLineCord_1_39;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_String _FirstIndexLine_18;
  MR_String Var_28;

  libs__print_help__long_option_name_lines_texinfo_6_p_0(Params_10, Option_11, MaybeArgName_12, LongName_14, &FirstOptLine_19, &_FirstIndexLine_18);
  libs__print_help__add_option_line_texinfo_3_p_0(FirstOptLine_19, STATE_VARIABLE_OptLineCord_0_33, &STATE_VARIABLE_OptLineCord_1_39);
  MaybeAddNegVersionOpt_23 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  IndexVersions_24 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  NegatedOptionName_25 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_14);
  switch (MaybeAddNegVersionOpt_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__print_help__add_option_line_texinfo_3_p_0(NegatedOptionName_25, STATE_VARIABLE_OptLineCord_1_39, STATE_VARIABLE_OptLineCord_34);
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_OptLineCord_34 = STATE_VARIABLE_OptLineCord_1_39;
      break;
  }
  Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 4)) & (MR_Integer) 1);
  Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  Var_51 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  {
    PosParams_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PosParams_26, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  {
    NegParams_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NegParams_27, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  libs__print_help__long_option_name_lines_texinfo_6_p_0(PosParams_26, Option_11, MaybeArgName_12, LongName_14, &Var_28, &PosIndexLine_29);
  switch (IndexVersions_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String NegIndexLine_31;
        MR_String IndexLine_61;
        MR_String Var_30;

        libs__print_help__long_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, LongName_14, &Var_30, &NegIndexLine_31);
        IndexLine_61 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_61)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_IndexLineCord_3_45;
        MR_String NegIndexLine_47;
        MR_String IndexLine_68;
        MR_String IndexLine_75;
        MR_String Var_32;

        libs__print_help__long_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, LongName_14, &Var_32, &NegIndexLine_47);
        IndexLine_68 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_68)), STATE_VARIABLE_IndexLineCord_0_35, &STATE_VARIABLE_IndexLineCord_3_45);
        IndexLine_75 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_47);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_75)), STATE_VARIABLE_IndexLineCord_3_45, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String IndexLine_82;

        IndexLine_82 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_82)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
  }
}

static MR_Box MR_CALL 
libs__print_help__comment_out_texinfo_lines_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_CommentedOutLine_4;

  conv0_CommentedOutLine_4 = libs__print_help__comment_out_texinfo_line_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_CommentedOutLine_4));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__print_help__comment_out_texinfo_lines_2_p_0(
  MR_Word STATE_VARIABLE_LineCord_0_4,
  MR_Word * STATE_VARIABLE_LineCord_5)
{
  *STATE_VARIABLE_LineCord_5 = mercury__cord__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[6]), STATE_VARIABLE_LineCord_0_4);
}

static void MR_CALL 
libs__print_help__get_main_long_name_2_p_0(
  MR_Word Option_3,
  MR_Word * MaybeLongName_4)
{
  MR_Word Help_7;
  MR_Word Var_5;
  MR_Word Var_6;

  libs__options__optdb_4_p_0(&Var_5, Option_3, &Var_6, &Help_7);
  switch (MR_tag((MR_Word) Help_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MaybeLongName_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_String LongName_68 = ((MR_String) ((MR_hl_field(1, Help_7, 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLongName_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LongName_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_69 = ((MR_String) ((MR_hl_field(2, Help_7, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLongName_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LongName_69));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String LongName_67 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_67));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_75 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_75));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String LongName_74 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_74));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String LongName_66 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_66));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String LongName_64 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_64));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String LongName_10 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_10));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String LongName_70 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_70));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String LongName_71 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_71));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String LongName_78 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_78));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String LongName_65 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_65));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String LongName_73 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_73));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String LongName_72 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_72));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String LongName_80 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_80));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String LongName_77 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_77));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String LongName_79 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_79));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String LongName_76 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_76));
            }
          }
          break;
        case (MR_Integer) 16:
          *MaybeLongName_4 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__add_findex_line_texinfo_3_p_0(
  MR_String OptionStr_4,
  MR_Word STATE_VARIABLE_IndexLineCord_0_7,
  MR_Word * STATE_VARIABLE_IndexLineCord_8)
{
  MR_String IndexLine_6;

  IndexLine_6 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", OptionStr_4);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_6)), STATE_VARIABLE_IndexLineCord_0_7, STATE_VARIABLE_IndexLineCord_8);
}

static void MR_CALL 
libs__print_help__acc_short_option_name_texinfo_9_p_1(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Word MaybeAlignedText_13,
  MR_Char ShortName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36)
{
  MR_String FirstOptLine0_17;
  MR_String FirstOptLine_19;
  MR_String AlignedText_20;
  MR_Word MaybeAddNegVersionOpt_23;
  MR_Word IndexVersions_24;
  MR_String NegatedOptionName_25;
  MR_Word PosParams_26;
  MR_Word NegParams_27;
  MR_String PosIndexLine_29;
  MR_String Var_37;
  MR_Word STATE_VARIABLE_OptLineCord_1_39;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_String Var_61;
  MR_String Var_68;
  MR_String _FirstIndexLine_18;
  MR_String Var_28;

  libs__print_help__short_option_name_lines_texinfo_6_p_0(Params_10, Option_11, MaybeArgName_12, ShortName_14, &FirstOptLine0_17, &_FirstIndexLine_18);
  AlignedText_20 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_13, 0))));
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_20);
  FirstOptLine_19 = mercury__string__f_43_43_2_f_0(FirstOptLine0_17, Var_37);
  libs__print_help__add_option_line_texinfo_3_p_0(FirstOptLine_19, STATE_VARIABLE_OptLineCord_0_33, &STATE_VARIABLE_OptLineCord_1_39);
  MaybeAddNegVersionOpt_23 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  IndexVersions_24 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_14, &Var_61);
  Var_68 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) "-");
  NegatedOptionName_25 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_68);
  switch (MaybeAddNegVersionOpt_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__print_help__add_option_line_texinfo_3_p_0(NegatedOptionName_25, STATE_VARIABLE_OptLineCord_1_39, STATE_VARIABLE_OptLineCord_34);
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_OptLineCord_34 = STATE_VARIABLE_OptLineCord_1_39;
      break;
  }
  Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 4)) & (MR_Integer) 1);
  Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  Var_51 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  {
    PosParams_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PosParams_26, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  {
    NegParams_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NegParams_27, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  libs__print_help__short_option_name_lines_texinfo_6_p_0(PosParams_26, Option_11, MaybeArgName_12, ShortName_14, &Var_28, &PosIndexLine_29);
  switch (IndexVersions_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String NegIndexLine_31;
        MR_String IndexLine_70;
        MR_String Var_30;

        libs__print_help__short_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, ShortName_14, &Var_30, &NegIndexLine_31);
        IndexLine_70 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_70)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_IndexLineCord_3_45;
        MR_String NegIndexLine_47;
        MR_String IndexLine_77;
        MR_String IndexLine_84;
        MR_String Var_32;

        libs__print_help__short_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, ShortName_14, &Var_32, &NegIndexLine_47);
        IndexLine_77 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_77)), STATE_VARIABLE_IndexLineCord_0_35, &STATE_VARIABLE_IndexLineCord_3_45);
        IndexLine_84 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_47);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_84)), STATE_VARIABLE_IndexLineCord_3_45, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String IndexLine_91;

        IndexLine_91 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_91)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__short_option_name_lines_texinfo_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_Word MaybeArgName_9,
  MR_Char ShortName0_10,
  MR_String * OptLine_11,
  MR_String * IndexLine_12)
{
  MR_Word MaybeExpectArg_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_14 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeNegate_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Char ShortName_42;
        MR_String Var_57;
        MR_String Var_66;
        MR_String Var_73;
        MR_Box conv0_ShortName_42;

        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_110_111_95_97_114_103_95_95_91_49_93_95_48_4_p_0(MaybeExpectArg_13, Option_8, ((MR_Box) (MR_Word) (ShortName0_10)), &conv0_ShortName_42);
        ShortName_42 = ((MR_Char) (MR_Word) conv0_ShortName_42);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_42, &Var_57);
        *IndexLine_12 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_57);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_42, &Var_66);
        Var_73 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) "}");
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{-", Var_73);
      }
      else
      {
        MR_String ArgName_18 = ((MR_String) ((MR_hl_field(1, MaybeArgName_9, 0))));
        MR_String MaybeWrappedArgName_19;
        MR_Char ShortName_43;
        MR_String Var_75;
        MR_String Var_84;
        MR_String Var_86;
        MR_String Var_87;
        MR_String Var_94;
        MR_Box conv1_ShortName_43;

        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_4_p_0(MaybeExpectArg_13, Option_8, ((MR_Box) (MR_Word) (ShortName0_10)), &conv1_ShortName_43);
        ShortName_43 = ((MR_Char) (MR_Word) conv1_ShortName_43);
        MaybeWrappedArgName_19 = libs__print_help__maybe_wrap_arg_name_texinfo_2_f_0(Option_8, ArgName_18);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_43, &Var_75);
        *IndexLine_12 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_75);
        Var_84 = mercury__string__f_43_43_2_f_0(MaybeWrappedArgName_19, (MR_String) "}");
        Var_86 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_84);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_43, &Var_87);
        Var_94 = mercury__string__f_43_43_2_f_0(Var_87, Var_86);
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{-", Var_94);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char ShortName_17;
        MR_String Var_48;
        MR_String Var_55;
        MR_Box conv2_ShortName_17;

        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(MaybeExpectArg_13, Option_8, MaybeArgName_9, ((MR_Box) (MR_Word) (ShortName0_10)), &conv2_ShortName_17);
        ShortName_17 = ((MR_Char) (MR_Word) conv2_ShortName_17);
        *IndexLine_12 = libs__print_help__short_negated_option_name_texinfo_1_f_0(ShortName_17);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_17, &Var_48);
        Var_55 = mercury__string__f_43_43_2_f_0(Var_48, (MR_String) "}");
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{-", Var_55);
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_4_p_0(
  MR_Word MaybeExpectArg_5,
  MR_Word Option_6,
  MR_Box OptionName0_7,
  MR_Box * OptionName_8)
{
  switch (MaybeExpectArg_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Msg_9;
        MR_String Var_13;

        Var_13 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_6)));
        Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_13);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_9);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      *OptionName_8 = OptionName0_7;
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_118_101_95_110_111_95_97_114_103_95_95_91_49_93_95_48_4_p_0(
  MR_Word MaybeExpectArg_5,
  MR_Word Option_6,
  MR_Box OptionName0_7,
  MR_Box * OptionName_8)
{
  switch (MaybeExpectArg_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *OptionName_8 = OptionName0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_9;
        MR_String Var_13;

        Var_13 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_6)));
        Msg_9 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_13);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_9);
          return;
        }
      }
      break;
  }
}

static MR_String MR_CALL 
libs__print_help__maybe_wrap_arg_name_texinfo_2_f_0(
  MR_Word Option_4,
  MR_String ArgName_5)
{
  MR_bool succeeded = (strcmp(ArgName_5, (MR_String) "") == 0);
  MR_String MaybeWrappedArgName_6;

  if (succeeded)
  {
    MR_String Var_10;
    MR_String Var_11;

    Var_11 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_4)));
    Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) " has empty arg name");
    mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name_texinfo\'/2", Var_10);
  }
  else
  {
    MR_Integer Var_7;

    succeeded = mercury__string__find_first_char_3_p_0(ArgName_5, (MR_Char) 123, &Var_7);
    if (succeeded)
    {
      MR_String ArgName1_8;

      mercury__string__replace_all_4_p_0(ArgName_5, (MR_String) "{", (MR_String) "\100{", &ArgName1_8);
      mercury__string__replace_all_4_p_0(ArgName1_8, (MR_String) "}", (MR_String) "\100}", &MaybeWrappedArgName_6);
    }
    else
    {
      MR_Char Var_25;

      succeeded = mercury__string__index_3_p_0(ArgName_5, (MR_Integer) 0, &Var_25);
      if (succeeded)
        succeeded = ((MR_Char) 45 == Var_25);
      if (succeeded)
        MaybeWrappedArgName_6 = ArgName_5;
      else
      {
        MR_String Var_27;

        Var_27 = mercury__string__f_43_43_2_f_0(ArgName_5, (MR_String) "}");
        MaybeWrappedArgName_6 = mercury__string__f_43_43_2_f_0((MR_String) "\100var{", Var_27);
      }
    }
  }
  return MaybeWrappedArgName_6;
}

static MR_String MR_CALL 
libs__print_help__short_negated_option_name_texinfo_1_f_0(
  MR_Char ShortName_3)
{
  MR_String NegatedShortName_4;
  MR_String Var_10;
  MR_String Var_17;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_3, &Var_10);
  Var_17 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "-");
  NegatedShortName_4 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_17);
  return NegatedShortName_4;
}

static void MR_CALL 
libs__print_help__acc_long_option_name_texinfo_9_p_1(
  MR_Word Params_10,
  MR_Word Option_11,
  MR_Word MaybeArgName_12,
  MR_Word MaybeAlignedText_13,
  MR_String LongName_14,
  MR_Word STATE_VARIABLE_OptLineCord_0_33,
  MR_Word * STATE_VARIABLE_OptLineCord_34,
  MR_Word STATE_VARIABLE_IndexLineCord_0_35,
  MR_Word * STATE_VARIABLE_IndexLineCord_36)
{
  MR_String FirstOptLine0_17;
  MR_String FirstOptLine_19;
  MR_String AlignedText_20;
  MR_Word MaybeAddNegVersionOpt_23;
  MR_Word IndexVersions_24;
  MR_String NegatedOptionName_25;
  MR_Word PosParams_26;
  MR_Word NegParams_27;
  MR_String PosIndexLine_29;
  MR_String Var_37;
  MR_Word STATE_VARIABLE_OptLineCord_1_39;
  MR_Word Var_48;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_String _FirstIndexLine_18;
  MR_String Var_28;

  libs__print_help__long_option_name_lines_texinfo_6_p_0(Params_10, Option_11, MaybeArgName_12, LongName_14, &FirstOptLine0_17, &_FirstIndexLine_18);
  AlignedText_20 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_13, 0))));
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_20);
  FirstOptLine_19 = mercury__string__f_43_43_2_f_0(FirstOptLine0_17, Var_37);
  libs__print_help__add_option_line_texinfo_3_p_0(FirstOptLine_19, STATE_VARIABLE_OptLineCord_0_33, &STATE_VARIABLE_OptLineCord_1_39);
  MaybeAddNegVersionOpt_23 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  IndexVersions_24 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  NegatedOptionName_25 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_14);
  switch (MaybeAddNegVersionOpt_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      libs__print_help__add_option_line_texinfo_3_p_0(NegatedOptionName_25, STATE_VARIABLE_OptLineCord_1_39, STATE_VARIABLE_OptLineCord_34);
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_OptLineCord_34 = STATE_VARIABLE_OptLineCord_1_39;
      break;
  }
  Var_48 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 4)) & (MR_Integer) 1);
  Var_50 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
  Var_51 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 3);
  {
    PosParams_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PosParams_26, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  {
    NegParams_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NegParams_27, 0) = (MR_Box) (((((MR_Unsigned) (Var_48) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (Var_50) << 2)) | (MR_Unsigned) (Var_51)))))));
  }
  libs__print_help__long_option_name_lines_texinfo_6_p_0(PosParams_26, Option_11, MaybeArgName_12, LongName_14, &Var_28, &PosIndexLine_29);
  switch (IndexVersions_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String NegIndexLine_31;
        MR_String IndexLine_61;
        MR_String Var_30;

        libs__print_help__long_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, LongName_14, &Var_30, &NegIndexLine_31);
        IndexLine_61 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_61)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_IndexLineCord_3_45;
        MR_String NegIndexLine_47;
        MR_String IndexLine_68;
        MR_String IndexLine_75;
        MR_String Var_32;

        libs__print_help__long_option_name_lines_texinfo_6_p_0(NegParams_27, Option_11, MaybeArgName_12, LongName_14, &Var_32, &NegIndexLine_47);
        IndexLine_68 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_68)), STATE_VARIABLE_IndexLineCord_0_35, &STATE_VARIABLE_IndexLineCord_3_45);
        IndexLine_75 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", NegIndexLine_47);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_75)), STATE_VARIABLE_IndexLineCord_3_45, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String IndexLine_82;

        IndexLine_82 = mercury__string__f_43_43_2_f_0((MR_String) "\100findex ", PosIndexLine_29);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (IndexLine_82)), STATE_VARIABLE_IndexLineCord_0_35, STATE_VARIABLE_IndexLineCord_36);
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__add_option_line_texinfo_3_p_0(
  MR_String OptionStr_4,
  MR_Word STATE_VARIABLE_OptLineCord_0_8,
  MR_Word * STATE_VARIABLE_OptLineCord_9)
{
  MR_bool succeeded;
  MR_String ItemStr_6;
  MR_String OptLine_7;
  MR_String Var_19;

  succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_OptLineCord_0_8);
  if (succeeded)
    ItemStr_6 = (MR_String) "\100item";
  else
    ItemStr_6 = (MR_String) "\100itemx";
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", OptionStr_4);
  OptLine_7 = mercury__string__f_43_43_2_f_0(ItemStr_6, Var_19);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (OptLine_7)), STATE_VARIABLE_OptLineCord_0_8, STATE_VARIABLE_OptLineCord_9);
}

static void MR_CALL 
libs__print_help__long_option_name_lines_texinfo_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_Word MaybeArgName_9,
  MR_String LongName0_10,
  MR_String * OptLine_11,
  MR_String * IndexLine_12)
{
  MR_bool succeeded;
  MR_Word MaybeExpectArg_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_14 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeNegate_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String LongName_42;
        MR_String Var_52;

        switch (MaybeExpectArg_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LongName_42 = LongName0_10;
            break;
          case (MR_Integer) 1:
            {
              MR_String Msg_92;
              MR_String Var_96;

              Var_96 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_8)));
              Msg_92 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_96);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_92);
                return;
              }
            }
            break;
        }
        *IndexLine_12 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_42);
        Var_52 = mercury__string__f_43_43_2_f_0(LongName_42, (MR_String) "}");
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{--", Var_52);
      }
      else
      {
        MR_String ArgName_18 = ((MR_String) ((MR_hl_field(1, MaybeArgName_9, 0))));
        MR_String MaybeWrappedArgName_19;
        MR_String LongName_43;
        MR_String Var_56;
        MR_String Var_58;
        MR_String Var_59;

        switch (MaybeExpectArg_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Msg_61;
              MR_String Var_65;

              Var_65 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_8)));
              Msg_61 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_65);
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_61);
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            LongName_43 = LongName0_10;
            break;
        }
        succeeded = (strcmp(ArgName_18, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_73;
          MR_String Var_74;

          Var_74 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_8)));
          Var_73 = mercury__string__f_43_43_2_f_0(Var_74, (MR_String) " has empty arg name");
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name_texinfo\'/2", Var_73);
            return;
          }
        }
        else
        {
          MR_Integer Var_70;

          succeeded = mercury__string__find_first_char_3_p_0(ArgName_18, (MR_Char) 123, &Var_70);
          if (succeeded)
          {
            MR_String ArgName1_71;

            mercury__string__replace_all_4_p_0(ArgName_18, (MR_String) "{", (MR_String) "\100{", &ArgName1_71);
            mercury__string__replace_all_4_p_0(ArgName1_71, (MR_String) "}", (MR_String) "\100}", &MaybeWrappedArgName_19);
          }
          else
          {
            MR_Char Var_88;

            succeeded = mercury__string__index_3_p_0(ArgName_18, (MR_Integer) 0, &Var_88);
            if (succeeded)
              succeeded = ((MR_Char) 45 == Var_88);
            if (succeeded)
              MaybeWrappedArgName_19 = ArgName_18;
            else
            {
              MR_String Var_90;

              Var_90 = mercury__string__f_43_43_2_f_0(ArgName_18, (MR_String) "}");
              MaybeWrappedArgName_19 = mercury__string__f_43_43_2_f_0((MR_String) "\100var{", Var_90);
            }
          }
        }
        *IndexLine_12 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_43);
        Var_56 = mercury__string__f_43_43_2_f_0(MaybeWrappedArgName_19, (MR_String) "}");
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_56);
        Var_59 = mercury__string__f_43_43_2_f_0(LongName_43, Var_58);
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{--", Var_59);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LongName_17;
        MR_String Var_48;
        MR_Box conv0_LongName_17;

        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(MaybeExpectArg_13, Option_8, MaybeArgName_9, ((MR_Box) (LongName0_10)), &conv0_LongName_17);
        LongName_17 = ((MR_String) (conv0_LongName_17));
        *IndexLine_12 = libs__print_help__long_negated_option_name_texinfo_1_f_0(LongName_17);
        Var_48 = mercury__string__f_43_43_2_f_0(LongName_17, (MR_String) "}");
        *OptLine_11 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{--no-", Var_48);
      }
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(
  MR_Word MaybeExpectArg_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Box OptionName0_9,
  MR_Box * OptionName_10)
{
  if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
    switch (MaybeExpectArg_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *OptionName_10 = OptionName0_9;
        break;
      case (MR_Integer) 1:
        {
          MR_String Msg_22;
          MR_String Var_26;

          Var_26 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Msg_22 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_26);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_22);
            return;
          }
        }
        break;
    }
  else
    switch (MaybeExpectArg_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Msg_13;
          MR_String Var_17;

          Var_17 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Msg_13 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_17);
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_13);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        *OptionName_10 = OptionName0_9;
        break;
    }
}

static MR_String MR_CALL 
libs__print_help__long_negated_option_name_texinfo_1_f_0(
  MR_String LongName_3)
{
  MR_String NegatedLongName_4;

  NegatedLongName_4 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_3);
  return NegatedLongName_4;
}

static void MR_CALL 
libs__print_help__acc_set_at_opt_level_pieces_5_p_0(
  MR_String LongName_1,
  MR_Word HeadVar__2_2,
  MR_Integer NextLevel_3,
  MR_Word STATE_VARIABLE_HelpPieces_0_4,
  MR_Word * STATE_VARIABLE_HelpPieces_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HelpPieces_5 = STATE_VARIABLE_HelpPieces_0_4;
    else
    {
      MR_Word SetAtOptLevel_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word LowerSetAtOptLevels_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Level_16 = ((MR_Integer) ((MR_hl_field(0, SetAtOptLevel_12, 0))));
      MR_Word OptionData_17 = ((MR_Word) ((MR_hl_field(0, SetAtOptLevel_12, 1))));
      MR_String LevelText_18;
      MR_String SetOrSets_19;
      MR_String SetText_22;
      MR_Word STATE_VARIABLE_HelpPieces_1_55;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_String Var_59;
      MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) NextLevel_3 - (MR_Unsigned) Level_16);
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_NextLevel_3;
      MR_Word next_value_of_STATE_VARIABLE_HelpPieces_0_4;

      succeeded = (Var_26 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String Var_61;
        MR_String Var_68;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), Level_16, &Var_61);
        Var_68 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) " ");
        LevelText_18 = mercury__string__f_43_43_2_f_0((MR_String) "Optimization level ", Var_68);
        SetOrSets_19 = (MR_String) "sets";
      }
      else
      {
        MR_Integer Var_36 = (MR_Integer) ((MR_Unsigned) NextLevel_3 - (MR_Unsigned) 1);
        MR_String Var_71;
        MR_String Var_78;
        MR_String Var_80;
        MR_String Var_81;
        MR_String Var_88;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), Var_36, &Var_71);
        Var_78 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) " ");
        Var_80 = mercury__string__f_43_43_2_f_0((MR_String) " to ", Var_78);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), Level_16, &Var_81);
        Var_88 = mercury__string__f_43_43_2_f_0(Var_81, Var_80);
        LevelText_18 = mercury__string__f_43_43_2_f_0((MR_String) "Optimization levels ", Var_88);
        SetOrSets_19 = (MR_String) "set";
      }
      if (((MR_tag((MR_Word) OptionData_17)) == (MR_Integer) 1))
      {
        MR_Word Bool_20 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_17, 0))) & (MR_Integer) 1);
        MR_String MaybeNoPrefix_21;
        MR_String Var_107;
        MR_String Var_108;
        MR_String Var_110;
        MR_String Var_111;

        switch (Bool_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeNoPrefix_21 = (MR_String) "no-";
            break;
          case (MR_Integer) 1:
            MaybeNoPrefix_21 = (MR_String) "";
            break;
        }
        Var_107 = mercury__string__f_43_43_2_f_0(LongName_1, (MR_String) ".");
        Var_108 = mercury__string__f_43_43_2_f_0(MaybeNoPrefix_21, Var_107);
        Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " --", Var_108);
        Var_111 = mercury__string__f_43_43_2_f_0(SetOrSets_19, Var_110);
        SetText_22 = mercury__string__f_43_43_2_f_0((MR_String) "automatically ", Var_111);
      }
      else
      {
        MR_Integer N_23 = ((MR_Integer) ((MR_hl_field(2, OptionData_17, 0))));
        MR_String Var_91;
        MR_String Var_98;
        MR_String Var_100;
        MR_String Var_101;
        MR_String Var_103;
        MR_String Var_104;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), N_23, &Var_91);
        Var_98 = mercury__string__f_43_43_2_f_0(Var_91, (MR_String) ".");
        Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "=", Var_98);
        Var_101 = mercury__string__f_43_43_2_f_0(LongName_1, Var_100);
        Var_103 = mercury__string__f_43_43_2_f_0((MR_String) " --", Var_101);
        Var_104 = mercury__string__f_43_43_2_f_0(SetOrSets_19, Var_103);
        SetText_22 = mercury__string__f_43_43_2_f_0((MR_String) "automatically ", Var_104);
      }
      Var_59 = mercury__string__f_43_43_2_f_0(LevelText_18, SetText_22);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (STATE_VARIABLE_HelpPieces_0_4));
      }
      {
        STATE_VARIABLE_HelpPieces_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_HelpPieces_1_55, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, STATE_VARIABLE_HelpPieces_1_55, 1) = ((MR_Box) (Var_57));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = LowerSetAtOptLevels_13;
      next_value_of_NextLevel_3 = Level_16;
      next_value_of_STATE_VARIABLE_HelpPieces_0_4 = STATE_VARIABLE_HelpPieces_1_55;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      NextLevel_3 = next_value_of_NextLevel_3;
      STATE_VARIABLE_HelpPieces_0_4 = next_value_of_STATE_VARIABLE_HelpPieces_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__add_node_line_4_p_0(
  MR_String NodeCmd_5,
  MR_String SectionName_6,
  MR_Word STATE_VARIABLE_LineCord_0_9,
  MR_Word * STATE_VARIABLE_LineCord_10)
{
  MR_String Line_8;
  MR_String Var_19;
  MR_String Var_20;

  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) " ", SectionName_6);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 15, NodeCmd_5, &Var_20);
  Line_8 = mercury__string__f_43_43_2_f_0(Var_20, Var_19);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_8)), STATE_VARIABLE_LineCord_0_9, STATE_VARIABLE_LineCord_10);
}

static MR_Box MR_CALL 
libs__print_help__menu_items_to_menu_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_Line_4;

  conv0_Line_4 = libs__print_help__menu_item_to_menu_line_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Line_4));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
libs__print_help__menu_items_to_menu_1_f_0(
  MR_Word MenuItems_3)
{
  MR_Word MenuLines_4;
  MR_Word MenuItemLines_5;
  MR_Word Var_10;

  MenuItemLines_5 = mercury__list__map_2_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[5]), MenuItems_3);
  Var_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MenuItemLines_5, (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[109])));
  MenuLines_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[108])), Var_10);
  return MenuLines_4;
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_4(
  void * env_ptr_arg)
{
  struct libs__print_help__long_usage_4_p_0_5_env_0_s * env_ptr = (struct libs__print_help__long_usage_4_p_0_5_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__print_help__long_usage_4_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__print_help__long_usage_4_p_0_5_env_0__conv6_LambdaHeadVar__1_48));
  ((env_ptr)->libs__print_help__long_usage_4_p_0_5_env_0__cont)((env_ptr)->libs__print_help__long_usage_4_p_0_5_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__long_usage_4_p_0_5_env_0_s env;

  (env).libs__print_help__long_usage_4_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__print_help__long_usage_4_p_0_5_env_0__cont = cont;
  (env).libs__print_help__long_usage_4_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__print_help__IntroducedFrom__pred__document_requested_options__650__1_1_p_0(&(env).libs__print_help__long_usage_4_p_0_5_env_0__conv6_LambdaHeadVar__1_48, libs__print_help__long_usage_4_p_0_4, &env);
  }
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_SetAtOptLevelMap_9;

  libs__print_help__build_set_at_opt_level_map_3_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_SetAtOptLevelMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_SetAtOptLevelMap_9));
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_InitialValueMap_9;

  libs__print_help__insert_initial_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_InitialValueMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_InitialValueMap_9));
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_InitialValueMap_9;

  libs__print_help__insert_initial_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_InitialValueMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_InitialValueMap_9));
}

void MR_CALL 
libs__print_help__long_usage_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word What_6)
{
  MR_Word HeaderLines_8;
  MR_Word OptionsLines_10;
  MR_Word Lines_11;
  MR_Word InitialNoOptions_34;
  MR_Word InitialYesOptions_35;
  MR_Word InitialValueMap0_36;
  MR_Word InitialValueMap1_37;
  MR_Word InitialValueMap_38;
  MR_Word SetAtOptLevelMap_39;
  MR_Word OptionMaps_40;
  MR_Word AllCategoriesSet_42;
  MR_Word UndoneCategoriesSet_43;
  MR_Word SectionNameCord_44;
  MR_Word OptionsLineCord_45;
  MR_Word UndoneCategories_47;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Box conv1_InitialValueMap1_37;
  MR_Box conv3_InitialValueMap_38;
  MR_Box conv5_SetAtOptLevelMap_39;
  MR_Integer _NumDocOpts_46;
  MR_Word _SectionNames_9;

  HeaderLines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[198])), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[204])));
  libs__optimization_options__bool_option_initial_n_y_2_p_0(&InitialNoOptions_34, &InitialYesOptions_35);
  mercury__map__init_1_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), &InitialValueMap0_36);
  mercury__list__foldl_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_1[0]), (MR_Word) (&libs__print_help_scalar_common_3[89]), InitialNoOptions_34, ((MR_Box) (InitialValueMap0_36)), &conv1_InitialValueMap1_37);
  InitialValueMap1_37 = ((MR_Word) (conv1_InitialValueMap1_37));
  mercury__list__foldl_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_1[0]), (MR_Word) (&libs__print_help_scalar_common_3[90]), InitialYesOptions_35, ((MR_Box) (InitialValueMap1_37)), &conv3_InitialValueMap_38);
  InitialValueMap_38 = ((MR_Word) (conv3_InitialValueMap_38));
  Var_54 = mercury__map__init_0_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__print_help_scalar_common_2[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_1[3]), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[104])), ((MR_Box) (Var_54)), &conv5_SetAtOptLevelMap_39);
  SetAtOptLevelMap_39 = ((MR_Word) (conv5_SetAtOptLevelMap_39));
  {
    OptionMaps_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OptionMaps_40, 0) = ((MR_Box) (InitialValueMap_38));
    MR_hl_field(0, OptionMaps_40, 1) = ((MR_Box) (SetAtOptLevelMap_39));
  }
  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[4]), &AllCategoriesSet_42);
  Var_56 = libs__print_help__all_chapters_0_f_0();
  Var_57 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_93_95_48_13_p_0(OptionMaps_40, What_6, (MR_Integer) 0, Var_56, AllCategoriesSet_42, &UndoneCategoriesSet_43, Var_57, &SectionNameCord_44, Var_58, &OptionsLineCord_45, (MR_Integer) 0, &_NumDocOpts_46);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), UndoneCategoriesSet_43, &UndoneCategories_47);
  if (!((UndoneCategories_47 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_61;
    MR_String Var_63;

    Var_63 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_2[1]), ((MR_Box) (UndoneCategories_47)));
    Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "undone: ", Var_63);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.document_requested_options\'/4", Var_61);
      return;
    }
  }
  _SectionNames_9 = mercury__cord__list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), SectionNameCord_44);
  OptionsLines_10 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionsLineCord_45);
  Lines_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeaderLines_8, OptionsLines_10);
  libs__print_help__write_lines_4_p_0(ProgressStream_5, Lines_11);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_1,
  MR_Word What_3,
  MR_Word Depth_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_Categories_0_6,
  MR_Word * STATE_VARIABLE_Categories_7,
  MR_Word STATE_VARIABLE_MenuItemCord_0_8,
  MR_Word * STATE_VARIABLE_MenuItemCord_9,
  MR_Word STATE_VARIABLE_LineCord_0_10,
  MR_Word * STATE_VARIABLE_LineCord_11,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_12,
  MR_Integer * STATE_VARIABLE_NumDocOpts_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumDocOpts_13 = STATE_VARIABLE_NumDocOpts_0_12;
      *STATE_VARIABLE_LineCord_11 = STATE_VARIABLE_LineCord_0_10;
      *STATE_VARIABLE_MenuItemCord_9 = STATE_VARIABLE_MenuItemCord_0_8;
      *STATE_VARIABLE_Categories_7 = STATE_VARIABLE_Categories_0_6;
    }
    else
    {
      MR_Word Structure_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Structures_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_Categories_1_48;
      MR_Word STATE_VARIABLE_MenuItemCord_1_49;
      MR_Word STATE_VARIABLE_LineCord_1_50;
      MR_Integer STATE_VARIABLE_NumDocOpts_1_51;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_6;
      MR_Word next_value_of_STATE_VARIABLE_MenuItemCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_10;
      MR_Integer next_value_of_STATE_VARIABLE_NumDocOpts_0_12;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_93_95_48_13_p_0(OptionMaps_1, What_3, Depth_4, Structure_34, STATE_VARIABLE_Categories_0_6, &STATE_VARIABLE_Categories_1_48, STATE_VARIABLE_MenuItemCord_0_8, &STATE_VARIABLE_MenuItemCord_1_49, STATE_VARIABLE_LineCord_0_10, &STATE_VARIABLE_LineCord_1_50, STATE_VARIABLE_NumDocOpts_0_12, &STATE_VARIABLE_NumDocOpts_1_51);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = Structures_35;
      next_value_of_STATE_VARIABLE_Categories_0_6 = STATE_VARIABLE_Categories_1_48;
      next_value_of_STATE_VARIABLE_MenuItemCord_0_8 = STATE_VARIABLE_MenuItemCord_1_49;
      next_value_of_STATE_VARIABLE_LineCord_0_10 = STATE_VARIABLE_LineCord_1_50;
      next_value_of_STATE_VARIABLE_NumDocOpts_0_12 = STATE_VARIABLE_NumDocOpts_1_51;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_Categories_0_6 = next_value_of_STATE_VARIABLE_Categories_0_6;
      STATE_VARIABLE_MenuItemCord_0_8 = next_value_of_STATE_VARIABLE_MenuItemCord_0_8;
      STATE_VARIABLE_LineCord_0_10 = next_value_of_STATE_VARIABLE_LineCord_0_10;
      STATE_VARIABLE_NumDocOpts_0_12 = next_value_of_STATE_VARIABLE_NumDocOpts_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_14,
  MR_Word What_16,
  MR_Word Depth_17,
  MR_Word Structure_18,
  MR_Word STATE_VARIABLE_Categories_0_45,
  MR_Word * STATE_VARIABLE_Categories_46,
  MR_Word STATE_VARIABLE_MenuItemCord_0_47,
  MR_Word * STATE_VARIABLE_MenuItemCord_48,
  MR_Word STATE_VARIABLE_LineCord_0_49,
  MR_Word * STATE_VARIABLE_LineCord_50,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_51,
  MR_Integer * STATE_VARIABLE_NumDocOpts_52)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Structure_18)) == (MR_Integer) 0))
  {
    MR_Word SubSection_23 = (MR_Word) ((MR_Word) (Structure_18));
    MR_String GroupName_24 = ((MR_String) ((MR_hl_field(0, SubSection_23, 0))));
    MR_String MenuDesc_25 = ((MR_String) ((MR_hl_field(0, SubSection_23, 1))));
    MR_Integer SubNumDocOpts_29;
    MR_Word Var_54;
    MR_Word _MenuItemCord_28;

    Var_54 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
    libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0(OptionMaps_14, What_16, Depth_17, SubSection_23, STATE_VARIABLE_Categories_0_45, STATE_VARIABLE_Categories_46, Var_54, &_MenuItemCord_28, STATE_VARIABLE_LineCord_0_49, STATE_VARIABLE_LineCord_50, (MR_Integer) 0, &SubNumDocOpts_29);
    *STATE_VARIABLE_NumDocOpts_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_51 + (MR_Unsigned) SubNumDocOpts_29);
    succeeded = (SubNumDocOpts_29 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_59;

      {
        Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_59, 0) = ((MR_Box) (GroupName_24));
        MR_hl_field(0, Var_59, 1) = ((MR_Box) (MenuDesc_25));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0), ((MR_Box) (Var_59)), STATE_VARIABLE_MenuItemCord_0_47, STATE_VARIABLE_MenuItemCord_48);
    }
    else
      *STATE_VARIABLE_MenuItemCord_48 = STATE_VARIABLE_MenuItemCord_0_47;
  }
  else
  {
    MR_String StructureName_30 = ((MR_String) ((MR_hl_field(1, Structure_18, 0))));
    MR_Word CommentLines_32 = ((MR_Word) ((MR_hl_field(1, Structure_18, 2))));
    MR_Word SubStructures_33 = ((MR_Word) ((MR_hl_field(1, Structure_18, 3))));
    MR_Word SubDepth_34;
    MR_Word SubStructuresLineCord_36;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Integer SubNumDocOpts_99;
    MR_Word SubMenuItemCord_35;

    switch (Depth_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        SubDepth_34 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        SubDepth_34 = (MR_Integer) 2;
        break;
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.next_depth\'/2", (MR_String) "sd_subsubsection");
          return;
        }
        break;
    }
    Var_62 = mercury__cord__init_0_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_menu_item_0));
    Var_63 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_116_114_117_99_116_117_114_101_115_95_95_91_50_93_95_48_13_p_0(OptionMaps_14, What_16, SubDepth_34, SubStructures_33, STATE_VARIABLE_Categories_0_45, STATE_VARIABLE_Categories_46, Var_62, &SubMenuItemCord_35, Var_63, &SubStructuresLineCord_36, (MR_Integer) 0, &SubNumDocOpts_99);
    *STATE_VARIABLE_NumDocOpts_52 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_51 + (MR_Unsigned) SubNumDocOpts_99);
    succeeded = (SubNumDocOpts_99 == (MR_Integer) 0);
    if (succeeded)
      *STATE_VARIABLE_LineCord_50 = STATE_VARIABLE_LineCord_0_49;
    else
    {
      MR_String NameIndent_37;
      MR_Word STATE_VARIABLE_GroupLineCord_1_66;
      MR_Word STATE_VARIABLE_GroupLineCord_2_68;
      MR_String Var_69;
      MR_Word STATE_VARIABLE_GroupLineCord_3_70;
      MR_Word STATE_VARIABLE_GroupLineCord_5_73;
      MR_Word STATE_VARIABLE_GroupLineCord_6_75;

      switch (Depth_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          NameIndent_37 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          NameIndent_37 = (MR_String) "  ";
          break;
      }
      STATE_VARIABLE_GroupLineCord_1_66 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_1_66, &STATE_VARIABLE_GroupLineCord_2_68);
      Var_69 = mercury__string__f_43_43_2_f_0(NameIndent_37, StructureName_30);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_69)), STATE_VARIABLE_GroupLineCord_2_68, &STATE_VARIABLE_GroupLineCord_3_70);
      if ((CommentLines_32 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_GroupLineCord_5_73 = STATE_VARIABLE_GroupLineCord_3_70;
      else
      {
        MR_Word STATE_VARIABLE_GroupLineCord_4_72;
        MR_Word Var_74;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_3_70, &STATE_VARIABLE_GroupLineCord_4_72);
        Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CommentLines_32);
        STATE_VARIABLE_GroupLineCord_5_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_4_72, Var_74);
      }
      STATE_VARIABLE_GroupLineCord_6_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_5_73, SubStructuresLineCord_36);
      *STATE_VARIABLE_LineCord_50 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_0_49, STATE_VARIABLE_GroupLineCord_6_75);
    }
    *STATE_VARIABLE_MenuItemCord_48 = STATE_VARIABLE_MenuItemCord_0_47;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_LineCord_10));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_OptdbRecordSet_4;

  libs__print_help__get_optdb_records_in_category_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_OptdbRecordSet_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_OptdbRecordSet_4));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0(
  MR_Word OptionMaps_14,
  MR_Word What_16,
  MR_Word Depth_17,
  MR_Word Group_18,
  MR_Word STATE_VARIABLE_Categories_0_40,
  MR_Word * STATE_VARIABLE_Categories_41,
  MR_Word STATE_VARIABLE_MenuItemCord_0_42,
  MR_Word * STATE_VARIABLE_MenuItemCord_43,
  MR_Word STATE_VARIABLE_LineCord_0_44,
  MR_Word * STATE_VARIABLE_LineCord_45,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_46,
  MR_Integer * STATE_VARIABLE_NumDocOpts_47)
{
  MR_bool succeeded;
  MR_Word Categories_19 = ((MR_Word) ((MR_hl_field(0, Group_18, 3))));
  MR_String GroupName_23 = ((MR_String) ((MR_hl_field(0, Group_18, 0))));
  MR_Word CommentLines_25 = ((MR_Word) ((MR_hl_field(0, Group_18, 2))));
  MR_Word OptdbRecordSets_27;
  MR_Word OptdbRecordSet_28;
  MR_Word HelpTextLinesCord_29;
  MR_Integer GroupNumDocOpts_30;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word STATE_VARIABLE_Categories_1_48;

  succeeded = mercury__set__remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), Categories_19, STATE_VARIABLE_Categories_0_40, &STATE_VARIABLE_Categories_1_48);
  if (succeeded)
    *STATE_VARIABLE_Categories_41 = STATE_VARIABLE_Categories_1_48;
  else
  {
    MR_String Msg_26;
    MR_String Var_52;
    MR_String Var_118;

    Var_52 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_2[1]), ((MR_Box) (Categories_19)));
    Var_118 = mercury__string__f_43_43_2_f_0(Var_52, (MR_String) " is listed more than once");
    Msg_26 = mercury__string__f_43_43_2_f_0((MR_String) "some category in ", Var_118);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.acc_help_option_group\'/13", Msg_26);
      return;
    }
  }
  mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_2[2]), (MR_Word) (&libs__print_help_scalar_common_1[2]), Categories_19, &OptdbRecordSets_27);
  OptdbRecordSet_28 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_27);
  Var_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_28);
  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_93_95_48_8_p_0(OptionMaps_14, What_16, Var_57, Var_58, &HelpTextLinesCord_29, (MR_Integer) 0, &GroupNumDocOpts_30);
  *STATE_VARIABLE_NumDocOpts_47 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_46 + (MR_Unsigned) GroupNumDocOpts_30);
  succeeded = (GroupNumDocOpts_30 == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_LineCord_45 = STATE_VARIABLE_LineCord_0_44;
  else
  {
    MR_String NameIndent_31;
    MR_Word STATE_VARIABLE_GroupLineCord_1_61;
    MR_Word STATE_VARIABLE_GroupLineCord_2_63;
    MR_String Var_64;
    MR_Word STATE_VARIABLE_GroupLineCord_3_65;
    MR_Word STATE_VARIABLE_GroupLineCord_5_69;
    MR_Word STATE_VARIABLE_GroupLineCord_6_70;

    switch (Depth_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        NameIndent_31 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        NameIndent_31 = (MR_String) "  ";
        break;
      case (MR_Integer) 2:
        NameIndent_31 = (MR_String) "    ";
        break;
    }
    STATE_VARIABLE_GroupLineCord_1_61 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_1_61, &STATE_VARIABLE_GroupLineCord_2_63);
    Var_64 = mercury__string__f_43_43_2_f_0(NameIndent_31, GroupName_23);
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_64)), STATE_VARIABLE_GroupLineCord_2_63, &STATE_VARIABLE_GroupLineCord_3_65);
    if ((CommentLines_25 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_GroupLineCord_5_69 = STATE_VARIABLE_GroupLineCord_3_65;
    else
    {
      MR_Word STATE_VARIABLE_GroupLineCord_4_67;
      MR_Word Var_68;
      MR_Box conv2_STATE_VARIABLE_GroupLineCord_5_69;

      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_GroupLineCord_3_65, &STATE_VARIABLE_GroupLineCord_4_67);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_68, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[0]));
        MR_hl_field(0, Var_68, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_111_112_116_105_111_110_95_103_114_111_117_112_95_95_91_50_93_95_48_13_p_0_2));
        MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_68, 3) = ((MR_Box) (NameIndent_31));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), Var_68, CommentLines_25, ((MR_Box) (STATE_VARIABLE_GroupLineCord_4_67)), &conv2_STATE_VARIABLE_GroupLineCord_5_69);
      STATE_VARIABLE_GroupLineCord_5_69 = ((MR_Word) (conv2_STATE_VARIABLE_GroupLineCord_5_69));
    }
    STATE_VARIABLE_GroupLineCord_6_70 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_GroupLineCord_5_69, HelpTextLinesCord_29);
    *STATE_VARIABLE_LineCord_45 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_0_44, STATE_VARIABLE_GroupLineCord_6_70);
  }
  *STATE_VARIABLE_MenuItemCord_43 = STATE_VARIABLE_MenuItemCord_0_42;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_50_93_95_48_8_p_0(
  MR_Word OptionMaps_1,
  MR_Word What_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_5,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_6,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_7,
  MR_Integer * STATE_VARIABLE_NumDocOpts_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumDocOpts_8 = STATE_VARIABLE_NumDocOpts_0_7;
      *STATE_VARIABLE_EffectiveLinesCord_6 = STATE_VARIABLE_EffectiveLinesCord_0_5;
    }
    else
    {
      MR_Word OptdbRecord_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word OptdbRecords_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_EffectiveLinesCord_1_29;
      MR_Integer STATE_VARIABLE_NumDocOpts_1_30;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5;
      MR_Integer next_value_of_STATE_VARIABLE_NumDocOpts_0_7;

      libs__print_help__acc_help_message_plain_7_p_0(OptionMaps_1, What_3, OptdbRecord_21, STATE_VARIABLE_EffectiveLinesCord_0_5, &STATE_VARIABLE_EffectiveLinesCord_1_29, STATE_VARIABLE_NumDocOpts_0_7, &STATE_VARIABLE_NumDocOpts_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = OptdbRecords_22;
      next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5 = STATE_VARIABLE_EffectiveLinesCord_1_29;
      next_value_of_STATE_VARIABLE_NumDocOpts_0_7 = STATE_VARIABLE_NumDocOpts_1_30;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_EffectiveLinesCord_0_5 = next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_5;
      STATE_VARIABLE_NumDocOpts_0_7 = next_value_of_STATE_VARIABLE_NumDocOpts_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_LineCord_10));
}

static MR_bool MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__is_bool_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LineCord_22;

  libs__print_help__acc_arg_align_text_plain_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LineCord_22);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LineCord_22));
}

static void MR_CALL 
libs__print_help__acc_help_message_plain_7_p_0(
  MR_Word OptionMaps_8,
  MR_Word What_9,
  MR_Word OptdbRecord_10,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_51,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_52,
  MR_Integer STATE_VARIABLE_NumDocOpts_0_53,
  MR_Integer * STATE_VARIABLE_NumDocOpts_54)
{
  MR_bool succeeded;
  MR_Word Params_13;
  MR_Word Option_14;
  MR_Word OptionData_16;
  MR_Word Help_17;
  MR_Word PublicOrPrivate_19;
  MR_Word DescPieces_20;
  MR_Word STATE_VARIABLE_LineCord_1_55;
  MR_Word STATE_VARIABLE_LineCord_2_64;

  libs__print_help__get_optdb_record_params_3_p_0(OptionMaps_8, OptdbRecord_10, &Params_13);
  Option_14 = ((((MR_Unsigned) ((MR_hl_field(0, OptdbRecord_10, 0))) >> 7)) & (MR_Integer) 1023);
  OptionData_16 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_10, 1))));
  Help_17 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_10, 2))));
  STATE_VARIABLE_LineCord_1_55 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  switch (MR_tag((MR_Word) Help_17)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PublicOrPrivate_19 = (MR_Integer) 1;
        DescPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_LineCord_2_64 = STATE_VARIABLE_LineCord_1_55;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ShortNames_22 = ((MR_Word) ((MR_hl_field(1, Help_17, 0))));
        MR_String LongName_23 = ((MR_String) ((MR_hl_field(1, Help_17, 1))));
        MR_Word AltLongNames_24 = ((MR_Word) ((MR_hl_field(1, Help_17, 2))));
        MR_Word STATE_VARIABLE_LineCord_3_67;
        MR_Word STATE_VARIABLE_LineCord_4_70;

        PublicOrPrivate_19 = ((MR_Unsigned) ((MR_hl_field(1, Help_17, 3))) & (MR_Integer) 1);
        DescPieces_20 = ((MR_Word) ((MR_hl_field(1, Help_17, 4))));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), ShortNames_22, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_3_67);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_23, STATE_VARIABLE_LineCord_3_67, &STATE_VARIABLE_LineCord_4_70);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_24, STATE_VARIABLE_LineCord_4_70, &STATE_VARIABLE_LineCord_2_64);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_172 = ((MR_String) ((MR_hl_field(2, Help_17, 0))));

        DescPieces_20 = ((MR_Word) ((MR_hl_field(2, Help_17, 1))));
        PublicOrPrivate_19 = (MR_Integer) 0;
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_172, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_2_64);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_17, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeArg_25;
            MR_String ArgName_26 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_String LongName_124 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            {
              MaybeArg_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_25, 0) = ((MR_Box) (ArgName_26));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_25, LongName_124, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_197 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_197, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgName_123 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word MaybeArg_192;
            MR_String LongName_194 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            {
              MaybeArg_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_192, 0) = ((MR_Box) (ArgName_123));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_192, LongName_194, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_LineCord_7_165;
            MR_String LongName_167 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_168 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_167, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_7_165);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_168, STATE_VARIABLE_LineCord_7_165, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ArgAligns_41 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));
            MR_Word Var_105;
            MR_String LongName_148 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Box conv1_STATE_VARIABLE_LineCord_2_64;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_105 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_105, 0) = ((MR_Box) (&libs__print_help_scalar_common_6[0]));
              MR_hl_field(0, Var_105, 1) = ((MR_Box) (libs__print_help__acc_help_message_plain_7_p_0_1));
              MR_hl_field(0, Var_105, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_105, 3) = ((MR_Box) (Params_13));
              MR_hl_field(0, Var_105, 4) = ((MR_Box) (Option_14));
              MR_hl_field(0, Var_105, 5) = ((MR_Box) (LongName_148));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), Var_105, ArgAligns_41, ((MR_Box) (STATE_VARIABLE_LineCord_1_55)), &conv1_STATE_VARIABLE_LineCord_2_64);
            STATE_VARIABLE_LineCord_2_64 = ((MR_Word) (conv1_STATE_VARIABLE_LineCord_2_64));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String AlignedText_28 = ((MR_String) ((MR_hl_field(3, Help_17, 3))));
            MR_Word Align_31;
            MR_Word STATE_VARIABLE_LineCord_12_86;
            MR_String LongName_139 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_140 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 5))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Align_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_31, 0) = ((MR_Box) (AlignedText_28));
            }
            libs__print_help__acc_long_option_name_plain_7_p_1(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), Align_31, LongName_139, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_12_86);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_140, STATE_VARIABLE_LineCord_12_86, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String NoAlignedText_33 = ((MR_String) ((MR_hl_field(3, Help_17, 3))));
            MR_Word ParamsNN_36;
            MR_String FirstLine0_37;
            MR_String SecondLine0_38;
            MR_String FirstLine_39;
            MR_String SecondLine_40;
            MR_Word Var_98;
            MR_Word STATE_VARIABLE_LineCord_17_103;
            MR_String LongName_146 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_String AlignedText_147 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word Var_149;
            MR_Word Var_151;
            MR_Word Var_152;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 6))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_98 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_98, 0) = ((MR_Box) (&libs__print_help_scalar_common_3[88]));
              MR_hl_field(0, Var_98, 1) = ((MR_Box) (libs__print_help__acc_help_message_plain_7_p_0_2));
              MR_hl_field(0, Var_98, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_98, 3) = ((MR_Box) (OptionData_16));
            }
            mercury__require__expect_3_p_0(Var_98, (MR_String) "predicate \140libs.print_help.acc_help_message_plain\'/7", (MR_String) "unexpected use of no_align_help");
            Var_149 = ((((MR_Unsigned) ((MR_hl_field(0, Params_13, 0))) >> 4)) & (MR_Integer) 1);
            Var_151 = ((((MR_Unsigned) ((MR_hl_field(0, Params_13, 0))) >> 2)) & (MR_Integer) 1);
            Var_152 = ((MR_Unsigned) ((MR_hl_field(0, Params_13, 0))) & (MR_Integer) 3);
            {
              ParamsNN_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParamsNN_36, 0) = (MR_Box) (((((MR_Unsigned) (Var_149) << 4)) | (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) (Var_151) << 2)) | (MR_Unsigned) (Var_152)))))));
            }
            FirstLine0_37 = libs__print_help__long_option_name_line_plain_4_f_0(ParamsNN_36, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_146);
            SecondLine0_38 = libs__print_help__long_negated_option_name_line_plain_1_f_0(LongName_146);
            libs__print_help__add_aligned_text_3_p_0(AlignedText_147, FirstLine0_37, &FirstLine_39);
            libs__print_help__add_aligned_text_3_p_0(NoAlignedText_33, SecondLine0_38, &SecondLine_40);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_39)), STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_17_103);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_40)), STATE_VARIABLE_LineCord_17_103, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String AlignedText_173 = ((MR_String) ((MR_hl_field(3, Help_17, 3))));
            MR_Word Align_174;
            MR_Word STATE_VARIABLE_LineCord_12_175;
            MR_String LongName_177 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_178 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 5))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            {
              Align_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_174, 0) = ((MR_Box) (AlignedText_173));
            }
            libs__print_help__acc_long_option_name_plain_7_p_1(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), Align_174, LongName_177, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_12_175);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_178, STATE_VARIABLE_LineCord_12_175, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_90;
            MR_Word STATE_VARIABLE_LineCord_14_91;
            MR_Word STATE_VARIABLE_LineCord_15_94;
            MR_String LongName_142 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word AltLongNames_143 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            MR_Char ShortName_144 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_17, 1)));
            MR_String AlignedText_145 = ((MR_String) ((MR_hl_field(3, Help_17, 4))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 6))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            {
              Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_90, 0) = ((MR_Box) (AlignedText_145));
            }
            libs__print_help__acc_short_option_name_plain_7_p_1(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), Var_90, ShortName_144, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_14_91);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_142, STATE_VARIABLE_LineCord_14_91, &STATE_VARIABLE_LineCord_15_94);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_143, STATE_VARIABLE_LineCord_15_94, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_LineCord_7_77;
            MR_String ArgName_125 = ((MR_String) ((MR_hl_field(3, Help_17, 3))));
            MR_String LongName_128 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_129 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));
            MR_Word MaybeArg_130;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 4))));
            {
              MaybeArg_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_130, 0) = ((MR_Box) (ArgName_125));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_130, LongName_128, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_7_77);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_130, AltLongNames_129, STATE_VARIABLE_LineCord_7_77, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_LineCord_7_187;
            MR_String LongName_189 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_190 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_189, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_7_187);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_190, STATE_VARIABLE_LineCord_7_187, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String ArgName_126 = ((MR_String) ((MR_hl_field(3, Help_17, 3))));
            MR_Word STATE_VARIABLE_LineCord_7_181;
            MR_String LongName_183 = ((MR_String) ((MR_hl_field(3, Help_17, 1))));
            MR_Word AltLongNames_184 = ((MR_Word) ((MR_hl_field(3, Help_17, 2))));
            MR_Word MaybeArg_185;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 4))));
            {
              MaybeArg_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_185, 0) = ((MR_Box) (ArgName_126));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_185, LongName_183, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_7_181);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_185, AltLongNames_184, STATE_VARIABLE_LineCord_7_181, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Char ShortName_216 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_17, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_218;
            MR_Word STATE_VARIABLE_LineCord_10_220;
            MR_String LongName_222 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word AltLongNames_223 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 4))));
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), ShortName_216, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_9_218);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_222, STATE_VARIABLE_LineCord_9_218, &STATE_VARIABLE_LineCord_10_220);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_223, STATE_VARIABLE_LineCord_10_220, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Char ShortName_198 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_17, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_200;
            MR_Word STATE_VARIABLE_LineCord_10_202;
            MR_String LongName_204 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word AltLongNames_205 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 4))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), ShortName_198, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_9_200);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), LongName_204, STATE_VARIABLE_LineCord_9_200, &STATE_VARIABLE_LineCord_10_202);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_205, STATE_VARIABLE_LineCord_10_202, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String ArgName_132 = ((MR_String) ((MR_hl_field(3, Help_17, 4))));
            MR_Char ShortName_207 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_17, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_209;
            MR_Word STATE_VARIABLE_LineCord_10_211;
            MR_String LongName_213 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word AltLongNames_214 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            MR_Word MaybeArg_215;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 5))));
            {
              MaybeArg_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_215, 0) = ((MR_Box) (ArgName_132));
            }
            PublicOrPrivate_19 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_215, ShortName_207, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_9_209);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_215, LongName_213, STATE_VARIABLE_LineCord_9_209, &STATE_VARIABLE_LineCord_10_211);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_215, AltLongNames_214, STATE_VARIABLE_LineCord_10_211, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Char ShortName_27 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_17, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_81;
            MR_Word STATE_VARIABLE_LineCord_10_83;
            MR_String ArgName_133 = ((MR_String) ((MR_hl_field(3, Help_17, 4))));
            MR_String LongName_135 = ((MR_String) ((MR_hl_field(3, Help_17, 2))));
            MR_Word AltLongNames_136 = ((MR_Word) ((MR_hl_field(3, Help_17, 3))));
            MR_Word MaybeArg_137;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 5))));
            {
              MaybeArg_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_137, 0) = ((MR_Box) (ArgName_133));
            }
            PublicOrPrivate_19 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_137, ShortName_27, STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_9_81);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_137, LongName_135, STATE_VARIABLE_LineCord_9_81, &STATE_VARIABLE_LineCord_10_83);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_13, Option_14, MaybeArg_137, AltLongNames_136, STATE_VARIABLE_LineCord_10_83, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String NameLine_21;
            MR_String Var_59;
            MR_String Var_62;
            MR_String Var_226;

            DescPieces_20 = ((MR_Word) ((MR_hl_field(3, Help_17, 1))));
            PublicOrPrivate_19 = (MR_Integer) 1;
            Var_59 = libs__print_help__single_indent_0_f_0();
            Var_62 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_14)));
            Var_226 = mercury__string__f_43_43_2_f_0((MR_String) "UNNAMED OPTION ", Var_62);
            NameLine_21 = mercury__string__f_43_43_2_f_0(Var_59, Var_226);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (NameLine_21)), STATE_VARIABLE_LineCord_1_55, &STATE_VARIABLE_LineCord_2_64);
          }
          break;
      }
      break;
  }
  switch (PublicOrPrivate_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (What_9 == (MR_Integer) 1);
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    *STATE_VARIABLE_NumDocOpts_54 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDocOpts_0_53 + (MR_Unsigned) 1);
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_2_64);
    if (succeeded)
      succeeded = (DescPieces_20 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_EffectiveLinesCord_52 = STATE_VARIABLE_EffectiveLinesCord_0_51;
    else
    {
      MR_String DescPrefix_42;
      MR_Word EffDescPieces_43;
      MR_Word ReflowLines_48;
      MR_Word BlankLineCord_49;
      MR_Word PrivatePrefixCord_50;
      MR_Word Var_115;
      MR_Word STATE_VARIABLE_LineCord_20_116;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word _CindexTopics_46;
      MR_Word _FindexTopics_47;
      MR_Box conv3_STATE_VARIABLE_LineCord_20_116;

      DescPrefix_42 = libs__print_help__double_indent_0_f_0();
      if ((DescPieces_20 == (MR_Word) ((MR_Unsigned) 0U)))
        EffDescPieces_43 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[105]));
      else
        EffDescPieces_43 = DescPieces_20;
      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_6_p_0((MR_Integer) 71, EffDescPieces_43, &_CindexTopics_46, &_FindexTopics_47, &ReflowLines_48);
      BlankLineCord_49 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")));
      {
        Var_115 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_115, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[0]));
        MR_hl_field(0, Var_115, 1) = ((MR_Box) (libs__print_help__acc_help_message_plain_7_p_0_3));
        MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_115, 3) = ((MR_Box) (DescPrefix_42));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[3]), Var_115, ReflowLines_48, ((MR_Box) (STATE_VARIABLE_LineCord_2_64)), &conv3_STATE_VARIABLE_LineCord_20_116);
      STATE_VARIABLE_LineCord_20_116 = ((MR_Word) (conv3_STATE_VARIABLE_LineCord_20_116));
      switch (PublicOrPrivate_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String Var_117;
            MR_String Var_118;

            Var_118 = libs__print_help__single_indent_0_f_0();
            Var_117 = mercury__string__f_43_43_2_f_0(Var_118, (MR_String) "PRIVATE OPTION");
            PrivatePrefixCord_50 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_117)));
          }
          break;
        case (MR_Integer) 0:
          PrivatePrefixCord_50 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          break;
      }
      Var_122 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PrivatePrefixCord_50, STATE_VARIABLE_LineCord_20_116);
      Var_121 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BlankLineCord_49, Var_122);
      *STATE_VARIABLE_EffectiveLinesCord_52 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_EffectiveLinesCord_0_51, Var_121);
    }
  }
  else
  {
    *STATE_VARIABLE_NumDocOpts_54 = STATE_VARIABLE_NumDocOpts_0_53;
    *STATE_VARIABLE_EffectiveLinesCord_52 = STATE_VARIABLE_EffectiveLinesCord_0_51;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_6_p_0(
  MR_Integer LineLen_8,
  MR_Word Pieces_9,
  MR_Word * CindexTopics_10,
  MR_Word * FindexTopics_11,
  MR_Word * FinishedLines_12)
{
  MR_bool succeeded;
  MR_Word CindexCord_13;
  MR_Word FindexCord_14;
  MR_Word CurLine1_16;
  MR_Word FinishedLineCord1_17;
  MR_Word FinishedLineCord_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String FinishedLine_25;
  MR_Word Var_26;
  MR_Integer _CurLineLen_15;

  Var_19 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_20 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_22 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_23 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_13_p_0(LineLen_8, Pieces_9, Var_19, &CindexCord_13, Var_20, &FindexCord_14, (MR_Integer) 0, &_CurLineLen_15, Var_22, &CurLine1_16, Var_23, &FinishedLineCord1_17);
  *CindexTopics_10 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CindexCord_13);
  *FindexTopics_11 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FindexCord_14);
  Var_26 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurLine1_16);
  FinishedLine_25 = mercury__string__append_list_1_f_0(Var_26);
  succeeded = (strcmp(FinishedLine_25, (MR_String) "") == 0);
  if (succeeded)
    FinishedLineCord_18 = FinishedLineCord1_17;
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_25)), FinishedLineCord1_17, &FinishedLineCord_18);
  *FinishedLines_12 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinishedLineCord_18);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_13_p_0(
  MR_Integer LineLen_15,
  MR_Word Pieces_16,
  MR_Word STATE_VARIABLE_CindexCord_0_103,
  MR_Word * STATE_VARIABLE_CindexCord_104,
  MR_Word STATE_VARIABLE_FindexCord_0_105,
  MR_Word * STATE_VARIABLE_FindexCord_106,
  MR_Integer STATE_VARIABLE_CurLineLen_0_107,
  MR_Integer * STATE_VARIABLE_CurLineLen_108,
  MR_Word STATE_VARIABLE_CurLine_0_109,
  MR_Word * STATE_VARIABLE_CurLine_110,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_111,
  MR_Word * STATE_VARIABLE_FinishedLineCord_112)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Pieces_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CindexCord_104 = STATE_VARIABLE_CindexCord_0_103;
      *STATE_VARIABLE_FindexCord_106 = STATE_VARIABLE_FindexCord_0_105;
      *STATE_VARIABLE_CurLineLen_108 = STATE_VARIABLE_CurLineLen_0_107;
      *STATE_VARIABLE_CurLine_110 = STATE_VARIABLE_CurLine_0_109;
      *STATE_VARIABLE_FinishedLineCord_112 = STATE_VARIABLE_FinishedLineCord_0_111;
    }
    else
    {
      MR_Word HeadPiece_22 = ((MR_Word) ((MR_hl_field(1, Pieces_16, 0))));
      MR_Word TailPieces_23 = ((MR_Word) ((MR_hl_field(1, Pieces_16, 1))));
      MR_Word STATE_VARIABLE_CurLine_1_116;
      MR_Integer STATE_VARIABLE_CurLineLen_1_117;
      MR_Word STATE_VARIABLE_FinishedLineCord_1_118;
      MR_Word STATE_VARIABLE_CindexCord_1_313;
      MR_Word STATE_VARIABLE_FindexCord_1_314;
      MR_Word next_value_of_Pieces_16;
      MR_Word next_value_of_STATE_VARIABLE_CindexCord_0_103;
      MR_Word next_value_of_STATE_VARIABLE_FindexCord_0_105;
      MR_Integer next_value_of_STATE_VARIABLE_CurLineLen_0_107;
      MR_Word next_value_of_STATE_VARIABLE_CurLine_0_109;
      MR_Word next_value_of_STATE_VARIABLE_FinishedLineCord_0_111;

      switch (MR_tag((MR_Word) HeadPiece_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_FinishedLineCord_5_304;

            libs__print_help__finish_cur_line_3_p_0(STATE_VARIABLE_CurLine_0_109, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_5_304);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_FinishedLineCord_5_304, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CurLine_1_116 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
            STATE_VARIABLE_CurLineLen_1_117 = (MR_Integer) 0;
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String WordsStr_24 = ((MR_String) ((MR_hl_field(1, HeadPiece_22, 0))));
            MR_Word Words_26;

            Words_26 = mercury__string__words_1_f_0(WordsStr_24);
            libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_26, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String FixedStr_27 = ((MR_String) ((MR_hl_field(2, HeadPiece_22, 0))));

            libs__print_help__add_word_8_p_0(LineLen_15, FixedStr_27, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
            STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
            STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadPiece_22, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Option_81 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_624;
                MR_String Str_693;

                Var_624 = mercury__string__f_43_43_2_f_0(Option_81, (MR_String) "\'");
                Str_693 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_624);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_693, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Option_435 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_442 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_619;
                MR_String Var_620;
                MR_String Str_694;

                Var_619 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_442);
                Var_620 = mercury__string__f_43_43_2_f_0(Option_435, Var_619);
                Str_694 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_620);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_694, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Str_80;
                MR_String Arg_82 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_678;

                Var_678 = mercury__string__f_43_43_2_f_0(Arg_82, (MR_String) ">");
                Str_80 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_678);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_80, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Arg_376 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_383 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_673;
                MR_String Var_674;
                MR_String Str_680;

                Var_673 = mercury__string__f_43_43_2_f_0((MR_String) ">", Suffix_383);
                Var_674 = mercury__string__f_43_43_2_f_0(Arg_376, Var_673);
                Str_680 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_674);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_680, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Arg_343 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_681;

                Str_681 = mercury__string__f_43_43_2_f_0(Arg_343, (MR_String) "");
                libs__print_help__add_word_8_p_0(LineLen_15, Str_681, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String Suffix_390 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Arg_391 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_682;

                Str_682 = mercury__string__f_43_43_2_f_0(Arg_391, Suffix_390);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_682, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String Option_345 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Arg_346 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_613;
                MR_String Var_615;
                MR_String Var_616;
                MR_String Str_695;

                Var_613 = mercury__string__f_43_43_2_f_0(Arg_346, (MR_String) ">\'");
                Var_615 = mercury__string__f_43_43_2_f_0((MR_String) " <", Var_613);
                Var_616 = mercury__string__f_43_43_2_f_0(Option_345, Var_615);
                Str_695 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_616);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_695, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Suffix_451 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Option_452 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Arg_453 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_605;
                MR_String Var_606;
                MR_String Var_608;
                MR_String Var_609;
                MR_String Str_696;

                Var_605 = mercury__string__f_43_43_2_f_0((MR_String) ">\'", Suffix_451);
                Var_606 = mercury__string__f_43_43_2_f_0(Arg_453, Var_605);
                Var_608 = mercury__string__f_43_43_2_f_0((MR_String) " <", Var_606);
                Var_609 = mercury__string__f_43_43_2_f_0(Option_452, Var_608);
                Str_696 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_609);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_696, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String Text_78 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_602;
                MR_String Str_697;

                Var_602 = mercury__string__f_43_43_2_f_0(Text_78, (MR_String) "\'");
                Str_697 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_602);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_697, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_String Text_454 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_455 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_597;
                MR_String Var_598;
                MR_String Str_698;

                Var_597 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_455);
                Var_598 = mercury__string__f_43_43_2_f_0(Text_454, Var_597);
                Str_698 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_598);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_698, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_String Before0_97 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String RefName_98 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String After0_99 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Var_280;
                MR_String Var_285;
                MR_Word Words_362;
                MR_String Str_364;
                MR_String Var_582;
                MR_String Var_584;
                MR_String Var_585;
                MR_String Var_587;

                Var_280 = libs__print_help__before_str_1_f_0(Before0_97);
                Var_285 = libs__print_help__after_str_1_f_0(After0_99);
                Var_582 = mercury__string__f_43_43_2_f_0(Var_285, (MR_String) "");
                Var_584 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_582);
                Var_585 = mercury__string__f_43_43_2_f_0(RefName_98, Var_584);
                Var_587 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_585);
                Str_364 = mercury__string__f_43_43_2_f_0(Var_280, Var_587);
                Words_362 = mercury__string__words_1_f_0(Str_364);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_362, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_String Before0_481 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String RefName_482 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String After0_483 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Var_487;
                MR_String Var_492;
                MR_String Suffix_496 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 4))));
                MR_Word Words_529;
                MR_String Str_530;
                MR_String Var_576;
                MR_String Var_578;
                MR_String Var_579;
                MR_String Var_581;

                Var_487 = libs__print_help__before_str_1_f_0(Before0_481);
                Var_492 = libs__print_help__after_str_1_f_0(After0_483);
                Var_576 = mercury__string__f_43_43_2_f_0(Var_492, Suffix_496);
                Var_578 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_576);
                Var_579 = mercury__string__f_43_43_2_f_0(RefName_482, Var_578);
                Var_581 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_579);
                Str_530 = mercury__string__f_43_43_2_f_0(Var_487, Var_581);
                Words_529 = mercury__string__words_1_f_0(Str_530);
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_529, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 12:
              {
                MR_Word Words_552;

                Words_552 = mercury__string__words_1_f_0((MR_String) "");
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_552, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Words_567;

                Words_567 = mercury__string__words_1_f_0((MR_String) "");
                libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_15, Words_567, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 14:
              {
                MR_String Option_348 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_594;
                MR_String Str_699;

                Var_594 = mercury__string__f_43_43_2_f_0(Option_348, (MR_String) "\'");
                Str_699 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_594);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_699, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String Suffix_468 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Option_469 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_589;
                MR_String Var_590;
                MR_String Str_700;

                Var_589 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_468);
                Var_590 = mercury__string__f_43_43_2_f_0(Option_469, Var_589);
                Str_700 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_590);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_700, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 16:
              {
                MR_String Text_349 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_662;
                MR_String Str_685;

                Var_662 = mercury__string__f_43_43_2_f_0(Text_349, (MR_String) "*");
                Str_685 = mercury__string__f_43_43_2_f_0((MR_String) "*", Var_662);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_685, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 17:
              {
                MR_String Text_406 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_407 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_657;
                MR_String Var_658;
                MR_String Str_686;

                Var_657 = mercury__string__f_43_43_2_f_0((MR_String) "*", Suffix_407);
                Var_658 = mercury__string__f_43_43_2_f_0(Text_406, Var_657);
                Str_686 = mercury__string__f_43_43_2_f_0((MR_String) "*", Var_658);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_686, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Code_83 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_654;
                MR_String Str_687;

                Var_654 = mercury__string__f_43_43_2_f_0(Code_83, (MR_String) "\'");
                Str_687 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_654);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_687, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 19:
              {
                MR_String Code_408 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_415 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_649;
                MR_String Var_650;
                MR_String Str_688;

                Var_649 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_415);
                Var_650 = mercury__string__f_43_43_2_f_0(Code_408, Var_649);
                Str_688 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_650);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_688, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Code_353 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_670;
                MR_String Str_683;

                Var_670 = mercury__string__f_43_43_2_f_0(Code_353, (MR_String) "\'");
                Str_683 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_670);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_683, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 21:
              {
                MR_String Suffix_398 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Code_399 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_665;
                MR_String Var_666;
                MR_String Str_684;

                Var_665 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_398);
                Var_666 = mercury__string__f_43_43_2_f_0(Code_399, Var_665);
                Str_684 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_666);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_684, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String Var_84 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Var_646;
                MR_String Str_689;

                Var_646 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "\'");
                Str_689 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_646);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_689, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 23:
              {
                MR_String Var_416 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Suffix_423 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_641;
                MR_String Var_642;
                MR_String Str_690;

                Var_641 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_423);
                Var_642 = mercury__string__f_43_43_2_f_0(Var_416, Var_641);
                Str_690 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_642);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_690, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_String Var_356 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_701;

                Str_701 = mercury__string__f_43_43_2_f_0(Var_356, (MR_String) "");
                libs__print_help__add_word_8_p_0(LineLen_15, Str_701, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_String Suffix_476 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_477 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Str_702;

                Str_702 = mercury__string__f_43_43_2_f_0(Var_477, Suffix_476);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_702, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 26:
              {
                MR_String File_85 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Ext_86 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Var_635;
                MR_String Var_637;
                MR_String Var_638;
                MR_String Str_691;

                Var_635 = mercury__string__f_43_43_2_f_0(Ext_86, (MR_String) "\'");
                Var_637 = mercury__string__f_43_43_2_f_0((MR_String) ">.", Var_635);
                Var_638 = mercury__string__f_43_43_2_f_0(File_85, Var_637);
                Str_691 = mercury__string__f_43_43_2_f_0((MR_String) "\140<", Var_638);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_691, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 27:
              {
                MR_String File_424 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 1))));
                MR_String Ext_425 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 2))));
                MR_String Suffix_434 = ((MR_String) ((MR_hl_field(3, HeadPiece_22, 3))));
                MR_String Var_627;
                MR_String Var_628;
                MR_String Var_630;
                MR_String Var_631;
                MR_String Str_692;

                Var_627 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_434);
                Var_628 = mercury__string__f_43_43_2_f_0(Ext_425, Var_627);
                Var_630 = mercury__string__f_43_43_2_f_0((MR_String) ">.", Var_628);
                Var_631 = mercury__string__f_43_43_2_f_0(File_424, Var_630);
                Str_692 = mercury__string__f_43_43_2_f_0((MR_String) "\140<", Var_631);
                libs__print_help__add_word_8_p_0(LineLen_15, Str_692, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
              }
              break;
            case (MR_Integer) 28:
              {
                MR_Word HelpTextPieces_100 = ((MR_Word) ((MR_hl_field(3, HeadPiece_22, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_13_p_0(LineLen_15, HelpTextPieces_100, STATE_VARIABLE_CindexCord_0_103, &STATE_VARIABLE_CindexCord_1_313, STATE_VARIABLE_FindexCord_0_105, &STATE_VARIABLE_FindexCord_1_314, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
              }
              break;
            case (MR_Integer) 29:
              {
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
            case (MR_Integer) 30:
              {
                MR_Word HelpTextPieces_365 = ((MR_Word) ((MR_hl_field(3, HeadPiece_22, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_13_p_0(LineLen_15, HelpTextPieces_365, STATE_VARIABLE_CindexCord_0_103, &STATE_VARIABLE_CindexCord_1_313, STATE_VARIABLE_FindexCord_0_105, &STATE_VARIABLE_FindexCord_1_314, STATE_VARIABLE_CurLineLen_0_107, &STATE_VARIABLE_CurLineLen_1_117, STATE_VARIABLE_CurLine_0_109, &STATE_VARIABLE_CurLine_1_116, STATE_VARIABLE_FinishedLineCord_0_111, &STATE_VARIABLE_FinishedLineCord_1_118);
              }
              break;
            case (MR_Integer) 31:
              {
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
            case (MR_Integer) 32:
              {
                STATE_VARIABLE_FindexCord_1_314 = STATE_VARIABLE_FindexCord_0_105;
                STATE_VARIABLE_CindexCord_1_313 = STATE_VARIABLE_CindexCord_0_103;
                STATE_VARIABLE_CurLineLen_1_117 = STATE_VARIABLE_CurLineLen_0_107;
                STATE_VARIABLE_CurLine_1_116 = STATE_VARIABLE_CurLine_0_109;
                STATE_VARIABLE_FinishedLineCord_1_118 = STATE_VARIABLE_FinishedLineCord_0_111;
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Pieces_16 = TailPieces_23;
      next_value_of_STATE_VARIABLE_CindexCord_0_103 = STATE_VARIABLE_CindexCord_1_313;
      next_value_of_STATE_VARIABLE_FindexCord_0_105 = STATE_VARIABLE_FindexCord_1_314;
      next_value_of_STATE_VARIABLE_CurLineLen_0_107 = STATE_VARIABLE_CurLineLen_1_117;
      next_value_of_STATE_VARIABLE_CurLine_0_109 = STATE_VARIABLE_CurLine_1_116;
      next_value_of_STATE_VARIABLE_FinishedLineCord_0_111 = STATE_VARIABLE_FinishedLineCord_1_118;
      Pieces_16 = next_value_of_Pieces_16;
      STATE_VARIABLE_CindexCord_0_103 = next_value_of_STATE_VARIABLE_CindexCord_0_103;
      STATE_VARIABLE_FindexCord_0_105 = next_value_of_STATE_VARIABLE_FindexCord_0_105;
      STATE_VARIABLE_CurLineLen_0_107 = next_value_of_STATE_VARIABLE_CurLineLen_0_107;
      STATE_VARIABLE_CurLine_0_109 = next_value_of_STATE_VARIABLE_CurLine_0_109;
      STATE_VARIABLE_FinishedLineCord_0_111 = next_value_of_STATE_VARIABLE_FinishedLineCord_0_111;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__finish_cur_line_3_p_0(
  MR_Word CurLine_4,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_7,
  MR_Word * STATE_VARIABLE_FinishedLineCord_8)
{
  MR_bool succeeded;
  MR_String FinishedLine_6;
  MR_Word Var_9;

  Var_9 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurLine_4);
  FinishedLine_6 = mercury__string__append_list_1_f_0(Var_9);
  succeeded = (strcmp(FinishedLine_6, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_FinishedLineCord_8 = STATE_VARIABLE_FinishedLineCord_0_7;
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_6)), STATE_VARIABLE_FinishedLineCord_0_7, STATE_VARIABLE_FinishedLineCord_8);
}

static void MR_CALL 
libs__print_help__reflow_lines_loop_over_words_8_p_0(
  MR_Integer LineLen_9,
  MR_Word Words_10,
  MR_Word STATE_VARIABLE_CurLine_0_16,
  MR_Word * STATE_VARIABLE_CurLine_17,
  MR_Integer STATE_VARIABLE_CurLineLen_0_18,
  MR_Integer * STATE_VARIABLE_CurLineLen_19,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_20,
  MR_Word * STATE_VARIABLE_FinishedLineCord_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Words_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurLine_17 = STATE_VARIABLE_CurLine_0_16;
      *STATE_VARIABLE_CurLineLen_19 = STATE_VARIABLE_CurLineLen_0_18;
      *STATE_VARIABLE_FinishedLineCord_21 = STATE_VARIABLE_FinishedLineCord_0_20;
    }
    else
    {
      MR_String HeadWord_14 = ((MR_String) ((MR_hl_field(1, Words_10, 0))));
      MR_Word TailWords_15 = ((MR_Word) ((MR_hl_field(1, Words_10, 1))));
      MR_Word STATE_VARIABLE_CurLine_1_22;
      MR_Integer STATE_VARIABLE_CurLineLen_1_23;
      MR_Word STATE_VARIABLE_FinishedLineCord_1_24;
      MR_Word next_value_of_Words_10;
      MR_Word next_value_of_STATE_VARIABLE_CurLine_0_16;
      MR_Integer next_value_of_STATE_VARIABLE_CurLineLen_0_18;
      MR_Word next_value_of_STATE_VARIABLE_FinishedLineCord_0_20;

      libs__print_help__add_word_8_p_0(LineLen_9, HeadWord_14, STATE_VARIABLE_CurLine_0_16, &STATE_VARIABLE_CurLine_1_22, STATE_VARIABLE_CurLineLen_0_18, &STATE_VARIABLE_CurLineLen_1_23, STATE_VARIABLE_FinishedLineCord_0_20, &STATE_VARIABLE_FinishedLineCord_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_Words_10 = TailWords_15;
      next_value_of_STATE_VARIABLE_CurLine_0_16 = STATE_VARIABLE_CurLine_1_22;
      next_value_of_STATE_VARIABLE_CurLineLen_0_18 = STATE_VARIABLE_CurLineLen_1_23;
      next_value_of_STATE_VARIABLE_FinishedLineCord_0_20 = STATE_VARIABLE_FinishedLineCord_1_24;
      Words_10 = next_value_of_Words_10;
      STATE_VARIABLE_CurLine_0_16 = next_value_of_STATE_VARIABLE_CurLine_0_16;
      STATE_VARIABLE_CurLineLen_0_18 = next_value_of_STATE_VARIABLE_CurLineLen_0_18;
      STATE_VARIABLE_FinishedLineCord_0_20 = next_value_of_STATE_VARIABLE_FinishedLineCord_0_20;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__add_word_8_p_0(
  MR_Integer LineLen_9,
  MR_String Word_10,
  MR_Word STATE_VARIABLE_CurLine_0_16,
  MR_Word * STATE_VARIABLE_CurLine_17,
  MR_Integer STATE_VARIABLE_CurLineLen_0_18,
  MR_Integer * STATE_VARIABLE_CurLineLen_19,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_20,
  MR_Word * STATE_VARIABLE_FinishedLineCord_21)
{
  MR_bool succeeded;
  MR_Integer WordLen_14;

  mercury__string__count_code_points_2_p_0(Word_10, &WordLen_14);
  succeeded = (WordLen_14 == (MR_Integer) 0);
  if (succeeded)
  {
    *STATE_VARIABLE_FinishedLineCord_21 = STATE_VARIABLE_FinishedLineCord_0_20;
    *STATE_VARIABLE_CurLineLen_19 = STATE_VARIABLE_CurLineLen_0_18;
    *STATE_VARIABLE_CurLine_17 = STATE_VARIABLE_CurLine_0_16;
  }
  else
  {
    succeeded = (STATE_VARIABLE_CurLineLen_0_18 == (MR_Integer) 0);
    if (succeeded)
    {
      *STATE_VARIABLE_CurLine_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Word_10)));
      *STATE_VARIABLE_CurLineLen_19 = WordLen_14;
      *STATE_VARIABLE_FinishedLineCord_21 = STATE_VARIABLE_FinishedLineCord_0_20;
    }
    else
    {
      MR_Integer NextLineLen_15;
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_CurLineLen_0_18 + (MR_Unsigned) 1);

      NextLineLen_15 = (MR_Integer) ((MR_Unsigned) Var_24 + (MR_Unsigned) WordLen_14);
      succeeded = (NextLineLen_15 <= LineLen_9);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CurLine_2_27;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) " ")), STATE_VARIABLE_CurLine_0_16, &STATE_VARIABLE_CurLine_2_27);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Word_10)), STATE_VARIABLE_CurLine_2_27, STATE_VARIABLE_CurLine_17);
        *STATE_VARIABLE_CurLineLen_19 = NextLineLen_15;
        *STATE_VARIABLE_FinishedLineCord_21 = STATE_VARIABLE_FinishedLineCord_0_20;
      }
      else
      {
        MR_String FinishedLine_31;
        MR_Word Var_32;

        Var_32 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_CurLine_0_16);
        FinishedLine_31 = mercury__string__append_list_1_f_0(Var_32);
        succeeded = (strcmp(FinishedLine_31, (MR_String) "") == 0);
        if (succeeded)
          *STATE_VARIABLE_FinishedLineCord_21 = STATE_VARIABLE_FinishedLineCord_0_20;
        else
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_31)), STATE_VARIABLE_FinishedLineCord_0_20, STATE_VARIABLE_FinishedLineCord_21);
        *STATE_VARIABLE_CurLine_17 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Word_10)));
        *STATE_VARIABLE_CurLineLen_19 = WordLen_14;
      }
    }
  }
}

static MR_String MR_CALL 
libs__print_help__after_str_1_f_0(
  MR_String AfterStr0_3)
{
  MR_bool succeeded = (strcmp(AfterStr0_3, (MR_String) "") == 0);
  MR_String AfterStr_4;

  if (succeeded)
    AfterStr_4 = (MR_String) "";
  else
    AfterStr_4 = mercury__string__f_43_43_2_f_0((MR_String) " ", AfterStr0_3);
  return AfterStr_4;
}

static MR_String MR_CALL 
libs__print_help__before_str_1_f_0(
  MR_String BeforeStr0_3)
{
  MR_bool succeeded = (strcmp(BeforeStr0_3, (MR_String) "") == 0);
  MR_String BeforeStr_4;

  if (succeeded)
    BeforeStr_4 = (MR_String) "";
  else
    BeforeStr_4 = mercury__string__f_43_43_2_f_0(BeforeStr0_3, (MR_String) " ");
  return BeforeStr_4;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23)
{
  MR_String FirstLine_15;
  MR_Word MaybeAddNegVersionOpt_19;
  MR_Word STATE_VARIABLE_LineCord_1_24;

  FirstLine_15 = libs__print_help__short_option_name_line_plain_4_f_0(Params_8, Option_9, MaybeArgName_10, ShortName_12);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_22, &STATE_VARIABLE_LineCord_1_24);
  MaybeAddNegVersionOpt_19 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) >> 2)) & (MR_Integer) 1);
  switch (MaybeAddNegVersionOpt_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_21;
        MR_String Var_34;
        MR_String Var_41;
        MR_String Var_43;

        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_12, &Var_34);
        Var_41 = mercury__string__f_43_43_2_f_0(Var_34, (MR_String) "-");
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_41);
        SecondLine_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_43);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_21)), STATE_VARIABLE_LineCord_1_24, STATE_VARIABLE_LineCord_23);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_23 = STATE_VARIABLE_LineCord_1_24;
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LineCord_7 = STATE_VARIABLE_LineCord_0_6;
    else
    {
      MR_Char ShortName_19 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__5_5, 0)));
      MR_Word ShortNames_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_LineCord_1_24;
      MR_String FirstLine_26;
      MR_Word MaybeAddNegVersionOpt_30;
      MR_Word STATE_VARIABLE_LineCord_1_33;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_6;

      FirstLine_26 = libs__print_help__short_option_name_line_plain_4_f_0(Params_1, Option_2, MaybeArgName_3, ShortName_19);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_26)), STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_33);
      MaybeAddNegVersionOpt_30 = ((((MR_Unsigned) ((MR_hl_field(0, Params_1, 0))) >> 2)) & (MR_Integer) 1);
      switch (MaybeAddNegVersionOpt_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String SecondLine_32;
            MR_String Var_43;
            MR_String Var_50;
            MR_String Var_52;

            mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_19, &Var_43);
            Var_50 = mercury__string__f_43_43_2_f_0(Var_43, (MR_String) "-");
            Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_50);
            SecondLine_32 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_52);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_32)), STATE_VARIABLE_LineCord_1_33, &STATE_VARIABLE_LineCord_1_24);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_LineCord_1_24 = STATE_VARIABLE_LineCord_1_33;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ShortNames_20;
      next_value_of_STATE_VARIABLE_LineCord_0_6 = STATE_VARIABLE_LineCord_1_24;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_LineCord_0_6 = next_value_of_STATE_VARIABLE_LineCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LineCord_7 = STATE_VARIABLE_LineCord_0_6;
    else
    {
      MR_String LongName_19 = ((MR_String) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word LongNames_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word STATE_VARIABLE_LineCord_1_24;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_6;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(Params_1, Option_2, MaybeArgName_3, LongName_19, STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = LongNames_20;
      next_value_of_STATE_VARIABLE_LineCord_0_6 = STATE_VARIABLE_LineCord_1_24;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_LineCord_0_6 = next_value_of_STATE_VARIABLE_LineCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_112_108_97_105_110_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23)
{
  MR_String FirstLine_15;
  MR_Word MaybeAddNegVersionOpt_19;
  MR_Word STATE_VARIABLE_LineCord_1_24;

  FirstLine_15 = libs__print_help__long_option_name_line_plain_4_f_0(Params_8, Option_9, MaybeArgName_10, LongName_12);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_22, &STATE_VARIABLE_LineCord_1_24);
  MaybeAddNegVersionOpt_19 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) >> 2)) & (MR_Integer) 1);
  switch (MaybeAddNegVersionOpt_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_21;
        MR_String Var_34;

        Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_12);
        SecondLine_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_34);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_21)), STATE_VARIABLE_LineCord_1_24, STATE_VARIABLE_LineCord_23);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_23 = STATE_VARIABLE_LineCord_1_24;
      break;
  }
}

static MR_String MR_CALL 
libs__print_help__double_indent_0_f_0(void)
{
  return (MR_String) "        ";
}

static MR_String MR_CALL 
libs__print_help__single_indent_0_f_0(void)
{
  return (MR_String) "    ";
}

static void MR_CALL 
libs__print_help__add_aligned_text_3_p_0(
  MR_String AlignedText_4,
  MR_String Line0_5,
  MR_String * Line_6)
{
  MR_String Var_14;
  MR_String Var_15;

  Var_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_4);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 39, Line0_5, &Var_15);
  *Line_6 = mercury__string__f_43_43_2_f_0(Var_15, Var_14);
}

static MR_String MR_CALL 
libs__print_help__long_negated_option_name_line_plain_1_f_0(
  MR_String LongName_3)
{
  MR_String Line_4;
  MR_String Var_13;

  Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_3);
  Line_4 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_13);
  return Line_4;
}

static void MR_CALL 
libs__print_help__acc_short_option_name_plain_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23)
{
  MR_String FirstLine0_14;
  MR_String FirstLine_15;
  MR_String AlignedText_16;
  MR_Word MaybeAddNegVersionOpt_19;
  MR_Word STATE_VARIABLE_LineCord_1_24;
  MR_String Var_33;
  MR_String Var_34;

  FirstLine0_14 = libs__print_help__short_option_name_line_plain_4_f_0(Params_8, Option_9, MaybeArgName_10, ShortName_12);
  AlignedText_16 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_11, 0))));
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_16);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 39, FirstLine0_14, &Var_34);
  FirstLine_15 = mercury__string__f_43_43_2_f_0(Var_34, Var_33);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_22, &STATE_VARIABLE_LineCord_1_24);
  MaybeAddNegVersionOpt_19 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) >> 2)) & (MR_Integer) 1);
  switch (MaybeAddNegVersionOpt_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_21;
        MR_String Var_50;
        MR_String Var_57;
        MR_String Var_59;

        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_12, &Var_50);
        Var_57 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) "-");
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_57);
        SecondLine_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_59);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_21)), STATE_VARIABLE_LineCord_1_24, STATE_VARIABLE_LineCord_23);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_23 = STATE_VARIABLE_LineCord_1_24;
      break;
  }
}

static MR_bool MR_CALL 
libs__print_help__short_option_name_line_plain_4_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__short_option_name_line_plain__1864__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_String MR_CALL 
libs__print_help__short_option_name_line_plain_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Char ShortName0_9)
{
  MR_bool succeeded;
  MR_String Line_10;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeNegate_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Char ShortName_37;
        MR_String Var_43;
        MR_String Var_51;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ShortName_37 = ShortName0_9;
            break;
          case (MR_Integer) 1:
            {
              MR_String Msg_85;
              MR_String Var_89;

              Var_89 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_85 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_89);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_85);
            }
            break;
        }
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_37, &Var_43);
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_43);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_51);
      }
      else
      {
        MR_String ArgName_17 = ((MR_String) ((MR_hl_field(1, MaybeArgName_8, 0))));
        MR_String MaybeWrappedArgName_18;
        MR_Char ShortName_38;
        MR_String Var_53;
        MR_String Var_54;
        MR_String Var_61;
        MR_String Var_63;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Msg_64;
              MR_String Var_68;

              Var_68 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_64 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_68);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_64);
            }
            break;
          case (MR_Integer) 1:
            ShortName_38 = ShortName0_9;
            break;
        }
        succeeded = (strcmp(ArgName_17, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_76;
          MR_String Var_77;

          Var_77 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Var_76 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) " has empty arg name");
          mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name_plain\'/2", Var_76);
        }
        else
        {
          {
            MR_Integer Var_73;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_17, (MR_Char) 123, &Var_73);
          }
          if (!(succeeded))
          {
            MR_Integer Var_74;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_17, (MR_Char) 45, &Var_74);
          }
          if (succeeded)
            MaybeWrappedArgName_18 = ArgName_17;
          else
          {
            MR_String Var_82;

            Var_82 = mercury__string__f_43_43_2_f_0(ArgName_17, (MR_String) ">");
            MaybeWrappedArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_82);
          }
        }
        Var_53 = mercury__string__f_43_43_2_f_0((MR_String) " ", MaybeWrappedArgName_18);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_38, &Var_54);
        Var_61 = mercury__string__f_43_43_2_f_0(Var_54, Var_53);
        Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_61);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_63);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char ShortName_16;
        MR_Word Var_19;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[0]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (libs__print_help__short_option_name_line_plain_4_f_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (MaybeArgName_8));
          MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "function \140libs.print_help.short_option_name_line_plain\'/4", (MR_String) "MaybeArgName != no_arg");
        if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ShortName_16 = ShortName0_9;
              break;
            case (MR_Integer) 1:
              {
                MR_String Msg_104;
                MR_String Var_108;

                Var_108 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_104 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_108);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_104);
              }
              break;
          }
        else
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Msg_95;
                MR_String Var_99;

                Var_99 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_95 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_99);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_95);
              }
              break;
            case (MR_Integer) 1:
              ShortName_16 = ShortName0_9;
              break;
          }
        Line_10 = libs__print_help__short_negated_option_name_line_plain_1_f_0(ShortName_16);
      }
      break;
  }
  return Line_10;
}

static MR_String MR_CALL 
libs__print_help__short_negated_option_name_line_plain_1_f_0(
  MR_Char ShortName_3)
{
  MR_String Line_4;
  MR_String Var_13;
  MR_String Var_20;
  MR_String Var_22;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_4[1]), ShortName_3, &Var_13);
  Var_20 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) "-");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_20);
  Line_4 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_22);
  return Line_4;
}

static void MR_CALL 
libs__print_help__acc_long_option_name_plain_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_22,
  MR_Word * STATE_VARIABLE_LineCord_23)
{
  MR_String FirstLine0_14;
  MR_String FirstLine_15;
  MR_String AlignedText_16;
  MR_Word MaybeAddNegVersionOpt_19;
  MR_Word STATE_VARIABLE_LineCord_1_24;
  MR_String Var_33;
  MR_String Var_34;

  FirstLine0_14 = libs__print_help__long_option_name_line_plain_4_f_0(Params_8, Option_9, MaybeArgName_10, LongName_12);
  AlignedText_16 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_11, 0))));
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_16);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_4[2]), (MR_Integer) 39, FirstLine0_14, &Var_34);
  FirstLine_15 = mercury__string__f_43_43_2_f_0(Var_34, Var_33);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_22, &STATE_VARIABLE_LineCord_1_24);
  MaybeAddNegVersionOpt_19 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) >> 2)) & (MR_Integer) 1);
  switch (MaybeAddNegVersionOpt_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_21;
        MR_String Var_50;

        Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_12);
        SecondLine_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_50);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_21)), STATE_VARIABLE_LineCord_1_24, STATE_VARIABLE_LineCord_23);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_23 = STATE_VARIABLE_LineCord_1_24;
      break;
  }
}

static MR_bool MR_CALL 
libs__print_help__long_option_name_line_plain_4_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__long_option_name_line_plain__1835__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_String MR_CALL 
libs__print_help__long_option_name_line_plain_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_String LongName0_9)
{
  MR_bool succeeded;
  MR_String Line_10;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 3)) & (MR_Integer) 1);

  switch (MaybeNegate_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String LongName_37;
        MR_String Var_44;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LongName_37 = LongName0_9;
            break;
          case (MR_Integer) 1:
            {
              MR_String Msg_71;
              MR_String Var_75;

              Var_75 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_71 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_75);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_71);
            }
            break;
        }
        Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_37);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_44);
      }
      else
      {
        MR_String ArgName_17 = ((MR_String) ((MR_hl_field(1, MaybeArgName_8, 0))));
        MR_String MaybeWrappedArgName_18;
        MR_String LongName_38;
        MR_String Var_46;
        MR_String Var_47;
        MR_String Var_49;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Msg_50;
              MR_String Var_54;

              Var_54 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_50 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_54);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_50);
            }
            break;
          case (MR_Integer) 1:
            LongName_38 = LongName0_9;
            break;
        }
        succeeded = (strcmp(ArgName_17, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_62;
          MR_String Var_63;

          Var_63 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Var_62 = mercury__string__f_43_43_2_f_0(Var_63, (MR_String) " has empty arg name");
          mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name_plain\'/2", Var_62);
        }
        else
        {
          {
            MR_Integer Var_59;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_17, (MR_Char) 123, &Var_59);
          }
          if (!(succeeded))
          {
            MR_Integer Var_60;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_17, (MR_Char) 45, &Var_60);
          }
          if (succeeded)
            MaybeWrappedArgName_18 = ArgName_17;
          else
          {
            MR_String Var_68;

            Var_68 = mercury__string__f_43_43_2_f_0(ArgName_17, (MR_String) ">");
            MaybeWrappedArgName_18 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_68);
          }
        }
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " ", MaybeWrappedArgName_18);
        Var_47 = mercury__string__f_43_43_2_f_0(LongName_38, Var_46);
        Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "--", Var_47);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_49);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LongName_16;
        MR_Word Var_19;
        MR_String Var_107;

        {
          Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_19, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[0]));
          MR_hl_field(0, Var_19, 1) = ((MR_Box) (libs__print_help__long_option_name_line_plain_4_f_0_1));
          MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_19, 3) = ((MR_Box) (MaybeArgName_8));
          MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mercury__require__expect_3_p_0(Var_19, (MR_String) "function \140libs.print_help.long_option_name_line_plain\'/4", (MR_String) "MaybeArgName != no_arg");
        if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              LongName_16 = LongName0_9;
              break;
            case (MR_Integer) 1:
              {
                MR_String Msg_90;
                MR_String Var_94;

                Var_94 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_90 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_94);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_90);
              }
              break;
          }
        else
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Msg_81;
                MR_String Var_85;

                Var_85 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_81 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_85);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_81);
              }
              break;
            case (MR_Integer) 1:
              LongName_16 = LongName0_9;
              break;
          }
        Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_16);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_107);
      }
      break;
  }
  return Line_10;
}

static void MR_CALL 
libs__print_help__get_optdb_record_params_3_p_0(
  MR_Word OptionMaps_4,
  MR_Word OptdbRecord_5,
  MR_Word * Params_6)
{
  MR_bool succeeded;
  MR_Word Option_7 = ((((MR_Unsigned) ((MR_hl_field(0, OptdbRecord_5, 0))) >> 7)) & (MR_Integer) 1023);
  MR_Word OptionData_9 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_5, 1))));
  MR_Word MaybeExpectArg_12;
  MR_Word MaybeNegate_13;
  MR_Word IndexVersions_14;
  MR_Word MaybeAddNegVersionOpt_15;

  switch (MR_tag((MR_Word) OptionData_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OptionData_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeExpectArg_12 = (MR_Integer) 0;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
            IndexVersions_14 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word InitialValueMap_16;
            MR_Word InitialBool_18;
            MR_Box conv0_InitialBool_18;

            MaybeExpectArg_12 = (MR_Integer) 0;
            InitialValueMap_16 = ((MR_Word) ((MR_hl_field(0, OptionMaps_4, 0))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), InitialValueMap_16, ((MR_Box) (Option_7)), &conv0_InitialBool_18);
            if (succeeded)
            {
              InitialBool_18 = ((MR_Word) (conv0_InitialBool_18));
              succeeded = MR_TRUE;
            }
            if (succeeded)
              switch (InitialBool_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MaybeNegate_13 = (MR_Integer) 0;
                    IndexVersions_14 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MaybeNegate_13 = (MR_Integer) 1;
                    IndexVersions_14 = (MR_Integer) 2;
                  }
                  break;
              }
            else
            {
              MaybeNegate_13 = (MR_Integer) 0;
              IndexVersions_14 = (MR_Integer) 2;
            }
            MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MaybeExpectArg_12 = (MR_Integer) 1;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
            IndexVersions_14 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            MaybeExpectArg_12 = (MR_Integer) 1;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 1;
            IndexVersions_14 = (MR_Integer) 2;
          }
          break;
        case (MR_Integer) 5:
          {
            MaybeExpectArg_12 = (MR_Integer) 1;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
            IndexVersions_14 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Bool_11 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_9, 0))) & (MR_Integer) 1);

        MaybeExpectArg_12 = (MR_Integer) 0;
        switch (Bool_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MaybeNegate_13 = (MR_Integer) 0;
              IndexVersions_14 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 1:
            {
              MaybeNegate_13 = (MR_Integer) 1;
              IndexVersions_14 = (MR_Integer) 2;
            }
            break;
        }
        MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MaybeExpectArg_12 = (MR_Integer) 1;
        MaybeNegate_13 = (MR_Integer) 0;
        MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
        IndexVersions_14 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OptionData_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeExpectArg_12 = (MR_Integer) 1;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 0;
            IndexVersions_14 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MaybeExpectArg_12 = (MR_Integer) 1;
            MaybeNegate_13 = (MR_Integer) 0;
            MaybeAddNegVersionOpt_15 = (MR_Integer) 1;
            IndexVersions_14 = (MR_Integer) 2;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *Params_6 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (MaybeExpectArg_12) << 4)) | (((((MR_Unsigned) (MaybeNegate_13) << 3)) | (((((MR_Unsigned) (MaybeAddNegVersionOpt_15) << 2)) | (MR_Unsigned) (IndexVersions_14)))))));
  }
}

static void MR_CALL 
libs__print_help__write_lines_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_String Line_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Lines_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, Line_10);
      mercury__io__nl_3_p_0(Stream_1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Lines_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
libs__print_help__all_chapters_0_f_0(void)
{
  return (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[197]));
}

void MR_CALL 
libs__print_help__short_usage_3_p_0(
  MR_Word ProgressStream_4)
{
  MR_Word AlreadyPrinted_6;

{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0

	MR_Word X;

		{
X = libs__print_help__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	AlreadyPrinted_6  = X;
}
{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (AlreadyPrinted_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ShortUsageLines_7 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_2[7]));
        MR_String Line_21 = ((MR_String) ((MR_hl_field(1, ShortUsageLines_7, 0))));
        MR_Word Lines_22 = ((MR_Word) ((MR_hl_field(1, ShortUsageLines_7, 1))));
        MR_String Line_31;

        mercury__io__write_string_4_p_0(ProgressStream_4, Line_21);
        mercury__io__nl_3_p_0(ProgressStream_4);
        Line_31 = ((MR_String) ((MR_hl_field(1, Lines_22, 0))));
        mercury__io__write_string_4_p_0(ProgressStream_4, Line_31);
        mercury__io__nl_3_p_0(ProgressStream_4);
{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
libs__print_help__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__print_help__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__print_help__mutable_variable_already_printed_usage_lock, "libs__print_help__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____cur_line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____cur_line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____cur_line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____cur_line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____finished_lines_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____finished_lines_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____finished_lines_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____finished_lines_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_option_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_option_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_option_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_option_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_structure_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_structure_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_structure_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_structure_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____index_versions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____index_versions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____index_versions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____index_versions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____initial_bool_value_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____initial_bool_value_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____initial_bool_value_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____initial_bool_value_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_add_negative_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____maybe_add_negative_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_add_negative_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____maybe_add_negative_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_aligned_text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____maybe_aligned_text_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_aligned_text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____maybe_aligned_text_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_arg_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____maybe_arg_name_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_arg_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____maybe_arg_name_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_expect_arg_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____maybe_expect_arg_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_expect_arg_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____maybe_expect_arg_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____maybe_negate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____maybe_negate_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____maybe_negate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____maybe_negate_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____menu_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____menu_item_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____menu_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____menu_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____optdb_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____optdb_record_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____optdb_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____optdb_record_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____option_maps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____option_maps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____option_maps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____option_maps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____option_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____option_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____option_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____option_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____print_what_help_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____print_what_help_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____print_what_help_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____print_what_help_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____section_depth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____section_depth_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____section_depth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____section_depth_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____set_at_opt_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____set_at_opt_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____set_at_opt_level_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____set_at_opt_level_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____set_at_opt_level_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____set_at_opt_level_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__print_help__init(void)
{
}

void mercury__libs__print_help__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_cur_line_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_finished_lines_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_format_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_option_group_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_structure_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_index_versions_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_initial_bool_value_map_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_aligned_text_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_arg_name_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_menu_item_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_option_maps_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_option_params_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_print_what_help_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_section_depth_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_set_at_opt_level_map_0);
}

void mercury__libs__print_help__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__print_help__required_init(void)
{
  libs__print_help__user_init_pred_29_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__print_help__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.print_help.
