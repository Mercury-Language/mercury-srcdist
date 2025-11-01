/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2025-11-01
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


// :- module display.
// :- implementation.

/*
INIT mercury__display__init
ENDINIT
*/

#include "display.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "query.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0;

static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1];

static const MR_Integer display__display__functor_number_map_attr_string_0[1];

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4];

static const MR_DuArgLocn display__display__field_locns_deep_link_0_0[4];

static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1];

static const MR_Integer display__display__functor_number_map_deep_link_0[1];

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0;

static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2];

static const MR_ConstString display__display__field_names_display_0_0[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1];

static const MR_Integer display__display__functor_number_map_display_0[1];

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1;

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3];

static const MR_DuArgLocn display__display__field_locns_display_item_0_5[3];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7;

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6];

static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_item_0[9];

static const MR_Integer display__display__functor_number_map_display_item_0[9];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_link_class_0[2];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2];

static const MR_Integer display__display__functor_number_map_link_class_0[2];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_list_class_0[4];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4];

static const MR_Integer display__display__functor_number_map_list_class_0[4];

static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2];

static const MR_DuArgLocn display__display__field_locns_pseudo_link_0_0[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1];

static const MR_Integer display__display__functor_number_map_pseudo_link_0[1];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_str_attr_0[3];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3];

static const MR_Integer display__display__functor_number_map_str_attr_0[3];

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0;

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0;

static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4];

static const MR_ConstString display__display__field_names_table_0_0[4];

static const MR_DuArgLocn display__display__field_locns_table_0_0[4];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1];

static const MR_Integer display__display__functor_number_map_table_0[1];

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1];

static const MR_ConstString display__display__field_names_table_cell_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0;

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2];

static const MR_ConstString display__display__field_names_table_cell_0_1[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1;

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3];

static const MR_Integer display__display__functor_number_map_table_cell_0[3];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_class_0[3];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3];

static const MR_Integer display__display__functor_number_map_table_class_0[3];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_column_class_0[13];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13];

static const MR_Integer display__display__functor_number_map_table_column_class_0[13];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2;

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_column_colour_0[3];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3];

static const MR_Integer display__display__functor_number_map_table_column_colour_0[3];

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3];

static const MR_DuArgLocn display__display__field_locns_table_data_0_3[3];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_data_0[8];

static const MR_Integer display__display__functor_number_map_table_data_0[8];

static const MR_Integer display__display__functor_number_map_table_header_0[1];

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0;

static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0;

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3];

static const MR_ConstString display__display__field_names_table_header_group_0_0[3];

static const MR_DuArgLocn display__display__field_locns_table_header_group_0_0[3];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1];

static const MR_Integer display__display__functor_number_map_table_header_group_0[1];

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1];

static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0;

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0;

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2];

static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2];

static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2];

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0;

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1];

static const MR_ConstString display__display__field_names_table_row_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0;

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1;

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1];

static const MR_ConstString display__display__field_names_table_row_0_2[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2;

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1];

static const MR_ConstString display__display__field_names_table_row_0_3[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1];

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4];

static const MR_Integer display__display__functor_number_map_table_row_0[4];

static void MR_CALL 
display__table_accumulate_columns_3_p_0(
  MR_Word HeaderGroup_4,
  MR_Integer STATE_VARIABLE_NumColumns_0_13,
  MR_Integer * STATE_VARIABLE_NumColumns_14);

static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____attr_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____deep_link_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____display_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____display_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____link_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____list_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____str_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
display____Compare____table_row_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box display_scalar_common_1[9][2];

static /* final */ const MR_Box display_scalar_common_2[1][6];

static /* final */ const MR_Box display_scalar_common_3[1][3];




static /* final */ const MR_Box display_scalar_common_1[9][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_str_attr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_display_item_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_row_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_group_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_data_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_cell_0))
  },
};

static /* final */ const MR_Box display_scalar_common_2[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box display_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&display_scalar_common_2[0])),
    ((MR_Box) (display__header_groups_to_header_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_str_attr_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_str_attr_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0 = {
  (MR_String) "attr_str",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_attr_string_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = { &display__display__du_functor_desc_attr_string_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = { &display__display__du_functor_desc_attr_string_0_0 };

static const MR_Integer display__display__functor_number_map_attr_string_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_attr_string_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____attr_string_0_0_10001)),
  ((MR_Box) (display____Compare____attr_string_0_0_10001)),
  (MR_String) "display",
  (MR_String) "attr_string",
  { display__display__du_name_ordered_attr_string_0 },
  { display__display__du_ptag_ordered_attr_string_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_attr_string_0,

};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&query__query__type_ctor_info_preferences_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_cmd_0),
  (MR_PseudoTypeInfo) (&display__maybe__ti_maybe_1query__type_ctor_info_preferences_0),
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_attr_string_0),
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_link_class_0)
};

static const MR_DuArgLocn display__display__field_locns_deep_link_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0 = {
  (MR_String) "deep_link",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_deep_link_0_0,
  NULL,
  display__display__field_locns_deep_link_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = { &display__display__du_functor_desc_deep_link_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = { &display__display__du_functor_desc_deep_link_0_0 };

static const MR_Integer display__display__functor_number_map_deep_link_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_deep_link_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____deep_link_0_0_10001)),
  ((MR_Box) (display____Compare____deep_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "deep_link",
  { display__display__du_name_ordered_deep_link_0 },
  { display__display__du_ptag_ordered_deep_link_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_deep_link_0,

};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_display_item_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) (&display__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_display_item_0)
};

static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0 = {
  (MR_String) "display",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_display_0_0,
  display__display__field_names_display_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = { &display__display__du_functor_desc_display_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = { &display__display__du_functor_desc_display_0_0 };

static const MR_Integer display__display__functor_number_map_display_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_0_0_10001)),
  ((MR_Box) (display____Compare____display_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display",
  { display__display__du_name_ordered_display_0 },
  { display__display__du_ptag_ordered_display_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_display_0,

};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0 = {
  (MR_String) "display_heading",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(0),
  display__display__field_types_display_item_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1 = {
  (MR_String) "display_text",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(1),
  display__display__field_types_display_item_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2 = {
  (MR_String) "display_paragraph_break",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_deep_link_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3 = {
  (MR_String) "display_link",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(3),
  display__display__field_types_display_item_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_pseudo_link_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4 = {
  (MR_String) "display_pseudo_link",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  display__display__field_types_display_item_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_list_class_0),
  (MR_PseudoTypeInfo) (&display__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_display_item_0)
};

static const MR_DuArgLocn display__display__field_locns_display_item_0_5[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5 = {
  (MR_String) "display_list",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  display__display__field_types_display_item_0_5,
  NULL,
  display__display__field_locns_display_item_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6 = {
  (MR_String) "display_table",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(6),
  display__display__field_types_display_item_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7 = {
  (MR_String) "display_verbatim",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  display__display__field_types_display_item_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_display_item_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8 = {
  (MR_String) "display_developer",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  display__display__field_types_display_item_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = { &display__display__du_functor_desc_display_item_0_2 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = { &display__display__du_functor_desc_display_item_0_3 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = { &display__display__du_functor_desc_display_item_0_4 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6] = {
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_7,
  &display__display__du_functor_desc_display_item_0_8
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    display__display__du_stag_ordered_display_item_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_display_item_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_display_item_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    display__display__du_stag_ordered_display_item_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_item_0[9] = {
  &display__display__du_functor_desc_display_item_0_8,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_3,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_2,
  &display__display__du_functor_desc_display_item_0_4,
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_7
};

static const MR_Integer display__display__functor_number_map_display_item_0[9] = {
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_item_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_item_0_0_10001)),
  ((MR_Box) (display____Compare____display_item_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display_item",
  { display__display__du_name_ordered_display_item_0 },
  { display__display__du_ptag_ordered_display_item_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  display__display__functor_number_map_display_item_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_0,
  &display__display__enum_functor_desc_link_class_0_1
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_1,
  &display__display__enum_functor_desc_link_class_0_0
};

static const MR_Integer display__display__functor_number_map_link_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_link_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____link_class_0_0_10001)),
  ((MR_Box) (display____Compare____link_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "link_class",
  { display__display__enum_name_ordered_link_class_0 },
  { display__display__enum_ordinal_ordered_link_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  display__display__functor_number_map_link_class_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  INT32_C(1)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  INT32_C(2)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_0,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_0
};

static const MR_Integer display__display__functor_number_map_list_class_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_list_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____list_class_0_0_10001)),
  ((MR_Box) (display____Compare____list_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "list_class",
  { display__display__enum_name_ordered_list_class_0 },
  { display__display__enum_ordinal_ordered_list_class_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  display__display__functor_number_map_list_class_0,

};

static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_link_class_0)
};

static const MR_DuArgLocn display__display__field_locns_pseudo_link_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0 = {
  (MR_String) "pseudo_link",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_pseudo_link_0_0,
  NULL,
  display__display__field_locns_pseudo_link_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = { &display__display__du_functor_desc_pseudo_link_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = { &display__display__du_functor_desc_pseudo_link_0_0 };

static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_pseudo_link_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____pseudo_link_0_0_10001)),
  ((MR_Box) (display____Compare____pseudo_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "pseudo_link",
  { display__display__du_name_ordered_pseudo_link_0 },
  { display__display__du_ptag_ordered_pseudo_link_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_pseudo_link_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  INT32_C(1)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

static const MR_Integer display__display__functor_number_map_str_attr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_str_attr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____str_attr_0_0_10001)),
  ((MR_Box) (display____Compare____str_attr_0_0_10001)),
  (MR_String) "display",
  (MR_String) "str_attr",
  { display__display__enum_name_ordered_str_attr_0 },
  { display__display__enum_ordinal_ordered_str_attr_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  display__display__functor_number_map_str_attr_0,

};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_table_header_0) }
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_table_row_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_class_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&display__maybe__ti_maybe_1display__type_ctor_info_table_header_0),
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_table_row_0)
};

static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

static const MR_DuArgLocn display__display__field_locns_table_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0 = {
  (MR_String) "table",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_0_0,
  display__display__field_names_table_0_0,
  display__display__field_locns_table_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = { &display__display__du_functor_desc_table_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = { &display__display__du_functor_desc_table_0_0 };

static const MR_Integer display__display__functor_number_map_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_0_0_10001)),
  ((MR_Box) (display____Compare____table_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table",
  { display__display__du_name_ordered_table_0 },
  { display__display__du_ptag_ordered_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_table_0,

};

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_data_0) };

static const MR_ConstString display__display__field_names_table_cell_0_0[1] = { (MR_String) "tc_text" };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0 = {
  (MR_String) "table_cell",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_cell_0_0,
  display__display__field_names_table_cell_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_data_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1 = {
  (MR_String) "table_multi_cell",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  display__display__field_types_table_cell_0_1,
  display__display__field_names_table_cell_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2 = {
  (MR_String) "table_empty_cell",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = { &display__display__du_functor_desc_table_cell_0_2 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = { &display__display__du_functor_desc_table_cell_0_0 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = { &display__display__du_functor_desc_table_cell_0_1 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    display__display__du_stag_ordered_table_cell_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3] = {
  &display__display__du_functor_desc_table_cell_0_0,
  &display__display__du_functor_desc_table_cell_0_2,
  &display__display__du_functor_desc_table_cell_0_1
};

static const MR_Integer display__display__functor_number_map_table_cell_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_cell_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_cell_0_0_10001)),
  ((MR_Box) (display____Compare____table_cell_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_cell",
  { display__display__du_name_ordered_table_cell_0 },
  { display__display__du_ptag_ordered_table_cell_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  display__display__functor_number_map_table_cell_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  INT32_C(1)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_0,
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2,
  &display__display__enum_functor_desc_table_class_0_0
};

static const MR_Integer display__display__functor_number_map_table_class_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_class",
  { display__display__enum_name_ordered_table_class_0 },
  { display__display__enum_ordinal_ordered_table_class_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  display__display__functor_number_map_table_class_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  INT32_C(1)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  INT32_C(2)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  INT32_C(3)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  INT32_C(4)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  INT32_C(5)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  INT32_C(6)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  INT32_C(7)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  INT32_C(8)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  INT32_C(9)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  INT32_C(10)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  INT32_C(11)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  INT32_C(12)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_column_class_0[13] = {
  &display__display__enum_functor_desc_table_column_class_0_0,
  &display__display__enum_functor_desc_table_column_class_0_1,
  &display__display__enum_functor_desc_table_column_class_0_2,
  &display__display__enum_functor_desc_table_column_class_0_3,
  &display__display__enum_functor_desc_table_column_class_0_4,
  &display__display__enum_functor_desc_table_column_class_0_5,
  &display__display__enum_functor_desc_table_column_class_0_6,
  &display__display__enum_functor_desc_table_column_class_0_7,
  &display__display__enum_functor_desc_table_column_class_0_8,
  &display__display__enum_functor_desc_table_column_class_0_9,
  &display__display__enum_functor_desc_table_column_class_0_10,
  &display__display__enum_functor_desc_table_column_class_0_11,
  &display__display__enum_functor_desc_table_column_class_0_12
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13] = {
  &display__display__enum_functor_desc_table_column_class_0_0,
  &display__display__enum_functor_desc_table_column_class_0_1,
  &display__display__enum_functor_desc_table_column_class_0_2,
  &display__display__enum_functor_desc_table_column_class_0_3,
  &display__display__enum_functor_desc_table_column_class_0_4,
  &display__display__enum_functor_desc_table_column_class_0_5,
  &display__display__enum_functor_desc_table_column_class_0_6,
  &display__display__enum_functor_desc_table_column_class_0_7,
  &display__display__enum_functor_desc_table_column_class_0_8,
  &display__display__enum_functor_desc_table_column_class_0_9,
  &display__display__enum_functor_desc_table_column_class_0_10,
  &display__display__enum_functor_desc_table_column_class_0_11,
  &display__display__enum_functor_desc_table_column_class_0_12
};

static const MR_Integer display__display__functor_number_map_table_column_class_0[13] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_class",
  { display__display__enum_name_ordered_table_column_class_0 },
  { display__display__enum_ordinal_ordered_table_column_class_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  display__display__functor_number_map_table_column_class_0,

};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  INT32_C(0)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  INT32_C(1)
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr display__display__enum_ordinal_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_0,
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2
};

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2,
  &display__display__enum_functor_desc_table_column_colour_0_0
};

static const MR_Integer display__display__functor_number_map_table_column_colour_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_colour_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_colour_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_colour_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_colour",
  { display__display__enum_name_ordered_table_column_colour_0 },
  { display__display__enum_ordinal_ordered_table_column_colour_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  display__display__functor_number_map_table_column_colour_0,

};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0 = {
  (MR_String) "td_f",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_data_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1 = {
  (MR_String) "td_i",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(1),
  display__display__field_types_table_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_deep_link_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2 = {
  (MR_String) "td_l",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(2),
  display__display__field_types_table_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_memory_0),
  (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_memory_units_0),
  (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_num_decimal_places_0)
};

static const MR_DuArgLocn display__display__field_locns_table_data_0_3[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3 = {
  (MR_String) "td_m",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  display__display__field_types_table_data_0_3,
  NULL,
  display__display__field_locns_table_data_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = { (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_percent_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4 = {
  (MR_String) "td_p",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  display__display__field_types_table_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5 = {
  (MR_String) "td_s",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  display__display__field_types_table_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_attr_string_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6 = {
  (MR_String) "td_as",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(6),
  display__display__field_types_table_data_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = { (MR_PseudoTypeInfo) (&measurement_units__measurement_units__type_ctor_info_time_0) };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7 = {
  (MR_String) "td_t",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  display__display__field_types_table_data_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = { &display__display__du_functor_desc_table_data_0_2 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = { &display__display__du_functor_desc_table_data_0_6 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = { &display__display__du_functor_desc_table_data_0_0 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_data_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    display__display__du_stag_ordered_table_data_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_data_0[8] = {
  &display__display__du_functor_desc_table_data_0_6,
  &display__display__du_functor_desc_table_data_0_0,
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_2,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

static const MR_Integer display__display__functor_number_map_table_data_0[8] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_data_0_0_10001)),
  ((MR_Box) (display____Compare____table_data_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_data",
  { display__display__du_name_ordered_table_data_0 },
  { display__display__du_ptag_ordered_table_data_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  display__display__functor_number_map_table_data_0,

};

static const MR_Integer display__display__functor_number_map_table_header_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_table_header_group_0) }
};

static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_table_header_group_0),
  (MR_String) "th_groups",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (display____Unify____table_header_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header",
  { &display__display__notag_functor_desc_table_header_0 },
  { &display__display__notag_functor_desc_table_header_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  display__display__functor_number_map_table_header_0,

};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_header_group_columns_0),
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_column_class_0),
  (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_column_colour_0)
};

static const MR_ConstString display__display__field_names_table_header_group_0_0[3] = {
  (MR_String) "thg_titles",
  (MR_String) "thg_class",
  (MR_String) "thg_colour"
};

static const MR_DuArgLocn display__display__field_locns_table_header_group_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0 = {
  (MR_String) "table_header_group",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_header_group_0_0,
  display__display__field_names_table_header_group_0_0,
  display__display__field_locns_table_header_group_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = { &display__display__du_functor_desc_table_header_group_0_0 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = { &display__display__du_functor_desc_table_header_group_0_0 };

static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group",
  { display__display__du_name_ordered_table_header_group_0 },
  { display__display__du_ptag_ordered_table_header_group_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  display__display__functor_number_map_table_header_group_0,

};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_data_0) };

static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = { (MR_String) "thsc_title" };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0 = {
  (MR_String) "table_header_group_single",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_header_group_columns_0_0,
  display__display__field_names_table_header_group_columns_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_table_data_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_table_data_0)
};

static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1 = {
  (MR_String) "table_header_group_multi",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  display__display__field_types_table_header_group_columns_0_1,
  display__display__field_names_table_header_group_columns_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = { &display__display__du_functor_desc_table_header_group_columns_0_0 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = { &display__display__du_functor_desc_table_header_group_columns_0_1 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1,
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_columns_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_columns_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_columns_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group_columns",
  { display__display__du_name_ordered_table_header_group_columns_0 },
  { display__display__du_ptag_ordered_table_header_group_columns_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  display__display__functor_number_map_table_header_group_columns_0,

};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&display__display__type_ctor_info_table_cell_0) }
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = { (MR_PseudoTypeInfo) (&display__list__ti_list_1display__type_ctor_info_table_cell_0) };

static const MR_ConstString display__display__field_names_table_row_0_0[1] = { (MR_String) "tr_cells" };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0 = {
  (MR_String) "table_row",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  display__display__field_types_table_row_0_0,
  display__display__field_names_table_row_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1 = {
  (MR_String) "table_separator_row",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_data_0) };

static const MR_ConstString display__display__field_names_table_row_0_2[1] = { (MR_String) "tsh_text" };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2 = {
  (MR_String) "table_section_header",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  display__display__field_types_table_row_0_2,
  display__display__field_names_table_row_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = { (MR_PseudoTypeInfo) (&display__display__type_ctor_info_table_row_0) };

static const MR_ConstString display__display__field_names_table_row_0_3[1] = { (MR_String) "tdr_row" };

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3 = {
  (MR_String) "table_developer_row",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  display__display__field_types_table_row_0_3,
  display__display__field_names_table_row_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = { &display__display__du_functor_desc_table_row_0_1 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = { &display__display__du_functor_desc_table_row_0_0 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = { &display__display__du_functor_desc_table_row_0_2 };

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = { &display__display__du_functor_desc_table_row_0_3 };

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    display__display__du_stag_ordered_table_row_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4] = {
  &display__display__du_functor_desc_table_row_0_3,
  &display__display__du_functor_desc_table_row_0_0,
  &display__display__du_functor_desc_table_row_0_2,
  &display__display__du_functor_desc_table_row_0_1
};

static const MR_Integer display__display__functor_number_map_table_row_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_row_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_row_0_0_10001)),
  ((MR_Box) (display____Compare____table_row_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_row",
  { display__display__du_name_ordered_table_row_0 },
  { display__display__du_ptag_ordered_table_row_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  display__display__functor_number_map_table_row_0,

};

void MR_CALL 
display____Compare____table_row_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

                mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
                MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

                display____Compare____table_data_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
                MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
                MR_Word next_value_of_HeadVar__2_2 = ArgX1_8;
                MR_Word next_value_of_HeadVar__3_3 = ArgY1_9;

                // direct tailcall eliminated
                ;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                HeadVar__3_3 = next_value_of_HeadVar__3_3;
                continue;
              }
              break;
          }
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
display____Unify____table_row_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_10 == CastX_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_13_13;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              TypeInfo_13_13 = (MR_Word) (&display_scalar_common_1[8]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              succeeded = display____Unify____table_data_0_0(ArgX1_5, ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
            MR_Word ArgY1_8;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = ArgX1_7;
              next_value_of_HeadVar__2_2 = ArgY1_8;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
display____Compare____table_header_group_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 15);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 2)) & (MR_Integer) 15);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    display____Compare____table_header_group_columns_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

void MR_CALL 
display____Compare____table_header_group_columns_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word SubResult1_8;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
      succeeded = (SubResult1_8 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_8;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    display____Compare____table_data_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
display____Unify____table_header_group_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 2)) & (MR_Integer) 15);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 15);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);

    succeeded = display____Unify____table_header_group_columns_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_11_11;
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&display_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = display____Unify____table_data_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
display____Compare____table_header_0_0(
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
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
display____Unify____table_header_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&display_scalar_common_1[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
display____Compare____table_column_colour_0_0(
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
display____Unify____table_column_colour_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____table_column_class_0_0(
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
display____Unify____table_column_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____table_class_0_0(
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
display____Unify____table_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____table_cell_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

              display____Compare____table_data_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));
              MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
              MR_Integer ArgY2_10 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, 1))));
              MR_Word SubResult1_8;

              display____Compare____table_data_0_0(&SubResult1_8, ArgX1_6, ArgY1_7);
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                succeeded = (ArgX2_9 < ArgY2_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX2_9 > ArgY2_10);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
display____Compare____table_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_26 == CastY_27);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ArgX1_8 = (MR_Word) ((MR_Word) (HeadVar__2_2));
              MR_Word ArgY1_9 = (MR_Word) ((MR_Word) (HeadVar__3_3));

              display____Compare____deep_link_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_22 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_23 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              display____Compare____attr_string_0_0(HeadVar__1_1, ArgX1_22, ArgY1_23);
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 4:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Float ArgX1_4 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, 0)));
              MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(2, HeadVar__3_3, 0)));

              mercury__private_builtin__builtin_compare_float_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Integer ArgX1_6 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Integer ArgY1_7 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      succeeded = (ArgX1_6 < ArgY1_7);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_6 > ArgY1_7);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                      MR_Word ArgX2_13 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
                      MR_Word ArgY2_14 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) >> 1)) & (MR_Integer) 1);
                      MR_Word ArgX3_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                      MR_Word ArgY3_17 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 2))) & (MR_Integer) 1);
                      MR_Word SubResult1_12;

                      measurement_units____Compare____memory_0_0(&SubResult1_12, ArgX1_10, ArgY1_11);
                      succeeded = (SubResult1_12 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_12;
                      else
                      {
                        MR_Word SubResult2_15;
                        MR_Integer Var_38 = (MR_Integer) (ArgX2_13);
                        MR_Integer Var_39 = (MR_Integer) (ArgY2_14);

                        succeeded = (Var_38 < Var_39);
                        if (succeeded)
                        {
                          SubResult2_15 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_38 > Var_39);
                          if (succeeded)
                          {
                            SubResult2_15 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult2_15;
                        else
                        {
                          MR_Integer Var_40 = (MR_Integer) (ArgX3_16);
                          MR_Integer Var_41 = (MR_Integer) (ArgY3_17);

                          succeeded = (Var_40 < Var_41);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_40 > Var_41);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      measurement_units____Compare____percent_0_0(HeadVar__1_1, ArgX1_18, ArgY1_19);
                    }
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_String ArgX1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_20, ArgY1_21);
                    }
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                      MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                      measurement_units____Compare____time_0_0(HeadVar__1_1, ArgX1_24, ArgY1_25);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
display____Unify____table_cell_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = display____Unify____table_data_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;
          MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Integer ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            ArgY2_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, 1))));
            succeeded = display____Unify____table_data_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
              succeeded = (ArgX2_7 == ArgY2_8);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
display____Unify____table_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgX1_7 = (MR_Word) ((MR_Word) (HeadVar__1_1));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_8 = (MR_Word) ((MR_Word) (HeadVar__2_2));
            succeeded = display____Unify____deep_link_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_19 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_20 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = display____Unify____attr_string_0_0(ArgX1_19, ArgY1_20);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(2, HeadVar__1_1, 0)));
          MR_Float ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_4 = MR_unbox_float((MR_hl_field(2, HeadVar__2_2, 0)));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Integer ArgY1_6;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_6 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (ArgX1_5 == ArgY1_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_10;
              MR_Word ArgX2_11 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) >> 1)) & (MR_Integer) 1);
              MR_Word ArgY2_12;
              MR_Word ArgX3_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 2))) & (MR_Integer) 1);
              MR_Word ArgY3_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                ArgY2_12 = ((((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) >> 1)) & (MR_Integer) 1);
                ArgY3_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 2))) & (MR_Integer) 1);
                succeeded = measurement_units____Unify____memory_0_0(ArgX1_9, ArgY1_10);
                if (succeeded)
                {
                  succeeded = (ArgX2_11 == ArgY2_12);
                  if (succeeded)
                    succeeded = (ArgX3_13 == ArgY3_14);
                }
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = measurement_units____Unify____percent_0_0(ArgX1_15, ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
              MR_Word ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                succeeded = measurement_units____Unify____time_0_0(ArgX1_21, ArgY1_22);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
display____Compare____str_attr_0_0(
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
display____Unify____str_attr_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____list_class_0_0(
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
display____Unify____list_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____link_class_0_0(
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
display____Unify____link_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
display____Compare____display_item_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_26 == CastY_27);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
                MR_Word ArgY1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

                display____Compare____deep_link_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
                MR_Word ArgY1_11 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 2));

                display____Compare____pseudo_link_0_0(HeadVar__1_1, ArgX1_10, ArgY1_11);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 3:
                case (MR_Integer) 4:
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgX1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_Word ArgY1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));

                        display____Compare____table_0_0(HeadVar__1_1, ArgX1_20, ArgY1_21);
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgX1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                        MR_Word ArgY1_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 3);
                        MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 2))));
                        MR_Word ArgX3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                        MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 3))));
                        MR_Word SubResult1_14;
                        MR_Integer Var_38 = (MR_Integer) (ArgX1_12);
                        MR_Integer Var_39 = (MR_Integer) (ArgY1_13);

                        succeeded = (Var_38 < Var_39);
                        if (succeeded)
                        {
                          SubResult1_14 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_38 > Var_39);
                          if (succeeded)
                          {
                            SubResult1_14 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_14;
                        else
                        {
                          MR_Word SubResult2_17;

                          mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[2]), &SubResult2_17, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
                          succeeded = (SubResult2_17 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_17;
                          else
                            mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_18)), ((MR_Box) (ArgY3_19)));
                        }
                      }
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_String ArgX1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_String ArgY1_23 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_22, ArgY1_23);
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgX1_24 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                        MR_Word ArgY1_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 1))));
                        MR_Word next_value_of_HeadVar__2_2 = ArgX1_24;
                        MR_Word next_value_of_HeadVar__3_3 = ArgY1_25;

                        // direct tailcall eliminated
                        ;
                        HeadVar__2_2 = next_value_of_HeadVar__2_2;
                        HeadVar__3_3 = next_value_of_HeadVar__3_3;
                        continue;
                      }
                      break;
                  }
                  break;
              }
              break;
          }
          break;
      }
    break;
  }
}

void MR_CALL 
display____Compare____table_0_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
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

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

void MR_CALL 
display____Compare____pseudo_link_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
display____Unify____display_item_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_24 == CastX_23);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              succeeded = display____Unify____deep_link_0_0(ArgX1_7, ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 2));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 2));
              succeeded = display____Unify____pseudo_link_0_0(ArgX1_9, ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_Word ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  succeeded = display____Unify____table_0_0(ArgX1_17, ArgY1_18);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_String ArgY1_4;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_4 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_String ArgY1_6;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_6 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_27_27;
                MR_Word TypeInfo_28_28;
                MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 3);
                MR_Word ArgY1_12;
                MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
                MR_Word ArgY2_14;
                MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
                MR_Word ArgY3_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 3);
                  ArgY2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 2))));
                  ArgY3_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 3))));
                  succeeded = (ArgX1_11 == ArgY1_12);
                  if (succeeded)
                  {
                    TypeInfo_27_27 = (MR_Word) (&display_scalar_common_1[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX2_13)), ((MR_Box) (ArgY2_14)));
                    if (succeeded)
                    {
                      TypeInfo_28_28 = (MR_Word) (&display_scalar_common_1[3]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX3_15)), ((MR_Box) (ArgY3_16)));
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_String ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
                MR_Word ArgY1_22;
                MR_Word next_value_of_HeadVar__1_1;
                MR_Word next_value_of_HeadVar__2_2;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 1))));
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = ArgX1_21;
                  next_value_of_HeadVar__2_2 = ArgY1_22;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  continue;
                }
              }
              break;
          }
          break;
      }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
display____Unify____table_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&display_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&display_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
display____Unify____pseudo_link_0_0(
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
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
display____Compare____display_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
display____Unify____display_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&display_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&display_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
display____Compare____deep_link_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    query____Compare____cmd_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[1]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        display____Compare____attr_string_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

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
}

MR_bool MR_CALL 
display____Unify____deep_link_0_0(
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
    MR_Word TypeInfo_14_14;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = query____Unify____cmd_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&display_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = display____Unify____attr_string_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
display____Compare____attr_string_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&display_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
display____Unify____attr_string_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&display_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

static void MR_CALL 
display__table_accumulate_columns_3_p_0(
  MR_Word HeaderGroup_4,
  MR_Integer STATE_VARIABLE_NumColumns_0_13,
  MR_Integer * STATE_VARIABLE_NumColumns_14)
{
  MR_Word ColumnTitles_6 = ((MR_Word) ((MR_hl_field(0, HeaderGroup_4, 0))));
  MR_Integer GroupColumns_10;

  if (((MR_tag((MR_Word) ColumnTitles_6)) == (MR_Integer) 1))
  {
    MR_Word SubTitles_12 = ((MR_Word) ((MR_hl_field(1, ColumnTitles_6, 1))));

    mercury__list__length_2_p_0((MR_Word) (&display__display__type_ctor_info_table_data_0), SubTitles_12, &GroupColumns_10);
  }
  else
    GroupColumns_10 = (MR_Integer) 1;
  *STATE_VARIABLE_NumColumns_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumColumns_0_13 + (MR_Unsigned) GroupColumns_10);
}

static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_STATE_VARIABLE_NumColumns_14;

  display__table_accumulate_columns_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_STATE_VARIABLE_NumColumns_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_NumColumns_14));
}

void MR_CALL 
display__header_groups_to_header_3_p_0(
  MR_Word HeaderGroups_4,
  MR_Integer * NumColumns_5,
  MR_Word * Header_6)
{
  MR_Box conv1_NumColumns_5;

  mercury__list__foldl_4_p_0((MR_Word) (&display__display__type_ctor_info_table_header_group_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&display_scalar_common_3[0]), HeaderGroups_4, ((MR_Box) ((MR_Integer) 0)), &conv1_NumColumns_5);
  *NumColumns_5 = ((MR_Integer) (conv1_NumColumns_5));
  *Header_6 = (MR_Word) (HeaderGroups_4);
}

MR_Word MR_CALL 
display__make_multi_table_header_group_4_f_0(
  MR_String MainTitle_6,
  MR_Word SubTitles_7,
  MR_Word ColumnClass_8,
  MR_Word Colour_9)
{
  MR_Word HeadVar__5_5;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (MainTitle_6));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (SubTitles_7));
  }
  {
    HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__5_5, 0) = ((MR_Box) (Var_10));
    MR_hl_field(0, HeadVar__5_5, 1) = (MR_Box) (((((MR_Unsigned) (ColumnClass_8) << 2)) | (MR_Unsigned) (Colour_9)));
  }
  return HeadVar__5_5;
}

MR_Word MR_CALL 
display__make_single_table_header_group_3_f_0(
  MR_Word ColumnTitle_5,
  MR_Word ColumnClass_6,
  MR_Word Colour_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (ColumnTitle_5));
  }
  {
    HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__4_4, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, HeadVar__4_4, 1) = (MR_Box) (((((MR_Unsigned) (ColumnClass_6) << 2)) | (MR_Unsigned) (Colour_7)));
  }
  return HeadVar__4_4;
}

static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____attr_string_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____attr_string_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____attr_string_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____deep_link_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____deep_link_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____deep_link_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____display_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____display_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____display_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____display_item_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____display_item_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____display_item_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____link_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____link_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____link_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____list_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____list_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____list_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____pseudo_link_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____pseudo_link_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____str_attr_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____str_attr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____str_attr_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_cell_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_cell_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_cell_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_column_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_column_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_column_colour_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_column_colour_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_header_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_header_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_header_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_header_group_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_header_group_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_header_group_columns_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = display____Unify____table_row_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
display____Compare____table_row_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  display____Compare____table_row_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__display__init(void)
{
}

void mercury__display__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&display__display__type_ctor_info_attr_string_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_deep_link_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_display_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_display_item_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_link_class_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_list_class_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_pseudo_link_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_str_attr_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_cell_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_class_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_column_class_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_column_colour_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_data_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_header_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_header_group_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_header_group_columns_0);
  MR_register_type_ctor_info(&display__display__type_ctor_info_table_row_0);
}

void mercury__display__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__display__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module display.
