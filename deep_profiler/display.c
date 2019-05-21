/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2017-07-23
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


/* :- module display. */
/* :- implementation. */

/*
INIT mercury__display__init
ENDINIT
*/

#include "display.mih"


#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0;

static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1];

static const MR_Integer display__display__functor_number_map_attr_string_0[1];

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4];

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

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2];

static const MR_Integer display__display__functor_number_map_link_class_0[2];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3;

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4];

static const MR_Integer display__display__functor_number_map_list_class_0[4];

static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2];

static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0;

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1];

static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1];

static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1];

static const MR_Integer display__display__functor_number_map_pseudo_link_0[1];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2;

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3];

static const MR_Integer display__display__functor_number_map_str_attr_0[3];

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0;

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0;

static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4];

static const MR_ConstString display__display__field_names_table_0_0[4];

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

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3];

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

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_class_0[13];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13];

static const MR_Integer display__display__functor_number_map_table_column_class_0[13];

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1;

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2;

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3];

static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3];

static const MR_Integer display__display__functor_number_map_table_column_colour_0[3];

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1];

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2;

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3];

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
  MR_Word display__HeaderGroup_4,
  MR_Integer display__STATE_VARIABLE_NumColumns_0_13,
  MR_Integer * display__STATE_VARIABLE_NumColumns_14);

static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
  MR_Box display__closure_arg,
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box * display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____attr_string_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____deep_link_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____display_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____display_item_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____link_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____list_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____str_attr_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_cell_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_data_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);

static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2);

static void MR_CALL 
display____Compare____table_row_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3);


static /* final */ const MR_Box display_scalar_common_1[9][2];

static /* final */ const MR_Box display_scalar_common_2[1][6];

static /* final */ const MR_Box display_scalar_common_3[1][3];




static /* final */ const MR_Box display_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_str_attr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_display_item_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_row_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_group_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_data_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&display__display__type_ctor_info_table_cell_0))
  },
};

static /* final */ const MR_Box display_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&display__display__type_ctor_info_table_header_group_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box display_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&display_scalar_common_2[0])),
    ((MR_Box) (display__header_groups_to_header_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_str_attr_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_str_attr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0 = {
  (MR_String) "attr_str",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_attr_string_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

static const MR_Integer display__display__functor_number_map_attr_string_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_attr_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____attr_string_0_0_10001)),
  ((MR_Box) (display____Compare____attr_string_0_0_10001)),
  (MR_String) "display",
  (MR_String) "attr_string",
  {     display__display__du_name_ordered_attr_string_0 },
  {     display__display__du_ptag_ordered_attr_string_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_attr_string_0
};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1query__type_ctor_info_preferences_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0 = {
  (MR_String) "deep_link",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_deep_link_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

static const MR_Integer display__display__functor_number_map_deep_link_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_deep_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____deep_link_0_0_10001)),
  ((MR_Box) (display____Compare____deep_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "deep_link",
  {     display__display__du_name_ordered_deep_link_0 },
  {     display__display__du_ptag_ordered_deep_link_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_deep_link_0
};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_display_item_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0 = {
  (MR_String) "display",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_display_0_0,
  display__display__field_names_display_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

static const MR_Integer display__display__functor_number_map_display_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_0_0_10001)),
  ((MR_Box) (display____Compare____display_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display",
  {     display__display__du_name_ordered_display_0 },
  {     display__display__du_ptag_ordered_display_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_display_0
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0 = {
  (MR_String) "display_heading",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  display__display__field_types_display_item_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1 = {
  (MR_String) "display_text",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  display__display__field_types_display_item_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2 = {
  (MR_String) "display_paragraph_break",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3 = {
  (MR_String) "display_link",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  display__display__field_types_display_item_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_pseudo_link_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4 = {
  (MR_String) "display_pseudo_link",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  display__display__field_types_display_item_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_list_class_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5 = {
  (MR_String) "display_list",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  display__display__field_types_display_item_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6 = {
  (MR_String) "display_table",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  display__display__field_types_display_item_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7 = {
  (MR_String) "display_verbatim",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  display__display__field_types_display_item_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_display_item_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8 = {
  (MR_String) "display_developer",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  display__display__field_types_display_item_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = {
  &display__display__du_functor_desc_display_item_0_2
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = {
  &display__display__du_functor_desc_display_item_0_3
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = {
  &display__display__du_functor_desc_display_item_0_4
};

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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_display_item_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_display_item_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_item_0_2
  },
  {
    (MR_Integer) 6,
    MR_SECTAG_REMOTE,
    display__display__du_stag_ordered_display_item_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_item_0_0_10001)),
  ((MR_Box) (display____Compare____display_item_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display_item",
  {     display__display__du_name_ordered_display_item_0 },
  {     display__display__du_ptag_ordered_display_item_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  display__display__functor_number_map_display_item_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____link_class_0_0_10001)),
  ((MR_Box) (display____Compare____link_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "link_class",
  {     display__display__enum_name_ordered_link_class_0 },
  {     display__display__enum_value_ordered_link_class_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__functor_number_map_link_class_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____list_class_0_0_10001)),
  ((MR_Box) (display____Compare____list_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "list_class",
  {     display__display__enum_name_ordered_list_class_0 },
  {     display__display__enum_value_ordered_list_class_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  display__display__functor_number_map_list_class_0
};

static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0 = {
  (MR_String) "pseudo_link",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_pseudo_link_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_pseudo_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____pseudo_link_0_0_10001)),
  ((MR_Box) (display____Compare____pseudo_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "pseudo_link",
  {     display__display__du_name_ordered_pseudo_link_0 },
  {     display__display__du_ptag_ordered_pseudo_link_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_pseudo_link_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____str_attr_0_0_10001)),
  ((MR_Box) (display____Compare____str_attr_0_0_10001)),
  (MR_String) "display",
  (MR_String) "str_attr",
  {     display__display__enum_name_ordered_str_attr_0 },
  {     display__display__enum_value_ordered_str_attr_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_str_attr_0
};

static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_0
  }
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_row_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1display__type_ctor_info_table_header_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_row_0
};

static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0 = {
  (MR_String) "table",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_0_0,
  display__display__field_names_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

static const MR_Integer display__display__functor_number_map_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_0_0_10001)),
  ((MR_Box) (display____Compare____table_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table",
  {     display__display__du_name_ordered_table_0 },
  {     display__display__du_ptag_ordered_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_0
};

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

static const MR_ConstString display__display__field_names_table_cell_0_0[1] = {
  (MR_String) "tc_text"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0 = {
  (MR_String) "table_cell",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_cell_0_0,
  display__display__field_names_table_cell_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1 = {
  (MR_String) "table_multi_cell",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  display__display__field_types_table_cell_0_1,
  display__display__field_names_table_cell_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2 = {
  (MR_String) "table_empty_cell",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = {
  &display__display__du_functor_desc_table_cell_0_2
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = {
  &display__display__du_functor_desc_table_cell_0_0
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = {
  &display__display__du_functor_desc_table_cell_0_1
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_table_cell_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_cell_0_0_10001)),
  ((MR_Box) (display____Compare____table_cell_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_cell",
  {     display__display__du_name_ordered_table_cell_0 },
  {     display__display__du_ptag_ordered_table_cell_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_cell_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_class",
  {     display__display__enum_name_ordered_table_class_0 },
  {     display__display__enum_value_ordered_table_class_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_class_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  (MR_Integer) 12
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_class_0[13] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_class",
  {     display__display__enum_name_ordered_table_column_class_0 },
  {     display__display__enum_value_ordered_table_column_class_0 },
  (MR_Integer) 13,
  (MR_Integer) 4,
  display__display__functor_number_map_table_column_class_0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_colour_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_colour_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_colour",
  {     display__display__enum_name_ordered_table_column_colour_0 },
  {     display__display__enum_value_ordered_table_column_colour_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_column_colour_0
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0 = {
  (MR_String) "td_f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_data_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1 = {
  (MR_String) "td_i",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  display__display__field_types_table_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2 = {
  (MR_String) "td_l",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 2,
  display__display__field_types_table_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3 = {
  (MR_String) "td_m",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  display__display__field_types_table_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4 = {
  (MR_String) "td_p",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__field_types_table_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5 = {
  (MR_String) "td_s",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  display__display__field_types_table_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6 = {
  (MR_String) "td_as",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  display__display__field_types_table_data_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7 = {
  (MR_String) "td_t",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  display__display__field_types_table_data_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = {
  &display__display__du_functor_desc_table_data_0_2
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = {
  &display__display__du_functor_desc_table_data_0_6
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = {
  &display__display__du_functor_desc_table_data_0_0
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_data_0_2
  },
  {
    (MR_Integer) 5,
    MR_SECTAG_REMOTE,
    display__display__du_stag_ordered_table_data_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_data_0_0_10001)),
  ((MR_Box) (display____Compare____table_data_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_data",
  {     display__display__du_name_ordered_table_data_0 },
  {     display__display__du_ptag_ordered_table_data_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  display__display__functor_number_map_table_data_0
};

static const MR_Integer display__display__functor_number_map_table_header_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_group_0
  }
};

static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_header_group_0,
  (MR_String) "th_groups",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (display____Unify____table_header_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header",
  {     &display__display__notag_functor_desc_table_header_0 },
  {     &display__display__notag_functor_desc_table_header_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_0
};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_header_group_columns_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_class_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_colour_0
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
    (MR_Integer) 0,
    (MR_Integer) 4
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 4,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0 = {
  (MR_String) "table_header_group",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_header_group_0_0,
  display__display__field_names_table_header_group_0_0,
  display__display__field_locns_table_header_group_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0
  }
};

static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group",
  {     display__display__du_name_ordered_table_header_group_0 },
  {     display__display__du_ptag_ordered_table_header_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_group_0
};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = {
  (MR_String) "thsc_title"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0 = {
  (MR_String) "table_header_group_single",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_header_group_columns_0_0,
  display__display__field_names_table_header_group_columns_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_data_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_data_0
};

static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1 = {
  (MR_String) "table_header_group_multi",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  display__display__field_types_table_header_group_columns_0_1,
  display__display__field_names_table_header_group_columns_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_columns_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_columns_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group_columns",
  {     display__display__du_name_ordered_table_header_group_columns_0 },
  {     display__display__du_ptag_ordered_table_header_group_columns_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_group_columns_0
};

static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_cell_0
  }
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_cell_0
};

static const MR_ConstString display__display__field_names_table_row_0_0[1] = {
  (MR_String) "tr_cells"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0 = {
  (MR_String) "table_row",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_row_0_0,
  display__display__field_names_table_row_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1 = {
  (MR_String) "table_separator_row",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

static const MR_ConstString display__display__field_names_table_row_0_2[1] = {
  (MR_String) "tsh_text"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2 = {
  (MR_String) "table_section_header",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  display__display__field_types_table_row_0_2,
  display__display__field_names_table_row_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_row_0
};

static const MR_ConstString display__display__field_names_table_row_0_3[1] = {
  (MR_String) "tdr_row"
};

static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3 = {
  (MR_String) "table_developer_row",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  display__display__field_types_table_row_0_3,
  display__display__field_names_table_row_0_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = {
  &display__display__du_functor_desc_table_row_0_1
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = {
  &display__display__du_functor_desc_table_row_0_0
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = {
  &display__display__du_functor_desc_table_row_0_2
};

static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = {
  &display__display__du_functor_desc_table_row_0_3
};

static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_table_row_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_row_0_0_10001)),
  ((MR_Box) (display____Compare____table_row_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_row",
  {     display__display__du_name_ordered_table_row_0 },
  {     display__display__du_ptag_ordered_table_row_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  display__display__functor_number_map_table_row_0
};

void MR_CALL 
display____Compare____table_row_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool display__succeeded;
        MR_Integer display__CastX_28 = (MR_Integer) display__HeadVar__2_2;
        MR_Integer display__CastY_29 = (MR_Integer) display__HeadVar__3_3;

        display__succeeded = (display__CastX_28 == display__CastY_29);
        if (display__succeeded)
          *display__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *display__HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *display__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *display__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *display__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word display__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[8], display__HeadVar__1_1, ((MR_Box) (display__Var_34)), ((MR_Box) (display__ArgY1_5)));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word display__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        display____Compare____table_data_0_0(display__HeadVar__1_1, display__Var_35, display__ArgY1_18);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word display__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word display__ArgY1_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word display__next_value_of_HeadVar__2_2 = display__Var_33;
                        MR_Word display__next_value_of_HeadVar__3_3 = display__ArgY1_27;

                        display__HeadVar__3_3 = display__next_value_of_HeadVar__3_3;
                        display__HeadVar__2_2 = display__next_value_of_HeadVar__2_2;
                      }
                      continue;
                    }
                    break;
                }
              }
              break;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
display____Unify____table_row_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool display__succeeded;
        MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
        MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

        display__succeeded = (display__CastX_11 == display__CastY_12);
        if (display__succeeded)
          display__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer display__CastX_5 = (MR_Integer) display__HeadVar__1_1;
                MR_Integer display__CastY_6 = (MR_Integer) display__HeadVar__2_2;

                display__succeeded = (display__CastY_6 == display__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word display__TypeInfo_13_13;
                MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word display__ArgY1_4;

                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (display__succeeded)
                  {
                    display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
                    display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[8];
                    {
                      display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__ArgX1_3)), ((MR_Box) (display__ArgY1_4)));
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word display__ArgY1_8;

                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (display__succeeded)
                  {
                    display__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
                    {
                      display__succeeded = display____Unify____table_data_0_0(display__ArgX1_7, display__ArgY1_8);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word display__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word display__ArgY1_10;

                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
                if (display__succeeded)
                  {
                    display__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)));
                    /* direct tailcall eliminated */
                    {
                      MR_Word display__next_value_of_HeadVar__1_1 = display__ArgX1_9;
                      MR_Word display__next_value_of_HeadVar__2_2 = display__ArgY1_10;

                      display__HeadVar__2_2 = display__next_value_of_HeadVar__2_2;
                      display__HeadVar__1_1 = display__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
              break;
          }
        return display__succeeded;
      }
      break;
    }
}

void MR_CALL 
display____Compare____table_header_group_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_12 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_13 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_12 == display__CastY_13);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word display__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 15);
        MR_Word display__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 15);
        MR_Word display__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word display__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word display__Var_10;

        {
          display____Compare____table_header_group_columns_0_0(&display__Var_10, display__ArgX1_4, display__ArgY1_5);
        }
        display__succeeded = (display__Var_10 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_10;
        else
          {
            MR_Word display__Var_11;
            MR_Integer display__Var_17 = (MR_Integer) display__ArgX2_6;
            MR_Integer display__Var_18 = (MR_Integer) display__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&display__Var_11, display__Var_17, display__Var_18);
            }
            display__succeeded = (display__Var_11 == (MR_Integer) 0);
            display__succeeded = !(display__succeeded);
            if (display__succeeded)
              *display__HeadVar__1_1 = display__Var_11;
            else
              {
                MR_Integer display__Var_19 = (MR_Integer) display__ArgX3_8;
                MR_Integer display__Var_20 = (MR_Integer) display__ArgY3_9;

                {
                  mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_19, display__Var_20);
                }
              }
          }
      }
  }
}

void MR_CALL 
display____Compare____table_header_group_columns_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_17 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_18 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_17 == display__CastY_18);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word display__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_String display__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String display__ArgY1_13 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word display__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word display__Var_16;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&display__Var_16, display__Var_23, display__ArgY1_13);
            }
            display__succeeded = (display__Var_16 == (MR_Integer) 0);
            display__succeeded = !(display__succeeded);
            if (display__succeeded)
              *display__HeadVar__1_1 = display__Var_16;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[7], display__HeadVar__1_1, ((MR_Box) (display__Var_22)), ((MR_Box) (display__ArgY2_15)));
                }
              }
          }
        else
          *display__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word display__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *display__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));

            {
              display____Compare____table_data_0_0(display__HeadVar__1_1, display__Var_24, display__ArgY1_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
display____Unify____table_header_group_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_9 == display__CastY_10);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 15);
        MR_Word display__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 15);
        MR_Word display__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
        MR_Word display__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

        {
          display__succeeded = display____Unify____table_header_group_columns_0_0(display__ArgX1_3, display__ArgY1_4);
        }
        if (display__succeeded)
          {
            display__succeeded = (display__ArgX2_5 == display__ArgY2_6);
            if (display__succeeded)
              display__succeeded = (display__ArgX3_7 == display__ArgY3_8);
          }
      }
    return display__succeeded;
  }
}

MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_9 == display__CastY_10);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word display__TypeInfo_11_11;
        MR_String display__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_String display__ArgY1_6;
        MR_Word display__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word display__ArgY2_8;

        display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (display__succeeded)
          {
            display__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
            display__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 1)));
            display__succeeded = (strcmp(display__ArgX1_5, display__ArgY1_6) == 0);
            if (display__succeeded)
              {
                display__TypeInfo_11_11 = (MR_Word) &display_scalar_common_1[7];
                {
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_11_11, ((MR_Box) (display__ArgX2_7)), ((MR_Box) (display__ArgY2_8)));
                }
              }
          }
      }
    else
      {
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4;

        display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (display__succeeded)
          {
            display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
            {
              display__succeeded = display____Unify____table_data_0_0(display__ArgX1_3, display__ArgY1_4);
            }
          }
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____table_header_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_6 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_7 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_6 == display__CastY_7);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = (MR_Word) display__HeadVar__2_2;
        MR_Word display__ArgY1_5 = (MR_Word) display__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[6], display__HeadVar__1_1, ((MR_Box) (display__ArgX1_4)), ((MR_Box) (display__ArgY1_5)));
        }
      }
  }
}

MR_bool MR_CALL 
display____Unify____table_header_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_5 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_6 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_5 == display__CastY_6);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__ArgX1_3 = (MR_Word) display__HeadVar__1_1;
        MR_Word display__ArgY1_4 = (MR_Word) display__HeadVar__2_2;

        {
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[6], ((MR_Box) (display__ArgX1_3)), ((MR_Box) (display__ArgY1_4)));
        }
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____table_column_colour_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____table_column_colour_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____table_column_class_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____table_column_class_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____table_class_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____table_class_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____table_cell_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_23 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_24 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_23 == display__CastY_24);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *display__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *display__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *display__HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word display__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    display____Compare____table_data_0_0(display__HeadVar__1_1, display__Var_28, display__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer display__Var_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word display__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *display__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word display__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer display__ArgY2_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word display__Var_17;

                  {
                    display____Compare____table_data_0_0(&display__Var_17, display__Var_30, display__ArgY1_14);
                  }
                  display__succeeded = (display__Var_17 == (MR_Integer) 0);
                  display__succeeded = !(display__succeeded);
                  if (display__succeeded)
                    *display__HeadVar__1_1 = display__Var_17;
                  else
                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_29, display__ArgY2_16);
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
display____Compare____table_data_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_166 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_167 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_166 == display__CastY_167);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word display__Var_181 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 0);

            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word display__ArgY1_45 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 0);

                  {
                    display____Compare____deep_link_0_0(display__HeadVar__1_1, display__Var_181, display__ArgY1_45);
                  }
                }
                break;
              case (MR_Integer) 1:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *display__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word display__Var_178 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *display__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word display__ArgY1_145 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 1);

                  {
                    display____Compare____attr_string_0_0(display__HeadVar__1_1, display__Var_178, display__ArgY1_145);
                  }
                }
                break;
              case (MR_Integer) 2:
                *display__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float display__Var_179 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *display__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Float display__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_float_3_p_0(display__HeadVar__1_1, display__Var_179, display__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer display__Var_180 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer display__ArgY1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_180, display__ArgY1_25);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer display__Var_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word display__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
                MR_Word display__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word display__ArgY1_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word display__ArgY2_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Integer display__ArgY3_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 3)));
                          MR_Word display__Var_76;

                          {
                            measurement_units____Compare____memory_0_0(&display__Var_76, display__Var_184, display__ArgY1_71);
                          }
                          display__succeeded = (display__Var_76 == (MR_Integer) 0);
                          display__succeeded = !(display__succeeded);
                          if (display__succeeded)
                            *display__HeadVar__1_1 = display__Var_76;
                          else
                            {
                              MR_Word display__Var_77;
                              MR_Integer display__Var_188 = (MR_Integer) display__Var_183;
                              MR_Integer display__Var_189 = (MR_Integer) display__ArgY2_73;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&display__Var_77, display__Var_188, display__Var_189);
                              }
                              display__succeeded = (display__Var_77 == (MR_Integer) 0);
                              display__succeeded = !(display__succeeded);
                              if (display__succeeded)
                                *display__HeadVar__1_1 = display__Var_77;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_182, display__ArgY3_75);
                                }
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word display__ArgY1_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            measurement_units____Compare____percent_0_0(display__HeadVar__1_1, display__Var_185, display__ArgY1_105);
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String display__Var_186 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String display__ArgY1_125 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__Var_186, display__ArgY1_125);
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word display__Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word display__ArgY1_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            measurement_units____Compare____time_0_0(display__HeadVar__1_1, display__Var_187, display__ArgY1_165);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
display____Unify____table_cell_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_11 == display__CastY_12);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
            MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

            display__succeeded = (display__CastY_10 == display__CastX_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word display__ArgY1_4;

            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (display__succeeded)
              {
                display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
                {
                  display__succeeded = display____Unify____table_data_0_0(display__ArgX1_3, display__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word display__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word display__ArgY1_6;
            MR_Integer display__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer display__ArgY2_8;

            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (display__succeeded)
              {
                display__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
                display__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 1)));
                {
                  display__succeeded = display____Unify____table_data_0_0(display__ArgX1_5, display__ArgY1_6);
                }
                if (display__succeeded)
                  display__succeeded = (display__ArgX2_7 == display__ArgY2_8);
              }
          }
          break;
      }
    return display__succeeded;
  }
}

MR_bool MR_CALL 
display____Unify____table_data_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_23 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_24 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_23 == display__CastY_24);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word display__ArgX1_7 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 0);
            MR_Word display__ArgY1_8;

            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (display__succeeded)
              {
                display__ArgY1_8 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 0);
                {
                  display__succeeded = display____Unify____deep_link_0_0(display__ArgX1_7, display__ArgY1_8);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word display__ArgX1_19 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 1);
            MR_Word display__ArgY1_20;

            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (display__succeeded)
              {
                display__ArgY1_20 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);
                {
                  display__succeeded = display____Unify____attr_string_0_0(display__ArgX1_19, display__ArgY1_20);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Float display__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float display__ArgY1_4;

            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (display__succeeded)
              {
                display__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
                display__succeeded = (display__ArgX1_3 == display__ArgY1_4);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer display__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer display__ArgY1_6;

                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (display__succeeded)
                  {
                    display__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                    display__succeeded = (display__ArgX1_5 == display__ArgY1_6);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word display__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word display__ArgY1_10;
                MR_Word display__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word display__ArgY2_12;
                MR_Integer display__ArgX3_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 3)));
                MR_Integer display__ArgY3_14;

                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (display__succeeded)
                  {
                    display__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                    display__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
                    display__ArgY3_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      display__succeeded = measurement_units____Unify____memory_0_0(display__ArgX1_9, display__ArgY1_10);
                    }
                    if (display__succeeded)
                      {
                        display__succeeded = (display__ArgX2_11 == display__ArgY2_12);
                        if (display__succeeded)
                          display__succeeded = (display__ArgX3_13 == display__ArgY3_14);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word display__ArgY1_16;

                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (display__succeeded)
                  {
                    display__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      display__succeeded = measurement_units____Unify____percent_0_0(display__ArgX1_15, display__ArgY1_16);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String display__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                MR_String display__ArgY1_18;

                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (display__succeeded)
                  {
                    display__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                    display__succeeded = (strcmp(display__ArgX1_17, display__ArgY1_18) == 0);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word display__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word display__ArgY1_22;

                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (display__succeeded)
                  {
                    display__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      display__succeeded = measurement_units____Unify____time_0_0(display__ArgX1_21, display__ArgY1_22);
                    }
                  }
              }
              break;
          }
          break;
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____str_attr_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____str_attr_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____list_class_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____list_class_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____link_class_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
display____Unify____link_class_0_0(
  MR_Word display__HeadVar__2_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____display_item_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool display__succeeded;
        MR_Integer display__CastX_186 = (MR_Integer) display__HeadVar__2_2;
        MR_Integer display__CastY_187 = (MR_Integer) display__HeadVar__3_3;

        display__succeeded = (display__CastX_186 == display__CastY_187);
        if (display__succeeded)
          *display__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *display__HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *display__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *display__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *display__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *display__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *display__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *display__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *display__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *display__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word display__Var_200 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word display__ArgY1_58 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 1);

                      {
                        display____Compare____deep_link_0_0(display__HeadVar__1_1, display__Var_200, display__ArgY1_58);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *display__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *display__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word display__ArgY1_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

                      {
                        display____Compare____pseudo_link_0_0(display__HeadVar__1_1, display__Var_204, display__ArgY1_79);
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 5:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word display__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word display__ArgY1_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                display____Compare____table_0_0(display__HeadVar__1_1, display__Var_205, display__ArgY1_143);
                              }
                            }
                            break;
                          case (MR_Integer) 1:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String display__Var_199 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_String display__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__Var_199, display__ArgY1_5);
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 3:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String display__Var_206 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 1:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_String display__ArgY1_26 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__Var_206, display__ArgY1_26);
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 4:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word display__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
                    MR_Word display__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
                    MR_Word display__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 1:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Word display__ArgY1_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));
                              MR_Word display__ArgY2_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 2)));
                              MR_Word display__ArgY3_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 3)));
                              MR_Word display__Var_115;
                              MR_Integer display__Var_208 = (MR_Integer) display__Var_203;
                              MR_Integer display__Var_209 = (MR_Integer) display__ArgY1_110;

                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&display__Var_115, display__Var_208, display__Var_209);
                              }
                              display__succeeded = (display__Var_115 == (MR_Integer) 0);
                              display__succeeded = !(display__succeeded);
                              if (display__succeeded)
                                *display__HeadVar__1_1 = display__Var_115;
                              else
                                {
                                  MR_Word display__Var_116;

                                  {
                                    mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[2], &display__Var_116, ((MR_Box) (display__Var_202)), ((MR_Box) (display__ArgY2_112)));
                                  }
                                  display__succeeded = (display__Var_116 == (MR_Integer) 0);
                                  display__succeeded = !(display__succeeded);
                                  if (display__succeeded)
                                    *display__HeadVar__1_1 = display__Var_116;
                                  else
                                    {
                                      {
                                        mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[3], display__HeadVar__1_1, ((MR_Box) (display__Var_201)), ((MR_Box) (display__ArgY3_114)));
                                      }
                                    }
                                }
                            }
                            break;
                          case (MR_Integer) 4:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 5:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String display__Var_207 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_String display__ArgY1_164 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__Var_207, display__ArgY1_164);
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            *display__HeadVar__1_1 = (MR_Integer) 1;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word display__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *display__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 2:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 3:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 4:
                            *display__HeadVar__1_1 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 5:
                            {
                              MR_Word display__ArgY1_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

                              /* direct tailcall eliminated */
                              {
                                MR_Word display__next_value_of_HeadVar__2_2 = display__Var_198;
                                MR_Word display__next_value_of_HeadVar__3_3 = display__ArgY1_185;

                                display__HeadVar__3_3 = display__next_value_of_HeadVar__3_3;
                                display__HeadVar__2_2 = display__next_value_of_HeadVar__2_2;
                              }
                              continue;
                            }
                            break;
                        }
                        break;
                    }
                  }
                  break;
              }
              break;
          }
      }
      break;
    }
}

void MR_CALL 
display____Compare____table_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_15 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_16 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_15 == display__CastY_16);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer display__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer display__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word display__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word display__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word display__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word display__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word display__Var_12;
        MR_Integer display__Var_21 = (MR_Integer) display__ArgX1_4;
        MR_Integer display__Var_22 = (MR_Integer) display__ArgY1_5;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&display__Var_12, display__Var_21, display__Var_22);
        }
        display__succeeded = (display__Var_12 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_12;
        else
          {
            MR_Word display__Var_13;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(&display__Var_13, display__ArgX2_6, display__ArgY2_7);
            }
            display__succeeded = (display__Var_13 == (MR_Integer) 0);
            display__succeeded = !(display__succeeded);
            if (display__succeeded)
              *display__HeadVar__1_1 = display__Var_13;
            else
              {
                MR_Word display__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[4], &display__Var_14, ((MR_Box) (display__ArgX3_8)), ((MR_Box) (display__ArgY3_9)));
                }
                display__succeeded = (display__Var_14 == (MR_Integer) 0);
                display__succeeded = !(display__succeeded);
                if (display__succeeded)
                  *display__HeadVar__1_1 = display__Var_14;
                else
                  {
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[5], display__HeadVar__1_1, ((MR_Box) (display__ArgX4_10)), ((MR_Box) (display__ArgY4_11)));
                    }
                  }
              }
          }
      }
  }
}

void MR_CALL 
display____Compare____pseudo_link_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_9 == display__CastY_10);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String display__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_String display__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word display__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word display__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word display__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&display__Var_8, display__ArgX1_4, display__ArgY1_5);
        }
        display__succeeded = (display__Var_8 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_8;
        else
          {
            MR_Integer display__Var_13 = (MR_Integer) display__ArgX2_6;
            MR_Integer display__Var_14 = (MR_Integer) display__ArgY2_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_13, display__Var_14);
            }
          }
      }
  }
}

MR_bool MR_CALL 
display____Unify____display_item_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool display__succeeded;
        MR_Integer display__CastX_25 = (MR_Integer) display__HeadVar__1_1;
        MR_Integer display__CastY_26 = (MR_Integer) display__HeadVar__2_2;

        display__succeeded = (display__CastX_25 == display__CastY_26);
        if (display__succeeded)
          display__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
                MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

                display__succeeded = (display__CastY_8 == display__CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word display__ArgX1_9 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 1);
                MR_Word display__ArgY1_10;

                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (display__succeeded)
                  {
                    display__ArgY1_10 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);
                    {
                      display__succeeded = display____Unify____deep_link_0_0(display__ArgX1_9, display__ArgY1_10);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word display__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word display__ArgY1_12;

                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (display__succeeded)
                  {
                    display__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
                    {
                      display__succeeded = display____Unify____pseudo_link_0_0(display__ArgX1_11, display__ArgY1_12);
                    }
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word display__ArgX1_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word display__ArgY1_20;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (display__succeeded)
                      {
                        display__ArgY1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        {
                          display__succeeded = display____Unify____table_0_0(display__ArgX1_19, display__ArgY1_20);
                        }
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String display__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_String display__ArgY1_4;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (display__succeeded)
                      {
                        display__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        display__succeeded = (strcmp(display__ArgX1_3, display__ArgY1_4) == 0);
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String display__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_String display__ArgY1_6;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (display__succeeded)
                      {
                        display__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        display__succeeded = (strcmp(display__ArgX1_5, display__ArgY1_6) == 0);
                      }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word display__TypeInfo_27_27;
                    MR_Word display__TypeInfo_28_28;
                    MR_Word display__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word display__ArgY1_14;
                    MR_Word display__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 2)));
                    MR_Word display__ArgY2_16;
                    MR_Word display__ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 3)));
                    MR_Word display__ArgY3_18;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (display__succeeded)
                      {
                        display__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        display__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
                        display__ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
                        display__succeeded = (display__ArgX1_13 == display__ArgY1_14);
                        if (display__succeeded)
                          {
                            display__TypeInfo_27_27 = (MR_Word) &display_scalar_common_1[2];
                            {
                              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_27_27, ((MR_Box) (display__ArgX2_15)), ((MR_Box) (display__ArgY2_16)));
                            }
                            if (display__succeeded)
                              {
                                display__TypeInfo_28_28 = (MR_Word) &display_scalar_common_1[3];
                                {
                                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_28_28, ((MR_Box) (display__ArgX3_17)), ((MR_Box) (display__ArgY3_18)));
                                }
                              }
                          }
                      }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String display__ArgX1_21 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_String display__ArgY1_22;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (display__succeeded)
                      {
                        display__ArgY1_22 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        display__succeeded = (strcmp(display__ArgX1_21, display__ArgY1_22) == 0);
                      }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word display__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
                    MR_Word display__ArgY1_24;

                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (display__succeeded)
                      {
                        display__ArgY1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
                        /* direct tailcall eliminated */
                        {
                          MR_Word display__next_value_of_HeadVar__1_1 = display__ArgX1_23;
                          MR_Word display__next_value_of_HeadVar__2_2 = display__ArgY1_24;

                          display__HeadVar__2_2 = display__next_value_of_HeadVar__2_2;
                          display__HeadVar__1_1 = display__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                  }
                  break;
              }
              break;
          }
        return display__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
display____Unify____table_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_11 == display__CastY_12);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__TypeInfo_13_13;
        MR_Word display__TypeInfo_14_14;
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer display__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer display__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word display__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word display__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word display__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word display__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));

        display__succeeded = (display__ArgX1_3 == display__ArgY1_4);
        if (display__succeeded)
          {
            display__succeeded = (display__ArgX2_5 == display__ArgY2_6);
            if (display__succeeded)
              {
                display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[4];
                {
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__ArgX3_7)), ((MR_Box) (display__ArgY3_8)));
                }
                if (display__succeeded)
                  {
                    display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[5];
                    {
                      display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__ArgX4_9)), ((MR_Box) (display__ArgY4_10)));
                    }
                  }
              }
          }
      }
    return display__succeeded;
  }
}

MR_bool MR_CALL 
display____Unify____pseudo_link_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_7 == display__CastY_8);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_String display__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_String display__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word display__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

        display__succeeded = (strcmp(display__ArgX1_3, display__ArgY1_4) == 0);
        if (display__succeeded)
          display__succeeded = (display__ArgX2_5 == display__ArgY2_6);
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____display_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_9 == display__CastY_10);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word display__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word display__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word display__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[2], &display__Var_8, ((MR_Box) (display__ArgX1_4)), ((MR_Box) (display__ArgY1_5)));
        }
        display__succeeded = (display__Var_8 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[3], display__HeadVar__1_1, ((MR_Box) (display__ArgX2_6)), ((MR_Box) (display__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
display____Unify____display_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_7 == display__CastY_8);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__TypeInfo_10_10;
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word display__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

        {
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[2], ((MR_Box) (display__ArgX1_3)), ((MR_Box) (display__ArgY1_4)));
        }
        if (display__succeeded)
          {
            display__TypeInfo_10_10 = (MR_Word) &display_scalar_common_1[3];
            {
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_10_10, ((MR_Box) (display__ArgX2_5)), ((MR_Box) (display__ArgY2_6)));
            }
          }
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____deep_link_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_15 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_16 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_15 == display__CastY_16);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word display__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word display__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word display__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word display__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word display__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word display__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word display__Var_12;

        {
          query____Compare____cmd_0_0(&display__Var_12, display__ArgX1_4, display__ArgY1_5);
        }
        display__succeeded = (display__Var_12 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_12;
        else
          {
            MR_Word display__Var_13;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[1], &display__Var_13, ((MR_Box) (display__ArgX2_6)), ((MR_Box) (display__ArgY2_7)));
            }
            display__succeeded = (display__Var_13 == (MR_Integer) 0);
            display__succeeded = !(display__succeeded);
            if (display__succeeded)
              *display__HeadVar__1_1 = display__Var_13;
            else
              {
                MR_Word display__Var_14;

                {
                  display____Compare____attr_string_0_0(&display__Var_14, display__ArgX3_8, display__ArgY3_9);
                }
                display__succeeded = (display__Var_14 == (MR_Integer) 0);
                display__succeeded = !(display__succeeded);
                if (display__succeeded)
                  *display__HeadVar__1_1 = display__Var_14;
                else
                  {
                    MR_Integer display__Var_21 = (MR_Integer) display__ArgX4_10;
                    MR_Integer display__Var_22 = (MR_Integer) display__ArgY4_11;

                    {
                      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Var_21, display__Var_22);
                    }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
display____Unify____deep_link_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_11 == display__CastY_12);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__TypeInfo_14_14;
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word display__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word display__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word display__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word display__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word display__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));

        {
          display__succeeded = query____Unify____cmd_0_0(display__ArgX1_3, display__ArgY1_4);
        }
        if (display__succeeded)
          {
            display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[1];
            {
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__ArgX2_5)), ((MR_Box) (display__ArgY2_6)));
            }
            if (display__succeeded)
              {
                {
                  display__succeeded = display____Unify____attr_string_0_0(display__ArgX3_7, display__ArgY3_8);
                }
                if (display__succeeded)
                  display__succeeded = (display__ArgX4_9 == display__ArgY4_10);
              }
          }
      }
    return display__succeeded;
  }
}

void MR_CALL 
display____Compare____attr_string_0_0(
  MR_Word * display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2,
  MR_Word display__HeadVar__3_3)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

    display__succeeded = (display__CastX_9 == display__CastY_10);
    if (display__succeeded)
      *display__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word display__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word display__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
        MR_String display__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
        MR_String display__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word display__Var_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[0], &display__Var_8, ((MR_Box) (display__ArgX1_4)), ((MR_Box) (display__ArgY1_5)));
        }
        display__succeeded = (display__Var_8 == (MR_Integer) 0);
        display__succeeded = !(display__succeeded);
        if (display__succeeded)
          *display__HeadVar__1_1 = display__Var_8;
        else
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__ArgX2_6, display__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
display____Unify____attr_string_0_0(
  MR_Word display__HeadVar__1_1,
  MR_Word display__HeadVar__2_2)
{
  {
    MR_bool display__succeeded;
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

    display__succeeded = (display__CastX_7 == display__CastY_8);
    if (display__succeeded)
      display__succeeded = MR_TRUE;
    else
      {
        MR_Word display__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word display__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
        MR_String display__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
        MR_String display__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

        {
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[0], ((MR_Box) (display__ArgX1_3)), ((MR_Box) (display__ArgY1_4)));
        }
        if (display__succeeded)
          display__succeeded = (strcmp(display__ArgX2_5, display__ArgY2_6) == 0);
      }
    return display__succeeded;
  }
}

static void MR_CALL 
display__table_accumulate_columns_3_p_0(
  MR_Word display__HeaderGroup_4,
  MR_Integer display__STATE_VARIABLE_NumColumns_0_13,
  MR_Integer * display__STATE_VARIABLE_NumColumns_14)
{
  {
    MR_bool display__succeeded;
    MR_Word display__ColumnTitles_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 0)));
    MR_Integer display__GroupColumns_10;
    MR_Word display__Var_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 1)))) & (MR_Integer) 15);
    MR_Word display__Var_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

    if (((MR_tag((MR_Word) display__ColumnTitles_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word display__SubTitles_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__ColumnTitles_6, (MR_Integer) 1)));
        MR_String display__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(1), display__ColumnTitles_6, (MR_Integer) 0)));

        {
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, display__SubTitles_12, &display__GroupColumns_10);
        }
      }
    else
      display__GroupColumns_10 = (MR_Integer) 1;
    *display__STATE_VARIABLE_NumColumns_14 = (display__STATE_VARIABLE_NumColumns_0_13 + display__GroupColumns_10);
  }
}

static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
  MR_Box display__closure_arg,
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box * display__wrapper_arg_3)
{
  {
    MR_Box display__closure = display__closure_arg;
    MR_Integer display__conv0_STATE_VARIABLE_NumColumns_14;

    {
      display__table_accumulate_columns_3_p_0(((MR_Word) display__wrapper_arg_1), ((MR_Integer) display__wrapper_arg_2), &display__conv0_STATE_VARIABLE_NumColumns_14);
    }
    *display__wrapper_arg_3 = ((MR_Box) (display__conv0_STATE_VARIABLE_NumColumns_14));
  }
}

void MR_CALL 
display__header_groups_to_header_3_p_0(
  MR_Word display__HeaderGroups_4,
  MR_Integer * display__NumColumns_5,
  MR_Word * display__Header_6)
{
  {
    MR_bool display__succeeded;
    MR_Box display__conv1_NumColumns_5;

    {
      mercury__list__foldl_4_p_0((MR_Word) &display__display__type_ctor_info_table_header_group_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &display_scalar_common_3[0], display__HeaderGroups_4, ((MR_Box) ((MR_Integer) 0)), &display__conv1_NumColumns_5);
    }
    *display__NumColumns_5 = ((MR_Integer) display__conv1_NumColumns_5);
    *display__Header_6 = (MR_Word) display__HeaderGroups_4;
  }
}

MR_Word MR_CALL 
display__make_multi_table_header_group_4_f_0(
  MR_String display__MainTitle_6,
  MR_Word display__SubTitles_7,
  MR_Word display__ColumnClass_8,
  MR_Word display__Colour_9)
{
  {
    MR_bool display__succeeded;
    MR_Word display__HeadVar__5_5;
    MR_Word display__Var_10;

    {
      display__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), display__Var_10, 0) = ((MR_Box) (display__MainTitle_6));
      MR_hl_field(MR_mktag(1), display__Var_10, 1) = ((MR_Box) (display__SubTitles_7));
    }
    {
      display__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), display__HeadVar__5_5, 0) = ((MR_Box) (display__Var_10));
      MR_hl_field(MR_mktag(0), display__HeadVar__5_5, 1) = ((MR_Box) ((display__ColumnClass_8 | ((display__Colour_9 << (MR_Integer) 4)))));
    }
    return display__HeadVar__5_5;
  }
}

MR_Word MR_CALL 
display__make_single_table_header_group_3_f_0(
  MR_Word display__ColumnTitle_5,
  MR_Word display__ColumnClass_6,
  MR_Word display__Colour_7)
{
  {
    MR_bool display__succeeded;
    MR_Word display__HeadVar__4_4;
    MR_Word display__Var_8;

    {
      display__Var_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), display__Var_8, 0) = ((MR_Box) (display__ColumnTitle_5));
    }
    {
      display__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), display__HeadVar__4_4, 0) = ((MR_Box) (display__Var_8));
      MR_hl_field(MR_mktag(0), display__HeadVar__4_4, 1) = ((MR_Box) ((display__ColumnClass_6 | ((display__Colour_7 << (MR_Integer) 4)))));
    }
    return display__HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____attr_string_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____attr_string_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____attr_string_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____deep_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____deep_link_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____deep_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____display_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____display_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____display_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____display_item_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____display_item_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____display_item_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____link_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____link_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____link_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____list_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____list_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____list_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____pseudo_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____pseudo_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____str_attr_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____str_attr_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____str_attr_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_cell_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_cell_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_cell_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_column_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_column_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_column_colour_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_column_colour_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_data_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_data_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_data_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_header_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_header_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_header_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_header_group_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_header_group_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_header_group_columns_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
  MR_Box display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2)
{
  {
    MR_bool display__succeeded;

    {
      display__succeeded = display____Unify____table_row_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
    return display__succeeded;
  }
}

static void MR_CALL 
display____Compare____table_row_0_0_10001(
  MR_Box * display__wrapper_arg_1,
  MR_Box display__wrapper_arg_2,
  MR_Box display__wrapper_arg_3)
{
  {
    MR_Word display__conv0_HeadVar__1_1;

    {
      display____Compare____table_row_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
  }
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

/* :- end_module display. */
