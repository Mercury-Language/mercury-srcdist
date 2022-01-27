/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "exclude.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "query.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 81 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0;

#line 84 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2];

#line 87 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0;

#line 90 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1];

#line 93 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1];

#line 96 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1];

#line 99 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1];

#line 102 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 105 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4];

#line 108 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0;

#line 111 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1];

#line 114 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1];

#line 117 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1];

#line 120 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1];

#line 123 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 126 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0;

#line 129 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2];

#line 132 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2];

#line 135 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0;

#line 138 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1];

#line 141 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1];

#line 144 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1];

#line 147 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1];

#line 150 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1];

#line 153 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0;

#line 156 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1];

#line 159 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1;

#line 162 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2;

#line 165 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1];

#line 168 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3;

#line 171 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1];

#line 174 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4;

#line 177 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3];

#line 180 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5;

#line 183 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1];

#line 186 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6;

#line 189 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1];

#line 192 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7;

#line 195 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1];

#line 198 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8;

#line 201 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1];

#line 204 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1];

#line 207 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1];

#line 210 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6];

#line 213 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4];

#line 216 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_item_0[9];

#line 219 "display.c"
static const MR_Integer display__display__functor_number_map_display_item_0[9];

#line 222 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0;

#line 225 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1;

#line 228 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2];

#line 231 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2];

#line 234 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2];

#line 237 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0;

#line 240 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1;

#line 243 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2;

#line 246 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3;

#line 249 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4];

#line 252 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4];

#line 255 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4];

#line 258 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2];

#line 261 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0;

#line 264 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1];

#line 267 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1];

#line 270 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1];

#line 273 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1];

#line 276 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0;

#line 279 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1;

#line 282 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2;

#line 285 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3];

#line 288 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3];

#line 291 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3];

#line 294 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0;

#line 297 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0;

#line 300 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4];

#line 303 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4];

#line 306 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0;

#line 309 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1];

#line 312 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1];

#line 315 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1];

#line 318 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1];

#line 321 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1];

#line 324 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1];

#line 327 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0;

#line 330 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2];

#line 333 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2];

#line 336 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1;

#line 339 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2;

#line 342 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1];

#line 345 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1];

#line 348 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1];

#line 351 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3];

#line 354 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3];

#line 357 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3];

#line 360 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0;

#line 363 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1;

#line 366 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2;

#line 369 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3];

#line 372 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3];

#line 375 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3];

#line 378 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0;

#line 381 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1;

#line 384 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2;

#line 387 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3;

#line 390 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4;

#line 393 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5;

#line 396 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6;

#line 399 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7;

#line 402 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8;

#line 405 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9;

#line 408 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10;

#line 411 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11;

#line 414 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12;

#line 417 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_class_0[13];

#line 420 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13];

#line 423 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_class_0[13];

#line 426 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0;

#line 429 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1;

#line 432 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2;

#line 435 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3];

#line 438 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3];

#line 441 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3];

#line 444 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1];

#line 447 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0;

#line 450 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1];

#line 453 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1;

#line 456 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1];

#line 459 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2;

#line 462 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3];

#line 465 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3;

#line 468 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1];

#line 471 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4;

#line 474 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1];

#line 477 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5;

#line 480 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1];

#line 483 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6;

#line 486 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1];

#line 489 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7;

#line 492 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1];

#line 495 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1];

#line 498 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1];

#line 501 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5];

#line 504 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4];

#line 507 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_data_0[8];

#line 510 "display.c"
static const MR_Integer display__display__functor_number_map_table_data_0[8];

#line 513 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1];

#line 516 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0;

#line 519 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0;

#line 522 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3];

#line 525 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3];

#line 528 "display.c"
static const MR_DuArgLocn display__display__field_locns_table_header_group_0_0[3];

#line 531 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0;

#line 534 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1];

#line 537 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1];

#line 540 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1];

#line 543 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1];

#line 546 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1];

#line 549 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1];

#line 552 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0;

#line 555 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0;

#line 558 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2];

#line 561 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2];

#line 564 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1;

#line 567 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1];

#line 570 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1];

#line 573 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2];

#line 576 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2];

#line 579 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2];

#line 582 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0;

#line 585 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1];

#line 588 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1];

#line 591 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0;

#line 594 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1;

#line 597 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1];

#line 600 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1];

#line 603 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2;

#line 606 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1];

#line 609 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1];

#line 612 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3;

#line 615 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1];

#line 618 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1];

#line 621 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1];

#line 624 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1];

#line 627 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4];

#line 630 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4];

#line 633 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4];

#line 636 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 639 "display.c"
  MR_Box display__wrapper_arg_1,
#line 641 "display.c"
  MR_Box display__wrapper_arg_2);

#line 644 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 647 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 649 "display.c"
  MR_Box display__wrapper_arg_2,
#line 651 "display.c"
  MR_Box display__wrapper_arg_3);

#line 654 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 657 "display.c"
  MR_Box display__wrapper_arg_1,
#line 659 "display.c"
  MR_Box display__wrapper_arg_2);

#line 662 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 665 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 667 "display.c"
  MR_Box display__wrapper_arg_2,
#line 669 "display.c"
  MR_Box display__wrapper_arg_3);

#line 672 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 675 "display.c"
  MR_Box display__wrapper_arg_1,
#line 677 "display.c"
  MR_Box display__wrapper_arg_2);

#line 680 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 683 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 685 "display.c"
  MR_Box display__wrapper_arg_2,
#line 687 "display.c"
  MR_Box display__wrapper_arg_3);

#line 690 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 693 "display.c"
  MR_Box display__wrapper_arg_1,
#line 695 "display.c"
  MR_Box display__wrapper_arg_2);

#line 698 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 701 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 703 "display.c"
  MR_Box display__wrapper_arg_2,
#line 705 "display.c"
  MR_Box display__wrapper_arg_3);

#line 708 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 711 "display.c"
  MR_Box display__wrapper_arg_1,
#line 713 "display.c"
  MR_Box display__wrapper_arg_2);

#line 716 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 719 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 721 "display.c"
  MR_Box display__wrapper_arg_2,
#line 723 "display.c"
  MR_Box display__wrapper_arg_3);

#line 726 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 729 "display.c"
  MR_Box display__wrapper_arg_1,
#line 731 "display.c"
  MR_Box display__wrapper_arg_2);

#line 734 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 737 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 739 "display.c"
  MR_Box display__wrapper_arg_2,
#line 741 "display.c"
  MR_Box display__wrapper_arg_3);

#line 744 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 747 "display.c"
  MR_Box display__wrapper_arg_1,
#line 749 "display.c"
  MR_Box display__wrapper_arg_2);

#line 752 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 755 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 757 "display.c"
  MR_Box display__wrapper_arg_2,
#line 759 "display.c"
  MR_Box display__wrapper_arg_3);

#line 762 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 765 "display.c"
  MR_Box display__wrapper_arg_1,
#line 767 "display.c"
  MR_Box display__wrapper_arg_2);

#line 770 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 773 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 775 "display.c"
  MR_Box display__wrapper_arg_2,
#line 777 "display.c"
  MR_Box display__wrapper_arg_3);

#line 780 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 783 "display.c"
  MR_Box display__wrapper_arg_1,
#line 785 "display.c"
  MR_Box display__wrapper_arg_2);

#line 788 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 791 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 793 "display.c"
  MR_Box display__wrapper_arg_2,
#line 795 "display.c"
  MR_Box display__wrapper_arg_3);

#line 798 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 801 "display.c"
  MR_Box display__wrapper_arg_1,
#line 803 "display.c"
  MR_Box display__wrapper_arg_2);

#line 806 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 809 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 811 "display.c"
  MR_Box display__wrapper_arg_2,
#line 813 "display.c"
  MR_Box display__wrapper_arg_3);

#line 816 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 819 "display.c"
  MR_Box display__wrapper_arg_1,
#line 821 "display.c"
  MR_Box display__wrapper_arg_2);

#line 824 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 827 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 829 "display.c"
  MR_Box display__wrapper_arg_2,
#line 831 "display.c"
  MR_Box display__wrapper_arg_3);

#line 834 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 837 "display.c"
  MR_Box display__wrapper_arg_1,
#line 839 "display.c"
  MR_Box display__wrapper_arg_2);

#line 842 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 845 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 847 "display.c"
  MR_Box display__wrapper_arg_2,
#line 849 "display.c"
  MR_Box display__wrapper_arg_3);

#line 852 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 855 "display.c"
  MR_Box display__wrapper_arg_1,
#line 857 "display.c"
  MR_Box display__wrapper_arg_2);

#line 860 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 863 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 865 "display.c"
  MR_Box display__wrapper_arg_2,
#line 867 "display.c"
  MR_Box display__wrapper_arg_3);

#line 870 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 873 "display.c"
  MR_Box display__wrapper_arg_1,
#line 875 "display.c"
  MR_Box display__wrapper_arg_2);

#line 878 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 881 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 883 "display.c"
  MR_Box display__wrapper_arg_2,
#line 885 "display.c"
  MR_Box display__wrapper_arg_3);

#line 888 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 891 "display.c"
  MR_Box display__wrapper_arg_1,
#line 893 "display.c"
  MR_Box display__wrapper_arg_2);

#line 896 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 899 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 901 "display.c"
  MR_Box display__wrapper_arg_2,
#line 903 "display.c"
  MR_Box display__wrapper_arg_3);

#line 906 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 909 "display.c"
  MR_Box display__wrapper_arg_1,
#line 911 "display.c"
  MR_Box display__wrapper_arg_2);

#line 914 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 917 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 919 "display.c"
  MR_Box display__wrapper_arg_2,
#line 921 "display.c"
  MR_Box display__wrapper_arg_3);

#line 924 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 927 "display.c"
  MR_Box display__wrapper_arg_1,
#line 929 "display.c"
  MR_Box display__wrapper_arg_2);

#line 932 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 935 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 937 "display.c"
  MR_Box display__wrapper_arg_2,
#line 939 "display.c"
  MR_Box display__wrapper_arg_3);

#line 942 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 945 "display.c"
  MR_Box display__wrapper_arg_1,
#line 947 "display.c"
  MR_Box display__wrapper_arg_2);

#line 950 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 953 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 955 "display.c"
  MR_Box display__wrapper_arg_2,
#line 957 "display.c"
  MR_Box display__wrapper_arg_3);

#line 300 "display.m"
static void MR_CALL 
display__table_accumulate_columns_3_p_0(
#line 300 "display.m"
  MR_Word display__HeaderGroup_4,
#line 300 "display.m"
  MR_Integer display__STATE_VARIABLE_NumColumns_0_13,
#line 300 "display.m"
  MR_Integer * display__STATE_VARIABLE_NumColumns_14);

#line 315 "display.m"
static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
#line 315 "display.m"
  MR_Box display__closure_arg,
#line 315 "display.m"
  MR_Box display__wrapper_arg_1,
#line 315 "display.m"
  MR_Box display__wrapper_arg_2,
#line 315 "display.m"
  MR_Box * display__wrapper_arg_3);


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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1078 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_str_attr_0
  }
};

#line 1086 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_str_attr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1092 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0 = {
  (MR_String) "attr_str",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_attr_string_0_0,
  NULL,
  NULL,
  NULL
};

#line 1107 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1112 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0
  }
};

#line 1121 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1126 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1] = {
  (MR_Integer) 0
};

#line 1131 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_attr_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____attr_string_0_0_10001)),
  ((MR_Box) (display____Compare____attr_string_0_0_10001)),
  (MR_String) "display",
  (MR_String) "attr_string",
  {
    display__display__du_name_ordered_attr_string_0
  },
  {
    display__display__du_ptag_ordered_attr_string_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_attr_string_0
};

#line 1152 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 1160 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1query__type_ctor_info_preferences_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1168 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0 = {
  (MR_String) "deep_link",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_deep_link_0_0,
  NULL,
  NULL,
  NULL
};

#line 1183 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1188 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0
  }
};

#line 1197 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1202 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1] = {
  (MR_Integer) 0
};

#line 1207 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_deep_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____deep_link_0_0_10001)),
  ((MR_Box) (display____Compare____deep_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "deep_link",
  {
    display__display__du_name_ordered_deep_link_0
  },
  {
    display__display__du_ptag_ordered_deep_link_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_deep_link_0
};

#line 1228 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1236 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_display_item_0
  }
};

#line 1244 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1250 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

#line 1256 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0 = {
  (MR_String) "display",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_display_0_0,
  display__display__field_names_display_0_0,
  NULL,
  NULL
};

#line 1271 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1276 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0
  }
};

#line 1285 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1290 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1] = {
  (MR_Integer) 0
};

#line 1295 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_0_0_10001)),
  ((MR_Box) (display____Compare____display_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display",
  {
    display__display__du_name_ordered_display_0
  },
  {
    display__display__du_ptag_ordered_display_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_display_0
};

#line 1316 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1321 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0 = {
  (MR_String) "display_heading",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 0,
  display__display__field_types_display_item_0_0,
  NULL,
  NULL,
  NULL
};

#line 1336 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1341 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1 = {
  (MR_String) "display_text",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  display__display__field_types_display_item_0_1,
  NULL,
  NULL,
  NULL
};

#line 1356 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2 = {
  (MR_String) "display_paragraph_break",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1371 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 1376 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3 = {
  (MR_String) "display_link",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  display__display__field_types_display_item_0_3,
  NULL,
  NULL,
  NULL
};

#line 1391 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_pseudo_link_0
};

#line 1396 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4 = {
  (MR_String) "display_pseudo_link",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  display__display__field_types_display_item_0_4,
  NULL,
  NULL,
  NULL
};

#line 1411 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_list_class_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1418 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5 = {
  (MR_String) "display_list",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  display__display__field_types_display_item_0_5,
  NULL,
  NULL,
  NULL
};

#line 1433 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_0
};

#line 1438 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6 = {
  (MR_String) "display_table",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 6,
  display__display__field_types_display_item_0_6,
  NULL,
  NULL,
  NULL
};

#line 1453 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1458 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7 = {
  (MR_String) "display_verbatim",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  display__display__field_types_display_item_0_7,
  NULL,
  NULL,
  NULL
};

#line 1473 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_display_item_0
};

#line 1478 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8 = {
  (MR_String) "display_developer",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  display__display__field_types_display_item_0_8,
  NULL,
  NULL,
  NULL
};

#line 1493 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = {
  &display__display__du_functor_desc_display_item_0_2
};

#line 1498 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = {
  &display__display__du_functor_desc_display_item_0_3
};

#line 1503 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = {
  &display__display__du_functor_desc_display_item_0_4
};

#line 1508 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6] = {
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_7,
  &display__display__du_functor_desc_display_item_0_8
};

#line 1518 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_display_item_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_display_item_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_item_0_2
  },
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    display__display__du_stag_ordered_display_item_0_3
  }
};

#line 1542 "display.c"
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

#line 1555 "display.c"
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

#line 1568 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____display_item_0_0_10001)),
  ((MR_Box) (display____Compare____display_item_0_0_10001)),
  (MR_String) "display",
  (MR_String) "display_item",
  {
    display__display__du_name_ordered_display_item_0
  },
  {
    display__display__du_ptag_ordered_display_item_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  display__display__functor_number_map_display_item_0
};

#line 1589 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  (MR_Integer) 0
};

#line 1595 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  (MR_Integer) 1
};

#line 1601 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_0,
  &display__display__enum_functor_desc_link_class_0_1
};

#line 1607 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_1,
  &display__display__enum_functor_desc_link_class_0_0
};

#line 1613 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1619 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_link_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____link_class_0_0_10001)),
  ((MR_Box) (display____Compare____link_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "link_class",
  {
    display__display__enum_name_ordered_link_class_0
  },
  {
    display__display__enum_value_ordered_link_class_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__functor_number_map_link_class_0
};

#line 1640 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  (MR_Integer) 0
};

#line 1646 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  (MR_Integer) 1
};

#line 1652 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  (MR_Integer) 2
};

#line 1658 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  (MR_Integer) 3
};

#line 1664 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_0,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3
};

#line 1672 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_0
};

#line 1680 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1688 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_list_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____list_class_0_0_10001)),
  ((MR_Box) (display____Compare____list_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "list_class",
  {
    display__display__enum_name_ordered_list_class_0
  },
  {
    display__display__enum_value_ordered_list_class_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  display__display__functor_number_map_list_class_0
};

#line 1709 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1715 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0 = {
  (MR_String) "pseudo_link",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_pseudo_link_0_0,
  NULL,
  NULL,
  NULL
};

#line 1730 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1735 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0
  }
};

#line 1744 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1749 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = {
  (MR_Integer) 0
};

#line 1754 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_pseudo_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____pseudo_link_0_0_10001)),
  ((MR_Box) (display____Compare____pseudo_link_0_0_10001)),
  (MR_String) "display",
  (MR_String) "pseudo_link",
  {
    display__display__du_name_ordered_pseudo_link_0
  },
  {
    display__display__du_ptag_ordered_pseudo_link_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_pseudo_link_0
};

#line 1775 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  (MR_Integer) 0
};

#line 1781 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  (MR_Integer) 1
};

#line 1787 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  (MR_Integer) 2
};

#line 1793 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1800 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1807 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1814 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_str_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____str_attr_0_0_10001)),
  ((MR_Box) (display____Compare____str_attr_0_0_10001)),
  (MR_String) "display",
  (MR_String) "str_attr",
  {
    display__display__enum_name_ordered_str_attr_0
  },
  {
    display__display__enum_value_ordered_str_attr_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_str_attr_0
};

#line 1835 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_0
  }
};

#line 1843 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_row_0
  }
};

#line 1851 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1display__type_ctor_info_table_header_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_row_0
};

#line 1859 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

#line 1867 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0 = {
  (MR_String) "table",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_0_0,
  display__display__field_names_table_0_0,
  NULL,
  NULL
};

#line 1882 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1887 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0
  }
};

#line 1896 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1901 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1] = {
  (MR_Integer) 0
};

#line 1906 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_0_0_10001)),
  ((MR_Box) (display____Compare____table_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table",
  {
    display__display__du_name_ordered_table_0
  },
  {
    display__display__du_ptag_ordered_table_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_0
};

#line 1927 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 1932 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1] = {
  (MR_String) "tc_text"
};

#line 1937 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0 = {
  (MR_String) "table_cell",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_cell_0_0,
  display__display__field_names_table_cell_0_0,
  NULL,
  NULL
};

#line 1952 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1958 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

#line 1964 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1 = {
  (MR_String) "table_multi_cell",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  display__display__field_types_table_cell_0_1,
  display__display__field_names_table_cell_0_1,
  NULL,
  NULL
};

#line 1979 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2 = {
  (MR_String) "table_empty_cell",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1994 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = {
  &display__display__du_functor_desc_table_cell_0_2
};

#line 1999 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = {
  &display__display__du_functor_desc_table_cell_0_0
};

#line 2004 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = {
  &display__display__du_functor_desc_table_cell_0_1
};

#line 2009 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_table_cell_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_cell_0_2
  }
};

#line 2028 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3] = {
  &display__display__du_functor_desc_table_cell_0_0,
  &display__display__du_functor_desc_table_cell_0_2,
  &display__display__du_functor_desc_table_cell_0_1
};

#line 2035 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2042 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_cell_0_0_10001)),
  ((MR_Box) (display____Compare____table_cell_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_cell",
  {
    display__display__du_name_ordered_table_cell_0
  },
  {
    display__display__du_ptag_ordered_table_cell_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_cell_0
};

#line 2063 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  (MR_Integer) 0
};

#line 2069 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  (MR_Integer) 1
};

#line 2075 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  (MR_Integer) 2
};

#line 2081 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_0,
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2
};

#line 2088 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2,
  &display__display__enum_functor_desc_table_class_0_0
};

#line 2095 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2102 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_class",
  {
    display__display__enum_name_ordered_table_class_0
  },
  {
    display__display__enum_value_ordered_table_class_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_class_0
};

#line 2123 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  (MR_Integer) 0
};

#line 2129 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  (MR_Integer) 1
};

#line 2135 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  (MR_Integer) 2
};

#line 2141 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  (MR_Integer) 3
};

#line 2147 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  (MR_Integer) 4
};

#line 2153 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  (MR_Integer) 5
};

#line 2159 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  (MR_Integer) 6
};

#line 2165 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  (MR_Integer) 7
};

#line 2171 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  (MR_Integer) 8
};

#line 2177 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  (MR_Integer) 9
};

#line 2183 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  (MR_Integer) 10
};

#line 2189 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  (MR_Integer) 11
};

#line 2195 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  (MR_Integer) 12
};

#line 2201 "display.c"
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

#line 2218 "display.c"
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

#line 2235 "display.c"
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

#line 2252 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_class_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_class_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_class",
  {
    display__display__enum_name_ordered_table_column_class_0
  },
  {
    display__display__enum_value_ordered_table_column_class_0
  },
  (MR_Integer) 13,
  (MR_Integer) 4,
  display__display__functor_number_map_table_column_class_0
};

#line 2273 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  (MR_Integer) 0
};

#line 2279 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  (MR_Integer) 1
};

#line 2285 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  (MR_Integer) 2
};

#line 2291 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_0,
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2
};

#line 2298 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2,
  &display__display__enum_functor_desc_table_column_colour_0_0
};

#line 2305 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2312 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_colour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (display____Unify____table_column_colour_0_0_10001)),
  ((MR_Box) (display____Compare____table_column_colour_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_column_colour",
  {
    display__display__enum_name_ordered_table_column_colour_0
  },
  {
    display__display__enum_value_ordered_table_column_colour_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  display__display__functor_number_map_table_column_colour_0
};

#line 2333 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2338 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0 = {
  (MR_String) "td_f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_data_0_0,
  NULL,
  NULL,
  NULL
};

#line 2353 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2358 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1 = {
  (MR_String) "td_i",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  display__display__field_types_table_data_0_1,
  NULL,
  NULL,
  NULL
};

#line 2373 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 2378 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2 = {
  (MR_String) "td_l",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 2,
  display__display__field_types_table_data_0_2,
  NULL,
  NULL,
  NULL
};

#line 2393 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2400 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3 = {
  (MR_String) "td_m",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  display__display__field_types_table_data_0_3,
  NULL,
  NULL,
  NULL
};

#line 2415 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0
};

#line 2420 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4 = {
  (MR_String) "td_p",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__field_types_table_data_0_4,
  NULL,
  NULL,
  NULL
};

#line 2435 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2440 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5 = {
  (MR_String) "td_s",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  display__display__field_types_table_data_0_5,
  NULL,
  NULL,
  NULL
};

#line 2455 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0
};

#line 2460 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6 = {
  (MR_String) "td_as",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  display__display__field_types_table_data_0_6,
  NULL,
  NULL,
  NULL
};

#line 2475 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0
};

#line 2480 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7 = {
  (MR_String) "td_t",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  display__display__field_types_table_data_0_7,
  NULL,
  NULL,
  NULL
};

#line 2495 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = {
  &display__display__du_functor_desc_table_data_0_2
};

#line 2500 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = {
  &display__display__du_functor_desc_table_data_0_6
};

#line 2505 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = {
  &display__display__du_functor_desc_table_data_0_0
};

#line 2510 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

#line 2519 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    display__display__du_stag_ordered_table_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_data_0_2
  },
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    display__display__du_stag_ordered_table_data_0_3
  }
};

#line 2543 "display.c"
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

#line 2555 "display.c"
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

#line 2567 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_data_0_0_10001)),
  ((MR_Box) (display____Compare____table_data_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_data",
  {
    display__display__du_name_ordered_table_data_0
  },
  {
    display__display__du_ptag_ordered_table_data_0
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  display__display__functor_number_map_table_data_0
};

#line 2588 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1] = {
  (MR_Integer) 0
};

#line 2593 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_group_0
  }
};

#line 2601 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_header_group_0,
  (MR_String) "th_groups"
};

#line 2608 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (display____Unify____table_header_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header",
  {
    &display__display__notag_functor_desc_table_header_0
  },
  {
    &display__display__notag_functor_desc_table_header_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_0
};

#line 2629 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_header_group_columns_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_class_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_colour_0
};

#line 2636 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3] = {
  (MR_String) "thg_titles",
  (MR_String) "thg_class",
  (MR_String) "thg_colour"
};

#line 2643 "display.c"
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

#line 2662 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0 = {
  (MR_String) "table_header_group",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_header_group_0_0,
  display__display__field_names_table_header_group_0_0,
  display__display__field_locns_table_header_group_0_0,
  NULL
};

#line 2677 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2682 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0
  }
};

#line 2691 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2696 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = {
  (MR_Integer) 0
};

#line 2701 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group",
  {
    display__display__du_name_ordered_table_header_group_0
  },
  {
    display__display__du_ptag_ordered_table_header_group_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_group_0
};

#line 2722 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2727 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = {
  (MR_String) "thsc_title"
};

#line 2732 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0 = {
  (MR_String) "table_header_group_single",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_header_group_columns_0_0,
  display__display__field_names_table_header_group_columns_0_0,
  NULL,
  NULL
};

#line 2747 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_data_0
  }
};

#line 2755 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_data_0
};

#line 2761 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

#line 2767 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1 = {
  (MR_String) "table_header_group_multi",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  display__display__field_types_table_header_group_columns_0_1,
  display__display__field_names_table_header_group_columns_0_1,
  NULL,
  NULL
};

#line 2782 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2787 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1
};

#line 2792 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_columns_0_1
  }
};

#line 2806 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1,
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2812 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2818 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_columns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_header_group_columns_0_0_10001)),
  ((MR_Box) (display____Compare____table_header_group_columns_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_header_group_columns",
  {
    display__display__du_name_ordered_table_header_group_columns_0
  },
  {
    display__display__du_ptag_ordered_table_header_group_columns_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  display__display__functor_number_map_table_header_group_columns_0
};

#line 2839 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_cell_0
  }
};

#line 2847 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_cell_0
};

#line 2852 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1] = {
  (MR_String) "tr_cells"
};

#line 2857 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0 = {
  (MR_String) "table_row",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  display__display__field_types_table_row_0_0,
  display__display__field_names_table_row_0_0,
  NULL,
  NULL
};

#line 2872 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1 = {
  (MR_String) "table_separator_row",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2887 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2892 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1] = {
  (MR_String) "tsh_text"
};

#line 2897 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2 = {
  (MR_String) "table_section_header",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  display__display__field_types_table_row_0_2,
  display__display__field_names_table_row_0_2,
  NULL,
  NULL
};

#line 2912 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_row_0
};

#line 2917 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1] = {
  (MR_String) "tdr_row"
};

#line 2922 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3 = {
  (MR_String) "table_developer_row",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  display__display__field_types_table_row_0_3,
  display__display__field_names_table_row_0_3,
  NULL,
  NULL
};

#line 2937 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = {
  &display__display__du_functor_desc_table_row_0_1
};

#line 2942 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = {
  &display__display__du_functor_desc_table_row_0_0
};

#line 2947 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = {
  &display__display__du_functor_desc_table_row_0_2
};

#line 2952 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = {
  &display__display__du_functor_desc_table_row_0_3
};

#line 2957 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    display__display__du_stag_ordered_table_row_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_row_0_3
  }
};

#line 2981 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4] = {
  &display__display__du_functor_desc_table_row_0_3,
  &display__display__du_functor_desc_table_row_0_0,
  &display__display__du_functor_desc_table_row_0_2,
  &display__display__du_functor_desc_table_row_0_1
};

#line 2989 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2997 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_row_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (display____Unify____table_row_0_0_10001)),
  ((MR_Box) (display____Compare____table_row_0_0_10001)),
  (MR_String) "display",
  (MR_String) "table_row",
  {
    display__display__du_name_ordered_table_row_0
  },
  {
    display__display__du_ptag_ordered_table_row_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  display__display__functor_number_map_table_row_0
};

#line 3018 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 3021 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3023 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3025 "display.c"
{
#line 3027 "display.c"
  {
#line 3029 "display.c"
    MR_bool display__succeeded;

#line 3032 "display.c"
    {
#line 3034 "display.c"
      display__succeeded = display____Unify____attr_string_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3037 "display.c"
    return display__succeeded;
#line 3039 "display.c"
  }
#line 3041 "display.c"
}

#line 3044 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 3047 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3049 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3051 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3053 "display.c"
{
#line 3055 "display.c"
  {
#line 3057 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3060 "display.c"
    {
#line 3062 "display.c"
      display____Compare____attr_string_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3065 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3067 "display.c"
  }
#line 3069 "display.c"
}

#line 3072 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 3075 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3077 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3079 "display.c"
{
#line 3081 "display.c"
  {
#line 3083 "display.c"
    MR_bool display__succeeded;

#line 3086 "display.c"
    {
#line 3088 "display.c"
      display__succeeded = display____Unify____deep_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3091 "display.c"
    return display__succeeded;
#line 3093 "display.c"
  }
#line 3095 "display.c"
}

#line 3098 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 3101 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3103 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3105 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3107 "display.c"
{
#line 3109 "display.c"
  {
#line 3111 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3114 "display.c"
    {
#line 3116 "display.c"
      display____Compare____deep_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3119 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3121 "display.c"
  }
#line 3123 "display.c"
}

#line 3126 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 3129 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3131 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3133 "display.c"
{
#line 3135 "display.c"
  {
#line 3137 "display.c"
    MR_bool display__succeeded;

#line 3140 "display.c"
    {
#line 3142 "display.c"
      display__succeeded = display____Unify____display_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3145 "display.c"
    return display__succeeded;
#line 3147 "display.c"
  }
#line 3149 "display.c"
}

#line 3152 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 3155 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3157 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3159 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3161 "display.c"
{
#line 3163 "display.c"
  {
#line 3165 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3168 "display.c"
    {
#line 3170 "display.c"
      display____Compare____display_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3173 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3175 "display.c"
  }
#line 3177 "display.c"
}

#line 3180 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 3183 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3185 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3187 "display.c"
{
#line 3189 "display.c"
  {
#line 3191 "display.c"
    MR_bool display__succeeded;

#line 3194 "display.c"
    {
#line 3196 "display.c"
      display__succeeded = display____Unify____display_item_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3199 "display.c"
    return display__succeeded;
#line 3201 "display.c"
  }
#line 3203 "display.c"
}

#line 3206 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 3209 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3211 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3213 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3215 "display.c"
{
#line 3217 "display.c"
  {
#line 3219 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3222 "display.c"
    {
#line 3224 "display.c"
      display____Compare____display_item_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3227 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3229 "display.c"
  }
#line 3231 "display.c"
}

#line 3234 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 3237 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3239 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3241 "display.c"
{
#line 3243 "display.c"
  {
#line 3245 "display.c"
    MR_bool display__succeeded;

#line 3248 "display.c"
    {
#line 3250 "display.c"
      display__succeeded = display____Unify____link_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3253 "display.c"
    return display__succeeded;
#line 3255 "display.c"
  }
#line 3257 "display.c"
}

#line 3260 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 3263 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3265 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3267 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3269 "display.c"
{
#line 3271 "display.c"
  {
#line 3273 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3276 "display.c"
    {
#line 3278 "display.c"
      display____Compare____link_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3281 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3283 "display.c"
  }
#line 3285 "display.c"
}

#line 3288 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 3291 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3293 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3295 "display.c"
{
#line 3297 "display.c"
  {
#line 3299 "display.c"
    MR_bool display__succeeded;

#line 3302 "display.c"
    {
#line 3304 "display.c"
      display__succeeded = display____Unify____list_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3307 "display.c"
    return display__succeeded;
#line 3309 "display.c"
  }
#line 3311 "display.c"
}

#line 3314 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 3317 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3319 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3321 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3323 "display.c"
{
#line 3325 "display.c"
  {
#line 3327 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3330 "display.c"
    {
#line 3332 "display.c"
      display____Compare____list_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3335 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3337 "display.c"
  }
#line 3339 "display.c"
}

#line 3342 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 3345 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3347 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3349 "display.c"
{
#line 3351 "display.c"
  {
#line 3353 "display.c"
    MR_bool display__succeeded;

#line 3356 "display.c"
    {
#line 3358 "display.c"
      display__succeeded = display____Unify____pseudo_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3361 "display.c"
    return display__succeeded;
#line 3363 "display.c"
  }
#line 3365 "display.c"
}

#line 3368 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 3371 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3373 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3375 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3377 "display.c"
{
#line 3379 "display.c"
  {
#line 3381 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3384 "display.c"
    {
#line 3386 "display.c"
      display____Compare____pseudo_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3389 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3391 "display.c"
  }
#line 3393 "display.c"
}

#line 3396 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 3399 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3401 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3403 "display.c"
{
#line 3405 "display.c"
  {
#line 3407 "display.c"
    MR_bool display__succeeded;

#line 3410 "display.c"
    {
#line 3412 "display.c"
      display__succeeded = display____Unify____str_attr_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3415 "display.c"
    return display__succeeded;
#line 3417 "display.c"
  }
#line 3419 "display.c"
}

#line 3422 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 3425 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3427 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3429 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3431 "display.c"
{
#line 3433 "display.c"
  {
#line 3435 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3438 "display.c"
    {
#line 3440 "display.c"
      display____Compare____str_attr_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3443 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3445 "display.c"
  }
#line 3447 "display.c"
}

#line 3450 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 3453 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3455 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3457 "display.c"
{
#line 3459 "display.c"
  {
#line 3461 "display.c"
    MR_bool display__succeeded;

#line 3464 "display.c"
    {
#line 3466 "display.c"
      display__succeeded = display____Unify____table_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3469 "display.c"
    return display__succeeded;
#line 3471 "display.c"
  }
#line 3473 "display.c"
}

#line 3476 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 3479 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3481 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3483 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3485 "display.c"
{
#line 3487 "display.c"
  {
#line 3489 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3492 "display.c"
    {
#line 3494 "display.c"
      display____Compare____table_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3497 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3499 "display.c"
  }
#line 3501 "display.c"
}

#line 3504 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 3507 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3509 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3511 "display.c"
{
#line 3513 "display.c"
  {
#line 3515 "display.c"
    MR_bool display__succeeded;

#line 3518 "display.c"
    {
#line 3520 "display.c"
      display__succeeded = display____Unify____table_cell_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3523 "display.c"
    return display__succeeded;
#line 3525 "display.c"
  }
#line 3527 "display.c"
}

#line 3530 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 3533 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3535 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3537 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3539 "display.c"
{
#line 3541 "display.c"
  {
#line 3543 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3546 "display.c"
    {
#line 3548 "display.c"
      display____Compare____table_cell_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3551 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3553 "display.c"
  }
#line 3555 "display.c"
}

#line 3558 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 3561 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3563 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3565 "display.c"
{
#line 3567 "display.c"
  {
#line 3569 "display.c"
    MR_bool display__succeeded;

#line 3572 "display.c"
    {
#line 3574 "display.c"
      display__succeeded = display____Unify____table_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3577 "display.c"
    return display__succeeded;
#line 3579 "display.c"
  }
#line 3581 "display.c"
}

#line 3584 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 3587 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3589 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3591 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3593 "display.c"
{
#line 3595 "display.c"
  {
#line 3597 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3600 "display.c"
    {
#line 3602 "display.c"
      display____Compare____table_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3605 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3607 "display.c"
  }
#line 3609 "display.c"
}

#line 3612 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 3615 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3617 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3619 "display.c"
{
#line 3621 "display.c"
  {
#line 3623 "display.c"
    MR_bool display__succeeded;

#line 3626 "display.c"
    {
#line 3628 "display.c"
      display__succeeded = display____Unify____table_column_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3631 "display.c"
    return display__succeeded;
#line 3633 "display.c"
  }
#line 3635 "display.c"
}

#line 3638 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 3641 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3643 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3645 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3647 "display.c"
{
#line 3649 "display.c"
  {
#line 3651 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3654 "display.c"
    {
#line 3656 "display.c"
      display____Compare____table_column_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3659 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3661 "display.c"
  }
#line 3663 "display.c"
}

#line 3666 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 3669 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3671 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3673 "display.c"
{
#line 3675 "display.c"
  {
#line 3677 "display.c"
    MR_bool display__succeeded;

#line 3680 "display.c"
    {
#line 3682 "display.c"
      display__succeeded = display____Unify____table_column_colour_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3685 "display.c"
    return display__succeeded;
#line 3687 "display.c"
  }
#line 3689 "display.c"
}

#line 3692 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 3695 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3697 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3699 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3701 "display.c"
{
#line 3703 "display.c"
  {
#line 3705 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3708 "display.c"
    {
#line 3710 "display.c"
      display____Compare____table_column_colour_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3713 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3715 "display.c"
  }
#line 3717 "display.c"
}

#line 3720 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 3723 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3725 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3727 "display.c"
{
#line 3729 "display.c"
  {
#line 3731 "display.c"
    MR_bool display__succeeded;

#line 3734 "display.c"
    {
#line 3736 "display.c"
      display__succeeded = display____Unify____table_data_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3739 "display.c"
    return display__succeeded;
#line 3741 "display.c"
  }
#line 3743 "display.c"
}

#line 3746 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 3749 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3751 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3753 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3755 "display.c"
{
#line 3757 "display.c"
  {
#line 3759 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3762 "display.c"
    {
#line 3764 "display.c"
      display____Compare____table_data_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3767 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3769 "display.c"
  }
#line 3771 "display.c"
}

#line 3774 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 3777 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3779 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3781 "display.c"
{
#line 3783 "display.c"
  {
#line 3785 "display.c"
    MR_bool display__succeeded;

#line 3788 "display.c"
    {
#line 3790 "display.c"
      display__succeeded = display____Unify____table_header_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3793 "display.c"
    return display__succeeded;
#line 3795 "display.c"
  }
#line 3797 "display.c"
}

#line 3800 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 3803 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3805 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3807 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3809 "display.c"
{
#line 3811 "display.c"
  {
#line 3813 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3816 "display.c"
    {
#line 3818 "display.c"
      display____Compare____table_header_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3821 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3823 "display.c"
  }
#line 3825 "display.c"
}

#line 3828 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 3831 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3833 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3835 "display.c"
{
#line 3837 "display.c"
  {
#line 3839 "display.c"
    MR_bool display__succeeded;

#line 3842 "display.c"
    {
#line 3844 "display.c"
      display__succeeded = display____Unify____table_header_group_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3847 "display.c"
    return display__succeeded;
#line 3849 "display.c"
  }
#line 3851 "display.c"
}

#line 3854 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 3857 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3859 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3861 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3863 "display.c"
{
#line 3865 "display.c"
  {
#line 3867 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3870 "display.c"
    {
#line 3872 "display.c"
      display____Compare____table_header_group_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3875 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3877 "display.c"
  }
#line 3879 "display.c"
}

#line 3882 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 3885 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3887 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3889 "display.c"
{
#line 3891 "display.c"
  {
#line 3893 "display.c"
    MR_bool display__succeeded;

#line 3896 "display.c"
    {
#line 3898 "display.c"
      display__succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3901 "display.c"
    return display__succeeded;
#line 3903 "display.c"
  }
#line 3905 "display.c"
}

#line 3908 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 3911 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3913 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3915 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3917 "display.c"
{
#line 3919 "display.c"
  {
#line 3921 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3924 "display.c"
    {
#line 3926 "display.c"
      display____Compare____table_header_group_columns_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3929 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3931 "display.c"
  }
#line 3933 "display.c"
}

#line 3936 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 3939 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3941 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3943 "display.c"
{
#line 3945 "display.c"
  {
#line 3947 "display.c"
    MR_bool display__succeeded;

#line 3950 "display.c"
    {
#line 3952 "display.c"
      display__succeeded = display____Unify____table_row_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3955 "display.c"
    return display__succeeded;
#line 3957 "display.c"
  }
#line 3959 "display.c"
}

#line 3962 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 3965 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3967 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3969 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3971 "display.c"
{
#line 3973 "display.c"
  {
#line 3975 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3978 "display.c"
    {
#line 3980 "display.c"
      display____Compare____table_row_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3983 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3985 "display.c"
  }
#line 3987 "display.c"
}

#line 135 "display.m"
void MR_CALL 
display____Compare____table_row_0_0(
#line 135 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 135 "display.m"
  MR_Word display__HeadVar__2_2,
#line 135 "display.m"
  MR_Word display__HeadVar__3_3)
#line 135 "display.m"
{
#line 135 "display.m"
  while (MR_TRUE)
#line 135 "display.m"
    {
#line 135 "display.m"
      /* tailcall optimized into a loop */
#line 135 "display.m"
      {
#line 135 "display.m"
        MR_bool display__succeeded;
#line 135 "display.m"
        MR_Integer display__CastX_28 = (MR_Integer) display__HeadVar__2_2;
#line 135 "display.m"
        MR_Integer display__CastY_29 = (MR_Integer) display__HeadVar__3_3;

#line 135 "display.m"
        display__succeeded = (display__CastX_28 == display__CastY_29);
#line 135 "display.m"
        if (display__succeeded)
#line 4020 "display.c"
          *display__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "display.m"
        else
#line 135 "display.m"
          if ((display__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "display.m"
            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "display.m"
              *display__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "display.m"
            else
#line 135 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4034 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
              else
#line 135 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4040 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                else
#line 4044 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
          else
#line 135 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 135 "display.m"
              {
#line 135 "display.m"
                MR_Word display__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
                if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4057 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                else
#line 135 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 135 "display.m"
                    {
#line 135 "display.m"
                      MR_Word display__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "display.m"
                      /* direct tailcall eliminated */
#line 135 "display.m"
                      {
#line 135 "display.m"
                        MR_Word display__HeadVar__2__tmp_copy_2 = display__V_33_33;
#line 135 "display.m"
                        MR_Word display__HeadVar__3__tmp_copy_3 = display__V_27_27;

#line 135 "display.m"
                        display__HeadVar__3_3 = display__HeadVar__3__tmp_copy_3;
#line 135 "display.m"
                        display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 135 "display.m"
                      }
#line 135 "display.m"
                      continue;
#line 135 "display.m"
                    }
#line 135 "display.m"
                  else
#line 135 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4091 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    else
#line 4095 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
              }
#line 135 "display.m"
            else
#line 135 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 135 "display.m"
                {
#line 135 "display.m"
                  MR_Word display__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
                  if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4110 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                  else
#line 135 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4116 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    else
#line 135 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 135 "display.m"
                        {
#line 135 "display.m"
                          MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "display.m"
                          {
#line 135 "display.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[8], display__HeadVar__1_1, ((MR_Box) (display__V_34_34)), ((MR_Box) (display__V_5_5)));
#line 135 "display.m"
                            return;
                          }
#line 135 "display.m"
                        }
#line 135 "display.m"
                      else
#line 4138 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                }
#line 135 "display.m"
              else
#line 135 "display.m"
                {
#line 135 "display.m"
                  MR_Word display__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
                  if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4151 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                  else
#line 135 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4157 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    else
#line 135 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4163 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                      else
#line 135 "display.m"
                        {
#line 135 "display.m"
                          MR_Word display__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

#line 135 "display.m"
                          {
#line 135 "display.m"
                            display____Compare____table_data_0_0(display__HeadVar__1_1, display__V_35_35, display__V_18_18);
#line 135 "display.m"
                            return;
                          }
#line 135 "display.m"
                        }
#line 135 "display.m"
                }
#line 135 "display.m"
      }
#line 135 "display.m"
      break;
#line 135 "display.m"
    }
#line 135 "display.m"
}

#line 135 "display.m"
MR_bool MR_CALL 
display____Unify____table_row_0_0(
#line 135 "display.m"
  MR_Word display__HeadVar__1_1,
#line 135 "display.m"
  MR_Word display__HeadVar__2_2)
#line 135 "display.m"
{
#line 135 "display.m"
  while (MR_TRUE)
#line 135 "display.m"
    {
#line 135 "display.m"
      /* tailcall optimized into a loop */
#line 135 "display.m"
      {
#line 135 "display.m"
        MR_bool display__succeeded;
#line 135 "display.m"
        MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
#line 135 "display.m"
        MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

#line 135 "display.m"
        display__succeeded = (display__CastX_11 == display__CastY_12);
#line 135 "display.m"
        if (display__succeeded)
#line 135 "display.m"
          display__succeeded = MR_TRUE;
#line 135 "display.m"
        else
#line 135 "display.m"
          if ((display__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 135 "display.m"
            {
#line 135 "display.m"
              MR_Integer display__CastX_5 = (MR_Integer) display__HeadVar__1_1;
#line 135 "display.m"
              MR_Integer display__CastY_6 = (MR_Integer) display__HeadVar__2_2;

#line 135 "display.m"
              display__succeeded = (display__CastY_6 == display__CastX_5);
#line 135 "display.m"
            }
#line 135 "display.m"
          else
#line 135 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 135 "display.m"
              {
#line 135 "display.m"
                MR_Word display__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "display.m"
                MR_Word display__V_10_10;

#line 135 "display.m"
                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 135 "display.m"
                if (display__succeeded)
#line 135 "display.m"
                  {
#line 135 "display.m"
                    display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)));
#line 4256 "display.c"
                    /* direct tailcall eliminated */
#line 4258 "display.c"
                    {
#line 4260 "display.c"
                      MR_Word display__HeadVar__1__tmp_copy_1 = display__V_9_9;
#line 4262 "display.c"
                      MR_Word display__HeadVar__2__tmp_copy_2 = display__V_10_10;

#line 4265 "display.c"
                      display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 4267 "display.c"
                      display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 4269 "display.c"
                    }
#line 4271 "display.c"
                    continue;
#line 135 "display.m"
                  }
#line 135 "display.m"
              }
#line 135 "display.m"
            else
#line 135 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 135 "display.m"
                {
#line 135 "display.m"
                  MR_Word display__TypeInfo_13_13;
#line 135 "display.m"
                  MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "display.m"
                  MR_Word display__V_4_4;

#line 135 "display.m"
                  display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 135 "display.m"
                  if (display__succeeded)
#line 135 "display.m"
                    {
#line 135 "display.m"
                      display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
#line 4298 "display.c"
                      display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[8];
#line 4300 "display.c"
                      {
#line 4302 "display.c"
                        return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_4_4)));
                      }
#line 135 "display.m"
                    }
#line 135 "display.m"
                }
#line 135 "display.m"
              else
#line 135 "display.m"
                {
#line 135 "display.m"
                  MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
#line 135 "display.m"
                  MR_Word display__V_8_8;

#line 135 "display.m"
                  display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 135 "display.m"
                  if (display__succeeded)
#line 135 "display.m"
                    {
#line 135 "display.m"
                      display__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
#line 4326 "display.c"
                      {
#line 4328 "display.c"
                        return display__succeeded = display____Unify____table_data_0_0(display__V_7_7, display__V_8_8);
                      }
#line 135 "display.m"
                    }
#line 135 "display.m"
                }
#line 135 "display.m"
        return display__succeeded;
#line 135 "display.m"
      }
#line 135 "display.m"
      break;
#line 135 "display.m"
    }
#line 135 "display.m"
}

#line 121 "display.m"
void MR_CALL 
display____Compare____table_header_group_columns_0_0(
#line 121 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 121 "display.m"
  MR_Word display__HeadVar__2_2,
#line 121 "display.m"
  MR_Word display__HeadVar__3_3)
#line 121 "display.m"
{
#line 121 "display.m"
  {
#line 121 "display.m"
    MR_bool display__succeeded;
#line 121 "display.m"
    MR_Integer display__CastX_17 = (MR_Integer) display__HeadVar__2_2;
#line 121 "display.m"
    MR_Integer display__CastY_18 = (MR_Integer) display__HeadVar__3_3;

#line 121 "display.m"
    display__succeeded = (display__CastX_17 == display__CastY_18);
#line 121 "display.m"
    if (display__succeeded)
#line 4370 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "display.m"
    else
#line 121 "display.m"
      if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 121 "display.m"
        {
#line 121 "display.m"
          MR_Word display__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "display.m"
          MR_String display__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 121 "display.m"
            {
#line 121 "display.m"
              MR_String display__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "display.m"
              MR_Word display__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "display.m"
              MR_Word display__V_16_16;

#line 121 "display.m"
              {
#line 121 "display.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(&display__V_16_16, display__V_23_23, display__V_14_14);
              }
#line 4399 "display.c"
              display__succeeded = (display__V_16_16 == (MR_Integer) 0);
#line 121 "display.m"
              display__succeeded = !(display__succeeded);
#line 121 "display.m"
              if (display__succeeded)
#line 121 "display.m"
                *display__HeadVar__1_1 = display__V_16_16;
#line 121 "display.m"
              else
#line 121 "display.m"
                {
#line 121 "display.m"
                  {
#line 121 "display.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[7], display__HeadVar__1_1, ((MR_Box) (display__V_22_22)), ((MR_Box) (display__V_15_15)));
#line 121 "display.m"
                    return;
                  }
#line 121 "display.m"
                }
#line 121 "display.m"
            }
#line 121 "display.m"
          else
#line 4424 "display.c"
            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 121 "display.m"
        }
#line 121 "display.m"
      else
#line 121 "display.m"
        {
#line 121 "display.m"
          MR_Word display__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));

#line 121 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4437 "display.c"
            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "display.m"
          else
#line 121 "display.m"
            {
#line 121 "display.m"
              MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));

#line 121 "display.m"
              {
#line 121 "display.m"
                display____Compare____table_data_0_0(display__HeadVar__1_1, display__V_24_24, display__V_5_5);
#line 121 "display.m"
                return;
              }
#line 121 "display.m"
            }
#line 121 "display.m"
        }
#line 121 "display.m"
  }
#line 121 "display.m"
}

#line 121 "display.m"
MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0(
#line 121 "display.m"
  MR_Word display__HeadVar__1_1,
#line 121 "display.m"
  MR_Word display__HeadVar__2_2)
#line 121 "display.m"
{
#line 121 "display.m"
  {
#line 121 "display.m"
    MR_bool display__succeeded;
#line 121 "display.m"
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
#line 121 "display.m"
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

#line 121 "display.m"
    display__succeeded = (display__CastX_9 == display__CastY_10);
#line 121 "display.m"
    if (display__succeeded)
#line 121 "display.m"
      display__succeeded = MR_TRUE;
#line 121 "display.m"
    else
#line 121 "display.m"
      if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 121 "display.m"
        {
#line 121 "display.m"
          MR_Word display__TypeInfo_11_11;
#line 121 "display.m"
          MR_String display__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "display.m"
          MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "display.m"
          MR_String display__V_7_7;
#line 121 "display.m"
          MR_Word display__V_8_8;

#line 121 "display.m"
          display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 121 "display.m"
          if (display__succeeded)
#line 121 "display.m"
            {
#line 121 "display.m"
              display__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "display.m"
              display__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 1)));
#line 4513 "display.c"
              display__succeeded = (strcmp(display__V_5_5, display__V_7_7) == 0);
#line 121 "display.m"
              if (display__succeeded)
#line 121 "display.m"
                {
#line 4519 "display.c"
                  display__TypeInfo_11_11 = (MR_Word) &display_scalar_common_1[7];
#line 4521 "display.c"
                  {
#line 4523 "display.c"
                    return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_11_11, ((MR_Box) (display__V_6_6)), ((MR_Box) (display__V_8_8)));
                  }
#line 121 "display.m"
                }
#line 121 "display.m"
            }
#line 121 "display.m"
        }
#line 121 "display.m"
      else
#line 121 "display.m"
        {
#line 121 "display.m"
          MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "display.m"
          MR_Word display__V_4_4;

#line 121 "display.m"
          display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 121 "display.m"
          if (display__succeeded)
#line 121 "display.m"
            {
#line 121 "display.m"
              display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 4549 "display.c"
              {
#line 4551 "display.c"
                return display__succeeded = display____Unify____table_data_0_0(display__V_3_3, display__V_4_4);
              }
#line 121 "display.m"
            }
#line 121 "display.m"
        }
#line 121 "display.m"
    return display__succeeded;
#line 121 "display.m"
  }
#line 121 "display.m"
}

#line 106 "display.m"
void MR_CALL 
display____Compare____table_header_group_0_0(
#line 106 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 106 "display.m"
  MR_Word display__HeadVar__2_2,
#line 106 "display.m"
  MR_Word display__HeadVar__3_3)
#line 106 "display.m"
{
#line 106 "display.m"
  {
#line 106 "display.m"
    MR_bool display__succeeded;
#line 106 "display.m"
    MR_Integer display__CastX_12 = (MR_Integer) display__HeadVar__2_2;
#line 106 "display.m"
    MR_Integer display__CastY_13 = (MR_Integer) display__HeadVar__3_3;

#line 106 "display.m"
    display__succeeded = (display__CastX_12 == display__CastY_13);
#line 106 "display.m"
    if (display__succeeded)
#line 4589 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "display.m"
    else
#line 106 "display.m"
      {
#line 106 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "display.m"
        MR_Word display__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 106 "display.m"
        MR_Word display__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 106 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "display.m"
        MR_Word display__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 106 "display.m"
        MR_Word display__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 106 "display.m"
        MR_Word display__V_10_10;

#line 106 "display.m"
        {
#line 106 "display.m"
          display____Compare____table_header_group_columns_0_0(&display__V_10_10, display__V_4_4, display__V_7_7);
        }
#line 4615 "display.c"
        display__succeeded = (display__V_10_10 == (MR_Integer) 0);
#line 106 "display.m"
        display__succeeded = !(display__succeeded);
#line 106 "display.m"
        if (display__succeeded)
#line 106 "display.m"
          *display__HeadVar__1_1 = display__V_10_10;
#line 106 "display.m"
        else
#line 106 "display.m"
          {
#line 106 "display.m"
            MR_Word display__V_11_11;
#line 106 "display.m"
            MR_Integer display__V_17_17 = (MR_Integer) display__V_5_5;
#line 106 "display.m"
            MR_Integer display__V_18_18 = (MR_Integer) display__V_8_8;

#line 106 "display.m"
            {
#line 106 "display.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&display__V_11_11, display__V_17_17, display__V_18_18);
            }
#line 4639 "display.c"
            display__succeeded = (display__V_11_11 == (MR_Integer) 0);
#line 106 "display.m"
            display__succeeded = !(display__succeeded);
#line 106 "display.m"
            if (display__succeeded)
#line 106 "display.m"
              *display__HeadVar__1_1 = display__V_11_11;
#line 106 "display.m"
            else
#line 106 "display.m"
              {
#line 106 "display.m"
                MR_Integer display__V_19_19 = (MR_Integer) display__V_6_6;
#line 106 "display.m"
                MR_Integer display__V_20_20 = (MR_Integer) display__V_9_9;

#line 106 "display.m"
                {
#line 106 "display.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_19_19, display__V_20_20);
#line 106 "display.m"
                  return;
                }
#line 106 "display.m"
              }
#line 106 "display.m"
          }
#line 106 "display.m"
      }
#line 106 "display.m"
  }
#line 106 "display.m"
}

#line 106 "display.m"
MR_bool MR_CALL 
display____Unify____table_header_group_0_0(
#line 106 "display.m"
  MR_Word display__HeadVar__1_1,
#line 106 "display.m"
  MR_Word display__HeadVar__2_2)
#line 106 "display.m"
{
#line 106 "display.m"
  {
#line 106 "display.m"
    MR_bool display__succeeded;
#line 106 "display.m"
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
#line 106 "display.m"
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

#line 106 "display.m"
    display__succeeded = (display__CastX_9 == display__CastY_10);
#line 106 "display.m"
    if (display__succeeded)
#line 106 "display.m"
      display__succeeded = MR_TRUE;
#line 106 "display.m"
    else
#line 106 "display.m"
      {
#line 106 "display.m"
        MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "display.m"
        MR_Word display__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 106 "display.m"
        MR_Word display__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 106 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "display.m"
        MR_Word display__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 106 "display.m"
        MR_Word display__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

#line 4715 "display.c"
        {
#line 4717 "display.c"
          display__succeeded = display____Unify____table_header_group_columns_0_0(display__V_3_3, display__V_6_6);
        }
#line 106 "display.m"
        if (display__succeeded)
#line 106 "display.m"
          {
#line 4724 "display.c"
            display__succeeded = (display__V_4_4 == display__V_7_7);
#line 106 "display.m"
            if (display__succeeded)
#line 4728 "display.c"
              display__succeeded = (display__V_5_5 == display__V_8_8);
#line 106 "display.m"
          }
#line 106 "display.m"
      }
#line 106 "display.m"
    return display__succeeded;
#line 106 "display.m"
  }
#line 106 "display.m"
}

#line 101 "display.m"
void MR_CALL 
display____Compare____table_header_0_0(
#line 101 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 101 "display.m"
  MR_Word display__HeadVar__2_2,
#line 101 "display.m"
  MR_Word display__HeadVar__3_3)
#line 101 "display.m"
{
#line 101 "display.m"
  {
#line 101 "display.m"
    MR_bool display__succeeded;
#line 101 "display.m"
    MR_Integer display__CastX_6 = (MR_Integer) display__HeadVar__2_2;
#line 101 "display.m"
    MR_Integer display__CastY_7 = (MR_Integer) display__HeadVar__3_3;

#line 101 "display.m"
    display__succeeded = (display__CastX_6 == display__CastY_7);
#line 101 "display.m"
    if (display__succeeded)
#line 4765 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "display.m"
    else
#line 101 "display.m"
      {
#line 101 "display.m"
        MR_Word display__V_4_4 = (MR_Word) display__HeadVar__2_2;
#line 101 "display.m"
        MR_Word display__V_5_5 = (MR_Word) display__HeadVar__3_3;

#line 101 "display.m"
        {
#line 101 "display.m"
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[6], display__HeadVar__1_1, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_5_5)));
#line 101 "display.m"
          return;
        }
#line 101 "display.m"
      }
#line 101 "display.m"
  }
#line 101 "display.m"
}

#line 101 "display.m"
MR_bool MR_CALL 
display____Unify____table_header_0_0(
#line 101 "display.m"
  MR_Word display__HeadVar__1_1,
#line 101 "display.m"
  MR_Word display__HeadVar__2_2)
#line 101 "display.m"
{
#line 101 "display.m"
  {
#line 101 "display.m"
    MR_bool display__succeeded;
#line 101 "display.m"
    MR_Integer display__CastX_5 = (MR_Integer) display__HeadVar__1_1;
#line 101 "display.m"
    MR_Integer display__CastY_6 = (MR_Integer) display__HeadVar__2_2;

#line 101 "display.m"
    display__succeeded = (display__CastX_5 == display__CastY_6);
#line 101 "display.m"
    if (display__succeeded)
#line 101 "display.m"
      display__succeeded = MR_TRUE;
#line 101 "display.m"
    else
#line 101 "display.m"
      {
#line 101 "display.m"
        MR_Word display__V_3_3 = (MR_Word) display__HeadVar__1_1;
#line 101 "display.m"
        MR_Word display__V_4_4 = (MR_Word) display__HeadVar__2_2;

#line 4823 "display.c"
        {
#line 4825 "display.c"
          return display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[6], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_4_4)));
        }
#line 101 "display.m"
      }
#line 101 "display.m"
    return display__succeeded;
#line 101 "display.m"
  }
#line 101 "display.m"
}

#line 185 "display.m"
void MR_CALL 
display____Compare____table_data_0_0(
#line 185 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 185 "display.m"
  MR_Word display__HeadVar__2_2,
#line 185 "display.m"
  MR_Word display__HeadVar__3_3)
#line 185 "display.m"
{
#line 185 "display.m"
  {
#line 185 "display.m"
    MR_bool display__succeeded;
#line 185 "display.m"
    MR_Integer display__CastX_166 = (MR_Integer) display__HeadVar__2_2;
#line 185 "display.m"
    MR_Integer display__CastY_167 = (MR_Integer) display__HeadVar__3_3;

#line 185 "display.m"
    display__succeeded = (display__CastX_166 == display__CastY_167);
#line 185 "display.m"
    if (display__succeeded)
#line 4861 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "display.m"
    else
#line 185 "display.m"
      if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 185 "display.m"
        {
#line 185 "display.m"
          MR_Word display__V_178_178 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

#line 185 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 185 "display.m"
            {
#line 185 "display.m"
              MR_Word display__V_145_145 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 1);

#line 185 "display.m"
              {
#line 185 "display.m"
                display____Compare____attr_string_0_0(display__HeadVar__1_1, display__V_178_178, display__V_145_145);
#line 185 "display.m"
                return;
              }
#line 185 "display.m"
            }
#line 185 "display.m"
          else
#line 185 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4892 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
            else
#line 185 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4898 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4904 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4910 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4916 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4922 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 4926 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
        }
#line 185 "display.m"
      else
#line 185 "display.m"
        if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 185 "display.m"
          {
#line 185 "display.m"
            MR_Float display__V_179_179 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 185 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4941 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
            else
#line 185 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 185 "display.m"
                {
#line 185 "display.m"
                  MR_Float display__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

#line 185 "display.m"
                  {
#line 185 "display.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(display__HeadVar__1_1, display__V_179_179, display__V_5_5);
#line 185 "display.m"
                    return;
                  }
#line 185 "display.m"
                }
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4965 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4971 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4977 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4983 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4989 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 4993 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
          }
#line 185 "display.m"
        else
#line 185 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 185 "display.m"
            {
#line 185 "display.m"
              MR_Word display__V_181_181 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 0);

#line 185 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5008 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5014 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 185 "display.m"
                    {
#line 185 "display.m"
                      MR_Word display__V_45_45 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 0);

#line 185 "display.m"
                      {
#line 185 "display.m"
                        display____Compare____deep_link_0_0(display__HeadVar__1_1, display__V_181_181, display__V_45_45);
#line 185 "display.m"
                        return;
                      }
#line 185 "display.m"
                    }
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5038 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5044 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5050 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5056 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                          else
#line 5060 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
            }
#line 185 "display.m"
          else
#line 185 "display.m"
            if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Integer display__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5075 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5081 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5087 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 185 "display.m"
                        {
#line 185 "display.m"
                          MR_Integer display__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 185 "display.m"
                          {
#line 185 "display.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_180_180, display__V_25_25);
#line 185 "display.m"
                            return;
                          }
#line 185 "display.m"
                        }
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5111 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5117 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5123 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                            else
#line 5127 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
              }
#line 185 "display.m"
            else
#line 185 "display.m"
              if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 185 "display.m"
                {
#line 185 "display.m"
                  MR_Integer display__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 185 "display.m"
                  MR_Word display__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 185 "display.m"
                  MR_Word display__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5146 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5152 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5158 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5164 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 185 "display.m"
                            {
#line 185 "display.m"
                              MR_Word display__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));
#line 185 "display.m"
                              MR_Word display__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 2)));
#line 185 "display.m"
                              MR_Integer display__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 3)));
#line 185 "display.m"
                              MR_Word display__V_76_76;

#line 185 "display.m"
                              {
#line 185 "display.m"
                                measurement_units____Compare____memory_0_0(&display__V_76_76, display__V_184_184, display__V_73_73);
                              }
#line 5186 "display.c"
                              display__succeeded = (display__V_76_76 == (MR_Integer) 0);
#line 185 "display.m"
                              display__succeeded = !(display__succeeded);
#line 185 "display.m"
                              if (display__succeeded)
#line 185 "display.m"
                                *display__HeadVar__1_1 = display__V_76_76;
#line 185 "display.m"
                              else
#line 185 "display.m"
                                {
#line 185 "display.m"
                                  MR_Word display__V_77_77;
#line 185 "display.m"
                                  MR_Integer display__V_188_188 = (MR_Integer) display__V_183_183;
#line 185 "display.m"
                                  MR_Integer display__V_189_189 = (MR_Integer) display__V_74_74;

#line 185 "display.m"
                                  {
#line 185 "display.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&display__V_77_77, display__V_188_188, display__V_189_189);
                                  }
#line 5210 "display.c"
                                  display__succeeded = (display__V_77_77 == (MR_Integer) 0);
#line 185 "display.m"
                                  display__succeeded = !(display__succeeded);
#line 185 "display.m"
                                  if (display__succeeded)
#line 185 "display.m"
                                    *display__HeadVar__1_1 = display__V_77_77;
#line 185 "display.m"
                                  else
#line 185 "display.m"
                                    {
#line 185 "display.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_182_182, display__V_75_75);
#line 185 "display.m"
                                      return;
                                    }
#line 185 "display.m"
                                }
#line 185 "display.m"
                            }
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5235 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5241 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                              else
#line 5245 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                }
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 185 "display.m"
                  {
#line 185 "display.m"
                    MR_Word display__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5260 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5266 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5272 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5278 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5284 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 185 "display.m"
                                {
#line 185 "display.m"
                                  MR_Word display__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 185 "display.m"
                                  {
#line 185 "display.m"
                                    measurement_units____Compare____percent_0_0(display__HeadVar__1_1, display__V_185_185, display__V_105_105);
#line 185 "display.m"
                                    return;
                                  }
#line 185 "display.m"
                                }
#line 185 "display.m"
                              else
#line 185 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5308 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                                else
#line 5312 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                  }
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 185 "display.m"
                    {
#line 185 "display.m"
                      MR_String display__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5327 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5333 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5339 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5345 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5351 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                              else
#line 185 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5357 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                                else
#line 185 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 185 "display.m"
                                    {
#line 185 "display.m"
                                      MR_String display__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 185 "display.m"
                                      {
#line 185 "display.m"
                                        mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__V_186_186, display__V_125_125);
#line 185 "display.m"
                                        return;
                                      }
#line 185 "display.m"
                                    }
#line 185 "display.m"
                                  else
#line 5379 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    }
#line 185 "display.m"
                  else
#line 185 "display.m"
                    {
#line 185 "display.m"
                      MR_Word display__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5392 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5398 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5404 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5410 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5416 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                              else
#line 185 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5422 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                                else
#line 185 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5428 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                                  else
#line 185 "display.m"
                                    {
#line 185 "display.m"
                                      MR_Word display__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 185 "display.m"
                                      {
#line 185 "display.m"
                                        measurement_units____Compare____time_0_0(display__HeadVar__1_1, display__V_187_187, display__V_165_165);
#line 185 "display.m"
                                        return;
                                      }
#line 185 "display.m"
                                    }
#line 185 "display.m"
                    }
#line 185 "display.m"
  }
#line 185 "display.m"
}

#line 185 "display.m"
MR_bool MR_CALL 
display____Unify____table_data_0_0(
#line 185 "display.m"
  MR_Word display__HeadVar__1_1,
#line 185 "display.m"
  MR_Word display__HeadVar__2_2)
#line 185 "display.m"
{
#line 185 "display.m"
  {
#line 185 "display.m"
    MR_bool display__succeeded;
#line 185 "display.m"
    MR_Integer display__CastX_23 = (MR_Integer) display__HeadVar__1_1;
#line 185 "display.m"
    MR_Integer display__CastY_24 = (MR_Integer) display__HeadVar__2_2;

#line 185 "display.m"
    display__succeeded = (display__CastX_23 == display__CastY_24);
#line 185 "display.m"
    if (display__succeeded)
#line 185 "display.m"
      display__succeeded = MR_TRUE;
#line 185 "display.m"
    else
#line 185 "display.m"
      if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 185 "display.m"
        {
#line 185 "display.m"
          MR_Word display__V_19_19 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 1);
#line 185 "display.m"
          MR_Word display__V_20_20;

#line 185 "display.m"
          display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 185 "display.m"
          if (display__succeeded)
#line 185 "display.m"
            {
#line 185 "display.m"
              display__V_20_20 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);
#line 5496 "display.c"
              {
#line 5498 "display.c"
                return display__succeeded = display____Unify____attr_string_0_0(display__V_19_19, display__V_20_20);
              }
#line 185 "display.m"
            }
#line 185 "display.m"
        }
#line 185 "display.m"
      else
#line 185 "display.m"
        if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 185 "display.m"
          {
#line 185 "display.m"
            MR_Float display__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "display.m"
            MR_Float display__V_4_4;

#line 185 "display.m"
            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 185 "display.m"
            if (display__succeeded)
#line 185 "display.m"
              {
#line 185 "display.m"
                display__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
#line 5524 "display.c"
                display__succeeded = (display__V_3_3 == display__V_4_4);
#line 185 "display.m"
              }
#line 185 "display.m"
          }
#line 185 "display.m"
        else
#line 185 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 185 "display.m"
            {
#line 185 "display.m"
              MR_Word display__V_7_7 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 0);
#line 185 "display.m"
              MR_Word display__V_8_8;

#line 185 "display.m"
              display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 185 "display.m"
              if (display__succeeded)
#line 185 "display.m"
                {
#line 185 "display.m"
                  display__V_8_8 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 0);
#line 5549 "display.c"
                  {
#line 5551 "display.c"
                    return display__succeeded = display____Unify____deep_link_0_0(display__V_7_7, display__V_8_8);
                  }
#line 185 "display.m"
                }
#line 185 "display.m"
            }
#line 185 "display.m"
          else
#line 185 "display.m"
            if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Integer display__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "display.m"
                MR_Integer display__V_6_6;

#line 185 "display.m"
                display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 185 "display.m"
                if (display__succeeded)
#line 185 "display.m"
                  {
#line 185 "display.m"
                    display__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 5577 "display.c"
                    display__succeeded = (display__V_5_5 == display__V_6_6);
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
            else
#line 185 "display.m"
              if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 185 "display.m"
                {
#line 185 "display.m"
                  MR_Word display__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "display.m"
                  MR_Word display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 2)));
#line 185 "display.m"
                  MR_Integer display__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 3)));
#line 185 "display.m"
                  MR_Word display__V_12_12;
#line 185 "display.m"
                  MR_Word display__V_13_13;
#line 185 "display.m"
                  MR_Integer display__V_14_14;

#line 185 "display.m"
                  display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 185 "display.m"
                  if (display__succeeded)
#line 185 "display.m"
                    {
#line 185 "display.m"
                      display__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "display.m"
                      display__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 185 "display.m"
                      display__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 5614 "display.c"
                      {
#line 5616 "display.c"
                        display__succeeded = measurement_units____Unify____memory_0_0(display__V_9_9, display__V_12_12);
                      }
#line 185 "display.m"
                      if (display__succeeded)
#line 185 "display.m"
                        {
#line 5623 "display.c"
                          display__succeeded = (display__V_10_10 == display__V_13_13);
#line 185 "display.m"
                          if (display__succeeded)
#line 5627 "display.c"
                            display__succeeded = (display__V_11_11 == display__V_14_14);
#line 185 "display.m"
                        }
#line 185 "display.m"
                    }
#line 185 "display.m"
                }
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 185 "display.m"
                  {
#line 185 "display.m"
                    MR_Word display__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "display.m"
                    MR_Word display__V_16_16;

#line 185 "display.m"
                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 185 "display.m"
                    if (display__succeeded)
#line 185 "display.m"
                      {
#line 185 "display.m"
                        display__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 5654 "display.c"
                        {
#line 5656 "display.c"
                          return display__succeeded = measurement_units____Unify____percent_0_0(display__V_15_15, display__V_16_16);
                        }
#line 185 "display.m"
                      }
#line 185 "display.m"
                  }
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 185 "display.m"
                    {
#line 185 "display.m"
                      MR_String display__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "display.m"
                      MR_String display__V_18_18;

#line 185 "display.m"
                      display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 185 "display.m"
                      if (display__succeeded)
#line 185 "display.m"
                        {
#line 185 "display.m"
                          display__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 5682 "display.c"
                          display__succeeded = (strcmp(display__V_17_17, display__V_18_18) == 0);
#line 185 "display.m"
                        }
#line 185 "display.m"
                    }
#line 185 "display.m"
                  else
#line 185 "display.m"
                    {
#line 185 "display.m"
                      MR_Word display__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "display.m"
                      MR_Word display__V_22_22;

#line 185 "display.m"
                      display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 185 "display.m"
                      if (display__succeeded)
#line 185 "display.m"
                        {
#line 185 "display.m"
                          display__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 5705 "display.c"
                          {
#line 5707 "display.c"
                            return display__succeeded = measurement_units____Unify____time_0_0(display__V_21_21, display__V_22_22);
                          }
#line 185 "display.m"
                        }
#line 185 "display.m"
                    }
#line 185 "display.m"
    return display__succeeded;
#line 185 "display.m"
  }
#line 185 "display.m"
}

#line 162 "display.m"
void MR_CALL 
display____Compare____table_column_colour_0_0(
#line 162 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 162 "display.m"
  MR_Word display__HeadVar__2_2,
#line 162 "display.m"
  MR_Word display__HeadVar__3_3)
#line 162 "display.m"
{
#line 162 "display.m"
  {
#line 162 "display.m"
    MR_bool display__succeeded;
#line 162 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 162 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 162 "display.m"
    {
#line 162 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 162 "display.m"
      return;
    }
#line 162 "display.m"
  }
#line 162 "display.m"
}

#line 162 "display.m"
MR_bool MR_CALL 
display____Unify____table_column_colour_0_0(
#line 162 "display.m"
  MR_Word display__HeadVar__2_1,
#line 162 "display.m"
  MR_Word display__HeadVar__2_2)
#line 162 "display.m"
{
#line 5762 "display.c"
  {
#line 5764 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5767 "display.c"
    return display__succeeded;
#line 5769 "display.c"
  }
#line 162 "display.m"
}

#line 167 "display.m"
void MR_CALL 
display____Compare____table_column_class_0_0(
#line 167 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 167 "display.m"
  MR_Word display__HeadVar__2_2,
#line 167 "display.m"
  MR_Word display__HeadVar__3_3)
#line 167 "display.m"
{
#line 167 "display.m"
  {
#line 167 "display.m"
    MR_bool display__succeeded;
#line 167 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 167 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 167 "display.m"
    {
#line 167 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 167 "display.m"
      return;
    }
#line 167 "display.m"
  }
#line 167 "display.m"
}

#line 167 "display.m"
MR_bool MR_CALL 
display____Unify____table_column_class_0_0(
#line 167 "display.m"
  MR_Word display__HeadVar__2_1,
#line 167 "display.m"
  MR_Word display__HeadVar__2_2)
#line 167 "display.m"
{
#line 5815 "display.c"
  {
#line 5817 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5820 "display.c"
    return display__succeeded;
#line 5822 "display.c"
  }
#line 167 "display.m"
}

#line 157 "display.m"
void MR_CALL 
display____Compare____table_class_0_0(
#line 157 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 157 "display.m"
  MR_Word display__HeadVar__2_2,
#line 157 "display.m"
  MR_Word display__HeadVar__3_3)
#line 157 "display.m"
{
#line 157 "display.m"
  {
#line 157 "display.m"
    MR_bool display__succeeded;
#line 157 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 157 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 157 "display.m"
    {
#line 157 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 157 "display.m"
      return;
    }
#line 157 "display.m"
  }
#line 157 "display.m"
}

#line 157 "display.m"
MR_bool MR_CALL 
display____Unify____table_class_0_0(
#line 157 "display.m"
  MR_Word display__HeadVar__2_1,
#line 157 "display.m"
  MR_Word display__HeadVar__2_2)
#line 157 "display.m"
{
#line 5868 "display.c"
  {
#line 5870 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5873 "display.c"
    return display__succeeded;
#line 5875 "display.c"
  }
#line 157 "display.m"
}

#line 147 "display.m"
void MR_CALL 
display____Compare____table_cell_0_0(
#line 147 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 147 "display.m"
  MR_Word display__HeadVar__2_2,
#line 147 "display.m"
  MR_Word display__HeadVar__3_3)
#line 147 "display.m"
{
#line 147 "display.m"
  {
#line 147 "display.m"
    MR_bool display__succeeded;
#line 147 "display.m"
    MR_Integer display__CastX_23 = (MR_Integer) display__HeadVar__2_2;
#line 147 "display.m"
    MR_Integer display__CastY_24 = (MR_Integer) display__HeadVar__3_3;

#line 147 "display.m"
    display__succeeded = (display__CastX_23 == display__CastY_24);
#line 147 "display.m"
    if (display__succeeded)
#line 5904 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "display.m"
    else
#line 147 "display.m"
      if ((display__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "display.m"
        if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "display.m"
          *display__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "display.m"
        else
#line 147 "display.m"
          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5918 "display.c"
            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
          else
#line 5922 "display.c"
            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
      else
#line 147 "display.m"
        if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Word display__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "display.m"
            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5935 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
            else
#line 147 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 147 "display.m"
                {
#line 147 "display.m"
                  MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__3_3, (MR_Integer) 0)));

#line 147 "display.m"
                  {
#line 147 "display.m"
                    display____Compare____table_data_0_0(display__HeadVar__1_1, display__V_28_28, display__V_5_5);
#line 147 "display.m"
                    return;
                  }
#line 147 "display.m"
                }
#line 147 "display.m"
              else
#line 5957 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
          }
#line 147 "display.m"
        else
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Integer display__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "display.m"
            MR_Word display__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "display.m"
            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5972 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
            else
#line 147 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5978 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
              else
#line 147 "display.m"
                {
#line 147 "display.m"
                  MR_Word display__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "display.m"
                  MR_Integer display__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "display.m"
                  MR_Word display__V_17_17;

#line 147 "display.m"
                  {
#line 147 "display.m"
                    display____Compare____table_data_0_0(&display__V_17_17, display__V_30_30, display__V_15_15);
                  }
#line 5996 "display.c"
                  display__succeeded = (display__V_17_17 == (MR_Integer) 0);
#line 147 "display.m"
                  display__succeeded = !(display__succeeded);
#line 147 "display.m"
                  if (display__succeeded)
#line 147 "display.m"
                    *display__HeadVar__1_1 = display__V_17_17;
#line 147 "display.m"
                  else
#line 147 "display.m"
                    {
#line 147 "display.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_29_29, display__V_16_16);
#line 147 "display.m"
                      return;
                    }
#line 147 "display.m"
                }
#line 147 "display.m"
          }
#line 147 "display.m"
  }
#line 147 "display.m"
}

#line 147 "display.m"
MR_bool MR_CALL 
display____Unify____table_cell_0_0(
#line 147 "display.m"
  MR_Word display__HeadVar__1_1,
#line 147 "display.m"
  MR_Word display__HeadVar__2_2)
#line 147 "display.m"
{
#line 147 "display.m"
  {
#line 147 "display.m"
    MR_bool display__succeeded;
#line 147 "display.m"
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
#line 147 "display.m"
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

#line 147 "display.m"
    display__succeeded = (display__CastX_11 == display__CastY_12);
#line 147 "display.m"
    if (display__succeeded)
#line 147 "display.m"
      display__succeeded = MR_TRUE;
#line 147 "display.m"
    else
#line 147 "display.m"
      if ((display__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "display.m"
        {
#line 147 "display.m"
          MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__1_1;
#line 147 "display.m"
          MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__2_2;

#line 147 "display.m"
          display__succeeded = (display__CastY_10 == display__CastX_9);
#line 147 "display.m"
        }
#line 147 "display.m"
      else
#line 147 "display.m"
        if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "display.m"
            MR_Word display__V_4_4;

#line 147 "display.m"
            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 147 "display.m"
            if (display__succeeded)
#line 147 "display.m"
              {
#line 147 "display.m"
                display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));
#line 6080 "display.c"
                {
#line 6082 "display.c"
                  return display__succeeded = display____Unify____table_data_0_0(display__V_3_3, display__V_4_4);
                }
#line 147 "display.m"
              }
#line 147 "display.m"
          }
#line 147 "display.m"
        else
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "display.m"
            MR_Integer display__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "display.m"
            MR_Word display__V_7_7;
#line 147 "display.m"
            MR_Integer display__V_8_8;

#line 147 "display.m"
            display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 147 "display.m"
            if (display__succeeded)
#line 147 "display.m"
              {
#line 147 "display.m"
                display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "display.m"
                display__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 1)));
#line 6112 "display.c"
                {
#line 6114 "display.c"
                  display__succeeded = display____Unify____table_data_0_0(display__V_5_5, display__V_7_7);
                }
#line 147 "display.m"
                if (display__succeeded)
#line 6119 "display.c"
                  display__succeeded = (display__V_6_6 == display__V_8_8);
#line 147 "display.m"
              }
#line 147 "display.m"
          }
#line 147 "display.m"
    return display__succeeded;
#line 147 "display.m"
  }
#line 147 "display.m"
}

#line 82 "display.m"
void MR_CALL 
display____Compare____table_0_0(
#line 82 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 82 "display.m"
  MR_Word display__HeadVar__2_2,
#line 82 "display.m"
  MR_Word display__HeadVar__3_3)
#line 82 "display.m"
{
#line 82 "display.m"
  {
#line 82 "display.m"
    MR_bool display__succeeded;
#line 82 "display.m"
    MR_Integer display__CastX_15 = (MR_Integer) display__HeadVar__2_2;
#line 82 "display.m"
    MR_Integer display__CastY_16 = (MR_Integer) display__HeadVar__3_3;

#line 82 "display.m"
    display__succeeded = (display__CastX_15 == display__CastY_16);
#line 82 "display.m"
    if (display__succeeded)
#line 6156 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "display.m"
    else
#line 82 "display.m"
      {
#line 82 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "display.m"
        MR_Integer display__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));
#line 82 "display.m"
        MR_Word display__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 82 "display.m"
        MR_Integer display__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
#line 82 "display.m"
        MR_Word display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 2)));
#line 82 "display.m"
        MR_Word display__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 3)));
#line 82 "display.m"
        MR_Word display__V_12_12;
#line 82 "display.m"
        MR_Integer display__V_21_21 = (MR_Integer) display__V_4_4;
#line 82 "display.m"
        MR_Integer display__V_22_22 = (MR_Integer) display__V_8_8;

#line 82 "display.m"
        {
#line 82 "display.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&display__V_12_12, display__V_21_21, display__V_22_22);
        }
#line 6190 "display.c"
        display__succeeded = (display__V_12_12 == (MR_Integer) 0);
#line 82 "display.m"
        display__succeeded = !(display__succeeded);
#line 82 "display.m"
        if (display__succeeded)
#line 82 "display.m"
          *display__HeadVar__1_1 = display__V_12_12;
#line 82 "display.m"
        else
#line 82 "display.m"
          {
#line 82 "display.m"
            MR_Word display__V_13_13;

#line 82 "display.m"
            {
#line 82 "display.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&display__V_13_13, display__V_5_5, display__V_9_9);
            }
#line 6210 "display.c"
            display__succeeded = (display__V_13_13 == (MR_Integer) 0);
#line 82 "display.m"
            display__succeeded = !(display__succeeded);
#line 82 "display.m"
            if (display__succeeded)
#line 82 "display.m"
              *display__HeadVar__1_1 = display__V_13_13;
#line 82 "display.m"
            else
#line 82 "display.m"
              {
#line 82 "display.m"
                MR_Word display__V_14_14;

#line 82 "display.m"
                {
#line 82 "display.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[4], &display__V_14_14, ((MR_Box) (display__V_6_6)), ((MR_Box) (display__V_10_10)));
                }
#line 6230 "display.c"
                display__succeeded = (display__V_14_14 == (MR_Integer) 0);
#line 82 "display.m"
                display__succeeded = !(display__succeeded);
#line 82 "display.m"
                if (display__succeeded)
#line 82 "display.m"
                  *display__HeadVar__1_1 = display__V_14_14;
#line 82 "display.m"
                else
#line 82 "display.m"
                  {
#line 82 "display.m"
                    {
#line 82 "display.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[5], display__HeadVar__1_1, ((MR_Box) (display__V_7_7)), ((MR_Box) (display__V_11_11)));
#line 82 "display.m"
                      return;
                    }
#line 82 "display.m"
                  }
#line 82 "display.m"
              }
#line 82 "display.m"
          }
#line 82 "display.m"
      }
#line 82 "display.m"
  }
#line 82 "display.m"
}

#line 82 "display.m"
MR_bool MR_CALL 
display____Unify____table_0_0(
#line 82 "display.m"
  MR_Word display__HeadVar__1_1,
#line 82 "display.m"
  MR_Word display__HeadVar__2_2)
#line 82 "display.m"
{
#line 82 "display.m"
  {
#line 82 "display.m"
    MR_bool display__succeeded;
#line 82 "display.m"
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
#line 82 "display.m"
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

#line 82 "display.m"
    display__succeeded = (display__CastX_11 == display__CastY_12);
#line 82 "display.m"
    if (display__succeeded)
#line 82 "display.m"
      display__succeeded = MR_TRUE;
#line 82 "display.m"
    else
#line 82 "display.m"
      {
#line 82 "display.m"
        MR_Word display__TypeInfo_13_13;
#line 82 "display.m"
        MR_Word display__TypeInfo_14_14;
#line 82 "display.m"
        MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 82 "display.m"
        MR_Integer display__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
#line 82 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 2)));
#line 82 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 3)));
#line 82 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 82 "display.m"
        MR_Integer display__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 82 "display.m"
        MR_Word display__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
#line 82 "display.m"
        MR_Word display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));

#line 6311 "display.c"
        display__succeeded = (display__V_3_3 == display__V_7_7);
#line 82 "display.m"
        if (display__succeeded)
#line 82 "display.m"
          {
#line 6317 "display.c"
            display__succeeded = (display__V_4_4 == display__V_8_8);
#line 82 "display.m"
            if (display__succeeded)
#line 82 "display.m"
              {
#line 6323 "display.c"
                display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[4];
#line 6325 "display.c"
                {
#line 6327 "display.c"
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_9_9)));
                }
#line 82 "display.m"
                if (display__succeeded)
#line 82 "display.m"
                  {
#line 6334 "display.c"
                    display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[5];
#line 6336 "display.c"
                    {
#line 6338 "display.c"
                      return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__V_6_6)), ((MR_Box) (display__V_10_10)));
                    }
#line 82 "display.m"
                  }
#line 82 "display.m"
              }
#line 82 "display.m"
          }
#line 82 "display.m"
      }
#line 82 "display.m"
    return display__succeeded;
#line 82 "display.m"
  }
#line 82 "display.m"
}

#line 210 "display.m"
void MR_CALL 
display____Compare____str_attr_0_0(
#line 210 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 210 "display.m"
  MR_Word display__HeadVar__2_2,
#line 210 "display.m"
  MR_Word display__HeadVar__3_3)
#line 210 "display.m"
{
#line 210 "display.m"
  {
#line 210 "display.m"
    MR_bool display__succeeded;
#line 210 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 210 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 210 "display.m"
    {
#line 210 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 210 "display.m"
      return;
    }
#line 210 "display.m"
  }
#line 210 "display.m"
}

#line 210 "display.m"
MR_bool MR_CALL 
display____Unify____str_attr_0_0(
#line 210 "display.m"
  MR_Word display__HeadVar__2_1,
#line 210 "display.m"
  MR_Word display__HeadVar__2_2)
#line 210 "display.m"
{
#line 6397 "display.c"
  {
#line 6399 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6402 "display.c"
    return display__succeeded;
#line 6404 "display.c"
  }
#line 210 "display.m"
}

#line 246 "display.m"
void MR_CALL 
display____Compare____pseudo_link_0_0(
#line 246 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 246 "display.m"
  MR_Word display__HeadVar__2_2,
#line 246 "display.m"
  MR_Word display__HeadVar__3_3)
#line 246 "display.m"
{
#line 246 "display.m"
  {
#line 246 "display.m"
    MR_bool display__succeeded;
#line 246 "display.m"
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
#line 246 "display.m"
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

#line 246 "display.m"
    display__succeeded = (display__CastX_9 == display__CastY_10);
#line 246 "display.m"
    if (display__succeeded)
#line 6433 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "display.m"
    else
#line 246 "display.m"
      {
#line 246 "display.m"
        MR_String display__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "display.m"
        MR_String display__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 246 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
#line 246 "display.m"
        MR_Word display__V_8_8;

#line 246 "display.m"
        {
#line 246 "display.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&display__V_8_8, display__V_4_4, display__V_6_6);
        }
#line 6455 "display.c"
        display__succeeded = (display__V_8_8 == (MR_Integer) 0);
#line 246 "display.m"
        display__succeeded = !(display__succeeded);
#line 246 "display.m"
        if (display__succeeded)
#line 246 "display.m"
          *display__HeadVar__1_1 = display__V_8_8;
#line 246 "display.m"
        else
#line 246 "display.m"
          {
#line 246 "display.m"
            MR_Integer display__V_13_13 = (MR_Integer) display__V_5_5;
#line 246 "display.m"
            MR_Integer display__V_14_14 = (MR_Integer) display__V_7_7;

#line 246 "display.m"
            {
#line 246 "display.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_13_13, display__V_14_14);
#line 246 "display.m"
              return;
            }
#line 246 "display.m"
          }
#line 246 "display.m"
      }
#line 246 "display.m"
  }
#line 246 "display.m"
}

#line 246 "display.m"
MR_bool MR_CALL 
display____Unify____pseudo_link_0_0(
#line 246 "display.m"
  MR_Word display__HeadVar__1_1,
#line 246 "display.m"
  MR_Word display__HeadVar__2_2)
#line 246 "display.m"
{
#line 246 "display.m"
  {
#line 246 "display.m"
    MR_bool display__succeeded;
#line 246 "display.m"
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
#line 246 "display.m"
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

#line 246 "display.m"
    display__succeeded = (display__CastX_7 == display__CastY_8);
#line 246 "display.m"
    if (display__succeeded)
#line 246 "display.m"
      display__succeeded = MR_TRUE;
#line 246 "display.m"
    else
#line 246 "display.m"
      {
#line 246 "display.m"
        MR_String display__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "display.m"
        MR_String display__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

#line 6525 "display.c"
        display__succeeded = (strcmp(display__V_3_3, display__V_5_5) == 0);
#line 246 "display.m"
        if (display__succeeded)
#line 6529 "display.c"
          display__succeeded = (display__V_4_4 == display__V_6_6);
#line 246 "display.m"
      }
#line 246 "display.m"
    return display__succeeded;
#line 246 "display.m"
  }
#line 246 "display.m"
}

#line 220 "display.m"
void MR_CALL 
display____Compare____list_class_0_0(
#line 220 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 220 "display.m"
  MR_Word display__HeadVar__2_2,
#line 220 "display.m"
  MR_Word display__HeadVar__3_3)
#line 220 "display.m"
{
#line 220 "display.m"
  {
#line 220 "display.m"
    MR_bool display__succeeded;
#line 220 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 220 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 220 "display.m"
    {
#line 220 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 220 "display.m"
      return;
    }
#line 220 "display.m"
  }
#line 220 "display.m"
}

#line 220 "display.m"
MR_bool MR_CALL 
display____Unify____list_class_0_0(
#line 220 "display.m"
  MR_Word display__HeadVar__2_1,
#line 220 "display.m"
  MR_Word display__HeadVar__2_2)
#line 220 "display.m"
{
#line 6581 "display.c"
  {
#line 6583 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6586 "display.c"
    return display__succeeded;
#line 6588 "display.c"
  }
#line 220 "display.m"
}

#line 255 "display.m"
void MR_CALL 
display____Compare____link_class_0_0(
#line 255 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 255 "display.m"
  MR_Word display__HeadVar__2_2,
#line 255 "display.m"
  MR_Word display__HeadVar__3_3)
#line 255 "display.m"
{
#line 255 "display.m"
  {
#line 255 "display.m"
    MR_bool display__succeeded;
#line 255 "display.m"
    MR_Integer display__Cast_HeadVar1_4 = (MR_Integer) display__HeadVar__2_2;
#line 255 "display.m"
    MR_Integer display__Cast_HeadVar2_5 = (MR_Integer) display__HeadVar__3_3;

#line 255 "display.m"
    {
#line 255 "display.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__Cast_HeadVar1_4, display__Cast_HeadVar2_5);
#line 255 "display.m"
      return;
    }
#line 255 "display.m"
  }
#line 255 "display.m"
}

#line 255 "display.m"
MR_bool MR_CALL 
display____Unify____link_class_0_0(
#line 255 "display.m"
  MR_Word display__HeadVar__2_1,
#line 255 "display.m"
  MR_Word display__HeadVar__2_2)
#line 255 "display.m"
{
#line 6634 "display.c"
  {
#line 6636 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6639 "display.c"
    return display__succeeded;
#line 6641 "display.c"
  }
#line 255 "display.m"
}

#line 34 "display.m"
void MR_CALL 
display____Compare____display_item_0_0(
#line 34 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 34 "display.m"
  MR_Word display__HeadVar__2_2,
#line 34 "display.m"
  MR_Word display__HeadVar__3_3)
#line 34 "display.m"
{
#line 34 "display.m"
  while (MR_TRUE)
#line 34 "display.m"
    {
#line 34 "display.m"
      /* tailcall optimized into a loop */
#line 34 "display.m"
      {
#line 34 "display.m"
        MR_bool display__succeeded;
#line 34 "display.m"
        MR_Integer display__CastX_186 = (MR_Integer) display__HeadVar__2_2;
#line 34 "display.m"
        MR_Integer display__CastY_187 = (MR_Integer) display__HeadVar__3_3;

#line 34 "display.m"
        display__succeeded = (display__CastX_186 == display__CastY_187);
#line 34 "display.m"
        if (display__succeeded)
#line 6676 "display.c"
          *display__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "display.m"
        else
#line 34 "display.m"
          if ((display__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "display.m"
            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "display.m"
              *display__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "display.m"
            else
#line 34 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6690 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
              else
#line 34 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6696 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                else
#line 34 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6702 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6708 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6714 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6720 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6726 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 6730 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
          else
#line 34 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 34 "display.m"
              {
#line 34 "display.m"
                MR_Word display__V_200_200 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

#line 34 "display.m"
                if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6743 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                else
#line 34 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 34 "display.m"
                    {
#line 34 "display.m"
                      MR_Word display__V_58_58 = (MR_Word) MR_body(((MR_Word) display__HeadVar__3_3), (MR_Integer) 1);

#line 34 "display.m"
                      {
#line 34 "display.m"
                        display____Compare____deep_link_0_0(display__HeadVar__1_1, display__V_200_200, display__V_58_58);
#line 34 "display.m"
                        return;
                      }
#line 34 "display.m"
                    }
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6767 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6773 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6779 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6785 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6791 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6797 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 6801 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
              }
#line 34 "display.m"
            else
#line 34 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 34 "display.m"
                {
#line 34 "display.m"
                  MR_Word display__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "display.m"
                  if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6816 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6822 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 34 "display.m"
                        {
#line 34 "display.m"
                          MR_Word display__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__3_3, (MR_Integer) 0)));

#line 34 "display.m"
                          {
#line 34 "display.m"
                            display____Compare____pseudo_link_0_0(display__HeadVar__1_1, display__V_204_204, display__V_79_79);
#line 34 "display.m"
                            return;
                          }
#line 34 "display.m"
                        }
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6846 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6852 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6858 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6864 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6870 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 6874 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                }
#line 34 "display.m"
              else
#line 34 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_Word display__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                    if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6889 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6895 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6901 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 34 "display.m"
                            {
#line 34 "display.m"
                              MR_Word display__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 34 "display.m"
                              /* direct tailcall eliminated */
#line 34 "display.m"
                              {
#line 34 "display.m"
                                MR_Word display__HeadVar__2__tmp_copy_2 = display__V_198_198;
#line 34 "display.m"
                                MR_Word display__HeadVar__3__tmp_copy_3 = display__V_185_185;

#line 34 "display.m"
                                display__HeadVar__3_3 = display__HeadVar__3__tmp_copy_3;
#line 34 "display.m"
                                display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 34 "display.m"
                              }
#line 34 "display.m"
                              continue;
#line 34 "display.m"
                            }
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6935 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6941 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6947 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6953 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                  else
#line 6957 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                  }
#line 34 "display.m"
                else
#line 34 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 34 "display.m"
                    {
#line 34 "display.m"
                      MR_String display__V_199_199 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                      if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6972 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6978 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6984 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6990 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 34 "display.m"
                                {
#line 34 "display.m"
                                  MR_String display__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 34 "display.m"
                                  {
#line 34 "display.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__V_199_199, display__V_5_5);
#line 34 "display.m"
                                    return;
                                  }
#line 34 "display.m"
                                }
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7014 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7020 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7026 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                    else
#line 7030 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 34 "display.m"
                      {
#line 34 "display.m"
                        MR_Word display__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 34 "display.m"
                        MR_Word display__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "display.m"
                        MR_Word display__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                        if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7049 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7055 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7061 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7067 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7073 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 34 "display.m"
                                    {
#line 34 "display.m"
                                      MR_Word display__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "display.m"
                                      MR_Word display__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 2)));
#line 34 "display.m"
                                      MR_Word display__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 3)));
#line 34 "display.m"
                                      MR_Word display__V_115_115;
#line 34 "display.m"
                                      MR_Integer display__V_208_208 = (MR_Integer) display__V_203_203;
#line 34 "display.m"
                                      MR_Integer display__V_209_209 = (MR_Integer) display__V_112_112;

#line 34 "display.m"
                                      {
#line 34 "display.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&display__V_115_115, display__V_208_208, display__V_209_209);
                                      }
#line 7099 "display.c"
                                      display__succeeded = (display__V_115_115 == (MR_Integer) 0);
#line 34 "display.m"
                                      display__succeeded = !(display__succeeded);
#line 34 "display.m"
                                      if (display__succeeded)
#line 34 "display.m"
                                        *display__HeadVar__1_1 = display__V_115_115;
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        {
#line 34 "display.m"
                                          MR_Word display__V_116_116;

#line 34 "display.m"
                                          {
#line 34 "display.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[2], &display__V_116_116, ((MR_Box) (display__V_202_202)), ((MR_Box) (display__V_113_113)));
                                          }
#line 7119 "display.c"
                                          display__succeeded = (display__V_116_116 == (MR_Integer) 0);
#line 34 "display.m"
                                          display__succeeded = !(display__succeeded);
#line 34 "display.m"
                                          if (display__succeeded)
#line 34 "display.m"
                                            *display__HeadVar__1_1 = display__V_116_116;
#line 34 "display.m"
                                          else
#line 34 "display.m"
                                            {
#line 34 "display.m"
                                              {
#line 34 "display.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[3], display__HeadVar__1_1, ((MR_Box) (display__V_201_201)), ((MR_Box) (display__V_114_114)));
#line 34 "display.m"
                                                return;
                                              }
#line 34 "display.m"
                                            }
#line 34 "display.m"
                                        }
#line 34 "display.m"
                                    }
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7148 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7154 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                      else
#line 7158 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      }
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 34 "display.m"
                        {
#line 34 "display.m"
                          MR_Word display__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                          if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7173 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7179 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7185 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7191 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7197 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7203 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 34 "display.m"
                                        {
#line 34 "display.m"
                                          MR_Word display__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 34 "display.m"
                                          {
#line 34 "display.m"
                                            display____Compare____table_0_0(display__HeadVar__1_1, display__V_205_205, display__V_143_143);
#line 34 "display.m"
                                            return;
                                          }
#line 34 "display.m"
                                        }
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7227 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                        else
#line 7231 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        }
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 34 "display.m"
                          {
#line 34 "display.m"
                            MR_String display__V_206_206 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7246 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7252 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7258 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7264 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7270 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7276 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7282 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                        else
#line 34 "display.m"
                                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 34 "display.m"
                                            {
#line 34 "display.m"
                                              MR_String display__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 34 "display.m"
                                              {
#line 34 "display.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__V_206_206, display__V_26_26);
#line 34 "display.m"
                                                return;
                                              }
#line 34 "display.m"
                                            }
#line 34 "display.m"
                                          else
#line 7304 "display.c"
                                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                          }
#line 34 "display.m"
                        else
#line 34 "display.m"
                          {
#line 34 "display.m"
                            MR_String display__V_207_207 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
                            if ((display__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7317 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7323 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7329 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7335 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7341 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7347 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7353 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                        else
#line 34 "display.m"
                                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7359 "display.c"
                                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                          else
#line 34 "display.m"
                                            {
#line 34 "display.m"
                                              MR_String display__V_164_164 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 1)));

#line 34 "display.m"
                                              {
#line 34 "display.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__V_207_207, display__V_164_164);
#line 34 "display.m"
                                                return;
                                              }
#line 34 "display.m"
                                            }
#line 34 "display.m"
                          }
#line 34 "display.m"
      }
#line 34 "display.m"
      break;
#line 34 "display.m"
    }
#line 34 "display.m"
}

#line 34 "display.m"
MR_bool MR_CALL 
display____Unify____display_item_0_0(
#line 34 "display.m"
  MR_Word display__HeadVar__1_1,
#line 34 "display.m"
  MR_Word display__HeadVar__2_2)
#line 34 "display.m"
{
#line 34 "display.m"
  while (MR_TRUE)
#line 34 "display.m"
    {
#line 34 "display.m"
      /* tailcall optimized into a loop */
#line 34 "display.m"
      {
#line 34 "display.m"
        MR_bool display__succeeded;
#line 34 "display.m"
        MR_Integer display__CastX_25 = (MR_Integer) display__HeadVar__1_1;
#line 34 "display.m"
        MR_Integer display__CastY_26 = (MR_Integer) display__HeadVar__2_2;

#line 34 "display.m"
        display__succeeded = (display__CastX_25 == display__CastY_26);
#line 34 "display.m"
        if (display__succeeded)
#line 34 "display.m"
          display__succeeded = MR_TRUE;
#line 34 "display.m"
        else
#line 34 "display.m"
          if ((display__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 34 "display.m"
            {
#line 34 "display.m"
              MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
#line 34 "display.m"
              MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

#line 34 "display.m"
              display__succeeded = (display__CastY_8 == display__CastX_7);
#line 34 "display.m"
            }
#line 34 "display.m"
          else
#line 34 "display.m"
            if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 34 "display.m"
              {
#line 34 "display.m"
                MR_Word display__V_9_9 = (MR_Word) MR_body(((MR_Word) display__HeadVar__1_1), (MR_Integer) 1);
#line 34 "display.m"
                MR_Word display__V_10_10;

#line 34 "display.m"
                display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 34 "display.m"
                if (display__succeeded)
#line 34 "display.m"
                  {
#line 34 "display.m"
                    display__V_10_10 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);
#line 7452 "display.c"
                    {
#line 7454 "display.c"
                      return display__succeeded = display____Unify____deep_link_0_0(display__V_9_9, display__V_10_10);
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
              }
#line 34 "display.m"
            else
#line 34 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 34 "display.m"
                {
#line 34 "display.m"
                  MR_Word display__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "display.m"
                  MR_Word display__V_12_12;

#line 34 "display.m"
                  display__succeeded = ((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 34 "display.m"
                  if (display__succeeded)
#line 34 "display.m"
                    {
#line 34 "display.m"
                      display__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));
#line 7480 "display.c"
                      {
#line 7482 "display.c"
                        return display__succeeded = display____Unify____pseudo_link_0_0(display__V_11_11, display__V_12_12);
                      }
#line 34 "display.m"
                    }
#line 34 "display.m"
                }
#line 34 "display.m"
              else
#line 34 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_Word display__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                    MR_Word display__V_24_24;

#line 34 "display.m"
                    display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 34 "display.m"
                    if (display__succeeded)
#line 34 "display.m"
                      {
#line 34 "display.m"
                        display__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 7508 "display.c"
                        /* direct tailcall eliminated */
#line 7510 "display.c"
                        {
#line 7512 "display.c"
                          MR_Word display__HeadVar__1__tmp_copy_1 = display__V_23_23;
#line 7514 "display.c"
                          MR_Word display__HeadVar__2__tmp_copy_2 = display__V_24_24;

#line 7517 "display.c"
                          display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 7519 "display.c"
                          display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 7521 "display.c"
                        }
#line 7523 "display.c"
                        continue;
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                else
#line 34 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 34 "display.m"
                    {
#line 34 "display.m"
                      MR_String display__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                      MR_String display__V_4_4;

#line 34 "display.m"
                      display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 34 "display.m"
                      if (display__succeeded)
#line 34 "display.m"
                        {
#line 34 "display.m"
                          display__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 7548 "display.c"
                          display__succeeded = (strcmp(display__V_3_3, display__V_4_4) == 0);
#line 34 "display.m"
                        }
#line 34 "display.m"
                    }
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 34 "display.m"
                      {
#line 34 "display.m"
                        MR_Word display__TypeInfo_27_27;
#line 34 "display.m"
                        MR_Word display__TypeInfo_28_28;
#line 34 "display.m"
                        MR_Word display__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                        MR_Word display__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 2)));
#line 34 "display.m"
                        MR_Word display__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 3)));
#line 34 "display.m"
                        MR_Word display__V_16_16;
#line 34 "display.m"
                        MR_Word display__V_17_17;
#line 34 "display.m"
                        MR_Word display__V_18_18;

#line 34 "display.m"
                        display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 34 "display.m"
                        if (display__succeeded)
#line 34 "display.m"
                          {
#line 34 "display.m"
                            display__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "display.m"
                            display__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "display.m"
                            display__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 7589 "display.c"
                            display__succeeded = (display__V_13_13 == display__V_16_16);
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 7595 "display.c"
                                display__TypeInfo_27_27 = (MR_Word) &display_scalar_common_1[2];
#line 7597 "display.c"
                                {
#line 7599 "display.c"
                                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_27_27, ((MR_Box) (display__V_14_14)), ((MR_Box) (display__V_17_17)));
                                }
#line 34 "display.m"
                                if (display__succeeded)
#line 34 "display.m"
                                  {
#line 7606 "display.c"
                                    display__TypeInfo_28_28 = (MR_Word) &display_scalar_common_1[3];
#line 7608 "display.c"
                                    {
#line 7610 "display.c"
                                      return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_28_28, ((MR_Box) (display__V_15_15)), ((MR_Box) (display__V_18_18)));
                                    }
#line 34 "display.m"
                                  }
#line 34 "display.m"
                              }
#line 34 "display.m"
                          }
#line 34 "display.m"
                      }
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 34 "display.m"
                        {
#line 34 "display.m"
                          MR_Word display__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                          MR_Word display__V_20_20;

#line 34 "display.m"
                          display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 34 "display.m"
                          if (display__succeeded)
#line 34 "display.m"
                            {
#line 34 "display.m"
                              display__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 7640 "display.c"
                              {
#line 7642 "display.c"
                                return display__succeeded = display____Unify____table_0_0(display__V_19_19, display__V_20_20);
                              }
#line 34 "display.m"
                            }
#line 34 "display.m"
                        }
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 34 "display.m"
                          {
#line 34 "display.m"
                            MR_String display__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                            MR_String display__V_6_6;

#line 34 "display.m"
                            display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 34 "display.m"
                                display__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 7668 "display.c"
                                display__succeeded = (strcmp(display__V_5_5, display__V_6_6) == 0);
#line 34 "display.m"
                              }
#line 34 "display.m"
                          }
#line 34 "display.m"
                        else
#line 34 "display.m"
                          {
#line 34 "display.m"
                            MR_String display__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "display.m"
                            MR_String display__V_22_22;

#line 34 "display.m"
                            display__succeeded = ((((MR_tag((MR_Word) display__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 34 "display.m"
                                display__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));
#line 7691 "display.c"
                                display__succeeded = (strcmp(display__V_21_21, display__V_22_22) == 0);
#line 34 "display.m"
                              }
#line 34 "display.m"
                          }
#line 34 "display.m"
        return display__succeeded;
#line 34 "display.m"
      }
#line 34 "display.m"
      break;
#line 34 "display.m"
    }
#line 34 "display.m"
}

#line 28 "display.m"
void MR_CALL 
display____Compare____display_0_0(
#line 28 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 28 "display.m"
  MR_Word display__HeadVar__2_2,
#line 28 "display.m"
  MR_Word display__HeadVar__3_3)
#line 28 "display.m"
{
#line 28 "display.m"
  {
#line 28 "display.m"
    MR_bool display__succeeded;
#line 28 "display.m"
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
#line 28 "display.m"
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

#line 28 "display.m"
    display__succeeded = (display__CastX_9 == display__CastY_10);
#line 28 "display.m"
    if (display__succeeded)
#line 7732 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "display.m"
    else
#line 28 "display.m"
      {
#line 28 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 28 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
#line 28 "display.m"
        MR_Word display__V_8_8;

#line 28 "display.m"
        {
#line 28 "display.m"
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[2], &display__V_8_8, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_6_6)));
        }
#line 7754 "display.c"
        display__succeeded = (display__V_8_8 == (MR_Integer) 0);
#line 28 "display.m"
        display__succeeded = !(display__succeeded);
#line 28 "display.m"
        if (display__succeeded)
#line 28 "display.m"
          *display__HeadVar__1_1 = display__V_8_8;
#line 28 "display.m"
        else
#line 28 "display.m"
          {
#line 28 "display.m"
            {
#line 28 "display.m"
              mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[3], display__HeadVar__1_1, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_7_7)));
#line 28 "display.m"
              return;
            }
#line 28 "display.m"
          }
#line 28 "display.m"
      }
#line 28 "display.m"
  }
#line 28 "display.m"
}

#line 28 "display.m"
MR_bool MR_CALL 
display____Unify____display_0_0(
#line 28 "display.m"
  MR_Word display__HeadVar__1_1,
#line 28 "display.m"
  MR_Word display__HeadVar__2_2)
#line 28 "display.m"
{
#line 28 "display.m"
  {
#line 28 "display.m"
    MR_bool display__succeeded;
#line 28 "display.m"
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
#line 28 "display.m"
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

#line 28 "display.m"
    display__succeeded = (display__CastX_7 == display__CastY_8);
#line 28 "display.m"
    if (display__succeeded)
#line 28 "display.m"
      display__succeeded = MR_TRUE;
#line 28 "display.m"
    else
#line 28 "display.m"
      {
#line 28 "display.m"
        MR_Word display__TypeInfo_10_10;
#line 28 "display.m"
        MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
#line 28 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 28 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

#line 7821 "display.c"
        {
#line 7823 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[2], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 28 "display.m"
        if (display__succeeded)
#line 28 "display.m"
          {
#line 7830 "display.c"
            display__TypeInfo_10_10 = (MR_Word) &display_scalar_common_1[3];
#line 7832 "display.c"
            {
#line 7834 "display.c"
              return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_10_10, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_6_6)));
            }
#line 28 "display.m"
          }
#line 28 "display.m"
      }
#line 28 "display.m"
    return display__succeeded;
#line 28 "display.m"
  }
#line 28 "display.m"
}

#line 231 "display.m"
void MR_CALL 
display____Compare____deep_link_0_0(
#line 231 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 231 "display.m"
  MR_Word display__HeadVar__2_2,
#line 231 "display.m"
  MR_Word display__HeadVar__3_3)
#line 231 "display.m"
{
#line 231 "display.m"
  {
#line 231 "display.m"
    MR_bool display__succeeded;
#line 231 "display.m"
    MR_Integer display__CastX_15 = (MR_Integer) display__HeadVar__2_2;
#line 231 "display.m"
    MR_Integer display__CastY_16 = (MR_Integer) display__HeadVar__3_3;

#line 231 "display.m"
    display__succeeded = (display__CastX_15 == display__CastY_16);
#line 231 "display.m"
    if (display__succeeded)
#line 7872 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 231 "display.m"
    else
#line 231 "display.m"
      {
#line 231 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));
#line 231 "display.m"
        MR_Word display__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 231 "display.m"
        MR_Word display__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
#line 231 "display.m"
        MR_Word display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 2)));
#line 231 "display.m"
        MR_Word display__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 3)));
#line 231 "display.m"
        MR_Word display__V_12_12;

#line 231 "display.m"
        {
#line 231 "display.m"
          query____Compare____cmd_0_0(&display__V_12_12, display__V_4_4, display__V_8_8);
        }
#line 7902 "display.c"
        display__succeeded = (display__V_12_12 == (MR_Integer) 0);
#line 231 "display.m"
        display__succeeded = !(display__succeeded);
#line 231 "display.m"
        if (display__succeeded)
#line 231 "display.m"
          *display__HeadVar__1_1 = display__V_12_12;
#line 231 "display.m"
        else
#line 231 "display.m"
          {
#line 231 "display.m"
            MR_Word display__V_13_13;

#line 231 "display.m"
            {
#line 231 "display.m"
              mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[1], &display__V_13_13, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_9_9)));
            }
#line 7922 "display.c"
            display__succeeded = (display__V_13_13 == (MR_Integer) 0);
#line 231 "display.m"
            display__succeeded = !(display__succeeded);
#line 231 "display.m"
            if (display__succeeded)
#line 231 "display.m"
              *display__HeadVar__1_1 = display__V_13_13;
#line 231 "display.m"
            else
#line 231 "display.m"
              {
#line 231 "display.m"
                MR_Word display__V_14_14;

#line 231 "display.m"
                {
#line 231 "display.m"
                  display____Compare____attr_string_0_0(&display__V_14_14, display__V_6_6, display__V_10_10);
                }
#line 7942 "display.c"
                display__succeeded = (display__V_14_14 == (MR_Integer) 0);
#line 231 "display.m"
                display__succeeded = !(display__succeeded);
#line 231 "display.m"
                if (display__succeeded)
#line 231 "display.m"
                  *display__HeadVar__1_1 = display__V_14_14;
#line 231 "display.m"
                else
#line 231 "display.m"
                  {
#line 231 "display.m"
                    MR_Integer display__V_21_21 = (MR_Integer) display__V_7_7;
#line 231 "display.m"
                    MR_Integer display__V_22_22 = (MR_Integer) display__V_11_11;

#line 231 "display.m"
                    {
#line 231 "display.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(display__HeadVar__1_1, display__V_21_21, display__V_22_22);
#line 231 "display.m"
                      return;
                    }
#line 231 "display.m"
                  }
#line 231 "display.m"
              }
#line 231 "display.m"
          }
#line 231 "display.m"
      }
#line 231 "display.m"
  }
#line 231 "display.m"
}

#line 231 "display.m"
MR_bool MR_CALL 
display____Unify____deep_link_0_0(
#line 231 "display.m"
  MR_Word display__HeadVar__1_1,
#line 231 "display.m"
  MR_Word display__HeadVar__2_2)
#line 231 "display.m"
{
#line 231 "display.m"
  {
#line 231 "display.m"
    MR_bool display__succeeded;
#line 231 "display.m"
    MR_Integer display__CastX_11 = (MR_Integer) display__HeadVar__1_1;
#line 231 "display.m"
    MR_Integer display__CastY_12 = (MR_Integer) display__HeadVar__2_2;

#line 231 "display.m"
    display__succeeded = (display__CastX_11 == display__CastY_12);
#line 231 "display.m"
    if (display__succeeded)
#line 231 "display.m"
      display__succeeded = MR_TRUE;
#line 231 "display.m"
    else
#line 231 "display.m"
      {
#line 231 "display.m"
        MR_Word display__TypeInfo_14_14;
#line 231 "display.m"
        MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 3)));
#line 231 "display.m"
        MR_Word display__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "display.m"
        MR_Word display__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "display.m"
        MR_Word display__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 2)));
#line 231 "display.m"
        MR_Word display__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 3)));

#line 8026 "display.c"
        {
#line 8028 "display.c"
          display__succeeded = query____Unify____cmd_0_0(display__V_3_3, display__V_7_7);
        }
#line 231 "display.m"
        if (display__succeeded)
#line 231 "display.m"
          {
#line 8035 "display.c"
            display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[1];
#line 8037 "display.c"
            {
#line 8039 "display.c"
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_8_8)));
            }
#line 231 "display.m"
            if (display__succeeded)
#line 231 "display.m"
              {
#line 8046 "display.c"
                {
#line 8048 "display.c"
                  display__succeeded = display____Unify____attr_string_0_0(display__V_5_5, display__V_9_9);
                }
#line 231 "display.m"
                if (display__succeeded)
#line 8053 "display.c"
                  display__succeeded = (display__V_6_6 == display__V_10_10);
#line 231 "display.m"
              }
#line 231 "display.m"
          }
#line 231 "display.m"
      }
#line 231 "display.m"
    return display__succeeded;
#line 231 "display.m"
  }
#line 231 "display.m"
}

#line 204 "display.m"
void MR_CALL 
display____Compare____attr_string_0_0(
#line 204 "display.m"
  MR_Word * display__HeadVar__1_1,
#line 204 "display.m"
  MR_Word display__HeadVar__2_2,
#line 204 "display.m"
  MR_Word display__HeadVar__3_3)
#line 204 "display.m"
{
#line 204 "display.m"
  {
#line 204 "display.m"
    MR_bool display__succeeded;
#line 204 "display.m"
    MR_Integer display__CastX_9 = (MR_Integer) display__HeadVar__2_2;
#line 204 "display.m"
    MR_Integer display__CastY_10 = (MR_Integer) display__HeadVar__3_3;

#line 204 "display.m"
    display__succeeded = (display__CastX_9 == display__CastY_10);
#line 204 "display.m"
    if (display__succeeded)
#line 8092 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "display.m"
    else
#line 204 "display.m"
      {
#line 204 "display.m"
        MR_Word display__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "display.m"
        MR_String display__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));
#line 204 "display.m"
        MR_Word display__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 0)));
#line 204 "display.m"
        MR_String display__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__3_3, (MR_Integer) 1)));
#line 204 "display.m"
        MR_Word display__V_8_8;

#line 204 "display.m"
        {
#line 204 "display.m"
          mercury__builtin__compare_3_p_0((MR_Word) &display_scalar_common_1[0], &display__V_8_8, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_6_6)));
        }
#line 8114 "display.c"
        display__succeeded = (display__V_8_8 == (MR_Integer) 0);
#line 204 "display.m"
        display__succeeded = !(display__succeeded);
#line 204 "display.m"
        if (display__succeeded)
#line 204 "display.m"
          *display__HeadVar__1_1 = display__V_8_8;
#line 204 "display.m"
        else
#line 204 "display.m"
          {
#line 204 "display.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(display__HeadVar__1_1, display__V_5_5, display__V_7_7);
#line 204 "display.m"
            return;
          }
#line 204 "display.m"
      }
#line 204 "display.m"
  }
#line 204 "display.m"
}

#line 204 "display.m"
MR_bool MR_CALL 
display____Unify____attr_string_0_0(
#line 204 "display.m"
  MR_Word display__HeadVar__1_1,
#line 204 "display.m"
  MR_Word display__HeadVar__2_2)
#line 204 "display.m"
{
#line 204 "display.m"
  {
#line 204 "display.m"
    MR_bool display__succeeded;
#line 204 "display.m"
    MR_Integer display__CastX_7 = (MR_Integer) display__HeadVar__1_1;
#line 204 "display.m"
    MR_Integer display__CastY_8 = (MR_Integer) display__HeadVar__2_2;

#line 204 "display.m"
    display__succeeded = (display__CastX_7 == display__CastY_8);
#line 204 "display.m"
    if (display__succeeded)
#line 204 "display.m"
      display__succeeded = MR_TRUE;
#line 204 "display.m"
    else
#line 204 "display.m"
      {
#line 204 "display.m"
        MR_Word display__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "display.m"
        MR_String display__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "display.m"
        MR_Word display__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 0)));
#line 204 "display.m"
        MR_String display__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), display__HeadVar__2_2, (MR_Integer) 1)));

#line 8175 "display.c"
        {
#line 8177 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[0], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 204 "display.m"
        if (display__succeeded)
#line 8182 "display.c"
          display__succeeded = (strcmp(display__V_4_4, display__V_6_6) == 0);
#line 204 "display.m"
      }
#line 204 "display.m"
    return display__succeeded;
#line 204 "display.m"
  }
#line 204 "display.m"
}

#line 300 "display.m"
static void MR_CALL 
display__table_accumulate_columns_3_p_0(
#line 300 "display.m"
  MR_Word display__HeaderGroup_4,
#line 300 "display.m"
  MR_Integer display__STATE_VARIABLE_NumColumns_0_13,
#line 300 "display.m"
  MR_Integer * display__STATE_VARIABLE_NumColumns_14)
#line 300 "display.m"
{
#line 303 "display.m"
  {
#line 303 "display.m"
    MR_bool display__succeeded;
#line 303 "display.m"
    MR_Word display__ColumnTitles_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 0)));
#line 303 "display.m"
    MR_Integer display__GroupColumns_10;
#line 304 "display.m"
    MR_Word display__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 1)))) & (MR_Integer) 15);
#line 304 "display.m"
    MR_Word display__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), display__HeaderGroup_4, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 3);

#line 308 "display.m"
    if (((MR_tag((MR_Word) display__ColumnTitles_6)) == (MR_mktag((MR_Integer) 1))))
#line 309 "display.m"
      {
#line 309 "display.m"
        MR_Word display__SubTitles_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__ColumnTitles_6, (MR_Integer) 1)));
#line 309 "display.m"
        MR_String display__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), display__ColumnTitles_6, (MR_Integer) 0)));

#line 310 "display.m"
        {
#line 310 "display.m"
          mercury__list__length_2_p_0((MR_Word) &display__display__type_ctor_info_table_data_0, display__SubTitles_12, &display__GroupColumns_10);
        }
#line 309 "display.m"
      }
#line 308 "display.m"
    else
#line 307 "display.m"
      display__GroupColumns_10 = (MR_Integer) 1;
#line 312 "display.m"
    *display__STATE_VARIABLE_NumColumns_14 = (display__STATE_VARIABLE_NumColumns_0_13 + display__GroupColumns_10);
#line 303 "display.m"
  }
#line 300 "display.m"
}

#line 315 "display.m"
static void MR_CALL 
display__header_groups_to_header_3_p_0_1(
#line 315 "display.m"
  MR_Box display__closure_arg,
#line 315 "display.m"
  MR_Box display__wrapper_arg_1,
#line 315 "display.m"
  MR_Box display__wrapper_arg_2,
#line 315 "display.m"
  MR_Box * display__wrapper_arg_3)
#line 315 "display.m"
{
#line 315 "display.m"
  {
#line 315 "display.m"
    MR_Box display__closure = display__closure_arg;
#line 315 "display.m"
    MR_Integer display__conv0_STATE_VARIABLE_NumColumns_14;

#line 315 "display.m"
    {
#line 315 "display.m"
      display__table_accumulate_columns_3_p_0(((MR_Word) display__wrapper_arg_1), ((MR_Integer) display__wrapper_arg_2), &display__conv0_STATE_VARIABLE_NumColumns_14);
    }
#line 315 "display.m"
    *display__wrapper_arg_3 = ((MR_Box) (display__conv0_STATE_VARIABLE_NumColumns_14));
#line 315 "display.m"
  }
#line 315 "display.m"
}

#line 275 "display.m"
void MR_CALL 
display__header_groups_to_header_3_p_0(
#line 275 "display.m"
  MR_Word display__HeaderGroups_4,
#line 275 "display.m"
  MR_Integer * display__NumColumns_5,
#line 275 "display.m"
  MR_Word * display__Header_6)
#line 275 "display.m"
{
#line 314 "display.m"
  {
#line 314 "display.m"
    MR_bool display__succeeded;
#line 315 "display.m"
    MR_Box display__conv1_NumColumns_5;

#line 315 "display.m"
    {
#line 315 "display.m"
      mercury__list__foldl_4_p_0((MR_Word) &display__display__type_ctor_info_table_header_group_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &display_scalar_common_3[0], display__HeaderGroups_4, ((MR_Box) ((MR_Integer) 0)), &display__conv1_NumColumns_5);
    }
#line 315 "display.m"
    *display__NumColumns_5 = ((MR_Integer) display__conv1_NumColumns_5);
#line 316 "display.m"
    *display__Header_6 = (MR_Word) display__HeaderGroups_4;
#line 314 "display.m"
  }
#line 275 "display.m"
}

#line 267 "display.m"
MR_Word MR_CALL 
display__make_multi_table_header_group_4_f_0(
#line 267 "display.m"
  MR_String display__MainTitle_6,
#line 267 "display.m"
  MR_Word display__SubTitles_7,
#line 267 "display.m"
  MR_Word display__ColumnClass_8,
#line 267 "display.m"
  MR_Word display__Colour_9)
#line 267 "display.m"
{
#line 291 "display.m"
  {
#line 291 "display.m"
    MR_bool display__succeeded;
#line 291 "display.m"
    MR_Word display__HeadVar__5_5;
#line 291 "display.m"
    MR_Word display__V_10_10;

#line 292 "display.m"
    {
#line 292 "display.m"
      display__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "display.m"
      MR_hl_field(MR_mktag(1), display__V_10_10, 0) = ((MR_Box) (display__MainTitle_6));
#line 292 "display.m"
      MR_hl_field(MR_mktag(1), display__V_10_10, 1) = ((MR_Box) (display__SubTitles_7));
#line 292 "display.m"
    }
#line 292 "display.m"
    {
#line 292 "display.m"
      display__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "display.m"
      MR_hl_field(MR_mktag(0), display__HeadVar__5_5, 0) = ((MR_Box) (display__V_10_10));
#line 292 "display.m"
      MR_hl_field(MR_mktag(0), display__HeadVar__5_5, 1) = ((MR_Box) ((display__ColumnClass_8 | ((display__Colour_9 << (MR_Integer) 4)))));
#line 292 "display.m"
    }
#line 291 "display.m"
    return display__HeadVar__5_5;
#line 291 "display.m"
  }
#line 267 "display.m"
}

#line 264 "display.m"
MR_Word MR_CALL 
display__make_single_table_header_group_3_f_0(
#line 264 "display.m"
  MR_Word display__ColumnTitle_5,
#line 264 "display.m"
  MR_Word display__ColumnClass_6,
#line 264 "display.m"
  MR_Word display__Colour_7)
#line 264 "display.m"
{
#line 287 "display.m"
  {
#line 287 "display.m"
    MR_bool display__succeeded;
#line 287 "display.m"
    MR_Word display__HeadVar__4_4;
#line 287 "display.m"
    MR_Word display__V_8_8;

#line 288 "display.m"
    {
#line 288 "display.m"
      display__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 288 "display.m"
      MR_hl_field(MR_mktag(0), display__V_8_8, 0) = ((MR_Box) (display__ColumnTitle_5));
#line 288 "display.m"
    }
#line 288 "display.m"
    {
#line 288 "display.m"
      display__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 288 "display.m"
      MR_hl_field(MR_mktag(0), display__HeadVar__4_4, 0) = ((MR_Box) (display__V_8_8));
#line 288 "display.m"
      MR_hl_field(MR_mktag(0), display__HeadVar__4_4, 1) = ((MR_Box) ((display__ColumnClass_6 | ((display__Colour_7 << (MR_Integer) 4)))));
#line 288 "display.m"
    }
#line 287 "display.m"
    return display__HeadVar__4_4;
#line 287 "display.m"
  }
#line 264 "display.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module display. */
