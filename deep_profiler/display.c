/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 80 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0;

#line 83 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2];

#line 86 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0;

#line 89 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1];

#line 92 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1];

#line 95 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1];

#line 98 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1];

#line 101 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 104 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4];

#line 107 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0;

#line 110 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1];

#line 113 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1];

#line 116 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1];

#line 119 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1];

#line 122 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 125 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0;

#line 128 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2];

#line 131 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2];

#line 134 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0;

#line 137 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1];

#line 140 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1];

#line 143 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1];

#line 146 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1];

#line 149 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1];

#line 152 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0;

#line 155 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1];

#line 158 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1;

#line 161 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2;

#line 164 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1];

#line 167 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3;

#line 170 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1];

#line 173 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4;

#line 176 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3];

#line 179 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5;

#line 182 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1];

#line 185 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6;

#line 188 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1];

#line 191 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7;

#line 194 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1];

#line 197 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8;

#line 200 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1];

#line 203 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1];

#line 206 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1];

#line 209 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6];

#line 212 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4];

#line 215 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_item_0[9];

#line 218 "display.c"
static const MR_Integer display__display__functor_number_map_display_item_0[9];

#line 221 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0;

#line 224 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1;

#line 227 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2];

#line 230 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2];

#line 233 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2];

#line 236 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0;

#line 239 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1;

#line 242 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2;

#line 245 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3;

#line 248 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4];

#line 251 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4];

#line 254 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4];

#line 257 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2];

#line 260 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0;

#line 263 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1];

#line 266 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1];

#line 269 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1];

#line 272 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1];

#line 275 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0;

#line 278 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1;

#line 281 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2;

#line 284 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3];

#line 287 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3];

#line 290 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3];

#line 293 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0;

#line 296 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0;

#line 299 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4];

#line 302 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4];

#line 305 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0;

#line 308 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1];

#line 311 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1];

#line 314 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1];

#line 317 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1];

#line 320 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1];

#line 323 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1];

#line 326 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0;

#line 329 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2];

#line 332 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2];

#line 335 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1;

#line 338 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2;

#line 341 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1];

#line 344 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1];

#line 347 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1];

#line 350 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3];

#line 353 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3];

#line 356 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3];

#line 359 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0;

#line 362 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1;

#line 365 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2;

#line 368 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3];

#line 371 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3];

#line 374 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3];

#line 377 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0;

#line 380 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1;

#line 383 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2;

#line 386 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3;

#line 389 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4;

#line 392 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5;

#line 395 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6;

#line 398 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7;

#line 401 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8;

#line 404 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9;

#line 407 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10;

#line 410 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11;

#line 413 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12;

#line 416 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_class_0[13];

#line 419 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13];

#line 422 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_class_0[13];

#line 425 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0;

#line 428 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1;

#line 431 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2;

#line 434 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3];

#line 437 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3];

#line 440 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3];

#line 443 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1];

#line 446 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0;

#line 449 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1];

#line 452 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1;

#line 455 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1];

#line 458 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2;

#line 461 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3];

#line 464 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3;

#line 467 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1];

#line 470 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4;

#line 473 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1];

#line 476 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5;

#line 479 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1];

#line 482 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6;

#line 485 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1];

#line 488 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7;

#line 491 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1];

#line 494 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1];

#line 497 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1];

#line 500 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5];

#line 503 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4];

#line 506 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_data_0[8];

#line 509 "display.c"
static const MR_Integer display__display__functor_number_map_table_data_0[8];

#line 512 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1];

#line 515 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0;

#line 518 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0;

#line 521 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3];

#line 524 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3];

#line 527 "display.c"
static const MR_DuArgLocn display__display__field_locns_table_header_group_0_0[3];

#line 530 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0;

#line 533 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1];

#line 536 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1];

#line 539 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1];

#line 542 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1];

#line 545 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1];

#line 548 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1];

#line 551 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0;

#line 554 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0;

#line 557 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2];

#line 560 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2];

#line 563 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1;

#line 566 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1];

#line 569 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1];

#line 572 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2];

#line 575 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2];

#line 578 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2];

#line 581 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0;

#line 584 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1];

#line 587 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1];

#line 590 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0;

#line 593 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1;

#line 596 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1];

#line 599 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1];

#line 602 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2;

#line 605 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1];

#line 608 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1];

#line 611 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3;

#line 614 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1];

#line 617 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1];

#line 620 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1];

#line 623 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1];

#line 626 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4];

#line 629 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4];

#line 632 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4];

#line 635 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 638 "display.c"
  MR_Box display__wrapper_arg_1,
#line 640 "display.c"
  MR_Box display__wrapper_arg_2);

#line 643 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 646 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 648 "display.c"
  MR_Box display__wrapper_arg_2,
#line 650 "display.c"
  MR_Box display__wrapper_arg_3);

#line 653 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 656 "display.c"
  MR_Box display__wrapper_arg_1,
#line 658 "display.c"
  MR_Box display__wrapper_arg_2);

#line 661 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 664 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 666 "display.c"
  MR_Box display__wrapper_arg_2,
#line 668 "display.c"
  MR_Box display__wrapper_arg_3);

#line 671 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 674 "display.c"
  MR_Box display__wrapper_arg_1,
#line 676 "display.c"
  MR_Box display__wrapper_arg_2);

#line 679 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 682 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 684 "display.c"
  MR_Box display__wrapper_arg_2,
#line 686 "display.c"
  MR_Box display__wrapper_arg_3);

#line 689 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 692 "display.c"
  MR_Box display__wrapper_arg_1,
#line 694 "display.c"
  MR_Box display__wrapper_arg_2);

#line 697 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 700 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 702 "display.c"
  MR_Box display__wrapper_arg_2,
#line 704 "display.c"
  MR_Box display__wrapper_arg_3);

#line 707 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 710 "display.c"
  MR_Box display__wrapper_arg_1,
#line 712 "display.c"
  MR_Box display__wrapper_arg_2);

#line 715 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 718 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 720 "display.c"
  MR_Box display__wrapper_arg_2,
#line 722 "display.c"
  MR_Box display__wrapper_arg_3);

#line 725 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 728 "display.c"
  MR_Box display__wrapper_arg_1,
#line 730 "display.c"
  MR_Box display__wrapper_arg_2);

#line 733 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 736 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 738 "display.c"
  MR_Box display__wrapper_arg_2,
#line 740 "display.c"
  MR_Box display__wrapper_arg_3);

#line 743 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 746 "display.c"
  MR_Box display__wrapper_arg_1,
#line 748 "display.c"
  MR_Box display__wrapper_arg_2);

#line 751 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 754 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 756 "display.c"
  MR_Box display__wrapper_arg_2,
#line 758 "display.c"
  MR_Box display__wrapper_arg_3);

#line 761 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 764 "display.c"
  MR_Box display__wrapper_arg_1,
#line 766 "display.c"
  MR_Box display__wrapper_arg_2);

#line 769 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 772 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 774 "display.c"
  MR_Box display__wrapper_arg_2,
#line 776 "display.c"
  MR_Box display__wrapper_arg_3);

#line 779 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 782 "display.c"
  MR_Box display__wrapper_arg_1,
#line 784 "display.c"
  MR_Box display__wrapper_arg_2);

#line 787 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 790 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 792 "display.c"
  MR_Box display__wrapper_arg_2,
#line 794 "display.c"
  MR_Box display__wrapper_arg_3);

#line 797 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 800 "display.c"
  MR_Box display__wrapper_arg_1,
#line 802 "display.c"
  MR_Box display__wrapper_arg_2);

#line 805 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 808 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 810 "display.c"
  MR_Box display__wrapper_arg_2,
#line 812 "display.c"
  MR_Box display__wrapper_arg_3);

#line 815 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 818 "display.c"
  MR_Box display__wrapper_arg_1,
#line 820 "display.c"
  MR_Box display__wrapper_arg_2);

#line 823 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 826 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 828 "display.c"
  MR_Box display__wrapper_arg_2,
#line 830 "display.c"
  MR_Box display__wrapper_arg_3);

#line 833 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 836 "display.c"
  MR_Box display__wrapper_arg_1,
#line 838 "display.c"
  MR_Box display__wrapper_arg_2);

#line 841 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 844 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 846 "display.c"
  MR_Box display__wrapper_arg_2,
#line 848 "display.c"
  MR_Box display__wrapper_arg_3);

#line 851 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 854 "display.c"
  MR_Box display__wrapper_arg_1,
#line 856 "display.c"
  MR_Box display__wrapper_arg_2);

#line 859 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 862 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 864 "display.c"
  MR_Box display__wrapper_arg_2,
#line 866 "display.c"
  MR_Box display__wrapper_arg_3);

#line 869 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 872 "display.c"
  MR_Box display__wrapper_arg_1,
#line 874 "display.c"
  MR_Box display__wrapper_arg_2);

#line 877 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 880 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 882 "display.c"
  MR_Box display__wrapper_arg_2,
#line 884 "display.c"
  MR_Box display__wrapper_arg_3);

#line 887 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 890 "display.c"
  MR_Box display__wrapper_arg_1,
#line 892 "display.c"
  MR_Box display__wrapper_arg_2);

#line 895 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 898 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 900 "display.c"
  MR_Box display__wrapper_arg_2,
#line 902 "display.c"
  MR_Box display__wrapper_arg_3);

#line 905 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 908 "display.c"
  MR_Box display__wrapper_arg_1,
#line 910 "display.c"
  MR_Box display__wrapper_arg_2);

#line 913 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 916 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 918 "display.c"
  MR_Box display__wrapper_arg_2,
#line 920 "display.c"
  MR_Box display__wrapper_arg_3);

#line 923 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 926 "display.c"
  MR_Box display__wrapper_arg_1,
#line 928 "display.c"
  MR_Box display__wrapper_arg_2);

#line 931 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 934 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 936 "display.c"
  MR_Box display__wrapper_arg_2,
#line 938 "display.c"
  MR_Box display__wrapper_arg_3);

#line 941 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 944 "display.c"
  MR_Box display__wrapper_arg_1,
#line 946 "display.c"
  MR_Box display__wrapper_arg_2);

#line 949 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 952 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 954 "display.c"
  MR_Box display__wrapper_arg_2,
#line 956 "display.c"
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



#line 1077 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_str_attr_0
  }
};

#line 1085 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_str_attr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1091 "display.c"
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

#line 1106 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1111 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0
  }
};

#line 1120 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1125 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1] = {
  (MR_Integer) 0
};

#line 1130 "display.c"
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

#line 1151 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 1159 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1query__type_ctor_info_preferences_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1167 "display.c"
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

#line 1182 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1187 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0
  }
};

#line 1196 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1201 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1] = {
  (MR_Integer) 0
};

#line 1206 "display.c"
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

#line 1227 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1235 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_display_item_0
  }
};

#line 1243 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1249 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

#line 1255 "display.c"
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

#line 1270 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1275 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0
  }
};

#line 1284 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1289 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1] = {
  (MR_Integer) 0
};

#line 1294 "display.c"
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

#line 1315 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1320 "display.c"
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

#line 1335 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1340 "display.c"
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

#line 1355 "display.c"
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

#line 1370 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 1375 "display.c"
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

#line 1390 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_pseudo_link_0
};

#line 1395 "display.c"
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

#line 1410 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_list_class_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1417 "display.c"
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

#line 1432 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_0
};

#line 1437 "display.c"
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

#line 1452 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1457 "display.c"
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

#line 1472 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_display_item_0
};

#line 1477 "display.c"
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

#line 1492 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = {
  &display__display__du_functor_desc_display_item_0_2
};

#line 1497 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = {
  &display__display__du_functor_desc_display_item_0_3
};

#line 1502 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = {
  &display__display__du_functor_desc_display_item_0_4
};

#line 1507 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6] = {
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_7,
  &display__display__du_functor_desc_display_item_0_8
};

#line 1517 "display.c"
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

#line 1541 "display.c"
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

#line 1554 "display.c"
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

#line 1567 "display.c"
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

#line 1588 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  (MR_Integer) 0
};

#line 1594 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  (MR_Integer) 1
};

#line 1600 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_0,
  &display__display__enum_functor_desc_link_class_0_1
};

#line 1606 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_1,
  &display__display__enum_functor_desc_link_class_0_0
};

#line 1612 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1618 "display.c"
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

#line 1639 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  (MR_Integer) 0
};

#line 1645 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  (MR_Integer) 1
};

#line 1651 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  (MR_Integer) 2
};

#line 1657 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  (MR_Integer) 3
};

#line 1663 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_0,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3
};

#line 1671 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_0
};

#line 1679 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1687 "display.c"
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

#line 1708 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1714 "display.c"
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

#line 1729 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1734 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0
  }
};

#line 1743 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1748 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = {
  (MR_Integer) 0
};

#line 1753 "display.c"
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

#line 1774 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  (MR_Integer) 0
};

#line 1780 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  (MR_Integer) 1
};

#line 1786 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  (MR_Integer) 2
};

#line 1792 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1799 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1806 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1813 "display.c"
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

#line 1834 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_0
  }
};

#line 1842 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_row_0
  }
};

#line 1850 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1display__type_ctor_info_table_header_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_row_0
};

#line 1858 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

#line 1866 "display.c"
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

#line 1881 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1886 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0
  }
};

#line 1895 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1900 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1] = {
  (MR_Integer) 0
};

#line 1905 "display.c"
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

#line 1926 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 1931 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1] = {
  (MR_String) "tc_text"
};

#line 1936 "display.c"
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

#line 1951 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1957 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

#line 1963 "display.c"
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

#line 1978 "display.c"
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

#line 1993 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = {
  &display__display__du_functor_desc_table_cell_0_2
};

#line 1998 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = {
  &display__display__du_functor_desc_table_cell_0_0
};

#line 2003 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = {
  &display__display__du_functor_desc_table_cell_0_1
};

#line 2008 "display.c"
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

#line 2027 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3] = {
  &display__display__du_functor_desc_table_cell_0_0,
  &display__display__du_functor_desc_table_cell_0_2,
  &display__display__du_functor_desc_table_cell_0_1
};

#line 2034 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2041 "display.c"
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

#line 2062 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  (MR_Integer) 0
};

#line 2068 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  (MR_Integer) 1
};

#line 2074 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  (MR_Integer) 2
};

#line 2080 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_0,
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2
};

#line 2087 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2,
  &display__display__enum_functor_desc_table_class_0_0
};

#line 2094 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2101 "display.c"
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

#line 2122 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  (MR_Integer) 0
};

#line 2128 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  (MR_Integer) 1
};

#line 2134 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  (MR_Integer) 2
};

#line 2140 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  (MR_Integer) 3
};

#line 2146 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  (MR_Integer) 4
};

#line 2152 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  (MR_Integer) 5
};

#line 2158 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  (MR_Integer) 6
};

#line 2164 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  (MR_Integer) 7
};

#line 2170 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  (MR_Integer) 8
};

#line 2176 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  (MR_Integer) 9
};

#line 2182 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  (MR_Integer) 10
};

#line 2188 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  (MR_Integer) 11
};

#line 2194 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  (MR_Integer) 12
};

#line 2200 "display.c"
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

#line 2217 "display.c"
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

#line 2234 "display.c"
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

#line 2251 "display.c"
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

#line 2272 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  (MR_Integer) 0
};

#line 2278 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  (MR_Integer) 1
};

#line 2284 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  (MR_Integer) 2
};

#line 2290 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_0,
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2
};

#line 2297 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2,
  &display__display__enum_functor_desc_table_column_colour_0_0
};

#line 2304 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2311 "display.c"
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

#line 2332 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2337 "display.c"
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

#line 2352 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2357 "display.c"
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

#line 2372 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 2377 "display.c"
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

#line 2392 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2399 "display.c"
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

#line 2414 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0
};

#line 2419 "display.c"
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

#line 2434 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2439 "display.c"
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

#line 2454 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0
};

#line 2459 "display.c"
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

#line 2474 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0
};

#line 2479 "display.c"
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

#line 2494 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = {
  &display__display__du_functor_desc_table_data_0_2
};

#line 2499 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = {
  &display__display__du_functor_desc_table_data_0_6
};

#line 2504 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = {
  &display__display__du_functor_desc_table_data_0_0
};

#line 2509 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

#line 2518 "display.c"
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

#line 2542 "display.c"
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

#line 2554 "display.c"
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

#line 2566 "display.c"
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

#line 2587 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1] = {
  (MR_Integer) 0
};

#line 2592 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_group_0
  }
};

#line 2600 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_header_group_0,
  (MR_String) "th_groups"
};

#line 2607 "display.c"
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

#line 2628 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_header_group_columns_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_class_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_colour_0
};

#line 2635 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3] = {
  (MR_String) "thg_titles",
  (MR_String) "thg_class",
  (MR_String) "thg_colour"
};

#line 2642 "display.c"
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

#line 2661 "display.c"
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

#line 2676 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2681 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0
  }
};

#line 2690 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2695 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = {
  (MR_Integer) 0
};

#line 2700 "display.c"
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

#line 2721 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2726 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = {
  (MR_String) "thsc_title"
};

#line 2731 "display.c"
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

#line 2746 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_data_0
  }
};

#line 2754 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_data_0
};

#line 2760 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

#line 2766 "display.c"
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

#line 2781 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2786 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1
};

#line 2791 "display.c"
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

#line 2805 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1,
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2811 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2817 "display.c"
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

#line 2838 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_cell_0
  }
};

#line 2846 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_cell_0
};

#line 2851 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1] = {
  (MR_String) "tr_cells"
};

#line 2856 "display.c"
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

#line 2871 "display.c"
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

#line 2886 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2891 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1] = {
  (MR_String) "tsh_text"
};

#line 2896 "display.c"
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

#line 2911 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_row_0
};

#line 2916 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1] = {
  (MR_String) "tdr_row"
};

#line 2921 "display.c"
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

#line 2936 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = {
  &display__display__du_functor_desc_table_row_0_1
};

#line 2941 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = {
  &display__display__du_functor_desc_table_row_0_0
};

#line 2946 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = {
  &display__display__du_functor_desc_table_row_0_2
};

#line 2951 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = {
  &display__display__du_functor_desc_table_row_0_3
};

#line 2956 "display.c"
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

#line 2980 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4] = {
  &display__display__du_functor_desc_table_row_0_3,
  &display__display__du_functor_desc_table_row_0_0,
  &display__display__du_functor_desc_table_row_0_2,
  &display__display__du_functor_desc_table_row_0_1
};

#line 2988 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2996 "display.c"
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

#line 3017 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 3020 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3022 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3024 "display.c"
{
#line 3026 "display.c"
  {
#line 3028 "display.c"
    MR_bool display__succeeded;

#line 3031 "display.c"
    {
#line 3033 "display.c"
      display__succeeded = display____Unify____attr_string_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3036 "display.c"
    return display__succeeded;
#line 3038 "display.c"
  }
#line 3040 "display.c"
}

#line 3043 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 3046 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3048 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3050 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3052 "display.c"
{
#line 3054 "display.c"
  {
#line 3056 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3059 "display.c"
    {
#line 3061 "display.c"
      display____Compare____attr_string_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3064 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3066 "display.c"
  }
#line 3068 "display.c"
}

#line 3071 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 3074 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3076 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3078 "display.c"
{
#line 3080 "display.c"
  {
#line 3082 "display.c"
    MR_bool display__succeeded;

#line 3085 "display.c"
    {
#line 3087 "display.c"
      display__succeeded = display____Unify____deep_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3090 "display.c"
    return display__succeeded;
#line 3092 "display.c"
  }
#line 3094 "display.c"
}

#line 3097 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 3100 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3102 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3104 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3106 "display.c"
{
#line 3108 "display.c"
  {
#line 3110 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3113 "display.c"
    {
#line 3115 "display.c"
      display____Compare____deep_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3118 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3120 "display.c"
  }
#line 3122 "display.c"
}

#line 3125 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 3128 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3130 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3132 "display.c"
{
#line 3134 "display.c"
  {
#line 3136 "display.c"
    MR_bool display__succeeded;

#line 3139 "display.c"
    {
#line 3141 "display.c"
      display__succeeded = display____Unify____display_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3144 "display.c"
    return display__succeeded;
#line 3146 "display.c"
  }
#line 3148 "display.c"
}

#line 3151 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 3154 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3156 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3158 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3160 "display.c"
{
#line 3162 "display.c"
  {
#line 3164 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3167 "display.c"
    {
#line 3169 "display.c"
      display____Compare____display_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3172 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3174 "display.c"
  }
#line 3176 "display.c"
}

#line 3179 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 3182 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3184 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3186 "display.c"
{
#line 3188 "display.c"
  {
#line 3190 "display.c"
    MR_bool display__succeeded;

#line 3193 "display.c"
    {
#line 3195 "display.c"
      display__succeeded = display____Unify____display_item_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3198 "display.c"
    return display__succeeded;
#line 3200 "display.c"
  }
#line 3202 "display.c"
}

#line 3205 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 3208 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3210 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3212 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3214 "display.c"
{
#line 3216 "display.c"
  {
#line 3218 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3221 "display.c"
    {
#line 3223 "display.c"
      display____Compare____display_item_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3226 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3228 "display.c"
  }
#line 3230 "display.c"
}

#line 3233 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 3236 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3238 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3240 "display.c"
{
#line 3242 "display.c"
  {
#line 3244 "display.c"
    MR_bool display__succeeded;

#line 3247 "display.c"
    {
#line 3249 "display.c"
      display__succeeded = display____Unify____link_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3252 "display.c"
    return display__succeeded;
#line 3254 "display.c"
  }
#line 3256 "display.c"
}

#line 3259 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 3262 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3264 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3266 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3268 "display.c"
{
#line 3270 "display.c"
  {
#line 3272 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3275 "display.c"
    {
#line 3277 "display.c"
      display____Compare____link_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3280 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3282 "display.c"
  }
#line 3284 "display.c"
}

#line 3287 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 3290 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3292 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3294 "display.c"
{
#line 3296 "display.c"
  {
#line 3298 "display.c"
    MR_bool display__succeeded;

#line 3301 "display.c"
    {
#line 3303 "display.c"
      display__succeeded = display____Unify____list_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3306 "display.c"
    return display__succeeded;
#line 3308 "display.c"
  }
#line 3310 "display.c"
}

#line 3313 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 3316 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3318 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3320 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3322 "display.c"
{
#line 3324 "display.c"
  {
#line 3326 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3329 "display.c"
    {
#line 3331 "display.c"
      display____Compare____list_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3334 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3336 "display.c"
  }
#line 3338 "display.c"
}

#line 3341 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 3344 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3346 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3348 "display.c"
{
#line 3350 "display.c"
  {
#line 3352 "display.c"
    MR_bool display__succeeded;

#line 3355 "display.c"
    {
#line 3357 "display.c"
      display__succeeded = display____Unify____pseudo_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3360 "display.c"
    return display__succeeded;
#line 3362 "display.c"
  }
#line 3364 "display.c"
}

#line 3367 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 3370 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3372 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3374 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3376 "display.c"
{
#line 3378 "display.c"
  {
#line 3380 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3383 "display.c"
    {
#line 3385 "display.c"
      display____Compare____pseudo_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3388 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3390 "display.c"
  }
#line 3392 "display.c"
}

#line 3395 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 3398 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3400 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3402 "display.c"
{
#line 3404 "display.c"
  {
#line 3406 "display.c"
    MR_bool display__succeeded;

#line 3409 "display.c"
    {
#line 3411 "display.c"
      display__succeeded = display____Unify____str_attr_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3414 "display.c"
    return display__succeeded;
#line 3416 "display.c"
  }
#line 3418 "display.c"
}

#line 3421 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 3424 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3426 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3428 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3430 "display.c"
{
#line 3432 "display.c"
  {
#line 3434 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3437 "display.c"
    {
#line 3439 "display.c"
      display____Compare____str_attr_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3442 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3444 "display.c"
  }
#line 3446 "display.c"
}

#line 3449 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 3452 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3454 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3456 "display.c"
{
#line 3458 "display.c"
  {
#line 3460 "display.c"
    MR_bool display__succeeded;

#line 3463 "display.c"
    {
#line 3465 "display.c"
      display__succeeded = display____Unify____table_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3468 "display.c"
    return display__succeeded;
#line 3470 "display.c"
  }
#line 3472 "display.c"
}

#line 3475 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 3478 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3480 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3482 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3484 "display.c"
{
#line 3486 "display.c"
  {
#line 3488 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3491 "display.c"
    {
#line 3493 "display.c"
      display____Compare____table_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3496 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3498 "display.c"
  }
#line 3500 "display.c"
}

#line 3503 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 3506 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3508 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3510 "display.c"
{
#line 3512 "display.c"
  {
#line 3514 "display.c"
    MR_bool display__succeeded;

#line 3517 "display.c"
    {
#line 3519 "display.c"
      display__succeeded = display____Unify____table_cell_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3522 "display.c"
    return display__succeeded;
#line 3524 "display.c"
  }
#line 3526 "display.c"
}

#line 3529 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 3532 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3534 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3536 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3538 "display.c"
{
#line 3540 "display.c"
  {
#line 3542 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3545 "display.c"
    {
#line 3547 "display.c"
      display____Compare____table_cell_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3550 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3552 "display.c"
  }
#line 3554 "display.c"
}

#line 3557 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 3560 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3562 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3564 "display.c"
{
#line 3566 "display.c"
  {
#line 3568 "display.c"
    MR_bool display__succeeded;

#line 3571 "display.c"
    {
#line 3573 "display.c"
      display__succeeded = display____Unify____table_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3576 "display.c"
    return display__succeeded;
#line 3578 "display.c"
  }
#line 3580 "display.c"
}

#line 3583 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 3586 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3588 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3590 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3592 "display.c"
{
#line 3594 "display.c"
  {
#line 3596 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3599 "display.c"
    {
#line 3601 "display.c"
      display____Compare____table_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3604 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3606 "display.c"
  }
#line 3608 "display.c"
}

#line 3611 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 3614 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3616 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3618 "display.c"
{
#line 3620 "display.c"
  {
#line 3622 "display.c"
    MR_bool display__succeeded;

#line 3625 "display.c"
    {
#line 3627 "display.c"
      display__succeeded = display____Unify____table_column_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3630 "display.c"
    return display__succeeded;
#line 3632 "display.c"
  }
#line 3634 "display.c"
}

#line 3637 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 3640 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3642 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3644 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3646 "display.c"
{
#line 3648 "display.c"
  {
#line 3650 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3653 "display.c"
    {
#line 3655 "display.c"
      display____Compare____table_column_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3658 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3660 "display.c"
  }
#line 3662 "display.c"
}

#line 3665 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 3668 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3670 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3672 "display.c"
{
#line 3674 "display.c"
  {
#line 3676 "display.c"
    MR_bool display__succeeded;

#line 3679 "display.c"
    {
#line 3681 "display.c"
      display__succeeded = display____Unify____table_column_colour_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3684 "display.c"
    return display__succeeded;
#line 3686 "display.c"
  }
#line 3688 "display.c"
}

#line 3691 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 3694 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3696 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3698 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3700 "display.c"
{
#line 3702 "display.c"
  {
#line 3704 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3707 "display.c"
    {
#line 3709 "display.c"
      display____Compare____table_column_colour_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3712 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3714 "display.c"
  }
#line 3716 "display.c"
}

#line 3719 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 3722 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3724 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3726 "display.c"
{
#line 3728 "display.c"
  {
#line 3730 "display.c"
    MR_bool display__succeeded;

#line 3733 "display.c"
    {
#line 3735 "display.c"
      display__succeeded = display____Unify____table_data_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3738 "display.c"
    return display__succeeded;
#line 3740 "display.c"
  }
#line 3742 "display.c"
}

#line 3745 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 3748 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3750 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3752 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3754 "display.c"
{
#line 3756 "display.c"
  {
#line 3758 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3761 "display.c"
    {
#line 3763 "display.c"
      display____Compare____table_data_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3766 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3768 "display.c"
  }
#line 3770 "display.c"
}

#line 3773 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 3776 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3778 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3780 "display.c"
{
#line 3782 "display.c"
  {
#line 3784 "display.c"
    MR_bool display__succeeded;

#line 3787 "display.c"
    {
#line 3789 "display.c"
      display__succeeded = display____Unify____table_header_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3792 "display.c"
    return display__succeeded;
#line 3794 "display.c"
  }
#line 3796 "display.c"
}

#line 3799 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 3802 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3804 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3806 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3808 "display.c"
{
#line 3810 "display.c"
  {
#line 3812 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3815 "display.c"
    {
#line 3817 "display.c"
      display____Compare____table_header_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3820 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3822 "display.c"
  }
#line 3824 "display.c"
}

#line 3827 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 3830 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3832 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3834 "display.c"
{
#line 3836 "display.c"
  {
#line 3838 "display.c"
    MR_bool display__succeeded;

#line 3841 "display.c"
    {
#line 3843 "display.c"
      display__succeeded = display____Unify____table_header_group_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3846 "display.c"
    return display__succeeded;
#line 3848 "display.c"
  }
#line 3850 "display.c"
}

#line 3853 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 3856 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3858 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3860 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3862 "display.c"
{
#line 3864 "display.c"
  {
#line 3866 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3869 "display.c"
    {
#line 3871 "display.c"
      display____Compare____table_header_group_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3874 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3876 "display.c"
  }
#line 3878 "display.c"
}

#line 3881 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 3884 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3886 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3888 "display.c"
{
#line 3890 "display.c"
  {
#line 3892 "display.c"
    MR_bool display__succeeded;

#line 3895 "display.c"
    {
#line 3897 "display.c"
      display__succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3900 "display.c"
    return display__succeeded;
#line 3902 "display.c"
  }
#line 3904 "display.c"
}

#line 3907 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 3910 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3912 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3914 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3916 "display.c"
{
#line 3918 "display.c"
  {
#line 3920 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3923 "display.c"
    {
#line 3925 "display.c"
      display____Compare____table_header_group_columns_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3928 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3930 "display.c"
  }
#line 3932 "display.c"
}

#line 3935 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 3938 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3940 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3942 "display.c"
{
#line 3944 "display.c"
  {
#line 3946 "display.c"
    MR_bool display__succeeded;

#line 3949 "display.c"
    {
#line 3951 "display.c"
      display__succeeded = display____Unify____table_row_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3954 "display.c"
    return display__succeeded;
#line 3956 "display.c"
  }
#line 3958 "display.c"
}

#line 3961 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 3964 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3966 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3968 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3970 "display.c"
{
#line 3972 "display.c"
  {
#line 3974 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3977 "display.c"
    {
#line 3979 "display.c"
      display____Compare____table_row_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3982 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3984 "display.c"
  }
#line 3986 "display.c"
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
#line 4019 "display.c"
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
#line 4033 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
              else
#line 135 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4039 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                else
#line 4043 "display.c"
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
#line 4056 "display.c"
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
#line 4090 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    else
#line 4094 "display.c"
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
#line 4109 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                  else
#line 135 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4115 "display.c"
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
#line 4137 "display.c"
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
#line 4150 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                  else
#line 135 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4156 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    else
#line 135 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4162 "display.c"
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
#line 4255 "display.c"
                    /* direct tailcall eliminated */
#line 4257 "display.c"
                    {
#line 4259 "display.c"
                      MR_Word display__HeadVar__1__tmp_copy_1 = display__V_9_9;
#line 4261 "display.c"
                      MR_Word display__HeadVar__2__tmp_copy_2 = display__V_10_10;

#line 4264 "display.c"
                      display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 4266 "display.c"
                      display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 4268 "display.c"
                    }
#line 4270 "display.c"
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
#line 4297 "display.c"
                      display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[8];
#line 4299 "display.c"
                      {
#line 4301 "display.c"
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
#line 4325 "display.c"
                      {
#line 4327 "display.c"
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
#line 4369 "display.c"
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
#line 4398 "display.c"
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
#line 4423 "display.c"
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
#line 4436 "display.c"
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
#line 4512 "display.c"
              display__succeeded = (strcmp(display__V_5_5, display__V_7_7) == 0);
#line 121 "display.m"
              if (display__succeeded)
#line 121 "display.m"
                {
#line 4518 "display.c"
                  display__TypeInfo_11_11 = (MR_Word) &display_scalar_common_1[7];
#line 4520 "display.c"
                  {
#line 4522 "display.c"
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
#line 4548 "display.c"
              {
#line 4550 "display.c"
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
#line 4588 "display.c"
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
#line 4614 "display.c"
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
#line 4638 "display.c"
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

#line 4714 "display.c"
        {
#line 4716 "display.c"
          display__succeeded = display____Unify____table_header_group_columns_0_0(display__V_3_3, display__V_6_6);
        }
#line 106 "display.m"
        if (display__succeeded)
#line 106 "display.m"
          {
#line 4723 "display.c"
            display__succeeded = (display__V_4_4 == display__V_7_7);
#line 106 "display.m"
            if (display__succeeded)
#line 4727 "display.c"
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
#line 4764 "display.c"
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

#line 4822 "display.c"
        {
#line 4824 "display.c"
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
#line 4860 "display.c"
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
#line 4891 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
            else
#line 185 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4897 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4903 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4909 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4915 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4921 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 4925 "display.c"
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
#line 4940 "display.c"
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
#line 4964 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4970 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4976 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4982 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4988 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 4992 "display.c"
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
#line 5007 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
              else
#line 185 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5013 "display.c"
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
#line 5037 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5043 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5049 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5055 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                          else
#line 5059 "display.c"
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
#line 5074 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                else
#line 185 "display.m"
                  if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5080 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5086 "display.c"
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
#line 5110 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5116 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5122 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                            else
#line 5126 "display.c"
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
#line 5145 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                  else
#line 185 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5151 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5157 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5163 "display.c"
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
#line 5185 "display.c"
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
#line 5209 "display.c"
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
#line 5234 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5240 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                              else
#line 5244 "display.c"
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
#line 5259 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    else
#line 185 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5265 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5271 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5277 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5283 "display.c"
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
#line 5307 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                                else
#line 5311 "display.c"
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
#line 5326 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5332 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5338 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5344 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5350 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                              else
#line 185 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5356 "display.c"
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
#line 5378 "display.c"
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
#line 5391 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                      else
#line 185 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5397 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        else
#line 185 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5403 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                          else
#line 185 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5409 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                            else
#line 185 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5415 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                              else
#line 185 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5421 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                                else
#line 185 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5427 "display.c"
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
#line 5495 "display.c"
              {
#line 5497 "display.c"
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
#line 5523 "display.c"
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
#line 5548 "display.c"
                  {
#line 5550 "display.c"
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
#line 5576 "display.c"
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
#line 5613 "display.c"
                      {
#line 5615 "display.c"
                        display__succeeded = measurement_units____Unify____memory_0_0(display__V_9_9, display__V_12_12);
                      }
#line 185 "display.m"
                      if (display__succeeded)
#line 185 "display.m"
                        {
#line 5622 "display.c"
                          display__succeeded = (display__V_10_10 == display__V_13_13);
#line 185 "display.m"
                          if (display__succeeded)
#line 5626 "display.c"
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
#line 5653 "display.c"
                        {
#line 5655 "display.c"
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
#line 5681 "display.c"
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
#line 5704 "display.c"
                          {
#line 5706 "display.c"
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
#line 5761 "display.c"
  {
#line 5763 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5766 "display.c"
    return display__succeeded;
#line 5768 "display.c"
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
#line 5814 "display.c"
  {
#line 5816 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5819 "display.c"
    return display__succeeded;
#line 5821 "display.c"
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
#line 5867 "display.c"
  {
#line 5869 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5872 "display.c"
    return display__succeeded;
#line 5874 "display.c"
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
#line 5903 "display.c"
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
#line 5917 "display.c"
            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
          else
#line 5921 "display.c"
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
#line 5934 "display.c"
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
#line 5956 "display.c"
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
#line 5971 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
            else
#line 147 "display.m"
              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5977 "display.c"
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
#line 5995 "display.c"
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
#line 6079 "display.c"
                {
#line 6081 "display.c"
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
#line 6111 "display.c"
                {
#line 6113 "display.c"
                  display__succeeded = display____Unify____table_data_0_0(display__V_5_5, display__V_7_7);
                }
#line 147 "display.m"
                if (display__succeeded)
#line 6118 "display.c"
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
#line 6155 "display.c"
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
#line 6189 "display.c"
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
#line 6209 "display.c"
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
#line 6229 "display.c"
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

#line 6310 "display.c"
        display__succeeded = (display__V_3_3 == display__V_7_7);
#line 82 "display.m"
        if (display__succeeded)
#line 82 "display.m"
          {
#line 6316 "display.c"
            display__succeeded = (display__V_4_4 == display__V_8_8);
#line 82 "display.m"
            if (display__succeeded)
#line 82 "display.m"
              {
#line 6322 "display.c"
                display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[4];
#line 6324 "display.c"
                {
#line 6326 "display.c"
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_9_9)));
                }
#line 82 "display.m"
                if (display__succeeded)
#line 82 "display.m"
                  {
#line 6333 "display.c"
                    display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[5];
#line 6335 "display.c"
                    {
#line 6337 "display.c"
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
#line 6396 "display.c"
  {
#line 6398 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6401 "display.c"
    return display__succeeded;
#line 6403 "display.c"
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
#line 6432 "display.c"
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
#line 6454 "display.c"
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

#line 6524 "display.c"
        display__succeeded = (strcmp(display__V_3_3, display__V_5_5) == 0);
#line 246 "display.m"
        if (display__succeeded)
#line 6528 "display.c"
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
#line 6580 "display.c"
  {
#line 6582 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6585 "display.c"
    return display__succeeded;
#line 6587 "display.c"
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
#line 6633 "display.c"
  {
#line 6635 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6638 "display.c"
    return display__succeeded;
#line 6640 "display.c"
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
#line 6675 "display.c"
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
#line 6689 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
              else
#line 34 "display.m"
                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6695 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                else
#line 34 "display.m"
                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6701 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6707 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6713 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6719 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6725 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 6729 "display.c"
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
#line 6742 "display.c"
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
#line 6766 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6772 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6778 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6784 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6790 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6796 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 6800 "display.c"
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
#line 6815 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                  else
#line 34 "display.m"
                    if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6821 "display.c"
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
#line 6845 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6851 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6857 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6863 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6869 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 6873 "display.c"
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
#line 6888 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    else
#line 34 "display.m"
                      if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6894 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6900 "display.c"
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
#line 6934 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6940 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6946 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6952 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                  else
#line 6956 "display.c"
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
#line 6971 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      else
#line 34 "display.m"
                        if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6977 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6983 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6989 "display.c"
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
#line 7013 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7019 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7025 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                    else
#line 7029 "display.c"
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
#line 7048 "display.c"
                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        else
#line 34 "display.m"
                          if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7054 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7060 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7066 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7072 "display.c"
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
#line 7098 "display.c"
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
#line 7118 "display.c"
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
#line 7147 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7153 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                      else
#line 7157 "display.c"
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
#line 7172 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                          else
#line 34 "display.m"
                            if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7178 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7184 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7190 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7196 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7202 "display.c"
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
#line 7226 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                        else
#line 7230 "display.c"
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
#line 7245 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7251 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7257 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7263 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7269 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7275 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7281 "display.c"
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
#line 7303 "display.c"
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
#line 7316 "display.c"
                              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            else
#line 34 "display.m"
                              if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7322 "display.c"
                                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                              else
#line 34 "display.m"
                                if (((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7328 "display.c"
                                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                else
#line 34 "display.m"
                                  if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 7334 "display.c"
                                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                                  else
#line 34 "display.m"
                                    if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 7340 "display.c"
                                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                    else
#line 34 "display.m"
                                      if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 7346 "display.c"
                                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                      else
#line 34 "display.m"
                                        if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7352 "display.c"
                                          *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                                        else
#line 34 "display.m"
                                          if (((((MR_tag((MR_Word) display__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 7358 "display.c"
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
#line 7451 "display.c"
                    {
#line 7453 "display.c"
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
#line 7479 "display.c"
                      {
#line 7481 "display.c"
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
#line 7507 "display.c"
                        /* direct tailcall eliminated */
#line 7509 "display.c"
                        {
#line 7511 "display.c"
                          MR_Word display__HeadVar__1__tmp_copy_1 = display__V_23_23;
#line 7513 "display.c"
                          MR_Word display__HeadVar__2__tmp_copy_2 = display__V_24_24;

#line 7516 "display.c"
                          display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 7518 "display.c"
                          display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 7520 "display.c"
                        }
#line 7522 "display.c"
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
#line 7547 "display.c"
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
#line 7588 "display.c"
                            display__succeeded = (display__V_13_13 == display__V_16_16);
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 7594 "display.c"
                                display__TypeInfo_27_27 = (MR_Word) &display_scalar_common_1[2];
#line 7596 "display.c"
                                {
#line 7598 "display.c"
                                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_27_27, ((MR_Box) (display__V_14_14)), ((MR_Box) (display__V_17_17)));
                                }
#line 34 "display.m"
                                if (display__succeeded)
#line 34 "display.m"
                                  {
#line 7605 "display.c"
                                    display__TypeInfo_28_28 = (MR_Word) &display_scalar_common_1[3];
#line 7607 "display.c"
                                    {
#line 7609 "display.c"
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
#line 7639 "display.c"
                              {
#line 7641 "display.c"
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
#line 7667 "display.c"
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
#line 7690 "display.c"
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
#line 7731 "display.c"
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
#line 7753 "display.c"
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

#line 7820 "display.c"
        {
#line 7822 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[2], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 28 "display.m"
        if (display__succeeded)
#line 28 "display.m"
          {
#line 7829 "display.c"
            display__TypeInfo_10_10 = (MR_Word) &display_scalar_common_1[3];
#line 7831 "display.c"
            {
#line 7833 "display.c"
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
#line 7871 "display.c"
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
#line 7901 "display.c"
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
#line 7921 "display.c"
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
#line 7941 "display.c"
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

#line 8025 "display.c"
        {
#line 8027 "display.c"
          display__succeeded = query____Unify____cmd_0_0(display__V_3_3, display__V_7_7);
        }
#line 231 "display.m"
        if (display__succeeded)
#line 231 "display.m"
          {
#line 8034 "display.c"
            display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[1];
#line 8036 "display.c"
            {
#line 8038 "display.c"
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_8_8)));
            }
#line 231 "display.m"
            if (display__succeeded)
#line 231 "display.m"
              {
#line 8045 "display.c"
                {
#line 8047 "display.c"
                  display__succeeded = display____Unify____attr_string_0_0(display__V_5_5, display__V_9_9);
                }
#line 231 "display.m"
                if (display__succeeded)
#line 8052 "display.c"
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
#line 8091 "display.c"
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
#line 8113 "display.c"
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

#line 8174 "display.c"
        {
#line 8176 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[0], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 204 "display.m"
        if (display__succeeded)
#line 8181 "display.c"
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
