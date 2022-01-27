/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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




#line 82 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0;

#line 85 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2];

#line 88 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_attr_string_0_0;

#line 91 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1];

#line 94 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1];

#line 97 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1];

#line 100 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1];

#line 103 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 106 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4];

#line 109 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_deep_link_0_0;

#line 112 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1];

#line 115 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1];

#line 118 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1];

#line 121 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1];

#line 124 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 127 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0;

#line 130 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2];

#line 133 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2];

#line 136 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_0_0;

#line 139 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1];

#line 142 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1];

#line 145 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1];

#line 148 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1];

#line 151 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1];

#line 154 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_0;

#line 157 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1];

#line 160 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_1;

#line 163 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_2;

#line 166 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1];

#line 169 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_3;

#line 172 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1];

#line 175 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_4;

#line 178 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3];

#line 181 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_5;

#line 184 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1];

#line 187 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_6;

#line 190 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1];

#line 193 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_7;

#line 196 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1];

#line 199 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_display_item_0_8;

#line 202 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1];

#line 205 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1];

#line 208 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1];

#line 211 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6];

#line 214 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_item_0[4];

#line 217 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_item_0[9];

#line 220 "display.c"
static const MR_Integer display__display__functor_number_map_display_item_0[9];

#line 223 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0;

#line 226 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1;

#line 229 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2];

#line 232 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2];

#line 235 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2];

#line 238 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0;

#line 241 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1;

#line 244 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2;

#line 247 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3;

#line 250 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4];

#line 253 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4];

#line 256 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4];

#line 259 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2];

#line 262 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_pseudo_link_0_0;

#line 265 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1];

#line 268 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1];

#line 271 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1];

#line 274 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1];

#line 277 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0;

#line 280 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1;

#line 283 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2;

#line 286 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3];

#line 289 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3];

#line 292 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3];

#line 295 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0;

#line 298 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0;

#line 301 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4];

#line 304 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4];

#line 307 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_0_0;

#line 310 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1];

#line 313 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1];

#line 316 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1];

#line 319 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1];

#line 322 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1];

#line 325 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1];

#line 328 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_0;

#line 331 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2];

#line 334 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2];

#line 337 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_1;

#line 340 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_cell_0_2;

#line 343 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1];

#line 346 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1];

#line 349 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1];

#line 352 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_cell_0[3];

#line 355 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3];

#line 358 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3];

#line 361 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0;

#line 364 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1;

#line 367 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2;

#line 370 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3];

#line 373 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3];

#line 376 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3];

#line 379 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0;

#line 382 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1;

#line 385 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2;

#line 388 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3;

#line 391 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4;

#line 394 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5;

#line 397 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6;

#line 400 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7;

#line 403 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8;

#line 406 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9;

#line 409 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10;

#line 412 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11;

#line 415 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12;

#line 418 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_class_0[13];

#line 421 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_class_0[13];

#line 424 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_class_0[13];

#line 427 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0;

#line 430 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1;

#line 433 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2;

#line 436 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3];

#line 439 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3];

#line 442 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3];

#line 445 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1];

#line 448 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_0;

#line 451 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1];

#line 454 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_1;

#line 457 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1];

#line 460 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_2;

#line 463 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3];

#line 466 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_3;

#line 469 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1];

#line 472 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_4;

#line 475 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1];

#line 478 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_5;

#line 481 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1];

#line 484 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_6;

#line 487 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1];

#line 490 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_data_0_7;

#line 493 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1];

#line 496 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1];

#line 499 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1];

#line 502 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5];

#line 505 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_data_0[4];

#line 508 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_data_0[8];

#line 511 "display.c"
static const MR_Integer display__display__functor_number_map_table_data_0[8];

#line 514 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1];

#line 517 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0;

#line 520 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0;

#line 523 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3];

#line 526 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3];

#line 529 "display.c"
static const MR_DuArgLocn display__display__field_locns_table_header_group_0_0[3];

#line 532 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_0_0;

#line 535 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1];

#line 538 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1];

#line 541 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1];

#line 544 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1];

#line 547 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1];

#line 550 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1];

#line 553 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_0;

#line 556 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0;

#line 559 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2];

#line 562 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2];

#line 565 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_header_group_columns_0_1;

#line 568 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1];

#line 571 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1];

#line 574 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_columns_0[2];

#line 577 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2];

#line 580 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2];

#line 583 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0;

#line 586 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1];

#line 589 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1];

#line 592 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_0;

#line 595 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_1;

#line 598 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1];

#line 601 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1];

#line 604 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_2;

#line 607 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1];

#line 610 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1];

#line 613 "display.c"
static const MR_DuFunctorDesc display__display__du_functor_desc_table_row_0_3;

#line 616 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1];

#line 619 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1];

#line 622 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1];

#line 625 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1];

#line 628 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_row_0[4];

#line 631 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4];

#line 634 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4];

#line 637 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 640 "display.c"
  MR_Box display__wrapper_arg_1,
#line 642 "display.c"
  MR_Box display__wrapper_arg_2);

#line 645 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 648 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 650 "display.c"
  MR_Box display__wrapper_arg_2,
#line 652 "display.c"
  MR_Box display__wrapper_arg_3);

#line 655 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 658 "display.c"
  MR_Box display__wrapper_arg_1,
#line 660 "display.c"
  MR_Box display__wrapper_arg_2);

#line 663 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 666 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 668 "display.c"
  MR_Box display__wrapper_arg_2,
#line 670 "display.c"
  MR_Box display__wrapper_arg_3);

#line 673 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 676 "display.c"
  MR_Box display__wrapper_arg_1,
#line 678 "display.c"
  MR_Box display__wrapper_arg_2);

#line 681 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 684 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 686 "display.c"
  MR_Box display__wrapper_arg_2,
#line 688 "display.c"
  MR_Box display__wrapper_arg_3);

#line 691 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 694 "display.c"
  MR_Box display__wrapper_arg_1,
#line 696 "display.c"
  MR_Box display__wrapper_arg_2);

#line 699 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 702 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 704 "display.c"
  MR_Box display__wrapper_arg_2,
#line 706 "display.c"
  MR_Box display__wrapper_arg_3);

#line 709 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 712 "display.c"
  MR_Box display__wrapper_arg_1,
#line 714 "display.c"
  MR_Box display__wrapper_arg_2);

#line 717 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 720 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 722 "display.c"
  MR_Box display__wrapper_arg_2,
#line 724 "display.c"
  MR_Box display__wrapper_arg_3);

#line 727 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 730 "display.c"
  MR_Box display__wrapper_arg_1,
#line 732 "display.c"
  MR_Box display__wrapper_arg_2);

#line 735 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 738 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 740 "display.c"
  MR_Box display__wrapper_arg_2,
#line 742 "display.c"
  MR_Box display__wrapper_arg_3);

#line 745 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 748 "display.c"
  MR_Box display__wrapper_arg_1,
#line 750 "display.c"
  MR_Box display__wrapper_arg_2);

#line 753 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 756 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 758 "display.c"
  MR_Box display__wrapper_arg_2,
#line 760 "display.c"
  MR_Box display__wrapper_arg_3);

#line 763 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 766 "display.c"
  MR_Box display__wrapper_arg_1,
#line 768 "display.c"
  MR_Box display__wrapper_arg_2);

#line 771 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 774 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 776 "display.c"
  MR_Box display__wrapper_arg_2,
#line 778 "display.c"
  MR_Box display__wrapper_arg_3);

#line 781 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 784 "display.c"
  MR_Box display__wrapper_arg_1,
#line 786 "display.c"
  MR_Box display__wrapper_arg_2);

#line 789 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 792 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 794 "display.c"
  MR_Box display__wrapper_arg_2,
#line 796 "display.c"
  MR_Box display__wrapper_arg_3);

#line 799 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 802 "display.c"
  MR_Box display__wrapper_arg_1,
#line 804 "display.c"
  MR_Box display__wrapper_arg_2);

#line 807 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 810 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 812 "display.c"
  MR_Box display__wrapper_arg_2,
#line 814 "display.c"
  MR_Box display__wrapper_arg_3);

#line 817 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 820 "display.c"
  MR_Box display__wrapper_arg_1,
#line 822 "display.c"
  MR_Box display__wrapper_arg_2);

#line 825 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 828 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 830 "display.c"
  MR_Box display__wrapper_arg_2,
#line 832 "display.c"
  MR_Box display__wrapper_arg_3);

#line 835 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 838 "display.c"
  MR_Box display__wrapper_arg_1,
#line 840 "display.c"
  MR_Box display__wrapper_arg_2);

#line 843 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 846 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 848 "display.c"
  MR_Box display__wrapper_arg_2,
#line 850 "display.c"
  MR_Box display__wrapper_arg_3);

#line 853 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 856 "display.c"
  MR_Box display__wrapper_arg_1,
#line 858 "display.c"
  MR_Box display__wrapper_arg_2);

#line 861 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 864 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 866 "display.c"
  MR_Box display__wrapper_arg_2,
#line 868 "display.c"
  MR_Box display__wrapper_arg_3);

#line 871 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 874 "display.c"
  MR_Box display__wrapper_arg_1,
#line 876 "display.c"
  MR_Box display__wrapper_arg_2);

#line 879 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 882 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 884 "display.c"
  MR_Box display__wrapper_arg_2,
#line 886 "display.c"
  MR_Box display__wrapper_arg_3);

#line 889 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 892 "display.c"
  MR_Box display__wrapper_arg_1,
#line 894 "display.c"
  MR_Box display__wrapper_arg_2);

#line 897 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 900 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 902 "display.c"
  MR_Box display__wrapper_arg_2,
#line 904 "display.c"
  MR_Box display__wrapper_arg_3);

#line 907 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 910 "display.c"
  MR_Box display__wrapper_arg_1,
#line 912 "display.c"
  MR_Box display__wrapper_arg_2);

#line 915 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 918 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 920 "display.c"
  MR_Box display__wrapper_arg_2,
#line 922 "display.c"
  MR_Box display__wrapper_arg_3);

#line 925 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 928 "display.c"
  MR_Box display__wrapper_arg_1,
#line 930 "display.c"
  MR_Box display__wrapper_arg_2);

#line 933 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 936 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 938 "display.c"
  MR_Box display__wrapper_arg_2,
#line 940 "display.c"
  MR_Box display__wrapper_arg_3);

#line 943 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 946 "display.c"
  MR_Box display__wrapper_arg_1,
#line 948 "display.c"
  MR_Box display__wrapper_arg_2);

#line 951 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 954 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 956 "display.c"
  MR_Box display__wrapper_arg_2,
#line 958 "display.c"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1071 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_str_attr_0
  }
};

#line 1079 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_str_attr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1085 "display.c"
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

#line 1100 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1105 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0
  }
};

#line 1114 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1119 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1] = {
  (MR_Integer) 0
};

#line 1124 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_attr_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1141 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 1149 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1query__type_ctor_info_preferences_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1157 "display.c"
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

#line 1172 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1177 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0
  }
};

#line 1186 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1191 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1] = {
  (MR_Integer) 0
};

#line 1196 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_deep_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1213 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1221 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_display_item_0
  }
};

#line 1229 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1235 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

#line 1241 "display.c"
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

#line 1256 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1261 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0
  }
};

#line 1270 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1275 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1] = {
  (MR_Integer) 0
};

#line 1280 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1297 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1302 "display.c"
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

#line 1317 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1322 "display.c"
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

#line 1337 "display.c"
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

#line 1352 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 1357 "display.c"
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

#line 1372 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_pseudo_link_0
};

#line 1377 "display.c"
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

#line 1392 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_list_class_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1399 "display.c"
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

#line 1414 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_0
};

#line 1419 "display.c"
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

#line 1434 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1439 "display.c"
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

#line 1454 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_display_item_0
};

#line 1459 "display.c"
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

#line 1474 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = {
  &display__display__du_functor_desc_display_item_0_2
};

#line 1479 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = {
  &display__display__du_functor_desc_display_item_0_3
};

#line 1484 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = {
  &display__display__du_functor_desc_display_item_0_4
};

#line 1489 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6] = {
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_7,
  &display__display__du_functor_desc_display_item_0_8
};

#line 1499 "display.c"
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

#line 1523 "display.c"
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

#line 1536 "display.c"
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

#line 1549 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_display_item_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1566 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  (MR_Integer) 0
};

#line 1572 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  (MR_Integer) 1
};

#line 1578 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_0,
  &display__display__enum_functor_desc_link_class_0_1
};

#line 1584 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_1,
  &display__display__enum_functor_desc_link_class_0_0
};

#line 1590 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1596 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_link_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1613 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  (MR_Integer) 0
};

#line 1619 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  (MR_Integer) 1
};

#line 1625 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  (MR_Integer) 2
};

#line 1631 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  (MR_Integer) 3
};

#line 1637 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_0,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3
};

#line 1645 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_0
};

#line 1653 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1661 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_list_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1678 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1684 "display.c"
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

#line 1699 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1704 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0
  }
};

#line 1713 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1718 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = {
  (MR_Integer) 0
};

#line 1723 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_pseudo_link_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1740 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  (MR_Integer) 0
};

#line 1746 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  (MR_Integer) 1
};

#line 1752 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  (MR_Integer) 2
};

#line 1758 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1765 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1772 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1779 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_str_attr_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1796 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_0
  }
};

#line 1804 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_row_0
  }
};

#line 1812 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1display__type_ctor_info_table_header_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_row_0
};

#line 1820 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

#line 1828 "display.c"
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

#line 1843 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1848 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0
  }
};

#line 1857 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1862 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1] = {
  (MR_Integer) 0
};

#line 1867 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1884 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 1889 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1] = {
  (MR_String) "tc_text"
};

#line 1894 "display.c"
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

#line 1909 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1915 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

#line 1921 "display.c"
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

#line 1936 "display.c"
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

#line 1951 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = {
  &display__display__du_functor_desc_table_cell_0_2
};

#line 1956 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = {
  &display__display__du_functor_desc_table_cell_0_0
};

#line 1961 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = {
  &display__display__du_functor_desc_table_cell_0_1
};

#line 1966 "display.c"
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

#line 1985 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3] = {
  &display__display__du_functor_desc_table_cell_0_0,
  &display__display__du_functor_desc_table_cell_0_2,
  &display__display__du_functor_desc_table_cell_0_1
};

#line 1992 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1999 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2016 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  (MR_Integer) 0
};

#line 2022 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  (MR_Integer) 1
};

#line 2028 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  (MR_Integer) 2
};

#line 2034 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_0,
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2
};

#line 2041 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2,
  &display__display__enum_functor_desc_table_class_0_0
};

#line 2048 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2055 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 2072 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  (MR_Integer) 0
};

#line 2078 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  (MR_Integer) 1
};

#line 2084 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  (MR_Integer) 2
};

#line 2090 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  (MR_Integer) 3
};

#line 2096 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  (MR_Integer) 4
};

#line 2102 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  (MR_Integer) 5
};

#line 2108 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  (MR_Integer) 6
};

#line 2114 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  (MR_Integer) 7
};

#line 2120 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  (MR_Integer) 8
};

#line 2126 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  (MR_Integer) 9
};

#line 2132 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  (MR_Integer) 10
};

#line 2138 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  (MR_Integer) 11
};

#line 2144 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  (MR_Integer) 12
};

#line 2150 "display.c"
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

#line 2167 "display.c"
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

#line 2184 "display.c"
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

#line 2201 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 2218 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  (MR_Integer) 0
};

#line 2224 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  (MR_Integer) 1
};

#line 2230 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  (MR_Integer) 2
};

#line 2236 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_0,
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2
};

#line 2243 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2,
  &display__display__enum_functor_desc_table_column_colour_0_0
};

#line 2250 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2257 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_column_colour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 2274 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2279 "display.c"
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

#line 2294 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2299 "display.c"
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

#line 2314 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 2319 "display.c"
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

#line 2334 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2341 "display.c"
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

#line 2356 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0
};

#line 2361 "display.c"
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

#line 2376 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2381 "display.c"
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

#line 2396 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0
};

#line 2401 "display.c"
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

#line 2416 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0
};

#line 2421 "display.c"
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

#line 2436 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = {
  &display__display__du_functor_desc_table_data_0_2
};

#line 2441 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = {
  &display__display__du_functor_desc_table_data_0_6
};

#line 2446 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = {
  &display__display__du_functor_desc_table_data_0_0
};

#line 2451 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

#line 2460 "display.c"
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

#line 2484 "display.c"
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

#line 2496 "display.c"
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

#line 2508 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2525 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1] = {
  (MR_Integer) 0
};

#line 2530 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_group_0
  }
};

#line 2538 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_header_group_0,
  (MR_String) "th_groups"
};

#line 2545 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 2562 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_header_group_columns_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_class_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_colour_0
};

#line 2569 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3] = {
  (MR_String) "thg_titles",
  (MR_String) "thg_class",
  (MR_String) "thg_colour"
};

#line 2576 "display.c"
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

#line 2595 "display.c"
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

#line 2610 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2615 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0
  }
};

#line 2624 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2629 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = {
  (MR_Integer) 0
};

#line 2634 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2651 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2656 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = {
  (MR_String) "thsc_title"
};

#line 2661 "display.c"
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

#line 2676 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_data_0
  }
};

#line 2684 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_data_0
};

#line 2690 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

#line 2696 "display.c"
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

#line 2711 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2716 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1
};

#line 2721 "display.c"
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

#line 2735 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1,
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2741 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2747 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_header_group_columns_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2764 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_cell_0
  }
};

#line 2772 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_cell_0
};

#line 2777 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1] = {
  (MR_String) "tr_cells"
};

#line 2782 "display.c"
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

#line 2797 "display.c"
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

#line 2812 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2817 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1] = {
  (MR_String) "tsh_text"
};

#line 2822 "display.c"
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

#line 2837 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_row_0
};

#line 2842 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1] = {
  (MR_String) "tdr_row"
};

#line 2847 "display.c"
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

#line 2862 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = {
  &display__display__du_functor_desc_table_row_0_1
};

#line 2867 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = {
  &display__display__du_functor_desc_table_row_0_0
};

#line 2872 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = {
  &display__display__du_functor_desc_table_row_0_2
};

#line 2877 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = {
  &display__display__du_functor_desc_table_row_0_3
};

#line 2882 "display.c"
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

#line 2906 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4] = {
  &display__display__du_functor_desc_table_row_0_3,
  &display__display__du_functor_desc_table_row_0_0,
  &display__display__du_functor_desc_table_row_0_2,
  &display__display__du_functor_desc_table_row_0_1
};

#line 2914 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2922 "display.c"
const MR_TypeCtorInfo_Struct display__display__type_ctor_info_table_row_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 2939 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 2942 "display.c"
  MR_Box display__wrapper_arg_1,
#line 2944 "display.c"
  MR_Box display__wrapper_arg_2)
#line 2946 "display.c"
{
#line 2948 "display.c"
  {
#line 2950 "display.c"
    MR_bool display__succeeded;

#line 2953 "display.c"
    {
#line 2955 "display.c"
      display__succeeded = display____Unify____attr_string_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 2958 "display.c"
    return display__succeeded;
#line 2960 "display.c"
  }
#line 2962 "display.c"
}

#line 2965 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 2968 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 2970 "display.c"
  MR_Box display__wrapper_arg_2,
#line 2972 "display.c"
  MR_Box display__wrapper_arg_3)
#line 2974 "display.c"
{
#line 2976 "display.c"
  {
#line 2978 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 2981 "display.c"
    {
#line 2983 "display.c"
      display____Compare____attr_string_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 2986 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 2988 "display.c"
  }
#line 2990 "display.c"
}

#line 2993 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 2996 "display.c"
  MR_Box display__wrapper_arg_1,
#line 2998 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3000 "display.c"
{
#line 3002 "display.c"
  {
#line 3004 "display.c"
    MR_bool display__succeeded;

#line 3007 "display.c"
    {
#line 3009 "display.c"
      display__succeeded = display____Unify____deep_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3012 "display.c"
    return display__succeeded;
#line 3014 "display.c"
  }
#line 3016 "display.c"
}

#line 3019 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 3022 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3024 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3026 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3028 "display.c"
{
#line 3030 "display.c"
  {
#line 3032 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3035 "display.c"
    {
#line 3037 "display.c"
      display____Compare____deep_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3040 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3042 "display.c"
  }
#line 3044 "display.c"
}

#line 3047 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 3050 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3052 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3054 "display.c"
{
#line 3056 "display.c"
  {
#line 3058 "display.c"
    MR_bool display__succeeded;

#line 3061 "display.c"
    {
#line 3063 "display.c"
      display__succeeded = display____Unify____display_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3066 "display.c"
    return display__succeeded;
#line 3068 "display.c"
  }
#line 3070 "display.c"
}

#line 3073 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 3076 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3078 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3080 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3082 "display.c"
{
#line 3084 "display.c"
  {
#line 3086 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3089 "display.c"
    {
#line 3091 "display.c"
      display____Compare____display_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3094 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3096 "display.c"
  }
#line 3098 "display.c"
}

#line 3101 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 3104 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3106 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3108 "display.c"
{
#line 3110 "display.c"
  {
#line 3112 "display.c"
    MR_bool display__succeeded;

#line 3115 "display.c"
    {
#line 3117 "display.c"
      display__succeeded = display____Unify____display_item_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3120 "display.c"
    return display__succeeded;
#line 3122 "display.c"
  }
#line 3124 "display.c"
}

#line 3127 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 3130 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3132 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3134 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3136 "display.c"
{
#line 3138 "display.c"
  {
#line 3140 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3143 "display.c"
    {
#line 3145 "display.c"
      display____Compare____display_item_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3148 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3150 "display.c"
  }
#line 3152 "display.c"
}

#line 3155 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 3158 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3160 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3162 "display.c"
{
#line 3164 "display.c"
  {
#line 3166 "display.c"
    MR_bool display__succeeded;

#line 3169 "display.c"
    {
#line 3171 "display.c"
      display__succeeded = display____Unify____link_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3174 "display.c"
    return display__succeeded;
#line 3176 "display.c"
  }
#line 3178 "display.c"
}

#line 3181 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 3184 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3186 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3188 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3190 "display.c"
{
#line 3192 "display.c"
  {
#line 3194 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3197 "display.c"
    {
#line 3199 "display.c"
      display____Compare____link_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3202 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3204 "display.c"
  }
#line 3206 "display.c"
}

#line 3209 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 3212 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3214 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3216 "display.c"
{
#line 3218 "display.c"
  {
#line 3220 "display.c"
    MR_bool display__succeeded;

#line 3223 "display.c"
    {
#line 3225 "display.c"
      display__succeeded = display____Unify____list_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3228 "display.c"
    return display__succeeded;
#line 3230 "display.c"
  }
#line 3232 "display.c"
}

#line 3235 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 3238 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3240 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3242 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3244 "display.c"
{
#line 3246 "display.c"
  {
#line 3248 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3251 "display.c"
    {
#line 3253 "display.c"
      display____Compare____list_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3256 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3258 "display.c"
  }
#line 3260 "display.c"
}

#line 3263 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 3266 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3268 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3270 "display.c"
{
#line 3272 "display.c"
  {
#line 3274 "display.c"
    MR_bool display__succeeded;

#line 3277 "display.c"
    {
#line 3279 "display.c"
      display__succeeded = display____Unify____pseudo_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3282 "display.c"
    return display__succeeded;
#line 3284 "display.c"
  }
#line 3286 "display.c"
}

#line 3289 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 3292 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3294 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3296 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3298 "display.c"
{
#line 3300 "display.c"
  {
#line 3302 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3305 "display.c"
    {
#line 3307 "display.c"
      display____Compare____pseudo_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3310 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3312 "display.c"
  }
#line 3314 "display.c"
}

#line 3317 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 3320 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3322 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3324 "display.c"
{
#line 3326 "display.c"
  {
#line 3328 "display.c"
    MR_bool display__succeeded;

#line 3331 "display.c"
    {
#line 3333 "display.c"
      display__succeeded = display____Unify____str_attr_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3336 "display.c"
    return display__succeeded;
#line 3338 "display.c"
  }
#line 3340 "display.c"
}

#line 3343 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 3346 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3348 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3350 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3352 "display.c"
{
#line 3354 "display.c"
  {
#line 3356 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3359 "display.c"
    {
#line 3361 "display.c"
      display____Compare____str_attr_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3364 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3366 "display.c"
  }
#line 3368 "display.c"
}

#line 3371 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 3374 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3376 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3378 "display.c"
{
#line 3380 "display.c"
  {
#line 3382 "display.c"
    MR_bool display__succeeded;

#line 3385 "display.c"
    {
#line 3387 "display.c"
      display__succeeded = display____Unify____table_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3390 "display.c"
    return display__succeeded;
#line 3392 "display.c"
  }
#line 3394 "display.c"
}

#line 3397 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 3400 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3402 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3404 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3406 "display.c"
{
#line 3408 "display.c"
  {
#line 3410 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3413 "display.c"
    {
#line 3415 "display.c"
      display____Compare____table_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3418 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3420 "display.c"
  }
#line 3422 "display.c"
}

#line 3425 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 3428 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3430 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3432 "display.c"
{
#line 3434 "display.c"
  {
#line 3436 "display.c"
    MR_bool display__succeeded;

#line 3439 "display.c"
    {
#line 3441 "display.c"
      display__succeeded = display____Unify____table_cell_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3444 "display.c"
    return display__succeeded;
#line 3446 "display.c"
  }
#line 3448 "display.c"
}

#line 3451 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 3454 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3456 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3458 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3460 "display.c"
{
#line 3462 "display.c"
  {
#line 3464 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3467 "display.c"
    {
#line 3469 "display.c"
      display____Compare____table_cell_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3472 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3474 "display.c"
  }
#line 3476 "display.c"
}

#line 3479 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 3482 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3484 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3486 "display.c"
{
#line 3488 "display.c"
  {
#line 3490 "display.c"
    MR_bool display__succeeded;

#line 3493 "display.c"
    {
#line 3495 "display.c"
      display__succeeded = display____Unify____table_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3498 "display.c"
    return display__succeeded;
#line 3500 "display.c"
  }
#line 3502 "display.c"
}

#line 3505 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 3508 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3510 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3512 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3514 "display.c"
{
#line 3516 "display.c"
  {
#line 3518 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3521 "display.c"
    {
#line 3523 "display.c"
      display____Compare____table_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3526 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3528 "display.c"
  }
#line 3530 "display.c"
}

#line 3533 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 3536 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3538 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3540 "display.c"
{
#line 3542 "display.c"
  {
#line 3544 "display.c"
    MR_bool display__succeeded;

#line 3547 "display.c"
    {
#line 3549 "display.c"
      display__succeeded = display____Unify____table_column_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3552 "display.c"
    return display__succeeded;
#line 3554 "display.c"
  }
#line 3556 "display.c"
}

#line 3559 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 3562 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3564 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3566 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3568 "display.c"
{
#line 3570 "display.c"
  {
#line 3572 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3575 "display.c"
    {
#line 3577 "display.c"
      display____Compare____table_column_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3580 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3582 "display.c"
  }
#line 3584 "display.c"
}

#line 3587 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 3590 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3592 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3594 "display.c"
{
#line 3596 "display.c"
  {
#line 3598 "display.c"
    MR_bool display__succeeded;

#line 3601 "display.c"
    {
#line 3603 "display.c"
      display__succeeded = display____Unify____table_column_colour_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3606 "display.c"
    return display__succeeded;
#line 3608 "display.c"
  }
#line 3610 "display.c"
}

#line 3613 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 3616 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3618 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3620 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3622 "display.c"
{
#line 3624 "display.c"
  {
#line 3626 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3629 "display.c"
    {
#line 3631 "display.c"
      display____Compare____table_column_colour_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3634 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3636 "display.c"
  }
#line 3638 "display.c"
}

#line 3641 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 3644 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3646 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3648 "display.c"
{
#line 3650 "display.c"
  {
#line 3652 "display.c"
    MR_bool display__succeeded;

#line 3655 "display.c"
    {
#line 3657 "display.c"
      display__succeeded = display____Unify____table_data_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3660 "display.c"
    return display__succeeded;
#line 3662 "display.c"
  }
#line 3664 "display.c"
}

#line 3667 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 3670 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3672 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3674 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3676 "display.c"
{
#line 3678 "display.c"
  {
#line 3680 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3683 "display.c"
    {
#line 3685 "display.c"
      display____Compare____table_data_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3688 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3690 "display.c"
  }
#line 3692 "display.c"
}

#line 3695 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 3698 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3700 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3702 "display.c"
{
#line 3704 "display.c"
  {
#line 3706 "display.c"
    MR_bool display__succeeded;

#line 3709 "display.c"
    {
#line 3711 "display.c"
      display__succeeded = display____Unify____table_header_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3714 "display.c"
    return display__succeeded;
#line 3716 "display.c"
  }
#line 3718 "display.c"
}

#line 3721 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 3724 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3726 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3728 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3730 "display.c"
{
#line 3732 "display.c"
  {
#line 3734 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3737 "display.c"
    {
#line 3739 "display.c"
      display____Compare____table_header_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3742 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3744 "display.c"
  }
#line 3746 "display.c"
}

#line 3749 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 3752 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3754 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3756 "display.c"
{
#line 3758 "display.c"
  {
#line 3760 "display.c"
    MR_bool display__succeeded;

#line 3763 "display.c"
    {
#line 3765 "display.c"
      display__succeeded = display____Unify____table_header_group_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3768 "display.c"
    return display__succeeded;
#line 3770 "display.c"
  }
#line 3772 "display.c"
}

#line 3775 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 3778 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3780 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3782 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3784 "display.c"
{
#line 3786 "display.c"
  {
#line 3788 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3791 "display.c"
    {
#line 3793 "display.c"
      display____Compare____table_header_group_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3796 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3798 "display.c"
  }
#line 3800 "display.c"
}

#line 3803 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 3806 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3808 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3810 "display.c"
{
#line 3812 "display.c"
  {
#line 3814 "display.c"
    MR_bool display__succeeded;

#line 3817 "display.c"
    {
#line 3819 "display.c"
      display__succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3822 "display.c"
    return display__succeeded;
#line 3824 "display.c"
  }
#line 3826 "display.c"
}

#line 3829 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 3832 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3834 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3836 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3838 "display.c"
{
#line 3840 "display.c"
  {
#line 3842 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3845 "display.c"
    {
#line 3847 "display.c"
      display____Compare____table_header_group_columns_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3850 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3852 "display.c"
  }
#line 3854 "display.c"
}

#line 3857 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 3860 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3862 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3864 "display.c"
{
#line 3866 "display.c"
  {
#line 3868 "display.c"
    MR_bool display__succeeded;

#line 3871 "display.c"
    {
#line 3873 "display.c"
      display__succeeded = display____Unify____table_row_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3876 "display.c"
    return display__succeeded;
#line 3878 "display.c"
  }
#line 3880 "display.c"
}

#line 3883 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 3886 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3888 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3890 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3892 "display.c"
{
#line 3894 "display.c"
  {
#line 3896 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3899 "display.c"
    {
#line 3901 "display.c"
      display____Compare____table_row_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3904 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3906 "display.c"
  }
#line 3908 "display.c"
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
#line 3941 "display.c"
          *display__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "display.m"
        else
#line 135 "display.m"
#line 135 "display.m"
          switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
#line 135 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
            case (MR_Integer) 0:
#line 135 "display.m"
#line 135 "display.m"
              switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 135 "display.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
                case (MR_Integer) 0:
#line 135 "display.m"
                  *display__HeadVar__1_1 = (MR_Integer) 0;
#line 135 "display.m"
                  break;
#line 135 "display.m"
                case (MR_Integer) 1:
#line 3965 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                  break;
#line 135 "display.m"
                case (MR_Integer) 2:
#line 3971 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                  break;
#line 135 "display.m"
                case (MR_Integer) 3:
#line 3977 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                  break;
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
#line 135 "display.m"
            case (MR_Integer) 1:
#line 135 "display.m"
              {
#line 135 "display.m"
                MR_Word display__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
#line 135 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 135 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
                  case (MR_Integer) 0:
#line 3999 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 1:
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
                    break;
#line 135 "display.m"
                  case (MR_Integer) 2:
#line 4023 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 3:
#line 4029 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                }
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
#line 135 "display.m"
            case (MR_Integer) 2:
#line 135 "display.m"
              {
#line 135 "display.m"
                MR_Word display__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
#line 135 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 135 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
                  case (MR_Integer) 0:
#line 4053 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 1:
#line 4059 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 2:
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
                    break;
#line 135 "display.m"
                  case (MR_Integer) 3:
#line 4083 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                }
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
#line 135 "display.m"
            case (MR_Integer) 3:
#line 135 "display.m"
              {
#line 135 "display.m"
                MR_Word display__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)));

#line 135 "display.m"
#line 135 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 135 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
                  case (MR_Integer) 0:
#line 4107 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 1:
#line 4113 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 2:
#line 4119 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 3:
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
                    break;
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
#line 135 "display.m"
          switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
#line 135 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 135 "display.m"
            case (MR_Integer) 0:
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
              break;
#line 135 "display.m"
            case (MR_Integer) 1:
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
#line 4239 "display.c"
                    display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[8];
#line 4241 "display.c"
                    {
#line 4243 "display.c"
                      return display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_4_4)));
                    }
#line 135 "display.m"
                  }
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
#line 135 "display.m"
            case (MR_Integer) 2:
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
#line 4269 "display.c"
                    {
#line 4271 "display.c"
                      return display__succeeded = display____Unify____table_data_0_0(display__V_7_7, display__V_8_8);
                    }
#line 135 "display.m"
                  }
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
#line 135 "display.m"
            case (MR_Integer) 3:
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
#line 4297 "display.c"
                    /* direct tailcall eliminated */
#line 4299 "display.c"
                    {
#line 4301 "display.c"
                      MR_Word display__HeadVar__1__tmp_copy_1 = display__V_9_9;
#line 4303 "display.c"
                      MR_Word display__HeadVar__2__tmp_copy_2 = display__V_10_10;

#line 4306 "display.c"
                      display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 4308 "display.c"
                      display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 4310 "display.c"
                    }
#line 4312 "display.c"
                    continue;
#line 135 "display.m"
                  }
#line 135 "display.m"
              }
#line 135 "display.m"
              break;
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
#line 4357 "display.c"
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
#line 4386 "display.c"
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
#line 4411 "display.c"
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
#line 4424 "display.c"
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
#line 4500 "display.c"
            display__succeeded = (strcmp(display__V_5_5, display__V_7_7) == 0);
#line 121 "display.m"
            if (display__succeeded)
#line 121 "display.m"
              {
#line 4506 "display.c"
                display__TypeInfo_11_11 = (MR_Word) &display_scalar_common_1[7];
#line 4508 "display.c"
                {
#line 4510 "display.c"
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
#line 4536 "display.c"
            {
#line 4538 "display.c"
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
#line 4576 "display.c"
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
#line 4602 "display.c"
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
#line 4626 "display.c"
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

#line 4702 "display.c"
        {
#line 4704 "display.c"
          display__succeeded = display____Unify____table_header_group_columns_0_0(display__V_3_3, display__V_6_6);
        }
#line 106 "display.m"
        if (display__succeeded)
#line 106 "display.m"
          {
#line 4711 "display.c"
            display__succeeded = (display__V_4_4 == display__V_7_7);
#line 106 "display.m"
            if (display__succeeded)
#line 4715 "display.c"
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
#line 4752 "display.c"
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

#line 4810 "display.c"
        {
#line 4812 "display.c"
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
#line 4848 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "display.m"
    else
#line 185 "display.m"
#line 185 "display.m"
      switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
#line 185 "display.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
        case (MR_Integer) 0:
#line 185 "display.m"
          {
#line 185 "display.m"
            MR_Word display__V_181_181 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 0);

#line 185 "display.m"
#line 185 "display.m"
            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
              case (MR_Integer) 0:
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
                break;
#line 185 "display.m"
              case (MR_Integer) 1:
#line 4889 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 2:
#line 4895 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 4908 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 4914 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 4920 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 4926 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 4932 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
                break;
#line 185 "display.m"
            }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 1:
#line 185 "display.m"
          {
#line 185 "display.m"
            MR_Word display__V_178_178 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

#line 185 "display.m"
#line 185 "display.m"
            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
              case (MR_Integer) 0:
#line 4960 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 1:
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
                break;
#line 185 "display.m"
              case (MR_Integer) 2:
#line 4984 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 4997 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5003 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5009 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 5015 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 5021 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
                break;
#line 185 "display.m"
            }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 2:
#line 185 "display.m"
          {
#line 185 "display.m"
            MR_Float display__V_179_179 = MR_unbox_float((MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 185 "display.m"
#line 185 "display.m"
            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
              case (MR_Integer) 0:
#line 5049 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 1:
#line 5055 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 2:
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
                break;
#line 185 "display.m"
              case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5086 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5092 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5098 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 5104 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 5110 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
                break;
#line 185 "display.m"
            }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) {
#line 185 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
            case (MR_Integer) 0:
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Integer display__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
#line 185 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5145 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5151 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5157 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                      case (MR_Integer) 0:
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
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5188 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5194 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5200 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5206 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                    }
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 1:
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Integer display__V_182_182 = ((MR_Integer) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 185 "display.m"
                MR_Word display__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 185 "display.m"
                MR_Word display__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
#line 185 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5238 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5244 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5250 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                      case (MR_Integer) 0:
#line 5263 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
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
#line 5285 "display.c"
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
#line 5309 "display.c"
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
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5334 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5340 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5346 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                    }
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 2:
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Word display__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
#line 185 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5374 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5380 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5386 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                      case (MR_Integer) 0:
#line 5399 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5405 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
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
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5429 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5435 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                    }
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 3:
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_String display__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
#line 185 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5463 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5469 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5475 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                      case (MR_Integer) 0:
#line 5488 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5494 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5500 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
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
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5524 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                    }
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 4:
#line 185 "display.m"
              {
#line 185 "display.m"
                MR_Word display__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 185 "display.m"
#line 185 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 185 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                  case (MR_Integer) 0:
#line 5552 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5558 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5564 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 185 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
                      case (MR_Integer) 0:
#line 5577 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5583 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5589 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5595 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
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
                        break;
#line 185 "display.m"
                    }
#line 185 "display.m"
                    break;
#line 185 "display.m"
                }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
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
#line 185 "display.m"
      switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
#line 185 "display.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
        case (MR_Integer) 0:
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
#line 5686 "display.c"
                {
#line 5688 "display.c"
                  return display__succeeded = display____Unify____deep_link_0_0(display__V_7_7, display__V_8_8);
                }
#line 185 "display.m"
              }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 1:
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
#line 5714 "display.c"
                {
#line 5716 "display.c"
                  return display__succeeded = display____Unify____attr_string_0_0(display__V_19_19, display__V_20_20);
                }
#line 185 "display.m"
              }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 2:
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
#line 5742 "display.c"
                display__succeeded = (display__V_3_3 == display__V_4_4);
#line 185 "display.m"
              }
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
#line 185 "display.m"
        case (MR_Integer) 3:
#line 185 "display.m"
#line 185 "display.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) {
#line 185 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 185 "display.m"
            case (MR_Integer) 0:
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
#line 5774 "display.c"
                    display__succeeded = (display__V_5_5 == display__V_6_6);
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 1:
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
#line 5811 "display.c"
                    {
#line 5813 "display.c"
                      display__succeeded = measurement_units____Unify____memory_0_0(display__V_9_9, display__V_12_12);
                    }
#line 185 "display.m"
                    if (display__succeeded)
#line 185 "display.m"
                      {
#line 5820 "display.c"
                        display__succeeded = (display__V_10_10 == display__V_13_13);
#line 185 "display.m"
                        if (display__succeeded)
#line 5824 "display.c"
                          display__succeeded = (display__V_11_11 == display__V_14_14);
#line 185 "display.m"
                      }
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 2:
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
#line 5851 "display.c"
                    {
#line 5853 "display.c"
                      return display__succeeded = measurement_units____Unify____percent_0_0(display__V_15_15, display__V_16_16);
                    }
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 3:
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
#line 5879 "display.c"
                    display__succeeded = (strcmp(display__V_17_17, display__V_18_18) == 0);
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
            case (MR_Integer) 4:
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
#line 5904 "display.c"
                    {
#line 5906 "display.c"
                      return display__succeeded = measurement_units____Unify____time_0_0(display__V_21_21, display__V_22_22);
                    }
#line 185 "display.m"
                  }
#line 185 "display.m"
              }
#line 185 "display.m"
              break;
#line 185 "display.m"
          }
#line 185 "display.m"
          break;
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
#line 5969 "display.c"
  {
#line 5971 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5974 "display.c"
    return display__succeeded;
#line 5976 "display.c"
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
#line 6022 "display.c"
  {
#line 6024 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6027 "display.c"
    return display__succeeded;
#line 6029 "display.c"
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
#line 6075 "display.c"
  {
#line 6077 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6080 "display.c"
    return display__succeeded;
#line 6082 "display.c"
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
#line 6111 "display.c"
      *display__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "display.m"
    else
#line 147 "display.m"
#line 147 "display.m"
      switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
#line 147 "display.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "display.m"
        case (MR_Integer) 0:
#line 147 "display.m"
#line 147 "display.m"
          switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 147 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "display.m"
            case (MR_Integer) 0:
#line 147 "display.m"
              *display__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "display.m"
              break;
#line 147 "display.m"
            case (MR_Integer) 1:
#line 6135 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
              break;
#line 147 "display.m"
            case (MR_Integer) 2:
#line 6141 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
              break;
#line 147 "display.m"
          }
#line 147 "display.m"
          break;
#line 147 "display.m"
        case (MR_Integer) 1:
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Word display__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), display__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "display.m"
#line 147 "display.m"
            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 147 "display.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "display.m"
              case (MR_Integer) 0:
#line 6163 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
                break;
#line 147 "display.m"
              case (MR_Integer) 1:
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
                break;
#line 147 "display.m"
              case (MR_Integer) 2:
#line 6187 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
                break;
#line 147 "display.m"
            }
#line 147 "display.m"
          }
#line 147 "display.m"
          break;
#line 147 "display.m"
        case (MR_Integer) 2:
#line 147 "display.m"
          {
#line 147 "display.m"
            MR_Integer display__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "display.m"
            MR_Word display__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "display.m"
#line 147 "display.m"
            switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 147 "display.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "display.m"
              case (MR_Integer) 0:
#line 6213 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
                break;
#line 147 "display.m"
              case (MR_Integer) 1:
#line 6219 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
                break;
#line 147 "display.m"
              case (MR_Integer) 2:
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
#line 6239 "display.c"
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
                break;
#line 147 "display.m"
            }
#line 147 "display.m"
          }
#line 147 "display.m"
          break;
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
#line 147 "display.m"
      switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
#line 147 "display.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "display.m"
        case (MR_Integer) 0:
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
          break;
#line 147 "display.m"
        case (MR_Integer) 1:
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
#line 6336 "display.c"
                {
#line 6338 "display.c"
                  return display__succeeded = display____Unify____table_data_0_0(display__V_3_3, display__V_4_4);
                }
#line 147 "display.m"
              }
#line 147 "display.m"
          }
#line 147 "display.m"
          break;
#line 147 "display.m"
        case (MR_Integer) 2:
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
#line 6370 "display.c"
                {
#line 6372 "display.c"
                  display__succeeded = display____Unify____table_data_0_0(display__V_5_5, display__V_7_7);
                }
#line 147 "display.m"
                if (display__succeeded)
#line 6377 "display.c"
                  display__succeeded = (display__V_6_6 == display__V_8_8);
#line 147 "display.m"
              }
#line 147 "display.m"
          }
#line 147 "display.m"
          break;
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
#line 6418 "display.c"
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
#line 6452 "display.c"
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
#line 6472 "display.c"
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
#line 6492 "display.c"
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

#line 6573 "display.c"
        display__succeeded = (display__V_3_3 == display__V_7_7);
#line 82 "display.m"
        if (display__succeeded)
#line 82 "display.m"
          {
#line 6579 "display.c"
            display__succeeded = (display__V_4_4 == display__V_8_8);
#line 82 "display.m"
            if (display__succeeded)
#line 82 "display.m"
              {
#line 6585 "display.c"
                display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[4];
#line 6587 "display.c"
                {
#line 6589 "display.c"
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_9_9)));
                }
#line 82 "display.m"
                if (display__succeeded)
#line 82 "display.m"
                  {
#line 6596 "display.c"
                    display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[5];
#line 6598 "display.c"
                    {
#line 6600 "display.c"
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
#line 6659 "display.c"
  {
#line 6661 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6664 "display.c"
    return display__succeeded;
#line 6666 "display.c"
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
#line 6695 "display.c"
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
#line 6717 "display.c"
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

#line 6787 "display.c"
        display__succeeded = (strcmp(display__V_3_3, display__V_5_5) == 0);
#line 246 "display.m"
        if (display__succeeded)
#line 6791 "display.c"
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
#line 6843 "display.c"
  {
#line 6845 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6848 "display.c"
    return display__succeeded;
#line 6850 "display.c"
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
#line 6896 "display.c"
  {
#line 6898 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6901 "display.c"
    return display__succeeded;
#line 6903 "display.c"
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
#line 6938 "display.c"
          *display__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "display.m"
        else
#line 34 "display.m"
#line 34 "display.m"
          switch (MR_tag((MR_Word) display__HeadVar__2_2)) {
#line 34 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
            case (MR_Integer) 0:
#line 34 "display.m"
#line 34 "display.m"
              switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                case (MR_Integer) 0:
#line 34 "display.m"
                  *display__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 1:
#line 6962 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 2:
#line 6968 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                    case (MR_Integer) 0:
#line 6981 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 1:
#line 6987 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 2:
#line 6993 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 3:
#line 6999 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 4:
#line 7005 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 5:
#line 7011 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
#line 34 "display.m"
            case (MR_Integer) 1:
#line 34 "display.m"
              {
#line 34 "display.m"
                MR_Word display__V_200_200 = (MR_Word) MR_body(((MR_Word) display__HeadVar__2_2), (MR_Integer) 1);

#line 34 "display.m"
#line 34 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                  case (MR_Integer) 0:
#line 7037 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    break;
#line 34 "display.m"
                  case (MR_Integer) 1:
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
                    break;
#line 34 "display.m"
                  case (MR_Integer) 2:
#line 7061 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                    break;
#line 34 "display.m"
                  case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7074 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7080 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7086 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 7092 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 4:
#line 7098 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 5:
#line 7104 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                    break;
#line 34 "display.m"
                }
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
#line 34 "display.m"
            case (MR_Integer) 2:
#line 34 "display.m"
              {
#line 34 "display.m"
                MR_Word display__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), display__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "display.m"
#line 34 "display.m"
                switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                  case (MR_Integer) 0:
#line 7132 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    break;
#line 34 "display.m"
                  case (MR_Integer) 1:
#line 7138 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    break;
#line 34 "display.m"
                  case (MR_Integer) 2:
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
                    break;
#line 34 "display.m"
                  case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7169 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7175 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7181 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 7187 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 4:
#line 7193 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 5:
#line 7199 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                    break;
#line 34 "display.m"
                }
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
#line 34 "display.m"
            case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 0)))) {
#line 34 "display.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                case (MR_Integer) 0:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_Word display__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7234 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7240 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7246 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
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
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7277 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7283 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7289 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7295 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7301 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 1:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_String display__V_199_199 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7329 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7335 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7341 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
#line 7354 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
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
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7378 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7384 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7390 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7396 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 2:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_String display__V_206_206 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7424 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7430 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7436 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
#line 7449 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7455 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
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
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7479 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7485 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7491 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 3:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_Word display__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 3)));
#line 34 "display.m"
                    MR_Word display__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 2)));
#line 34 "display.m"
                    MR_Word display__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7523 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7529 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7535 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
#line 7548 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7554 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7560 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
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
#line 7586 "display.c"
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
#line 7606 "display.c"
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
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7635 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7641 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 4:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_String display__V_207_207 = ((MR_String) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7669 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7675 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7681 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
#line 7694 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7700 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7706 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7712 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
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
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7736 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 5:
#line 34 "display.m"
                  {
#line 34 "display.m"
                    MR_Word display__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__2_2, (MR_Integer) 1)));

#line 34 "display.m"
#line 34 "display.m"
                    switch (MR_tag((MR_Word) display__HeadVar__3_3)) {
#line 34 "display.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                      case (MR_Integer) 0:
#line 7764 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7770 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7776 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__3_3, (MR_Integer) 0)))) {
#line 34 "display.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                          case (MR_Integer) 0:
#line 7789 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7795 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7801 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7807 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7813 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
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
                            break;
#line 34 "display.m"
                        }
#line 34 "display.m"
                        break;
#line 34 "display.m"
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
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
#line 34 "display.m"
          switch (MR_tag((MR_Word) display__HeadVar__1_1)) {
#line 34 "display.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
            case (MR_Integer) 0:
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
              break;
#line 34 "display.m"
            case (MR_Integer) 1:
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
#line 7939 "display.c"
                    {
#line 7941 "display.c"
                      return display__succeeded = display____Unify____deep_link_0_0(display__V_9_9, display__V_10_10);
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
#line 34 "display.m"
            case (MR_Integer) 2:
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
#line 7967 "display.c"
                    {
#line 7969 "display.c"
                      return display__succeeded = display____Unify____pseudo_link_0_0(display__V_11_11, display__V_12_12);
                    }
#line 34 "display.m"
                  }
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
#line 34 "display.m"
            case (MR_Integer) 3:
#line 34 "display.m"
#line 34 "display.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), display__HeadVar__1_1, (MR_Integer) 0)))) {
#line 34 "display.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 34 "display.m"
                case (MR_Integer) 0:
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
#line 8002 "display.c"
                        {
#line 8004 "display.c"
                          return display__succeeded = display____Unify____table_0_0(display__V_19_19, display__V_20_20);
                        }
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 1:
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
#line 8030 "display.c"
                        display__succeeded = (strcmp(display__V_3_3, display__V_4_4) == 0);
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 2:
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
#line 8055 "display.c"
                        display__succeeded = (strcmp(display__V_5_5, display__V_6_6) == 0);
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 3:
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
#line 8096 "display.c"
                        display__succeeded = (display__V_13_13 == display__V_16_16);
#line 34 "display.m"
                        if (display__succeeded)
#line 34 "display.m"
                          {
#line 8102 "display.c"
                            display__TypeInfo_27_27 = (MR_Word) &display_scalar_common_1[2];
#line 8104 "display.c"
                            {
#line 8106 "display.c"
                              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_27_27, ((MR_Box) (display__V_14_14)), ((MR_Box) (display__V_17_17)));
                            }
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 8113 "display.c"
                                display__TypeInfo_28_28 = (MR_Word) &display_scalar_common_1[3];
#line 8115 "display.c"
                                {
#line 8117 "display.c"
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
                  break;
#line 34 "display.m"
                case (MR_Integer) 4:
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
#line 8147 "display.c"
                        display__succeeded = (strcmp(display__V_21_21, display__V_22_22) == 0);
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 5:
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
#line 8172 "display.c"
                        /* direct tailcall eliminated */
#line 8174 "display.c"
                        {
#line 8176 "display.c"
                          MR_Word display__HeadVar__1__tmp_copy_1 = display__V_23_23;
#line 8178 "display.c"
                          MR_Word display__HeadVar__2__tmp_copy_2 = display__V_24_24;

#line 8181 "display.c"
                          display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 8183 "display.c"
                          display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 8185 "display.c"
                        }
#line 8187 "display.c"
                        continue;
#line 34 "display.m"
                      }
#line 34 "display.m"
                  }
#line 34 "display.m"
                  break;
#line 34 "display.m"
              }
#line 34 "display.m"
              break;
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
#line 8236 "display.c"
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
#line 8258 "display.c"
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

#line 8325 "display.c"
        {
#line 8327 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[2], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 28 "display.m"
        if (display__succeeded)
#line 28 "display.m"
          {
#line 8334 "display.c"
            display__TypeInfo_10_10 = (MR_Word) &display_scalar_common_1[3];
#line 8336 "display.c"
            {
#line 8338 "display.c"
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
#line 8376 "display.c"
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
#line 8406 "display.c"
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
#line 8426 "display.c"
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
#line 8446 "display.c"
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

#line 8530 "display.c"
        {
#line 8532 "display.c"
          display__succeeded = query____Unify____cmd_0_0(display__V_3_3, display__V_7_7);
        }
#line 231 "display.m"
        if (display__succeeded)
#line 231 "display.m"
          {
#line 8539 "display.c"
            display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[1];
#line 8541 "display.c"
            {
#line 8543 "display.c"
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_8_8)));
            }
#line 231 "display.m"
            if (display__succeeded)
#line 231 "display.m"
              {
#line 8550 "display.c"
                {
#line 8552 "display.c"
                  display__succeeded = display____Unify____attr_string_0_0(display__V_5_5, display__V_9_9);
                }
#line 231 "display.m"
                if (display__succeeded)
#line 8557 "display.c"
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
#line 8596 "display.c"
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
#line 8618 "display.c"
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

#line 8679 "display.c"
        {
#line 8681 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[0], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 204 "display.m"
        if (display__succeeded)
#line 8686 "display.c"
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
