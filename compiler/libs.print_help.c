/*
** Automatically generated from `print_help.m'
** by the Mercury compiler,
** version rotd-2025-07-01
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



struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0_s {
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Cat_3;
  MR_Word * libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont;
  void * libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont_env_ptr;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Opt_7;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__OptData_8;
  MR_Word libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Help_9;
};

struct libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0_s {
  MR_Box * libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont;
  void * libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};

struct libs__print_help__document_options_for_users_guide_3_p_0_2_env_0_s {
  MR_Box * libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont;
  void * libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};

struct libs__print_help__long_usage_4_p_0_2_env_0_s {
  MR_Box * libs__print_help__long_usage_4_p_0_2_env_0__wrapper_arg_1;
  MR_Cont libs__print_help__long_usage_4_p_0_2_env_0__cont;
  void * libs__print_help__long_usage_4_p_0_2_env_0__cont_env_ptr;
  MR_Word libs__print_help__long_usage_4_p_0_2_env_0__conv0_LambdaHeadVar__1_16;
};


static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__cord__pti_cord_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__set_ordlist__pti_set_ordlist_1__plain_libs__print_help__type_ctor_info_optdb_record_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__cord__ti_cord_1builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_0;

static const MR_EnumFunctorDesc libs__print_help__libs__print_help__enum_functor_desc_help_format_0_1;

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_ordinal_ordered_help_format_0[2];

static const MR_EnumFunctorDescPtr libs__print_help__libs__print_help__enum_name_ordered_help_format_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_format_0[2];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_section_0_0[1];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_section_0_0[1];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_section_0_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_subsection_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_section_0_1[3];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_section_0_1[3];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_section_0_1;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_section_0_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_section_0_1[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_section_0[2];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_section_0[2];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_section_0[2];

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0;

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_subsection_0_0[3];

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_subsection_0_0[3];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_subsection_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_subsection_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_subsection_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_subsection_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_subsection_0[1];

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

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_optdb_record_0_0[4];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_optdb_record_0_0[4];

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_optdb_record_0_0;

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_optdb_record_0_0[1];

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_optdb_record_0[1];

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_optdb_record_0[1];

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_optdb_record_0[1];

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_params_0_0[3];

static const MR_ConstString libs__print_help__libs__print_help__field_names_option_params_0_0[3];

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_option_params_0_0[3];

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

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__898__1_2_p_0(
  MR_Word MaybeAddNegVersion_14,
  MR_Word HeadVar__2_32);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__896__1_2_p_0(
  MR_Word MaybeNegate_13,
  MR_Word HeadVar__2_28);

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__894__1_2_p_0(
  MR_Word MaybeExpectArg_12,
  MR_Word HeadVar__2_24);

static MR_String MR_CALL 
libs__print_help__IntroducedFrom__func__acc_help_message__876__1_1_f_0(
  MR_String LambdaHeadVar__1_112);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0(
  MR_Word Cat_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__427__2_1_p_0(
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__427__1_1_p_0(
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr);

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
libs__print_help____Compare____optdb_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____optdb_record_0_0(
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
libs__print_help____Compare____help_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
libs__print_help____Compare____help_subsection_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_section_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
libs__print_help____Unify____help_subsection_0_0(
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

static void MR_CALL 
libs__print_help__document_one_optimization_option_3_p_0(
  MR_Word DocOpt_4,
  MR_Word STATE_VARIABLE_Lines_0_18,
  MR_Word * STATE_VARIABLE_Lines_19);

static void MR_CALL 
libs__print_help__get_main_long_name_2_p_0(
  MR_Word Option_3,
  MR_Word * MaybeLongName_4);

static void MR_CALL 
libs__print_help__acc_prefixed_line_4_p_0(
  MR_String Prefix_5,
  MR_String LineBody_6,
  MR_Word STATE_VARIABLE_LineCord_0_9,
  MR_Word * STATE_VARIABLE_LineCord_10);

static MR_bool MR_CALL 
libs__print_help__is_bool_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_3(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_String LongName_9,
  MR_Word ArgAlign_10,
  MR_Word STATE_VARIABLE_LineCord_0_19,
  MR_Word * STATE_VARIABLE_LineCord_20);

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

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Categories_0_4,
  MR_Word * STATE_VARIABLE_Categories_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1(
  MR_Word What_2,
  MR_String SubSectionNameIndent_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Categories_0_5,
  MR_Word * STATE_VARIABLE_Categories_6,
  MR_Word STATE_VARIABLE_LineCord_0_7,
  MR_Word * STATE_VARIABLE_LineCord_8);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_4,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_5);

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_2(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1(
  MR_Word What_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_43,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_44);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_4_p_1(
  MR_Integer LineLen_6,
  MR_Word InitialPieces_7,
  MR_Word * FinishedLines_8);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_9_p_1(
  MR_Integer LineLen_11,
  MR_Word Pieces_12,
  MR_Integer STATE_VARIABLE_CurLineLen_0_79,
  MR_Integer * STATE_VARIABLE_CurLineLen_80,
  MR_Word STATE_VARIABLE_CurLine_0_81,
  MR_Word * STATE_VARIABLE_CurLine_82,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_83,
  MR_Word * STATE_VARIABLE_FinishedLineCord_84);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
libs__print_help__long_usage_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Categories_0_4,
  MR_Word * STATE_VARIABLE_Categories_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word What_2,
  MR_String SubSectionNameIndent_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Categories_0_5,
  MR_Word * STATE_VARIABLE_Categories_6,
  MR_Word STATE_VARIABLE_LineCord_0_7,
  MR_Word * STATE_VARIABLE_LineCord_8);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_4,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_5);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word What_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_43,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_44);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Integer LineLen_6,
  MR_Word InitialPieces_7,
  MR_Word * FinishedLines_8);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_9_p_0(
  MR_Integer LineLen_11,
  MR_Word Pieces_12,
  MR_Integer STATE_VARIABLE_CurLineLen_0_79,
  MR_Integer * STATE_VARIABLE_CurLineLen_80,
  MR_Word STATE_VARIABLE_CurLine_0_81,
  MR_Word * STATE_VARIABLE_CurLine_82,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_83,
  MR_Word * STATE_VARIABLE_FinishedLineCord_84);

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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_1,
  MR_Word Option_2,
  MR_Word MaybeArgName_3,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22);

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
libs__print_help__long_negated_option_name_line_1_f_0(
  MR_String LongName_3);

static void MR_CALL 
libs__print_help__acc_short_option_name_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22);

static MR_String MR_CALL 
libs__print_help__short_option_name_line_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Char ShortName0_9);

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(
  MR_Word MaybeExpectArg_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Box OptionName0_9,
  MR_Box * OptionName_10);

static MR_String MR_CALL 
libs__print_help__short_negated_option_name_line_1_f_0(
  MR_Char ShortName_3);

static void MR_CALL 
libs__print_help__acc_long_option_name_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22);

static MR_String MR_CALL 
libs__print_help__long_option_name_line_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_String LongName0_9);

static void MR_CALL 
libs__print_help__get_optdb_record_params_2_p_0(
  MR_Word OptdbRecord_3,
  MR_Word * Params_4);

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
libs__print_help____Unify____help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__print_help____Unify____help_subsection_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____help_subsection_0_0_10001(
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
libs__print_help____Unify____optdb_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__print_help____Compare____optdb_record_0_0_10001(
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


static /* final */ const MR_Box libs__print_help_scalar_common_1[151][2];

static /* final */ const MR_Box libs__print_help_scalar_common_2[71][3];

static /* final */ const MR_Box libs__print_help_scalar_common_3[3][1];

static /* final */ const MR_Box libs__print_help_scalar_common_4[1][9];

static /* final */ const MR_Box libs__print_help_scalar_common_5[8][4];

static /* final */ const MR_Box libs__print_help_scalar_common_6[1][7];

static /* final */ const MR_Box libs__print_help_scalar_common_7[6][5];

static /* final */ const MR_Box libs__print_help_scalar_common_8[1][6];




static /* final */ const MR_Box libs__print_help_scalar_common_1[151][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_help_subsection_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2025 The Mercury team")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Options:")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Integer) 15)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Integer) 16)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Integer) 17)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Integer) 19)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_Integer) 21)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[33])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Integer) 25)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Integer) 31)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_Integer) 34)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Integer) 35)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_Integer) 36)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_Integer) 44)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Integer) 46)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_Integer) 45)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Integer) 47)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_Integer) 48)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_Integer) 49)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Integer) 50)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Integer) 52)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_Integer) 53)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_Integer) 54)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Integer) 56)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_Integer) 55)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_Integer) 57)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Integer) 58)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_Integer) 59)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_Integer) 60)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_Integer) 61)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Integer) 62)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_Integer) 63)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_Integer) 64)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_Integer) 65)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_Integer) 66)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_3[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &libs__print_help_scalar_common_1[79]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  81 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[10])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[15])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[20])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[32])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[30])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[28])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[40])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[44])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 107 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[42])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[54])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[52])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[55])))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[50])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[49])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[48])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[47])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[46])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[61]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[36])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[35])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[34])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[33])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[59]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[26])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[25])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[24])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[23])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[22])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[21])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[57]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[13])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[12])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[11])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[2])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[1])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) (((MR_Box) (&libs__print_help_scalar_common_2[0])))),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_String) "Name: mmc - Melbourne Mercury Compiler")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[8])))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_String) "    Arguments of the form \140\100file\' are replaced with the contents of the file.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[10])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_String) "    Arguments that do not end in \140.m\' are assumed to be module names.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_String) "    Arguments ending in \140.m\' are assumed to be source file names.")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_String) "Arguments:")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[148])))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>")),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[149])))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_2[71][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "Help options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[11])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "Options for modifying the command line")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[12])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "Options that give the compiler its overall task")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[13])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "Grades and grade components")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[14])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Target options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[15])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "LLDS backend grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[16])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "MLDS backend grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[17])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Debugging grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[18])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Profiling grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[19])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Optional feature grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[20])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "Developer grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[21])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "Options that control inference")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[22])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "Options specifying the intended semantics")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[23])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "Verbosity options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[26])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "Options that control diagnostics")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[27])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "Options that control color in diagnostics")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[29])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible incorrectness")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[30])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "Warnings about possible performance issues")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[32])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "Warnings about programming style")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[34])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "Options that control warnings")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[35])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "Options about halting for warnings")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[36])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "Options that request information")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[37])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "Options that ask for informational files")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[38])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "Controlling trace goals")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[39])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "Preparing code for mdb debugging")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[41])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "Preparing code for ssdb debugging")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[43])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "Preparing code for mdprof profiling")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[44])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "Overall control of optimizations")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[45])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "Source-to-source optimizations")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[46])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "Experimental source-to-source optimizations")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[47])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "Optimizations during code generation")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[48])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "Optimizations specific to high level code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[50])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "Optimizations specific to low level code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[53])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "Options that control transitive intermodule optimization")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[54])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "Options that control program analyses")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[55])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "Options that ask for modified output")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[57])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "Options for controlling mmc --make")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[58])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "General options for compiling target language code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[59])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "Options for compiling C code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[60])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "Options for compiling Java code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[61])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "Options for compiling C# code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[62])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "General options for linking")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[63])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "Options for linking C or C# code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[64])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "Options for linking just C code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[65])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "Options for linking just C# code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[66])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "Options for linking just Java code")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[67])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "Options controlling searches for files")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[68])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "Options controlling the library installation process")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[69])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "Options specifying properties of the environment")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[70])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "Options that record autoconfigured parameters")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[71])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "Options reserved for Mercury.config files")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[72])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "Operation selection options for developers only")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[73])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "Options that can help debug the compiler")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[74])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "Options for dumping internal compiler data structures")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[75])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "Options intended for internal use by the compiler only")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[76])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "Now-unused former options kept for compatibility")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[77])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "Grade options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[88])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "Diagnostics options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[90])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "Warning options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[95])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "Optimization options")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[101])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "Options for target language compilation")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[105])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "Options for linking")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[110])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "Options for developers only")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[114])))
  },
  /* row  63 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  64 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  65 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__long_usage_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  66 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[1])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  67 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  68 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_7[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  69 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_5[3])),
    ((MR_Box) (libs__print_help__document_options_for_users_guide_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  70 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_8[0])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_3[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "There is no help text available.")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};

static /* final */ const MR_Box libs__print_help_scalar_common_4[1][9] = {
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

static /* final */ const MR_Box libs__print_help_scalar_common_5[8][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row   6 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "    "))
  },
  /* row   7 */
  {
    ((MR_Box) (&libs__print_help_scalar_common_6[0])),
    ((MR_Box) (libs__print_help__acc_optimization_options_loop_4_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "        "))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_6[1][7] = {
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
};

static /* final */ const MR_Box libs__print_help_scalar_common_7[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0)),
    ((MR_Box) (&libs__print_help__set_ordlist__pti_set_ordlist_1__plain_libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0)),
    ((MR_Box) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0))
  },
};

static /* final */ const MR_Box libs__print_help_scalar_common_8[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0)),
    ((MR_Box) (&libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__print_help__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.print_help.mh"
#line 66 "print_help.m"
MR_Word libs__print_help__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__print_help__mutable_variable_already_printed_usage_lock;
#endif


#line 66 "print_help.m"
void 
libs__print_help__user_init_pred_26_0(void)
#line 66 "print_help.m"
{
#line 66 "print_help.m"
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

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_section_0_0[1] = { (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_help_subsection_0) };

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_section_0_0[1] = { (MR_String) "chapter_section" };

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_section_0_0 = {
  (MR_String) "one_level_section",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_help_section_0_0,
  libs__print_help__libs__print_help__field_names_help_section_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_subsection_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_help_subsection_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_section_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1libs__print_help__type_ctor_info_help_subsection_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_section_0_1[3] = {
  (MR_String) "chapter_name",
  (MR_String) "chapter_comment_lines",
  (MR_String) "chapter_sections"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_section_0_1 = {
  (MR_String) "two_level_section",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__print_help__libs__print_help__field_types_help_section_0_1,
  libs__print_help__libs__print_help__field_names_help_section_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_section_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_section_0_0 };

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_section_0_1[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_section_0_1 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_section_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    libs__print_help__libs__print_help__du_stag_ordered_help_section_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_section_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_section_0[2] = {
  &libs__print_help__libs__print_help__du_functor_desc_help_section_0_0,
  &libs__print_help__libs__print_help__du_functor_desc_help_section_0_1
};

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_section_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_section_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____help_section_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_section_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_section",
  { libs__print_help__libs__print_help__du_name_ordered_help_section_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_help_section_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_section_0,

};

static const MR_FA_TypeInfo_Struct1 libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0) }
};

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_help_subsection_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&libs__print_help__list__ti_list_1libs__option_categories__type_ctor_info_option_category_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_help_subsection_0_0[3] = {
  (MR_String) "section_name",
  (MR_String) "section_comment_lines",
  (MR_String) "section_categories"
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_help_subsection_0_0 = {
  (MR_String) "help_subsection",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__print_help__libs__print_help__field_types_help_subsection_0_0,
  libs__print_help__libs__print_help__field_names_help_subsection_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_stag_ordered_help_subsection_0_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_subsection_0_0 };

static const MR_DuPtagLayout libs__print_help__libs__print_help__du_ptag_ordered_help_subsection_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__print_help__libs__print_help__du_stag_ordered_help_subsection_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__print_help__libs__print_help__du_name_ordered_help_subsection_0[1] = { &libs__print_help__libs__print_help__du_functor_desc_help_subsection_0_0 };

static const MR_Integer libs__print_help__libs__print_help__functor_number_map_help_subsection_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__print_help__libs__print_help__type_ctor_info_help_subsection_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__print_help____Unify____help_subsection_0_0_10001)),
  ((MR_Box) (libs__print_help____Compare____help_subsection_0_0_10001)),
  (MR_String) "libs.print_help",
  (MR_String) "help_subsection",
  { libs__print_help__libs__print_help__du_name_ordered_help_subsection_0 },
  { libs__print_help__libs__print_help__du_ptag_ordered_help_subsection_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__print_help__libs__print_help__functor_number_map_help_subsection_0,

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

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_optdb_record_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0),
  (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&libs__optdb_help__libs__optdb_help__type_ctor_info_help_0)
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_optdb_record_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 10,
    (MR_Integer) 7
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 10
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

static const MR_PseudoTypeInfo libs__print_help__libs__print_help__field_types_option_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0),
  (MR_PseudoTypeInfo) (&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0)
};

static const MR_ConstString libs__print_help__libs__print_help__field_names_option_params_0_0[3] = {
  (MR_String) "op_expect",
  (MR_String) "op_negate",
  (MR_String) "op_add_negative"
};

static const MR_DuArgLocn libs__print_help__libs__print_help__field_locns_option_params_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc libs__print_help__libs__print_help__du_functor_desc_option_params_0_0 = {
  (MR_String) "option_params",
  INT16_C(3),
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

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__898__1_2_p_0(
  MR_Word MaybeAddNegVersion_14,
  MR_Word HeadVar__2_32)
{
  MR_bool succeeded = (MaybeAddNegVersion_14 == HeadVar__2_32);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__896__1_2_p_0(
  MR_Word MaybeNegate_13,
  MR_Word HeadVar__2_28)
{
  MR_bool succeeded = (MaybeNegate_13 == HeadVar__2_28);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__IntroducedFrom__pred__acc_arg_align_text__894__1_2_p_0(
  MR_Word MaybeExpectArg_12,
  MR_Word HeadVar__2_24)
{
  MR_bool succeeded = (MaybeExpectArg_12 == HeadVar__2_24);

  return succeeded;
}

static MR_String MR_CALL 
libs__print_help__IntroducedFrom__func__acc_help_message__876__1_1_f_0(
  MR_String LambdaHeadVar__1_112)
{
  MR_String LambdaHeadVar__2_113;

  LambdaHeadVar__2_113 = mercury__string__f_43_43_2_f_0((MR_String) "\100c ", LambdaHeadVar__1_112);
  return LambdaHeadVar__2_113;
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_1(
  void * env_ptr_arg)
{
  struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0_s * env_ptr = (struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__LambdaHeadVar__1_10) = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Cat_3) << 10)) | (MR_Unsigned) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Opt_7)));
    MR_hl_field(0, base, 1) = ((MR_Box) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__OptData_8));
    MR_hl_field(0, base, 2) = ((MR_Box) ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Help_9));
  }
  ((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont)((env_ptr)->libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0(
  MR_Word Cat_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0_s env;

  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Cat_3 = Cat_3;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont = cont;
  (env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  libs__options__optdb_4_p_1((env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Cat_3, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Opt_7, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__OptData_8, &(env).libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_env_0__Help_9, libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0_1, &env);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__427__2_1_p_0(
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_9;

  libs__option_categories__option_categories_2_p_1(LambdaHeadVar__1_16, &Var_9, cont, cont_env_ptr);
}

static void MR_CALL 
libs__print_help__IntroducedFrom__pred__document_requested_options__427__1_1_p_0(
  MR_Word * LambdaHeadVar__1_16,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_9;

  libs__option_categories__option_categories_2_p_1(LambdaHeadVar__1_16, &Var_9, cont, cont_env_ptr);
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
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_19 > Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 > Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
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
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 127);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 10)) & (MR_Integer) 127);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1023);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1023);
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
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
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 10)) & (MR_Integer) 127);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 10)) & (MR_Integer) 127);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1023);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1023);
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
libs__print_help____Compare____help_section_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_5 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      libs__print_help____Compare____help_subsection_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_8;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[3]), &SubResult2_11, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
    }
  }
}

static void MR_CALL 
libs__print_help____Compare____help_subsection_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_section_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = libs__print_help____Unify____help_subsection_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&libs__print_help_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&libs__print_help_scalar_common_1[4]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_subsection_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_11_11 = (MR_Word) (&libs__print_help_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&libs__print_help_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____finished_lines_0_0(
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
libs__print_help____Compare____cur_line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__print_help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
libs__print_help____Unify____cur_line_0_0(
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

static void MR_CALL 
libs__print_help__document_one_optimization_option_3_p_0(
  MR_Word DocOpt_4,
  MR_Word STATE_VARIABLE_Lines_0_18,
  MR_Word * STATE_VARIABLE_Lines_19)
{
  MR_Word Option_7 = ((MR_Unsigned) ((MR_hl_field(0, DocOpt_4, 1))) & (MR_Integer) 1023);
  MR_Word OptionData_8 = ((MR_Word) ((MR_hl_field(0, DocOpt_4, 2))));
  MR_Word MaybeLongName_9;

  libs__print_help__get_main_long_name_2_p_0(Option_7, &MaybeLongName_9);
  if ((MaybeLongName_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Lines_19 = STATE_VARIABLE_Lines_0_18;
  else
  {
    MR_String LongName_10 = ((MR_String) ((MR_hl_field(1, MaybeLongName_9, 0))));

    switch (MR_tag((MR_Word) OptionData_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 3:
        {
          MR_String Var_37;

          Var_37 = mercury__string__string_1_f_0((MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) (OptionData_8)));
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.document_one_optimization_option\'/3", Var_37);
            return;
          }
        }
        break;
      case (MR_Integer) 1:
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
            *STATE_VARIABLE_Lines_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Line_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Lines_0_18));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Int_13 = ((MR_Integer) ((MR_hl_field(2, OptionData_8, 0))));
          MR_String Line_38;
          MR_String Var_40;
          MR_String Var_48;
          MR_String Var_49;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), Int_13, &Var_40);
          Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "=", Var_40);
          Var_49 = mercury__string__f_43_43_2_f_0(LongName_10, Var_48);
          Line_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", Var_49);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Lines_19 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Line_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Lines_0_18));
          }
        }
        break;
    }
  }
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
        MR_String LongName_63 = ((MR_String) ((MR_hl_field(1, Help_7, 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLongName_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LongName_63));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_64 = ((MR_String) ((MR_hl_field(2, Help_7, 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLongName_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LongName_64));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String LongName_62 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_62));
            }
          }
          break;
        case (MR_Integer) 1:
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
        case (MR_Integer) 2:
          {
            MR_String LongName_69 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_69));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String LongName_61 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_61));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String LongName_59 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_59));
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
            MR_String LongName_65 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_65));
            }
          }
          break;
        case (MR_Integer) 7:
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
        case (MR_Integer) 8:
          {
            MR_String LongName_73 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_73));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String LongName_60 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_60));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String LongName_68 = ((MR_String) ((MR_hl_field(3, Help_7, 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_68));
            }
          }
          break;
        case (MR_Integer) 11:
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
        case (MR_Integer) 12:
          {
            MR_String LongName_75 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_75));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String LongName_72 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_72));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String LongName_74 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_74));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String LongName_71 = ((MR_String) ((MR_hl_field(3, Help_7, 2))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeLongName_4 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LongName_71));
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

static MR_bool MR_CALL 
libs__print_help__is_bool_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_3(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text__898__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text__896__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__IntroducedFrom__pred__acc_arg_align_text__894__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__acc_arg_align_text_6_p_0(
  MR_Word Params_7,
  MR_Word Option_8,
  MR_String LongName_9,
  MR_Word ArgAlign_10,
  MR_Word STATE_VARIABLE_LineCord_0_19,
  MR_Word * STATE_VARIABLE_LineCord_20)
{
  MR_bool succeeded;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word MaybeAddNegVersion_14 = ((MR_Unsigned) ((MR_hl_field(0, Params_7, 0))) & (MR_Integer) 1);
  MR_String ArgName_15;
  MR_String AlignedText_16;
  MR_String Line0_17;
  MR_String Line_18;
  MR_Word Var_21;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Word Var_33;
  MR_String Var_45;
  MR_String Var_46;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[3]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (MaybeExpectArg_12));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_Integer) 1));
  }
  mercury__require__expect_3_p_0(Var_21, (MR_String) "predicate \140libs.print_help.acc_arg_align_text\'/6", (MR_String) "unexpected MaybeExpectArg");
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[4]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_6_p_0_2));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (MaybeNegate_13));
    MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140libs.print_help.acc_arg_align_text\'/6", (MR_String) "unexpected MaybeNegate");
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_29, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[5]));
    MR_hl_field(0, Var_29, 1) = ((MR_Box) (libs__print_help__acc_arg_align_text_6_p_0_3));
    MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_29, 3) = ((MR_Box) (MaybeAddNegVersion_14));
    MR_hl_field(0, Var_29, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_29, (MR_String) "predicate \140libs.print_help.acc_arg_align_text\'/6", (MR_String) "unexpected MaybeAddNegVersion");
  ArgName_15 = ((MR_String) ((MR_hl_field(0, ArgAlign_10, 0))));
  AlignedText_16 = ((MR_String) ((MR_hl_field(0, ArgAlign_10, 1))));
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (ArgName_15));
  }
  Line0_17 = libs__print_help__long_option_name_line_4_f_0(Params_7, Option_8, Var_33, LongName_9);
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_16);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_3[2]), (MR_Integer) 39, Line0_17, &Var_46);
  Line_18 = mercury__string__f_43_43_2_f_0(Var_46, Var_45);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Line_18)), STATE_VARIABLE_LineCord_0_19, STATE_VARIABLE_LineCord_20);
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

    libs__print_help__IntroducedFrom__pred__get_optdb_records_in_category__564__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), &(env).libs__print_help__get_optdb_records_in_category_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, libs__print_help__get_optdb_records_in_category_2_p_0_1, &env);
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
    MR_hl_field(0, OptdbPred_5, 0) = ((MR_Box) (&libs__print_help_scalar_common_7[2]));
    MR_hl_field(0, OptdbPred_5, 1) = ((MR_Box) (libs__print_help__get_optdb_records_in_category_2_p_0_2));
    MR_hl_field(0, OptdbPred_5, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, OptdbPred_5, 3) = ((MR_Box) (Cat_3));
  }
  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbPred_5, OptdbRecordSet_4);
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
  MR_Word conv0_STATE_VARIABLE_Lines_19;

  libs__print_help__document_one_optimization_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Lines_19);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Lines_19));
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

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), CurLevel_6, &Var_65);
      Var_72 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) ":");
      LevelHeading_11 = mercury__string__f_43_43_2_f_0((MR_String) "Optimization level ", Var_72);
      mercury__list__foldl_4_p_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_documented_optimization_option_0), (MR_Word) (&libs__print_help_scalar_common_1[3]), (MR_Word) (&libs__print_help_scalar_common_2[70]), DocumentedOpts_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_OptLines_13);
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
        mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[6]), LevelDescLines_9, ((MR_Box) (STATE_VARIABLE_LineCord_3_35)), &conv3_STATE_VARIABLE_LineCord_4_37);
        STATE_VARIABLE_LineCord_4_37 = ((MR_Word) (conv3_STATE_VARIABLE_LineCord_4_37));
      }
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_4_37, &STATE_VARIABLE_LineCord_5_40);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "    The options set at this level are:")), STATE_VARIABLE_LineCord_5_40, &STATE_VARIABLE_LineCord_6_41);
      mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_6_41, &STATE_VARIABLE_LineCord_7_43);
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[7]), SortedOptLines_14, ((MR_Box) (STATE_VARIABLE_LineCord_7_43)), &conv5_STATE_VARIABLE_LineCord_8_45);
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
  MR_Word Var_8 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[8]));
  MR_String Line_13 = ((MR_String) ((MR_hl_field(1, Var_8, 0))));
  MR_Word Lines_14 = ((MR_Word) ((MR_hl_field(1, Var_8, 1))));
  MR_String Line_23;

  mercury__io__write_string_4_p_0(Stream_4, Line_13);
  mercury__io__nl_3_p_0(Stream_4);
  Line_23 = ((MR_String) ((MR_hl_field(1, Lines_14, 0))));
  mercury__io__write_string_4_p_0(Stream_4, Line_23);
  mercury__io__nl_3_p_0(Stream_4);
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_1(
  void * env_ptr_arg)
{
  struct libs__print_help__document_options_for_users_guide_3_p_0_2_env_0_s * env_ptr = (struct libs__print_help__document_options_for_users_guide_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
  ((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont)((env_ptr)->libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__document_options_for_users_guide_3_p_0_2_env_0_s env;

  (env).libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont = cont;
  (env).libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__print_help__IntroducedFrom__pred__document_requested_options__427__2_1_p_0(&(env).libs__print_help__document_options_for_users_guide_3_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__print_help__document_options_for_users_guide_3_p_0_1, &env);
  }
}

void MR_CALL 
libs__print_help__document_options_for_users_guide_3_p_0(
  MR_Word ProgressStream_4)
{
  MR_Word OptionsLines_6;
  MR_Word AllCategoriesSet_12;
  MR_Word UndoneCategoriesSet_13;
  MR_Word OptionsLineCord_14;
  MR_Word UndoneCategories_15;
  MR_Word Var_16;
  MR_Word Var_17;

  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_2[69]), &AllCategoriesSet_12);
  Var_16 = libs__print_help__all_chapters_0_f_0();
  Var_17 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1((MR_Integer) 1, Var_16, AllCategoriesSet_12, &UndoneCategoriesSet_13, Var_17, &OptionsLineCord_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), UndoneCategoriesSet_13, &UndoneCategories_15);
  if (!((UndoneCategories_15 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_19;
    MR_String Var_21;

    Var_21 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_1[0]), ((MR_Box) (UndoneCategories_15)));
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "undone: ", Var_21);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.document_requested_options\'/3", Var_19);
      return;
    }
  }
  OptionsLines_6 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionsLineCord_14);
  libs__print_help__write_lines_4_p_0(ProgressStream_4, OptionsLines_6);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_LineCord_10));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_2(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1_1(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_7_p_1(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Categories_0_4,
  MR_Word * STATE_VARIABLE_Categories_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LineCord_7 = STATE_VARIABLE_LineCord_0_6;
      *STATE_VARIABLE_Categories_5 = STATE_VARIABLE_Categories_0_4;
    }
    else
    {
      MR_Word Section_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Sections_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Categories_1_26;
      MR_Word STATE_VARIABLE_LineCord_1_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_4;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_6;

      if (((MR_tag((MR_Word) Section_18)) == (MR_Integer) 0))
      {
        MR_Word SubSection_28 = (MR_Word) ((MR_Word) (Section_18));
        MR_String SubSectionName_54 = ((MR_String) ((MR_hl_field(0, SubSection_28, 0))));
        MR_Word SubSectionCommentLines_55 = ((MR_Word) ((MR_hl_field(0, SubSection_28, 1))));
        MR_Word SubSectionCategories_56 = ((MR_Word) ((MR_hl_field(0, SubSection_28, 2))));
        MR_Word OptdbRecordSets_57;
        MR_Word OptdbRecordSet_58;
        MR_Word HelpTextLinesCord_59;
        MR_Word Var_61;
        MR_Word Var_62;

        mercury__set__det_remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), SubSectionCategories_56, STATE_VARIABLE_Categories_0_4, &STATE_VARIABLE_Categories_1_26);
        mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[2]), (MR_Word) (&libs__print_help_scalar_common_2[68]), SubSectionCategories_56, &OptdbRecordSets_57);
        OptdbRecordSet_58 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_57);
        Var_61 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_58);
        Var_62 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_49_5_p_1(What_2, Var_61, Var_62, &HelpTextLinesCord_59);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HelpTextLinesCord_59);
        if (succeeded)
          STATE_VARIABLE_LineCord_1_27 = STATE_VARIABLE_LineCord_0_6;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_1_64;
          MR_Word STATE_VARIABLE_LineCord_2_65;
          MR_String Var_66;
          MR_Word STATE_VARIABLE_LineCord_3_67;
          MR_String Var_69;
          MR_Word STATE_VARIABLE_LineCord_4_70;
          MR_String Var_72;
          MR_Word STATE_VARIABLE_LineCord_7_77;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_64);
          Var_66 = mercury__string__f_43_43_2_f_0((MR_String) "\100node ", SubSectionName_54);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_66)), STATE_VARIABLE_LineCord_1_64, &STATE_VARIABLE_LineCord_3_67);
          Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "\100subsection ", SubSectionName_54);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_69)), STATE_VARIABLE_LineCord_3_67, &STATE_VARIABLE_LineCord_4_70);
          Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\100cindex ", SubSectionName_54);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_72)), STATE_VARIABLE_LineCord_4_70, &STATE_VARIABLE_LineCord_2_65);
          if ((SubSectionCommentLines_55 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LineCord_7_77 = STATE_VARIABLE_LineCord_2_65;
          else
          {
            MR_Word STATE_VARIABLE_LineCord_6_75;
            MR_Box conv2_STATE_VARIABLE_LineCord_7_77;

            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_2_65, &STATE_VARIABLE_LineCord_6_75);
            mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[4]), SubSectionCommentLines_55, ((MR_Box) (STATE_VARIABLE_LineCord_6_75)), &conv2_STATE_VARIABLE_LineCord_7_77);
            STATE_VARIABLE_LineCord_7_77 = ((MR_Word) (conv2_STATE_VARIABLE_LineCord_7_77));
          }
          STATE_VARIABLE_LineCord_1_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_7_77, HelpTextLinesCord_59);
        }
      }
      else
      {
        MR_String SectionName_29 = ((MR_String) ((MR_hl_field(1, Section_18, 0))));
        MR_Word SectionCommentLines_30 = ((MR_Word) ((MR_hl_field(1, Section_18, 1))));
        MR_Word SubSections_31 = ((MR_Word) ((MR_hl_field(1, Section_18, 2))));
        MR_Word SubSectionsLineCord_33;
        MR_Word Var_35;

        Var_35 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1(What_2, (MR_String) "", SubSections_31, STATE_VARIABLE_Categories_0_4, &STATE_VARIABLE_Categories_1_26, Var_35, &SubSectionsLineCord_33);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubSectionsLineCord_33);
        if (succeeded)
          STATE_VARIABLE_LineCord_1_27 = STATE_VARIABLE_LineCord_0_6;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_2_37;
          MR_Word STATE_VARIABLE_LineCord_3_38;
          MR_String Var_39;
          MR_Word STATE_VARIABLE_LineCord_4_40;
          MR_String Var_42;
          MR_Word STATE_VARIABLE_LineCord_5_43;
          MR_String Var_45;
          MR_Word STATE_VARIABLE_LineCord_8_50;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_2_37);
          Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\100node ", SectionName_29);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_39)), STATE_VARIABLE_LineCord_2_37, &STATE_VARIABLE_LineCord_4_40);
          Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\100subsection ", SectionName_29);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_42)), STATE_VARIABLE_LineCord_4_40, &STATE_VARIABLE_LineCord_5_43);
          Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "\100cindex ", SectionName_29);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_45)), STATE_VARIABLE_LineCord_5_43, &STATE_VARIABLE_LineCord_3_38);
          if ((SectionCommentLines_30 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LineCord_8_50 = STATE_VARIABLE_LineCord_3_38;
          else
          {
            MR_Word STATE_VARIABLE_LineCord_7_48;
            MR_Box conv4_STATE_VARIABLE_LineCord_8_50;

            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_3_38, &STATE_VARIABLE_LineCord_7_48);
            mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[5]), SectionCommentLines_30, ((MR_Box) (STATE_VARIABLE_LineCord_7_48)), &conv4_STATE_VARIABLE_LineCord_8_50);
            STATE_VARIABLE_LineCord_8_50 = ((MR_Word) (conv4_STATE_VARIABLE_LineCord_8_50));
          }
          STATE_VARIABLE_LineCord_1_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_8_50, SubSectionsLineCord_33);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Sections_19;
      next_value_of_STATE_VARIABLE_Categories_0_4 = STATE_VARIABLE_Categories_1_26;
      next_value_of_STATE_VARIABLE_LineCord_0_6 = STATE_VARIABLE_LineCord_1_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Categories_0_4 = next_value_of_STATE_VARIABLE_Categories_0_4;
      STATE_VARIABLE_LineCord_0_6 = next_value_of_STATE_VARIABLE_LineCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_2(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_1(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1(
  MR_Word What_2,
  MR_String SubSectionNameIndent_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Categories_0_5,
  MR_Word * STATE_VARIABLE_Categories_6,
  MR_Word STATE_VARIABLE_LineCord_0_7,
  MR_Word * STATE_VARIABLE_LineCord_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LineCord_8 = STATE_VARIABLE_LineCord_0_7;
      *STATE_VARIABLE_Categories_6 = STATE_VARIABLE_Categories_0_5;
    }
    else
    {
      MR_Word SubSection_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word SubSections_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_Categories_1_29;
      MR_Word STATE_VARIABLE_LineCord_1_30;
      MR_String SubSectionName_31 = ((MR_String) ((MR_hl_field(0, SubSection_21, 0))));
      MR_Word SubSectionCommentLines_32 = ((MR_Word) ((MR_hl_field(0, SubSection_21, 1))));
      MR_Word SubSectionCategories_33 = ((MR_Word) ((MR_hl_field(0, SubSection_21, 2))));
      MR_Word OptdbRecordSets_34;
      MR_Word OptdbRecordSet_35;
      MR_Word HelpTextLinesCord_36;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_5;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_7;

      mercury__set__det_remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), SubSectionCategories_33, STATE_VARIABLE_Categories_0_5, &STATE_VARIABLE_Categories_1_29);
      mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[2]), (MR_Word) (&libs__print_help_scalar_common_2[67]), SubSectionCategories_33, &OptdbRecordSets_34);
      OptdbRecordSet_35 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_34);
      Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_35);
      Var_39 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_49_5_p_1(What_2, Var_38, Var_39, &HelpTextLinesCord_36);
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HelpTextLinesCord_36);
      if (succeeded)
        STATE_VARIABLE_LineCord_1_30 = STATE_VARIABLE_LineCord_0_7;
      else
      {
        MR_Word STATE_VARIABLE_LineCord_1_41;
        MR_Word STATE_VARIABLE_LineCord_2_42;
        MR_String Var_43;
        MR_Word STATE_VARIABLE_LineCord_3_44;
        MR_String Var_46;
        MR_Word STATE_VARIABLE_LineCord_4_47;
        MR_String Var_49;
        MR_Word STATE_VARIABLE_LineCord_7_54;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_7, &STATE_VARIABLE_LineCord_1_41);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\100node ", SubSectionName_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_43)), STATE_VARIABLE_LineCord_1_41, &STATE_VARIABLE_LineCord_3_44);
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\100subsection ", SubSectionName_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_46)), STATE_VARIABLE_LineCord_3_44, &STATE_VARIABLE_LineCord_4_47);
        Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "\100cindex ", SubSectionName_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_49)), STATE_VARIABLE_LineCord_4_47, &STATE_VARIABLE_LineCord_2_42);
        if ((SubSectionCommentLines_32 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_LineCord_7_54 = STATE_VARIABLE_LineCord_2_42;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_6_52;
          MR_Word Var_53;
          MR_Box conv2_STATE_VARIABLE_LineCord_7_54;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_2_42, &STATE_VARIABLE_LineCord_6_52);
          {
            Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_53, 0) = ((MR_Box) (&libs__print_help_scalar_common_6[0]));
            MR_hl_field(0, Var_53, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_49_8_p_1_2));
            MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_53, 3) = ((MR_Box) (SubSectionNameIndent_3));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_53, SubSectionCommentLines_32, ((MR_Box) (STATE_VARIABLE_LineCord_6_52)), &conv2_STATE_VARIABLE_LineCord_7_54);
          STATE_VARIABLE_LineCord_7_54 = ((MR_Word) (conv2_STATE_VARIABLE_LineCord_7_54));
        }
        STATE_VARIABLE_LineCord_1_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_7_54, HelpTextLinesCord_36);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = SubSections_22;
      next_value_of_STATE_VARIABLE_Categories_0_5 = STATE_VARIABLE_Categories_1_29;
      next_value_of_STATE_VARIABLE_LineCord_0_7 = STATE_VARIABLE_LineCord_1_30;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Categories_0_5 = next_value_of_STATE_VARIABLE_Categories_0_5;
      STATE_VARIABLE_LineCord_0_7 = next_value_of_STATE_VARIABLE_LineCord_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_49_5_p_1(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_4,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_EffectiveLinesCord_5 = STATE_VARIABLE_EffectiveLinesCord_0_4;
    else
    {
      MR_Word OptdbRecord_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word OptdbRecords_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_EffectiveLinesCord_1_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1(What_2, OptdbRecord_13, STATE_VARIABLE_EffectiveLinesCord_0_4, &STATE_VARIABLE_EffectiveLinesCord_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OptdbRecords_14;
      next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4 = STATE_VARIABLE_EffectiveLinesCord_1_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_EffectiveLinesCord_0_4 = next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_113;

  conv2_LambdaHeadVar__2_113 = libs__print_help__IntroducedFrom__func__acc_help_message__876__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_113));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__is_bool_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LineCord_20;

  libs__print_help__acc_arg_align_text_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LineCord_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LineCord_20));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1(
  MR_Word What_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_43,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_44)
{
  MR_bool succeeded;
  MR_Word Params_10;
  MR_Word Option_12;
  MR_Word OptionData_13;
  MR_Word Help_14;
  MR_Word PublicOrPrivate_16;
  MR_Word DescPieces_17;
  MR_Word STATE_VARIABLE_LineCord_1_45;
  MR_Word STATE_VARIABLE_LineCord_2_54;

  libs__print_help__get_optdb_record_params_2_p_0(OptdbRecord_8, &Params_10);
  Option_12 = ((MR_Unsigned) ((MR_hl_field(0, OptdbRecord_8, 0))) & (MR_Integer) 1023);
  OptionData_13 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 1))));
  Help_14 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 2))));
  STATE_VARIABLE_LineCord_1_45 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  switch (MR_tag((MR_Word) Help_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PublicOrPrivate_16 = (MR_Integer) 1;
        DescPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_LineCord_2_54 = STATE_VARIABLE_LineCord_1_45;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ShortNames_19 = ((MR_Word) ((MR_hl_field(1, Help_14, 0))));
        MR_String LongName_20 = ((MR_String) ((MR_hl_field(1, Help_14, 1))));
        MR_Word AltLongNames_21 = ((MR_Word) ((MR_hl_field(1, Help_14, 2))));
        MR_Word STATE_VARIABLE_LineCord_3_57;
        MR_Word STATE_VARIABLE_LineCord_4_60;

        PublicOrPrivate_16 = ((MR_Unsigned) ((MR_hl_field(1, Help_14, 3))) & (MR_Integer) 1);
        DescPieces_17 = ((MR_Word) ((MR_hl_field(1, Help_14, 4))));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortNames_19, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_3_57);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_20, STATE_VARIABLE_LineCord_3_57, &STATE_VARIABLE_LineCord_4_60);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_21, STATE_VARIABLE_LineCord_4_60, &STATE_VARIABLE_LineCord_2_54);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_168 = ((MR_String) ((MR_hl_field(2, Help_14, 0))));

        DescPieces_17 = ((MR_Word) ((MR_hl_field(2, Help_14, 1))));
        PublicOrPrivate_16 = (MR_Integer) 0;
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_168, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeArg_22;
            MR_String ArgName_23 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_String LongName_119 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            {
              MaybeArg_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_22, 0) = ((MR_Box) (ArgName_23));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_22, LongName_119, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_193 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_193, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgName_118 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_188;
            MR_String LongName_190 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            {
              MaybeArg_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_188, 0) = ((MR_Box) (ArgName_118));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_188, LongName_190, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_LineCord_7_161;
            MR_String LongName_163 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_164 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_163, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_161);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_164, STATE_VARIABLE_LineCord_7_161, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ArgAligns_33 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word Var_95;
            MR_String LongName_143 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Box conv1_STATE_VARIABLE_LineCord_2_54;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_95, 0) = ((MR_Box) (&libs__print_help_scalar_common_4[0]));
              MR_hl_field(0, Var_95, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_1));
              MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_95, 3) = ((MR_Box) (Params_10));
              MR_hl_field(0, Var_95, 4) = ((MR_Box) (Option_12));
              MR_hl_field(0, Var_95, 5) = ((MR_Box) (LongName_143));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_95, ArgAligns_33, ((MR_Box) (STATE_VARIABLE_LineCord_1_45)), &conv1_STATE_VARIABLE_LineCord_2_54);
            STATE_VARIABLE_LineCord_2_54 = ((MR_Word) (conv1_STATE_VARIABLE_LineCord_2_54));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String AlignedText_25 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word Align_26;
            MR_Word STATE_VARIABLE_LineCord_12_76;
            MR_String LongName_134 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_135 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Align_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_26, 0) = ((MR_Box) (AlignedText_25));
            }
            libs__print_help__acc_long_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_26, LongName_134, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_12_76);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_135, STATE_VARIABLE_LineCord_12_76, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String NoAlignedText_27 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word ParamsNN_28;
            MR_String FirstLine0_29;
            MR_String SecondLine0_30;
            MR_String FirstLine_31;
            MR_String SecondLine_32;
            MR_Word Var_88;
            MR_Word STATE_VARIABLE_LineCord_17_93;
            MR_String LongName_141 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_String AlignedText_142 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word Var_146;
            MR_Word Var_148;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[0]));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_49_5_p_1_2));
              MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_88, 3) = ((MR_Box) (OptionData_13));
            }
            mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140libs.print_help.acc_help_message\'/5", (MR_String) "unexpected use of no_align_help");
            Var_146 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
            Var_148 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 1);
            {
              ParamsNN_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParamsNN_28, 0) = (MR_Box) (((((MR_Unsigned) (Var_146) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_148)))));
            }
            FirstLine0_29 = libs__print_help__long_option_name_line_4_f_0(ParamsNN_28, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_141);
            SecondLine0_30 = libs__print_help__long_negated_option_name_line_1_f_0(LongName_141);
            libs__print_help__add_aligned_text_3_p_0(AlignedText_142, FirstLine0_29, &FirstLine_31);
            libs__print_help__add_aligned_text_3_p_0(NoAlignedText_27, SecondLine0_30, &SecondLine_32);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_31)), STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_17_93);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_32)), STATE_VARIABLE_LineCord_17_93, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String AlignedText_169 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word Align_170;
            MR_Word STATE_VARIABLE_LineCord_12_171;
            MR_String LongName_173 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_174 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            {
              Align_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_170, 0) = ((MR_Box) (AlignedText_169));
            }
            libs__print_help__acc_long_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_170, LongName_173, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_12_171);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_174, STATE_VARIABLE_LineCord_12_171, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_80;
            MR_Word STATE_VARIABLE_LineCord_14_81;
            MR_Word STATE_VARIABLE_LineCord_15_84;
            MR_String LongName_137 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_138 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Char ShortName_139 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_String AlignedText_140 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (AlignedText_140));
            }
            libs__print_help__acc_short_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Var_80, ShortName_139, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_14_81);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_137, STATE_VARIABLE_LineCord_14_81, &STATE_VARIABLE_LineCord_15_84);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_138, STATE_VARIABLE_LineCord_15_84, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_LineCord_7_67;
            MR_String ArgName_120 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_String LongName_123 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_124 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_125;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            {
              MaybeArg_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_125, 0) = ((MR_Box) (ArgName_120));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_125, LongName_123, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_67);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_125, AltLongNames_124, STATE_VARIABLE_LineCord_7_67, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_LineCord_7_183;
            MR_String LongName_185 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_186 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_185, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_183);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_186, STATE_VARIABLE_LineCord_7_183, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String ArgName_121 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word STATE_VARIABLE_LineCord_7_177;
            MR_String LongName_179 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_180 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_181;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            {
              MaybeArg_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_181, 0) = ((MR_Box) (ArgName_121));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_181, LongName_179, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_177);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_181, AltLongNames_180, STATE_VARIABLE_LineCord_7_177, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Char ShortName_212 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_214;
            MR_Word STATE_VARIABLE_LineCord_10_216;
            MR_String LongName_218 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_219 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_212, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_214);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_218, STATE_VARIABLE_LineCord_9_214, &STATE_VARIABLE_LineCord_10_216);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_219, STATE_VARIABLE_LineCord_10_216, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Char ShortName_194 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_196;
            MR_Word STATE_VARIABLE_LineCord_10_198;
            MR_String LongName_200 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_201 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_194, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_196);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_200, STATE_VARIABLE_LineCord_9_196, &STATE_VARIABLE_LineCord_10_198);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_201, STATE_VARIABLE_LineCord_10_198, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String ArgName_127 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));
            MR_Char ShortName_203 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_205;
            MR_Word STATE_VARIABLE_LineCord_10_207;
            MR_String LongName_209 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_210 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Word MaybeArg_211;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            {
              MaybeArg_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_211, 0) = ((MR_Box) (ArgName_127));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, ShortName_203, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_205);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, LongName_209, STATE_VARIABLE_LineCord_9_205, &STATE_VARIABLE_LineCord_10_207);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, AltLongNames_210, STATE_VARIABLE_LineCord_10_207, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Char ShortName_24 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_71;
            MR_Word STATE_VARIABLE_LineCord_10_73;
            MR_String ArgName_128 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));
            MR_String LongName_130 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_131 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Word MaybeArg_132;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            {
              MaybeArg_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_132, 0) = ((MR_Box) (ArgName_128));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, ShortName_24, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_71);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, LongName_130, STATE_VARIABLE_LineCord_9_71, &STATE_VARIABLE_LineCord_10_73);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, AltLongNames_131, STATE_VARIABLE_LineCord_10_73, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String NameLine_18;
            MR_String Var_49;
            MR_String Var_52;
            MR_String Var_222;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 1))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            Var_49 = libs__print_help__single_indent_0_f_0();
            Var_52 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_12)));
            Var_222 = mercury__string__f_43_43_2_f_0((MR_String) "UNNAMED OPTION ", Var_52);
            NameLine_18 = mercury__string__f_43_43_2_f_0(Var_49, Var_222);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (NameLine_18)), STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
      }
      break;
  }
  switch (PublicOrPrivate_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (What_7 == (MR_Integer) 1);
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_2_54);
    if (succeeded)
      succeeded = (DescPieces_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_EffectiveLinesCord_44 = STATE_VARIABLE_EffectiveLinesCord_0_43;
    else
    {
      MR_Word EffDescPieces_35;
      MR_Word ReflowLines_38;
      MR_Word BlankLineCord_39;
      MR_Word STATE_VARIABLE_LineCord_21_110;
      MR_Word Var_111;
      MR_Word Var_117;
      MR_Word STATE_VARIABLE_LineCord_20_145;
      MR_String DescPrefix_34;

      DescPrefix_34 = libs__print_help__double_indent_0_f_0();
      if ((DescPieces_17 == (MR_Word) ((MR_Unsigned) 0U)))
        EffDescPieces_35 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[78]));
      else
        EffDescPieces_35 = DescPieces_17;
      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_4_p_1((MR_Integer) 71, EffDescPieces_35, &ReflowLines_38);
      BlankLineCord_39 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")));
      Var_111 = mercury__cord__from_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReflowLines_38);
      STATE_VARIABLE_LineCord_21_110 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_2_54, Var_111);
      switch (PublicOrPrivate_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_LineCord_20_145 = mercury__cord__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_2[66]), STATE_VARIABLE_LineCord_21_110);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_LineCord_20_145 = STATE_VARIABLE_LineCord_21_110;
          break;
      }
      Var_117 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BlankLineCord_39, STATE_VARIABLE_LineCord_20_145);
      *STATE_VARIABLE_EffectiveLinesCord_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_EffectiveLinesCord_0_43, Var_117);
    }
  }
  else
    *STATE_VARIABLE_EffectiveLinesCord_44 = STATE_VARIABLE_EffectiveLinesCord_0_43;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_49_4_p_1(
  MR_Integer LineLen_6,
  MR_Word InitialPieces_7,
  MR_Word * FinishedLines_8)
{
  MR_bool succeeded;
  MR_Word CurLine1_10;
  MR_Word FinishedLineCord1_11;
  MR_Word FinishedLineCord_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String FinishedLine_17;
  MR_Word Var_18;
  MR_Integer _CurLineLen_9;

  Var_14 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_15 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_9_p_1(LineLen_6, InitialPieces_7, (MR_Integer) 0, &_CurLineLen_9, Var_14, &CurLine1_10, Var_15, &FinishedLineCord1_11);
  Var_18 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurLine1_10);
  FinishedLine_17 = mercury__string__append_list_1_f_0(Var_18);
  succeeded = (strcmp(FinishedLine_17, (MR_String) "") == 0);
  if (succeeded)
    FinishedLineCord_12 = FinishedLineCord1_11;
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_17)), FinishedLineCord1_11, &FinishedLineCord_12);
  *FinishedLines_8 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinishedLineCord_12);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_9_p_1(
  MR_Integer LineLen_11,
  MR_Word Pieces_12,
  MR_Integer STATE_VARIABLE_CurLineLen_0_79,
  MR_Integer * STATE_VARIABLE_CurLineLen_80,
  MR_Word STATE_VARIABLE_CurLine_0_81,
  MR_Word * STATE_VARIABLE_CurLine_82,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_83,
  MR_Word * STATE_VARIABLE_FinishedLineCord_84)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Pieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurLineLen_80 = STATE_VARIABLE_CurLineLen_0_79;
      *STATE_VARIABLE_CurLine_82 = STATE_VARIABLE_CurLine_0_81;
      *STATE_VARIABLE_FinishedLineCord_84 = STATE_VARIABLE_FinishedLineCord_0_83;
    }
    else
    {
      MR_Word HeadPiece_16 = ((MR_Word) ((MR_hl_field(1, Pieces_12, 0))));
      MR_Word TailPieces_17 = ((MR_Word) ((MR_hl_field(1, Pieces_12, 1))));
      MR_Word STATE_VARIABLE_CurLine_1_85;
      MR_Integer STATE_VARIABLE_CurLineLen_1_86;
      MR_Word STATE_VARIABLE_FinishedLineCord_1_87;
      MR_Word next_value_of_Pieces_12;
      MR_Integer next_value_of_STATE_VARIABLE_CurLineLen_0_79;
      MR_Word next_value_of_STATE_VARIABLE_CurLine_0_81;
      MR_Word next_value_of_STATE_VARIABLE_FinishedLineCord_0_83;

      switch (MR_tag((MR_Word) HeadPiece_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String WordsStr_18 = ((MR_String) ((MR_hl_field(0, HeadPiece_16, 0))));
            MR_Word Words_19;

            Words_19 = mercury__string__words_1_f_0(WordsStr_18);
            libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_11, Words_19, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FixedStr_20 = ((MR_String) ((MR_hl_field(1, HeadPiece_16, 0))));

            libs__print_help__add_word_8_p_0(LineLen_11, FixedStr_20, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Option_68 = ((MR_String) ((MR_hl_field(2, HeadPiece_16, 0))));
            MR_Word Var_104;
            MR_Word Var_105;
            MR_String Str_389;

            {
              Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_105, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, Var_105, 1) = ((MR_Box) (Option_68));
            }
            {
              Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_104, 0) = ((MR_Box) (Var_105));
              MR_hl_field(1, Var_104, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
            }
            mercury__string__format_3_p_0((MR_String) "\140%s\'%s", Var_104, &Str_389);
            libs__print_help__add_word_8_p_0(LineLen_11, Str_389, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadPiece_16, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Option_317 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_324 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_390;
                MR_String Var_431;
                MR_String Var_432;

                Var_431 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_324);
                Var_432 = mercury__string__f_43_43_2_f_0(Option_317, Var_431);
                Str_390 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_432);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_390, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Str_67;
                MR_String Arg_69 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_Word Var_116;
                MR_Word Var_117;

                {
                  Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_117, 1) = ((MR_Box) (Arg_69));
                }
                {
                  Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_116, 0) = ((MR_Box) (Var_117));
                  MR_hl_field(1, Var_116, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s}%s", Var_116, &Str_67);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_67, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Arg_274 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_281 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_380;
                MR_String Var_454;
                MR_String Var_455;

                Var_454 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_281);
                Var_455 = mercury__string__f_43_43_2_f_0(Arg_274, Var_454);
                Str_380 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_455);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_380, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_130;
                MR_Word Var_131;
                MR_Word Var_132;
                MR_Word Var_133;
                MR_String Option_258 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Arg_259 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_391;

                {
                  Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_131, 1) = ((MR_Box) (Option_258));
                }
                {
                  Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_133, 1) = ((MR_Box) (Arg_259));
                }
                {
                  Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_132, 0) = ((MR_Box) (Var_133));
                  MR_hl_field(1, Var_132, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                {
                  Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
                  MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_132));
                }
                mercury__string__format_3_p_0((MR_String) "\140%s \100samp{%s}\'%s", Var_130, &Str_391);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_391, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Suffix_333 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Option_334 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Arg_335 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_392;
                MR_String Var_424;
                MR_String Var_425;
                MR_String Var_427;
                MR_String Var_428;

                Var_424 = mercury__string__f_43_43_2_f_0((MR_String) "}\'", Suffix_333);
                Var_425 = mercury__string__f_43_43_2_f_0(Arg_335, Var_424);
                Var_427 = mercury__string__f_43_43_2_f_0((MR_String) " \100samp{", Var_425);
                Var_428 = mercury__string__f_43_43_2_f_0(Option_334, Var_427);
                Str_392 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_428);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_392, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String Text_65 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_Word Var_98;
                MR_Word Var_99;
                MR_String Str_393;

                {
                  Var_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_99, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_99, 1) = ((MR_Box) (Text_65));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_98, 0) = ((MR_Box) (Var_99));
                  MR_hl_field(1, Var_98, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\140\140%s\'\'%s", Var_98, &Str_393);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_393, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String Text_336 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_337 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_394;
                MR_String Var_420;
                MR_String Var_421;

                Var_420 = mercury__string__f_43_43_2_f_0((MR_String) "\'\'", Suffix_337);
                Var_421 = mercury__string__f_43_43_2_f_0(Text_336, Var_420);
                Str_394 = mercury__string__f_43_43_2_f_0((MR_String) "\140\140", Var_421);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_394, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String RefName_75 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_Word Var_226;
                MR_Word Var_227;
                MR_String Str_395;

                {
                  Var_227 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_227, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_227, 1) = ((MR_Box) (RefName_75));
                }
                {
                  Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_226, 0) = ((MR_Box) (Var_227));
                  MR_hl_field(1, Var_226, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100ref{%s}%s", Var_226, &Str_395);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_395, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String RefName_347 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Suffix_355 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 4))));
                MR_String Str_396;
                MR_String Var_416;
                MR_String Var_417;

                Var_416 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_355);
                Var_417 = mercury__string__f_43_43_2_f_0(RefName_347, Var_416);
                Str_396 = mercury__string__f_43_43_2_f_0((MR_String) "\100ref{", Var_417);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_396, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Var_232;
                MR_Word Var_233;
                MR_String RefName_271 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_401;

                {
                  Var_233 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_233, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_233, 1) = ((MR_Box) (RefName_271));
                }
                {
                  Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_232, 0) = ((MR_Box) (Var_233));
                  MR_hl_field(1, Var_232, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100xref{%s}%s", Var_232, &Str_401);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_401, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 10:
              {
                MR_String Suffix_378 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String RefName_379 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_402;
                MR_String Var_404;
                MR_String Var_405;

                Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_378);
                Var_405 = mercury__string__f_43_43_2_f_0(RefName_379, Var_404);
                Str_402 = mercury__string__f_43_43_2_f_0((MR_String) "\100xref{", Var_405);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_402, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word Var_144;
                MR_Word Var_145;
                MR_String Option_261 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_397;

                {
                  Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_145, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_145, 1) = ((MR_Box) (Option_261));
                }
                {
                  Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_144, 0) = ((MR_Box) (Var_145));
                  MR_hl_field(1, Var_144, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100samp{%s}%s", Var_144, &Str_397);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_397, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String Suffix_362 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Option_363 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_398;
                MR_String Var_412;
                MR_String Var_413;

                Var_412 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_362);
                Var_413 = mercury__string__f_43_43_2_f_0(Option_363, Var_412);
                Str_398 = mercury__string__f_43_43_2_f_0((MR_String) "\100samp{", Var_413);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_398, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_Word Var_156;
                MR_Word Var_157;
                MR_String Text_262 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_383;

                {
                  Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_157, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_157, 1) = ((MR_Box) (Text_262));
                }
                {
                  Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_156, 0) = ((MR_Box) (Var_157));
                  MR_hl_field(1, Var_156, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100emph{%s}%s", Var_156, &Str_383);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_383, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_String Text_296 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_297 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_384;
                MR_String Var_446;
                MR_String Var_447;

                Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_297);
                Var_447 = mercury__string__f_43_43_2_f_0(Text_296, Var_446);
                Str_384 = mercury__string__f_43_43_2_f_0((MR_String) "\100emph{", Var_447);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_384, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_Word Var_192;
                MR_Word Var_193;
                MR_String Var_267 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_399;

                {
                  Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_193, 1) = ((MR_Box) (Var_267));
                }
                {
                  Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_192, 0) = ((MR_Box) (Var_193));
                  MR_hl_field(1, Var_192, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100var{%s}%s", Var_192, &Str_399);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_399, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_String Suffix_370 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_371 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_400;
                MR_String Var_408;
                MR_String Var_409;

                Var_408 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_370);
                Var_409 = mercury__string__f_43_43_2_f_0(Var_371, Var_408);
                Str_400 = mercury__string__f_43_43_2_f_0((MR_String) "\100var{", Var_409);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_400, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_String Var_71 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_Word Var_180;
                MR_Word Var_181;
                MR_String Str_385;

                {
                  Var_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_181, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_181, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_180, 0) = ((MR_Box) (Var_181));
                  MR_hl_field(1, Var_180, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100file{%s}%s", Var_180, &Str_385);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_385, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Var_298 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_305 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_386;
                MR_String Var_442;
                MR_String Var_443;

                Var_442 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_305);
                Var_443 = mercury__string__f_43_43_2_f_0(Var_298, Var_442);
                Str_386 = mercury__string__f_43_43_2_f_0((MR_String) "\100file{", Var_443);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_386, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 19:
              {
                MR_String Code_70 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_Word Var_168;
                MR_Word Var_169;
                MR_String Str_381;

                {
                  Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_169, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_169, 1) = ((MR_Box) (Code_70));
                }
                {
                  Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
                  MR_hl_field(1, Var_168, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                mercury__string__format_3_p_0((MR_String) "\100code{%s}%s", Var_168, &Str_381);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_381, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Code_282 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_289 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Str_382;
                MR_String Var_450;
                MR_String Var_451;

                Var_450 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_289);
                Var_451 = mercury__string__f_43_43_2_f_0(Code_282, Var_450);
                Str_382 = mercury__string__f_43_43_2_f_0((MR_String) "\100code{", Var_451);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_382, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 21:
              {
                MR_String File_72 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Ext_73 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_Word Var_206;
                MR_Word Var_207;
                MR_Word Var_208;
                MR_Word Var_209;
                MR_String Str_387;

                {
                  Var_207 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_207, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_207, 1) = ((MR_Box) (File_72));
                }
                {
                  Var_209 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_209, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                  MR_hl_field(3, Var_209, 1) = ((MR_Box) (Ext_73));
                }
                {
                  Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_208, 0) = ((MR_Box) (Var_209));
                  MR_hl_field(1, Var_208, 1) = ((MR_Box) (MR_mkword(1, &libs__print_help_scalar_common_1[80])));
                }
                {
                  Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_206, 0) = ((MR_Box) (Var_207));
                  MR_hl_field(1, Var_206, 1) = ((MR_Box) (Var_208));
                }
                mercury__string__format_3_p_0((MR_String) "\100file{\100var{%s}.%s}%s", Var_206, &Str_387);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_387, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String File_306 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Ext_307 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Suffix_316 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Str_388;
                MR_String Var_435;
                MR_String Var_436;
                MR_String Var_438;
                MR_String Var_439;

                Var_435 = mercury__string__f_43_43_2_f_0((MR_String) "}", Suffix_316);
                Var_436 = mercury__string__f_43_43_2_f_0(Ext_307, Var_435);
                Var_438 = mercury__string__f_43_43_2_f_0((MR_String) "}.", Var_436);
                Var_439 = mercury__string__f_43_43_2_f_0(File_306, Var_438);
                Str_388 = mercury__string__f_43_43_2_f_0((MR_String) "\100file{\100var{", Var_439);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_388, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 23:
              {
                STATE_VARIABLE_CurLineLen_1_86 = STATE_VARIABLE_CurLineLen_0_79;
                STATE_VARIABLE_CurLine_1_85 = STATE_VARIABLE_CurLine_0_81;
                STATE_VARIABLE_FinishedLineCord_1_87 = STATE_VARIABLE_FinishedLineCord_0_83;
              }
              break;
            case (MR_Integer) 24:
              {
                MR_Word TexInfoPieces_78 = ((MR_Word) ((MR_hl_field(3, HeadPiece_16, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_9_p_1(LineLen_11, TexInfoPieces_78, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word TexInfoPieces_273 = ((MR_Word) ((MR_hl_field(3, HeadPiece_16, 2))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_49_9_p_1(LineLen_11, TexInfoPieces_273, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Pieces_12 = TailPieces_17;
      next_value_of_STATE_VARIABLE_CurLineLen_0_79 = STATE_VARIABLE_CurLineLen_1_86;
      next_value_of_STATE_VARIABLE_CurLine_0_81 = STATE_VARIABLE_CurLine_1_85;
      next_value_of_STATE_VARIABLE_FinishedLineCord_0_83 = STATE_VARIABLE_FinishedLineCord_1_87;
      Pieces_12 = next_value_of_Pieces_12;
      STATE_VARIABLE_CurLineLen_0_79 = next_value_of_STATE_VARIABLE_CurLineLen_0_79;
      STATE_VARIABLE_CurLine_0_81 = next_value_of_STATE_VARIABLE_CurLine_0_81;
      STATE_VARIABLE_FinishedLineCord_0_83 = next_value_of_STATE_VARIABLE_FinishedLineCord_0_83;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_1(
  void * env_ptr_arg)
{
  struct libs__print_help__long_usage_4_p_0_2_env_0_s * env_ptr = (struct libs__print_help__long_usage_4_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->libs__print_help__long_usage_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__print_help__long_usage_4_p_0_2_env_0__conv0_LambdaHeadVar__1_16));
  ((env_ptr)->libs__print_help__long_usage_4_p_0_2_env_0__cont)((env_ptr)->libs__print_help__long_usage_4_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
libs__print_help__long_usage_4_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct libs__print_help__long_usage_4_p_0_2_env_0_s env;

  (env).libs__print_help__long_usage_4_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).libs__print_help__long_usage_4_p_0_2_env_0__cont = cont;
  (env).libs__print_help__long_usage_4_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    libs__print_help__IntroducedFrom__pred__document_requested_options__427__1_1_p_0(&(env).libs__print_help__long_usage_4_p_0_2_env_0__conv0_LambdaHeadVar__1_16, libs__print_help__long_usage_4_p_0_1, &env);
  }
}

void MR_CALL 
libs__print_help__long_usage_4_p_0(
  MR_Word ProgressStream_5,
  MR_Word What_6)
{
  MR_Word HeaderLines_8;
  MR_Word OptionsLines_9;
  MR_Word Lines_10;
  MR_Word AllCategoriesSet_34;
  MR_Word UndoneCategoriesSet_35;
  MR_Word OptionsLineCord_36;
  MR_Word UndoneCategories_37;
  MR_Word Var_38;
  MR_Word Var_39;

  HeaderLines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[144])), (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[150])));
  mercury__solutions__solutions_set_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_2[65]), &AllCategoriesSet_34);
  Var_38 = libs__print_help__all_chapters_0_f_0();
  Var_39 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0(What_6, Var_38, AllCategoriesSet_34, &UndoneCategoriesSet_35, Var_39, &OptionsLineCord_36);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), UndoneCategoriesSet_35, &UndoneCategories_37);
  if (!((UndoneCategories_37 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_String Var_41;
    MR_String Var_43;

    Var_43 = mercury__string__string_1_f_0((MR_Word) (&libs__print_help_scalar_common_1[0]), ((MR_Box) (UndoneCategories_37)));
    Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "undone: ", Var_43);
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.document_requested_options\'/3", Var_41);
      return;
    }
  }
  OptionsLines_9 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptionsLineCord_36);
  Lines_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeaderLines_8, OptionsLines_9);
  libs__print_help__write_lines_4_p_0(ProgressStream_5, Lines_10);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_LineCord_10;

  libs__print_help__acc_prefixed_line_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_LineCord_10);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_LineCord_10));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_2(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0_1(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_7_p_0(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Categories_0_4,
  MR_Word * STATE_VARIABLE_Categories_5,
  MR_Word STATE_VARIABLE_LineCord_0_6,
  MR_Word * STATE_VARIABLE_LineCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LineCord_7 = STATE_VARIABLE_LineCord_0_6;
      *STATE_VARIABLE_Categories_5 = STATE_VARIABLE_Categories_0_4;
    }
    else
    {
      MR_Word Section_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Sections_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Categories_1_26;
      MR_Word STATE_VARIABLE_LineCord_1_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_4;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_6;

      if (((MR_tag((MR_Word) Section_18)) == (MR_Integer) 0))
      {
        MR_Word SubSection_28 = (MR_Word) ((MR_Word) (Section_18));
        MR_String SubSectionName_46 = ((MR_String) ((MR_hl_field(0, SubSection_28, 0))));
        MR_Word SubSectionCommentLines_47 = ((MR_Word) ((MR_hl_field(0, SubSection_28, 1))));
        MR_Word SubSectionCategories_48 = ((MR_Word) ((MR_hl_field(0, SubSection_28, 2))));
        MR_Word OptdbRecordSets_49;
        MR_Word OptdbRecordSet_50;
        MR_Word HelpTextLinesCord_51;
        MR_Word Var_53;
        MR_Word Var_54;

        mercury__set__det_remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), SubSectionCategories_48, STATE_VARIABLE_Categories_0_4, &STATE_VARIABLE_Categories_1_26);
        mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[2]), (MR_Word) (&libs__print_help_scalar_common_2[64]), SubSectionCategories_48, &OptdbRecordSets_49);
        OptdbRecordSet_50 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_49);
        Var_53 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_50);
        Var_54 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_48_5_p_0(What_2, Var_53, Var_54, &HelpTextLinesCord_51);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HelpTextLinesCord_51);
        if (succeeded)
          STATE_VARIABLE_LineCord_1_27 = STATE_VARIABLE_LineCord_0_6;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_1_56;
          MR_String Var_57;
          MR_Word STATE_VARIABLE_LineCord_2_58;
          MR_Word STATE_VARIABLE_LineCord_7_62;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_56);
          Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "", SubSectionName_46);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_57)), STATE_VARIABLE_LineCord_1_56, &STATE_VARIABLE_LineCord_2_58);
          if ((SubSectionCommentLines_47 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LineCord_7_62 = STATE_VARIABLE_LineCord_2_58;
          else
          {
            MR_Word STATE_VARIABLE_LineCord_6_60;
            MR_Box conv2_STATE_VARIABLE_LineCord_7_62;

            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_2_58, &STATE_VARIABLE_LineCord_6_60);
            mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[1]), SubSectionCommentLines_47, ((MR_Box) (STATE_VARIABLE_LineCord_6_60)), &conv2_STATE_VARIABLE_LineCord_7_62);
            STATE_VARIABLE_LineCord_7_62 = ((MR_Word) (conv2_STATE_VARIABLE_LineCord_7_62));
          }
          STATE_VARIABLE_LineCord_1_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_7_62, HelpTextLinesCord_51);
        }
      }
      else
      {
        MR_String SectionName_29 = ((MR_String) ((MR_hl_field(1, Section_18, 0))));
        MR_Word SectionCommentLines_30 = ((MR_Word) ((MR_hl_field(1, Section_18, 1))));
        MR_Word SubSections_31 = ((MR_Word) ((MR_hl_field(1, Section_18, 2))));
        MR_Word SubSectionsLineCord_33;
        MR_Word Var_35;

        Var_35 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0(What_2, (MR_String) "    ", SubSections_31, STATE_VARIABLE_Categories_0_4, &STATE_VARIABLE_Categories_1_26, Var_35, &SubSectionsLineCord_33);
        succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubSectionsLineCord_33);
        if (succeeded)
          STATE_VARIABLE_LineCord_1_27 = STATE_VARIABLE_LineCord_0_6;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_2_37;
          MR_Word STATE_VARIABLE_LineCord_3_38;
          MR_Word STATE_VARIABLE_LineCord_8_42;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_2_37);
          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SectionName_29)), STATE_VARIABLE_LineCord_2_37, &STATE_VARIABLE_LineCord_3_38);
          if ((SectionCommentLines_30 == (MR_Word) ((MR_Unsigned) 0U)))
            STATE_VARIABLE_LineCord_8_42 = STATE_VARIABLE_LineCord_3_38;
          else
          {
            MR_Word STATE_VARIABLE_LineCord_7_40;
            MR_Box conv4_STATE_VARIABLE_LineCord_8_42;

            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_3_38, &STATE_VARIABLE_LineCord_7_40);
            mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), (MR_Word) (&libs__print_help_scalar_common_5[2]), SectionCommentLines_30, ((MR_Box) (STATE_VARIABLE_LineCord_7_40)), &conv4_STATE_VARIABLE_LineCord_8_42);
            STATE_VARIABLE_LineCord_8_42 = ((MR_Word) (conv4_STATE_VARIABLE_LineCord_8_42));
          }
          STATE_VARIABLE_LineCord_1_27 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_8_42, SubSectionsLineCord_33);
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Sections_19;
      next_value_of_STATE_VARIABLE_Categories_0_4 = STATE_VARIABLE_Categories_1_26;
      next_value_of_STATE_VARIABLE_LineCord_0_6 = STATE_VARIABLE_LineCord_1_27;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Categories_0_4 = next_value_of_STATE_VARIABLE_Categories_0_4;
      STATE_VARIABLE_LineCord_0_6 = next_value_of_STATE_VARIABLE_LineCord_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_2(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_1(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0(
  MR_Word What_2,
  MR_String SubSectionNameIndent_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Categories_0_5,
  MR_Word * STATE_VARIABLE_Categories_6,
  MR_Word STATE_VARIABLE_LineCord_0_7,
  MR_Word * STATE_VARIABLE_LineCord_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_LineCord_8 = STATE_VARIABLE_LineCord_0_7;
      *STATE_VARIABLE_Categories_6 = STATE_VARIABLE_Categories_0_5;
    }
    else
    {
      MR_Word SubSection_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word SubSections_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_Categories_1_29;
      MR_Word STATE_VARIABLE_LineCord_1_30;
      MR_String SubSectionName_31 = ((MR_String) ((MR_hl_field(0, SubSection_21, 0))));
      MR_Word SubSectionCommentLines_32 = ((MR_Word) ((MR_hl_field(0, SubSection_21, 1))));
      MR_Word SubSectionCategories_33 = ((MR_Word) ((MR_hl_field(0, SubSection_21, 2))));
      MR_Word OptdbRecordSets_34;
      MR_Word OptdbRecordSet_35;
      MR_Word HelpTextLinesCord_36;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_Categories_0_5;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_7;

      mercury__set__det_remove_list_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), SubSectionCategories_33, STATE_VARIABLE_Categories_0_5, &STATE_VARIABLE_Categories_1_29);
      mercury__list__map_3_p_0((MR_Word) (&libs__option_categories__libs__option_categories__type_ctor_info_option_category_0), (MR_Word) (&libs__print_help_scalar_common_1[2]), (MR_Word) (&libs__print_help_scalar_common_2[63]), SubSectionCategories_33, &OptdbRecordSets_34);
      OptdbRecordSet_35 = mercury__set__union_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSets_34);
      Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0), OptdbRecordSet_35);
      Var_39 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_48_5_p_0(What_2, Var_38, Var_39, &HelpTextLinesCord_36);
      succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HelpTextLinesCord_36);
      if (succeeded)
        STATE_VARIABLE_LineCord_1_30 = STATE_VARIABLE_LineCord_0_7;
      else
      {
        MR_Word STATE_VARIABLE_LineCord_1_41;
        MR_String Var_42;
        MR_Word STATE_VARIABLE_LineCord_2_43;
        MR_Word STATE_VARIABLE_LineCord_7_47;

        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_0_7, &STATE_VARIABLE_LineCord_1_41);
        Var_42 = mercury__string__f_43_43_2_f_0(SubSectionNameIndent_3, SubSectionName_31);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_42)), STATE_VARIABLE_LineCord_1_41, &STATE_VARIABLE_LineCord_2_43);
        if ((SubSectionCommentLines_32 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_LineCord_7_47 = STATE_VARIABLE_LineCord_2_43;
        else
        {
          MR_Word STATE_VARIABLE_LineCord_6_45;
          MR_Word Var_46;
          MR_Box conv2_STATE_VARIABLE_LineCord_7_47;

          mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")), STATE_VARIABLE_LineCord_2_43, &STATE_VARIABLE_LineCord_6_45);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_46, 0) = ((MR_Box) (&libs__print_help_scalar_common_6[0]));
            MR_hl_field(0, Var_46, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_115_117_98_115_101_99_116_105_111_110_115_95_95_91_49_93_95_48_8_p_0_2));
            MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_46, 3) = ((MR_Box) (SubSectionNameIndent_3));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_46, SubSectionCommentLines_32, ((MR_Box) (STATE_VARIABLE_LineCord_6_45)), &conv2_STATE_VARIABLE_LineCord_7_47);
          STATE_VARIABLE_LineCord_7_47 = ((MR_Word) (conv2_STATE_VARIABLE_LineCord_7_47));
        }
        STATE_VARIABLE_LineCord_1_30 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_7_47, HelpTextLinesCord_36);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = SubSections_22;
      next_value_of_STATE_VARIABLE_Categories_0_5 = STATE_VARIABLE_Categories_1_29;
      next_value_of_STATE_VARIABLE_LineCord_0_7 = STATE_VARIABLE_LineCord_1_30;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_Categories_0_5 = next_value_of_STATE_VARIABLE_Categories_0_5;
      STATE_VARIABLE_LineCord_0_7 = next_value_of_STATE_VARIABLE_LineCord_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word What_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_4,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_EffectiveLinesCord_5 = STATE_VARIABLE_EffectiveLinesCord_0_4;
    else
    {
      MR_Word OptdbRecord_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word OptdbRecords_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_EffectiveLinesCord_1_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0(What_2, OptdbRecord_13, STATE_VARIABLE_EffectiveLinesCord_0_4, &STATE_VARIABLE_EffectiveLinesCord_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = OptdbRecords_14;
      next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4 = STATE_VARIABLE_EffectiveLinesCord_1_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_EffectiveLinesCord_0_4 = next_value_of_STATE_VARIABLE_EffectiveLinesCord_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_3(
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__print_help__is_bool_1_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))));
  return succeeded;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_LineCord_20;

  libs__print_help__acc_arg_align_text_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_LineCord_20);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_LineCord_20));
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0(
  MR_Word What_7,
  MR_Word OptdbRecord_8,
  MR_Word STATE_VARIABLE_EffectiveLinesCord_0_43,
  MR_Word * STATE_VARIABLE_EffectiveLinesCord_44)
{
  MR_bool succeeded;
  MR_Word Params_10;
  MR_Word Option_12;
  MR_Word OptionData_13;
  MR_Word Help_14;
  MR_Word PublicOrPrivate_16;
  MR_Word DescPieces_17;
  MR_Word STATE_VARIABLE_LineCord_1_45;
  MR_Word STATE_VARIABLE_LineCord_2_54;

  libs__print_help__get_optdb_record_params_2_p_0(OptdbRecord_8, &Params_10);
  Option_12 = ((MR_Unsigned) ((MR_hl_field(0, OptdbRecord_8, 0))) & (MR_Integer) 1023);
  OptionData_13 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 1))));
  Help_14 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_8, 2))));
  STATE_VARIABLE_LineCord_1_45 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  switch (MR_tag((MR_Word) Help_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        PublicOrPrivate_16 = (MR_Integer) 1;
        DescPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_LineCord_2_54 = STATE_VARIABLE_LineCord_1_45;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ShortNames_19 = ((MR_Word) ((MR_hl_field(1, Help_14, 0))));
        MR_String LongName_20 = ((MR_String) ((MR_hl_field(1, Help_14, 1))));
        MR_Word AltLongNames_21 = ((MR_Word) ((MR_hl_field(1, Help_14, 2))));
        MR_Word STATE_VARIABLE_LineCord_3_57;
        MR_Word STATE_VARIABLE_LineCord_4_60;

        PublicOrPrivate_16 = ((MR_Unsigned) ((MR_hl_field(1, Help_14, 3))) & (MR_Integer) 1);
        DescPieces_17 = ((MR_Word) ((MR_hl_field(1, Help_14, 4))));
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortNames_19, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_3_57);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_20, STATE_VARIABLE_LineCord_3_57, &STATE_VARIABLE_LineCord_4_60);
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_21, STATE_VARIABLE_LineCord_4_60, &STATE_VARIABLE_LineCord_2_54);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String LongName_168 = ((MR_String) ((MR_hl_field(2, Help_14, 0))));

        DescPieces_17 = ((MR_Word) ((MR_hl_field(2, Help_14, 1))));
        PublicOrPrivate_16 = (MR_Integer) 0;
        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_168, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Help_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word MaybeArg_22;
            MR_String ArgName_23 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_String LongName_119 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            {
              MaybeArg_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_22, 0) = ((MR_Box) (ArgName_23));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_22, LongName_119, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String LongName_193 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_193, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgName_118 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_188;
            MR_String LongName_190 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            {
              MaybeArg_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_188, 0) = ((MR_Box) (ArgName_118));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_188, LongName_190, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word STATE_VARIABLE_LineCord_7_161;
            MR_String LongName_163 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_164 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_163, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_161);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_164, STATE_VARIABLE_LineCord_7_161, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word ArgAligns_33 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word Var_95;
            MR_String LongName_143 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Box conv1_STATE_VARIABLE_LineCord_2_54;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_95 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_95, 0) = ((MR_Box) (&libs__print_help_scalar_common_4[0]));
              MR_hl_field(0, Var_95, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_1));
              MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_95, 3) = ((MR_Box) (Params_10));
              MR_hl_field(0, Var_95, 4) = ((MR_Box) (Option_12));
              MR_hl_field(0, Var_95, 5) = ((MR_Box) (LongName_143));
            }
            mercury__list__foldl_4_p_0((MR_Word) (&libs__optdb_help__libs__optdb_help__type_ctor_info_arg_align_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_95, ArgAligns_33, ((MR_Box) (STATE_VARIABLE_LineCord_1_45)), &conv1_STATE_VARIABLE_LineCord_2_54);
            STATE_VARIABLE_LineCord_2_54 = ((MR_Word) (conv1_STATE_VARIABLE_LineCord_2_54));
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String AlignedText_25 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word Align_26;
            MR_Word STATE_VARIABLE_LineCord_12_76;
            MR_String LongName_134 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_135 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Align_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_26, 0) = ((MR_Box) (AlignedText_25));
            }
            libs__print_help__acc_long_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_26, LongName_134, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_12_76);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_135, STATE_VARIABLE_LineCord_12_76, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String NoAlignedText_27 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word ParamsNN_28;
            MR_String FirstLine0_29;
            MR_String SecondLine0_30;
            MR_String FirstLine_31;
            MR_String SecondLine_32;
            MR_Word Var_88;
            MR_Word STATE_VARIABLE_LineCord_17_93;
            MR_String LongName_141 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_String AlignedText_142 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word Var_146;
            MR_Word Var_148;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_88 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_88, 0) = ((MR_Box) (&libs__print_help_scalar_common_5[0]));
              MR_hl_field(0, Var_88, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_2));
              MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_88, 3) = ((MR_Box) (OptionData_13));
            }
            mercury__require__expect_3_p_0(Var_88, (MR_String) "predicate \140libs.print_help.acc_help_message\'/5", (MR_String) "unexpected use of no_align_help");
            Var_146 = ((((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) >> 2)) & (MR_Integer) 1);
            Var_148 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, 0))) & (MR_Integer) 1);
            {
              ParamsNN_28 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ParamsNN_28, 0) = (MR_Box) (((((MR_Unsigned) (Var_146) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_148)))));
            }
            FirstLine0_29 = libs__print_help__long_option_name_line_4_f_0(ParamsNN_28, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_141);
            SecondLine0_30 = libs__print_help__long_negated_option_name_line_1_f_0(LongName_141);
            libs__print_help__add_aligned_text_3_p_0(AlignedText_142, FirstLine0_29, &FirstLine_31);
            libs__print_help__add_aligned_text_3_p_0(NoAlignedText_27, SecondLine0_30, &SecondLine_32);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_31)), STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_17_93);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_32)), STATE_VARIABLE_LineCord_17_93, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String AlignedText_169 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word Align_170;
            MR_Word STATE_VARIABLE_LineCord_12_171;
            MR_String LongName_173 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_174 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            {
              Align_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Align_170, 0) = ((MR_Box) (AlignedText_169));
            }
            libs__print_help__acc_long_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Align_170, LongName_173, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_12_171);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_174, STATE_VARIABLE_LineCord_12_171, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Var_80;
            MR_Word STATE_VARIABLE_LineCord_14_81;
            MR_Word STATE_VARIABLE_LineCord_15_84;
            MR_String LongName_137 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_138 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Char ShortName_139 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_String AlignedText_140 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            {
              Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_80, 0) = ((MR_Box) (AlignedText_140));
            }
            libs__print_help__acc_short_option_name_7_p_1(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), Var_80, ShortName_139, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_14_81);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_137, STATE_VARIABLE_LineCord_14_81, &STATE_VARIABLE_LineCord_15_84);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_138, STATE_VARIABLE_LineCord_15_84, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word STATE_VARIABLE_LineCord_7_67;
            MR_String ArgName_120 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_String LongName_123 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_124 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_125;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            {
              MaybeArg_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_125, 0) = ((MR_Box) (ArgName_120));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_125, LongName_123, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_67);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_125, AltLongNames_124, STATE_VARIABLE_LineCord_7_67, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word STATE_VARIABLE_LineCord_7_183;
            MR_String LongName_185 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_186 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_185, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_183);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_186, STATE_VARIABLE_LineCord_7_183, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String ArgName_121 = ((MR_String) ((MR_hl_field(3, Help_14, 3))));
            MR_Word STATE_VARIABLE_LineCord_7_177;
            MR_String LongName_179 = ((MR_String) ((MR_hl_field(3, Help_14, 1))));
            MR_Word AltLongNames_180 = ((MR_Word) ((MR_hl_field(3, Help_14, 2))));
            MR_Word MaybeArg_181;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            {
              MaybeArg_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_181, 0) = ((MR_Box) (ArgName_121));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_181, LongName_179, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_7_177);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_181, AltLongNames_180, STATE_VARIABLE_LineCord_7_177, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Char ShortName_212 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_214;
            MR_Word STATE_VARIABLE_LineCord_10_216;
            MR_String LongName_218 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_219 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_212, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_214);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_218, STATE_VARIABLE_LineCord_9_214, &STATE_VARIABLE_LineCord_10_216);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_219, STATE_VARIABLE_LineCord_10_216, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Char ShortName_194 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_196;
            MR_Word STATE_VARIABLE_LineCord_10_198;
            MR_String LongName_200 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_201 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 4))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), ShortName_194, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_196);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), LongName_200, STATE_VARIABLE_LineCord_9_196, &STATE_VARIABLE_LineCord_10_198);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, (MR_Word) ((MR_Unsigned) 0U), AltLongNames_201, STATE_VARIABLE_LineCord_10_198, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String ArgName_127 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));
            MR_Char ShortName_203 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_205;
            MR_Word STATE_VARIABLE_LineCord_10_207;
            MR_String LongName_209 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_210 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Word MaybeArg_211;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            {
              MaybeArg_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_211, 0) = ((MR_Box) (ArgName_127));
            }
            PublicOrPrivate_16 = (MR_Integer) 0;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, ShortName_203, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_205);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, LongName_209, STATE_VARIABLE_LineCord_9_205, &STATE_VARIABLE_LineCord_10_207);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_211, AltLongNames_210, STATE_VARIABLE_LineCord_10_207, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Char ShortName_24 = ((MR_Char) (MR_Word) (MR_hl_field(3, Help_14, 1)));
            MR_Word STATE_VARIABLE_LineCord_9_71;
            MR_Word STATE_VARIABLE_LineCord_10_73;
            MR_String ArgName_128 = ((MR_String) ((MR_hl_field(3, Help_14, 4))));
            MR_String LongName_130 = ((MR_String) ((MR_hl_field(3, Help_14, 2))));
            MR_Word AltLongNames_131 = ((MR_Word) ((MR_hl_field(3, Help_14, 3))));
            MR_Word MaybeArg_132;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 5))));
            {
              MaybeArg_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeArg_132, 0) = ((MR_Box) (ArgName_128));
            }
            PublicOrPrivate_16 = (MR_Integer) 1;
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, ShortName_24, STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_9_71);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, LongName_130, STATE_VARIABLE_LineCord_9_71, &STATE_VARIABLE_LineCord_10_73);
            libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(Params_10, Option_12, MaybeArg_132, AltLongNames_131, STATE_VARIABLE_LineCord_10_73, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_String NameLine_18;
            MR_String Var_49;
            MR_String Var_52;
            MR_String Var_222;

            DescPieces_17 = ((MR_Word) ((MR_hl_field(3, Help_14, 1))));
            PublicOrPrivate_16 = (MR_Integer) 1;
            Var_49 = libs__print_help__single_indent_0_f_0();
            Var_52 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_12)));
            Var_222 = mercury__string__f_43_43_2_f_0((MR_String) "UNNAMED OPTION ", Var_52);
            NameLine_18 = mercury__string__f_43_43_2_f_0(Var_49, Var_222);
            mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (NameLine_18)), STATE_VARIABLE_LineCord_1_45, &STATE_VARIABLE_LineCord_2_54);
          }
          break;
      }
      break;
  }
  switch (PublicOrPrivate_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (What_7 == (MR_Integer) 1);
      break;
    case (MR_Integer) 0:
      succeeded = MR_TRUE;
      break;
  }
  if (succeeded)
  {
    succeeded = mercury__cord__is_empty_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_LineCord_2_54);
    if (succeeded)
      succeeded = (DescPieces_17 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *STATE_VARIABLE_EffectiveLinesCord_44 = STATE_VARIABLE_EffectiveLinesCord_0_43;
    else
    {
      MR_String DescPrefix_34;
      MR_Word EffDescPieces_35;
      MR_Word ReflowLines_38;
      MR_Word BlankLineCord_39;
      MR_Word PrivatePrefixCord_40;
      MR_Word Var_102;
      MR_Word STATE_VARIABLE_LineCord_20_103;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Box conv3_STATE_VARIABLE_LineCord_20_103;

      DescPrefix_34 = libs__print_help__double_indent_0_f_0();
      if ((DescPieces_17 == (MR_Word) ((MR_Unsigned) 0U)))
        EffDescPieces_35 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[78]));
      else
        EffDescPieces_35 = DescPieces_17;
      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_4_p_0((MR_Integer) 71, EffDescPieces_35, &ReflowLines_38);
      BlankLineCord_39 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "")));
      {
        Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_102, 0) = ((MR_Box) (&libs__print_help_scalar_common_6[0]));
        MR_hl_field(0, Var_102, 1) = ((MR_Box) (libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_104_101_108_112_95_109_101_115_115_97_103_101_95_95_91_49_93_95_48_5_p_0_3));
        MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_102, 3) = ((MR_Box) (DescPrefix_34));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__print_help_scalar_common_1[1]), Var_102, ReflowLines_38, ((MR_Box) (STATE_VARIABLE_LineCord_2_54)), &conv3_STATE_VARIABLE_LineCord_20_103);
      STATE_VARIABLE_LineCord_20_103 = ((MR_Word) (conv3_STATE_VARIABLE_LineCord_20_103));
      switch (PublicOrPrivate_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_String Var_104;
            MR_String Var_105;

            Var_105 = libs__print_help__single_indent_0_f_0();
            Var_104 = mercury__string__f_43_43_2_f_0(Var_105, (MR_String) "PRIVATE OPTION");
            PrivatePrefixCord_40 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_104)));
          }
          break;
        case (MR_Integer) 0:
          PrivatePrefixCord_40 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
          break;
      }
      Var_109 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PrivatePrefixCord_40, STATE_VARIABLE_LineCord_20_103);
      Var_108 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BlankLineCord_39, Var_109);
      *STATE_VARIABLE_EffectiveLinesCord_44 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_EffectiveLinesCord_0_43, Var_108);
    }
  }
  else
    *STATE_VARIABLE_EffectiveLinesCord_44 = STATE_VARIABLE_EffectiveLinesCord_0_43;
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_95_91_49_93_95_48_4_p_0(
  MR_Integer LineLen_6,
  MR_Word InitialPieces_7,
  MR_Word * FinishedLines_8)
{
  MR_bool succeeded;
  MR_Word CurLine1_10;
  MR_Word FinishedLineCord1_11;
  MR_Word FinishedLineCord_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String FinishedLine_17;
  MR_Word Var_18;
  MR_Integer _CurLineLen_9;

  Var_14 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  Var_15 = mercury__cord__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_9_p_0(LineLen_6, InitialPieces_7, (MR_Integer) 0, &_CurLineLen_9, Var_14, &CurLine1_10, Var_15, &FinishedLineCord1_11);
  Var_18 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CurLine1_10);
  FinishedLine_17 = mercury__string__append_list_1_f_0(Var_18);
  succeeded = (strcmp(FinishedLine_17, (MR_String) "") == 0);
  if (succeeded)
    FinishedLineCord_12 = FinishedLineCord1_11;
  else
    mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FinishedLine_17)), FinishedLineCord1_11, &FinishedLineCord_12);
  *FinishedLines_8 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FinishedLineCord_12);
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_9_p_0(
  MR_Integer LineLen_11,
  MR_Word Pieces_12,
  MR_Integer STATE_VARIABLE_CurLineLen_0_79,
  MR_Integer * STATE_VARIABLE_CurLineLen_80,
  MR_Word STATE_VARIABLE_CurLine_0_81,
  MR_Word * STATE_VARIABLE_CurLine_82,
  MR_Word STATE_VARIABLE_FinishedLineCord_0_83,
  MR_Word * STATE_VARIABLE_FinishedLineCord_84)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Pieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CurLineLen_80 = STATE_VARIABLE_CurLineLen_0_79;
      *STATE_VARIABLE_CurLine_82 = STATE_VARIABLE_CurLine_0_81;
      *STATE_VARIABLE_FinishedLineCord_84 = STATE_VARIABLE_FinishedLineCord_0_83;
    }
    else
    {
      MR_Word HeadPiece_16 = ((MR_Word) ((MR_hl_field(1, Pieces_12, 0))));
      MR_Word TailPieces_17 = ((MR_Word) ((MR_hl_field(1, Pieces_12, 1))));
      MR_Word STATE_VARIABLE_CurLine_1_85;
      MR_Integer STATE_VARIABLE_CurLineLen_1_86;
      MR_Word STATE_VARIABLE_FinishedLineCord_1_87;
      MR_Word next_value_of_Pieces_12;
      MR_Integer next_value_of_STATE_VARIABLE_CurLineLen_0_79;
      MR_Word next_value_of_STATE_VARIABLE_CurLine_0_81;
      MR_Word next_value_of_STATE_VARIABLE_FinishedLineCord_0_83;

      switch (MR_tag((MR_Word) HeadPiece_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String WordsStr_18 = ((MR_String) ((MR_hl_field(0, HeadPiece_16, 0))));
            MR_Word Words_19;

            Words_19 = mercury__string__words_1_f_0(WordsStr_18);
            libs__print_help__reflow_lines_loop_over_words_8_p_0(LineLen_11, Words_19, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FixedStr_20 = ((MR_String) ((MR_hl_field(1, HeadPiece_16, 0))));

            libs__print_help__add_word_8_p_0(LineLen_11, FixedStr_20, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Option_68 = ((MR_String) ((MR_hl_field(2, HeadPiece_16, 0))));
            MR_String Var_428;
            MR_String Str_485;

            Var_428 = mercury__string__f_43_43_2_f_0(Option_68, (MR_String) "\'");
            Str_485 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_428);
            libs__print_help__add_word_8_p_0(LineLen_11, Str_485, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadPiece_16, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Option_317 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_324 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_423;
                MR_String Var_424;
                MR_String Str_486;

                Var_423 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_324);
                Var_424 = mercury__string__f_43_43_2_f_0(Option_317, Var_423);
                Str_486 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_424);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_486, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Str_67;
                MR_String Arg_69 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_474;

                Var_474 = mercury__string__f_43_43_2_f_0(Arg_69, (MR_String) ">");
                Str_67 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_474);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_67, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Arg_274 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_281 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_469;
                MR_String Var_470;
                MR_String Str_476;

                Var_469 = mercury__string__f_43_43_2_f_0((MR_String) ">", Suffix_281);
                Var_470 = mercury__string__f_43_43_2_f_0(Arg_274, Var_469);
                Str_476 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_470);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_476, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Option_258 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Arg_259 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_417;
                MR_String Var_419;
                MR_String Var_420;
                MR_String Str_487;

                Var_417 = mercury__string__f_43_43_2_f_0(Arg_259, (MR_String) ">\'");
                Var_419 = mercury__string__f_43_43_2_f_0((MR_String) " <", Var_417);
                Var_420 = mercury__string__f_43_43_2_f_0(Option_258, Var_419);
                Str_487 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_420);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_487, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Suffix_333 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Option_334 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Arg_335 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_409;
                MR_String Var_410;
                MR_String Var_412;
                MR_String Var_413;
                MR_String Str_488;

                Var_409 = mercury__string__f_43_43_2_f_0((MR_String) ">\'", Suffix_333);
                Var_410 = mercury__string__f_43_43_2_f_0(Arg_335, Var_409);
                Var_412 = mercury__string__f_43_43_2_f_0((MR_String) " <", Var_410);
                Var_413 = mercury__string__f_43_43_2_f_0(Option_334, Var_412);
                Str_488 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_413);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_488, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String Text_65 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_406;
                MR_String Str_489;

                Var_406 = mercury__string__f_43_43_2_f_0(Text_65, (MR_String) "\'");
                Str_489 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_406);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_489, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String Text_336 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_337 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_401;
                MR_String Var_402;
                MR_String Str_490;

                Var_401 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_337);
                Var_402 = mercury__string__f_43_43_2_f_0(Text_336, Var_401);
                Str_490 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_402);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_490, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String Before0_74 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String RefName_75 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String After0_76 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Var_216;
                MR_String Var_221;
                MR_String Var_394;
                MR_String Var_396;
                MR_String Var_397;
                MR_String Var_399;
                MR_String Str_491;

                Var_216 = libs__print_help__before_str_1_f_0(Before0_74);
                Var_221 = libs__print_help__after_str_1_f_0(After0_76);
                Var_394 = mercury__string__f_43_43_2_f_0(Var_221, (MR_String) "");
                Var_396 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_394);
                Var_397 = mercury__string__f_43_43_2_f_0(RefName_75, Var_396);
                Var_399 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_397);
                Str_491 = mercury__string__f_43_43_2_f_0(Var_216, Var_399);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_491, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 8:
              {
                MR_String Before0_344 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String RefName_345 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String After0_346 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Var_350;
                MR_String Var_355;
                MR_String Suffix_359 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 4))));
                MR_String Var_388;
                MR_String Var_390;
                MR_String Var_391;
                MR_String Var_393;
                MR_String Str_492;

                Var_350 = libs__print_help__before_str_1_f_0(Before0_344);
                Var_355 = libs__print_help__after_str_1_f_0(After0_346);
                Var_388 = mercury__string__f_43_43_2_f_0(Var_355, Suffix_359);
                Var_390 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_388);
                Var_391 = mercury__string__f_43_43_2_f_0(RefName_345, Var_390);
                Var_393 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_391);
                Str_492 = mercury__string__f_43_43_2_f_0(Var_350, Var_393);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_492, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 9:
              libs__print_help__add_word_8_p_0(LineLen_11, (MR_String) "", STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              break;
            case (MR_Integer) 10:
              libs__print_help__add_word_8_p_0(LineLen_11, (MR_String) "", STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              break;
            case (MR_Integer) 11:
              {
                MR_String Option_261 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_386;
                MR_String Str_493;

                Var_386 = mercury__string__f_43_43_2_f_0(Option_261, (MR_String) "\'");
                Str_493 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_386);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_493, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 12:
              {
                MR_String Suffix_366 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Option_367 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_381;
                MR_String Var_382;
                MR_String Str_494;

                Var_381 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_366);
                Var_382 = mercury__string__f_43_43_2_f_0(Option_367, Var_381);
                Str_494 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_382);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_494, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 13:
              {
                MR_String Text_262 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_458;
                MR_String Str_479;

                Var_458 = mercury__string__f_43_43_2_f_0(Text_262, (MR_String) "*");
                Str_479 = mercury__string__f_43_43_2_f_0((MR_String) "*", Var_458);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_479, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 14:
              {
                MR_String Text_296 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_297 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_453;
                MR_String Var_454;
                MR_String Str_480;

                Var_453 = mercury__string__f_43_43_2_f_0((MR_String) "*", Suffix_297);
                Var_454 = mercury__string__f_43_43_2_f_0(Text_296, Var_453);
                Str_480 = mercury__string__f_43_43_2_f_0((MR_String) "*", Var_454);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_480, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 15:
              {
                MR_String Var_267 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_495;

                Str_495 = mercury__string__f_43_43_2_f_0(Var_267, (MR_String) "");
                libs__print_help__add_word_8_p_0(LineLen_11, Str_495, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 16:
              {
                MR_String Suffix_374 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_375 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Str_496;

                Str_496 = mercury__string__f_43_43_2_f_0(Var_375, Suffix_374);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_496, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 17:
              {
                MR_String Var_71 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_450;
                MR_String Str_481;

                Var_450 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) "\'");
                Str_481 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_450);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_481, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 18:
              {
                MR_String Var_298 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_305 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_445;
                MR_String Var_446;
                MR_String Str_482;

                Var_445 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_305);
                Var_446 = mercury__string__f_43_43_2_f_0(Var_298, Var_445);
                Str_482 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_446);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_482, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 19:
              {
                MR_String Code_70 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Var_466;
                MR_String Str_477;

                Var_466 = mercury__string__f_43_43_2_f_0(Code_70, (MR_String) "\'");
                Str_477 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_466);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_477, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 20:
              {
                MR_String Code_282 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Suffix_289 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_461;
                MR_String Var_462;
                MR_String Str_478;

                Var_461 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_289);
                Var_462 = mercury__string__f_43_43_2_f_0(Code_282, Var_461);
                Str_478 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_462);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_478, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 21:
              {
                MR_String File_72 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Ext_73 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Var_439;
                MR_String Var_441;
                MR_String Var_442;
                MR_String Str_483;

                Var_439 = mercury__string__f_43_43_2_f_0(Ext_73, (MR_String) "\'");
                Var_441 = mercury__string__f_43_43_2_f_0((MR_String) ">.", Var_439);
                Var_442 = mercury__string__f_43_43_2_f_0(File_72, Var_441);
                Str_483 = mercury__string__f_43_43_2_f_0((MR_String) "\140<", Var_442);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_483, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 22:
              {
                MR_String File_306 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 1))));
                MR_String Ext_307 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 2))));
                MR_String Suffix_316 = ((MR_String) ((MR_hl_field(3, HeadPiece_16, 3))));
                MR_String Var_431;
                MR_String Var_432;
                MR_String Var_434;
                MR_String Var_435;
                MR_String Str_484;

                Var_431 = mercury__string__f_43_43_2_f_0((MR_String) "\'", Suffix_316);
                Var_432 = mercury__string__f_43_43_2_f_0(Ext_307, Var_431);
                Var_434 = mercury__string__f_43_43_2_f_0((MR_String) ">.", Var_432);
                Var_435 = mercury__string__f_43_43_2_f_0(File_306, Var_434);
                Str_484 = mercury__string__f_43_43_2_f_0((MR_String) "\140<", Var_435);
                libs__print_help__add_word_8_p_0(LineLen_11, Str_484, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 23:
              {
                MR_Word HelpTextPieces_77 = ((MR_Word) ((MR_hl_field(3, HeadPiece_16, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_9_p_0(LineLen_11, HelpTextPieces_77, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
            case (MR_Integer) 24:
              {
                STATE_VARIABLE_CurLineLen_1_86 = STATE_VARIABLE_CurLineLen_0_79;
                STATE_VARIABLE_CurLine_1_85 = STATE_VARIABLE_CurLine_0_81;
                STATE_VARIABLE_FinishedLineCord_1_87 = STATE_VARIABLE_FinishedLineCord_0_83;
              }
              break;
            case (MR_Integer) 25:
              {
                MR_Word HelpTextPieces_272 = ((MR_Word) ((MR_hl_field(3, HeadPiece_16, 1))));

                libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_102_108_111_119_95_108_105_110_101_115_95_108_111_111_112_95_111_118_101_114_95_108_105_110_101_115_95_95_91_49_93_95_48_9_p_0(LineLen_11, HelpTextPieces_272, STATE_VARIABLE_CurLineLen_0_79, &STATE_VARIABLE_CurLineLen_1_86, STATE_VARIABLE_CurLine_0_81, &STATE_VARIABLE_CurLine_1_85, STATE_VARIABLE_FinishedLineCord_0_83, &STATE_VARIABLE_FinishedLineCord_1_87);
              }
              break;
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_Pieces_12 = TailPieces_17;
      next_value_of_STATE_VARIABLE_CurLineLen_0_79 = STATE_VARIABLE_CurLineLen_1_86;
      next_value_of_STATE_VARIABLE_CurLine_0_81 = STATE_VARIABLE_CurLine_1_85;
      next_value_of_STATE_VARIABLE_FinishedLineCord_0_83 = STATE_VARIABLE_FinishedLineCord_1_87;
      Pieces_12 = next_value_of_Pieces_12;
      STATE_VARIABLE_CurLineLen_0_79 = next_value_of_STATE_VARIABLE_CurLineLen_0_79;
      STATE_VARIABLE_CurLine_0_81 = next_value_of_STATE_VARIABLE_CurLine_0_81;
      STATE_VARIABLE_FinishedLineCord_0_83 = next_value_of_STATE_VARIABLE_FinishedLineCord_0_83;
      continue;
    }
    break;
  }
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(
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
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_LineCord_0_6;

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_1, Option_2, MaybeArgName_3, ShortName_19, STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_24);
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_115_104_111_114_116_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22)
{
  MR_String FirstLine_15;
  MR_Word MaybeAddNegVersion_19;
  MR_Word STATE_VARIABLE_LineCord_1_23;

  FirstLine_15 = libs__print_help__short_option_name_line_4_f_0(Params_8, Option_9, MaybeArgName_10, ShortName_12);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_21, &STATE_VARIABLE_LineCord_1_23);
  MaybeAddNegVersion_19 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) & (MR_Integer) 1);
  switch (MaybeAddNegVersion_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_20;
        MR_String Var_33;
        MR_String Var_40;
        MR_String Var_42;

        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), ShortName_12, &Var_33);
        Var_40 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) "-");
        Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_40);
        SecondLine_20 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_42);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_20)), STATE_VARIABLE_LineCord_1_23, STATE_VARIABLE_LineCord_22);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_22 = STATE_VARIABLE_LineCord_1_23;
      break;
  }
}

static void MR_CALL 
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_115_95_95_91_52_93_95_48_7_p_0(
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

      libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(Params_1, Option_2, MaybeArgName_3, LongName_19, STATE_VARIABLE_LineCord_0_6, &STATE_VARIABLE_LineCord_1_24);
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
libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_99_99_95_108_111_110_103_95_111_112_116_105_111_110_95_110_97_109_101_95_95_91_52_93_95_48_7_p_0(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22)
{
  MR_String FirstLine_15;
  MR_Word MaybeAddNegVersion_19;
  MR_Word STATE_VARIABLE_LineCord_1_23;

  FirstLine_15 = libs__print_help__long_option_name_line_4_f_0(Params_8, Option_9, MaybeArgName_10, LongName_12);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_21, &STATE_VARIABLE_LineCord_1_23);
  MaybeAddNegVersion_19 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) & (MR_Integer) 1);
  switch (MaybeAddNegVersion_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_20;
        MR_String Var_33;

        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_12);
        SecondLine_20 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_33);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_20)), STATE_VARIABLE_LineCord_1_23, STATE_VARIABLE_LineCord_22);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_22 = STATE_VARIABLE_LineCord_1_23;
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
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_3[2]), (MR_Integer) 39, Line0_5, &Var_15);
  *Line_6 = mercury__string__f_43_43_2_f_0(Var_15, Var_14);
}

static MR_String MR_CALL 
libs__print_help__long_negated_option_name_line_1_f_0(
  MR_String LongName_3)
{
  MR_String Line_4;
  MR_String Var_13;

  Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_3);
  Line_4 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_13);
  return Line_4;
}

static void MR_CALL 
libs__print_help__acc_short_option_name_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_Char ShortName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22)
{
  MR_String FirstLine0_14;
  MR_String FirstLine_15;
  MR_String AlignedText_16;
  MR_Word MaybeAddNegVersion_19;
  MR_Word STATE_VARIABLE_LineCord_1_23;
  MR_String Var_32;
  MR_String Var_33;

  FirstLine0_14 = libs__print_help__short_option_name_line_4_f_0(Params_8, Option_9, MaybeArgName_10, ShortName_12);
  AlignedText_16 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_11, 0))));
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_16);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_3[2]), (MR_Integer) 39, FirstLine0_14, &Var_33);
  FirstLine_15 = mercury__string__f_43_43_2_f_0(Var_33, Var_32);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_21, &STATE_VARIABLE_LineCord_1_23);
  MaybeAddNegVersion_19 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) & (MR_Integer) 1);
  switch (MaybeAddNegVersion_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_20;
        MR_String Var_49;
        MR_String Var_56;
        MR_String Var_58;

        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), ShortName_12, &Var_49);
        Var_56 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "-");
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_56);
        SecondLine_20 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_58);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_20)), STATE_VARIABLE_LineCord_1_23, STATE_VARIABLE_LineCord_22);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_22 = STATE_VARIABLE_LineCord_1_23;
      break;
  }
}

static MR_String MR_CALL 
libs__print_help__short_option_name_line_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_Char ShortName0_9)
{
  MR_bool succeeded;
  MR_String Line_10;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 1)) & (MR_Integer) 1);

  switch (MaybeNegate_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Char ShortName_32;
        MR_String Var_37;
        MR_String Var_45;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ShortName_32 = ShortName0_9;
            break;
          case (MR_Integer) 1:
            {
              MR_String Msg_79;
              MR_String Var_83;

              Var_83 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_79 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_83);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_79);
            }
            break;
        }
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), ShortName_32, &Var_37);
        Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_37);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_45);
      }
      else
      {
        MR_String ArgName_16 = ((MR_String) ((MR_hl_field(1, MaybeArgName_8, 0))));
        MR_String MaybeWrappedArgName_17;
        MR_Char ShortName_33;
        MR_String Var_47;
        MR_String Var_48;
        MR_String Var_55;
        MR_String Var_57;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Msg_58;
              MR_String Var_62;

              Var_62 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_58 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_62);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_58);
            }
            break;
          case (MR_Integer) 1:
            ShortName_33 = ShortName0_9;
            break;
        }
        succeeded = (strcmp(ArgName_16, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_70;
          MR_String Var_71;

          Var_71 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Var_70 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) " has empty arg name");
          mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name\'/2", Var_70);
        }
        else
        {
          {
            MR_Integer Var_67;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_16, (MR_Char) 123, &Var_67);
          }
          if (!(succeeded))
          {
            MR_Integer Var_68;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_16, (MR_Char) 45, &Var_68);
          }
          if (succeeded)
            MaybeWrappedArgName_17 = ArgName_16;
          else
          {
            MR_String Var_76;

            Var_76 = mercury__string__f_43_43_2_f_0(ArgName_16, (MR_String) ">");
            MaybeWrappedArgName_17 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_76);
          }
        }
        Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " ", MaybeWrappedArgName_17);
        mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), ShortName_33, &Var_48);
        Var_55 = mercury__string__f_43_43_2_f_0(Var_48, Var_47);
        Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_55);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_57);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Char ShortName_15;
        MR_Box conv0_ShortName_15;

        libs__print_help__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_104_97_118_101_95_97_114_103_95_95_91_49_93_95_48_5_p_0(MaybeExpectArg_12, Option_7, MaybeArgName_8, ((MR_Box) (MR_Word) (ShortName0_9)), &conv0_ShortName_15);
        ShortName_15 = ((MR_Char) (MR_Word) conv0_ShortName_15);
        Line_10 = libs__print_help__short_negated_option_name_line_1_f_0(ShortName_15);
      }
      break;
  }
  return Line_10;
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
libs__print_help__short_negated_option_name_line_1_f_0(
  MR_Char ShortName_3)
{
  MR_String Line_4;
  MR_String Var_13;
  MR_String Var_20;
  MR_String Var_22;

  mercury__string__format__format_char_component_nowidth_3_p_0((MR_Word) (&libs__print_help_scalar_common_3[1]), ShortName_3, &Var_13);
  Var_20 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) "-");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_20);
  Line_4 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_22);
  return Line_4;
}

static void MR_CALL 
libs__print_help__acc_long_option_name_7_p_1(
  MR_Word Params_8,
  MR_Word Option_9,
  MR_Word MaybeArgName_10,
  MR_Word MaybeAlignedText_11,
  MR_String LongName_12,
  MR_Word STATE_VARIABLE_LineCord_0_21,
  MR_Word * STATE_VARIABLE_LineCord_22)
{
  MR_String FirstLine0_14;
  MR_String FirstLine_15;
  MR_String AlignedText_16;
  MR_Word MaybeAddNegVersion_19;
  MR_Word STATE_VARIABLE_LineCord_1_23;
  MR_String Var_32;
  MR_String Var_33;

  FirstLine0_14 = libs__print_help__long_option_name_line_4_f_0(Params_8, Option_9, MaybeArgName_10, LongName_12);
  AlignedText_16 = ((MR_String) ((MR_hl_field(1, MaybeAlignedText_11, 0))));
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) " ", AlignedText_16);
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&libs__print_help_scalar_common_3[2]), (MR_Integer) 39, FirstLine0_14, &Var_33);
  FirstLine_15 = mercury__string__f_43_43_2_f_0(Var_33, Var_32);
  mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (FirstLine_15)), STATE_VARIABLE_LineCord_0_21, &STATE_VARIABLE_LineCord_1_23);
  MaybeAddNegVersion_19 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) & (MR_Integer) 1);
  switch (MaybeAddNegVersion_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String SecondLine_20;
        MR_String Var_49;

        Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_12);
        SecondLine_20 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_49);
        mercury__cord__snoc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (SecondLine_20)), STATE_VARIABLE_LineCord_1_23, STATE_VARIABLE_LineCord_22);
      }
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_LineCord_22 = STATE_VARIABLE_LineCord_1_23;
      break;
  }
}

static MR_String MR_CALL 
libs__print_help__long_option_name_line_4_f_0(
  MR_Word Params_6,
  MR_Word Option_7,
  MR_Word MaybeArgName_8,
  MR_String LongName0_9)
{
  MR_bool succeeded;
  MR_String Line_10;
  MR_Word MaybeExpectArg_12 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 2)) & (MR_Integer) 1);
  MR_Word MaybeNegate_13 = ((((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))) >> 1)) & (MR_Integer) 1);

  switch (MaybeNegate_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String LongName_32;
        MR_String Var_38;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            LongName_32 = LongName0_9;
            break;
          case (MR_Integer) 1:
            {
              MR_String Msg_65;
              MR_String Var_69;

              Var_69 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_69);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_65);
            }
            break;
        }
        Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongName_32);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_38);
      }
      else
      {
        MR_String ArgName_16 = ((MR_String) ((MR_hl_field(1, MaybeArgName_8, 0))));
        MR_String MaybeWrappedArgName_17;
        MR_String LongName_33;
        MR_String Var_40;
        MR_String Var_41;
        MR_String Var_43;

        switch (MaybeExpectArg_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Msg_44;
              MR_String Var_48;

              Var_48 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
              Msg_44 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_48);
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_44);
            }
            break;
          case (MR_Integer) 1:
            LongName_33 = LongName0_9;
            break;
        }
        succeeded = (strcmp(ArgName_16, (MR_String) "") == 0);
        if (succeeded)
        {
          MR_String Var_56;
          MR_String Var_57;

          Var_57 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
          Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) " has empty arg name");
          mercury__require__unexpected_2_p_0((MR_String) "function \140libs.print_help.maybe_wrap_arg_name\'/2", Var_56);
        }
        else
        {
          {
            MR_Integer Var_53;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_16, (MR_Char) 123, &Var_53);
          }
          if (!(succeeded))
          {
            MR_Integer Var_54;

            succeeded = mercury__string__find_first_char_3_p_0(ArgName_16, (MR_Char) 45, &Var_54);
          }
          if (succeeded)
            MaybeWrappedArgName_17 = ArgName_16;
          else
          {
            MR_String Var_62;

            Var_62 = mercury__string__f_43_43_2_f_0(ArgName_16, (MR_String) ">");
            MaybeWrappedArgName_17 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_62);
          }
        }
        Var_40 = mercury__string__f_43_43_2_f_0((MR_String) " ", MaybeWrappedArgName_17);
        Var_41 = mercury__string__f_43_43_2_f_0(LongName_33, Var_40);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "--", Var_41);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_43);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String LongName_15;
        MR_String Var_101;

        if ((MaybeArgName_8 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              LongName_15 = LongName0_9;
              break;
            case (MR_Integer) 1:
              {
                MR_String Msg_84;
                MR_String Var_88;

                Var_88 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_84 = mercury__string__f_43_43_2_f_0((MR_String) "missing arg for ", Var_88);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_no_arg\'/4", Msg_84);
              }
              break;
          }
        else
          switch (MaybeExpectArg_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Msg_75;
                MR_String Var_79;

                Var_79 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_7)));
                Msg_75 = mercury__string__f_43_43_2_f_0((MR_String) "unexpected arg for ", Var_79);
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.print_help.have_arg\'/4", Msg_75);
              }
              break;
            case (MR_Integer) 1:
              LongName_15 = LongName0_9;
              break;
          }
        Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "--no-", LongName_15);
        Line_10 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_101);
      }
      break;
  }
  return Line_10;
}

static void MR_CALL 
libs__print_help__get_optdb_record_params_2_p_0(
  MR_Word OptdbRecord_3,
  MR_Word * Params_4)
{
  MR_Word OptionData_7 = ((MR_Word) ((MR_hl_field(0, OptdbRecord_3, 1))));
  MR_Word MaybeExpectArg_10;
  MR_Word MaybeNegate_11;
  MR_Word MaybeAddNegVersion_12;

  switch (MR_tag((MR_Word) OptionData_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OptionData_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeExpectArg_10 = (MR_Integer) 0;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          {
            MaybeExpectArg_10 = (MR_Integer) 0;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MaybeExpectArg_10 = (MR_Integer) 1;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 4:
          {
            MaybeExpectArg_10 = (MR_Integer) 1;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 5:
          {
            MaybeExpectArg_10 = (MR_Integer) 1;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Bool_9 = ((MR_Unsigned) ((MR_hl_field(1, OptionData_7, 0))) & (MR_Integer) 1);

        MaybeExpectArg_10 = (MR_Integer) 0;
        switch (Bool_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeNegate_11 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            MaybeNegate_11 = (MR_Integer) 1;
            break;
        }
        MaybeAddNegVersion_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 2:
      {
        MaybeExpectArg_10 = (MR_Integer) 1;
        MaybeNegate_11 = (MR_Integer) 0;
        MaybeAddNegVersion_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, OptionData_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MaybeExpectArg_10 = (MR_Integer) 1;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            MaybeExpectArg_10 = (MR_Integer) 1;
            MaybeNegate_11 = (MR_Integer) 0;
            MaybeAddNegVersion_12 = (MR_Integer) 1;
          }
          break;
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *Params_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) (MaybeExpectArg_10) << 2)) | (((((MR_Unsigned) (MaybeNegate_11) << 1)) | (MR_Unsigned) (MaybeAddNegVersion_12)))));
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
  return (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[143]));
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
        MR_Word ShortUsageLines_7 = (MR_Word) (MR_mkword(1, &libs__print_help_scalar_common_1[6]));
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
libs__print_help____Unify____help_section_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_section_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_section_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_section_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__print_help____Unify____help_subsection_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__print_help____Unify____help_subsection_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__print_help____Compare____help_subsection_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__print_help____Compare____help_subsection_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_section_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_help_subsection_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_add_negative_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_aligned_text_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_arg_name_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_expect_arg_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_maybe_negate_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_optdb_record_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_option_params_0);
  MR_register_type_ctor_info(&libs__print_help__libs__print_help__type_ctor_info_print_what_help_0);
}

void mercury__libs__print_help__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__print_help__required_init(void)
{
  libs__print_help__user_init_pred_26_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__print_help__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.print_help.
