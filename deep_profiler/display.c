/*
** Automatically generated from `display.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "integer.mih"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1073 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_str_attr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_str_attr_0
  }
};

#line 1081 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_attr_string_0_0[2] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_str_attr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1087 "display.c"
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

#line 1102 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_attr_string_0_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1107 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_attr_string_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_attr_string_0_0
  }
};

#line 1116 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_attr_string_0[1] = {
  &display__display__du_functor_desc_attr_string_0_0
};

#line 1121 "display.c"
static const MR_Integer display__display__functor_number_map_attr_string_0[1] = {
  (MR_Integer) 0
};

#line 1126 "display.c"
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

#line 1143 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 1151 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_deep_link_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1query__type_ctor_info_preferences_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1159 "display.c"
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

#line 1174 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_deep_link_0_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1179 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_deep_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_deep_link_0_0
  }
};

#line 1188 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_deep_link_0[1] = {
  &display__display__du_functor_desc_deep_link_0_0
};

#line 1193 "display.c"
static const MR_Integer display__display__functor_number_map_deep_link_0[1] = {
  (MR_Integer) 0
};

#line 1198 "display.c"
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

#line 1215 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1223 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_display_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_display_item_0
  }
};

#line 1231 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_0_0[2] = {
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1237 "display.c"
static const MR_ConstString display__display__field_names_display_0_0[2] = {
  (MR_String) "display_title",
  (MR_String) "display_content"
};

#line 1243 "display.c"
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

#line 1258 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_0_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1263 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_display_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_display_0_0
  }
};

#line 1272 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_display_0[1] = {
  &display__display__du_functor_desc_display_0_0
};

#line 1277 "display.c"
static const MR_Integer display__display__functor_number_map_display_0[1] = {
  (MR_Integer) 0
};

#line 1282 "display.c"
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

#line 1299 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1304 "display.c"
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

#line 1319 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1324 "display.c"
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

#line 1339 "display.c"
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

#line 1354 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 1359 "display.c"
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

#line 1374 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_4[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_pseudo_link_0
};

#line 1379 "display.c"
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

#line 1394 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_5[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_list_class_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_display_item_0
};

#line 1401 "display.c"
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

#line 1416 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_0
};

#line 1421 "display.c"
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

#line 1436 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1441 "display.c"
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

#line 1456 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_display_item_0_8[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_display_item_0
};

#line 1461 "display.c"
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

#line 1476 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_0[1] = {
  &display__display__du_functor_desc_display_item_0_2
};

#line 1481 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_1[1] = {
  &display__display__du_functor_desc_display_item_0_3
};

#line 1486 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_2[1] = {
  &display__display__du_functor_desc_display_item_0_4
};

#line 1491 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_display_item_0_3[6] = {
  &display__display__du_functor_desc_display_item_0_6,
  &display__display__du_functor_desc_display_item_0_0,
  &display__display__du_functor_desc_display_item_0_1,
  &display__display__du_functor_desc_display_item_0_5,
  &display__display__du_functor_desc_display_item_0_7,
  &display__display__du_functor_desc_display_item_0_8
};

#line 1501 "display.c"
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

#line 1525 "display.c"
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

#line 1538 "display.c"
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

#line 1551 "display.c"
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

#line 1568 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_0 = {
  (MR_String) "link_class_link",
  (MR_Integer) 0
};

#line 1574 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_link_class_0_1 = {
  (MR_String) "link_class_control",
  (MR_Integer) 1
};

#line 1580 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_0,
  &display__display__enum_functor_desc_link_class_0_1
};

#line 1586 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_link_class_0[2] = {
  &display__display__enum_functor_desc_link_class_0_1,
  &display__display__enum_functor_desc_link_class_0_0
};

#line 1592 "display.c"
static const MR_Integer display__display__functor_number_map_link_class_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1598 "display.c"
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

#line 1615 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_0 = {
  (MR_String) "list_class_vertical_no_bullets",
  (MR_Integer) 0
};

#line 1621 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_1 = {
  (MR_String) "list_class_vertical_bullets",
  (MR_Integer) 1
};

#line 1627 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_2 = {
  (MR_String) "list_class_horizontal",
  (MR_Integer) 2
};

#line 1633 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_list_class_0_3 = {
  (MR_String) "list_class_horizontal_except_title",
  (MR_Integer) 3
};

#line 1639 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_0,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3
};

#line 1647 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_list_class_0[4] = {
  &display__display__enum_functor_desc_list_class_0_2,
  &display__display__enum_functor_desc_list_class_0_3,
  &display__display__enum_functor_desc_list_class_0_1,
  &display__display__enum_functor_desc_list_class_0_0
};

#line 1655 "display.c"
static const MR_Integer display__display__functor_number_map_list_class_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1663 "display.c"
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

#line 1680 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_pseudo_link_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_link_class_0
};

#line 1686 "display.c"
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

#line 1701 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_pseudo_link_0_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1706 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_pseudo_link_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_pseudo_link_0_0
  }
};

#line 1715 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_pseudo_link_0[1] = {
  &display__display__du_functor_desc_pseudo_link_0_0
};

#line 1720 "display.c"
static const MR_Integer display__display__functor_number_map_pseudo_link_0[1] = {
  (MR_Integer) 0
};

#line 1725 "display.c"
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

#line 1742 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_0 = {
  (MR_String) "attr_bold",
  (MR_Integer) 0
};

#line 1748 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_1 = {
  (MR_String) "attr_italic",
  (MR_Integer) 1
};

#line 1754 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_str_attr_0_2 = {
  (MR_String) "attr_underline",
  (MR_Integer) 2
};

#line 1760 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1767 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_str_attr_0[3] = {
  &display__display__enum_functor_desc_str_attr_0_0,
  &display__display__enum_functor_desc_str_attr_0_1,
  &display__display__enum_functor_desc_str_attr_0_2
};

#line 1774 "display.c"
static const MR_Integer display__display__functor_number_map_str_attr_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1781 "display.c"
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

#line 1798 "display.c"
static const MR_FA_TypeInfo_Struct1 display__maybe__ti_maybe_1display__type_ctor_info_table_header_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_0
  }
};

#line 1806 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_row_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_row_0
  }
};

#line 1814 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_0_0[4] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &display__maybe__ti_maybe_1display__type_ctor_info_table_header_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_row_0
};

#line 1822 "display.c"
static const MR_ConstString display__display__field_names_table_0_0[4] = {
  (MR_String) "table_class",
  (MR_String) "table_num_cols",
  (MR_String) "table_header",
  (MR_String) "table_rows"
};

#line 1830 "display.c"
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

#line 1845 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_0_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1850 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_0_0
  }
};

#line 1859 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_0[1] = {
  &display__display__du_functor_desc_table_0_0
};

#line 1864 "display.c"
static const MR_Integer display__display__functor_number_map_table_0[1] = {
  (MR_Integer) 0
};

#line 1869 "display.c"
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

#line 1886 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 1891 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_0[1] = {
  (MR_String) "tc_text"
};

#line 1896 "display.c"
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

#line 1911 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_cell_0_1[2] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1917 "display.c"
static const MR_ConstString display__display__field_names_table_cell_0_1[2] = {
  (MR_String) "tcs_text",
  (MR_String) "tcs_span"
};

#line 1923 "display.c"
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

#line 1938 "display.c"
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

#line 1953 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_0[1] = {
  &display__display__du_functor_desc_table_cell_0_2
};

#line 1958 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_1[1] = {
  &display__display__du_functor_desc_table_cell_0_0
};

#line 1963 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_cell_0_2[1] = {
  &display__display__du_functor_desc_table_cell_0_1
};

#line 1968 "display.c"
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

#line 1987 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_cell_0[3] = {
  &display__display__du_functor_desc_table_cell_0_0,
  &display__display__du_functor_desc_table_cell_0_2,
  &display__display__du_functor_desc_table_cell_0_1
};

#line 1994 "display.c"
static const MR_Integer display__display__functor_number_map_table_cell_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2001 "display.c"
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

#line 2018 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_0 = {
  (MR_String) "table_class_do_not_box",
  (MR_Integer) 0
};

#line 2024 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_1 = {
  (MR_String) "table_class_box",
  (MR_Integer) 1
};

#line 2030 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_class_0_2 = {
  (MR_String) "table_class_box_if_pref",
  (MR_Integer) 2
};

#line 2036 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_0,
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2
};

#line 2043 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_class_0[3] = {
  &display__display__enum_functor_desc_table_class_0_1,
  &display__display__enum_functor_desc_table_class_0_2,
  &display__display__enum_functor_desc_table_class_0_0
};

#line 2050 "display.c"
static const MR_Integer display__display__functor_number_map_table_class_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2057 "display.c"
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

#line 2074 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_0 = {
  (MR_String) "table_column_class_allocations",
  (MR_Integer) 0
};

#line 2080 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_1 = {
  (MR_String) "table_column_class_callseqs",
  (MR_Integer) 1
};

#line 2086 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_2 = {
  (MR_String) "table_column_class_clique",
  (MR_Integer) 2
};

#line 2092 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_3 = {
  (MR_String) "table_column_class_field_name",
  (MR_Integer) 3
};

#line 2098 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_4 = {
  (MR_String) "table_column_class_memory",
  (MR_Integer) 4
};

#line 2104 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_5 = {
  (MR_String) "table_column_class_module_name",
  (MR_Integer) 5
};

#line 2110 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_6 = {
  (MR_String) "table_column_class_no_class",
  (MR_Integer) 6
};

#line 2116 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_7 = {
  (MR_String) "table_column_class_number",
  (MR_Integer) 7
};

#line 2122 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_8 = {
  (MR_String) "table_column_class_ordinal_rank",
  (MR_Integer) 8
};

#line 2128 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_9 = {
  (MR_String) "table_column_class_port_counts",
  (MR_Integer) 9
};

#line 2134 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_10 = {
  (MR_String) "table_column_class_proc",
  (MR_Integer) 10
};

#line 2140 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_11 = {
  (MR_String) "table_column_class_source_context",
  (MR_Integer) 11
};

#line 2146 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_class_0_12 = {
  (MR_String) "table_column_class_ticks_and_times",
  (MR_Integer) 12
};

#line 2152 "display.c"
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

#line 2169 "display.c"
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

#line 2186 "display.c"
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

#line 2203 "display.c"
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

#line 2220 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_0 = {
  (MR_String) "column_do_not_colour",
  (MR_Integer) 0
};

#line 2226 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_1 = {
  (MR_String) "column_colour",
  (MR_Integer) 1
};

#line 2232 "display.c"
static const MR_EnumFunctorDesc display__display__enum_functor_desc_table_column_colour_0_2 = {
  (MR_String) "column_colour_if_pref",
  (MR_Integer) 2
};

#line 2238 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_value_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_0,
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2
};

#line 2245 "display.c"
static const MR_EnumFunctorDescPtr display__display__enum_name_ordered_table_column_colour_0[3] = {
  &display__display__enum_functor_desc_table_column_colour_0_1,
  &display__display__enum_functor_desc_table_column_colour_0_2,
  &display__display__enum_functor_desc_table_column_colour_0_0
};

#line 2252 "display.c"
static const MR_Integer display__display__functor_number_map_table_column_colour_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2259 "display.c"
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

#line 2276 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2281 "display.c"
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

#line 2296 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2301 "display.c"
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

#line 2316 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_deep_link_0
};

#line 2321 "display.c"
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

#line 2336 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_3[3] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2343 "display.c"
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

#line 2358 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_4[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0
};

#line 2363 "display.c"
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

#line 2378 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2383 "display.c"
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

#line 2398 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_6[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_attr_string_0
};

#line 2403 "display.c"
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

#line 2418 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_data_0_7[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0
};

#line 2423 "display.c"
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

#line 2438 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_0[1] = {
  &display__display__du_functor_desc_table_data_0_2
};

#line 2443 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_1[1] = {
  &display__display__du_functor_desc_table_data_0_6
};

#line 2448 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_2[1] = {
  &display__display__du_functor_desc_table_data_0_0
};

#line 2453 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_data_0_3[5] = {
  &display__display__du_functor_desc_table_data_0_1,
  &display__display__du_functor_desc_table_data_0_3,
  &display__display__du_functor_desc_table_data_0_4,
  &display__display__du_functor_desc_table_data_0_5,
  &display__display__du_functor_desc_table_data_0_7
};

#line 2462 "display.c"
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

#line 2486 "display.c"
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

#line 2498 "display.c"
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

#line 2510 "display.c"
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

#line 2527 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_0[1] = {
  (MR_Integer) 0
};

#line 2532 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_header_group_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_header_group_0
  }
};

#line 2540 "display.c"
static const MR_NotagFunctorDesc display__display__notag_functor_desc_table_header_0 = {
  (MR_String) "table_header",
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_header_group_0,
  (MR_String) "th_groups"
};

#line 2547 "display.c"
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

#line 2564 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_0_0[3] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_header_group_columns_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_class_0,
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_column_colour_0
};

#line 2571 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_0_0[3] = {
  (MR_String) "thg_titles",
  (MR_String) "thg_class",
  (MR_String) "thg_colour"
};

#line 2578 "display.c"
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

#line 2597 "display.c"
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

#line 2612 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2617 "display.c"
static const MR_DuPtagLayout display__display__du_ptag_ordered_table_header_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    display__display__du_stag_ordered_table_header_group_0_0
  }
};

#line 2626 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_0[1] = {
  &display__display__du_functor_desc_table_header_group_0_0
};

#line 2631 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_0[1] = {
  (MR_Integer) 0
};

#line 2636 "display.c"
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

#line 2653 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_0[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2658 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_0[1] = {
  (MR_String) "thsc_title"
};

#line 2663 "display.c"
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

#line 2678 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_data_0
  }
};

#line 2686 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_header_group_columns_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_data_0
};

#line 2692 "display.c"
static const MR_ConstString display__display__field_names_table_header_group_columns_0_1[2] = {
  (MR_String) "thmc_title",
  (MR_String) "thmc_subtitles"
};

#line 2698 "display.c"
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

#line 2713 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_0[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2718 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_header_group_columns_0_1[1] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1
};

#line 2723 "display.c"
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

#line 2737 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_header_group_columns_0[2] = {
  &display__display__du_functor_desc_table_header_group_columns_0_1,
  &display__display__du_functor_desc_table_header_group_columns_0_0
};

#line 2743 "display.c"
static const MR_Integer display__display__functor_number_map_table_header_group_columns_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2749 "display.c"
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

#line 2766 "display.c"
static const MR_FA_TypeInfo_Struct1 display__list__ti_list_1display__type_ctor_info_table_cell_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &display__display__type_ctor_info_table_cell_0
  }
};

#line 2774 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_0[1] = {
  (MR_PseudoTypeInfo) &display__list__ti_list_1display__type_ctor_info_table_cell_0
};

#line 2779 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_0[1] = {
  (MR_String) "tr_cells"
};

#line 2784 "display.c"
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

#line 2799 "display.c"
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

#line 2814 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_2[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_data_0
};

#line 2819 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_2[1] = {
  (MR_String) "tsh_text"
};

#line 2824 "display.c"
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

#line 2839 "display.c"
static const MR_PseudoTypeInfo display__display__field_types_table_row_0_3[1] = {
  (MR_PseudoTypeInfo) &display__display__type_ctor_info_table_row_0
};

#line 2844 "display.c"
static const MR_ConstString display__display__field_names_table_row_0_3[1] = {
  (MR_String) "tdr_row"
};

#line 2849 "display.c"
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

#line 2864 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_0[1] = {
  &display__display__du_functor_desc_table_row_0_1
};

#line 2869 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_1[1] = {
  &display__display__du_functor_desc_table_row_0_0
};

#line 2874 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_2[1] = {
  &display__display__du_functor_desc_table_row_0_2
};

#line 2879 "display.c"
static const MR_DuFunctorDescPtr display__display__du_stag_ordered_table_row_0_3[1] = {
  &display__display__du_functor_desc_table_row_0_3
};

#line 2884 "display.c"
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

#line 2908 "display.c"
static const MR_DuFunctorDescPtr display__display__du_name_ordered_table_row_0[4] = {
  &display__display__du_functor_desc_table_row_0_3,
  &display__display__du_functor_desc_table_row_0_0,
  &display__display__du_functor_desc_table_row_0_2,
  &display__display__du_functor_desc_table_row_0_1
};

#line 2916 "display.c"
static const MR_Integer display__display__functor_number_map_table_row_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2924 "display.c"
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

#line 2941 "display.c"
static MR_bool MR_CALL 
display____Unify____attr_string_0_0_10001(
#line 2944 "display.c"
  MR_Box display__wrapper_arg_1,
#line 2946 "display.c"
  MR_Box display__wrapper_arg_2)
#line 2948 "display.c"
{
#line 2950 "display.c"
  {
#line 2952 "display.c"
    MR_bool display__succeeded;

#line 2955 "display.c"
    {
#line 2957 "display.c"
      display__succeeded = display____Unify____attr_string_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 2960 "display.c"
    return display__succeeded;
#line 2962 "display.c"
  }
#line 2964 "display.c"
}

#line 2967 "display.c"
static void MR_CALL 
display____Compare____attr_string_0_0_10001(
#line 2970 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 2972 "display.c"
  MR_Box display__wrapper_arg_2,
#line 2974 "display.c"
  MR_Box display__wrapper_arg_3)
#line 2976 "display.c"
{
#line 2978 "display.c"
  {
#line 2980 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 2983 "display.c"
    {
#line 2985 "display.c"
      display____Compare____attr_string_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 2988 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 2990 "display.c"
  }
#line 2992 "display.c"
}

#line 2995 "display.c"
static MR_bool MR_CALL 
display____Unify____deep_link_0_0_10001(
#line 2998 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3000 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3002 "display.c"
{
#line 3004 "display.c"
  {
#line 3006 "display.c"
    MR_bool display__succeeded;

#line 3009 "display.c"
    {
#line 3011 "display.c"
      display__succeeded = display____Unify____deep_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3014 "display.c"
    return display__succeeded;
#line 3016 "display.c"
  }
#line 3018 "display.c"
}

#line 3021 "display.c"
static void MR_CALL 
display____Compare____deep_link_0_0_10001(
#line 3024 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3026 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3028 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3030 "display.c"
{
#line 3032 "display.c"
  {
#line 3034 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3037 "display.c"
    {
#line 3039 "display.c"
      display____Compare____deep_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3042 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3044 "display.c"
  }
#line 3046 "display.c"
}

#line 3049 "display.c"
static MR_bool MR_CALL 
display____Unify____display_0_0_10001(
#line 3052 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3054 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3056 "display.c"
{
#line 3058 "display.c"
  {
#line 3060 "display.c"
    MR_bool display__succeeded;

#line 3063 "display.c"
    {
#line 3065 "display.c"
      display__succeeded = display____Unify____display_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3068 "display.c"
    return display__succeeded;
#line 3070 "display.c"
  }
#line 3072 "display.c"
}

#line 3075 "display.c"
static void MR_CALL 
display____Compare____display_0_0_10001(
#line 3078 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3080 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3082 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3084 "display.c"
{
#line 3086 "display.c"
  {
#line 3088 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3091 "display.c"
    {
#line 3093 "display.c"
      display____Compare____display_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3096 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3098 "display.c"
  }
#line 3100 "display.c"
}

#line 3103 "display.c"
static MR_bool MR_CALL 
display____Unify____display_item_0_0_10001(
#line 3106 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3108 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3110 "display.c"
{
#line 3112 "display.c"
  {
#line 3114 "display.c"
    MR_bool display__succeeded;

#line 3117 "display.c"
    {
#line 3119 "display.c"
      display__succeeded = display____Unify____display_item_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3122 "display.c"
    return display__succeeded;
#line 3124 "display.c"
  }
#line 3126 "display.c"
}

#line 3129 "display.c"
static void MR_CALL 
display____Compare____display_item_0_0_10001(
#line 3132 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3134 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3136 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3138 "display.c"
{
#line 3140 "display.c"
  {
#line 3142 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3145 "display.c"
    {
#line 3147 "display.c"
      display____Compare____display_item_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3150 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3152 "display.c"
  }
#line 3154 "display.c"
}

#line 3157 "display.c"
static MR_bool MR_CALL 
display____Unify____link_class_0_0_10001(
#line 3160 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3162 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3164 "display.c"
{
#line 3166 "display.c"
  {
#line 3168 "display.c"
    MR_bool display__succeeded;

#line 3171 "display.c"
    {
#line 3173 "display.c"
      display__succeeded = display____Unify____link_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3176 "display.c"
    return display__succeeded;
#line 3178 "display.c"
  }
#line 3180 "display.c"
}

#line 3183 "display.c"
static void MR_CALL 
display____Compare____link_class_0_0_10001(
#line 3186 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3188 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3190 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3192 "display.c"
{
#line 3194 "display.c"
  {
#line 3196 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3199 "display.c"
    {
#line 3201 "display.c"
      display____Compare____link_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3204 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3206 "display.c"
  }
#line 3208 "display.c"
}

#line 3211 "display.c"
static MR_bool MR_CALL 
display____Unify____list_class_0_0_10001(
#line 3214 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3216 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3218 "display.c"
{
#line 3220 "display.c"
  {
#line 3222 "display.c"
    MR_bool display__succeeded;

#line 3225 "display.c"
    {
#line 3227 "display.c"
      display__succeeded = display____Unify____list_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3230 "display.c"
    return display__succeeded;
#line 3232 "display.c"
  }
#line 3234 "display.c"
}

#line 3237 "display.c"
static void MR_CALL 
display____Compare____list_class_0_0_10001(
#line 3240 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3242 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3244 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3246 "display.c"
{
#line 3248 "display.c"
  {
#line 3250 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3253 "display.c"
    {
#line 3255 "display.c"
      display____Compare____list_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3258 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3260 "display.c"
  }
#line 3262 "display.c"
}

#line 3265 "display.c"
static MR_bool MR_CALL 
display____Unify____pseudo_link_0_0_10001(
#line 3268 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3270 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3272 "display.c"
{
#line 3274 "display.c"
  {
#line 3276 "display.c"
    MR_bool display__succeeded;

#line 3279 "display.c"
    {
#line 3281 "display.c"
      display__succeeded = display____Unify____pseudo_link_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3284 "display.c"
    return display__succeeded;
#line 3286 "display.c"
  }
#line 3288 "display.c"
}

#line 3291 "display.c"
static void MR_CALL 
display____Compare____pseudo_link_0_0_10001(
#line 3294 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3296 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3298 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3300 "display.c"
{
#line 3302 "display.c"
  {
#line 3304 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3307 "display.c"
    {
#line 3309 "display.c"
      display____Compare____pseudo_link_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3312 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3314 "display.c"
  }
#line 3316 "display.c"
}

#line 3319 "display.c"
static MR_bool MR_CALL 
display____Unify____str_attr_0_0_10001(
#line 3322 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3324 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3326 "display.c"
{
#line 3328 "display.c"
  {
#line 3330 "display.c"
    MR_bool display__succeeded;

#line 3333 "display.c"
    {
#line 3335 "display.c"
      display__succeeded = display____Unify____str_attr_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3338 "display.c"
    return display__succeeded;
#line 3340 "display.c"
  }
#line 3342 "display.c"
}

#line 3345 "display.c"
static void MR_CALL 
display____Compare____str_attr_0_0_10001(
#line 3348 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3350 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3352 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3354 "display.c"
{
#line 3356 "display.c"
  {
#line 3358 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3361 "display.c"
    {
#line 3363 "display.c"
      display____Compare____str_attr_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3366 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3368 "display.c"
  }
#line 3370 "display.c"
}

#line 3373 "display.c"
static MR_bool MR_CALL 
display____Unify____table_0_0_10001(
#line 3376 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3378 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3380 "display.c"
{
#line 3382 "display.c"
  {
#line 3384 "display.c"
    MR_bool display__succeeded;

#line 3387 "display.c"
    {
#line 3389 "display.c"
      display__succeeded = display____Unify____table_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3392 "display.c"
    return display__succeeded;
#line 3394 "display.c"
  }
#line 3396 "display.c"
}

#line 3399 "display.c"
static void MR_CALL 
display____Compare____table_0_0_10001(
#line 3402 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3404 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3406 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3408 "display.c"
{
#line 3410 "display.c"
  {
#line 3412 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3415 "display.c"
    {
#line 3417 "display.c"
      display____Compare____table_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3420 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3422 "display.c"
  }
#line 3424 "display.c"
}

#line 3427 "display.c"
static MR_bool MR_CALL 
display____Unify____table_cell_0_0_10001(
#line 3430 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3432 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3434 "display.c"
{
#line 3436 "display.c"
  {
#line 3438 "display.c"
    MR_bool display__succeeded;

#line 3441 "display.c"
    {
#line 3443 "display.c"
      display__succeeded = display____Unify____table_cell_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3446 "display.c"
    return display__succeeded;
#line 3448 "display.c"
  }
#line 3450 "display.c"
}

#line 3453 "display.c"
static void MR_CALL 
display____Compare____table_cell_0_0_10001(
#line 3456 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3458 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3460 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3462 "display.c"
{
#line 3464 "display.c"
  {
#line 3466 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3469 "display.c"
    {
#line 3471 "display.c"
      display____Compare____table_cell_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3474 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3476 "display.c"
  }
#line 3478 "display.c"
}

#line 3481 "display.c"
static MR_bool MR_CALL 
display____Unify____table_class_0_0_10001(
#line 3484 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3486 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3488 "display.c"
{
#line 3490 "display.c"
  {
#line 3492 "display.c"
    MR_bool display__succeeded;

#line 3495 "display.c"
    {
#line 3497 "display.c"
      display__succeeded = display____Unify____table_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3500 "display.c"
    return display__succeeded;
#line 3502 "display.c"
  }
#line 3504 "display.c"
}

#line 3507 "display.c"
static void MR_CALL 
display____Compare____table_class_0_0_10001(
#line 3510 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3512 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3514 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3516 "display.c"
{
#line 3518 "display.c"
  {
#line 3520 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3523 "display.c"
    {
#line 3525 "display.c"
      display____Compare____table_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3528 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3530 "display.c"
  }
#line 3532 "display.c"
}

#line 3535 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_class_0_0_10001(
#line 3538 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3540 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3542 "display.c"
{
#line 3544 "display.c"
  {
#line 3546 "display.c"
    MR_bool display__succeeded;

#line 3549 "display.c"
    {
#line 3551 "display.c"
      display__succeeded = display____Unify____table_column_class_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3554 "display.c"
    return display__succeeded;
#line 3556 "display.c"
  }
#line 3558 "display.c"
}

#line 3561 "display.c"
static void MR_CALL 
display____Compare____table_column_class_0_0_10001(
#line 3564 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3566 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3568 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3570 "display.c"
{
#line 3572 "display.c"
  {
#line 3574 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3577 "display.c"
    {
#line 3579 "display.c"
      display____Compare____table_column_class_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3582 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3584 "display.c"
  }
#line 3586 "display.c"
}

#line 3589 "display.c"
static MR_bool MR_CALL 
display____Unify____table_column_colour_0_0_10001(
#line 3592 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3594 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3596 "display.c"
{
#line 3598 "display.c"
  {
#line 3600 "display.c"
    MR_bool display__succeeded;

#line 3603 "display.c"
    {
#line 3605 "display.c"
      display__succeeded = display____Unify____table_column_colour_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3608 "display.c"
    return display__succeeded;
#line 3610 "display.c"
  }
#line 3612 "display.c"
}

#line 3615 "display.c"
static void MR_CALL 
display____Compare____table_column_colour_0_0_10001(
#line 3618 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3620 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3622 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3624 "display.c"
{
#line 3626 "display.c"
  {
#line 3628 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3631 "display.c"
    {
#line 3633 "display.c"
      display____Compare____table_column_colour_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3636 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3638 "display.c"
  }
#line 3640 "display.c"
}

#line 3643 "display.c"
static MR_bool MR_CALL 
display____Unify____table_data_0_0_10001(
#line 3646 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3648 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3650 "display.c"
{
#line 3652 "display.c"
  {
#line 3654 "display.c"
    MR_bool display__succeeded;

#line 3657 "display.c"
    {
#line 3659 "display.c"
      display__succeeded = display____Unify____table_data_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3662 "display.c"
    return display__succeeded;
#line 3664 "display.c"
  }
#line 3666 "display.c"
}

#line 3669 "display.c"
static void MR_CALL 
display____Compare____table_data_0_0_10001(
#line 3672 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3674 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3676 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3678 "display.c"
{
#line 3680 "display.c"
  {
#line 3682 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3685 "display.c"
    {
#line 3687 "display.c"
      display____Compare____table_data_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3690 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3692 "display.c"
  }
#line 3694 "display.c"
}

#line 3697 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_0_0_10001(
#line 3700 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3702 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3704 "display.c"
{
#line 3706 "display.c"
  {
#line 3708 "display.c"
    MR_bool display__succeeded;

#line 3711 "display.c"
    {
#line 3713 "display.c"
      display__succeeded = display____Unify____table_header_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3716 "display.c"
    return display__succeeded;
#line 3718 "display.c"
  }
#line 3720 "display.c"
}

#line 3723 "display.c"
static void MR_CALL 
display____Compare____table_header_0_0_10001(
#line 3726 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3728 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3730 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3732 "display.c"
{
#line 3734 "display.c"
  {
#line 3736 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3739 "display.c"
    {
#line 3741 "display.c"
      display____Compare____table_header_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3744 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3746 "display.c"
  }
#line 3748 "display.c"
}

#line 3751 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_0_0_10001(
#line 3754 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3756 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3758 "display.c"
{
#line 3760 "display.c"
  {
#line 3762 "display.c"
    MR_bool display__succeeded;

#line 3765 "display.c"
    {
#line 3767 "display.c"
      display__succeeded = display____Unify____table_header_group_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3770 "display.c"
    return display__succeeded;
#line 3772 "display.c"
  }
#line 3774 "display.c"
}

#line 3777 "display.c"
static void MR_CALL 
display____Compare____table_header_group_0_0_10001(
#line 3780 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3782 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3784 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3786 "display.c"
{
#line 3788 "display.c"
  {
#line 3790 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3793 "display.c"
    {
#line 3795 "display.c"
      display____Compare____table_header_group_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3798 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3800 "display.c"
  }
#line 3802 "display.c"
}

#line 3805 "display.c"
static MR_bool MR_CALL 
display____Unify____table_header_group_columns_0_0_10001(
#line 3808 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3810 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3812 "display.c"
{
#line 3814 "display.c"
  {
#line 3816 "display.c"
    MR_bool display__succeeded;

#line 3819 "display.c"
    {
#line 3821 "display.c"
      display__succeeded = display____Unify____table_header_group_columns_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3824 "display.c"
    return display__succeeded;
#line 3826 "display.c"
  }
#line 3828 "display.c"
}

#line 3831 "display.c"
static void MR_CALL 
display____Compare____table_header_group_columns_0_0_10001(
#line 3834 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3836 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3838 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3840 "display.c"
{
#line 3842 "display.c"
  {
#line 3844 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3847 "display.c"
    {
#line 3849 "display.c"
      display____Compare____table_header_group_columns_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3852 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3854 "display.c"
  }
#line 3856 "display.c"
}

#line 3859 "display.c"
static MR_bool MR_CALL 
display____Unify____table_row_0_0_10001(
#line 3862 "display.c"
  MR_Box display__wrapper_arg_1,
#line 3864 "display.c"
  MR_Box display__wrapper_arg_2)
#line 3866 "display.c"
{
#line 3868 "display.c"
  {
#line 3870 "display.c"
    MR_bool display__succeeded;

#line 3873 "display.c"
    {
#line 3875 "display.c"
      display__succeeded = display____Unify____table_row_0_0(((MR_Word) display__wrapper_arg_1), ((MR_Word) display__wrapper_arg_2));
    }
#line 3878 "display.c"
    return display__succeeded;
#line 3880 "display.c"
  }
#line 3882 "display.c"
}

#line 3885 "display.c"
static void MR_CALL 
display____Compare____table_row_0_0_10001(
#line 3888 "display.c"
  MR_Box * display__wrapper_arg_1,
#line 3890 "display.c"
  MR_Box display__wrapper_arg_2,
#line 3892 "display.c"
  MR_Box display__wrapper_arg_3)
#line 3894 "display.c"
{
#line 3896 "display.c"
  {
#line 3898 "display.c"
    MR_Word display__conv0_HeadVar__1_1;

#line 3901 "display.c"
    {
#line 3903 "display.c"
      display____Compare____table_row_0_0(&display__conv0_HeadVar__1_1, ((MR_Word) display__wrapper_arg_2), ((MR_Word) display__wrapper_arg_3));
    }
#line 3906 "display.c"
    *display__wrapper_arg_1 = ((MR_Box) (display__conv0_HeadVar__1_1));
#line 3908 "display.c"
  }
#line 3910 "display.c"
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
#line 3943 "display.c"
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
#line 3967 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                  break;
#line 135 "display.m"
                case (MR_Integer) 2:
#line 3973 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                  break;
#line 135 "display.m"
                case (MR_Integer) 3:
#line 3979 "display.c"
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
#line 4001 "display.c"
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
#line 4025 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 3:
#line 4031 "display.c"
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
#line 4055 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 1:
#line 4061 "display.c"
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
#line 4085 "display.c"
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
#line 4109 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 1:
#line 4115 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "display.m"
                    break;
#line 135 "display.m"
                  case (MR_Integer) 2:
#line 4121 "display.c"
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
#line 4241 "display.c"
                    display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[8];
#line 4243 "display.c"
                    {
#line 4245 "display.c"
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
#line 4271 "display.c"
                    {
#line 4273 "display.c"
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
#line 4299 "display.c"
                    /* direct tailcall eliminated */
#line 4301 "display.c"
                    {
#line 4303 "display.c"
                      MR_Word display__HeadVar__1__tmp_copy_1 = display__V_9_9;
#line 4305 "display.c"
                      MR_Word display__HeadVar__2__tmp_copy_2 = display__V_10_10;

#line 4308 "display.c"
                      display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 4310 "display.c"
                      display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 4312 "display.c"
                    }
#line 4314 "display.c"
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
#line 4359 "display.c"
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
#line 4388 "display.c"
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
#line 4413 "display.c"
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
#line 4426 "display.c"
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
#line 4502 "display.c"
            display__succeeded = (strcmp(display__V_5_5, display__V_7_7) == 0);
#line 121 "display.m"
            if (display__succeeded)
#line 121 "display.m"
              {
#line 4508 "display.c"
                display__TypeInfo_11_11 = (MR_Word) &display_scalar_common_1[7];
#line 4510 "display.c"
                {
#line 4512 "display.c"
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
#line 4538 "display.c"
            {
#line 4540 "display.c"
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
#line 4578 "display.c"
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
#line 4604 "display.c"
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
#line 4628 "display.c"
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

#line 4704 "display.c"
        {
#line 4706 "display.c"
          display__succeeded = display____Unify____table_header_group_columns_0_0(display__V_3_3, display__V_6_6);
        }
#line 106 "display.m"
        if (display__succeeded)
#line 106 "display.m"
          {
#line 4713 "display.c"
            display__succeeded = (display__V_4_4 == display__V_7_7);
#line 106 "display.m"
            if (display__succeeded)
#line 4717 "display.c"
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
#line 4754 "display.c"
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

#line 4812 "display.c"
        {
#line 4814 "display.c"
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
#line 4850 "display.c"
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
#line 4891 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 2:
#line 4897 "display.c"
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
#line 4910 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 4916 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 4922 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 4928 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 4934 "display.c"
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
#line 4962 "display.c"
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
#line 4986 "display.c"
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
#line 4999 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5005 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5011 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 5017 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 5023 "display.c"
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
#line 5051 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                break;
#line 185 "display.m"
              case (MR_Integer) 1:
#line 5057 "display.c"
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
#line 5088 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5094 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5100 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 3:
#line 5106 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 4:
#line 5112 "display.c"
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
#line 5147 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5153 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5159 "display.c"
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
#line 5190 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5196 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5202 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5208 "display.c"
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
#line 5240 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5246 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5252 "display.c"
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
#line 5265 "display.c"
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
#line 5287 "display.c"
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
#line 5311 "display.c"
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
#line 5336 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5342 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5348 "display.c"
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
#line 5376 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5382 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5388 "display.c"
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
#line 5401 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5407 "display.c"
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
#line 5431 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 4:
#line 5437 "display.c"
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
#line 5465 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5471 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5477 "display.c"
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
#line 5490 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5496 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5502 "display.c"
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
#line 5526 "display.c"
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
#line 5554 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 1:
#line 5560 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                    break;
#line 185 "display.m"
                  case (MR_Integer) 2:
#line 5566 "display.c"
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
#line 5579 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 1:
#line 5585 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 2:
#line 5591 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "display.m"
                        break;
#line 185 "display.m"
                      case (MR_Integer) 3:
#line 5597 "display.c"
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
#line 5688 "display.c"
                {
#line 5690 "display.c"
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
#line 5716 "display.c"
                {
#line 5718 "display.c"
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
#line 5744 "display.c"
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
#line 5776 "display.c"
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
#line 5813 "display.c"
                    {
#line 5815 "display.c"
                      display__succeeded = measurement_units____Unify____memory_0_0(display__V_9_9, display__V_12_12);
                    }
#line 185 "display.m"
                    if (display__succeeded)
#line 185 "display.m"
                      {
#line 5822 "display.c"
                        display__succeeded = (display__V_10_10 == display__V_13_13);
#line 185 "display.m"
                        if (display__succeeded)
#line 5826 "display.c"
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
#line 5853 "display.c"
                    {
#line 5855 "display.c"
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
#line 5881 "display.c"
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
#line 5906 "display.c"
                    {
#line 5908 "display.c"
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
#line 5971 "display.c"
  {
#line 5973 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 5976 "display.c"
    return display__succeeded;
#line 5978 "display.c"
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
#line 6024 "display.c"
  {
#line 6026 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6029 "display.c"
    return display__succeeded;
#line 6031 "display.c"
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
#line 6077 "display.c"
  {
#line 6079 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6082 "display.c"
    return display__succeeded;
#line 6084 "display.c"
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
#line 6113 "display.c"
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
#line 6137 "display.c"
              *display__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "display.m"
              break;
#line 147 "display.m"
            case (MR_Integer) 2:
#line 6143 "display.c"
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
#line 6165 "display.c"
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
#line 6189 "display.c"
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
#line 6215 "display.c"
                *display__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "display.m"
                break;
#line 147 "display.m"
              case (MR_Integer) 1:
#line 6221 "display.c"
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
#line 6241 "display.c"
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
#line 6338 "display.c"
                {
#line 6340 "display.c"
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
#line 6372 "display.c"
                {
#line 6374 "display.c"
                  display__succeeded = display____Unify____table_data_0_0(display__V_5_5, display__V_7_7);
                }
#line 147 "display.m"
                if (display__succeeded)
#line 6379 "display.c"
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
#line 6420 "display.c"
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
#line 6454 "display.c"
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
#line 6474 "display.c"
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
#line 6494 "display.c"
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

#line 6575 "display.c"
        display__succeeded = (display__V_3_3 == display__V_7_7);
#line 82 "display.m"
        if (display__succeeded)
#line 82 "display.m"
          {
#line 6581 "display.c"
            display__succeeded = (display__V_4_4 == display__V_8_8);
#line 82 "display.m"
            if (display__succeeded)
#line 82 "display.m"
              {
#line 6587 "display.c"
                display__TypeInfo_13_13 = (MR_Word) &display_scalar_common_1[4];
#line 6589 "display.c"
                {
#line 6591 "display.c"
                  display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_13_13, ((MR_Box) (display__V_5_5)), ((MR_Box) (display__V_9_9)));
                }
#line 82 "display.m"
                if (display__succeeded)
#line 82 "display.m"
                  {
#line 6598 "display.c"
                    display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[5];
#line 6600 "display.c"
                    {
#line 6602 "display.c"
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
#line 6661 "display.c"
  {
#line 6663 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6666 "display.c"
    return display__succeeded;
#line 6668 "display.c"
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
#line 6697 "display.c"
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
#line 6719 "display.c"
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

#line 6789 "display.c"
        display__succeeded = (strcmp(display__V_3_3, display__V_5_5) == 0);
#line 246 "display.m"
        if (display__succeeded)
#line 6793 "display.c"
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
#line 6845 "display.c"
  {
#line 6847 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6850 "display.c"
    return display__succeeded;
#line 6852 "display.c"
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
#line 6898 "display.c"
  {
#line 6900 "display.c"
    MR_bool display__succeeded = (display__HeadVar__2_1 == display__HeadVar__2_2);

#line 6903 "display.c"
    return display__succeeded;
#line 6905 "display.c"
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
#line 6940 "display.c"
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
#line 6964 "display.c"
                  *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                  break;
#line 34 "display.m"
                case (MR_Integer) 2:
#line 6970 "display.c"
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
#line 6983 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 1:
#line 6989 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 2:
#line 6995 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 3:
#line 7001 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 4:
#line 7007 "display.c"
                      *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                      break;
#line 34 "display.m"
                    case (MR_Integer) 5:
#line 7013 "display.c"
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
#line 7039 "display.c"
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
#line 7063 "display.c"
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
#line 7076 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7082 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7088 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 7094 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 4:
#line 7100 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 5:
#line 7106 "display.c"
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
#line 7134 "display.c"
                    *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                    break;
#line 34 "display.m"
                  case (MR_Integer) 1:
#line 7140 "display.c"
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
#line 7171 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7177 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7183 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 3:
#line 7189 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 4:
#line 7195 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 5:
#line 7201 "display.c"
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
#line 7236 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7242 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7248 "display.c"
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
#line 7279 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7285 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7291 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7297 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7303 "display.c"
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
#line 7331 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7337 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7343 "display.c"
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
#line 7356 "display.c"
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
#line 7380 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7386 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7392 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7398 "display.c"
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
#line 7426 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7432 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7438 "display.c"
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
#line 7451 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7457 "display.c"
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
#line 7481 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7487 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7493 "display.c"
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
#line 7525 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7531 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7537 "display.c"
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
#line 7550 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7556 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7562 "display.c"
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
#line 7588 "display.c"
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
#line 7608 "display.c"
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
#line 7637 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 5:
#line 7643 "display.c"
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
#line 7671 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7677 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7683 "display.c"
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
#line 7696 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7702 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7708 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7714 "display.c"
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
#line 7738 "display.c"
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
#line 7766 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 1:
#line 7772 "display.c"
                        *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                        break;
#line 34 "display.m"
                      case (MR_Integer) 2:
#line 7778 "display.c"
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
#line 7791 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 1:
#line 7797 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 2:
#line 7803 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 3:
#line 7809 "display.c"
                            *display__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "display.m"
                            break;
#line 34 "display.m"
                          case (MR_Integer) 4:
#line 7815 "display.c"
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
#line 7941 "display.c"
                    {
#line 7943 "display.c"
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
#line 7969 "display.c"
                    {
#line 7971 "display.c"
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
#line 8004 "display.c"
                        {
#line 8006 "display.c"
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
#line 8032 "display.c"
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
#line 8057 "display.c"
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
#line 8098 "display.c"
                        display__succeeded = (display__V_13_13 == display__V_16_16);
#line 34 "display.m"
                        if (display__succeeded)
#line 34 "display.m"
                          {
#line 8104 "display.c"
                            display__TypeInfo_27_27 = (MR_Word) &display_scalar_common_1[2];
#line 8106 "display.c"
                            {
#line 8108 "display.c"
                              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_27_27, ((MR_Box) (display__V_14_14)), ((MR_Box) (display__V_17_17)));
                            }
#line 34 "display.m"
                            if (display__succeeded)
#line 34 "display.m"
                              {
#line 8115 "display.c"
                                display__TypeInfo_28_28 = (MR_Word) &display_scalar_common_1[3];
#line 8117 "display.c"
                                {
#line 8119 "display.c"
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
#line 8149 "display.c"
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
#line 8174 "display.c"
                        /* direct tailcall eliminated */
#line 8176 "display.c"
                        {
#line 8178 "display.c"
                          MR_Word display__HeadVar__1__tmp_copy_1 = display__V_23_23;
#line 8180 "display.c"
                          MR_Word display__HeadVar__2__tmp_copy_2 = display__V_24_24;

#line 8183 "display.c"
                          display__HeadVar__2_2 = display__HeadVar__2__tmp_copy_2;
#line 8185 "display.c"
                          display__HeadVar__1_1 = display__HeadVar__1__tmp_copy_1;
#line 8187 "display.c"
                        }
#line 8189 "display.c"
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
#line 8238 "display.c"
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
#line 8260 "display.c"
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

#line 8327 "display.c"
        {
#line 8329 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[2], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 28 "display.m"
        if (display__succeeded)
#line 28 "display.m"
          {
#line 8336 "display.c"
            display__TypeInfo_10_10 = (MR_Word) &display_scalar_common_1[3];
#line 8338 "display.c"
            {
#line 8340 "display.c"
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
#line 8378 "display.c"
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
#line 8408 "display.c"
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
#line 8428 "display.c"
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
#line 8448 "display.c"
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

#line 8532 "display.c"
        {
#line 8534 "display.c"
          display__succeeded = query____Unify____cmd_0_0(display__V_3_3, display__V_7_7);
        }
#line 231 "display.m"
        if (display__succeeded)
#line 231 "display.m"
          {
#line 8541 "display.c"
            display__TypeInfo_14_14 = (MR_Word) &display_scalar_common_1[1];
#line 8543 "display.c"
            {
#line 8545 "display.c"
              display__succeeded = mercury__builtin__unify_2_p_0(display__TypeInfo_14_14, ((MR_Box) (display__V_4_4)), ((MR_Box) (display__V_8_8)));
            }
#line 231 "display.m"
            if (display__succeeded)
#line 231 "display.m"
              {
#line 8552 "display.c"
                {
#line 8554 "display.c"
                  display__succeeded = display____Unify____attr_string_0_0(display__V_5_5, display__V_9_9);
                }
#line 231 "display.m"
                if (display__succeeded)
#line 8559 "display.c"
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
#line 8598 "display.c"
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
#line 8620 "display.c"
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

#line 8681 "display.c"
        {
#line 8683 "display.c"
          display__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &display_scalar_common_1[0], ((MR_Box) (display__V_3_3)), ((MR_Box) (display__V_5_5)));
        }
#line 204 "display.m"
        if (display__succeeded)
#line 8688 "display.c"
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
