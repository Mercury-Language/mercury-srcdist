/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version DEV
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


/* :- module query. */
/* :- implementation. */

/*
INIT mercury__query__init
ENDINIT
*/

#include "query.mih"


#include "analysis_utils.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "display.mih"
#include "display_report.mih"
#include "exclude.mih"
#include "html_format.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "report.mih"
#include "util.mih"
#include "var_use_analysis.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 98 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0;

#line 101 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1;

#line 104 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2;

#line 107 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3];

#line 110 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3];

#line 113 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3];

#line 116 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0;

#line 119 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1;

#line 122 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2];

#line 125 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2];

#line 128 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2];

#line 131 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0;

#line 134 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1;

#line 137 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2;

#line 140 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3;

#line 143 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4];

#line 146 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4];

#line 149 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4];

#line 152 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0;

#line 155 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1;

#line 158 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2;

#line 161 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3];

#line 164 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3];

#line 167 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3];

#line 170 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0;

#line 173 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1;

#line 176 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1];

#line 179 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1];

#line 182 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2;

#line 185 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3;

#line 188 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 191 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1];

#line 194 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1];

#line 197 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4;

#line 200 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1];

#line 203 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1];

#line 206 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5;

#line 209 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1];

#line 212 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1];

#line 215 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6;

#line 218 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7;

#line 221 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1];

#line 224 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1];

#line 227 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8;

#line 230 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5];

#line 233 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5];

#line 236 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9;

#line 239 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10;

#line 242 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1];

#line 245 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1];

#line 248 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11;

#line 251 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1];

#line 254 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1];

#line 257 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12;

#line 260 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1];

#line 263 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1];

#line 266 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13;

#line 269 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4];

#line 272 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4];

#line 275 "query.c"
static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4];

#line 278 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14;

#line 281 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1];

#line 284 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1];

#line 287 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15;

#line 290 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1];

#line 293 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1];

#line 296 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16;

#line 299 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1];

#line 302 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1];

#line 305 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17;

#line 308 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1];

#line 311 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1];

#line 314 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18;

#line 317 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1];

#line 320 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1];

#line 323 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19;

#line 326 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1];

#line 329 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1];

#line 332 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20;

#line 335 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1];

#line 338 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1];

#line 341 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21;

#line 344 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1];

#line 347 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1];

#line 350 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22;

#line 353 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5];

#line 356 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1];

#line 359 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1];

#line 362 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16];

#line 365 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4];

#line 368 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23];

#line 371 "query.c"
static const MR_Integer query__query__functor_number_map_cmd_0[23];

#line 374 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0;

#line 377 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1;

#line 380 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2];

#line 383 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2];

#line 386 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2];

#line 389 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0;

#line 392 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1;

#line 395 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2];

#line 398 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2];

#line 401 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2];

#line 404 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0;

#line 407 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1;

#line 410 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2;

#line 413 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3;

#line 416 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4;

#line 419 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5;

#line 422 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6];

#line 425 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6];

#line 428 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6];

#line 431 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0;

#line 434 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 437 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3];

#line 440 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3];

#line 443 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0;

#line 446 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1];

#line 449 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1];

#line 452 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1];

#line 455 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1];

#line 458 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0;

#line 461 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1;

#line 464 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2];

#line 467 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2];

#line 470 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2];

#line 473 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0;

#line 476 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1;

#line 479 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2];

#line 482 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2];

#line 485 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2];

#line 488 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2];

#line 491 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0;

#line 494 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1];

#line 497 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1;

#line 500 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1];

#line 503 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2;

#line 506 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1];

#line 509 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1];

#line 512 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1];

#line 515 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3];

#line 518 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3];

#line 521 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3];

#line 524 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5];

#line 527 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5];

#line 530 "query.c"
static const MR_DuArgLocn query__query__field_locns_fields_0_0[5];

#line 533 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0;

#line 536 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1];

#line 539 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1];

#line 542 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1];

#line 545 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1];

#line 548 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3];

#line 551 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3];

#line 554 "query.c"
static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3];

#line 557 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0;

#line 560 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1];

#line 563 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1];

#line 566 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1];

#line 569 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1];

#line 572 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0;

#line 575 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1;

#line 578 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2];

#line 581 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2];

#line 584 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2];

#line 587 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0;

#line 590 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1;

#line 593 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2];

#line 596 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2];

#line 599 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2];

#line 602 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0;

#line 605 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1;

#line 608 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2];

#line 611 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2];

#line 614 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2];

#line 617 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0;

#line 620 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1];

#line 623 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1;

#line 626 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1];

#line 629 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2;

#line 632 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1];

#line 635 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1];

#line 638 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1];

#line 641 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3];

#line 644 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3];

#line 647 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3];

#line 650 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0;

#line 653 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1;

#line 656 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2;

#line 659 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3];

#line 662 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3];

#line 665 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3];

#line 668 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0;

#line 671 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1;

#line 674 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3];

#line 677 "query.c"
static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3];

#line 680 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2;

#line 683 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2];

#line 686 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1];

#line 689 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2];

#line 692 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3];

#line 695 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3];

#line 698 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0;

#line 701 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1;

#line 704 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2];

#line 707 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2];

#line 710 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2];

#line 713 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12];

#line 716 "query.c"
static const MR_ConstString query__query__field_names_preferences_0_0[12];

#line 719 "query.c"
static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12];

#line 722 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0;

#line 725 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1];

#line 728 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1];

#line 731 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1];

#line 734 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1];

#line 737 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1];

#line 740 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0;

#line 743 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1;

#line 746 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2;

#line 749 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2];

#line 752 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1];

#line 755 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2];

#line 758 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3];

#line 761 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3];

#line 764 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1];

#line 767 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0;

#line 770 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0;

#line 773 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1;

#line 776 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2];

#line 779 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2];

#line 782 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2];

#line 785 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0;

#line 788 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1;

#line 791 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2;

#line 794 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3;

#line 797 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4;

#line 800 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5;

#line 803 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6];

#line 806 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6];

#line 809 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6];

#line 812 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0;

#line 815 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1;

#line 818 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2;

#line 821 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3];

#line 824 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3];

#line 827 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3];

#line 830 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 833 "query.c"
  MR_Box query__wrapper_arg_1,
#line 835 "query.c"
  MR_Box query__wrapper_arg_2);

#line 838 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 841 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 843 "query.c"
  MR_Box query__wrapper_arg_2,
#line 845 "query.c"
  MR_Box query__wrapper_arg_3);

#line 848 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 851 "query.c"
  MR_Box query__wrapper_arg_1,
#line 853 "query.c"
  MR_Box query__wrapper_arg_2);

#line 856 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 859 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 861 "query.c"
  MR_Box query__wrapper_arg_2,
#line 863 "query.c"
  MR_Box query__wrapper_arg_3);

#line 866 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 869 "query.c"
  MR_Box query__wrapper_arg_1,
#line 871 "query.c"
  MR_Box query__wrapper_arg_2);

#line 874 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 877 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 879 "query.c"
  MR_Box query__wrapper_arg_2,
#line 881 "query.c"
  MR_Box query__wrapper_arg_3);

#line 884 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 887 "query.c"
  MR_Box query__wrapper_arg_1,
#line 889 "query.c"
  MR_Box query__wrapper_arg_2);

#line 892 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 895 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 897 "query.c"
  MR_Box query__wrapper_arg_2,
#line 899 "query.c"
  MR_Box query__wrapper_arg_3);

#line 902 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 905 "query.c"
  MR_Box query__wrapper_arg_1,
#line 907 "query.c"
  MR_Box query__wrapper_arg_2);

#line 910 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 913 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 915 "query.c"
  MR_Box query__wrapper_arg_2,
#line 917 "query.c"
  MR_Box query__wrapper_arg_3);

#line 920 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 923 "query.c"
  MR_Box query__wrapper_arg_1,
#line 925 "query.c"
  MR_Box query__wrapper_arg_2);

#line 928 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 931 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 933 "query.c"
  MR_Box query__wrapper_arg_2,
#line 935 "query.c"
  MR_Box query__wrapper_arg_3);

#line 938 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 941 "query.c"
  MR_Box query__wrapper_arg_1,
#line 943 "query.c"
  MR_Box query__wrapper_arg_2);

#line 946 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 949 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 951 "query.c"
  MR_Box query__wrapper_arg_2,
#line 953 "query.c"
  MR_Box query__wrapper_arg_3);

#line 956 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 959 "query.c"
  MR_Box query__wrapper_arg_1,
#line 961 "query.c"
  MR_Box query__wrapper_arg_2);

#line 964 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 967 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 969 "query.c"
  MR_Box query__wrapper_arg_2,
#line 971 "query.c"
  MR_Box query__wrapper_arg_3);

#line 974 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 977 "query.c"
  MR_Box query__wrapper_arg_1,
#line 979 "query.c"
  MR_Box query__wrapper_arg_2);

#line 982 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 985 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 987 "query.c"
  MR_Box query__wrapper_arg_2,
#line 989 "query.c"
  MR_Box query__wrapper_arg_3);

#line 992 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 995 "query.c"
  MR_Box query__wrapper_arg_1,
#line 997 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1000 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 1003 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1005 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1007 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1010 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 1013 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1015 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1018 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 1021 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1023 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1025 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1028 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 1031 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1033 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1036 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 1039 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1041 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1043 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1046 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 1049 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1051 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1054 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 1057 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1059 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1061 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1064 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 1067 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1069 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1072 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 1075 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1077 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1079 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1082 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 1085 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1087 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1090 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 1093 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1095 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1097 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1100 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 1103 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1105 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1108 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 1111 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1113 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1115 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1118 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 1121 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1123 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1126 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 1129 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1131 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1133 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1136 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 1139 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1141 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1144 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 1147 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1149 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1151 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1154 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 1157 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1159 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1162 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 1165 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1167 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1169 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1172 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 1175 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1177 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1180 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 1183 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1185 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1187 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1190 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 1193 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1195 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1198 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 1201 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1203 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1205 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1208 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 1211 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1213 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1216 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 1219 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1221 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1223 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1226 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 1229 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1231 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1234 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 1237 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1239 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1241 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1244 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 1247 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1249 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1252 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 1255 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1257 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1259 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1262 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 1265 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1267 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1270 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 1273 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1275 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1277 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1280 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 1283 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1285 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1288 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 1291 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1293 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1295 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1298 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 1301 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1303 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1306 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 1309 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1311 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1313 "query.c"
  MR_Box query__wrapper_arg_3);

#line 434 "query.m"
static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2];

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 434 "query.m"
static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0;

#line 1365 "query.m"
static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void);

#line 1362 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void);

#line 1359 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void);

#line 1356 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void);

#line 1353 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void);

#line 1350 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void);

#line 1347 "query.m"
static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void);

#line 1344 "query.m"
static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void);

#line 1341 "query.m"
static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void);

#line 1338 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void);

#line 1335 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void);

#line 1332 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void);

#line 1329 "query.m"
static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void);

#line 1326 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void);

#line 1323 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void);

#line 1320 "query.m"
static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void);

#line 1317 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void);

#line 1314 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void);

#line 1311 "query.m"
static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void);

#line 1308 "query.m"
static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void);

#line 1305 "query.m"
static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void);

#line 1302 "query.m"
static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void);

#line 1299 "query.m"
static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void);

#line 1285 "query.m"
static MR_String MR_CALL 
query__box_to_string_1_f_0(
#line 1285 "query.m"
  MR_Word query__Box_3);

#line 1273 "query.m"
static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
#line 1273 "query.m"
  MR_Word query__Scheme_3);

#line 1261 "query.m"
static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
#line 1261 "query.m"
  MR_Word query__DevMode_3);

#line 1241 "query.m"
static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
#line 1241 "query.m"
  MR_String query__HeadVar__1_1,
#line 1241 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1235 "query.m"
static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
#line 1235 "query.m"
  MR_Word query__Items_3);

#line 1221 "query.m"
static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
#line 1221 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1215 "query.m"
static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
#line 1215 "query.m"
  MR_String query__HeadVar__1_1,
#line 1215 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1209 "query.m"
static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
#line 1209 "query.m"
  MR_Word query__Contour_3);

#line 1203 "query.m"
static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
#line 1203 "query.m"
  MR_String query__HeadVar__1_1,
#line 1203 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1197 "query.m"
static MR_String MR_CALL 
query__scope_to_string_1_f_0(
#line 1197 "query.m"
  MR_Word query__Scope_3);

#line 1161 "query.m"
static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
#line 1161 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1149 "query.m"
static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
#line 1149 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1138 "query.m"
static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
#line 1138 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1114 "query.m"
static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
#line 1114 "query.m"
  MR_String query__LimitStr_3,
#line 1114 "query.m"
  MR_Word * query__Limit_4);

#line 1105 "query.m"
static MR_String MR_CALL 
query__limit_to_string_1_f_0(
#line 1105 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1099 "query.m"
static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
#line 1099 "query.m"
  MR_String query__HeadVar__1_1,
#line 1099 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1093 "query.m"
static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
#line 1093 "query.m"
  MR_Word query__InclDesc_3);

#line 1083 "query.m"
static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
#line 1083 "query.m"
  MR_String query__HeadVar__1_1,
#line 1083 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1077 "query.m"
static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
#line 1077 "query.m"
  MR_Word query__CostKind_3);

#line 1069 "query.m"
static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
#line 1069 "query.m"
  MR_String query__HeadVar__1_1,
#line 1069 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1063 "query.m"
static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
#line 1063 "query.m"
  MR_Word query__CallerGroups_3);

#line 1033 "query.m"
static MR_String MR_CALL 
query__fields_to_string_1_f_0(
#line 1033 "query.m"
  MR_Word query__HeadVar__1_1);

#line 664 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 664 "query.m"
  MR_Word query__Pref_3);

#line 533 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 533 "query.m"
  MR_Word query__Cmd_3);

#line 519 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void);

#line 518 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void);

#line 434 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 434 "query.m"
  MR_Word query__Cmd_4,
#line 434 "query.m"
  MR_Word query__Deep_5,
#line 434 "query.m"
  MR_Word * query__Report_6);

#line 413 "query.m"
static void MR_CALL 
query__exec_4_p_0(
#line 413 "query.m"
  MR_Word query__Cmd_5,
#line 413 "query.m"
  MR_Word query__Prefs_6,
#line 413 "query.m"
  MR_Word query__Deep_7,
#line 413 "query.m"
  MR_String * query__HTMLStr_8);

#line 384 "query.m"
static void MR_CALL 
query__try_exec_4_p_0_1(
#line 384 "query.m"
  MR_Box query__closure_arg,
#line 384 "query.m"
  MR_Box * query__wrapper_arg_1);


static /* final */ const MR_Box query_scalar_common_1[4][2];

static /* final */ const MR_Box query_scalar_common_2[17][1];

static /* final */ const MR_Box query_scalar_common_3[1][7];


#line 985 "query.m"
/* sealed */ struct query__vector_common_type_4_0_s {
#line 985 "query.m"
  const MR_String query__vector_common_type_4_0__vct_4_f_0;
#line 985 "query.m"
  const MR_Word query__vector_common_type_4_0__vct_4_f_1;
#line 985 "query.m"
};

static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[6];

#line 1027 "query.m"
/* sealed */ struct query__vector_common_type_5_0_s {
#line 1027 "query.m"
  const MR_String query__vector_common_type_5_0__vct_5_f_0;
#line 1027 "query.m"
  const MR_Word query__vector_common_type_5_0__vct_5_f_1;
#line 1027 "query.m"
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[5];

#line 1086 "query.m"
/* sealed */ struct query__vector_common_type_6_0_s {
#line 1086 "query.m"
  const MR_String query__vector_common_type_6_0__vct_6_f_0;
#line 1086 "query.m"
  const MR_Word query__vector_common_type_6_0__vct_6_f_1;
#line 1086 "query.m"
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[12];

#line 985 "query.m"
/* sealed */ struct query__vector_common_type_7_0_s {
#line 985 "query.m"
  const MR_String query__vector_common_type_7_0__vct_7_f_0;
#line 985 "query.m"
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[22];

#line 1072 "query.m"
/* sealed */ struct query__vector_common_type_8_0_s {
#line 1072 "query.m"
  const MR_String query__vector_common_type_8_0__vct_8_f_0;
#line 1072 "query.m"
  const MR_Word query__vector_common_type_8_0__vct_8_f_1;
#line 1072 "query.m"
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[4];

#line 1244 "query.m"
/* sealed */ struct query__vector_common_type_9_0_s {
#line 1244 "query.m"
  const MR_String query__vector_common_type_9_0__vct_9_f_0;
#line 1244 "query.m"
  const MR_Word query__vector_common_type_9_0__vct_9_f_1;
#line 1244 "query.m"
};

static /* final */ const struct query__vector_common_type_9_0_s query_vector_common_9[16];



static /* final */ const MR_Box query_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 5 << (MR_Integer) 1)) | (((((MR_Integer) 2 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 6))))))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])))
  },
};

static /* final */ const MR_Box query_scalar_common_2[17][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 16 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
};

static /* final */ const MR_Box query_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[6] = {
  /* row 0 */
  {
    (MR_String) "_",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "q",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "qt",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "qtp",
    (MR_Integer) 5
  },
  /* row 4 */
  {
    (MR_String) "t",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "tp",
    (MR_Integer) 4
  },
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[5] = {
  /* row 0 */
  {
    (MR_String) "B",
    (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[7])
  },
  /* row 1 */
  {
    (MR_String) "W",
    (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[0])
  },
  /* row 2 */
  {
    (MR_String) "_",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 3 */
  {
    (MR_String) "b",
    (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[7])
  },
  /* row 4 */
  {
    (MR_String) "w",
    (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[0])
  },
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[12] = {
  /* row 0 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row 1 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row 3 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row 5 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
  /* row 6 */
  {
    (MR_String) "allocs",
    (MR_Integer) 4
  },
  /* row 7 */
  {
    (MR_String) "calls",
    (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "callseqs",
    (MR_Integer) 3
  },
  /* row 9 */
  {
    (MR_String) "redos",
    (MR_Integer) 1
  },
  /* row 10 */
  {
    (MR_String) "time",
    (MR_Integer) 2
  },
  /* row 11 */
  {
    (MR_String) "words",
    (MR_Integer) 5
  },
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[22] = {
  /* row 0 */   {     (MR_String) "_" },
  /* row 1 */   {     (MR_String) "q" },
  /* row 2 */   {     (MR_String) "t" },
  /* row 3 */   {     (MR_String) "qt" },
  /* row 4 */   {     (MR_String) "tp" },
  /* row 5 */   {     (MR_String) "qtp" },
  /* row 6 */   {     (MR_String) "cs" },
  /* row 7 */   {     (MR_String) "pr" },
  /* row 8 */   {     (MR_String) "mo" },
  /* row 9 */   {     (MR_String) "cl" },
  /* row 10 */   {     (MR_String) "calls" },
  /* row 11 */   {     (MR_String) "redos" },
  /* row 12 */   {     (MR_String) "time" },
  /* row 13 */   {     (MR_String) "callseqs" },
  /* row 14 */   {     (MR_String) "allocs" },
  /* row 15 */   {     (MR_String) "words" },
  /* row 16 */   {     (MR_String) "calls" },
  /* row 17 */   {     (MR_String) "redos" },
  /* row 18 */   {     (MR_String) "time" },
  /* row 19 */   {     (MR_String) "callseqs" },
  /* row 20 */   {     (MR_String) "allocs" },
  /* row 21 */   {     (MR_String) "words" },
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[4] = {
  /* row 0 */
  {
    (MR_String) "cl",
    (MR_Integer) 3
  },
  /* row 1 */
  {
    (MR_String) "cs",
    (MR_Integer) 0
  },
  /* row 2 */
  {
    (MR_String) "mo",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "pr",
    (MR_Integer) 1
  },
};

static /* final */ const struct query__vector_common_type_9_0_s query_vector_common_9[16] = {
  /* row 0 */
  {
    (MR_String) "hhs",
    (MR_Word) &query_scalar_common_2[10]
  },
  /* row 1 */
  {
    (MR_String) "ssh",
    (MR_Word) &query_scalar_common_2[15]
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "shs",
    (MR_Word) &query_scalar_common_2[14]
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    (MR_String) "shh",
    (MR_Word) &query_scalar_common_2[13]
  },
  /* row 9 */
  {
    (MR_String) "hss",
    (MR_Word) &query_scalar_common_2[12]
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    (MR_String) "hhh",
    (MR_Word) &query_scalar_common_2[9]
  },
  /* row 12 */
  {
    (MR_String) "hsh",
    (MR_Word) &query_scalar_common_2[11]
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    (MR_String) "sss",
    (MR_Word) &query_scalar_common_2[16]
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};


#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2069 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

#line 2075 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

#line 2081 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

#line 2087 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

#line 2094 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

#line 2101 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2108 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_alloc_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____alloc_fields_0_0_10001)),
  ((MR_Box) (query____Compare____alloc_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "alloc_fields",
  {     query__query__enum_name_ordered_alloc_fields_0 },
  {     query__query__enum_value_ordered_alloc_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_alloc_fields_0
};

#line 2125 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

#line 2131 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

#line 2137 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 2143 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 2149 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2155 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_box_tables_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____box_tables_0_0_10001)),
  ((MR_Box) (query____Compare____box_tables_0_0_10001)),
  (MR_String) "query",
  (MR_String) "box_tables",
  {     query__query__enum_name_ordered_box_tables_0 },
  {     query__query__enum_value_ordered_box_tables_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_box_tables_0
};

#line 2172 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

#line 2178 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

#line 2184 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

#line 2190 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

#line 2196 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

#line 2204 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

#line 2212 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2220 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_caller_groups_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____caller_groups_0_0_10001)),
  ((MR_Box) (query____Compare____caller_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "caller_groups",
  {     query__query__enum_name_ordered_caller_groups_0 },
  {     query__query__enum_value_ordered_caller_groups_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  query__query__functor_number_map_caller_groups_0
};

#line 2237 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

#line 2243 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

#line 2249 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

#line 2255 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

#line 2262 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

#line 2269 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2276 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_callseqs_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____callseqs_fields_0_0_10001)),
  ((MR_Box) (query____Compare____callseqs_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "callseqs_fields",
  {     query__query__enum_name_ordered_callseqs_fields_0 },
  {     query__query__enum_value_ordered_callseqs_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_callseqs_fields_0
};

#line 2293 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0 = {
  (MR_String) "deep_cmd_quit",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2308 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1 = {
  (MR_String) "deep_cmd_restart",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2323 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2328 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

#line 2333 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2 = {
  (MR_String) "deep_cmd_timeout",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_cmd_0_2,
  query__query__field_names_cmd_0_2,
  NULL,
  NULL
};

#line 2348 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3 = {
  (MR_String) "deep_cmd_menu",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2363 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2371 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2376 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

#line 2381 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4 = {
  (MR_String) "deep_cmd_root",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  query__query__field_types_cmd_0_4,
  query__query__field_names_cmd_0_4,
  NULL,
  NULL
};

#line 2396 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2401 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

#line 2406 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5 = {
  (MR_String) "deep_cmd_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5,
  query__query__field_types_cmd_0_5,
  query__query__field_names_cmd_0_5,
  NULL,
  NULL
};

#line 2421 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2426 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

#line 2431 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6 = {
  (MR_String) "deep_cmd_clique_recursive_costs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  query__query__field_types_cmd_0_6,
  query__query__field_names_cmd_0_6,
  NULL,
  NULL
};

#line 2446 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7 = {
  (MR_String) "deep_cmd_recursion_types_frequency",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2461 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2466 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

#line 2471 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8 = {
  (MR_String) "deep_cmd_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 8,
  query__query__field_types_cmd_0_8,
  query__query__field_names_cmd_0_8,
  NULL,
  NULL
};

#line 2486 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

#line 2495 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

#line 2504 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9 = {
  (MR_String) "deep_cmd_proc_callers",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 9,
  query__query__field_types_cmd_0_9,
  query__query__field_names_cmd_0_9,
  NULL,
  NULL
};

#line 2519 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10 = {
  (MR_String) "deep_cmd_program_modules",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2534 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2539 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

#line 2544 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11 = {
  (MR_String) "deep_cmd_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 11,
  query__query__field_types_cmd_0_11,
  query__query__field_names_cmd_0_11,
  NULL,
  NULL
};

#line 2559 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2564 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

#line 2569 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12 = {
  (MR_String) "deep_cmd_module_getter_setters",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 12,
  query__query__field_types_cmd_0_12,
  query__query__field_names_cmd_0_12,
  NULL,
  NULL
};

#line 2584 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2589 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

#line 2594 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13 = {
  (MR_String) "deep_cmd_module_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 13,
  query__query__field_types_cmd_0_13,
  query__query__field_names_cmd_0_13,
  NULL,
  NULL
};

#line 2609 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 2617 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

#line 2625 "query.c"
static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 2649 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14 = {
  (MR_String) "deep_cmd_top_procs",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 14,
  query__query__field_types_cmd_0_14,
  query__query__field_names_cmd_0_14,
  query__query__field_locns_cmd_0_14,
  NULL
};

#line 2664 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2669 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

#line 2674 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15 = {
  (MR_String) "deep_cmd_static_procrep_coverage",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 15,
  query__query__field_types_cmd_0_15,
  query__query__field_names_cmd_0_15,
  NULL,
  NULL
};

#line 2689 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2694 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

#line 2699 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16 = {
  (MR_String) "deep_cmd_dynamic_procrep_coverage",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 16,
  query__query__field_types_cmd_0_16,
  query__query__field_names_cmd_0_16,
  NULL,
  NULL
};

#line 2714 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2719 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

#line 2724 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17 = {
  (MR_String) "deep_cmd_dump_proc_static",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 17,
  query__query__field_types_cmd_0_17,
  query__query__field_names_cmd_0_17,
  NULL,
  NULL
};

#line 2739 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2744 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

#line 2749 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18 = {
  (MR_String) "deep_cmd_dump_proc_dynamic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 18,
  query__query__field_types_cmd_0_18,
  query__query__field_names_cmd_0_18,
  NULL,
  NULL
};

#line 2764 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

#line 2769 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

#line 2774 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19 = {
  (MR_String) "deep_cmd_dump_call_site_static",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 19,
  query__query__field_types_cmd_0_19,
  query__query__field_names_cmd_0_19,
  NULL,
  NULL
};

#line 2789 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2794 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

#line 2799 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20 = {
  (MR_String) "deep_cmd_dump_call_site_dynamic",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 20,
  query__query__field_types_cmd_0_20,
  query__query__field_names_cmd_0_20,
  NULL,
  NULL
};

#line 2814 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2819 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

#line 2824 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21 = {
  (MR_String) "deep_cmd_dump_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 21,
  query__query__field_types_cmd_0_21,
  query__query__field_names_cmd_0_21,
  NULL,
  NULL
};

#line 2839 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2844 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

#line 2849 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22 = {
  (MR_String) "deep_cmd_call_site_dynamic_var_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 22,
  query__query__field_types_cmd_0_22,
  query__query__field_names_cmd_0_22,
  NULL,
  NULL
};

#line 2864 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

#line 2873 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

#line 2878 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

#line 2883 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16] = {
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_13,
  &query__query__du_functor_desc_cmd_0_14,
  &query__query__du_functor_desc_cmd_0_15,
  &query__query__du_functor_desc_cmd_0_16,
  &query__query__du_functor_desc_cmd_0_17,
  &query__query__du_functor_desc_cmd_0_18,
  &query__query__du_functor_desc_cmd_0_19,
  &query__query__du_functor_desc_cmd_0_20,
  &query__query__du_functor_desc_cmd_0_21,
  &query__query__du_functor_desc_cmd_0_22
};

#line 2903 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_cmd_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_cmd_0_2
  },
  {
    (MR_Integer) 16,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    query__query__du_stag_ordered_cmd_0_3
  }
};

#line 2927 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23] = {
  &query__query__du_functor_desc_cmd_0_22,
  &query__query__du_functor_desc_cmd_0_5,
  &query__query__du_functor_desc_cmd_0_6,
  &query__query__du_functor_desc_cmd_0_20,
  &query__query__du_functor_desc_cmd_0_19,
  &query__query__du_functor_desc_cmd_0_21,
  &query__query__du_functor_desc_cmd_0_18,
  &query__query__du_functor_desc_cmd_0_17,
  &query__query__du_functor_desc_cmd_0_16,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_11,
  &query__query__du_functor_desc_cmd_0_12,
  &query__query__du_functor_desc_cmd_0_13,
  &query__query__du_functor_desc_cmd_0_8,
  &query__query__du_functor_desc_cmd_0_9,
  &query__query__du_functor_desc_cmd_0_10,
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_4,
  &query__query__du_functor_desc_cmd_0_15,
  &query__query__du_functor_desc_cmd_0_2,
  &query__query__du_functor_desc_cmd_0_14
};

#line 2954 "query.c"
static const MR_Integer query__query__functor_number_map_cmd_0[23] = {
  (MR_Integer) 16,
  (MR_Integer) 18,
  (MR_Integer) 21,
  (MR_Integer) 9,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 17,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 22,
  (MR_Integer) 20,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0
};

#line 2981 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____cmd_0_0_10001)),
  ((MR_Box) (query____Compare____cmd_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cmd",
  {     query__query__du_name_ordered_cmd_0 },
  {     query__query__du_ptag_ordered_cmd_0 },
  (MR_Integer) 23,
  (MR_Integer) 4,
  query__query__functor_number_map_cmd_0
};

#line 2998 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

#line 3004 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

#line 3010 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 3016 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 3022 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3028 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_colour_column_groups_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____colour_column_groups_0_0_10001)),
  ((MR_Box) (query____Compare____colour_column_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "colour_column_groups",
  {     query__query__enum_name_ordered_colour_column_groups_0 },
  {     query__query__enum_value_ordered_colour_column_groups_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_colour_column_groups_0
};

#line 3045 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

#line 3051 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

#line 3057 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 3063 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 3069 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3075 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_contour_exclusion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____contour_exclusion_0_0_10001)),
  ((MR_Box) (query____Compare____contour_exclusion_0_0_10001)),
  (MR_String) "query",
  (MR_String) "contour_exclusion",
  {     query__query__enum_name_ordered_contour_exclusion_0 },
  {     query__query__enum_value_ordered_contour_exclusion_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_contour_exclusion_0
};

#line 3092 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

#line 3098 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

#line 3104 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

#line 3110 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

#line 3116 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

#line 3122 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

#line 3128 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 3138 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 3148 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 3158 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cost_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____cost_kind_0_0_10001)),
  ((MR_Box) (query____Compare____cost_kind_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cost_kind",
  {     query__query__enum_name_ordered_cost_kind_0 },
  {     query__query__enum_value_ordered_cost_kind_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_cost_kind_0
};

#line 3175 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

#line 3183 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 3191 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

#line 3198 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

#line 3205 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0 = {
  (MR_String) "deep_query",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_deep_query_0_0,
  query__query__field_names_deep_query_0_0,
  NULL,
  NULL
};

#line 3220 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 3225 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

#line 3234 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 3239 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

#line 3244 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_deep_query_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____deep_query_0_0_10001)),
  ((MR_Box) (query____Compare____deep_query_0_0_10001)),
  (MR_String) "query",
  (MR_String) "deep_query",
  {     query__query__du_name_ordered_deep_query_0 },
  {     query__query__du_ptag_ordered_deep_query_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_deep_query_0
};

#line 3261 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

#line 3267 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

#line 3273 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3279 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3285 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3291 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_descendants_meaningful_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____descendants_meaningful_0_0_10001)),
  ((MR_Box) (query____Compare____descendants_meaningful_0_0_10001)),
  (MR_String) "query",
  (MR_String) "descendants_meaningful",
  {     query__query__enum_name_ordered_descendants_meaningful_0 },
  {     query__query__enum_value_ordered_descendants_meaningful_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_descendants_meaningful_0
};

#line 3308 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

#line 3314 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

#line 3320 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

#line 3326 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

#line 3332 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3338 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_developer_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____developer_mode_0_0_10001)),
  ((MR_Box) (query____Compare____developer_mode_0_0_10001)),
  (MR_String) "query",
  (MR_String) "developer_mode",
  {     query__query__enum_name_ordered_developer_mode_0 },
  {     query__query__enum_value_ordered_developer_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_developer_mode_0
};

#line 3355 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3361 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0 = {
  (MR_String) "rank_range",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_display_limit_0_0,
  NULL,
  NULL,
  NULL
};

#line 3376 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3381 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1 = {
  (MR_String) "threshold_percent",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  query__query__field_types_display_limit_0_1,
  NULL,
  NULL,
  NULL
};

#line 3396 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3401 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2 = {
  (MR_String) "threshold_value",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_display_limit_0_2,
  NULL,
  NULL,
  NULL
};

#line 3416 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

#line 3421 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

#line 3426 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3431 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_display_limit_0_2
  }
};

#line 3450 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3457 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 3464 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_display_limit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____display_limit_0_0_10001)),
  ((MR_Box) (query____Compare____display_limit_0_0_10001)),
  (MR_String) "query",
  (MR_String) "display_limit",
  {     query__query__du_name_ordered_display_limit_0 },
  {     query__query__du_ptag_ordered_display_limit_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_display_limit_0
};

#line 3481 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
};

#line 3490 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

#line 3499 "query.c"
static const MR_DuArgLocn query__query__field_locns_fields_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 6,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 3528 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0 = {
  (MR_String) "fields",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_fields_0_0,
  query__query__field_names_fields_0_0,
  query__query__field_locns_fields_0_0,
  NULL
};

#line 3543 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3548 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

#line 3557 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3562 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

#line 3567 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____fields_0_0_10001)),
  ((MR_Box) (query____Compare____fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "fields",
  {     query__query__du_name_ordered_fields_0 },
  {     query__query__du_ptag_ordered_fields_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_fields_0
};

#line 3584 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

#line 3591 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

#line 3598 "query.c"
static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 3617 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0 = {
  (MR_String) "inactive_items",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_inactive_items_0_0,
  query__query__field_names_inactive_items_0_0,
  query__query__field_locns_inactive_items_0_0,
  NULL
};

#line 3632 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3637 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

#line 3646 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3651 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

#line 3656 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____inactive_items_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_items_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_items",
  {     query__query__du_name_ordered_inactive_items_0 },
  {     query__query__du_ptag_ordered_inactive_items_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_items_0
};

#line 3673 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

#line 3679 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

#line 3685 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3691 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3697 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3703 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____inactive_status_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_status_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_status",
  {     query__query__enum_name_ordered_inactive_status_0 },
  {     query__query__enum_value_ordered_inactive_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_status_0
};

#line 3720 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

#line 3726 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

#line 3732 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3738 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3744 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3750 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_include_descendants_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____include_descendants_0_0_10001)),
  ((MR_Box) (query____Compare____include_descendants_0_0_10001)),
  (MR_String) "query",
  (MR_String) "include_descendants",
  {     query__query__enum_name_ordered_include_descendants_0 },
  {     query__query__enum_value_ordered_include_descendants_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_include_descendants_0
};

#line 3767 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

#line 3773 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

#line 3779 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

#line 3785 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

#line 3791 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3797 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_measurement_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____measurement_scope_0_0_10001)),
  ((MR_Box) (query____Compare____measurement_scope_0_0_10001)),
  (MR_String) "query",
  (MR_String) "measurement_scope",
  {     query__query__enum_name_ordered_measurement_scope_0 },
  {     query__query__enum_value_ordered_measurement_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_measurement_scope_0
};

#line 3814 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0 = {
  (MR_String) "no_memory",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3829 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3834 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1 = {
  (MR_String) "memory",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  query__query__field_types_memory_fields_0_1,
  NULL,
  NULL,
  NULL
};

#line 3849 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3854 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2 = {
  (MR_String) "memory_and_percall",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_memory_fields_0_2,
  NULL,
  NULL,
  NULL
};

#line 3869 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3874 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

#line 3879 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

#line 3884 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_memory_fields_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_memory_fields_0_2
  }
};

#line 3903 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3910 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3917 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_memory_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____memory_fields_0_0_10001)),
  ((MR_Box) (query____Compare____memory_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "memory_fields",
  {     query__query__du_name_ordered_memory_fields_0 },
  {     query__query__du_ptag_ordered_memory_fields_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_memory_fields_0
};

#line 3934 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

#line 3940 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

#line 3946 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

#line 3952 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

#line 3959 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

#line 3966 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3973 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_module_qual_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____module_qual_0_0_10001)),
  ((MR_Box) (query____Compare____module_qual_0_0_10001)),
  (MR_String) "query",
  (MR_String) "module_qual",
  {     query__query__enum_name_ordered_module_qual_0 },
  {     query__query__enum_value_ordered_module_qual_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_module_qual_0
};

#line 3990 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0 = {
  (MR_String) "by_context",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 4005 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1 = {
  (MR_String) "by_name",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 4020 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 4027 "query.c"
static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

#line 4046 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2 = {
  (MR_String) "by_cost",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  query__query__field_types_order_criteria_0_2,
  NULL,
  query__query__field_locns_order_criteria_0_2,
  NULL
};

#line 4061 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 4067 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

#line 4072 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_order_criteria_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_order_criteria_0_1
  }
};

#line 4086 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 4093 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 4100 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_order_criteria_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____order_criteria_0_0_10001)),
  ((MR_Box) (query____Compare____order_criteria_0_0_10001)),
  (MR_String) "query",
  (MR_String) "order_criteria",
  {     query__query__du_name_ordered_order_criteria_0 },
  {     query__query__du_ptag_ordered_order_criteria_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_order_criteria_0
};

#line 4117 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

#line 4123 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

#line 4129 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 4135 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 4141 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4147 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_port_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____port_fields_0_0_10001)),
  ((MR_Box) (query____Compare____port_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "port_fields",
  {     query__query__enum_name_ordered_port_fields_0 },
  {     query__query__enum_value_ordered_port_fields_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_port_fields_0
};

#line 4164 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_box_tables_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_colour_column_groups_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_summarize_ho_call_sites_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_order_criteria_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_format_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_module_qual_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_items_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_developer_mode_0
};

#line 4180 "query.c"
static const MR_ConstString query__query__field_names_preferences_0_0[12] = {
  (MR_String) "pref_fields",
  (MR_String) "pref_box",
  (MR_String) "pref_colour",
  (MR_String) "pref_anc",
  (MR_String) "pref_proc_statics_per_rec_type",
  (MR_String) "pref_summarize",
  (MR_String) "pref_criteria",
  (MR_String) "pref_contour",
  (MR_String) "pref_time",
  (MR_String) "pref_module_qual",
  (MR_String) "pref_inactive",
  (MR_String) "pref_developer_mode"
};

#line 4196 "query.c"
static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
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
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 3,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 4260 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0 = {
  (MR_String) "preferences",
  (MR_Integer) 12,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_preferences_0_0,
  query__query__field_names_preferences_0_0,
  query__query__field_locns_preferences_0_0,
  NULL
};

#line 4275 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4280 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

#line 4289 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4294 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

#line 4299 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences",
  {     query__query__du_name_ordered_preferences_0 },
  {     query__query__du_ptag_ordered_preferences_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_0
};

#line 4316 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

#line 4321 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0 = {
  (MR_String) "given_pref",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  query__query__field_types_preferences_indication_0_0,
  NULL,
  NULL,
  NULL
};

#line 4336 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1 = {
  (MR_String) "default_pref",
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

#line 4351 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2 = {
  (MR_String) "all_pref",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 4366 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

#line 4372 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4377 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    query__query__du_stag_ordered_preferences_indication_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    query__query__du_stag_ordered_preferences_indication_0_1
  }
};

#line 4391 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4398 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4405 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_indication_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_indication_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_indication_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences_indication",
  {     query__query__du_name_ordered_preferences_indication_0 },
  {     query__query__du_ptag_ordered_preferences_indication_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_indication_0
};

#line 4422 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

#line 4427 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4434 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_resp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (query____Unify____resp_0_0_10001)),
  ((MR_Box) (query____Compare____resp_0_0_10001)),
  (MR_String) "query",
  (MR_String) "resp",
  {     &query__query__notag_functor_desc_resp_0 },
  {     &query__query__notag_functor_desc_resp_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_resp_0
};

#line 4451 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

#line 4457 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

#line 4463 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

#line 4469 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

#line 4475 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4481 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_summarize_ho_call_sites_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____summarize_ho_call_sites_0_0_10001)),
  ((MR_Box) (query____Compare____summarize_ho_call_sites_0_0_10001)),
  (MR_String) "query",
  (MR_String) "summarize_ho_call_sites",
  {     query__query__enum_name_ordered_summarize_ho_call_sites_0 },
  {     query__query__enum_value_ordered_summarize_ho_call_sites_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_summarize_ho_call_sites_0
};

#line 4498 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

#line 4504 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

#line 4510 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

#line 4516 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

#line 4522 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

#line 4528 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

#line 4534 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

#line 4544 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

#line 4554 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 4564 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_fields_0_0_10001)),
  ((MR_Box) (query____Compare____time_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_fields",
  {     query__query__enum_name_ordered_time_fields_0 },
  {     query__query__enum_value_ordered_time_fields_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_time_fields_0
};

#line 4581 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

#line 4587 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

#line 4593 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

#line 4599 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4606 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4613 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4620 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_format_0_0_10001)),
  ((MR_Box) (query____Compare____time_format_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_format",
  {     query__query__enum_name_ordered_time_format_0 },
  {     query__query__enum_value_ordered_time_format_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_time_format_0
};

#line 4637 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 4640 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4642 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4644 "query.c"
{
#line 4646 "query.c"
  {
#line 4648 "query.c"
    MR_bool query__succeeded;

#line 4651 "query.c"
    {
#line 4653 "query.c"
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4656 "query.c"
    return query__succeeded;
#line 4658 "query.c"
  }
#line 4660 "query.c"
}

#line 4663 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 4666 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4668 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4670 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4672 "query.c"
{
#line 4674 "query.c"
  {
#line 4676 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4679 "query.c"
    {
#line 4681 "query.c"
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4684 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4686 "query.c"
  }
#line 4688 "query.c"
}

#line 4691 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 4694 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4696 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4698 "query.c"
{
#line 4700 "query.c"
  {
#line 4702 "query.c"
    MR_bool query__succeeded;

#line 4705 "query.c"
    {
#line 4707 "query.c"
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4710 "query.c"
    return query__succeeded;
#line 4712 "query.c"
  }
#line 4714 "query.c"
}

#line 4717 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 4720 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4722 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4724 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4726 "query.c"
{
#line 4728 "query.c"
  {
#line 4730 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4733 "query.c"
    {
#line 4735 "query.c"
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4738 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4740 "query.c"
  }
#line 4742 "query.c"
}

#line 4745 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 4748 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4750 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4752 "query.c"
{
#line 4754 "query.c"
  {
#line 4756 "query.c"
    MR_bool query__succeeded;

#line 4759 "query.c"
    {
#line 4761 "query.c"
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4764 "query.c"
    return query__succeeded;
#line 4766 "query.c"
  }
#line 4768 "query.c"
}

#line 4771 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 4774 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4776 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4778 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4780 "query.c"
{
#line 4782 "query.c"
  {
#line 4784 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4787 "query.c"
    {
#line 4789 "query.c"
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4792 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4794 "query.c"
  }
#line 4796 "query.c"
}

#line 4799 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 4802 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4804 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4806 "query.c"
{
#line 4808 "query.c"
  {
#line 4810 "query.c"
    MR_bool query__succeeded;

#line 4813 "query.c"
    {
#line 4815 "query.c"
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4818 "query.c"
    return query__succeeded;
#line 4820 "query.c"
  }
#line 4822 "query.c"
}

#line 4825 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 4828 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4830 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4832 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4834 "query.c"
{
#line 4836 "query.c"
  {
#line 4838 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4841 "query.c"
    {
#line 4843 "query.c"
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4846 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4848 "query.c"
  }
#line 4850 "query.c"
}

#line 4853 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 4856 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4858 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4860 "query.c"
{
#line 4862 "query.c"
  {
#line 4864 "query.c"
    MR_bool query__succeeded;

#line 4867 "query.c"
    {
#line 4869 "query.c"
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4872 "query.c"
    return query__succeeded;
#line 4874 "query.c"
  }
#line 4876 "query.c"
}

#line 4879 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 4882 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4884 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4886 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4888 "query.c"
{
#line 4890 "query.c"
  {
#line 4892 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4895 "query.c"
    {
#line 4897 "query.c"
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4900 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4902 "query.c"
  }
#line 4904 "query.c"
}

#line 4907 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 4910 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4912 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4914 "query.c"
{
#line 4916 "query.c"
  {
#line 4918 "query.c"
    MR_bool query__succeeded;

#line 4921 "query.c"
    {
#line 4923 "query.c"
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4926 "query.c"
    return query__succeeded;
#line 4928 "query.c"
  }
#line 4930 "query.c"
}

#line 4933 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 4936 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4938 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4940 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4942 "query.c"
{
#line 4944 "query.c"
  {
#line 4946 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4949 "query.c"
    {
#line 4951 "query.c"
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4954 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4956 "query.c"
  }
#line 4958 "query.c"
}

#line 4961 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 4964 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4966 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4968 "query.c"
{
#line 4970 "query.c"
  {
#line 4972 "query.c"
    MR_bool query__succeeded;

#line 4975 "query.c"
    {
#line 4977 "query.c"
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4980 "query.c"
    return query__succeeded;
#line 4982 "query.c"
  }
#line 4984 "query.c"
}

#line 4987 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 4990 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4992 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4994 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4996 "query.c"
{
#line 4998 "query.c"
  {
#line 5000 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5003 "query.c"
    {
#line 5005 "query.c"
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5008 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5010 "query.c"
  }
#line 5012 "query.c"
}

#line 5015 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 5018 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5020 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5022 "query.c"
{
#line 5024 "query.c"
  {
#line 5026 "query.c"
    MR_bool query__succeeded;

#line 5029 "query.c"
    {
#line 5031 "query.c"
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5034 "query.c"
    return query__succeeded;
#line 5036 "query.c"
  }
#line 5038 "query.c"
}

#line 5041 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 5044 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5046 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5048 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5050 "query.c"
{
#line 5052 "query.c"
  {
#line 5054 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5057 "query.c"
    {
#line 5059 "query.c"
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5062 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5064 "query.c"
  }
#line 5066 "query.c"
}

#line 5069 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 5072 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5074 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5076 "query.c"
{
#line 5078 "query.c"
  {
#line 5080 "query.c"
    MR_bool query__succeeded;

#line 5083 "query.c"
    {
#line 5085 "query.c"
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5088 "query.c"
    return query__succeeded;
#line 5090 "query.c"
  }
#line 5092 "query.c"
}

#line 5095 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 5098 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5100 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5102 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5104 "query.c"
{
#line 5106 "query.c"
  {
#line 5108 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5111 "query.c"
    {
#line 5113 "query.c"
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5116 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5118 "query.c"
  }
#line 5120 "query.c"
}

#line 5123 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 5126 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5128 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5130 "query.c"
{
#line 5132 "query.c"
  {
#line 5134 "query.c"
    MR_bool query__succeeded;

#line 5137 "query.c"
    {
#line 5139 "query.c"
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5142 "query.c"
    return query__succeeded;
#line 5144 "query.c"
  }
#line 5146 "query.c"
}

#line 5149 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 5152 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5154 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5156 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5158 "query.c"
{
#line 5160 "query.c"
  {
#line 5162 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5165 "query.c"
    {
#line 5167 "query.c"
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5170 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5172 "query.c"
  }
#line 5174 "query.c"
}

#line 5177 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 5180 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5182 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5184 "query.c"
{
#line 5186 "query.c"
  {
#line 5188 "query.c"
    MR_bool query__succeeded;

#line 5191 "query.c"
    {
#line 5193 "query.c"
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5196 "query.c"
    return query__succeeded;
#line 5198 "query.c"
  }
#line 5200 "query.c"
}

#line 5203 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 5206 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5208 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5210 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5212 "query.c"
{
#line 5214 "query.c"
  {
#line 5216 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5219 "query.c"
    {
#line 5221 "query.c"
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5224 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5226 "query.c"
  }
#line 5228 "query.c"
}

#line 5231 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 5234 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5236 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5238 "query.c"
{
#line 5240 "query.c"
  {
#line 5242 "query.c"
    MR_bool query__succeeded;

#line 5245 "query.c"
    {
#line 5247 "query.c"
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5250 "query.c"
    return query__succeeded;
#line 5252 "query.c"
  }
#line 5254 "query.c"
}

#line 5257 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 5260 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5262 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5264 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5266 "query.c"
{
#line 5268 "query.c"
  {
#line 5270 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5273 "query.c"
    {
#line 5275 "query.c"
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5278 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5280 "query.c"
  }
#line 5282 "query.c"
}

#line 5285 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 5288 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5290 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5292 "query.c"
{
#line 5294 "query.c"
  {
#line 5296 "query.c"
    MR_bool query__succeeded;

#line 5299 "query.c"
    {
#line 5301 "query.c"
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5304 "query.c"
    return query__succeeded;
#line 5306 "query.c"
  }
#line 5308 "query.c"
}

#line 5311 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 5314 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5316 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5318 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5320 "query.c"
{
#line 5322 "query.c"
  {
#line 5324 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5327 "query.c"
    {
#line 5329 "query.c"
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5332 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5334 "query.c"
  }
#line 5336 "query.c"
}

#line 5339 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 5342 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5344 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5346 "query.c"
{
#line 5348 "query.c"
  {
#line 5350 "query.c"
    MR_bool query__succeeded;

#line 5353 "query.c"
    {
#line 5355 "query.c"
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5358 "query.c"
    return query__succeeded;
#line 5360 "query.c"
  }
#line 5362 "query.c"
}

#line 5365 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 5368 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5370 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5372 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5374 "query.c"
{
#line 5376 "query.c"
  {
#line 5378 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5381 "query.c"
    {
#line 5383 "query.c"
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5386 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5388 "query.c"
  }
#line 5390 "query.c"
}

#line 5393 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 5396 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5398 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5400 "query.c"
{
#line 5402 "query.c"
  {
#line 5404 "query.c"
    MR_bool query__succeeded;

#line 5407 "query.c"
    {
#line 5409 "query.c"
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5412 "query.c"
    return query__succeeded;
#line 5414 "query.c"
  }
#line 5416 "query.c"
}

#line 5419 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 5422 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5424 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5426 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5428 "query.c"
{
#line 5430 "query.c"
  {
#line 5432 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5435 "query.c"
    {
#line 5437 "query.c"
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5440 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5442 "query.c"
  }
#line 5444 "query.c"
}

#line 5447 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 5450 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5452 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5454 "query.c"
{
#line 5456 "query.c"
  {
#line 5458 "query.c"
    MR_bool query__succeeded;

#line 5461 "query.c"
    {
#line 5463 "query.c"
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5466 "query.c"
    return query__succeeded;
#line 5468 "query.c"
  }
#line 5470 "query.c"
}

#line 5473 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 5476 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5478 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5480 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5482 "query.c"
{
#line 5484 "query.c"
  {
#line 5486 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5489 "query.c"
    {
#line 5491 "query.c"
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5494 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5496 "query.c"
  }
#line 5498 "query.c"
}

#line 5501 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 5504 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5506 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5508 "query.c"
{
#line 5510 "query.c"
  {
#line 5512 "query.c"
    MR_bool query__succeeded;

#line 5515 "query.c"
    {
#line 5517 "query.c"
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5520 "query.c"
    return query__succeeded;
#line 5522 "query.c"
  }
#line 5524 "query.c"
}

#line 5527 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 5530 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5532 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5534 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5536 "query.c"
{
#line 5538 "query.c"
  {
#line 5540 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5543 "query.c"
    {
#line 5545 "query.c"
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5548 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5550 "query.c"
  }
#line 5552 "query.c"
}

#line 5555 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 5558 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5560 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5562 "query.c"
{
#line 5564 "query.c"
  {
#line 5566 "query.c"
    MR_bool query__succeeded;

#line 5569 "query.c"
    {
#line 5571 "query.c"
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5574 "query.c"
    return query__succeeded;
#line 5576 "query.c"
  }
#line 5578 "query.c"
}

#line 5581 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 5584 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5586 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5588 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5590 "query.c"
{
#line 5592 "query.c"
  {
#line 5594 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5597 "query.c"
    {
#line 5599 "query.c"
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5602 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5604 "query.c"
  }
#line 5606 "query.c"
}

#line 5609 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 5612 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5614 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5616 "query.c"
{
#line 5618 "query.c"
  {
#line 5620 "query.c"
    MR_bool query__succeeded;

#line 5623 "query.c"
    {
#line 5625 "query.c"
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5628 "query.c"
    return query__succeeded;
#line 5630 "query.c"
  }
#line 5632 "query.c"
}

#line 5635 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 5638 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5640 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5642 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5644 "query.c"
{
#line 5646 "query.c"
  {
#line 5648 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5651 "query.c"
    {
#line 5653 "query.c"
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5656 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5658 "query.c"
  }
#line 5660 "query.c"
}

#line 5663 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 5666 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5668 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5670 "query.c"
{
#line 5672 "query.c"
  {
#line 5674 "query.c"
    MR_bool query__succeeded;

#line 5677 "query.c"
    {
#line 5679 "query.c"
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5682 "query.c"
    return query__succeeded;
#line 5684 "query.c"
  }
#line 5686 "query.c"
}

#line 5689 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 5692 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5694 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5696 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5698 "query.c"
{
#line 5700 "query.c"
  {
#line 5702 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5705 "query.c"
    {
#line 5707 "query.c"
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5710 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5712 "query.c"
  }
#line 5714 "query.c"
}

#line 5717 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 5720 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5722 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5724 "query.c"
{
#line 5726 "query.c"
  {
#line 5728 "query.c"
    MR_bool query__succeeded;

#line 5731 "query.c"
    {
#line 5733 "query.c"
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5736 "query.c"
    return query__succeeded;
#line 5738 "query.c"
  }
#line 5740 "query.c"
}

#line 5743 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 5746 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5748 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5750 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5752 "query.c"
{
#line 5754 "query.c"
  {
#line 5756 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5759 "query.c"
    {
#line 5761 "query.c"
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5764 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5766 "query.c"
  }
#line 5768 "query.c"
}

#line 5771 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 5774 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5776 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5778 "query.c"
{
#line 5780 "query.c"
  {
#line 5782 "query.c"
    MR_bool query__succeeded;

#line 5785 "query.c"
    {
#line 5787 "query.c"
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5790 "query.c"
    return query__succeeded;
#line 5792 "query.c"
  }
#line 5794 "query.c"
}

#line 5797 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 5800 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5802 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5804 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5806 "query.c"
{
#line 5808 "query.c"
  {
#line 5810 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5813 "query.c"
    {
#line 5815 "query.c"
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5818 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5820 "query.c"
  }
#line 5822 "query.c"
}

#line 5825 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 5828 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5830 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5832 "query.c"
{
#line 5834 "query.c"
  {
#line 5836 "query.c"
    MR_bool query__succeeded;

#line 5839 "query.c"
    {
#line 5841 "query.c"
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5844 "query.c"
    return query__succeeded;
#line 5846 "query.c"
  }
#line 5848 "query.c"
}

#line 5851 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 5854 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5856 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5858 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5860 "query.c"
{
#line 5862 "query.c"
  {
#line 5864 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5867 "query.c"
    {
#line 5869 "query.c"
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5872 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5874 "query.c"
  }
#line 5876 "query.c"
}

#line 5879 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 5882 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5884 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5886 "query.c"
{
#line 5888 "query.c"
  {
#line 5890 "query.c"
    MR_bool query__succeeded;

#line 5893 "query.c"
    {
#line 5895 "query.c"
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5898 "query.c"
    return query__succeeded;
#line 5900 "query.c"
  }
#line 5902 "query.c"
}

#line 5905 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 5908 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5910 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5912 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5914 "query.c"
{
#line 5916 "query.c"
  {
#line 5918 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5921 "query.c"
    {
#line 5923 "query.c"
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5926 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5928 "query.c"
  }
#line 5930 "query.c"
}

#line 5933 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 5936 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5938 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5940 "query.c"
{
#line 5942 "query.c"
  {
#line 5944 "query.c"
    MR_bool query__succeeded;

#line 5947 "query.c"
    {
#line 5949 "query.c"
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5952 "query.c"
    return query__succeeded;
#line 5954 "query.c"
  }
#line 5956 "query.c"
}

#line 5959 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 5962 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5964 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5966 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5968 "query.c"
{
#line 5970 "query.c"
  {
#line 5972 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5975 "query.c"
    {
#line 5977 "query.c"
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5980 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5982 "query.c"
  }
#line 5984 "query.c"
}

#line 5987 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 5990 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5992 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5994 "query.c"
{
#line 5996 "query.c"
  {
#line 5998 "query.c"
    MR_bool query__succeeded;

#line 6001 "query.c"
    {
#line 6003 "query.c"
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 6006 "query.c"
    return query__succeeded;
#line 6008 "query.c"
  }
#line 6010 "query.c"
}

#line 6013 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 6016 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 6018 "query.c"
  MR_Box query__wrapper_arg_2,
#line 6020 "query.c"
  MR_Box query__wrapper_arg_3)
#line 6022 "query.c"
{
#line 6024 "query.c"
  {
#line 6026 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 6029 "query.c"
    {
#line 6031 "query.c"
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 6034 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 6036 "query.c"
  }
#line 6038 "query.c"
}

#line 6041 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 6044 "query.c"
  MR_Box query__wrapper_arg_1,
#line 6046 "query.c"
  MR_Box query__wrapper_arg_2)
#line 6048 "query.c"
{
#line 6050 "query.c"
  {
#line 6052 "query.c"
    MR_bool query__succeeded;

#line 6055 "query.c"
    {
#line 6057 "query.c"
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 6060 "query.c"
    return query__succeeded;
#line 6062 "query.c"
  }
#line 6064 "query.c"
}

#line 6067 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 6070 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 6072 "query.c"
  MR_Box query__wrapper_arg_2,
#line 6074 "query.c"
  MR_Box query__wrapper_arg_3)
#line 6076 "query.c"
{
#line 6078 "query.c"
  {
#line 6080 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 6083 "query.c"
    {
#line 6085 "query.c"
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 6088 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 6090 "query.c"
  }
#line 6092 "query.c"
}

#line 434 "query.m"
static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_String) "Cmd",
    MR_TABLE_STEP_GEN,
    (MR_Integer) -1
  },
  {
    (MR_String) "Deep",
    MR_TABLE_STEP_GEN_ADDR,
    (MR_Integer) -1
  }
};

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 434 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_DU,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    MR_TABLE_STATS_DETAIL_HASH,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

#line 434 "query.m"
static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {     (MR_Integer) 0 },
  {
    query__table_input_steps_for_create_and_memoize_report_3_p_0,
    NULL
  },
  {
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_call_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0
      }
    },
    {
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_answer_step_stats_for_create_and_memoize_report_3_p_0
      },
      {
        (MR_Integer) 0,
        (MR_Integer) 0,
        query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0
      }
    }
  },
  (MR_Integer) 0,
  NULL,
  (MR_Integer) 0,
  (MR_Integer) 0
};

#line 307 "query.m"
void MR_CALL 
query____Compare____time_format_0_0(
#line 307 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 307 "query.m"
  MR_Word query__HeadVar__2_2,
#line 307 "query.m"
  MR_Word query__HeadVar__3_3)
#line 307 "query.m"
{
#line 307 "query.m"
  {
#line 307 "query.m"
    MR_bool query__succeeded;
#line 307 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 307 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 307 "query.m"
    {
#line 307 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 307 "query.m"
  }
#line 307 "query.m"
}

#line 307 "query.m"
MR_bool MR_CALL 
query____Unify____time_format_0_0(
#line 307 "query.m"
  MR_Word query__HeadVar__2_1,
#line 307 "query.m"
  MR_Word query__HeadVar__2_2)
#line 307 "query.m"
{
#line 6385 "query.c"
  {
#line 6387 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6390 "query.c"
    return query__succeeded;
#line 6392 "query.c"
  }
#line 307 "query.m"
}

#line 246 "query.m"
void MR_CALL 
query____Compare____time_fields_0_0(
#line 246 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 246 "query.m"
  MR_Word query__HeadVar__2_2,
#line 246 "query.m"
  MR_Word query__HeadVar__3_3)
#line 246 "query.m"
{
#line 246 "query.m"
  {
#line 246 "query.m"
    MR_bool query__succeeded;
#line 246 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 246 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 246 "query.m"
    {
#line 246 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 246 "query.m"
  }
#line 246 "query.m"
}

#line 246 "query.m"
MR_bool MR_CALL 
query____Unify____time_fields_0_0(
#line 246 "query.m"
  MR_Word query__HeadVar__2_1,
#line 246 "query.m"
  MR_Word query__HeadVar__2_2)
#line 246 "query.m"
{
#line 6436 "query.c"
  {
#line 6438 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6441 "query.c"
    return query__succeeded;
#line 6443 "query.c"
  }
#line 246 "query.m"
}

#line 286 "query.m"
void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0(
#line 286 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 286 "query.m"
  MR_Word query__HeadVar__2_2,
#line 286 "query.m"
  MR_Word query__HeadVar__3_3)
#line 286 "query.m"
{
#line 286 "query.m"
  {
#line 286 "query.m"
    MR_bool query__succeeded;
#line 286 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 286 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 286 "query.m"
    {
#line 286 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 286 "query.m"
  }
#line 286 "query.m"
}

#line 286 "query.m"
MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0(
#line 286 "query.m"
  MR_Word query__HeadVar__2_1,
#line 286 "query.m"
  MR_Word query__HeadVar__2_2)
#line 286 "query.m"
{
#line 6487 "query.c"
  {
#line 6489 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6492 "query.c"
    return query__succeeded;
#line 6494 "query.c"
  }
#line 286 "query.m"
}

#line 70 "query.m"
void MR_CALL 
query____Compare____resp_0_0(
#line 70 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 70 "query.m"
  MR_Word query__HeadVar__2_2,
#line 70 "query.m"
  MR_Word query__HeadVar__3_3)
#line 70 "query.m"
{
#line 70 "query.m"
  {
#line 70 "query.m"
    MR_bool query__succeeded;
#line 70 "query.m"
    MR_Integer query__CastX_6 = (MR_Integer) query__HeadVar__2_2;
#line 70 "query.m"
    MR_Integer query__CastY_7 = (MR_Integer) query__HeadVar__3_3;

#line 70 "query.m"
    query__succeeded = (query__CastX_6 == query__CastY_7);
#line 70 "query.m"
    if (query__succeeded)
#line 6523 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 70 "query.m"
    else
#line 70 "query.m"
      {
#line 70 "query.m"
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;
#line 70 "query.m"
        MR_String query__V_5_5 = (MR_String) query__HeadVar__3_3;

#line 70 "query.m"
        {
#line 70 "query.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(query__HeadVar__1_1, query__V_4_4, query__V_5_5);
        }
#line 70 "query.m"
      }
#line 70 "query.m"
  }
#line 70 "query.m"
}

#line 70 "query.m"
MR_bool MR_CALL 
query____Unify____resp_0_0(
#line 70 "query.m"
  MR_Word query__HeadVar__1_1,
#line 70 "query.m"
  MR_Word query__HeadVar__2_2)
#line 70 "query.m"
{
#line 70 "query.m"
  {
#line 70 "query.m"
    MR_bool query__succeeded;
#line 70 "query.m"
    MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 70 "query.m"
    MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 70 "query.m"
    query__succeeded = (query__CastX_5 == query__CastY_6);
#line 70 "query.m"
    if (query__succeeded)
#line 70 "query.m"
      query__succeeded = MR_TRUE;
#line 70 "query.m"
    else
#line 70 "query.m"
      {
#line 70 "query.m"
        MR_String query__V_3_3 = (MR_String) query__HeadVar__1_1;
#line 70 "query.m"
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;

#line 6579 "query.c"
        query__succeeded = (strcmp(query__V_3_3, query__V_4_4) == 0);
#line 70 "query.m"
      }
#line 70 "query.m"
    return query__succeeded;
#line 70 "query.m"
  }
#line 70 "query.m"
}

#line 237 "query.m"
void MR_CALL 
query____Compare____preferences_indication_0_0(
#line 237 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 237 "query.m"
  MR_Word query__HeadVar__2_2,
#line 237 "query.m"
  MR_Word query__HeadVar__3_3)
#line 237 "query.m"
{
#line 237 "query.m"
  {
#line 237 "query.m"
    MR_bool query__succeeded;
#line 237 "query.m"
    MR_Integer query__CastX_10 = (MR_Integer) query__HeadVar__2_2;
#line 237 "query.m"
    MR_Integer query__CastY_11 = (MR_Integer) query__HeadVar__3_3;

#line 237 "query.m"
    query__succeeded = (query__CastX_10 == query__CastY_11);
#line 237 "query.m"
    if (query__succeeded)
#line 6614 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
    else
#line 237 "query.m"
#line 237 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
#line 237 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
        case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
          switch (MR_unmkbody(query__HeadVar__2_2)) {
#line 237 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
            case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 237 "query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
                case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 237 "query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
                    case (MR_Integer) 0:
#line 237 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
                      break;
#line 237 "query.m"
                    case (MR_Integer) 1:
#line 237 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
                      break;
#line 237 "query.m"
                  }
#line 237 "query.m"
                  break;
#line 237 "query.m"
                case (MR_Integer) 1:
#line 6662 "query.c"
                  *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
                  break;
#line 237 "query.m"
              }
#line 237 "query.m"
              break;
#line 237 "query.m"
            case (MR_Integer) 1:
#line 237 "query.m"
#line 237 "query.m"
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 237 "query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
                case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 237 "query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
                    case (MR_Integer) 0:
#line 237 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
                      break;
#line 237 "query.m"
                    case (MR_Integer) 1:
#line 237 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
                      break;
#line 237 "query.m"
                  }
#line 237 "query.m"
                  break;
#line 237 "query.m"
                case (MR_Integer) 1:
#line 6702 "query.c"
                  *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
                  break;
#line 237 "query.m"
              }
#line 237 "query.m"
              break;
#line 237 "query.m"
          }
#line 237 "query.m"
          break;
#line 237 "query.m"
        case (MR_Integer) 1:
#line 237 "query.m"
          {
#line 237 "query.m"
            MR_Word query__V_13_13 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);

#line 237 "query.m"
#line 237 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 237 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
              case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
                switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 237 "query.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
                  case (MR_Integer) 0:
#line 6735 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
                    break;
#line 237 "query.m"
                  case (MR_Integer) 1:
#line 6741 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
                    break;
#line 237 "query.m"
                }
#line 237 "query.m"
                break;
#line 237 "query.m"
              case (MR_Integer) 1:
#line 237 "query.m"
                {
#line 237 "query.m"
                  MR_Word query__V_5_5 = (MR_Word) MR_body(((MR_Word) query__HeadVar__3_3), (MR_Integer) 1);

#line 237 "query.m"
                  {
#line 237 "query.m"
                    query____Compare____preferences_0_0(query__HeadVar__1_1, query__V_13_13, query__V_5_5);
                  }
#line 237 "query.m"
                }
#line 237 "query.m"
                break;
#line 237 "query.m"
            }
#line 237 "query.m"
          }
#line 237 "query.m"
          break;
#line 237 "query.m"
      }
#line 237 "query.m"
  }
#line 237 "query.m"
}

#line 237 "query.m"
MR_bool MR_CALL 
query____Unify____preferences_indication_0_0(
#line 237 "query.m"
  MR_Word query__HeadVar__1_1,
#line 237 "query.m"
  MR_Word query__HeadVar__2_2)
#line 237 "query.m"
{
#line 237 "query.m"
  {
#line 237 "query.m"
    MR_bool query__succeeded;
#line 237 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 237 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 237 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 237 "query.m"
    if (query__succeeded)
#line 237 "query.m"
      query__succeeded = MR_TRUE;
#line 237 "query.m"
    else
#line 237 "query.m"
#line 237 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 237 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
        case (MR_Integer) 0:
#line 237 "query.m"
#line 237 "query.m"
          switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 237 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 237 "query.m"
            case (MR_Integer) 0:
#line 237 "query.m"
              {
#line 237 "query.m"
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 237 "query.m"
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 237 "query.m"
                query__succeeded = (query__CastY_6 == query__CastX_5);
#line 237 "query.m"
              }
#line 237 "query.m"
              break;
#line 237 "query.m"
            case (MR_Integer) 1:
#line 237 "query.m"
              {
#line 237 "query.m"
                MR_Integer query__CastX_7 = (MR_Integer) query__HeadVar__1_1;
#line 237 "query.m"
                MR_Integer query__CastY_8 = (MR_Integer) query__HeadVar__2_2;

#line 237 "query.m"
                query__succeeded = (query__CastY_8 == query__CastX_7);
#line 237 "query.m"
              }
#line 237 "query.m"
              break;
#line 237 "query.m"
          }
#line 237 "query.m"
          break;
#line 237 "query.m"
        case (MR_Integer) 1:
#line 237 "query.m"
          {
#line 237 "query.m"
            MR_Word query__V_3_3 = (MR_Word) MR_body(((MR_Word) query__HeadVar__1_1), (MR_Integer) 1);
#line 237 "query.m"
            MR_Word query__V_4_4;

#line 237 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 237 "query.m"
            if (query__succeeded)
#line 237 "query.m"
              {
#line 237 "query.m"
                query__V_4_4 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);
#line 6867 "query.c"
                {
#line 6869 "query.c"
                  query__succeeded = query____Unify____preferences_0_0(query__V_3_3, query__V_4_4);
                }
#line 237 "query.m"
              }
#line 237 "query.m"
          }
#line 237 "query.m"
          break;
#line 237 "query.m"
      }
#line 237 "query.m"
    return query__succeeded;
#line 237 "query.m"
  }
#line 237 "query.m"
}

#line 189 "query.m"
void MR_CALL 
query____Compare____preferences_0_0(
#line 189 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 189 "query.m"
  MR_Word query__HeadVar__2_2,
#line 189 "query.m"
  MR_Word query__HeadVar__3_3)
#line 189 "query.m"
{
#line 189 "query.m"
  {
#line 189 "query.m"
    MR_bool query__succeeded;
#line 189 "query.m"
    MR_Integer query__CastX_39 = (MR_Integer) query__HeadVar__2_2;
#line 189 "query.m"
    MR_Integer query__CastY_40 = (MR_Integer) query__HeadVar__3_3;

#line 189 "query.m"
    query__succeeded = (query__CastX_39 == query__CastY_40);
#line 189 "query.m"
    if (query__succeeded)
#line 6911 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 189 "query.m"
    else
#line 189 "query.m"
      {
#line 189 "query.m"
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 189 "query.m"
        MR_Word query__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 189 "query.m"
        MR_Integer query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
#line 189 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
#line 189 "query.m"
        MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
#line 189 "query.m"
        MR_Word query__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
#line 189 "query.m"
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));
#line 189 "query.m"
        MR_Word query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 189 "query.m"
        MR_Word query__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
#line 189 "query.m"
        MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 3)));
#line 189 "query.m"
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 4)));
#line 189 "query.m"
        MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 5)));
#line 189 "query.m"
        MR_Word query__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 7)));
#line 189 "query.m"
        MR_Word query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 8)));
#line 189 "query.m"
        MR_Word query__V_28_28;

#line 189 "query.m"
        {
#line 189 "query.m"
          query____Compare____fields_0_0(&query__V_28_28, query__V_4_4, query__V_16_16);
        }
#line 6973 "query.c"
        query__succeeded = (query__V_28_28 == (MR_Integer) 0);
#line 189 "query.m"
        query__succeeded = !(query__succeeded);
#line 189 "query.m"
        if (query__succeeded)
#line 189 "query.m"
          *query__HeadVar__1_1 = query__V_28_28;
#line 189 "query.m"
        else
#line 189 "query.m"
          {
#line 189 "query.m"
            MR_Word query__V_29_29;
#line 189 "query.m"
            MR_Integer query__V_53_53 = (MR_Integer) query__V_5_5;
#line 189 "query.m"
            MR_Integer query__V_54_54 = (MR_Integer) query__V_17_17;

#line 189 "query.m"
            {
#line 189 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_53_53, query__V_54_54);
            }
#line 6997 "query.c"
            query__succeeded = (query__V_29_29 == (MR_Integer) 0);
#line 189 "query.m"
            query__succeeded = !(query__succeeded);
#line 189 "query.m"
            if (query__succeeded)
#line 189 "query.m"
              *query__HeadVar__1_1 = query__V_29_29;
#line 189 "query.m"
            else
#line 189 "query.m"
              {
#line 189 "query.m"
                MR_Word query__V_30_30;
#line 189 "query.m"
                MR_Integer query__V_55_55 = (MR_Integer) query__V_6_6;
#line 189 "query.m"
                MR_Integer query__V_56_56 = (MR_Integer) query__V_18_18;

#line 189 "query.m"
                {
#line 189 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_55_55, query__V_56_56);
                }
#line 7021 "query.c"
                query__succeeded = (query__V_30_30 == (MR_Integer) 0);
#line 189 "query.m"
                query__succeeded = !(query__succeeded);
#line 189 "query.m"
                if (query__succeeded)
#line 189 "query.m"
                  *query__HeadVar__1_1 = query__V_30_30;
#line 189 "query.m"
                else
#line 189 "query.m"
                  {
#line 189 "query.m"
                    MR_Word query__V_31_31;

#line 189 "query.m"
                    {
#line 189 "query.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[0], &query__V_31_31, ((MR_Box) (query__V_7_7)), ((MR_Box) (query__V_19_19)));
                    }
#line 7041 "query.c"
                    query__succeeded = (query__V_31_31 == (MR_Integer) 0);
#line 189 "query.m"
                    query__succeeded = !(query__succeeded);
#line 189 "query.m"
                    if (query__succeeded)
#line 189 "query.m"
                      *query__HeadVar__1_1 = query__V_31_31;
#line 189 "query.m"
                    else
#line 189 "query.m"
                      {
#line 189 "query.m"
                        MR_Word query__V_32_32;

#line 189 "query.m"
                        {
#line 189 "query.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_32_32, query__V_8_8, query__V_20_20);
                        }
#line 7061 "query.c"
                        query__succeeded = (query__V_32_32 == (MR_Integer) 0);
#line 189 "query.m"
                        query__succeeded = !(query__succeeded);
#line 189 "query.m"
                        if (query__succeeded)
#line 189 "query.m"
                          *query__HeadVar__1_1 = query__V_32_32;
#line 189 "query.m"
                        else
#line 189 "query.m"
                          {
#line 189 "query.m"
                            MR_Word query__V_33_33;
#line 189 "query.m"
                            MR_Integer query__V_57_57 = (MR_Integer) query__V_9_9;
#line 189 "query.m"
                            MR_Integer query__V_58_58 = (MR_Integer) query__V_21_21;

#line 189 "query.m"
                            {
#line 189 "query.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_33_33, query__V_57_57, query__V_58_58);
                            }
#line 7085 "query.c"
                            query__succeeded = (query__V_33_33 == (MR_Integer) 0);
#line 189 "query.m"
                            query__succeeded = !(query__succeeded);
#line 189 "query.m"
                            if (query__succeeded)
#line 189 "query.m"
                              *query__HeadVar__1_1 = query__V_33_33;
#line 189 "query.m"
                            else
#line 189 "query.m"
                              {
#line 189 "query.m"
                                MR_Word query__V_34_34;

#line 189 "query.m"
                                {
#line 189 "query.m"
                                  query____Compare____order_criteria_0_0(&query__V_34_34, query__V_10_10, query__V_22_22);
                                }
#line 7105 "query.c"
                                query__succeeded = (query__V_34_34 == (MR_Integer) 0);
#line 189 "query.m"
                                query__succeeded = !(query__succeeded);
#line 189 "query.m"
                                if (query__succeeded)
#line 189 "query.m"
                                  *query__HeadVar__1_1 = query__V_34_34;
#line 189 "query.m"
                                else
#line 189 "query.m"
                                  {
#line 189 "query.m"
                                    MR_Word query__V_35_35;
#line 189 "query.m"
                                    MR_Integer query__V_59_59 = (MR_Integer) query__V_11_11;
#line 189 "query.m"
                                    MR_Integer query__V_60_60 = (MR_Integer) query__V_23_23;

#line 189 "query.m"
                                    {
#line 189 "query.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_35_35, query__V_59_59, query__V_60_60);
                                    }
#line 7129 "query.c"
                                    query__succeeded = (query__V_35_35 == (MR_Integer) 0);
#line 189 "query.m"
                                    query__succeeded = !(query__succeeded);
#line 189 "query.m"
                                    if (query__succeeded)
#line 189 "query.m"
                                      *query__HeadVar__1_1 = query__V_35_35;
#line 189 "query.m"
                                    else
#line 189 "query.m"
                                      {
#line 189 "query.m"
                                        MR_Word query__V_36_36;
#line 189 "query.m"
                                        MR_Integer query__V_61_61 = (MR_Integer) query__V_12_12;
#line 189 "query.m"
                                        MR_Integer query__V_62_62 = (MR_Integer) query__V_24_24;

#line 189 "query.m"
                                        {
#line 189 "query.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_36_36, query__V_61_61, query__V_62_62);
                                        }
#line 7153 "query.c"
                                        query__succeeded = (query__V_36_36 == (MR_Integer) 0);
#line 189 "query.m"
                                        query__succeeded = !(query__succeeded);
#line 189 "query.m"
                                        if (query__succeeded)
#line 189 "query.m"
                                          *query__HeadVar__1_1 = query__V_36_36;
#line 189 "query.m"
                                        else
#line 189 "query.m"
                                          {
#line 189 "query.m"
                                            MR_Word query__V_37_37;
#line 189 "query.m"
                                            MR_Integer query__V_63_63 = (MR_Integer) query__V_13_13;
#line 189 "query.m"
                                            MR_Integer query__V_64_64 = (MR_Integer) query__V_25_25;

#line 189 "query.m"
                                            {
#line 189 "query.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_37_37, query__V_63_63, query__V_64_64);
                                            }
#line 7177 "query.c"
                                            query__succeeded = (query__V_37_37 == (MR_Integer) 0);
#line 189 "query.m"
                                            query__succeeded = !(query__succeeded);
#line 189 "query.m"
                                            if (query__succeeded)
#line 189 "query.m"
                                              *query__HeadVar__1_1 = query__V_37_37;
#line 189 "query.m"
                                            else
#line 189 "query.m"
                                              {
#line 189 "query.m"
                                                MR_Word query__V_38_38;

#line 189 "query.m"
                                                {
#line 189 "query.m"
                                                  query____Compare____inactive_items_0_0(&query__V_38_38, query__V_14_14, query__V_26_26);
                                                }
#line 7197 "query.c"
                                                query__succeeded = (query__V_38_38 == (MR_Integer) 0);
#line 189 "query.m"
                                                query__succeeded = !(query__succeeded);
#line 189 "query.m"
                                                if (query__succeeded)
#line 189 "query.m"
                                                  *query__HeadVar__1_1 = query__V_38_38;
#line 189 "query.m"
                                                else
#line 189 "query.m"
                                                  {
#line 189 "query.m"
                                                    MR_Integer query__V_65_65 = (MR_Integer) query__V_15_15;
#line 189 "query.m"
                                                    MR_Integer query__V_66_66 = (MR_Integer) query__V_27_27;

#line 189 "query.m"
                                                    {
#line 189 "query.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_65_65, query__V_66_66);
                                                    }
#line 189 "query.m"
                                                  }
#line 189 "query.m"
                                              }
#line 189 "query.m"
                                          }
#line 189 "query.m"
                                      }
#line 189 "query.m"
                                  }
#line 189 "query.m"
                              }
#line 189 "query.m"
                          }
#line 189 "query.m"
                      }
#line 189 "query.m"
                  }
#line 189 "query.m"
              }
#line 189 "query.m"
          }
#line 189 "query.m"
      }
#line 189 "query.m"
  }
#line 189 "query.m"
}

#line 189 "query.m"
MR_bool MR_CALL 
query____Unify____preferences_0_0(
#line 189 "query.m"
  MR_Word query__HeadVar__1_1,
#line 189 "query.m"
  MR_Word query__HeadVar__2_2)
#line 189 "query.m"
{
#line 189 "query.m"
  {
#line 189 "query.m"
    MR_bool query__succeeded;
#line 189 "query.m"
    MR_Integer query__CastX_27 = (MR_Integer) query__HeadVar__1_1;
#line 189 "query.m"
    MR_Integer query__CastY_28 = (MR_Integer) query__HeadVar__2_2;

#line 189 "query.m"
    query__succeeded = (query__CastX_27 == query__CastY_28);
#line 189 "query.m"
    if (query__succeeded)
#line 189 "query.m"
      query__succeeded = MR_TRUE;
#line 189 "query.m"
    else
#line 189 "query.m"
      {
#line 189 "query.m"
        MR_Word query__TypeInfo_29_29;
#line 189 "query.m"
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 189 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
#line 189 "query.m"
        MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 3)));
#line 189 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 4)));
#line 189 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 5)));
#line 189 "query.m"
        MR_Word query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 7)));
#line 189 "query.m"
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 8)));
#line 189 "query.m"
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 189 "query.m"
        MR_Word query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 189 "query.m"
        MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
#line 189 "query.m"
        MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
#line 189 "query.m"
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
#line 189 "query.m"
        MR_Word query__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 189 "query.m"
        MR_Word query__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 189 "query.m"
        MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
#line 189 "query.m"
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));

#line 7327 "query.c"
        {
#line 7329 "query.c"
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
#line 189 "query.m"
        if (query__succeeded)
#line 189 "query.m"
          {
#line 7336 "query.c"
            query__succeeded = (query__V_4_4 == query__V_16_16);
#line 189 "query.m"
            if (query__succeeded)
#line 189 "query.m"
              {
#line 7342 "query.c"
                query__succeeded = (query__V_5_5 == query__V_17_17);
#line 189 "query.m"
                if (query__succeeded)
#line 189 "query.m"
                  {
#line 7348 "query.c"
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
#line 7350 "query.c"
                    {
#line 7352 "query.c"
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
#line 189 "query.m"
                    if (query__succeeded)
#line 189 "query.m"
                      {
#line 7359 "query.c"
                        query__succeeded = (query__V_7_7 == query__V_19_19);
#line 189 "query.m"
                        if (query__succeeded)
#line 189 "query.m"
                          {
#line 7365 "query.c"
                            query__succeeded = (query__V_8_8 == query__V_20_20);
#line 189 "query.m"
                            if (query__succeeded)
#line 189 "query.m"
                              {
#line 7371 "query.c"
                                {
#line 7373 "query.c"
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
#line 189 "query.m"
                                if (query__succeeded)
#line 189 "query.m"
                                  {
#line 7380 "query.c"
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
#line 189 "query.m"
                                    if (query__succeeded)
#line 189 "query.m"
                                      {
#line 7386 "query.c"
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
#line 189 "query.m"
                                        if (query__succeeded)
#line 189 "query.m"
                                          {
#line 7392 "query.c"
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
#line 189 "query.m"
                                            if (query__succeeded)
#line 189 "query.m"
                                              {
#line 7398 "query.c"
                                                {
#line 7400 "query.c"
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
#line 189 "query.m"
                                                if (query__succeeded)
#line 7405 "query.c"
                                                  query__succeeded = (query__V_14_14 == query__V_26_26);
#line 189 "query.m"
                                              }
#line 189 "query.m"
                                          }
#line 189 "query.m"
                                      }
#line 189 "query.m"
                                  }
#line 189 "query.m"
                              }
#line 189 "query.m"
                          }
#line 189 "query.m"
                      }
#line 189 "query.m"
                  }
#line 189 "query.m"
              }
#line 189 "query.m"
          }
#line 189 "query.m"
      }
#line 189 "query.m"
    return query__succeeded;
#line 189 "query.m"
  }
#line 189 "query.m"
}

#line 242 "query.m"
void MR_CALL 
query____Compare____port_fields_0_0(
#line 242 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 242 "query.m"
  MR_Word query__HeadVar__2_2,
#line 242 "query.m"
  MR_Word query__HeadVar__3_3)
#line 242 "query.m"
{
#line 242 "query.m"
  {
#line 242 "query.m"
    MR_bool query__succeeded;
#line 242 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 242 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 242 "query.m"
    {
#line 242 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 242 "query.m"
  }
#line 242 "query.m"
}

#line 242 "query.m"
MR_bool MR_CALL 
query____Unify____port_fields_0_0(
#line 242 "query.m"
  MR_Word query__HeadVar__2_1,
#line 242 "query.m"
  MR_Word query__HeadVar__2_2)
#line 242 "query.m"
{
#line 7475 "query.c"
  {
#line 7477 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7480 "query.c"
    return query__succeeded;
#line 7482 "query.c"
  }
#line 242 "query.m"
}

#line 290 "query.m"
void MR_CALL 
query____Compare____order_criteria_0_0(
#line 290 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 290 "query.m"
  MR_Word query__HeadVar__2_2,
#line 290 "query.m"
  MR_Word query__HeadVar__3_3)
#line 290 "query.m"
{
#line 290 "query.m"
  {
#line 290 "query.m"
    MR_bool query__succeeded;
#line 290 "query.m"
    MR_Integer query__CastX_24 = (MR_Integer) query__HeadVar__2_2;
#line 290 "query.m"
    MR_Integer query__CastY_25 = (MR_Integer) query__HeadVar__3_3;

#line 290 "query.m"
    query__succeeded = (query__CastX_24 == query__CastY_25);
#line 290 "query.m"
    if (query__succeeded)
#line 7511 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
    else
#line 290 "query.m"
#line 290 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
#line 290 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
        case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
          switch (MR_unmkbody(query__HeadVar__2_2)) {
#line 290 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
            case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 290 "query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
                case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 290 "query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
                    case (MR_Integer) 0:
#line 290 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
                      break;
#line 290 "query.m"
                    case (MR_Integer) 1:
#line 290 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
                      break;
#line 290 "query.m"
                  }
#line 290 "query.m"
                  break;
#line 290 "query.m"
                case (MR_Integer) 1:
#line 7559 "query.c"
                  *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
                  break;
#line 290 "query.m"
              }
#line 290 "query.m"
              break;
#line 290 "query.m"
            case (MR_Integer) 1:
#line 290 "query.m"
#line 290 "query.m"
              switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 290 "query.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
                case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
                  switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 290 "query.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
                    case (MR_Integer) 0:
#line 290 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
                      break;
#line 290 "query.m"
                    case (MR_Integer) 1:
#line 290 "query.m"
                      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
                      break;
#line 290 "query.m"
                  }
#line 290 "query.m"
                  break;
#line 290 "query.m"
                case (MR_Integer) 1:
#line 7599 "query.c"
                  *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
                  break;
#line 290 "query.m"
              }
#line 290 "query.m"
              break;
#line 290 "query.m"
          }
#line 290 "query.m"
          break;
#line 290 "query.m"
        case (MR_Integer) 1:
#line 290 "query.m"
          {
#line 290 "query.m"
            MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);

#line 290 "query.m"
#line 290 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 290 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
              case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
                switch (MR_unmkbody(query__HeadVar__3_3)) {
#line 290 "query.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
                  case (MR_Integer) 0:
#line 7636 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
                    break;
#line 290 "query.m"
                  case (MR_Integer) 1:
#line 7642 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
                    break;
#line 290 "query.m"
                }
#line 290 "query.m"
                break;
#line 290 "query.m"
              case (MR_Integer) 1:
#line 290 "query.m"
                {
#line 290 "query.m"
                  MR_Word query__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 290 "query.m"
                  MR_Word query__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "query.m"
                  MR_Word query__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 290 "query.m"
                  MR_Word query__V_22_22;
#line 290 "query.m"
                  MR_Integer query__V_32_32 = (MR_Integer) query__V_31_31;
#line 290 "query.m"
                  MR_Integer query__V_33_33 = (MR_Integer) query__V_19_19;

#line 290 "query.m"
                  {
#line 290 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_22_22, query__V_32_32, query__V_33_33);
                  }
#line 7672 "query.c"
                  query__succeeded = (query__V_22_22 == (MR_Integer) 0);
#line 290 "query.m"
                  query__succeeded = !(query__succeeded);
#line 290 "query.m"
                  if (query__succeeded)
#line 290 "query.m"
                    *query__HeadVar__1_1 = query__V_22_22;
#line 290 "query.m"
                  else
#line 290 "query.m"
                    {
#line 290 "query.m"
                      MR_Word query__V_23_23;
#line 290 "query.m"
                      MR_Integer query__V_34_34 = (MR_Integer) query__V_30_30;
#line 290 "query.m"
                      MR_Integer query__V_35_35 = (MR_Integer) query__V_20_20;

#line 290 "query.m"
                      {
#line 290 "query.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_23_23, query__V_34_34, query__V_35_35);
                      }
#line 7696 "query.c"
                      query__succeeded = (query__V_23_23 == (MR_Integer) 0);
#line 290 "query.m"
                      query__succeeded = !(query__succeeded);
#line 290 "query.m"
                      if (query__succeeded)
#line 290 "query.m"
                        *query__HeadVar__1_1 = query__V_23_23;
#line 290 "query.m"
                      else
#line 290 "query.m"
                        {
#line 290 "query.m"
                          MR_Integer query__V_36_36 = (MR_Integer) query__V_29_29;
#line 290 "query.m"
                          MR_Integer query__V_37_37 = (MR_Integer) query__V_21_21;

#line 290 "query.m"
                          {
#line 290 "query.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_36_36, query__V_37_37);
                          }
#line 290 "query.m"
                        }
#line 290 "query.m"
                    }
#line 290 "query.m"
                }
#line 290 "query.m"
                break;
#line 290 "query.m"
            }
#line 290 "query.m"
          }
#line 290 "query.m"
          break;
#line 290 "query.m"
      }
#line 290 "query.m"
  }
#line 290 "query.m"
}

#line 290 "query.m"
MR_bool MR_CALL 
query____Unify____order_criteria_0_0(
#line 290 "query.m"
  MR_Word query__HeadVar__1_1,
#line 290 "query.m"
  MR_Word query__HeadVar__2_2)
#line 290 "query.m"
{
#line 290 "query.m"
  {
#line 290 "query.m"
    MR_bool query__succeeded;
#line 290 "query.m"
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
#line 290 "query.m"
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

#line 290 "query.m"
    query__succeeded = (query__CastX_13 == query__CastY_14);
#line 290 "query.m"
    if (query__succeeded)
#line 290 "query.m"
      query__succeeded = MR_TRUE;
#line 290 "query.m"
    else
#line 290 "query.m"
#line 290 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 290 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
        case (MR_Integer) 0:
#line 290 "query.m"
#line 290 "query.m"
          switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 290 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 290 "query.m"
            case (MR_Integer) 0:
#line 290 "query.m"
              {
#line 290 "query.m"
                MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 290 "query.m"
                MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 290 "query.m"
                query__succeeded = (query__CastY_4 == query__CastX_3);
#line 290 "query.m"
              }
#line 290 "query.m"
              break;
#line 290 "query.m"
            case (MR_Integer) 1:
#line 290 "query.m"
              {
#line 290 "query.m"
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 290 "query.m"
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 290 "query.m"
                query__succeeded = (query__CastY_6 == query__CastX_5);
#line 290 "query.m"
              }
#line 290 "query.m"
              break;
#line 290 "query.m"
          }
#line 290 "query.m"
          break;
#line 290 "query.m"
        case (MR_Integer) 1:
#line 290 "query.m"
          {
#line 290 "query.m"
            MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 290 "query.m"
            MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_10_10;
#line 290 "query.m"
            MR_Word query__V_11_11;
#line 290 "query.m"
            MR_Word query__V_12_12;

#line 290 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 290 "query.m"
            if (query__succeeded)
#line 290 "query.m"
              {
#line 290 "query.m"
                query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 290 "query.m"
                query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "query.m"
                query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 7840 "query.c"
                query__succeeded = (query__V_7_7 == query__V_10_10);
#line 290 "query.m"
                if (query__succeeded)
#line 290 "query.m"
                  {
#line 7846 "query.c"
                    query__succeeded = (query__V_8_8 == query__V_11_11);
#line 290 "query.m"
                    if (query__succeeded)
#line 7850 "query.c"
                      query__succeeded = (query__V_9_9 == query__V_12_12);
#line 290 "query.m"
                  }
#line 290 "query.m"
              }
#line 290 "query.m"
          }
#line 290 "query.m"
          break;
#line 290 "query.m"
      }
#line 290 "query.m"
    return query__succeeded;
#line 290 "query.m"
  }
#line 290 "query.m"
}

#line 312 "query.m"
void MR_CALL 
query____Compare____module_qual_0_0(
#line 312 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 312 "query.m"
  MR_Word query__HeadVar__2_2,
#line 312 "query.m"
  MR_Word query__HeadVar__3_3)
#line 312 "query.m"
{
#line 312 "query.m"
  {
#line 312 "query.m"
    MR_bool query__succeeded;
#line 312 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 312 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 312 "query.m"
    {
#line 312 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 312 "query.m"
  }
#line 312 "query.m"
}

#line 312 "query.m"
MR_bool MR_CALL 
query____Unify____module_qual_0_0(
#line 312 "query.m"
  MR_Word query__HeadVar__2_1,
#line 312 "query.m"
  MR_Word query__HeadVar__2_2)
#line 312 "query.m"
{
#line 7908 "query.c"
  {
#line 7910 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7913 "query.c"
    return query__succeeded;
#line 7915 "query.c"
  }
#line 312 "query.m"
}

#line 264 "query.m"
void MR_CALL 
query____Compare____memory_fields_0_0(
#line 264 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 264 "query.m"
  MR_Word query__HeadVar__2_2,
#line 264 "query.m"
  MR_Word query__HeadVar__3_3)
#line 264 "query.m"
{
#line 264 "query.m"
  {
#line 264 "query.m"
    MR_bool query__succeeded;
#line 264 "query.m"
    MR_Integer query__CastX_16 = (MR_Integer) query__HeadVar__2_2;
#line 264 "query.m"
    MR_Integer query__CastY_17 = (MR_Integer) query__HeadVar__3_3;

#line 264 "query.m"
    query__succeeded = (query__CastX_16 == query__CastY_17);
#line 264 "query.m"
    if (query__succeeded)
#line 7944 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "query.m"
    else
#line 264 "query.m"
#line 264 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
#line 264 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 264 "query.m"
        case (MR_Integer) 0:
#line 264 "query.m"
#line 264 "query.m"
          switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 264 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 264 "query.m"
            case (MR_Integer) 0:
#line 264 "query.m"
              *query__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "query.m"
              break;
#line 264 "query.m"
            case (MR_Integer) 1:
#line 7968 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
              break;
#line 264 "query.m"
            case (MR_Integer) 2:
#line 7974 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
              break;
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
        case (MR_Integer) 1:
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "query.m"
#line 264 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 264 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "query.m"
              case (MR_Integer) 0:
#line 7996 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 1:
#line 264 "query.m"
                {
#line 264 "query.m"
                  MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "query.m"
                  MR_Integer query__V_22_22 = (MR_Integer) query__V_20_20;
#line 264 "query.m"
                  MR_Integer query__V_23_23 = (MR_Integer) query__V_8_8;

#line 264 "query.m"
                  {
#line 264 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_22_22, query__V_23_23);
                  }
#line 264 "query.m"
                }
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 2:
#line 8022 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
                break;
#line 264 "query.m"
            }
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
        case (MR_Integer) 2:
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "query.m"
#line 264 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 264 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 264 "query.m"
              case (MR_Integer) 0:
#line 8046 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 1:
#line 8052 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 2:
#line 264 "query.m"
                {
#line 264 "query.m"
                  MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
#line 264 "query.m"
                  MR_Integer query__V_24_24 = (MR_Integer) query__V_21_21;
#line 264 "query.m"
                  MR_Integer query__V_25_25 = (MR_Integer) query__V_15_15;

#line 264 "query.m"
                  {
#line 264 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_24_24, query__V_25_25);
                  }
#line 264 "query.m"
                }
#line 264 "query.m"
                break;
#line 264 "query.m"
            }
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
      }
#line 264 "query.m"
  }
#line 264 "query.m"
}

#line 264 "query.m"
MR_bool MR_CALL 
query____Unify____memory_fields_0_0(
#line 264 "query.m"
  MR_Word query__HeadVar__1_1,
#line 264 "query.m"
  MR_Word query__HeadVar__2_2)
#line 264 "query.m"
{
#line 264 "query.m"
  {
#line 264 "query.m"
    MR_bool query__succeeded;
#line 264 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 264 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 264 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 264 "query.m"
    if (query__succeeded)
#line 264 "query.m"
      query__succeeded = MR_TRUE;
#line 264 "query.m"
    else
#line 264 "query.m"
#line 264 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 264 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 264 "query.m"
        case (MR_Integer) 0:
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 264 "query.m"
            MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 264 "query.m"
            query__succeeded = (query__CastY_4 == query__CastX_3);
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
        case (MR_Integer) 1:
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "query.m"
            MR_Word query__V_6_6;

#line 264 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 264 "query.m"
            if (query__succeeded)
#line 264 "query.m"
              {
#line 264 "query.m"
                query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 8152 "query.c"
                query__succeeded = (query__V_5_5 == query__V_6_6);
#line 264 "query.m"
              }
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
        case (MR_Integer) 2:
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "query.m"
            MR_Word query__V_8_8;

#line 264 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 264 "query.m"
            if (query__succeeded)
#line 264 "query.m"
              {
#line 264 "query.m"
                query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 8177 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 264 "query.m"
              }
#line 264 "query.m"
          }
#line 264 "query.m"
          break;
#line 264 "query.m"
      }
#line 264 "query.m"
    return query__succeeded;
#line 264 "query.m"
  }
#line 264 "query.m"
}

#line 299 "query.m"
void MR_CALL 
query____Compare____measurement_scope_0_0(
#line 299 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 299 "query.m"
  MR_Word query__HeadVar__2_2,
#line 299 "query.m"
  MR_Word query__HeadVar__3_3)
#line 299 "query.m"
{
#line 299 "query.m"
  {
#line 299 "query.m"
    MR_bool query__succeeded;
#line 299 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 299 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 299 "query.m"
    {
#line 299 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 299 "query.m"
  }
#line 299 "query.m"
}

#line 299 "query.m"
MR_bool MR_CALL 
query____Unify____measurement_scope_0_0(
#line 299 "query.m"
  MR_Word query__HeadVar__2_1,
#line 299 "query.m"
  MR_Word query__HeadVar__2_2)
#line 299 "query.m"
{
#line 8233 "query.c"
  {
#line 8235 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8238 "query.c"
    return query__succeeded;
#line 8240 "query.c"
  }
#line 299 "query.m"
}

#line 168 "query.m"
void MR_CALL 
query____Compare____include_descendants_0_0(
#line 168 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 168 "query.m"
  MR_Word query__HeadVar__2_2,
#line 168 "query.m"
  MR_Word query__HeadVar__3_3)
#line 168 "query.m"
{
#line 168 "query.m"
  {
#line 168 "query.m"
    MR_bool query__succeeded;
#line 168 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 168 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 168 "query.m"
    {
#line 168 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 168 "query.m"
  }
#line 168 "query.m"
}

#line 168 "query.m"
MR_bool MR_CALL 
query____Unify____include_descendants_0_0(
#line 168 "query.m"
  MR_Word query__HeadVar__2_1,
#line 168 "query.m"
  MR_Word query__HeadVar__2_2)
#line 168 "query.m"
{
#line 8284 "query.c"
  {
#line 8286 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8289 "query.c"
    return query__succeeded;
#line 8291 "query.c"
  }
#line 168 "query.m"
}

#line 317 "query.m"
void MR_CALL 
query____Compare____inactive_status_0_0(
#line 317 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 317 "query.m"
  MR_Word query__HeadVar__2_2,
#line 317 "query.m"
  MR_Word query__HeadVar__3_3)
#line 317 "query.m"
{
#line 317 "query.m"
  {
#line 317 "query.m"
    MR_bool query__succeeded;
#line 317 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 317 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 317 "query.m"
    {
#line 317 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 317 "query.m"
  }
#line 317 "query.m"
}

#line 317 "query.m"
MR_bool MR_CALL 
query____Unify____inactive_status_0_0(
#line 317 "query.m"
  MR_Word query__HeadVar__2_1,
#line 317 "query.m"
  MR_Word query__HeadVar__2_2)
#line 317 "query.m"
{
#line 8335 "query.c"
  {
#line 8337 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8340 "query.c"
    return query__succeeded;
#line 8342 "query.c"
  }
#line 317 "query.m"
}

#line 321 "query.m"
void MR_CALL 
query____Compare____inactive_items_0_0(
#line 321 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 321 "query.m"
  MR_Word query__HeadVar__2_2,
#line 321 "query.m"
  MR_Word query__HeadVar__3_3)
#line 321 "query.m"
{
#line 321 "query.m"
  {
#line 321 "query.m"
    MR_bool query__succeeded;
#line 321 "query.m"
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
#line 321 "query.m"
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

#line 321 "query.m"
    query__succeeded = (query__CastX_12 == query__CastY_13);
#line 321 "query.m"
    if (query__succeeded)
#line 8371 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 321 "query.m"
    else
#line 321 "query.m"
      {
#line 321 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_10_10;
#line 321 "query.m"
        MR_Integer query__V_17_17 = (MR_Integer) query__V_4_4;
#line 321 "query.m"
        MR_Integer query__V_18_18 = (MR_Integer) query__V_7_7;

#line 321 "query.m"
        {
#line 321 "query.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_10_10, query__V_17_17, query__V_18_18);
        }
#line 8401 "query.c"
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
#line 321 "query.m"
        query__succeeded = !(query__succeeded);
#line 321 "query.m"
        if (query__succeeded)
#line 321 "query.m"
          *query__HeadVar__1_1 = query__V_10_10;
#line 321 "query.m"
        else
#line 321 "query.m"
          {
#line 321 "query.m"
            MR_Word query__V_11_11;
#line 321 "query.m"
            MR_Integer query__V_19_19 = (MR_Integer) query__V_5_5;
#line 321 "query.m"
            MR_Integer query__V_20_20 = (MR_Integer) query__V_8_8;

#line 321 "query.m"
            {
#line 321 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_11_11, query__V_19_19, query__V_20_20);
            }
#line 8425 "query.c"
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
#line 321 "query.m"
            query__succeeded = !(query__succeeded);
#line 321 "query.m"
            if (query__succeeded)
#line 321 "query.m"
              *query__HeadVar__1_1 = query__V_11_11;
#line 321 "query.m"
            else
#line 321 "query.m"
              {
#line 321 "query.m"
                MR_Integer query__V_21_21 = (MR_Integer) query__V_6_6;
#line 321 "query.m"
                MR_Integer query__V_22_22 = (MR_Integer) query__V_9_9;

#line 321 "query.m"
                {
#line 321 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_21_21, query__V_22_22);
                }
#line 321 "query.m"
              }
#line 321 "query.m"
          }
#line 321 "query.m"
      }
#line 321 "query.m"
  }
#line 321 "query.m"
}

#line 321 "query.m"
MR_bool MR_CALL 
query____Unify____inactive_items_0_0(
#line 321 "query.m"
  MR_Word query__HeadVar__1_1,
#line 321 "query.m"
  MR_Word query__HeadVar__2_2)
#line 321 "query.m"
{
#line 321 "query.m"
  {
#line 321 "query.m"
    MR_bool query__succeeded;
#line 321 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 321 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 321 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 321 "query.m"
    if (query__succeeded)
#line 321 "query.m"
      query__succeeded = MR_TRUE;
#line 321 "query.m"
    else
#line 321 "query.m"
      {
#line 321 "query.m"
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 321 "query.m"
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 8499 "query.c"
        query__succeeded = (query__V_3_3 == query__V_6_6);
#line 321 "query.m"
        if (query__succeeded)
#line 321 "query.m"
          {
#line 8505 "query.c"
            query__succeeded = (query__V_4_4 == query__V_7_7);
#line 321 "query.m"
            if (query__succeeded)
#line 8509 "query.c"
              query__succeeded = (query__V_5_5 == query__V_8_8);
#line 321 "query.m"
          }
#line 321 "query.m"
      }
#line 321 "query.m"
    return query__succeeded;
#line 321 "query.m"
  }
#line 321 "query.m"
}

#line 269 "query.m"
void MR_CALL 
query____Compare____fields_0_0(
#line 269 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 269 "query.m"
  MR_Word query__HeadVar__2_2,
#line 269 "query.m"
  MR_Word query__HeadVar__3_3)
#line 269 "query.m"
{
#line 269 "query.m"
  {
#line 269 "query.m"
    MR_bool query__succeeded;
#line 269 "query.m"
    MR_Integer query__CastX_18 = (MR_Integer) query__HeadVar__2_2;
#line 269 "query.m"
    MR_Integer query__CastY_19 = (MR_Integer) query__HeadVar__3_3;

#line 269 "query.m"
    query__succeeded = (query__CastX_18 == query__CastY_19);
#line 269 "query.m"
    if (query__succeeded)
#line 8546 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 269 "query.m"
    else
#line 269 "query.m"
      {
#line 269 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 269 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 269 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "query.m"
        MR_Word query__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 269 "query.m"
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 269 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 269 "query.m"
        MR_Word query__V_14_14;
#line 269 "query.m"
        MR_Integer query__V_25_25 = (MR_Integer) query__V_4_4;
#line 269 "query.m"
        MR_Integer query__V_26_26 = (MR_Integer) query__V_9_9;

#line 269 "query.m"
        {
#line 269 "query.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_14_14, query__V_25_25, query__V_26_26);
        }
#line 8584 "query.c"
        query__succeeded = (query__V_14_14 == (MR_Integer) 0);
#line 269 "query.m"
        query__succeeded = !(query__succeeded);
#line 269 "query.m"
        if (query__succeeded)
#line 269 "query.m"
          *query__HeadVar__1_1 = query__V_14_14;
#line 269 "query.m"
        else
#line 269 "query.m"
          {
#line 269 "query.m"
            MR_Word query__V_15_15;
#line 269 "query.m"
            MR_Integer query__V_27_27 = (MR_Integer) query__V_5_5;
#line 269 "query.m"
            MR_Integer query__V_28_28 = (MR_Integer) query__V_10_10;

#line 269 "query.m"
            {
#line 269 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_15_15, query__V_27_27, query__V_28_28);
            }
#line 8608 "query.c"
            query__succeeded = (query__V_15_15 == (MR_Integer) 0);
#line 269 "query.m"
            query__succeeded = !(query__succeeded);
#line 269 "query.m"
            if (query__succeeded)
#line 269 "query.m"
              *query__HeadVar__1_1 = query__V_15_15;
#line 269 "query.m"
            else
#line 269 "query.m"
              {
#line 269 "query.m"
                MR_Word query__V_16_16;
#line 269 "query.m"
                MR_Integer query__V_29_29 = (MR_Integer) query__V_6_6;
#line 269 "query.m"
                MR_Integer query__V_30_30 = (MR_Integer) query__V_11_11;

#line 269 "query.m"
                {
#line 269 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_16_16, query__V_29_29, query__V_30_30);
                }
#line 8632 "query.c"
                query__succeeded = (query__V_16_16 == (MR_Integer) 0);
#line 269 "query.m"
                query__succeeded = !(query__succeeded);
#line 269 "query.m"
                if (query__succeeded)
#line 269 "query.m"
                  *query__HeadVar__1_1 = query__V_16_16;
#line 269 "query.m"
                else
#line 269 "query.m"
                  {
#line 269 "query.m"
                    MR_Word query__V_17_17;
#line 269 "query.m"
                    MR_Integer query__V_31_31 = (MR_Integer) query__V_7_7;
#line 269 "query.m"
                    MR_Integer query__V_32_32 = (MR_Integer) query__V_12_12;

#line 269 "query.m"
                    {
#line 269 "query.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_17_17, query__V_31_31, query__V_32_32);
                    }
#line 8656 "query.c"
                    query__succeeded = (query__V_17_17 == (MR_Integer) 0);
#line 269 "query.m"
                    query__succeeded = !(query__succeeded);
#line 269 "query.m"
                    if (query__succeeded)
#line 269 "query.m"
                      *query__HeadVar__1_1 = query__V_17_17;
#line 269 "query.m"
                    else
#line 269 "query.m"
                      {
#line 269 "query.m"
                        query____Compare____memory_fields_0_0(query__HeadVar__1_1, query__V_8_8, query__V_13_13);
                      }
#line 269 "query.m"
                  }
#line 269 "query.m"
              }
#line 269 "query.m"
          }
#line 269 "query.m"
      }
#line 269 "query.m"
  }
#line 269 "query.m"
}

#line 269 "query.m"
MR_bool MR_CALL 
query____Unify____fields_0_0(
#line 269 "query.m"
  MR_Word query__HeadVar__1_1,
#line 269 "query.m"
  MR_Word query__HeadVar__2_2)
#line 269 "query.m"
{
#line 269 "query.m"
  {
#line 269 "query.m"
    MR_bool query__succeeded;
#line 269 "query.m"
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
#line 269 "query.m"
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

#line 269 "query.m"
    query__succeeded = (query__CastX_13 == query__CastY_14);
#line 269 "query.m"
    if (query__succeeded)
#line 269 "query.m"
      query__succeeded = MR_TRUE;
#line 269 "query.m"
    else
#line 269 "query.m"
      {
#line 269 "query.m"
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 269 "query.m"
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 269 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "query.m"
        MR_Word query__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 269 "query.m"
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 269 "query.m"
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 269 "query.m"
        MR_Word query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));

#line 8733 "query.c"
        query__succeeded = (query__V_3_3 == query__V_8_8);
#line 269 "query.m"
        if (query__succeeded)
#line 269 "query.m"
          {
#line 8739 "query.c"
            query__succeeded = (query__V_4_4 == query__V_9_9);
#line 269 "query.m"
            if (query__succeeded)
#line 269 "query.m"
              {
#line 8745 "query.c"
                query__succeeded = (query__V_5_5 == query__V_10_10);
#line 269 "query.m"
                if (query__succeeded)
#line 269 "query.m"
                  {
#line 8751 "query.c"
                    query__succeeded = (query__V_6_6 == query__V_11_11);
#line 269 "query.m"
                    if (query__succeeded)
#line 8755 "query.c"
                      {
#line 8757 "query.c"
                        query__succeeded = query____Unify____memory_fields_0_0(query__V_7_7, query__V_12_12);
                      }
#line 269 "query.m"
                  }
#line 269 "query.m"
              }
#line 269 "query.m"
          }
#line 269 "query.m"
      }
#line 269 "query.m"
    return query__succeeded;
#line 269 "query.m"
  }
#line 269 "query.m"
}

#line 176 "query.m"
void MR_CALL 
query____Compare____display_limit_0_0(
#line 176 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 176 "query.m"
  MR_Word query__HeadVar__2_2,
#line 176 "query.m"
  MR_Word query__HeadVar__3_3)
#line 176 "query.m"
{
#line 176 "query.m"
  {
#line 176 "query.m"
    MR_bool query__succeeded;
#line 176 "query.m"
    MR_Integer query__CastX_29 = (MR_Integer) query__HeadVar__2_2;
#line 176 "query.m"
    MR_Integer query__CastY_30 = (MR_Integer) query__HeadVar__3_3;

#line 176 "query.m"
    query__succeeded = (query__CastX_29 == query__CastY_30);
#line 176 "query.m"
    if (query__succeeded)
#line 8799 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "query.m"
    else
#line 176 "query.m"
#line 176 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
#line 176 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 176 "query.m"
        case (MR_Integer) 0:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Integer query__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "query.m"
            MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
#line 176 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 176 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 176 "query.m"
              case (MR_Integer) 0:
#line 176 "query.m"
                {
#line 176 "query.m"
                  MR_Integer query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "query.m"
                  MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "query.m"
                  MR_Word query__V_8_8;

#line 176 "query.m"
                  {
#line 176 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_8_8, query__V_36_36, query__V_6_6);
                  }
#line 8838 "query.c"
                  query__succeeded = (query__V_8_8 == (MR_Integer) 0);
#line 176 "query.m"
                  query__succeeded = !(query__succeeded);
#line 176 "query.m"
                  if (query__succeeded)
#line 176 "query.m"
                    *query__HeadVar__1_1 = query__V_8_8;
#line 176 "query.m"
                  else
#line 176 "query.m"
                    {
#line 176 "query.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_35_35, query__V_7_7);
                    }
#line 176 "query.m"
                }
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 1:
#line 8859 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 2:
#line 8865 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
                break;
#line 176 "query.m"
            }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
        case (MR_Integer) 1:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_37_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
#line 176 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 176 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 176 "query.m"
              case (MR_Integer) 0:
#line 8889 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 1:
#line 176 "query.m"
                {
#line 176 "query.m"
                  MR_Float query__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));

#line 176 "query.m"
                  {
#line 176 "query.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_37_37, query__V_19_19);
                  }
#line 176 "query.m"
                }
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 2:
#line 8911 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
                break;
#line 176 "query.m"
            }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
        case (MR_Integer) 2:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
#line 176 "query.m"
            switch (MR_tag((MR_Word) query__HeadVar__3_3)) {
#line 176 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 176 "query.m"
              case (MR_Integer) 0:
#line 8935 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 1:
#line 8941 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 2:
#line 176 "query.m"
                {
#line 176 "query.m"
                  MR_Float query__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));

#line 176 "query.m"
                  {
#line 176 "query.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_38_38, query__V_28_28);
                  }
#line 176 "query.m"
                }
#line 176 "query.m"
                break;
#line 176 "query.m"
            }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
      }
#line 176 "query.m"
  }
#line 176 "query.m"
}

#line 176 "query.m"
MR_bool MR_CALL 
query____Unify____display_limit_0_0(
#line 176 "query.m"
  MR_Word query__HeadVar__1_1,
#line 176 "query.m"
  MR_Word query__HeadVar__2_2)
#line 176 "query.m"
{
#line 176 "query.m"
  {
#line 176 "query.m"
    MR_bool query__succeeded;
#line 176 "query.m"
    MR_Integer query__CastX_11 = (MR_Integer) query__HeadVar__1_1;
#line 176 "query.m"
    MR_Integer query__CastY_12 = (MR_Integer) query__HeadVar__2_2;

#line 176 "query.m"
    query__succeeded = (query__CastX_11 == query__CastY_12);
#line 176 "query.m"
    if (query__succeeded)
#line 176 "query.m"
      query__succeeded = MR_TRUE;
#line 176 "query.m"
    else
#line 176 "query.m"
#line 176 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 176 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 176 "query.m"
        case (MR_Integer) 0:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Integer query__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "query.m"
            MR_Integer query__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "query.m"
            MR_Integer query__V_5_5;
#line 176 "query.m"
            MR_Integer query__V_6_6;

#line 176 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 176 "query.m"
            if (query__succeeded)
#line 176 "query.m"
              {
#line 176 "query.m"
                query__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "query.m"
                query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 9028 "query.c"
                query__succeeded = (query__V_3_3 == query__V_5_5);
#line 176 "query.m"
                if (query__succeeded)
#line 9032 "query.c"
                  query__succeeded = (query__V_4_4 == query__V_6_6);
#line 176 "query.m"
              }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
        case (MR_Integer) 1:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "query.m"
            MR_Float query__V_8_8;

#line 176 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 176 "query.m"
            if (query__succeeded)
#line 176 "query.m"
              {
#line 176 "query.m"
                query__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 9057 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 176 "query.m"
              }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
        case (MR_Integer) 2:
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "query.m"
            MR_Float query__V_10_10;

#line 176 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 176 "query.m"
            if (query__succeeded)
#line 176 "query.m"
              {
#line 176 "query.m"
                query__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 9082 "query.c"
                query__succeeded = (query__V_9_9 == query__V_10_10);
#line 176 "query.m"
              }
#line 176 "query.m"
          }
#line 176 "query.m"
          break;
#line 176 "query.m"
      }
#line 176 "query.m"
    return query__succeeded;
#line 176 "query.m"
  }
#line 176 "query.m"
}

#line 328 "query.m"
void MR_CALL 
query____Compare____developer_mode_0_0(
#line 328 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 328 "query.m"
  MR_Word query__HeadVar__2_2,
#line 328 "query.m"
  MR_Word query__HeadVar__3_3)
#line 328 "query.m"
{
#line 328 "query.m"
  {
#line 328 "query.m"
    MR_bool query__succeeded;
#line 328 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 328 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 328 "query.m"
    {
#line 328 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 328 "query.m"
  }
#line 328 "query.m"
}

#line 328 "query.m"
MR_bool MR_CALL 
query____Unify____developer_mode_0_0(
#line 328 "query.m"
  MR_Word query__HeadVar__2_1,
#line 328 "query.m"
  MR_Word query__HeadVar__2_2)
#line 328 "query.m"
{
#line 9138 "query.c"
  {
#line 9140 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9143 "query.c"
    return query__succeeded;
#line 9145 "query.c"
  }
#line 328 "query.m"
}

#line 172 "query.m"
void MR_CALL 
query____Compare____descendants_meaningful_0_0(
#line 172 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 172 "query.m"
  MR_Word query__HeadVar__2_2,
#line 172 "query.m"
  MR_Word query__HeadVar__3_3)
#line 172 "query.m"
{
#line 172 "query.m"
  {
#line 172 "query.m"
    MR_bool query__succeeded;
#line 172 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 172 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 172 "query.m"
    {
#line 172 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 172 "query.m"
  }
#line 172 "query.m"
}

#line 172 "query.m"
MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0(
#line 172 "query.m"
  MR_Word query__HeadVar__2_1,
#line 172 "query.m"
  MR_Word query__HeadVar__2_2)
#line 172 "query.m"
{
#line 9189 "query.c"
  {
#line 9191 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9194 "query.c"
    return query__succeeded;
#line 9196 "query.c"
  }
#line 172 "query.m"
}

#line 47 "query.m"
void MR_CALL 
query____Compare____deep_query_0_0(
#line 47 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 47 "query.m"
  MR_Word query__HeadVar__2_2,
#line 47 "query.m"
  MR_Word query__HeadVar__3_3)
#line 47 "query.m"
{
#line 47 "query.m"
  {
#line 47 "query.m"
    MR_bool query__succeeded;
#line 47 "query.m"
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
#line 47 "query.m"
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

#line 47 "query.m"
    query__succeeded = (query__CastX_12 == query__CastY_13);
#line 47 "query.m"
    if (query__succeeded)
#line 9225 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "query.m"
    else
#line 47 "query.m"
      {
#line 47 "query.m"
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "query.m"
        MR_String query__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "query.m"
        MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "query.m"
        MR_Word query__V_10_10;

#line 47 "query.m"
        {
#line 47 "query.m"
          mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[1], &query__V_10_10, ((MR_Box) (query__V_4_4)), ((MR_Box) (query__V_7_7)));
        }
#line 9251 "query.c"
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
#line 47 "query.m"
        query__succeeded = !(query__succeeded);
#line 47 "query.m"
        if (query__succeeded)
#line 47 "query.m"
          *query__HeadVar__1_1 = query__V_10_10;
#line 47 "query.m"
        else
#line 47 "query.m"
          {
#line 47 "query.m"
            MR_Word query__V_11_11;

#line 47 "query.m"
            {
#line 47 "query.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_11_11, query__V_5_5, query__V_8_8);
            }
#line 9271 "query.c"
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
#line 47 "query.m"
            query__succeeded = !(query__succeeded);
#line 47 "query.m"
            if (query__succeeded)
#line 47 "query.m"
              *query__HeadVar__1_1 = query__V_11_11;
#line 47 "query.m"
            else
#line 47 "query.m"
              {
#line 47 "query.m"
                {
#line 47 "query.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[2], query__HeadVar__1_1, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_9_9)));
                }
#line 47 "query.m"
              }
#line 47 "query.m"
          }
#line 47 "query.m"
      }
#line 47 "query.m"
  }
#line 47 "query.m"
}

#line 47 "query.m"
MR_bool MR_CALL 
query____Unify____deep_query_0_0(
#line 47 "query.m"
  MR_Word query__HeadVar__1_1,
#line 47 "query.m"
  MR_Word query__HeadVar__2_2)
#line 47 "query.m"
{
#line 47 "query.m"
  {
#line 47 "query.m"
    MR_bool query__succeeded;
#line 47 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 47 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 47 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 47 "query.m"
    if (query__succeeded)
#line 47 "query.m"
      query__succeeded = MR_TRUE;
#line 47 "query.m"
    else
#line 47 "query.m"
      {
#line 47 "query.m"
        MR_Word query__TypeInfo_12_12;
#line 47 "query.m"
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "query.m"
        MR_String query__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "query.m"
        MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "query.m"
        MR_String query__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));

#line 9342 "query.c"
        {
#line 9344 "query.c"
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
#line 47 "query.m"
        if (query__succeeded)
#line 47 "query.m"
          {
#line 9351 "query.c"
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
#line 47 "query.m"
            if (query__succeeded)
#line 47 "query.m"
              {
#line 9357 "query.c"
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
#line 9359 "query.c"
                {
#line 9361 "query.c"
                  query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_12_12, ((MR_Box) (query__V_5_5)), ((MR_Box) (query__V_8_8)));
                }
#line 47 "query.m"
              }
#line 47 "query.m"
          }
#line 47 "query.m"
      }
#line 47 "query.m"
    return query__succeeded;
#line 47 "query.m"
  }
#line 47 "query.m"
}

#line 160 "query.m"
void MR_CALL 
query____Compare____cost_kind_0_0(
#line 160 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 160 "query.m"
  MR_Word query__HeadVar__2_2,
#line 160 "query.m"
  MR_Word query__HeadVar__3_3)
#line 160 "query.m"
{
#line 160 "query.m"
  {
#line 160 "query.m"
    MR_bool query__succeeded;
#line 160 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 160 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 160 "query.m"
    {
#line 160 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 160 "query.m"
  }
#line 160 "query.m"
}

#line 160 "query.m"
MR_bool MR_CALL 
query____Unify____cost_kind_0_0(
#line 160 "query.m"
  MR_Word query__HeadVar__2_1,
#line 160 "query.m"
  MR_Word query__HeadVar__2_2)
#line 160 "query.m"
{
#line 9416 "query.c"
  {
#line 9418 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9421 "query.c"
    return query__succeeded;
#line 9423 "query.c"
  }
#line 160 "query.m"
}

#line 303 "query.m"
void MR_CALL 
query____Compare____contour_exclusion_0_0(
#line 303 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 303 "query.m"
  MR_Word query__HeadVar__2_2,
#line 303 "query.m"
  MR_Word query__HeadVar__3_3)
#line 303 "query.m"
{
#line 303 "query.m"
  {
#line 303 "query.m"
    MR_bool query__succeeded;
#line 303 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 303 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 303 "query.m"
    {
#line 303 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 303 "query.m"
  }
#line 303 "query.m"
}

#line 303 "query.m"
MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0(
#line 303 "query.m"
  MR_Word query__HeadVar__2_1,
#line 303 "query.m"
  MR_Word query__HeadVar__2_2)
#line 303 "query.m"
{
#line 9467 "query.c"
  {
#line 9469 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9472 "query.c"
    return query__succeeded;
#line 9474 "query.c"
  }
#line 303 "query.m"
}

#line 282 "query.m"
void MR_CALL 
query____Compare____colour_column_groups_0_0(
#line 282 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 282 "query.m"
  MR_Word query__HeadVar__2_2,
#line 282 "query.m"
  MR_Word query__HeadVar__3_3)
#line 282 "query.m"
{
#line 282 "query.m"
  {
#line 282 "query.m"
    MR_bool query__succeeded;
#line 282 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 282 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 282 "query.m"
    {
#line 282 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 282 "query.m"
  }
#line 282 "query.m"
}

#line 282 "query.m"
MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0(
#line 282 "query.m"
  MR_Word query__HeadVar__2_1,
#line 282 "query.m"
  MR_Word query__HeadVar__2_2)
#line 282 "query.m"
{
#line 9518 "query.c"
  {
#line 9520 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9523 "query.c"
    return query__succeeded;
#line 9525 "query.c"
  }
#line 282 "query.m"
}

#line 73 "query.m"
void MR_CALL 
query____Compare____cmd_0_0(
#line 73 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 73 "query.m"
  MR_Word query__HeadVar__2_2,
#line 73 "query.m"
  MR_Word query__HeadVar__3_3)
#line 73 "query.m"
{
#line 73 "query.m"
  {
#line 73 "query.m"
    MR_bool query__succeeded;
#line 73 "query.m"
    MR_Integer query__CastX_64 = (MR_Integer) query__HeadVar__2_2;
#line 73 "query.m"
    MR_Integer query__CastY_65 = (MR_Integer) query__HeadVar__3_3;

#line 73 "query.m"
    query__succeeded = (query__CastX_64 == query__CastY_65);
#line 73 "query.m"
    if (query__succeeded)
#line 9554 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "query.m"
    else
#line 73 "query.m"
      {
#line 73 "query.m"
        MR_Integer query__V_4_4;
#line 73 "query.m"
        MR_Integer query__V_5_5;

#line 73 "query.m"
        {
#line 73 "query.m"
          query____Index____cmd_0_0(query__HeadVar__2_2, &query__V_4_4);
        }
#line 73 "query.m"
        {
#line 73 "query.m"
          query____Index____cmd_0_0(query__HeadVar__3_3, &query__V_5_5);
        }
#line 73 "query.m"
        query__succeeded = (query__V_4_4 < query__V_5_5);
#line 73 "query.m"
        if (query__succeeded)
#line 9579 "query.c"
          *query__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "query.m"
        else
#line 73 "query.m"
          {
#line 73 "query.m"
            query__succeeded = (query__V_4_4 > query__V_5_5);
#line 73 "query.m"
            if (query__succeeded)
#line 9589 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "query.m"
            else
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_6_6;

#line 73 "query.m"
#line 73 "query.m"
                switch (MR_tag((MR_Word) query__HeadVar__2_2)) {
#line 73 "query.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
                  case (MR_Integer) 0:
#line 73 "query.m"
#line 73 "query.m"
                    switch (MR_unmkbody(query__HeadVar__2_2)) {
#line 73 "query.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
                      case (MR_Integer) 0:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 1:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 2:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 3:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 4:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                    }
#line 73 "query.m"
                    break;
#line 73 "query.m"
                  case (MR_Integer) 1:
#line 73 "query.m"
                    {
#line 73 "query.m"
                      MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "query.m"
                      MR_Integer query__V_8_8;

#line 73 "query.m"
                      query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 73 "query.m"
                      if (query__succeeded)
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "query.m"
                          {
#line 73 "query.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_7_7, query__V_8_8);
                          }
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                    }
#line 73 "query.m"
                    break;
#line 73 "query.m"
                  case (MR_Integer) 2:
#line 73 "query.m"
                    {
#line 73 "query.m"
                      MR_Word query__TypeInfo_67_67;
#line 73 "query.m"
                      MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "query.m"
                      MR_Word query__V_10_10;

#line 73 "query.m"
                      query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 73 "query.m"
                      if (query__succeeded)
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
#line 9723 "query.c"
                          query__TypeInfo_67_67 = (MR_Word) &query_scalar_common_1[0];
#line 73 "query.m"
                          {
#line 73 "query.m"
                            mercury__builtin__compare_3_p_0(query__TypeInfo_67_67, &query__V_6_6, ((MR_Box) (query__V_9_9)), ((MR_Box) (query__V_10_10)));
                          }
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                    }
#line 73 "query.m"
                    break;
#line 73 "query.m"
                  case (MR_Integer) 3:
#line 73 "query.m"
#line 73 "query.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) {
#line 73 "query.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
                      case (MR_Integer) 0:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_12_12;
#line 73 "query.m"
                          MR_Integer query__V_93_93;
#line 73 "query.m"
                          MR_Integer query__V_94_94;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_93_93 = (MR_Integer) query__V_11_11;
#line 73 "query.m"
                              query__V_94_94 = (MR_Integer) query__V_12_12;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_93_93, query__V_94_94);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 1:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_14_14;
#line 73 "query.m"
                          MR_Integer query__V_95_95;
#line 73 "query.m"
                          MR_Integer query__V_96_96;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_95_95 = (MR_Integer) query__V_13_13;
#line 73 "query.m"
                              query__V_96_96 = (MR_Integer) query__V_14_14;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_95_95, query__V_96_96);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 2:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_16_16;
#line 73 "query.m"
                          MR_Integer query__V_109_109;
#line 73 "query.m"
                          MR_Integer query__V_110_110;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_109_109 = (MR_Integer) query__V_15_15;
#line 73 "query.m"
                              query__V_110_110 = (MR_Integer) query__V_16_16;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_109_109, query__V_110_110);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 3:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "query.m"
                          MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "query.m"
                          MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
#line 73 "query.m"
                          MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
#line 73 "query.m"
                          MR_Word query__V_22_22;
#line 73 "query.m"
                          MR_Word query__V_23_23;
#line 73 "query.m"
                          MR_Integer query__V_24_24;
#line 73 "query.m"
                          MR_Integer query__V_25_25;
#line 73 "query.m"
                          MR_Word query__V_26_26;
#line 73 "query.m"
                          MR_Word query__V_27_27;
#line 73 "query.m"
                          MR_Integer query__V_111_111;
#line 73 "query.m"
                          MR_Integer query__V_112_112;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "query.m"
                              query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 3)));
#line 73 "query.m"
                              query__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 4)));
#line 73 "query.m"
                              query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 5)));
#line 73 "query.m"
                              query__V_111_111 = (MR_Integer) query__V_17_17;
#line 73 "query.m"
                              query__V_112_112 = (MR_Integer) query__V_22_22;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_27_27, query__V_111_111, query__V_112_112);
                              }
#line 9915 "query.c"
                              query__succeeded = (query__V_27_27 == (MR_Integer) 0);
#line 73 "query.m"
                              query__succeeded = !(query__succeeded);
#line 73 "query.m"
                              if (query__succeeded)
#line 73 "query.m"
                                query__V_6_6 = query__V_27_27;
#line 73 "query.m"
                              else
#line 73 "query.m"
                                {
#line 73 "query.m"
                                  MR_Word query__V_28_28;
#line 73 "query.m"
                                  MR_Integer query__V_113_113 = (MR_Integer) query__V_18_18;
#line 73 "query.m"
                                  MR_Integer query__V_114_114 = (MR_Integer) query__V_23_23;

#line 73 "query.m"
                                  {
#line 73 "query.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_28_28, query__V_113_113, query__V_114_114);
                                  }
#line 9939 "query.c"
                                  query__succeeded = (query__V_28_28 == (MR_Integer) 0);
#line 73 "query.m"
                                  query__succeeded = !(query__succeeded);
#line 73 "query.m"
                                  if (query__succeeded)
#line 73 "query.m"
                                    query__V_6_6 = query__V_28_28;
#line 73 "query.m"
                                  else
#line 73 "query.m"
                                    {
#line 73 "query.m"
                                      MR_Word query__V_29_29;

#line 73 "query.m"
                                      {
#line 73 "query.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_19_19, query__V_24_24);
                                      }
#line 9959 "query.c"
                                      query__succeeded = (query__V_29_29 == (MR_Integer) 0);
#line 73 "query.m"
                                      query__succeeded = !(query__succeeded);
#line 73 "query.m"
                                      if (query__succeeded)
#line 73 "query.m"
                                        query__V_6_6 = query__V_29_29;
#line 73 "query.m"
                                      else
#line 73 "query.m"
                                        {
#line 73 "query.m"
                                          MR_Word query__V_30_30;

#line 73 "query.m"
                                          {
#line 73 "query.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_20_20, query__V_25_25);
                                          }
#line 9979 "query.c"
                                          query__succeeded = (query__V_30_30 == (MR_Integer) 0);
#line 73 "query.m"
                                          query__succeeded = !(query__succeeded);
#line 73 "query.m"
                                          if (query__succeeded)
#line 73 "query.m"
                                            query__V_6_6 = query__V_30_30;
#line 73 "query.m"
                                          else
#line 73 "query.m"
                                            {
#line 73 "query.m"
                                              MR_Integer query__V_115_115 = (MR_Integer) query__V_21_21;
#line 73 "query.m"
                                              MR_Integer query__V_116_116 = (MR_Integer) query__V_26_26;

#line 73 "query.m"
                                              {
#line 73 "query.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_115_115, query__V_116_116);
                                              }
#line 73 "query.m"
                                            }
#line 73 "query.m"
                                        }
#line 73 "query.m"
                                    }
#line 73 "query.m"
                                }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 4:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_String query__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_String query__V_32_32;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_31_31, query__V_32_32);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 5:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_String query__V_34_34;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_33_33, query__V_34_34);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 6:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_String query__V_36_36;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_35_35, query__V_36_36);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 7:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 73 "query.m"
                          MR_Word query__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 73 "query.m"
                          MR_Word query__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 73 "query.m"
                          MR_Word query__V_41_41;
#line 73 "query.m"
                          MR_Word query__V_42_42;
#line 73 "query.m"
                          MR_Word query__V_43_43;
#line 73 "query.m"
                          MR_Word query__V_44_44;
#line 73 "query.m"
                          MR_Word query__V_45_45;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 73 "query.m"
                              query__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 73 "query.m"
                              query__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 73 "query.m"
                              {
#line 73 "query.m"
                                query____Compare____display_limit_0_0(&query__V_45_45, query__V_37_37, query__V_41_41);
                              }
#line 10149 "query.c"
                              query__succeeded = (query__V_45_45 == (MR_Integer) 0);
#line 73 "query.m"
                              query__succeeded = !(query__succeeded);
#line 73 "query.m"
                              if (query__succeeded)
#line 73 "query.m"
                                query__V_6_6 = query__V_45_45;
#line 73 "query.m"
                              else
#line 73 "query.m"
                                {
#line 73 "query.m"
                                  MR_Word query__V_46_46;
#line 73 "query.m"
                                  MR_Integer query__V_119_119 = (MR_Integer) query__V_38_38;
#line 73 "query.m"
                                  MR_Integer query__V_120_120 = (MR_Integer) query__V_42_42;

#line 73 "query.m"
                                  {
#line 73 "query.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_46_46, query__V_119_119, query__V_120_120);
                                  }
#line 10173 "query.c"
                                  query__succeeded = (query__V_46_46 == (MR_Integer) 0);
#line 73 "query.m"
                                  query__succeeded = !(query__succeeded);
#line 73 "query.m"
                                  if (query__succeeded)
#line 73 "query.m"
                                    query__V_6_6 = query__V_46_46;
#line 73 "query.m"
                                  else
#line 73 "query.m"
                                    {
#line 73 "query.m"
                                      MR_Word query__V_47_47;
#line 73 "query.m"
                                      MR_Integer query__V_121_121 = (MR_Integer) query__V_39_39;
#line 73 "query.m"
                                      MR_Integer query__V_122_122 = (MR_Integer) query__V_43_43;

#line 73 "query.m"
                                      {
#line 73 "query.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_47_47, query__V_121_121, query__V_122_122);
                                      }
#line 10197 "query.c"
                                      query__succeeded = (query__V_47_47 == (MR_Integer) 0);
#line 73 "query.m"
                                      query__succeeded = !(query__succeeded);
#line 73 "query.m"
                                      if (query__succeeded)
#line 73 "query.m"
                                        query__V_6_6 = query__V_47_47;
#line 73 "query.m"
                                      else
#line 73 "query.m"
                                        {
#line 73 "query.m"
                                          MR_Integer query__V_123_123 = (MR_Integer) query__V_40_40;
#line 73 "query.m"
                                          MR_Integer query__V_124_124 = (MR_Integer) query__V_44_44;

#line 73 "query.m"
                                          {
#line 73 "query.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_123_123, query__V_124_124);
                                          }
#line 73 "query.m"
                                        }
#line 73 "query.m"
                                    }
#line 73 "query.m"
                                }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 8:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_49_49;
#line 73 "query.m"
                          MR_Integer query__V_117_117;
#line 73 "query.m"
                          MR_Integer query__V_118_118;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_117_117 = (MR_Integer) query__V_48_48;
#line 73 "query.m"
                              query__V_118_118 = (MR_Integer) query__V_49_49;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_117_117, query__V_118_118);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 9:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_51_51;
#line 73 "query.m"
                          MR_Integer query__V_107_107;
#line 73 "query.m"
                          MR_Integer query__V_108_108;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_107_107 = (MR_Integer) query__V_50_50;
#line 73 "query.m"
                              query__V_108_108 = (MR_Integer) query__V_51_51;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_107_107, query__V_108_108);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 10:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_53_53;
#line 73 "query.m"
                          MR_Integer query__V_105_105;
#line 73 "query.m"
                          MR_Integer query__V_106_106;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_105_105 = (MR_Integer) query__V_52_52;
#line 73 "query.m"
                              query__V_106_106 = (MR_Integer) query__V_53_53;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_105_105, query__V_106_106);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 11:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_55_55;
#line 73 "query.m"
                          MR_Integer query__V_103_103;
#line 73 "query.m"
                          MR_Integer query__V_104_104;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_103_103 = (MR_Integer) query__V_54_54;
#line 73 "query.m"
                              query__V_104_104 = (MR_Integer) query__V_55_55;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_103_103, query__V_104_104);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 12:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_57_57;
#line 73 "query.m"
                          MR_Integer query__V_99_99;
#line 73 "query.m"
                          MR_Integer query__V_100_100;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_99_99 = (MR_Integer) query__V_56_56;
#line 73 "query.m"
                              query__V_100_100 = (MR_Integer) query__V_57_57;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_99_99, query__V_100_100);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 13:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_59_59;
#line 73 "query.m"
                          MR_Integer query__V_97_97;
#line 73 "query.m"
                          MR_Integer query__V_98_98;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_97_97 = (MR_Integer) query__V_58_58;
#line 73 "query.m"
                              query__V_98_98 = (MR_Integer) query__V_59_59;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_97_97, query__V_98_98);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 14:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_61_61;
#line 73 "query.m"
                          MR_Integer query__V_101_101;
#line 73 "query.m"
                          MR_Integer query__V_102_102;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_101_101 = (MR_Integer) query__V_60_60;
#line 73 "query.m"
                              query__V_102_102 = (MR_Integer) query__V_61_61;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_101_101, query__V_102_102);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                      case (MR_Integer) 15:
#line 73 "query.m"
                        {
#line 73 "query.m"
                          MR_Word query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                          MR_Word query__V_63_63;
#line 73 "query.m"
                          MR_Integer query__V_91_91;
#line 73 "query.m"
                          MR_Integer query__V_92_92;

#line 73 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 73 "query.m"
                          if (query__succeeded)
#line 73 "query.m"
                            {
#line 73 "query.m"
                              query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "query.m"
                              query__V_91_91 = (MR_Integer) query__V_62_62;
#line 73 "query.m"
                              query__V_92_92 = (MR_Integer) query__V_63_63;
#line 73 "query.m"
                              {
#line 73 "query.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_91_91, query__V_92_92);
                              }
#line 73 "query.m"
                              query__succeeded = MR_TRUE;
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                        break;
#line 73 "query.m"
                    }
#line 73 "query.m"
                    break;
#line 73 "query.m"
                }
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  *query__HeadVar__1_1 = query__V_6_6;
#line 73 "query.m"
                else
#line 73 "query.m"
                  {
#line 73 "query.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 73 "query.m"
                    return;
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
          }
#line 73 "query.m"
      }
#line 73 "query.m"
  }
#line 73 "query.m"
}

#line 73 "query.m"
void MR_CALL 
query____Index____cmd_0_0(
#line 73 "query.m"
  MR_Word query__HeadVar__1_1,
#line 73 "query.m"
  MR_Integer * query__HeadVar__2_2)
#line 73 "query.m"
{
#line 73 "query.m"
  {
#line 73 "query.m"
    MR_bool query__succeeded;

#line 73 "query.m"
#line 73 "query.m"
    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 73 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
      case (MR_Integer) 0:
#line 73 "query.m"
#line 73 "query.m"
        switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 73 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
          case (MR_Integer) 0:
#line 10595 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 0;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 1:
#line 10601 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 1;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 2:
#line 10607 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 3;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 3:
#line 10613 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 7;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 4:
#line 10619 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 10;
#line 73 "query.m"
            break;
#line 73 "query.m"
        }
#line 73 "query.m"
        break;
#line 73 "query.m"
      case (MR_Integer) 1:
#line 10629 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 2;
#line 73 "query.m"
        break;
#line 73 "query.m"
      case (MR_Integer) 2:
#line 10635 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 4;
#line 73 "query.m"
        break;
#line 73 "query.m"
      case (MR_Integer) 3:
#line 73 "query.m"
#line 73 "query.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) {
#line 73 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
          case (MR_Integer) 0:
#line 10648 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 5;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 1:
#line 10654 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 6;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 2:
#line 10660 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 8;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 3:
#line 10666 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 9;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 4:
#line 10672 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 11;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 5:
#line 10678 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 12;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 6:
#line 10684 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 13;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 7:
#line 10690 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 14;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 8:
#line 10696 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 15;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 9:
#line 10702 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 16;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 10:
#line 10708 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 17;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 11:
#line 10714 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 18;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 12:
#line 10720 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 19;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 13:
#line 10726 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 20;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 14:
#line 10732 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 21;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 15:
#line 10738 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 22;
#line 73 "query.m"
            break;
#line 73 "query.m"
        }
#line 73 "query.m"
        break;
#line 73 "query.m"
    }
#line 73 "query.m"
  }
#line 73 "query.m"
}

#line 73 "query.m"
MR_bool MR_CALL 
query____Unify____cmd_0_0(
#line 73 "query.m"
  MR_Word query__HeadVar__1_1,
#line 73 "query.m"
  MR_Word query__HeadVar__2_2)
#line 73 "query.m"
{
#line 73 "query.m"
  {
#line 73 "query.m"
    MR_bool query__succeeded;
#line 73 "query.m"
    MR_Integer query__CastX_63 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
    MR_Integer query__CastY_64 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
    query__succeeded = (query__CastX_63 == query__CastY_64);
#line 73 "query.m"
    if (query__succeeded)
#line 73 "query.m"
      query__succeeded = MR_TRUE;
#line 73 "query.m"
    else
#line 73 "query.m"
#line 73 "query.m"
      switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 73 "query.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
        case (MR_Integer) 0:
#line 73 "query.m"
#line 73 "query.m"
          switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 73 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
            case (MR_Integer) 0:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
                MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
                query__succeeded = (query__CastY_4 == query__CastX_3);
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 1:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
                MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
                query__succeeded = (query__CastY_6 == query__CastX_5);
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 2:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
                MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
                query__succeeded = (query__CastY_10 == query__CastX_9);
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 3:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Integer query__CastX_17 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
                MR_Integer query__CastY_18 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
                query__succeeded = (query__CastY_18 == query__CastX_17);
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 4:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Integer query__CastX_31 = (MR_Integer) query__HeadVar__1_1;
#line 73 "query.m"
                MR_Integer query__CastY_32 = (MR_Integer) query__HeadVar__2_2;

#line 73 "query.m"
                query__succeeded = (query__CastY_32 == query__CastX_31);
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
          }
#line 73 "query.m"
          break;
#line 73 "query.m"
        case (MR_Integer) 1:
#line 73 "query.m"
          {
#line 73 "query.m"
            MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "query.m"
            MR_Integer query__V_8_8;

#line 73 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 73 "query.m"
            if (query__succeeded)
#line 73 "query.m"
              {
#line 73 "query.m"
                query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 10887 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 73 "query.m"
              }
#line 73 "query.m"
          }
#line 73 "query.m"
          break;
#line 73 "query.m"
        case (MR_Integer) 2:
#line 73 "query.m"
          {
#line 73 "query.m"
            MR_Word query__TypeInfo_76_76;
#line 73 "query.m"
            MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "query.m"
            MR_Word query__V_12_12;

#line 73 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 73 "query.m"
            if (query__succeeded)
#line 73 "query.m"
              {
#line 73 "query.m"
                query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 10914 "query.c"
                query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
#line 10916 "query.c"
                {
#line 10918 "query.c"
                  query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_76_76, ((MR_Box) (query__V_11_11)), ((MR_Box) (query__V_12_12)));
                }
#line 73 "query.m"
              }
#line 73 "query.m"
          }
#line 73 "query.m"
          break;
#line 73 "query.m"
        case (MR_Integer) 3:
#line 73 "query.m"
#line 73 "query.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) {
#line 73 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 73 "query.m"
            case (MR_Integer) 0:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_14_14;
#line 73 "query.m"
                MR_Integer query__V_80_80;
#line 73 "query.m"
                MR_Integer query__V_81_81;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10955 "query.c"
                    query__V_80_80 = (MR_Integer) query__V_13_13;
#line 10957 "query.c"
                    query__V_81_81 = (MR_Integer) query__V_14_14;
#line 10959 "query.c"
                    query__succeeded = (query__V_80_80 == query__V_81_81);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 1:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_16_16;
#line 73 "query.m"
                MR_Integer query__V_82_82;
#line 73 "query.m"
                MR_Integer query__V_83_83;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10988 "query.c"
                    query__V_82_82 = (MR_Integer) query__V_15_15;
#line 10990 "query.c"
                    query__V_83_83 = (MR_Integer) query__V_16_16;
#line 10992 "query.c"
                    query__succeeded = (query__V_82_82 == query__V_83_83);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 2:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_20_20;
#line 73 "query.m"
                MR_Integer query__V_96_96;
#line 73 "query.m"
                MR_Integer query__V_97_97;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11021 "query.c"
                    query__V_96_96 = (MR_Integer) query__V_19_19;
#line 11023 "query.c"
                    query__V_97_97 = (MR_Integer) query__V_20_20;
#line 11025 "query.c"
                    query__succeeded = (query__V_96_96 == query__V_97_97);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 3:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "query.m"
                MR_Integer query__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 3)));
#line 73 "query.m"
                MR_Integer query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 4)));
#line 73 "query.m"
                MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 5)));
#line 73 "query.m"
                MR_Word query__V_26_26;
#line 73 "query.m"
                MR_Word query__V_27_27;
#line 73 "query.m"
                MR_Integer query__V_28_28;
#line 73 "query.m"
                MR_Integer query__V_29_29;
#line 73 "query.m"
                MR_Word query__V_30_30;
#line 73 "query.m"
                MR_Integer query__V_98_98;
#line 73 "query.m"
                MR_Integer query__V_99_99;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                    query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "query.m"
                    query__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
#line 73 "query.m"
                    query__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
#line 73 "query.m"
                    query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
#line 11078 "query.c"
                    query__succeeded = (query__V_22_22 == query__V_27_27);
#line 73 "query.m"
                    if (query__succeeded)
#line 73 "query.m"
                      {
#line 11084 "query.c"
                        query__succeeded = (query__V_23_23 == query__V_28_28);
#line 73 "query.m"
                        if (query__succeeded)
#line 73 "query.m"
                          {
#line 11090 "query.c"
                            query__succeeded = (query__V_24_24 == query__V_29_29);
#line 73 "query.m"
                            if (query__succeeded)
#line 73 "query.m"
                              {
#line 11096 "query.c"
                                query__succeeded = (query__V_25_25 == query__V_30_30);
#line 73 "query.m"
                                if (query__succeeded)
#line 73 "query.m"
                                  {
#line 11102 "query.c"
                                    query__V_98_98 = (MR_Integer) query__V_21_21;
#line 11104 "query.c"
                                    query__V_99_99 = (MR_Integer) query__V_26_26;
#line 11106 "query.c"
                                    query__succeeded = (query__V_98_98 == query__V_99_99);
#line 73 "query.m"
                                  }
#line 73 "query.m"
                              }
#line 73 "query.m"
                          }
#line 73 "query.m"
                      }
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 4:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_String query__V_34_34;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11139 "query.c"
                    query__succeeded = (strcmp(query__V_33_33, query__V_34_34) == 0);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 5:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_String query__V_36_36;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11164 "query.c"
                    query__succeeded = (strcmp(query__V_35_35, query__V_36_36) == 0);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 6:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_String query__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_String query__V_38_38;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11189 "query.c"
                    query__succeeded = (strcmp(query__V_37_37, query__V_38_38) == 0);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 7:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 73 "query.m"
                MR_Word query__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 73 "query.m"
                MR_Word query__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 73 "query.m"
                MR_Word query__V_43_43;
#line 73 "query.m"
                MR_Word query__V_44_44;
#line 73 "query.m"
                MR_Word query__V_45_45;
#line 73 "query.m"
                MR_Word query__V_46_46;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "query.m"
                    query__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 73 "query.m"
                    query__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 73 "query.m"
                    query__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 11232 "query.c"
                    {
#line 11234 "query.c"
                      query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                    }
#line 73 "query.m"
                    if (query__succeeded)
#line 73 "query.m"
                      {
#line 11241 "query.c"
                        query__succeeded = (query__V_40_40 == query__V_44_44);
#line 73 "query.m"
                        if (query__succeeded)
#line 73 "query.m"
                          {
#line 11247 "query.c"
                            query__succeeded = (query__V_41_41 == query__V_45_45);
#line 73 "query.m"
                            if (query__succeeded)
#line 11251 "query.c"
                              query__succeeded = (query__V_42_42 == query__V_46_46);
#line 73 "query.m"
                          }
#line 73 "query.m"
                      }
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 8:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_48_48;
#line 73 "query.m"
                MR_Integer query__V_100_100;
#line 73 "query.m"
                MR_Integer query__V_101_101;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11284 "query.c"
                    query__V_100_100 = (MR_Integer) query__V_47_47;
#line 11286 "query.c"
                    query__V_101_101 = (MR_Integer) query__V_48_48;
#line 11288 "query.c"
                    query__succeeded = (query__V_100_100 == query__V_101_101);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 9:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_50_50;
#line 73 "query.m"
                MR_Integer query__V_94_94;
#line 73 "query.m"
                MR_Integer query__V_95_95;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11317 "query.c"
                    query__V_94_94 = (MR_Integer) query__V_49_49;
#line 11319 "query.c"
                    query__V_95_95 = (MR_Integer) query__V_50_50;
#line 11321 "query.c"
                    query__succeeded = (query__V_94_94 == query__V_95_95);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 10:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_52_52;
#line 73 "query.m"
                MR_Integer query__V_92_92;
#line 73 "query.m"
                MR_Integer query__V_93_93;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11350 "query.c"
                    query__V_92_92 = (MR_Integer) query__V_51_51;
#line 11352 "query.c"
                    query__V_93_93 = (MR_Integer) query__V_52_52;
#line 11354 "query.c"
                    query__succeeded = (query__V_92_92 == query__V_93_93);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 11:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_54_54;
#line 73 "query.m"
                MR_Integer query__V_90_90;
#line 73 "query.m"
                MR_Integer query__V_91_91;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11383 "query.c"
                    query__V_90_90 = (MR_Integer) query__V_53_53;
#line 11385 "query.c"
                    query__V_91_91 = (MR_Integer) query__V_54_54;
#line 11387 "query.c"
                    query__succeeded = (query__V_90_90 == query__V_91_91);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 12:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_56_56;
#line 73 "query.m"
                MR_Integer query__V_86_86;
#line 73 "query.m"
                MR_Integer query__V_87_87;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11416 "query.c"
                    query__V_86_86 = (MR_Integer) query__V_55_55;
#line 11418 "query.c"
                    query__V_87_87 = (MR_Integer) query__V_56_56;
#line 11420 "query.c"
                    query__succeeded = (query__V_86_86 == query__V_87_87);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 13:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_58_58;
#line 73 "query.m"
                MR_Integer query__V_84_84;
#line 73 "query.m"
                MR_Integer query__V_85_85;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11449 "query.c"
                    query__V_84_84 = (MR_Integer) query__V_57_57;
#line 11451 "query.c"
                    query__V_85_85 = (MR_Integer) query__V_58_58;
#line 11453 "query.c"
                    query__succeeded = (query__V_84_84 == query__V_85_85);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 14:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_60_60;
#line 73 "query.m"
                MR_Integer query__V_88_88;
#line 73 "query.m"
                MR_Integer query__V_89_89;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11482 "query.c"
                    query__V_88_88 = (MR_Integer) query__V_59_59;
#line 11484 "query.c"
                    query__V_89_89 = (MR_Integer) query__V_60_60;
#line 11486 "query.c"
                    query__succeeded = (query__V_88_88 == query__V_89_89);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
            case (MR_Integer) 15:
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "query.m"
                MR_Word query__V_62_62;
#line 73 "query.m"
                MR_Integer query__V_78_78;
#line 73 "query.m"
                MR_Integer query__V_79_79;

#line 73 "query.m"
                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 73 "query.m"
                if (query__succeeded)
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 11515 "query.c"
                    query__V_78_78 = (MR_Integer) query__V_61_61;
#line 11517 "query.c"
                    query__V_79_79 = (MR_Integer) query__V_62_62;
#line 11519 "query.c"
                    query__succeeded = (query__V_78_78 == query__V_79_79);
#line 73 "query.m"
                  }
#line 73 "query.m"
              }
#line 73 "query.m"
              break;
#line 73 "query.m"
          }
#line 73 "query.m"
          break;
#line 73 "query.m"
      }
#line 73 "query.m"
    return query__succeeded;
#line 73 "query.m"
  }
#line 73 "query.m"
}

#line 254 "query.m"
void MR_CALL 
query____Compare____callseqs_fields_0_0(
#line 254 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 254 "query.m"
  MR_Word query__HeadVar__2_2,
#line 254 "query.m"
  MR_Word query__HeadVar__3_3)
#line 254 "query.m"
{
#line 254 "query.m"
  {
#line 254 "query.m"
    MR_bool query__succeeded;
#line 254 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 254 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 254 "query.m"
    {
#line 254 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 254 "query.m"
  }
#line 254 "query.m"
}

#line 254 "query.m"
MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0(
#line 254 "query.m"
  MR_Word query__HeadVar__2_1,
#line 254 "query.m"
  MR_Word query__HeadVar__2_2)
#line 254 "query.m"
{
#line 11579 "query.c"
  {
#line 11581 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11584 "query.c"
    return query__succeeded;
#line 11586 "query.c"
  }
#line 254 "query.m"
}

#line 154 "query.m"
void MR_CALL 
query____Compare____caller_groups_0_0(
#line 154 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 154 "query.m"
  MR_Word query__HeadVar__2_2,
#line 154 "query.m"
  MR_Word query__HeadVar__3_3)
#line 154 "query.m"
{
#line 154 "query.m"
  {
#line 154 "query.m"
    MR_bool query__succeeded;
#line 154 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 154 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 154 "query.m"
    {
#line 154 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 154 "query.m"
  }
#line 154 "query.m"
}

#line 154 "query.m"
MR_bool MR_CALL 
query____Unify____caller_groups_0_0(
#line 154 "query.m"
  MR_Word query__HeadVar__2_1,
#line 154 "query.m"
  MR_Word query__HeadVar__2_2)
#line 154 "query.m"
{
#line 11630 "query.c"
  {
#line 11632 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11635 "query.c"
    return query__succeeded;
#line 11637 "query.c"
  }
#line 154 "query.m"
}

#line 278 "query.m"
void MR_CALL 
query____Compare____box_tables_0_0(
#line 278 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 278 "query.m"
  MR_Word query__HeadVar__2_2,
#line 278 "query.m"
  MR_Word query__HeadVar__3_3)
#line 278 "query.m"
{
#line 278 "query.m"
  {
#line 278 "query.m"
    MR_bool query__succeeded;
#line 278 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 278 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 278 "query.m"
    {
#line 278 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 278 "query.m"
  }
#line 278 "query.m"
}

#line 278 "query.m"
MR_bool MR_CALL 
query____Unify____box_tables_0_0(
#line 278 "query.m"
  MR_Word query__HeadVar__2_1,
#line 278 "query.m"
  MR_Word query__HeadVar__2_2)
#line 278 "query.m"
{
#line 11681 "query.c"
  {
#line 11683 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11686 "query.c"
    return query__succeeded;
#line 11688 "query.c"
  }
#line 278 "query.m"
}

#line 259 "query.m"
void MR_CALL 
query____Compare____alloc_fields_0_0(
#line 259 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 259 "query.m"
  MR_Word query__HeadVar__2_2,
#line 259 "query.m"
  MR_Word query__HeadVar__3_3)
#line 259 "query.m"
{
#line 259 "query.m"
  {
#line 259 "query.m"
    MR_bool query__succeeded;
#line 259 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 259 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 259 "query.m"
    {
#line 259 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
    }
#line 259 "query.m"
  }
#line 259 "query.m"
}

#line 259 "query.m"
MR_bool MR_CALL 
query____Unify____alloc_fields_0_0(
#line 259 "query.m"
  MR_Word query__HeadVar__2_1,
#line 259 "query.m"
  MR_Word query__HeadVar__2_2)
#line 259 "query.m"
{
#line 11732 "query.c"
  {
#line 11734 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11737 "query.c"
    return query__succeeded;
#line 11739 "query.c"
  }
#line 259 "query.m"
}

#line 1365 "query.m"
static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void)
#line 1365 "query.m"
{
#line 1366 "query.m"
  {
#line 1366 "query.m"
    MR_bool query__succeeded;

#line 1366 "query.m"
    return (MR_String) "call_site_dynamic_var_use";
#line 1366 "query.m"
  }
#line 1365 "query.m"
}

#line 1362 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void)
#line 1362 "query.m"
{
#line 1363 "query.m"
  {
#line 1363 "query.m"
    MR_bool query__succeeded;

#line 1363 "query.m"
    return (MR_String) "dump_raw_clique";
#line 1363 "query.m"
  }
#line 1362 "query.m"
}

#line 1359 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void)
#line 1359 "query.m"
{
#line 1360 "query.m"
  {
#line 1360 "query.m"
    MR_bool query__succeeded;

#line 1360 "query.m"
    return (MR_String) "dump_call_site_dynamic";
#line 1360 "query.m"
  }
#line 1359 "query.m"
}

#line 1356 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void)
#line 1356 "query.m"
{
#line 1357 "query.m"
  {
#line 1357 "query.m"
    MR_bool query__succeeded;

#line 1357 "query.m"
    return (MR_String) "dump_call_site_static";
#line 1357 "query.m"
  }
#line 1356 "query.m"
}

#line 1353 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void)
#line 1353 "query.m"
{
#line 1354 "query.m"
  {
#line 1354 "query.m"
    MR_bool query__succeeded;

#line 1354 "query.m"
    return (MR_String) "dump_proc_dynamic";
#line 1354 "query.m"
  }
#line 1353 "query.m"
}

#line 1350 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void)
#line 1350 "query.m"
{
#line 1351 "query.m"
  {
#line 1351 "query.m"
    MR_bool query__succeeded;

#line 1351 "query.m"
    return (MR_String) "dump_proc_static";
#line 1351 "query.m"
  }
#line 1350 "query.m"
}

#line 1347 "query.m"
static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void)
#line 1347 "query.m"
{
#line 1348 "query.m"
  {
#line 1348 "query.m"
    MR_bool query__succeeded;

#line 1348 "query.m"
    return (MR_String) "proc_dynamic_coverage";
#line 1348 "query.m"
  }
#line 1347 "query.m"
}

#line 1344 "query.m"
static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void)
#line 1344 "query.m"
{
#line 1345 "query.m"
  {
#line 1345 "query.m"
    MR_bool query__succeeded;

#line 1345 "query.m"
    return (MR_String) "proc_static_coverage";
#line 1345 "query.m"
  }
#line 1344 "query.m"
}

#line 1341 "query.m"
static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void)
#line 1341 "query.m"
{
#line 1342 "query.m"
  {
#line 1342 "query.m"
    MR_bool query__succeeded;

#line 1342 "query.m"
    return (MR_String) "top_procs";
#line 1342 "query.m"
  }
#line 1341 "query.m"
}

#line 1338 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void)
#line 1338 "query.m"
{
#line 1339 "query.m"
  {
#line 1339 "query.m"
    MR_bool query__succeeded;

#line 1339 "query.m"
    return (MR_String) "module_rep";
#line 1339 "query.m"
  }
#line 1338 "query.m"
}

#line 1335 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void)
#line 1335 "query.m"
{
#line 1336 "query.m"
  {
#line 1336 "query.m"
    MR_bool query__succeeded;

#line 1336 "query.m"
    return (MR_String) "module_getter_setters";
#line 1336 "query.m"
  }
#line 1335 "query.m"
}

#line 1332 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void)
#line 1332 "query.m"
{
#line 1333 "query.m"
  {
#line 1333 "query.m"
    MR_bool query__succeeded;

#line 1333 "query.m"
    return (MR_String) "module";
#line 1333 "query.m"
  }
#line 1332 "query.m"
}

#line 1329 "query.m"
static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void)
#line 1329 "query.m"
{
#line 1330 "query.m"
  {
#line 1330 "query.m"
    MR_bool query__succeeded;

#line 1330 "query.m"
    return (MR_String) "program_modules";
#line 1330 "query.m"
  }
#line 1329 "query.m"
}

#line 1326 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void)
#line 1326 "query.m"
{
#line 1327 "query.m"
  {
#line 1327 "query.m"
    MR_bool query__succeeded;

#line 1327 "query.m"
    return (MR_String) "proc_callers";
#line 1327 "query.m"
  }
#line 1326 "query.m"
}

#line 1323 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void)
#line 1323 "query.m"
{
#line 1324 "query.m"
  {
#line 1324 "query.m"
    MR_bool query__succeeded;

#line 1324 "query.m"
    return (MR_String) "proc";
#line 1324 "query.m"
  }
#line 1323 "query.m"
}

#line 1320 "query.m"
static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void)
#line 1320 "query.m"
{
#line 1321 "query.m"
  {
#line 1321 "query.m"
    MR_bool query__succeeded;

#line 1321 "query.m"
    return (MR_String) "recursion_type_freq";
#line 1321 "query.m"
  }
#line 1320 "query.m"
}

#line 1317 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void)
#line 1317 "query.m"
{
#line 1318 "query.m"
  {
#line 1318 "query.m"
    MR_bool query__succeeded;

#line 1318 "query.m"
    return (MR_String) "clique_rc";
#line 1318 "query.m"
  }
#line 1317 "query.m"
}

#line 1314 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void)
#line 1314 "query.m"
{
#line 1315 "query.m"
  {
#line 1315 "query.m"
    MR_bool query__succeeded;

#line 1315 "query.m"
    return (MR_String) "clique";
#line 1315 "query.m"
  }
#line 1314 "query.m"
}

#line 1311 "query.m"
static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void)
#line 1311 "query.m"
{
#line 1312 "query.m"
  {
#line 1312 "query.m"
    MR_bool query__succeeded;

#line 1312 "query.m"
    return (MR_String) "root";
#line 1312 "query.m"
  }
#line 1311 "query.m"
}

#line 1308 "query.m"
static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void)
#line 1308 "query.m"
{
#line 1309 "query.m"
  {
#line 1309 "query.m"
    MR_bool query__succeeded;

#line 1309 "query.m"
    return (MR_String) "menu";
#line 1309 "query.m"
  }
#line 1308 "query.m"
}

#line 1305 "query.m"
static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void)
#line 1305 "query.m"
{
#line 1306 "query.m"
  {
#line 1306 "query.m"
    MR_bool query__succeeded;

#line 1306 "query.m"
    return (MR_String) "timeout";
#line 1306 "query.m"
  }
#line 1305 "query.m"
}

#line 1302 "query.m"
static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void)
#line 1302 "query.m"
{
#line 1303 "query.m"
  {
#line 1303 "query.m"
    MR_bool query__succeeded;

#line 1303 "query.m"
    return (MR_String) "restart";
#line 1303 "query.m"
  }
#line 1302 "query.m"
}

#line 1299 "query.m"
static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void)
#line 1299 "query.m"
{
#line 1300 "query.m"
  {
#line 1300 "query.m"
    MR_bool query__succeeded;

#line 1300 "query.m"
    return (MR_String) "quit";
#line 1300 "query.m"
  }
#line 1299 "query.m"
}

#line 1285 "query.m"
static MR_String MR_CALL 
query__box_to_string_1_f_0(
#line 1285 "query.m"
  MR_Word query__Box_3)
#line 1285 "query.m"
{
#line 1294 "query.m"
  {
#line 1294 "query.m"
    MR_bool query__succeeded;
#line 1294 "query.m"
    MR_String query__String_4;

#line 1294 "query.m"
#line 1294 "query.m"
    switch (query__Box_3) {
#line 1294 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "query.m"
      case (MR_Integer) 0:
#line 1294 "query.m"
        query__String_4 = (MR_String) "box";
#line 1294 "query.m"
        break;
#line 1294 "query.m"
      case (MR_Integer) 1:
#line 1295 "query.m"
        query__String_4 = (MR_String) "nobox";
#line 1294 "query.m"
        break;
#line 1294 "query.m"
    }
#line 1294 "query.m"
    return query__String_4;
#line 1294 "query.m"
  }
#line 1285 "query.m"
}

#line 1273 "query.m"
static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
#line 1273 "query.m"
  MR_Word query__Scheme_3)
#line 1273 "query.m"
{
#line 1282 "query.m"
  {
#line 1282 "query.m"
    MR_bool query__succeeded;
#line 1282 "query.m"
    MR_String query__String_4;

#line 1282 "query.m"
#line 1282 "query.m"
    switch (query__Scheme_3) {
#line 1282 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1282 "query.m"
      case (MR_Integer) 0:
#line 1282 "query.m"
        query__String_4 = (MR_String) "cols";
#line 1282 "query.m"
        break;
#line 1282 "query.m"
      case (MR_Integer) 1:
#line 1283 "query.m"
        query__String_4 = (MR_String) "none";
#line 1282 "query.m"
        break;
#line 1282 "query.m"
    }
#line 1282 "query.m"
    return query__String_4;
#line 1282 "query.m"
  }
#line 1273 "query.m"
}

#line 1261 "query.m"
static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
#line 1261 "query.m"
  MR_Word query__DevMode_3)
#line 1261 "query.m"
{
#line 1270 "query.m"
  {
#line 1270 "query.m"
    MR_bool query__succeeded;
#line 1270 "query.m"
    MR_String query__String_4;

#line 1270 "query.m"
#line 1270 "query.m"
    switch (query__DevMode_3) {
#line 1270 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1270 "query.m"
      case (MR_Integer) 1:
#line 1271 "query.m"
        query__String_4 = (MR_String) "nodev";
#line 1270 "query.m"
        break;
#line 1270 "query.m"
      case (MR_Integer) 0:
#line 1270 "query.m"
        query__String_4 = (MR_String) "dev";
#line 1270 "query.m"
        break;
#line 1270 "query.m"
    }
#line 1270 "query.m"
    return query__String_4;
#line 1270 "query.m"
  }
#line 1261 "query.m"
}

#line 1241 "query.m"
static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
#line 1241 "query.m"
  MR_String query__HeadVar__1_1,
#line 1241 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1241 "query.m"
{
#line 1244 "query.m"
  {
#line 1244 "query.m"
    MR_bool query__succeeded;
#line 1244 "query.m"
    MR_Integer query__slot_0;
#line 1244 "query.m"
    MR_String query__str_1;

#line 1244 "query.m"
    /* hashed string simple lookup switch */
#line 1244 "query.m"
    /* compute the hash value of the input string */
#line 1244 "query.m"
    query__slot_0 = ((MR_hash_string5(query__HeadVar__1_1)) & (MR_Integer) 15);
#line 1244 "query.m"
    /* no collisions; no hash chain loop */
#line 1244 "query.m"
    /* lookup the string for this hash slot */
#line 1244 "query.m"
    query__str_1 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_0;
#line 1244 "query.m"
    /* did we find a match? */
#line 1244 "query.m"
    if ((((query__str_1 != NULL)) && ((strcmp(query__str_1, query__HeadVar__1_1) == 0))))
#line 1244 "query.m"
      {
#line 1244 "query.m"
        /* we found a match; look up the results */
#line 1244 "query.m"
        *query__HeadVar__2_2 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_1;
#line 1244 "query.m"
        query__succeeded = MR_TRUE;
#line 1244 "query.m"
        /* jump out of search loop */
#line 1244 "query.m"
        goto label_0;
#line 1244 "query.m"
      }
#line 1244 "query.m"
    query__succeeded = MR_FALSE;
#line 1244 "query.m"
  label_0:;
#line 1244 "query.m"
    return query__succeeded;
#line 1244 "query.m"
  }
#line 1241 "query.m"
}

#line 1235 "query.m"
static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
#line 1235 "query.m"
  MR_Word query__Items_3)
#line 1235 "query.m"
{
#line 1244 "query.m"
  {
#line 1244 "query.m"
    MR_bool query__succeeded;
#line 1244 "query.m"
    MR_String query__String_4;
#line 1244 "query.m"
    MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1244 "query.m"
    MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1244 "query.m"
    MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 1244 "query.m"
#line 1244 "query.m"
    switch (query__V_29_29) {
#line 1244 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
      case (MR_Integer) 0:
#line 1244 "query.m"
#line 1244 "query.m"
        switch (query__V_30_30) {
#line 1244 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
          case (MR_Integer) 0:
#line 1244 "query.m"
#line 1244 "query.m"
            switch (query__V_31_31) {
#line 1244 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
              case (MR_Integer) 0:
#line 1244 "query.m"
                query__String_4 = (MR_String) "hhh";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
              case (MR_Integer) 1:
#line 1252 "query.m"
                query__String_4 = (MR_String) "shh";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
            }
#line 1244 "query.m"
            break;
#line 1244 "query.m"
          case (MR_Integer) 1:
#line 1244 "query.m"
#line 1244 "query.m"
            switch (query__V_31_31) {
#line 1244 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
              case (MR_Integer) 0:
#line 1248 "query.m"
                query__String_4 = (MR_String) "hsh";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
              case (MR_Integer) 1:
#line 1256 "query.m"
                query__String_4 = (MR_String) "ssh";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
            }
#line 1244 "query.m"
            break;
#line 1244 "query.m"
        }
#line 1244 "query.m"
        break;
#line 1244 "query.m"
      case (MR_Integer) 1:
#line 1244 "query.m"
#line 1244 "query.m"
        switch (query__V_30_30) {
#line 1244 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
          case (MR_Integer) 0:
#line 1244 "query.m"
#line 1244 "query.m"
            switch (query__V_31_31) {
#line 1244 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
              case (MR_Integer) 0:
#line 1246 "query.m"
                query__String_4 = (MR_String) "hhs";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
              case (MR_Integer) 1:
#line 1254 "query.m"
                query__String_4 = (MR_String) "shs";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
            }
#line 1244 "query.m"
            break;
#line 1244 "query.m"
          case (MR_Integer) 1:
#line 1244 "query.m"
#line 1244 "query.m"
            switch (query__V_31_31) {
#line 1244 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1244 "query.m"
              case (MR_Integer) 0:
#line 1250 "query.m"
                query__String_4 = (MR_String) "hss";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
              case (MR_Integer) 1:
#line 1258 "query.m"
                query__String_4 = (MR_String) "sss";
#line 1244 "query.m"
                break;
#line 1244 "query.m"
            }
#line 1244 "query.m"
            break;
#line 1244 "query.m"
        }
#line 1244 "query.m"
        break;
#line 1244 "query.m"
    }
#line 1244 "query.m"
    return query__String_4;
#line 1244 "query.m"
  }
#line 1235 "query.m"
}

#line 1221 "query.m"
static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
#line 1221 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1221 "query.m"
{
#line 1223 "query.m"
  {
#line 1223 "query.m"
    MR_bool query__succeeded;
#line 1223 "query.m"
    MR_String query__HeadVar__2_2;

#line 1223 "query.m"
#line 1223 "query.m"
    switch (query__HeadVar__1_1) {
#line 1223 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1223 "query.m"
      case (MR_Integer) 0:
#line 1223 "query.m"
        query__HeadVar__2_2 = (MR_String) "no";
#line 1223 "query.m"
        break;
#line 1223 "query.m"
      case (MR_Integer) 1:
#line 1224 "query.m"
        query__HeadVar__2_2 = (MR_String) "mi";
#line 1223 "query.m"
        break;
#line 1223 "query.m"
      case (MR_Integer) 2:
#line 1225 "query.m"
        query__HeadVar__2_2 = (MR_String) "th";
#line 1223 "query.m"
        break;
#line 1223 "query.m"
    }
#line 1223 "query.m"
    return query__HeadVar__2_2;
#line 1223 "query.m"
  }
#line 1221 "query.m"
}

#line 1215 "query.m"
static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
#line 1215 "query.m"
  MR_String query__HeadVar__1_1,
#line 1215 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1215 "query.m"
{
#line 1218 "query.m"
  {
#line 1218 "query.m"
    MR_bool query__succeeded;

#line 1218 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "ac") == 0))
#line 1218 "query.m"
      {
#line 1218 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1218 "query.m"
        query__succeeded = MR_TRUE;
#line 1218 "query.m"
      }
#line 1218 "query.m"
    else
#line 1218 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "nc") == 0))
#line 1219 "query.m"
      {
#line 1219 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1219 "query.m"
        query__succeeded = MR_TRUE;
#line 1219 "query.m"
      }
#line 1218 "query.m"
    else
#line 1218 "query.m"
      query__succeeded = MR_FALSE;
#line 1218 "query.m"
    return query__succeeded;
#line 1218 "query.m"
  }
#line 1215 "query.m"
}

#line 1209 "query.m"
static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
#line 1209 "query.m"
  MR_Word query__Contour_3)
#line 1209 "query.m"
{
#line 1218 "query.m"
  {
#line 1218 "query.m"
    MR_bool query__succeeded;
#line 1218 "query.m"
    MR_String query__String_4;

#line 1218 "query.m"
#line 1218 "query.m"
    switch (query__Contour_3) {
#line 1218 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1218 "query.m"
      case (MR_Integer) 0:
#line 1218 "query.m"
        query__String_4 = (MR_String) "ac";
#line 1218 "query.m"
        break;
#line 1218 "query.m"
      case (MR_Integer) 1:
#line 1219 "query.m"
        query__String_4 = (MR_String) "nc";
#line 1218 "query.m"
        break;
#line 1218 "query.m"
    }
#line 1218 "query.m"
    return query__String_4;
#line 1218 "query.m"
  }
#line 1209 "query.m"
}

#line 1203 "query.m"
static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
#line 1203 "query.m"
  MR_String query__HeadVar__1_1,
#line 1203 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1203 "query.m"
{
#line 1206 "query.m"
  {
#line 1206 "query.m"
    MR_bool query__succeeded;

#line 1206 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "oa") == 0))
#line 1207 "query.m"
      {
#line 1207 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1207 "query.m"
        query__succeeded = MR_TRUE;
#line 1207 "query.m"
      }
#line 1206 "query.m"
    else
#line 1206 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "pc") == 0))
#line 1206 "query.m"
      {
#line 1206 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1206 "query.m"
        query__succeeded = MR_TRUE;
#line 1206 "query.m"
      }
#line 1206 "query.m"
    else
#line 1206 "query.m"
      query__succeeded = MR_FALSE;
#line 1206 "query.m"
    return query__succeeded;
#line 1206 "query.m"
  }
#line 1203 "query.m"
}

#line 1197 "query.m"
static MR_String MR_CALL 
query__scope_to_string_1_f_0(
#line 1197 "query.m"
  MR_Word query__Scope_3)
#line 1197 "query.m"
{
#line 1206 "query.m"
  {
#line 1206 "query.m"
    MR_bool query__succeeded;
#line 1206 "query.m"
    MR_String query__String_4;

#line 1206 "query.m"
#line 1206 "query.m"
    switch (query__Scope_3) {
#line 1206 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "query.m"
      case (MR_Integer) 1:
#line 1207 "query.m"
        query__String_4 = (MR_String) "oa";
#line 1206 "query.m"
        break;
#line 1206 "query.m"
      case (MR_Integer) 0:
#line 1206 "query.m"
        query__String_4 = (MR_String) "pc";
#line 1206 "query.m"
        break;
#line 1206 "query.m"
    }
#line 1206 "query.m"
    return query__String_4;
#line 1206 "query.m"
  }
#line 1197 "query.m"
}

#line 1161 "query.m"
static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
#line 1161 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1161 "query.m"
{
#line 1163 "query.m"
  {
#line 1163 "query.m"
    MR_bool query__succeeded;
#line 1163 "query.m"
    MR_String query__HeadVar__2_2;

#line 1163 "query.m"
#line 1163 "query.m"
    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 1163 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1163 "query.m"
      case (MR_Integer) 0:
#line 1163 "query.m"
#line 1163 "query.m"
        switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 1163 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1163 "query.m"
          case (MR_Integer) 0:
#line 1163 "query.m"
            query__HeadVar__2_2 = (MR_String) "context";
#line 1163 "query.m"
            break;
#line 1163 "query.m"
          case (MR_Integer) 1:
#line 1164 "query.m"
            query__HeadVar__2_2 = (MR_String) "name";
#line 1163 "query.m"
            break;
#line 1163 "query.m"
        }
#line 1163 "query.m"
        break;
#line 1163 "query.m"
      case (MR_Integer) 1:
#line 1165 "query.m"
        {
#line 1165 "query.m"
          MR_Word query__CostKind_3 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 1165 "query.m"
          MR_Word query__InclDesc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1165 "query.m"
          MR_Word query__Scope_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1165 "query.m"
          MR_String query__V_7_7;
#line 1165 "query.m"
          MR_String query__V_8_8;
#line 1165 "query.m"
          MR_String query__V_10_10;
#line 1165 "query.m"
          MR_String query__V_11_11;
#line 1165 "query.m"
          MR_String query__V_12_12;
#line 1165 "query.m"
          MR_String query__V_13_13;
#line 1165 "query.m"
          MR_String query__V_15_15;
#line 1165 "query.m"
          MR_String query__V_16_16;
#line 1165 "query.m"
          MR_String query__V_17_17;
#line 1165 "query.m"
          MR_String query__V_18_18;
#line 1165 "query.m"
          MR_String query__V_20_20;

#line 1167 "query.m"
          {
#line 1167 "query.m"
            query__V_8_8 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1086 "query.m"
          query__V_11_11 = ((&query_vector_common_7[16 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;
#line 1169 "query.m"
          {
#line 1169 "query.m"
            query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1102 "query.m"
#line 1102 "query.m"
          switch (query__InclDesc_4) {
#line 1102 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "query.m"
            case (MR_Integer) 0:
#line 1102 "query.m"
              query__V_16_16 = (MR_String) "self";
#line 1102 "query.m"
              break;
#line 1102 "query.m"
            case (MR_Integer) 1:
#line 1103 "query.m"
              query__V_16_16 = (MR_String) "both";
#line 1102 "query.m"
              break;
#line 1102 "query.m"
          }
#line 1171 "query.m"
          {
#line 1171 "query.m"
            query__V_18_18 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1206 "query.m"
#line 1206 "query.m"
          switch (query__Scope_5) {
#line 1206 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "query.m"
            case (MR_Integer) 1:
#line 1207 "query.m"
              query__V_20_20 = (MR_String) "oa";
#line 1206 "query.m"
              break;
#line 1206 "query.m"
            case (MR_Integer) 0:
#line 1206 "query.m"
              query__V_20_20 = (MR_String) "pc";
#line 1206 "query.m"
              break;
#line 1206 "query.m"
          }
#line 1171 "query.m"
          {
#line 1171 "query.m"
            query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_20_20);
          }
#line 1170 "query.m"
          {
#line 1170 "query.m"
            query__V_15_15 = mercury__string__f_43_43_2_f_0(query__V_16_16, query__V_17_17);
          }
#line 1169 "query.m"
          {
#line 1169 "query.m"
            query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
          }
#line 1168 "query.m"
          {
#line 1168 "query.m"
            query__V_10_10 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
          }
#line 1167 "query.m"
          {
#line 1167 "query.m"
            query__V_7_7 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_10_10);
          }
#line 1166 "query.m"
          {
#line 1166 "query.m"
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cost", query__V_7_7);
          }
#line 1165 "query.m"
        }
#line 1163 "query.m"
        break;
#line 1163 "query.m"
    }
#line 1163 "query.m"
    return query__HeadVar__2_2;
#line 1163 "query.m"
  }
#line 1161 "query.m"
}

#line 1149 "query.m"
static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
#line 1149 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1149 "query.m"
{
#line 1151 "query.m"
  {
#line 1151 "query.m"
    MR_bool query__succeeded;
#line 1151 "query.m"
    MR_String query__HeadVar__2_2;

#line 1151 "query.m"
#line 1151 "query.m"
    switch (query__HeadVar__1_1) {
#line 1151 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1151 "query.m"
      case (MR_Integer) 0:
#line 1151 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqa";
#line 1151 "query.m"
        break;
#line 1151 "query.m"
      case (MR_Integer) 2:
#line 1153 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqn";
#line 1151 "query.m"
        break;
#line 1151 "query.m"
      case (MR_Integer) 1:
#line 1152 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqwd";
#line 1151 "query.m"
        break;
#line 1151 "query.m"
    }
#line 1151 "query.m"
    return query__HeadVar__2_2;
#line 1151 "query.m"
  }
#line 1149 "query.m"
}

#line 1138 "query.m"
static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
#line 1138 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1138 "query.m"
{
#line 1140 "query.m"
  {
#line 1140 "query.m"
    MR_bool query__succeeded;
#line 1140 "query.m"
    MR_String query__HeadVar__2_2;

#line 1140 "query.m"
#line 1140 "query.m"
    switch (query__HeadVar__1_1) {
#line 1140 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1140 "query.m"
      case (MR_Integer) 1:
#line 1141 "query.m"
        query__HeadVar__2_2 = (MR_String) "nosum";
#line 1140 "query.m"
        break;
#line 1140 "query.m"
      case (MR_Integer) 0:
#line 1140 "query.m"
        query__HeadVar__2_2 = (MR_String) "sum";
#line 1140 "query.m"
        break;
#line 1140 "query.m"
    }
#line 1140 "query.m"
    return query__HeadVar__2_2;
#line 1140 "query.m"
  }
#line 1138 "query.m"
}

#line 1114 "query.m"
static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
#line 1114 "query.m"
  MR_String query__LimitStr_3,
#line 1114 "query.m"
  MR_Word * query__Limit_4)
#line 1114 "query.m"
{
#line 1124 "query.m"
  {
#line 1124 "query.m"
    MR_bool query__succeeded;
#line 1124 "query.m"
    MR_Integer query__First_8;
#line 1124 "query.m"
    MR_Integer query__Last_9;
#line 1118 "query.m"
    MR_Word query__Pieces_5;
#line 1118 "query.m"
    MR_String query__FirstStr_6;
#line 1118 "query.m"
    MR_String query__LastStr_7;
#line 1118 "query.m"
    MR_Word query__V_15_15;
#line 1118 "query.m"
    MR_Word query__V_16_16;

#line 1118 "query.m"
    {
#line 1118 "query.m"
      util__split_3_p_0(query__LimitStr_3, (MR_Char) 45, &query__Pieces_5);
    }
#line 1119 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 1119 "query.m"
    if (query__succeeded)
#line 1119 "query.m"
      {
#line 1119 "query.m"
        query__FirstStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 1119 "query.m"
        query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 1119 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1119 "query.m"
        if (query__succeeded)
#line 1119 "query.m"
          {
#line 1119 "query.m"
            query__LastStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 0)));
#line 1119 "query.m"
            query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 1)));
#line 1119 "query.m"
            query__succeeded = (query__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1118 "query.m"
            if (query__succeeded)
#line 1118 "query.m"
              {
#line 1120 "query.m"
                {
#line 1120 "query.m"
                  query__succeeded = mercury__string__to_int_2_p_0(query__FirstStr_6, &query__First_8);
                }
#line 1118 "query.m"
                if (query__succeeded)
#line 1121 "query.m"
                  {
#line 1121 "query.m"
                    query__succeeded = mercury__string__to_int_2_p_0(query__LastStr_7, &query__Last_9);
                  }
#line 1118 "query.m"
              }
#line 1119 "query.m"
          }
#line 1119 "query.m"
      }
#line 1124 "query.m"
    if (query__succeeded)
#line 1123 "query.m"
      {
#line 1123 "query.m"
        {
#line 1123 "query.m"
          MR_Word base;
#line 1123 "query.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "query.m"
          *query__Limit_4 = base;
#line 1123 "query.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (query__First_8));
#line 1123 "query.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (query__Last_9));
#line 1123 "query.m"
        }
#line 1123 "query.m"
        query__succeeded = MR_TRUE;
#line 1123 "query.m"
      }
#line 1124 "query.m"
    else
#line 1129 "query.m"
      {
#line 1129 "query.m"
        MR_Float query__Threshold_11;
#line 1125 "query.m"
        MR_String query__PercentStr_10;

#line 1125 "query.m"
        {
#line 1125 "query.m"
          query__succeeded = mercury__string__append_3_p_1((MR_String) "p", &query__PercentStr_10, query__LimitStr_3);
        }
#line 1125 "query.m"
        if (query__succeeded)
#line 1126 "query.m"
          {
#line 1126 "query.m"
            query__succeeded = mercury__string__to_float_2_p_0(query__PercentStr_10, &query__Threshold_11);
          }
#line 1129 "query.m"
        if (query__succeeded)
#line 1128 "query.m"
          {
#line 1128 "query.m"
            {
#line 1128 "query.m"
              MR_Word base;
#line 1128 "query.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1128 "query.m"
              *query__Limit_4 = base;
#line 1128 "query.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(query__Threshold_11);
#line 1128 "query.m"
            }
#line 1128 "query.m"
            query__succeeded = MR_TRUE;
#line 1128 "query.m"
          }
#line 1129 "query.m"
        else
#line 1134 "query.m"
          {
#line 1134 "query.m"
            MR_String query__ValueStr_12;
#line 1134 "query.m"
            MR_Float query__Value_13;

#line 1130 "query.m"
            {
#line 1130 "query.m"
              query__succeeded = mercury__string__append_3_p_1((MR_String) "v", &query__ValueStr_12, query__LimitStr_3);
            }
#line 1134 "query.m"
            if (query__succeeded)
#line 1134 "query.m"
              {
#line 1131 "query.m"
                {
#line 1131 "query.m"
                  query__succeeded = mercury__string__to_float_2_p_0(query__ValueStr_12, &query__Value_13);
                }
#line 1134 "query.m"
                if (query__succeeded)
#line 1134 "query.m"
                  {
#line 1133 "query.m"
                    {
#line 1133 "query.m"
                      MR_Word base;
#line 1133 "query.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "query.m"
                      *query__Limit_4 = base;
#line 1133 "query.m"
                      MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(query__Value_13);
#line 1133 "query.m"
                    }
#line 1133 "query.m"
                    query__succeeded = MR_TRUE;
#line 1134 "query.m"
                  }
#line 1134 "query.m"
              }
#line 1134 "query.m"
          }
#line 1129 "query.m"
      }
#line 1124 "query.m"
    return query__succeeded;
#line 1124 "query.m"
  }
#line 1114 "query.m"
}

#line 1105 "query.m"
static MR_String MR_CALL 
query__limit_to_string_1_f_0(
#line 1105 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1105 "query.m"
{
#line 1107 "query.m"
  {
#line 1107 "query.m"
    MR_bool query__succeeded;
#line 1107 "query.m"
    MR_String query__HeadVar__2_2;

#line 1107 "query.m"
#line 1107 "query.m"
    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 1107 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1107 "query.m"
      case (MR_Integer) 0:
#line 1107 "query.m"
        {
#line 1107 "query.m"
          MR_Integer query__Lo_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "query.m"
          MR_Integer query__Hi_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 1107 "query.m"
          MR_String query__V_42_42;
#line 1107 "query.m"
          MR_Word query__V_48_48 = (MR_Word) &query_scalar_common_2[1];
#line 1107 "query.m"
          MR_String query__V_49_49;
#line 1107 "query.m"
          MR_String query__V_56_56;
#line 1107 "query.m"
          MR_String query__V_57_57;

#line 1108 "query.m"
          {
#line 1108 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Hi_4, &query__V_42_42);
          }
#line 1108 "query.m"
          {
#line 1108 "query.m"
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_48_48, (MR_Char) 45, &query__V_49_49);
          }
#line 1108 "query.m"
          {
#line 1108 "query.m"
            query__V_56_56 = mercury__string__f_43_43_2_f_0(query__V_49_49, query__V_42_42);
          }
#line 1108 "query.m"
          {
#line 1108 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Lo_3, &query__V_57_57);
          }
#line 1108 "query.m"
          {
#line 1108 "query.m"
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_56_56);
          }
#line 1107 "query.m"
        }
#line 1107 "query.m"
        break;
#line 1107 "query.m"
      case (MR_Integer) 1:
#line 1109 "query.m"
        {
#line 1109 "query.m"
          MR_Float query__Threshold_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1109 "query.m"
          MR_String query__V_33_33;

#line 1110 "query.m"
          {
#line 1110 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Threshold_14, &query__V_33_33);
          }
#line 1110 "query.m"
          {
#line 1110 "query.m"
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "p", query__V_33_33);
          }
#line 1109 "query.m"
        }
#line 1107 "query.m"
        break;
#line 1107 "query.m"
      case (MR_Integer) 2:
#line 1111 "query.m"
        {
#line 1111 "query.m"
          MR_Float query__Value_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1111 "query.m"
          MR_String query__V_24_24;

#line 1112 "query.m"
          {
#line 1112 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Value_19, &query__V_24_24);
          }
#line 1112 "query.m"
          {
#line 1112 "query.m"
            query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "v", query__V_24_24);
          }
#line 1111 "query.m"
        }
#line 1107 "query.m"
        break;
#line 1107 "query.m"
    }
#line 1107 "query.m"
    return query__HeadVar__2_2;
#line 1107 "query.m"
  }
#line 1105 "query.m"
}

#line 1099 "query.m"
static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
#line 1099 "query.m"
  MR_String query__HeadVar__1_1,
#line 1099 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1099 "query.m"
{
#line 1102 "query.m"
  {
#line 1102 "query.m"
    MR_bool query__succeeded;

#line 1102 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "both") == 0))
#line 1103 "query.m"
      {
#line 1103 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1103 "query.m"
        query__succeeded = MR_TRUE;
#line 1103 "query.m"
      }
#line 1102 "query.m"
    else
#line 1102 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "self") == 0))
#line 1102 "query.m"
      {
#line 1102 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1102 "query.m"
        query__succeeded = MR_TRUE;
#line 1102 "query.m"
      }
#line 1102 "query.m"
    else
#line 1102 "query.m"
      query__succeeded = MR_FALSE;
#line 1102 "query.m"
    return query__succeeded;
#line 1102 "query.m"
  }
#line 1099 "query.m"
}

#line 1093 "query.m"
static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
#line 1093 "query.m"
  MR_Word query__InclDesc_3)
#line 1093 "query.m"
{
#line 1102 "query.m"
  {
#line 1102 "query.m"
    MR_bool query__succeeded;
#line 1102 "query.m"
    MR_String query__String_4;

#line 1102 "query.m"
#line 1102 "query.m"
    switch (query__InclDesc_3) {
#line 1102 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1102 "query.m"
      case (MR_Integer) 0:
#line 1102 "query.m"
        query__String_4 = (MR_String) "self";
#line 1102 "query.m"
        break;
#line 1102 "query.m"
      case (MR_Integer) 1:
#line 1103 "query.m"
        query__String_4 = (MR_String) "both";
#line 1102 "query.m"
        break;
#line 1102 "query.m"
    }
#line 1102 "query.m"
    return query__String_4;
#line 1102 "query.m"
  }
#line 1093 "query.m"
}

#line 1083 "query.m"
static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
#line 1083 "query.m"
  MR_String query__HeadVar__1_1,
#line 1083 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1083 "query.m"
{
#line 1086 "query.m"
  {
#line 1086 "query.m"
    MR_bool query__succeeded;
#line 1086 "query.m"
    MR_Integer query__lo_0;
#line 1086 "query.m"
    MR_Integer query__hi_1;
#line 1086 "query.m"
    MR_Integer query__mid_2;
#line 1086 "query.m"
    MR_Integer query__result_3;

#line 1086 "query.m"
    /* binary string simple lookup switch */
#line 1086 "query.m"
    query__lo_0 = (MR_Integer) 0;
#line 1086 "query.m"
    query__hi_1 = (MR_Integer) 5;
#line 1086 "query.m"
    do
#line 1086 "query.m"
      {
#line 1086 "query.m"
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 1086 "query.m"
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_0);
#line 1086 "query.m"
        if ((query__result_3 == (MR_Integer) 0))
#line 1086 "query.m"
          {
#line 1086 "query.m"
            *query__HeadVar__2_2 = ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_1;
#line 1086 "query.m"
            query__succeeded = MR_TRUE;
#line 1086 "query.m"
            /* jump out of search loop */
#line 1086 "query.m"
            goto label_0;
#line 1086 "query.m"
          }
#line 1086 "query.m"
        else
#line 1086 "query.m"
        if ((query__result_3 < (MR_Integer) 0))
#line 1086 "query.m"
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 1086 "query.m"
        else
#line 1086 "query.m"
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 1086 "query.m"
      }
#line 1086 "query.m"
    while ((query__lo_0 <= query__hi_1));
#line 1086 "query.m"
    query__succeeded = MR_FALSE;
#line 1086 "query.m"
  label_0:;
#line 1086 "query.m"
    return query__succeeded;
#line 1086 "query.m"
  }
#line 1083 "query.m"
}

#line 1077 "query.m"
static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
#line 1077 "query.m"
  MR_Word query__CostKind_3)
#line 1077 "query.m"
{
#line 1086 "query.m"
  {
#line 1086 "query.m"
    MR_bool query__succeeded;
#line 1086 "query.m"
    MR_String query__String_4 = ((&query_vector_common_7[10 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;

#line 1086 "query.m"
    return query__String_4;
#line 1086 "query.m"
  }
#line 1077 "query.m"
}

#line 1069 "query.m"
static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
#line 1069 "query.m"
  MR_String query__HeadVar__1_1,
#line 1069 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1069 "query.m"
{
#line 1072 "query.m"
  {
#line 1072 "query.m"
    MR_bool query__succeeded;
#line 1072 "query.m"
    MR_Integer query__lo_0;
#line 1072 "query.m"
    MR_Integer query__hi_1;
#line 1072 "query.m"
    MR_Integer query__mid_2;
#line 1072 "query.m"
    MR_Integer query__result_3;

#line 1072 "query.m"
    /* binary string simple lookup switch */
#line 1072 "query.m"
    query__lo_0 = (MR_Integer) 0;
#line 1072 "query.m"
    query__hi_1 = (MR_Integer) 3;
#line 1072 "query.m"
    do
#line 1072 "query.m"
      {
#line 1072 "query.m"
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 1072 "query.m"
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_0);
#line 1072 "query.m"
        if ((query__result_3 == (MR_Integer) 0))
#line 1072 "query.m"
          {
#line 1072 "query.m"
            *query__HeadVar__2_2 = ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_1;
#line 1072 "query.m"
            query__succeeded = MR_TRUE;
#line 1072 "query.m"
            /* jump out of search loop */
#line 1072 "query.m"
            goto label_0;
#line 1072 "query.m"
          }
#line 1072 "query.m"
        else
#line 1072 "query.m"
        if ((query__result_3 < (MR_Integer) 0))
#line 1072 "query.m"
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 1072 "query.m"
        else
#line 1072 "query.m"
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 1072 "query.m"
      }
#line 1072 "query.m"
    while ((query__lo_0 <= query__hi_1));
#line 1072 "query.m"
    query__succeeded = MR_FALSE;
#line 1072 "query.m"
  label_0:;
#line 1072 "query.m"
    return query__succeeded;
#line 1072 "query.m"
  }
#line 1069 "query.m"
}

#line 1063 "query.m"
static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
#line 1063 "query.m"
  MR_Word query__CallerGroups_3)
#line 1063 "query.m"
{
#line 1072 "query.m"
  {
#line 1072 "query.m"
    MR_bool query__succeeded;
#line 1072 "query.m"
    MR_String query__String_4 = ((&query_vector_common_7[6 + query__CallerGroups_3]))->query__vector_common_type_7_0__vct_7_f_0;

#line 1072 "query.m"
    return query__String_4;
#line 1072 "query.m"
  }
#line 1063 "query.m"
}

#line 1033 "query.m"
static MR_String MR_CALL 
query__fields_to_string_1_f_0(
#line 1033 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1033 "query.m"
{
#line 1035 "query.m"
  {
#line 1035 "query.m"
    MR_bool query__succeeded;
#line 1035 "query.m"
    MR_String query__HeadVar__2_2;
#line 1035 "query.m"
    MR_Word query__Port_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1035 "query.m"
    MR_Word query__Time_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 1035 "query.m"
    MR_Word query__CallSeqs_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 1035 "query.m"
    MR_Word query__Allocs_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 1035 "query.m"
    MR_Word query__Memory_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 1035 "query.m"
    MR_String query__V_8_8;
#line 1035 "query.m"
    MR_String query__V_9_9;
#line 1035 "query.m"
    MR_String query__V_10_10;
#line 1035 "query.m"
    MR_String query__V_12_12;
#line 1035 "query.m"
    MR_String query__V_13_13;
#line 1035 "query.m"
    MR_String query__V_14_14;
#line 1035 "query.m"
    MR_String query__V_15_15;
#line 1035 "query.m"
    MR_String query__V_17_17;
#line 1035 "query.m"
    MR_String query__V_18_18;
#line 1035 "query.m"
    MR_String query__V_19_19;
#line 1035 "query.m"
    MR_String query__V_20_20;
#line 1035 "query.m"
    MR_String query__V_22_22;
#line 1035 "query.m"
    MR_String query__V_23_23;
#line 1035 "query.m"
    MR_String query__V_24_24;
#line 1035 "query.m"
    MR_String query__V_25_25;
#line 1035 "query.m"
    MR_String query__V_27_27;

#line 973 "query.m"
#line 973 "query.m"
    switch (query__Port_3) {
#line 973 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 973 "query.m"
      case (MR_Integer) 0:
#line 973 "query.m"
        query__V_8_8 = (MR_String) "_";
#line 973 "query.m"
        break;
#line 973 "query.m"
      case (MR_Integer) 1:
#line 974 "query.m"
        query__V_8_8 = (MR_String) "p";
#line 973 "query.m"
        break;
#line 973 "query.m"
    }
#line 1037 "query.m"
    {
#line 1037 "query.m"
      query__V_10_10 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 985 "query.m"
    query__V_13_13 = ((&query_vector_common_7[0 + query__Time_4]))->query__vector_common_type_7_0__vct_7_f_0;
#line 1039 "query.m"
    {
#line 1039 "query.m"
      query__V_15_15 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1001 "query.m"
#line 1001 "query.m"
    switch (query__CallSeqs_5) {
#line 1001 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1001 "query.m"
      case (MR_Integer) 1:
#line 1002 "query.m"
        query__V_18_18 = (MR_String) "s";
#line 1001 "query.m"
        break;
#line 1001 "query.m"
      case (MR_Integer) 2:
#line 1003 "query.m"
        query__V_18_18 = (MR_String) "S";
#line 1001 "query.m"
        break;
#line 1001 "query.m"
      case (MR_Integer) 0:
#line 1001 "query.m"
        query__V_18_18 = (MR_String) "_";
#line 1001 "query.m"
        break;
#line 1001 "query.m"
    }
#line 1041 "query.m"
    {
#line 1041 "query.m"
      query__V_20_20 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1014 "query.m"
#line 1014 "query.m"
    switch (query__Allocs_6) {
#line 1014 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1014 "query.m"
      case (MR_Integer) 1:
#line 1015 "query.m"
        query__V_23_23 = (MR_String) "a";
#line 1014 "query.m"
        break;
#line 1014 "query.m"
      case (MR_Integer) 2:
#line 1016 "query.m"
        query__V_23_23 = (MR_String) "A";
#line 1014 "query.m"
        break;
#line 1014 "query.m"
      case (MR_Integer) 0:
#line 1014 "query.m"
        query__V_23_23 = (MR_String) "_";
#line 1014 "query.m"
        break;
#line 1014 "query.m"
    }
#line 1043 "query.m"
    {
#line 1043 "query.m"
      query__V_25_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1027 "query.m"
#line 1027 "query.m"
    switch (MR_tag((MR_Word) query__Memory_7)) {
#line 1027 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1027 "query.m"
      case (MR_Integer) 0:
#line 1027 "query.m"
        query__V_27_27 = (MR_String) "_";
#line 1027 "query.m"
        break;
#line 1027 "query.m"
      case (MR_Integer) 1:
#line 1027 "query.m"
        {
#line 1027 "query.m"
          MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Memory_7, (MR_Integer) 0)));

#line 1027 "query.m"
#line 1027 "query.m"
          switch (query__V_42_42) {
#line 1027 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1027 "query.m"
            case (MR_Integer) 1:
#line 1028 "query.m"
              query__V_27_27 = (MR_String) "b";
#line 1027 "query.m"
              break;
#line 1027 "query.m"
            case (MR_Integer) 0:
#line 1029 "query.m"
              query__V_27_27 = (MR_String) "w";
#line 1027 "query.m"
              break;
#line 1027 "query.m"
          }
#line 1027 "query.m"
        }
#line 1027 "query.m"
        break;
#line 1027 "query.m"
      case (MR_Integer) 2:
#line 1027 "query.m"
        {
#line 1027 "query.m"
          MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Memory_7, (MR_Integer) 0)));

#line 1027 "query.m"
#line 1027 "query.m"
          switch (query__V_43_43) {
#line 1027 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1027 "query.m"
            case (MR_Integer) 1:
#line 1030 "query.m"
              query__V_27_27 = (MR_String) "B";
#line 1027 "query.m"
              break;
#line 1027 "query.m"
            case (MR_Integer) 0:
#line 1031 "query.m"
              query__V_27_27 = (MR_String) "W";
#line 1027 "query.m"
              break;
#line 1027 "query.m"
          }
#line 1027 "query.m"
        }
#line 1027 "query.m"
        break;
#line 1027 "query.m"
    }
#line 1043 "query.m"
    {
#line 1043 "query.m"
      query__V_24_24 = mercury__string__f_43_43_2_f_0(query__V_25_25, query__V_27_27);
    }
#line 1042 "query.m"
    {
#line 1042 "query.m"
      query__V_22_22 = mercury__string__f_43_43_2_f_0(query__V_23_23, query__V_24_24);
    }
#line 1041 "query.m"
    {
#line 1041 "query.m"
      query__V_19_19 = mercury__string__f_43_43_2_f_0(query__V_20_20, query__V_22_22);
    }
#line 1040 "query.m"
    {
#line 1040 "query.m"
      query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_19_19);
    }
#line 1039 "query.m"
    {
#line 1039 "query.m"
      query__V_14_14 = mercury__string__f_43_43_2_f_0(query__V_15_15, query__V_17_17);
    }
#line 1038 "query.m"
    {
#line 1038 "query.m"
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_14_14);
    }
#line 1037 "query.m"
    {
#line 1037 "query.m"
      query__V_9_9 = mercury__string__f_43_43_2_f_0(query__V_10_10, query__V_12_12);
    }
#line 1036 "query.m"
    {
#line 1036 "query.m"
      query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_9_9);
    }
#line 1035 "query.m"
    return query__HeadVar__2_2;
#line 1035 "query.m"
  }
#line 1033 "query.m"
}

#line 664 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 664 "query.m"
  MR_Word query__Pref_3)
#line 664 "query.m"
{
#line 666 "query.m"
  {
#line 666 "query.m"
    MR_bool query__succeeded;
#line 666 "query.m"
    MR_String query__PrefStr_4;
#line 666 "query.m"
    MR_Word query__Fields_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 0)));
#line 666 "query.m"
    MR_Word query__Box_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 666 "query.m"
    MR_Word query__Colour_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 666 "query.m"
    MR_Word query__MaybeAncestorLimit_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 2)));
#line 666 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 3)));
#line 666 "query.m"
    MR_Word query__SummarizeHoCallSites_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 4)));
#line 666 "query.m"
    MR_Word query__Order_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 5)));
#line 666 "query.m"
    MR_Word query__Contour_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 666 "query.m"
    MR_Word query__Time_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 666 "query.m"
    MR_Word query__ModuleQual_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 666 "query.m"
    MR_Word query__InactiveItems_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 7)));
#line 666 "query.m"
    MR_Word query__DeveloperMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 8)));
#line 666 "query.m"
    MR_String query__MaybeAncestorLimitStr_18;
#line 666 "query.m"
    MR_String query__V_26_26;
#line 666 "query.m"
    MR_Char query__V_29_29;
#line 666 "query.m"
    MR_String query__V_32_32;
#line 666 "query.m"
    MR_Char query__V_35_35;
#line 666 "query.m"
    MR_String query__V_38_38;
#line 666 "query.m"
    MR_Char query__V_41_41;
#line 666 "query.m"
    MR_Char query__V_46_46;
#line 666 "query.m"
    MR_Char query__V_51_51;
#line 666 "query.m"
    MR_String query__V_54_54;
#line 666 "query.m"
    MR_Char query__V_57_57;
#line 666 "query.m"
    MR_String query__V_60_60;
#line 666 "query.m"
    MR_Char query__V_63_63;
#line 666 "query.m"
    MR_String query__V_66_66;
#line 666 "query.m"
    MR_Char query__V_69_69;
#line 666 "query.m"
    MR_String query__V_72_72;
#line 666 "query.m"
    MR_Char query__V_75_75;
#line 666 "query.m"
    MR_String query__V_78_78;
#line 666 "query.m"
    MR_Char query__V_81_81;
#line 666 "query.m"
    MR_String query__V_84_84;
#line 666 "query.m"
    MR_Char query__V_87_87;
#line 666 "query.m"
    MR_String query__V_90_90;
#line 666 "query.m"
    MR_String query__V_98_98;
#line 666 "query.m"
    MR_Word query__V_104_104;
#line 666 "query.m"
    MR_String query__V_105_105;
#line 666 "query.m"
    MR_String query__V_112_112;
#line 666 "query.m"
    MR_String query__V_113_113;
#line 666 "query.m"
    MR_String query__V_120_120;
#line 666 "query.m"
    MR_String query__V_121_121;
#line 666 "query.m"
    MR_String query__V_128_128;
#line 666 "query.m"
    MR_String query__V_129_129;
#line 666 "query.m"
    MR_String query__V_136_136;
#line 666 "query.m"
    MR_String query__V_137_137;
#line 666 "query.m"
    MR_String query__V_144_144;
#line 666 "query.m"
    MR_String query__V_145_145;
#line 666 "query.m"
    MR_String query__V_152_152;
#line 666 "query.m"
    MR_String query__V_153_153;
#line 666 "query.m"
    MR_String query__V_160_160;
#line 666 "query.m"
    MR_String query__V_161_161;
#line 666 "query.m"
    MR_String query__V_168_168;
#line 666 "query.m"
    MR_String query__V_169_169;
#line 666 "query.m"
    MR_String query__V_176_176;
#line 666 "query.m"
    MR_String query__V_177_177;
#line 666 "query.m"
    MR_String query__V_184_184;
#line 666 "query.m"
    MR_String query__V_185_185;
#line 666 "query.m"
    MR_String query__V_192_192;
#line 666 "query.m"
    MR_String query__V_193_193;
#line 666 "query.m"
    MR_String query__V_200_200;
#line 666 "query.m"
    MR_String query__V_201_201;
#line 666 "query.m"
    MR_String query__V_208_208;
#line 666 "query.m"
    MR_String query__V_209_209;
#line 666 "query.m"
    MR_String query__V_216_216;
#line 666 "query.m"
    MR_String query__V_217_217;
#line 666 "query.m"
    MR_String query__V_224_224;
#line 666 "query.m"
    MR_String query__V_225_225;
#line 666 "query.m"
    MR_String query__V_232_232;
#line 666 "query.m"
    MR_String query__V_233_233;
#line 666 "query.m"
    MR_String query__V_240_240;
#line 666 "query.m"
    MR_String query__V_241_241;
#line 666 "query.m"
    MR_String query__V_248_248;
#line 666 "query.m"
    MR_String query__V_249_249;
#line 666 "query.m"
    MR_String query__V_256_256;
#line 666 "query.m"
    MR_String query__V_257_257;
#line 666 "query.m"
    MR_String query__V_264_264;
#line 666 "query.m"
    MR_String query__V_265_265;
#line 666 "query.m"
    MR_String query__V_272_272;
#line 666 "query.m"
    MR_String query__V_273_273;

#line 674 "query.m"
    if ((query__MaybeAncestorLimit_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "query.m"
      query__MaybeAncestorLimitStr_18 = (MR_String) "no";
#line 674 "query.m"
    else
#line 671 "query.m"
      {
#line 671 "query.m"
        MR_Integer query__AncestorLimit_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_8, (MR_Integer) 0)));

#line 673 "query.m"
        {
#line 673 "query.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__AncestorLimit_17, &query__MaybeAncestorLimitStr_18);
        }
#line 671 "query.m"
      }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_26_26 = query__fields_to_string_1_f_0(query__Fields_5);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_29_29 = query__pref_separator_char_0_f_0();
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_32_32 = query__box_to_string_1_f_0(query__Box_6);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      query__V_35_35 = query__pref_separator_char_0_f_0();
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      query__V_38_38 = query__colour_scheme_to_string_1_f_0(query__Colour_7);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      query__V_41_41 = query__pref_separator_char_0_f_0();
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      query__V_46_46 = query__pref_separator_char_0_f_0();
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      query__V_51_51 = query__pref_separator_char_0_f_0();
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      query__V_54_54 = query__summarize_to_string_1_f_0(query__SummarizeHoCallSites_10);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      query__V_57_57 = query__pref_separator_char_0_f_0();
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      query__V_60_60 = query__order_criteria_to_string_1_f_0(query__Order_11);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_63_63 = query__pref_separator_char_0_f_0();
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_66_66 = query__contour_exclusion_to_string_1_f_0(query__Contour_12);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_69_69 = query__pref_separator_char_0_f_0();
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_72_72 = query__time_format_to_string_1_f_0(query__Time_13);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_75_75 = query__pref_separator_char_0_f_0();
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_78_78 = query__module_qual_to_string_1_f_0(query__ModuleQual_14);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_81_81 = query__pref_separator_char_0_f_0();
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_84_84 = query__inactive_items_to_string_1_f_0(query__InactiveItems_15);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_87_87 = query__pref_separator_char_0_f_0();
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_90_90 = query__developer_mode_to_string_1_f_0(query__DeveloperMode_16);
    }
#line 14100 "query.c"
    query__V_104_104 = (MR_Word) &query_scalar_common_2[1];
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_90_90, &query__V_98_98);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_87_87, &query__V_105_105);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_112_112 = mercury__string__f_43_43_2_f_0(query__V_105_105, query__V_98_98);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_84_84, &query__V_113_113);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_120_120 = mercury__string__f_43_43_2_f_0(query__V_113_113, query__V_112_112);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_81_81, &query__V_121_121);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_128_128 = mercury__string__f_43_43_2_f_0(query__V_121_121, query__V_120_120);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_78_78, &query__V_129_129);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_136_136 = mercury__string__f_43_43_2_f_0(query__V_129_129, query__V_128_128);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_75_75, &query__V_137_137);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_144_144 = mercury__string__f_43_43_2_f_0(query__V_137_137, query__V_136_136);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_72_72, &query__V_145_145);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_152_152 = mercury__string__f_43_43_2_f_0(query__V_145_145, query__V_144_144);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_69_69, &query__V_153_153);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_160_160 = mercury__string__f_43_43_2_f_0(query__V_153_153, query__V_152_152);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_66_66, &query__V_161_161);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_168_168 = mercury__string__f_43_43_2_f_0(query__V_161_161, query__V_160_160);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_63_63, &query__V_169_169);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_176_176 = mercury__string__f_43_43_2_f_0(query__V_169_169, query__V_168_168);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_60_60, &query__V_177_177);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_184_184 = mercury__string__f_43_43_2_f_0(query__V_177_177, query__V_176_176);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_57_57, &query__V_185_185);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_192_192 = mercury__string__f_43_43_2_f_0(query__V_185_185, query__V_184_184);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_54_54, &query__V_193_193);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_200_200 = mercury__string__f_43_43_2_f_0(query__V_193_193, query__V_192_192);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_51_51, &query__V_201_201);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_208_208 = mercury__string__f_43_43_2_f_0(query__V_201_201, query__V_200_200);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_104_104, query__ProcStaticsPerRecTypeLimit_9, &query__V_209_209);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_216_216 = mercury__string__f_43_43_2_f_0(query__V_209_209, query__V_208_208);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_46_46, &query__V_217_217);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_224_224 = mercury__string__f_43_43_2_f_0(query__V_217_217, query__V_216_216);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__MaybeAncestorLimitStr_18, &query__V_225_225);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_232_232 = mercury__string__f_43_43_2_f_0(query__V_225_225, query__V_224_224);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_41_41, &query__V_233_233);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_240_240 = mercury__string__f_43_43_2_f_0(query__V_233_233, query__V_232_232);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_38_38, &query__V_241_241);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_248_248 = mercury__string__f_43_43_2_f_0(query__V_241_241, query__V_240_240);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_35_35, &query__V_249_249);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_256_256 = mercury__string__f_43_43_2_f_0(query__V_249_249, query__V_248_248);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_32_32, &query__V_257_257);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_264_264 = mercury__string__f_43_43_2_f_0(query__V_257_257, query__V_256_256);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_29_29, &query__V_265_265);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__V_272_272 = mercury__string__f_43_43_2_f_0(query__V_265_265, query__V_264_264);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_26_26, &query__V_273_273);
    }
#line 678 "query.m"
    {
#line 678 "query.m"
      query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_273_273, query__V_272_272);
    }
#line 666 "query.m"
    return query__PrefStr_4;
#line 666 "query.m"
  }
#line 664 "query.m"
}

#line 533 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 533 "query.m"
  MR_Word query__Cmd_3)
#line 533 "query.m"
{
#line 537 "query.m"
  {
#line 537 "query.m"
    MR_bool query__succeeded;
#line 537 "query.m"
    MR_String query__CmdStr_4;

#line 537 "query.m"
#line 537 "query.m"
    switch (MR_tag((MR_Word) query__Cmd_3)) {
#line 537 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 537 "query.m"
      case (MR_Integer) 0:
#line 537 "query.m"
#line 537 "query.m"
        switch (MR_unmkbody(query__Cmd_3)) {
#line 537 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 537 "query.m"
          case (MR_Integer) 0:
#line 538 "query.m"
            {
#line 538 "query.m"
              query__CmdStr_4 = query__cmd_str_quit_0_f_0();
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 1:
#line 541 "query.m"
            {
#line 541 "query.m"
              query__CmdStr_4 = query__cmd_str_restart_0_f_0();
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 2:
#line 548 "query.m"
            {
#line 548 "query.m"
              query__CmdStr_4 = query__cmd_str_menu_0_f_0();
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 3:
#line 573 "query.m"
            {
#line 573 "query.m"
              query__CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 4:
#line 594 "query.m"
            {
#line 594 "query.m"
              query__CmdStr_4 = query__cmd_str_program_modules_0_f_0();
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
        }
#line 537 "query.m"
        break;
#line 537 "query.m"
      case (MR_Integer) 1:
#line 543 "query.m"
        {
#line 543 "query.m"
          MR_Integer query__Minutes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__Cmd_3, (MR_Integer) 0)));
#line 543 "query.m"
          MR_String query__V_242_242;
#line 543 "query.m"
          MR_Char query__V_245_245;
#line 543 "query.m"
          MR_String query__V_345_345;
#line 543 "query.m"
          MR_Word query__V_351_351;
#line 543 "query.m"
          MR_String query__V_352_352;
#line 543 "query.m"
          MR_String query__V_359_359;
#line 543 "query.m"
          MR_String query__V_360_360;

#line 545 "query.m"
          {
#line 545 "query.m"
            query__V_242_242 = query__cmd_str_timeout_0_f_0();
          }
#line 545 "query.m"
          {
#line 545 "query.m"
            query__V_245_245 = query__cmd_separator_char_0_f_0();
          }
#line 14440 "query.c"
          query__V_351_351 = (MR_Word) &query_scalar_common_2[1];
#line 545 "query.m"
          {
#line 545 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_351_351, query__Minutes_5, &query__V_345_345);
          }
#line 545 "query.m"
          {
#line 545 "query.m"
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_351_351, query__V_245_245, &query__V_352_352);
          }
#line 544 "query.m"
          {
#line 544 "query.m"
            query__V_359_359 = mercury__string__f_43_43_2_f_0(query__V_352_352, query__V_345_345);
          }
#line 545 "query.m"
          {
#line 545 "query.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_351_351, query__V_242_242, &query__V_360_360);
          }
#line 544 "query.m"
          {
#line 544 "query.m"
            query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_360_360, query__V_359_359);
          }
#line 543 "query.m"
        }
#line 537 "query.m"
        break;
#line 537 "query.m"
      case (MR_Integer) 2:
#line 550 "query.m"
        {
#line 550 "query.m"
          MR_Word query__MaybePercent_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Cmd_3, (MR_Integer) 0)));

#line 555 "query.m"
          if ((query__MaybePercent_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "query.m"
            {
#line 556 "query.m"
              MR_String query__V_221_221;
#line 556 "query.m"
              MR_Char query__V_224_224;
#line 556 "query.m"
              MR_String query__V_411_411;
#line 556 "query.m"
              MR_Word query__V_417_417;
#line 556 "query.m"
              MR_String query__V_418_418;
#line 556 "query.m"
              MR_String query__V_425_425;
#line 556 "query.m"
              MR_String query__V_426_426;

#line 558 "query.m"
              {
#line 558 "query.m"
                query__V_221_221 = query__cmd_str_root_0_f_0();
              }
#line 558 "query.m"
              {
#line 558 "query.m"
                query__V_224_224 = query__cmd_separator_char_0_f_0();
              }
#line 14507 "query.c"
              query__V_417_417 = (MR_Word) &query_scalar_common_2[1];
#line 558 "query.m"
              {
#line 558 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, (MR_String) "no", &query__V_411_411);
              }
#line 558 "query.m"
              {
#line 558 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_417_417, query__V_224_224, &query__V_418_418);
              }
#line 557 "query.m"
              {
#line 557 "query.m"
                query__V_425_425 = mercury__string__f_43_43_2_f_0(query__V_418_418, query__V_411_411);
              }
#line 558 "query.m"
              {
#line 558 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, query__V_221_221, &query__V_426_426);
              }
#line 557 "query.m"
              {
#line 557 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_426_426, query__V_425_425);
              }
#line 556 "query.m"
            }
#line 555 "query.m"
          else
#line 552 "query.m"
            {
#line 552 "query.m"
              MR_Integer query__Percent_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybePercent_6, (MR_Integer) 0)));
#line 552 "query.m"
              MR_String query__V_232_232;
#line 552 "query.m"
              MR_Char query__V_235_235;
#line 552 "query.m"
              MR_String query__V_389_389;
#line 552 "query.m"
              MR_Word query__V_395_395;
#line 552 "query.m"
              MR_String query__V_396_396;
#line 552 "query.m"
              MR_String query__V_403_403;
#line 552 "query.m"
              MR_String query__V_404_404;

#line 554 "query.m"
              {
#line 554 "query.m"
                query__V_232_232 = query__cmd_str_root_0_f_0();
              }
#line 554 "query.m"
              {
#line 554 "query.m"
                query__V_235_235 = query__cmd_separator_char_0_f_0();
              }
#line 14567 "query.c"
              query__V_395_395 = (MR_Word) &query_scalar_common_2[1];
#line 554 "query.m"
              {
#line 554 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_395_395, query__Percent_7, &query__V_389_389);
              }
#line 554 "query.m"
              {
#line 554 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_395_395, query__V_235_235, &query__V_396_396);
              }
#line 553 "query.m"
              {
#line 553 "query.m"
                query__V_403_403 = mercury__string__f_43_43_2_f_0(query__V_396_396, query__V_389_389);
              }
#line 554 "query.m"
              {
#line 554 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_395_395, query__V_232_232, &query__V_404_404);
              }
#line 553 "query.m"
              {
#line 553 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_404_404, query__V_403_403);
              }
#line 552 "query.m"
            }
#line 550 "query.m"
        }
#line 537 "query.m"
        break;
#line 537 "query.m"
      case (MR_Integer) 3:
#line 537 "query.m"
#line 537 "query.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) {
#line 537 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 537 "query.m"
          case (MR_Integer) 0:
#line 567 "query.m"
            {
#line 567 "query.m"
              MR_Word query__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 567 "query.m"
              MR_String query__Name_9;
#line 567 "query.m"
              MR_Integer query__CliqueNum_10;
#line 567 "query.m"
              MR_Char query__V_214_214;
#line 567 "query.m"
              MR_String query__V_761_761;
#line 567 "query.m"
              MR_Word query__V_767_767;
#line 567 "query.m"
              MR_String query__V_768_768;
#line 567 "query.m"
              MR_String query__V_775_775;
#line 567 "query.m"
              MR_String query__V_776_776;

#line 563 "query.m"
              {
#line 563 "query.m"
                query__Name_9 = query__cmd_str_clique_0_f_0();
              }
#line 568 "query.m"
              query__CliqueNum_10 = (MR_Integer) query__CliquePtr_8;
#line 570 "query.m"
              {
#line 570 "query.m"
                query__V_214_214 = query__cmd_separator_char_0_f_0();
              }
#line 14642 "query.c"
              query__V_767_767 = (MR_Word) &query_scalar_common_2[1];
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_767_767, query__CliqueNum_10, &query__V_761_761);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_767_767, query__V_214_214, &query__V_768_768);
              }
#line 569 "query.m"
              {
#line 569 "query.m"
                query__V_775_775 = mercury__string__f_43_43_2_f_0(query__V_768_768, query__V_761_761);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_767_767, query__Name_9, &query__V_776_776);
              }
#line 569 "query.m"
              {
#line 569 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_776_776, query__V_775_775);
              }
#line 567 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 1:
#line 567 "query.m"
            {
#line 567 "query.m"
              MR_Word query__CliquePtr_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 567 "query.m"
              MR_String query__Name_264;
#line 567 "query.m"
              MR_Integer query__CliqueNum_265;
#line 567 "query.m"
              MR_Char query__V_271_271;
#line 567 "query.m"
              MR_String query__V_739_739;
#line 567 "query.m"
              MR_Word query__V_745_745;
#line 567 "query.m"
              MR_String query__V_746_746;
#line 567 "query.m"
              MR_String query__V_753_753;
#line 567 "query.m"
              MR_String query__V_754_754;

#line 566 "query.m"
              {
#line 566 "query.m"
                query__Name_264 = query__cmd_str_clique_recursive_costs_0_f_0();
              }
#line 568 "query.m"
              query__CliqueNum_265 = (MR_Integer) query__CliquePtr_263;
#line 570 "query.m"
              {
#line 570 "query.m"
                query__V_271_271 = query__cmd_separator_char_0_f_0();
              }
#line 14708 "query.c"
              query__V_745_745 = (MR_Word) &query_scalar_common_2[1];
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_745_745, query__CliqueNum_265, &query__V_739_739);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_745_745, query__V_271_271, &query__V_746_746);
              }
#line 569 "query.m"
              {
#line 569 "query.m"
                query__V_753_753 = mercury__string__f_43_43_2_f_0(query__V_746_746, query__V_739_739);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_745_745, query__Name_264, &query__V_754_754);
              }
#line 569 "query.m"
              {
#line 569 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_754_754, query__V_753_753);
              }
#line 567 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 2:
#line 575 "query.m"
            {
#line 575 "query.m"
              MR_Word query__PSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 575 "query.m"
              MR_Integer query__PSI_12 = (MR_Integer) query__PSPtr_11;
#line 575 "query.m"
              MR_String query__V_202_202;
#line 575 "query.m"
              MR_Char query__V_205_205;
#line 575 "query.m"
              MR_String query__V_519_519;
#line 575 "query.m"
              MR_Word query__V_525_525;
#line 575 "query.m"
              MR_String query__V_526_526;
#line 575 "query.m"
              MR_String query__V_533_533;
#line 575 "query.m"
              MR_String query__V_534_534;

#line 578 "query.m"
              {
#line 578 "query.m"
                query__V_202_202 = query__cmd_str_proc_0_f_0();
              }
#line 578 "query.m"
              {
#line 578 "query.m"
                query__V_205_205 = query__cmd_separator_char_0_f_0();
              }
#line 14772 "query.c"
              query__V_525_525 = (MR_Word) &query_scalar_common_2[1];
#line 578 "query.m"
              {
#line 578 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_525_525, query__PSI_12, &query__V_519_519);
              }
#line 578 "query.m"
              {
#line 578 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_525_525, query__V_205_205, &query__V_526_526);
              }
#line 577 "query.m"
              {
#line 577 "query.m"
                query__V_533_533 = mercury__string__f_43_43_2_f_0(query__V_526_526, query__V_519_519);
              }
#line 578 "query.m"
              {
#line 578 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_525_525, query__V_202_202, &query__V_534_534);
              }
#line 577 "query.m"
              {
#line 577 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_534_534, query__V_533_533);
              }
#line 575 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 3:
#line 581 "query.m"
            {
#line 581 "query.m"
              MR_Word query__GroupCallers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)));
#line 581 "query.m"
              MR_Integer query__BunchNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 3)));
#line 581 "query.m"
              MR_Integer query__CallersPerBunch_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 4)));
#line 581 "query.m"
              MR_Word query__Contour_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 5)));
#line 581 "query.m"
              MR_String query__GroupCallersStr_17;
#line 581 "query.m"
              MR_String query__ContourStr_18;
#line 581 "query.m"
              MR_String query__V_172_172;
#line 581 "query.m"
              MR_Char query__V_175_175;
#line 581 "query.m"
              MR_Char query__V_180_180;
#line 581 "query.m"
              MR_Char query__V_185_185;
#line 581 "query.m"
              MR_Char query__V_190_190;
#line 581 "query.m"
              MR_Char query__V_195_195;
#line 581 "query.m"
              MR_Word query__PSPtr_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 581 "query.m"
              MR_Integer query__PSI_250 = (MR_Integer) query__PSPtr_249;
#line 581 "query.m"
              MR_String query__V_433_433;
#line 581 "query.m"
              MR_Word query__V_439_439;
#line 581 "query.m"
              MR_String query__V_440_440;
#line 581 "query.m"
              MR_String query__V_447_447;
#line 581 "query.m"
              MR_String query__V_448_448;
#line 581 "query.m"
              MR_String query__V_455_455;
#line 581 "query.m"
              MR_String query__V_456_456;
#line 581 "query.m"
              MR_String query__V_463_463;
#line 581 "query.m"
              MR_String query__V_464_464;
#line 581 "query.m"
              MR_String query__V_471_471;
#line 581 "query.m"
              MR_String query__V_472_472;
#line 581 "query.m"
              MR_String query__V_479_479;
#line 581 "query.m"
              MR_String query__V_480_480;
#line 581 "query.m"
              MR_String query__V_487_487;
#line 581 "query.m"
              MR_String query__V_488_488;
#line 581 "query.m"
              MR_String query__V_495_495;
#line 581 "query.m"
              MR_String query__V_496_496;
#line 581 "query.m"
              MR_String query__V_503_503;
#line 581 "query.m"
              MR_String query__V_504_504;
#line 581 "query.m"
              MR_String query__V_511_511;
#line 581 "query.m"
              MR_String query__V_512_512;

#line 583 "query.m"
              {
#line 583 "query.m"
                query__GroupCallersStr_17 = query__caller_groups_to_string_1_f_0(query__GroupCallers_13);
              }
#line 584 "query.m"
              {
#line 584 "query.m"
                query__ContourStr_18 = query__contour_exclusion_to_string_1_f_0(query__Contour_16);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_172_172 = query__cmd_str_proc_callers_0_f_0();
              }
#line 587 "query.m"
              {
#line 587 "query.m"
                query__V_175_175 = query__cmd_separator_char_0_f_0();
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                query__V_180_180 = query__cmd_separator_char_0_f_0();
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                query__V_185_185 = query__cmd_separator_char_0_f_0();
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                query__V_190_190 = query__cmd_separator_char_0_f_0();
              }
#line 591 "query.m"
              {
#line 591 "query.m"
                query__V_195_195 = query__cmd_separator_char_0_f_0();
              }
#line 14918 "query.c"
              query__V_439_439 = (MR_Word) &query_scalar_common_2[1];
#line 591 "query.m"
              {
#line 591 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__ContourStr_18, &query__V_433_433);
              }
#line 591 "query.m"
              {
#line 591 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_195_195, &query__V_440_440);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_447_447 = mercury__string__f_43_43_2_f_0(query__V_440_440, query__V_433_433);
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__CallersPerBunch_15, &query__V_448_448);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_455_455 = mercury__string__f_43_43_2_f_0(query__V_448_448, query__V_447_447);
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_190_190, &query__V_456_456);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_463_463 = mercury__string__f_43_43_2_f_0(query__V_456_456, query__V_455_455);
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__BunchNum_14, &query__V_464_464);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_471_471 = mercury__string__f_43_43_2_f_0(query__V_464_464, query__V_463_463);
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_185_185, &query__V_472_472);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_479_479 = mercury__string__f_43_43_2_f_0(query__V_472_472, query__V_471_471);
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__GroupCallersStr_17, &query__V_480_480);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_487_487 = mercury__string__f_43_43_2_f_0(query__V_480_480, query__V_479_479);
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_180_180, &query__V_488_488);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_495_495 = mercury__string__f_43_43_2_f_0(query__V_488_488, query__V_487_487);
              }
#line 587 "query.m"
              {
#line 587 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__PSI_250, &query__V_496_496);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_503_503 = mercury__string__f_43_43_2_f_0(query__V_496_496, query__V_495_495);
              }
#line 587 "query.m"
              {
#line 587 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_175_175, &query__V_504_504);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__V_511_511 = mercury__string__f_43_43_2_f_0(query__V_504_504, query__V_503_503);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__V_172_172, &query__V_512_512);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_512_512, query__V_511_511);
              }
#line 581 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 4:
#line 596 "query.m"
            {
#line 596 "query.m"
              MR_String query__ModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 596 "query.m"
              MR_String query__V_162_162;
#line 596 "query.m"
              MR_Char query__V_165_165;
#line 596 "query.m"
              MR_String query__V_585_585;
#line 596 "query.m"
              MR_Word query__V_591_591;
#line 596 "query.m"
              MR_String query__V_592_592;
#line 596 "query.m"
              MR_String query__V_599_599;
#line 596 "query.m"
              MR_String query__V_600_600;

#line 598 "query.m"
              {
#line 598 "query.m"
                query__V_162_162 = query__cmd_str_module_0_f_0();
              }
#line 598 "query.m"
              {
#line 598 "query.m"
                query__V_165_165 = query__cmd_separator_char_0_f_0();
              }
#line 15060 "query.c"
              query__V_591_591 = (MR_Word) &query_scalar_common_2[1];
#line 598 "query.m"
              {
#line 598 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__ModuleName_19, &query__V_585_585);
              }
#line 598 "query.m"
              {
#line 598 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_591_591, query__V_165_165, &query__V_592_592);
              }
#line 597 "query.m"
              {
#line 597 "query.m"
                query__V_599_599 = mercury__string__f_43_43_2_f_0(query__V_592_592, query__V_585_585);
              }
#line 598 "query.m"
              {
#line 598 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__V_162_162, &query__V_600_600);
              }
#line 597 "query.m"
              {
#line 597 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_600_600, query__V_599_599);
              }
#line 596 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 5:
#line 600 "query.m"
            {
#line 600 "query.m"
              MR_String query__V_152_152;
#line 600 "query.m"
              MR_Char query__V_155_155;
#line 600 "query.m"
              MR_String query__ModuleName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 600 "query.m"
              MR_String query__V_563_563;
#line 600 "query.m"
              MR_Word query__V_569_569;
#line 600 "query.m"
              MR_String query__V_570_570;
#line 600 "query.m"
              MR_String query__V_577_577;
#line 600 "query.m"
              MR_String query__V_578_578;

#line 602 "query.m"
              {
#line 602 "query.m"
                query__V_152_152 = query__cmd_str_module_getter_setters_0_f_0();
              }
#line 602 "query.m"
              {
#line 602 "query.m"
                query__V_155_155 = query__cmd_separator_char_0_f_0();
              }
#line 15122 "query.c"
              query__V_569_569 = (MR_Word) &query_scalar_common_2[1];
#line 603 "query.m"
              {
#line 603 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__ModuleName_251, &query__V_563_563);
              }
#line 602 "query.m"
              {
#line 602 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_569_569, query__V_155_155, &query__V_570_570);
              }
#line 601 "query.m"
              {
#line 601 "query.m"
                query__V_577_577 = mercury__string__f_43_43_2_f_0(query__V_570_570, query__V_563_563);
              }
#line 602 "query.m"
              {
#line 602 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__V_152_152, &query__V_578_578);
              }
#line 601 "query.m"
              {
#line 601 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_578_578, query__V_577_577);
              }
#line 600 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 6:
#line 605 "query.m"
            {
#line 605 "query.m"
              MR_String query__V_142_142;
#line 605 "query.m"
              MR_Char query__V_145_145;
#line 605 "query.m"
              MR_String query__ModuleName_252 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 605 "query.m"
              MR_String query__V_541_541;
#line 605 "query.m"
              MR_Word query__V_547_547;
#line 605 "query.m"
              MR_String query__V_548_548;
#line 605 "query.m"
              MR_String query__V_555_555;
#line 605 "query.m"
              MR_String query__V_556_556;

#line 607 "query.m"
              {
#line 607 "query.m"
                query__V_142_142 = query__cmd_str_module_rep_0_f_0();
              }
#line 607 "query.m"
              {
#line 607 "query.m"
                query__V_145_145 = query__cmd_separator_char_0_f_0();
              }
#line 15184 "query.c"
              query__V_547_547 = (MR_Word) &query_scalar_common_2[1];
#line 607 "query.m"
              {
#line 607 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__ModuleName_252, &query__V_541_541);
              }
#line 607 "query.m"
              {
#line 607 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_547_547, query__V_145_145, &query__V_548_548);
              }
#line 606 "query.m"
              {
#line 606 "query.m"
                query__V_555_555 = mercury__string__f_43_43_2_f_0(query__V_548_548, query__V_541_541);
              }
#line 607 "query.m"
              {
#line 607 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__V_142_142, &query__V_556_556);
              }
#line 606 "query.m"
              {
#line 606 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_556_556, query__V_555_555);
              }
#line 605 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 7:
#line 609 "query.m"
            {
#line 609 "query.m"
              MR_Word query__Limit_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 609 "query.m"
              MR_Word query__CostKind_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 609 "query.m"
              MR_Word query__InclDesc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 609 "query.m"
              MR_Word query__Scope_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 609 "query.m"
              MR_String query__LimitStr_24;
#line 609 "query.m"
              MR_String query__CostKindStr_25;
#line 609 "query.m"
              MR_String query__InclDescStr_26;
#line 609 "query.m"
              MR_String query__ScopeStr_27;
#line 609 "query.m"
              MR_String query__V_117_117;
#line 609 "query.m"
              MR_Char query__V_120_120;
#line 609 "query.m"
              MR_Char query__V_125_125;
#line 609 "query.m"
              MR_Char query__V_130_130;
#line 609 "query.m"
              MR_Char query__V_135_135;
#line 609 "query.m"
              MR_String query__V_275_275;
#line 609 "query.m"
              MR_Word query__V_281_281;
#line 609 "query.m"
              MR_String query__V_282_282;
#line 609 "query.m"
              MR_String query__V_289_289;
#line 609 "query.m"
              MR_String query__V_290_290;
#line 609 "query.m"
              MR_String query__V_297_297;
#line 609 "query.m"
              MR_String query__V_298_298;
#line 609 "query.m"
              MR_String query__V_305_305;
#line 609 "query.m"
              MR_String query__V_306_306;
#line 609 "query.m"
              MR_String query__V_313_313;
#line 609 "query.m"
              MR_String query__V_314_314;
#line 609 "query.m"
              MR_String query__V_321_321;
#line 609 "query.m"
              MR_String query__V_322_322;
#line 609 "query.m"
              MR_String query__V_329_329;
#line 609 "query.m"
              MR_String query__V_330_330;
#line 609 "query.m"
              MR_String query__V_337_337;
#line 609 "query.m"
              MR_String query__V_338_338;

#line 610 "query.m"
              {
#line 610 "query.m"
                query__LimitStr_24 = query__limit_to_string_1_f_0(query__Limit_20);
              }
#line 611 "query.m"
              {
#line 611 "query.m"
                query__CostKindStr_25 = query__cost_kind_to_string_1_f_0(query__CostKind_21);
              }
#line 612 "query.m"
              {
#line 612 "query.m"
                query__InclDescStr_26 = query__incl_desc_to_string_1_f_0(query__InclDesc_22);
              }
#line 613 "query.m"
              {
#line 613 "query.m"
                query__ScopeStr_27 = query__scope_to_string_1_f_0(query__Scope_23);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_117_117 = query__cmd_str_top_procs_0_f_0();
              }
#line 616 "query.m"
              {
#line 616 "query.m"
                query__V_120_120 = query__cmd_separator_char_0_f_0();
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                query__V_125_125 = query__cmd_separator_char_0_f_0();
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                query__V_130_130 = query__cmd_separator_char_0_f_0();
              }
#line 619 "query.m"
              {
#line 619 "query.m"
                query__V_135_135 = query__cmd_separator_char_0_f_0();
              }
#line 15325 "query.c"
              query__V_281_281 = (MR_Word) &query_scalar_common_2[1];
#line 619 "query.m"
              {
#line 619 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__ScopeStr_27, &query__V_275_275);
              }
#line 619 "query.m"
              {
#line 619 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_135_135, &query__V_282_282);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_289_289 = mercury__string__f_43_43_2_f_0(query__V_282_282, query__V_275_275);
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__InclDescStr_26, &query__V_290_290);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_297_297 = mercury__string__f_43_43_2_f_0(query__V_290_290, query__V_289_289);
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_130_130, &query__V_298_298);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_305_305 = mercury__string__f_43_43_2_f_0(query__V_298_298, query__V_297_297);
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__CostKindStr_25, &query__V_306_306);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_313_313 = mercury__string__f_43_43_2_f_0(query__V_306_306, query__V_305_305);
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_125_125, &query__V_314_314);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_321_321 = mercury__string__f_43_43_2_f_0(query__V_314_314, query__V_313_313);
              }
#line 616 "query.m"
              {
#line 616 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__LimitStr_24, &query__V_322_322);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_329_329 = mercury__string__f_43_43_2_f_0(query__V_322_322, query__V_321_321);
              }
#line 616 "query.m"
              {
#line 616 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_120_120, &query__V_330_330);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__V_337_337 = mercury__string__f_43_43_2_f_0(query__V_330_330, query__V_329_329);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__V_117_117, &query__V_338_338);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_338_338, query__V_337_337);
              }
#line 609 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 8:
#line 621 "query.m"
            {
#line 621 "query.m"
              MR_String query__V_107_107;
#line 621 "query.m"
              MR_Char query__V_110_110;
#line 621 "query.m"
              MR_Word query__PSPtr_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 621 "query.m"
              MR_Integer query__PSI_254 = (MR_Integer) query__PSPtr_253;
#line 621 "query.m"
              MR_String query__V_367_367;
#line 621 "query.m"
              MR_Word query__V_373_373;
#line 621 "query.m"
              MR_String query__V_374_374;
#line 621 "query.m"
              MR_String query__V_381_381;
#line 621 "query.m"
              MR_String query__V_382_382;

#line 624 "query.m"
              {
#line 624 "query.m"
                query__V_107_107 = query__cmd_str_static_coverage_0_f_0();
              }
#line 624 "query.m"
              {
#line 624 "query.m"
                query__V_110_110 = query__cmd_separator_char_0_f_0();
              }
#line 15449 "query.c"
              query__V_373_373 = (MR_Word) &query_scalar_common_2[1];
#line 624 "query.m"
              {
#line 624 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_373_373, query__PSI_254, &query__V_367_367);
              }
#line 624 "query.m"
              {
#line 624 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_373_373, query__V_110_110, &query__V_374_374);
              }
#line 623 "query.m"
              {
#line 623 "query.m"
                query__V_381_381 = mercury__string__f_43_43_2_f_0(query__V_374_374, query__V_367_367);
              }
#line 624 "query.m"
              {
#line 624 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_373_373, query__V_107_107, &query__V_382_382);
              }
#line 623 "query.m"
              {
#line 623 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_382_382, query__V_381_381);
              }
#line 621 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 9:
#line 626 "query.m"
            {
#line 626 "query.m"
              MR_Word query__PDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 626 "query.m"
              MR_Integer query__PDI_29 = (MR_Integer) query__PDPtr_28;
#line 626 "query.m"
              MR_String query__V_97_97;
#line 626 "query.m"
              MR_Char query__V_100_100;
#line 626 "query.m"
              MR_String query__V_607_607;
#line 626 "query.m"
              MR_Word query__V_613_613;
#line 626 "query.m"
              MR_String query__V_614_614;
#line 626 "query.m"
              MR_String query__V_621_621;
#line 626 "query.m"
              MR_String query__V_622_622;

#line 629 "query.m"
              {
#line 629 "query.m"
                query__V_97_97 = query__cmd_str_dynamic_coverage_0_f_0();
              }
#line 629 "query.m"
              {
#line 629 "query.m"
                query__V_100_100 = query__cmd_separator_char_0_f_0();
              }
#line 15513 "query.c"
              query__V_613_613 = (MR_Word) &query_scalar_common_2[1];
#line 629 "query.m"
              {
#line 629 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_613_613, query__PDI_29, &query__V_607_607);
              }
#line 629 "query.m"
              {
#line 629 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_613_613, query__V_100_100, &query__V_614_614);
              }
#line 628 "query.m"
              {
#line 628 "query.m"
                query__V_621_621 = mercury__string__f_43_43_2_f_0(query__V_614_614, query__V_607_607);
              }
#line 629 "query.m"
              {
#line 629 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_613_613, query__V_97_97, &query__V_622_622);
              }
#line 628 "query.m"
              {
#line 628 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_622_622, query__V_621_621);
              }
#line 626 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 10:
#line 631 "query.m"
            {
#line 631 "query.m"
              MR_String query__V_87_87;
#line 631 "query.m"
              MR_Char query__V_90_90;
#line 631 "query.m"
              MR_Word query__PSPtr_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 631 "query.m"
              MR_Integer query__PSI_256 = (MR_Integer) query__PSPtr_255;
#line 631 "query.m"
              MR_String query__V_629_629;
#line 631 "query.m"
              MR_Word query__V_635_635;
#line 631 "query.m"
              MR_String query__V_636_636;
#line 631 "query.m"
              MR_String query__V_643_643;
#line 631 "query.m"
              MR_String query__V_644_644;

#line 634 "query.m"
              {
#line 634 "query.m"
                query__V_87_87 = query__cmd_str_dump_proc_static_0_f_0();
              }
#line 634 "query.m"
              {
#line 634 "query.m"
                query__V_90_90 = query__cmd_separator_char_0_f_0();
              }
#line 15577 "query.c"
              query__V_635_635 = (MR_Word) &query_scalar_common_2[1];
#line 634 "query.m"
              {
#line 634 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_635_635, query__PSI_256, &query__V_629_629);
              }
#line 634 "query.m"
              {
#line 634 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_635_635, query__V_90_90, &query__V_636_636);
              }
#line 633 "query.m"
              {
#line 633 "query.m"
                query__V_643_643 = mercury__string__f_43_43_2_f_0(query__V_636_636, query__V_629_629);
              }
#line 634 "query.m"
              {
#line 634 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_635_635, query__V_87_87, &query__V_644_644);
              }
#line 633 "query.m"
              {
#line 633 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_644_644, query__V_643_643);
              }
#line 631 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 11:
#line 636 "query.m"
            {
#line 636 "query.m"
              MR_String query__V_77_77;
#line 636 "query.m"
              MR_Char query__V_80_80;
#line 636 "query.m"
              MR_Word query__PDPtr_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 636 "query.m"
              MR_Integer query__PDI_258 = (MR_Integer) query__PDPtr_257;
#line 636 "query.m"
              MR_String query__V_651_651;
#line 636 "query.m"
              MR_Word query__V_657_657;
#line 636 "query.m"
              MR_String query__V_658_658;
#line 636 "query.m"
              MR_String query__V_665_665;
#line 636 "query.m"
              MR_String query__V_666_666;

#line 639 "query.m"
              {
#line 639 "query.m"
                query__V_77_77 = query__cmd_str_dump_proc_dynamic_0_f_0();
              }
#line 639 "query.m"
              {
#line 639 "query.m"
                query__V_80_80 = query__cmd_separator_char_0_f_0();
              }
#line 15641 "query.c"
              query__V_657_657 = (MR_Word) &query_scalar_common_2[1];
#line 639 "query.m"
              {
#line 639 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_657_657, query__PDI_258, &query__V_651_651);
              }
#line 639 "query.m"
              {
#line 639 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_657_657, query__V_80_80, &query__V_658_658);
              }
#line 638 "query.m"
              {
#line 638 "query.m"
                query__V_665_665 = mercury__string__f_43_43_2_f_0(query__V_658_658, query__V_651_651);
              }
#line 639 "query.m"
              {
#line 639 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_657_657, query__V_77_77, &query__V_666_666);
              }
#line 638 "query.m"
              {
#line 638 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_666_666, query__V_665_665);
              }
#line 636 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 12:
#line 641 "query.m"
            {
#line 641 "query.m"
              MR_Word query__CSSPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 641 "query.m"
              MR_Integer query__CSSI_31 = (MR_Integer) query__CSSPtr_30;
#line 641 "query.m"
              MR_String query__V_67_67;
#line 641 "query.m"
              MR_Char query__V_70_70;
#line 641 "query.m"
              MR_String query__V_695_695;
#line 641 "query.m"
              MR_Word query__V_701_701;
#line 641 "query.m"
              MR_String query__V_702_702;
#line 641 "query.m"
              MR_String query__V_709_709;
#line 641 "query.m"
              MR_String query__V_710_710;

#line 644 "query.m"
              {
#line 644 "query.m"
                query__V_67_67 = query__cmd_str_dump_call_site_static_0_f_0();
              }
#line 644 "query.m"
              {
#line 644 "query.m"
                query__V_70_70 = query__cmd_separator_char_0_f_0();
              }
#line 15705 "query.c"
              query__V_701_701 = (MR_Word) &query_scalar_common_2[1];
#line 644 "query.m"
              {
#line 644 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_701_701, query__CSSI_31, &query__V_695_695);
              }
#line 644 "query.m"
              {
#line 644 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_701_701, query__V_70_70, &query__V_702_702);
              }
#line 643 "query.m"
              {
#line 643 "query.m"
                query__V_709_709 = mercury__string__f_43_43_2_f_0(query__V_702_702, query__V_695_695);
              }
#line 644 "query.m"
              {
#line 644 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_701_701, query__V_67_67, &query__V_710_710);
              }
#line 643 "query.m"
              {
#line 643 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_710_710, query__V_709_709);
              }
#line 641 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 13:
#line 646 "query.m"
            {
#line 646 "query.m"
              MR_Word query__CSDPtr_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 646 "query.m"
              MR_Integer query__CSDI_33 = (MR_Integer) query__CSDPtr_32;
#line 646 "query.m"
              MR_String query__V_57_57;
#line 646 "query.m"
              MR_Char query__V_60_60;
#line 646 "query.m"
              MR_String query__V_717_717;
#line 646 "query.m"
              MR_Word query__V_723_723;
#line 646 "query.m"
              MR_String query__V_724_724;
#line 646 "query.m"
              MR_String query__V_731_731;
#line 646 "query.m"
              MR_String query__V_732_732;

#line 649 "query.m"
              {
#line 649 "query.m"
                query__V_57_57 = query__cmd_str_dump_call_site_dynamic_0_f_0();
              }
#line 649 "query.m"
              {
#line 649 "query.m"
                query__V_60_60 = query__cmd_separator_char_0_f_0();
              }
#line 15769 "query.c"
              query__V_723_723 = (MR_Word) &query_scalar_common_2[1];
#line 650 "query.m"
              {
#line 650 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_723_723, query__CSDI_33, &query__V_717_717);
              }
#line 649 "query.m"
              {
#line 649 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_723_723, query__V_60_60, &query__V_724_724);
              }
#line 648 "query.m"
              {
#line 648 "query.m"
                query__V_731_731 = mercury__string__f_43_43_2_f_0(query__V_724_724, query__V_717_717);
              }
#line 649 "query.m"
              {
#line 649 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_723_723, query__V_57_57, &query__V_732_732);
              }
#line 648 "query.m"
              {
#line 648 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_732_732, query__V_731_731);
              }
#line 646 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 14:
#line 652 "query.m"
            {
#line 652 "query.m"
              MR_String query__V_47_47;
#line 652 "query.m"
              MR_Char query__V_50_50;
#line 652 "query.m"
              MR_Word query__CliquePtr_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 652 "query.m"
              MR_Integer query__CliqueNum_260 = (MR_Integer) query__CliquePtr_259;
#line 652 "query.m"
              MR_String query__V_673_673;
#line 652 "query.m"
              MR_Word query__V_679_679;
#line 652 "query.m"
              MR_String query__V_680_680;
#line 652 "query.m"
              MR_String query__V_687_687;
#line 652 "query.m"
              MR_String query__V_688_688;

#line 655 "query.m"
              {
#line 655 "query.m"
                query__V_47_47 = query__cmd_str_dump_raw_clique_0_f_0();
              }
#line 655 "query.m"
              {
#line 655 "query.m"
                query__V_50_50 = query__cmd_separator_char_0_f_0();
              }
#line 15833 "query.c"
              query__V_679_679 = (MR_Word) &query_scalar_common_2[1];
#line 655 "query.m"
              {
#line 655 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_679_679, query__CliqueNum_260, &query__V_673_673);
              }
#line 655 "query.m"
              {
#line 655 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_679_679, query__V_50_50, &query__V_680_680);
              }
#line 654 "query.m"
              {
#line 654 "query.m"
                query__V_687_687 = mercury__string__f_43_43_2_f_0(query__V_680_680, query__V_673_673);
              }
#line 655 "query.m"
              {
#line 655 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_679_679, query__V_47_47, &query__V_688_688);
              }
#line 654 "query.m"
              {
#line 654 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_688_688, query__V_687_687);
              }
#line 652 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
          case (MR_Integer) 15:
#line 657 "query.m"
            {
#line 657 "query.m"
              MR_String query__V_37_37;
#line 657 "query.m"
              MR_Char query__V_40_40;
#line 657 "query.m"
              MR_Word query__CSDPtr_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 657 "query.m"
              MR_Integer query__CSDI_262 = (MR_Integer) query__CSDPtr_261;
#line 657 "query.m"
              MR_String query__V_783_783;
#line 657 "query.m"
              MR_Word query__V_789_789;
#line 657 "query.m"
              MR_String query__V_790_790;
#line 657 "query.m"
              MR_String query__V_797_797;
#line 657 "query.m"
              MR_String query__V_798_798;

#line 660 "query.m"
              {
#line 660 "query.m"
                query__V_37_37 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
              }
#line 660 "query.m"
              {
#line 660 "query.m"
                query__V_40_40 = query__cmd_separator_char_0_f_0();
              }
#line 15897 "query.c"
              query__V_789_789 = (MR_Word) &query_scalar_common_2[1];
#line 661 "query.m"
              {
#line 661 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_789_789, query__CSDI_262, &query__V_783_783);
              }
#line 660 "query.m"
              {
#line 660 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_789_789, query__V_40_40, &query__V_790_790);
              }
#line 659 "query.m"
              {
#line 659 "query.m"
                query__V_797_797 = mercury__string__f_43_43_2_f_0(query__V_790_790, query__V_783_783);
              }
#line 660 "query.m"
              {
#line 660 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_789_789, query__V_37_37, &query__V_798_798);
              }
#line 659 "query.m"
              {
#line 659 "query.m"
                query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_798_798, query__V_797_797);
              }
#line 657 "query.m"
            }
#line 537 "query.m"
            break;
#line 537 "query.m"
        }
#line 537 "query.m"
        break;
#line 537 "query.m"
    }
#line 537 "query.m"
    return query__CmdStr_4;
#line 537 "query.m"
  }
#line 533 "query.m"
}

#line 519 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void)
#line 519 "query.m"
{
#line 526 "query.m"
  {
#line 526 "query.m"
    MR_bool query__succeeded;

#line 526 "query.m"
    return (MR_Char) 47;
#line 526 "query.m"
  }
#line 519 "query.m"
}

#line 518 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void)
#line 518 "query.m"
{
#line 525 "query.m"
  {
#line 525 "query.m"
    MR_bool query__succeeded;

#line 525 "query.m"
    return (MR_Char) 47;
#line 525 "query.m"
  }
#line 518 "query.m"
}

#line 434 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 434 "query.m"
  MR_Word query__Cmd_4,
#line 434 "query.m"
  MR_Word query__Deep_5,
#line 434 "query.m"
  MR_Word * query__Report_6)
#line 434 "query.m"
{
#line 437 "query.m"
  {
#line 437 "query.m"
    MR_bool query__succeeded;
#line 437 "query.m"
    MR_Box query__CallTableTipVar_10;
#line 437 "query.m"
    MR_Word query__Status_11;

#line 437 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_ProcTableInfoPtr proc_table_info;
	MR_TrieNode CallTableTipVar;
	MR_Word status;
	MR_Word input_typeinfo0;
	MR_Word arg0;
	MR_Word input_typeinfo1;
	MR_Word arg1;

	proc_table_info = (MR_ProcTableInfoPtr) (MR_Box) &query__table_info_for_create_and_memoize_report_3_p_0 ;
	input_typeinfo0 =  (MR_Word) &query__query__type_ctor_info_cmd_0 ;
	arg0 =  query__Cmd_4 ;
	input_typeinfo1 =  (MR_Word) &profile__profile__type_ctor_info_deep_0 ;
	arg1 =  query__Deep_5 ;
		{
#line 437 "query.m"
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo0, arg0, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen_addr(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);

#line 16025 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	 query__Status_11  = status;
#line 437 "query.m"
}
#line 437 "query.m"
#line 437 "query.m"
    switch (query__Status_11) {
#line 437 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 437 "query.m"
      case (MR_Integer) 1:
#line 437 "query.m"
        {
#line 437 "query.m"
          {
#line 437 "query.m"
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred query.create_and_memoize_report/3");
#line 437 "query.m"
            return;
          }
#line 437 "query.m"
        }
#line 437 "query.m"
        break;
#line 437 "query.m"
      case (MR_Integer) 0:
#line 437 "query.m"
        {
#line 437 "query.m"
          {
#line 437 "query.m"
            create_report__create_report_3_p_0(query__Cmd_4, query__Deep_5, query__Report_6);
          }
#line 437 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) query__CallTableTipVar_10 ;
	arg0 = (MR_Word) ((MR_Box) (*query__Report_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &report__report__type_ctor_info_deep_report_0 ;
		{
#line 437 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 16079 "query.c"

		;}
#undef MR_PROC_LABEL
#line 437 "query.m"
}
#line 437 "query.m"
        }
#line 437 "query.m"
        break;
#line 437 "query.m"
      case (MR_Integer) 2:
#line 437 "query.m"
        {
#line 437 "query.m"
          MR_Box query__conv0_restore_arg0;

#line 437 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) query__CallTableTipVar_10 ;
		{
#line 437 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 16110 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 437 "query.m"
          *query__Report_6 = ((MR_Word) query__conv0_restore_arg0);
#line 437 "query.m"
}
#line 437 "query.m"
        }
#line 437 "query.m"
        break;
#line 437 "query.m"
    }
#line 437 "query.m"
  }
#line 434 "query.m"
}

#line 413 "query.m"
static void MR_CALL 
query__exec_4_p_0(
#line 413 "query.m"
  MR_Word query__Cmd_5,
#line 413 "query.m"
  MR_Word query__Prefs_6,
#line 413 "query.m"
  MR_Word query__Deep_7,
#line 413 "query.m"
  MR_String * query__HTMLStr_8)
#line 413 "query.m"
{
#line 415 "query.m"
  {
#line 415 "query.m"
    MR_bool query__succeeded = (query__Cmd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 415 "query.m"
    MR_Word query__Report_9;
#line 415 "query.m"
    MR_Word query__Display_10;
#line 415 "query.m"
    MR_Word query__HTML_11;

#line 418 "query.m"
    if (query__succeeded)
#line 417 "query.m"
      {
#line 417 "query.m"
        query__create_and_memoize_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
#line 418 "query.m"
    else
#line 419 "query.m"
      {
#line 419 "query.m"
        create_report__create_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
#line 421 "query.m"
    {
#line 421 "query.m"
      query__Display_10 = display_report__report_to_display_3_f_0(query__Deep_7, query__Prefs_6, query__Report_9);
    }
#line 422 "query.m"
    {
#line 422 "query.m"
      query__HTML_11 = html_format__htmlize_display_3_f_0(query__Deep_7, query__Prefs_6, query__Display_10);
    }
#line 423 "query.m"
    {
#line 423 "query.m"
      *query__HTMLStr_8 = html_format__html_to_string_1_f_0(query__HTML_11);
    }
#line 415 "query.m"
  }
#line 413 "query.m"
}

#line 359 "query.m"
MR_Word MR_CALL 
query__default_developer_mode_0_f_0(void)
#line 359 "query.m"
{
#line 513 "query.m"
  {
#line 513 "query.m"
    MR_bool query__succeeded;

#line 513 "query.m"
    return (MR_Integer) 1;
#line 513 "query.m"
  }
#line 359 "query.m"
}

#line 358 "query.m"
MR_Word MR_CALL 
query__default_inactive_items_0_f_0(void)
#line 358 "query.m"
{
#line 511 "query.m"
  {
#line 511 "query.m"
    MR_bool query__succeeded;

#line 511 "query.m"
    return (MR_Word) &query_scalar_common_2[9];
#line 511 "query.m"
  }
#line 358 "query.m"
}

#line 357 "query.m"
MR_Word MR_CALL 
query__default_module_qual_0_f_0(void)
#line 357 "query.m"
{
#line 510 "query.m"
  {
#line 510 "query.m"
    MR_bool query__succeeded;

#line 510 "query.m"
    return (MR_Integer) 1;
#line 510 "query.m"
  }
#line 357 "query.m"
}

#line 356 "query.m"
MR_Word MR_CALL 
query__default_time_format_0_f_0(void)
#line 356 "query.m"
{
#line 509 "query.m"
  {
#line 509 "query.m"
    MR_bool query__succeeded;

#line 509 "query.m"
    return (MR_Integer) 2;
#line 509 "query.m"
  }
#line 356 "query.m"
}

#line 355 "query.m"
MR_Word MR_CALL 
query__default_contour_exclusion_0_f_0(void)
#line 355 "query.m"
{
#line 508 "query.m"
  {
#line 508 "query.m"
    MR_bool query__succeeded;

#line 508 "query.m"
    return (MR_Integer) 1;
#line 508 "query.m"
  }
#line 355 "query.m"
}

#line 354 "query.m"
MR_Word MR_CALL 
query__default_scope_0_f_0(void)
#line 354 "query.m"
{
#line 507 "query.m"
  {
#line 507 "query.m"
    MR_bool query__succeeded;

#line 507 "query.m"
    return (MR_Integer) 1;
#line 507 "query.m"
  }
#line 354 "query.m"
}

#line 353 "query.m"
MR_Word MR_CALL 
query__default_incl_desc_0_f_0(void)
#line 353 "query.m"
{
#line 506 "query.m"
  {
#line 506 "query.m"
    MR_bool query__succeeded;

#line 506 "query.m"
    return (MR_Integer) 1;
#line 506 "query.m"
  }
#line 353 "query.m"
}

#line 352 "query.m"
MR_Word MR_CALL 
query__default_cost_kind_0_f_0(void)
#line 352 "query.m"
{
#line 505 "query.m"
  {
#line 505 "query.m"
    MR_bool query__succeeded;

#line 505 "query.m"
    return (MR_Integer) 3;
#line 505 "query.m"
  }
#line 352 "query.m"
}

#line 351 "query.m"
MR_Word MR_CALL 
query__default_order_criteria_0_f_0(void)
#line 351 "query.m"
{
#line 504 "query.m"
  {
#line 504 "query.m"
    MR_bool query__succeeded;

#line 504 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "query.m"
  }
#line 351 "query.m"
}

#line 350 "query.m"
MR_Word MR_CALL 
query__default_summarize_ho_call_sites_0_f_0(void)
#line 350 "query.m"
{
#line 503 "query.m"
  {
#line 503 "query.m"
    MR_bool query__succeeded;

#line 503 "query.m"
    return (MR_Integer) 1;
#line 503 "query.m"
  }
#line 350 "query.m"
}

#line 349 "query.m"
MR_Integer MR_CALL 
query__default_proc_statics_per_rec_type_limit_0_f_0(void)
#line 349 "query.m"
{
#line 502 "query.m"
  {
#line 502 "query.m"
    MR_bool query__succeeded;

#line 502 "query.m"
    return (MR_Integer) 20;
#line 502 "query.m"
  }
#line 349 "query.m"
}

#line 348 "query.m"
MR_Word MR_CALL 
query__default_ancestor_limit_0_f_0(void)
#line 348 "query.m"
{
#line 501 "query.m"
  {
#line 501 "query.m"
    MR_bool query__succeeded;

#line 501 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[8]);
#line 501 "query.m"
  }
#line 348 "query.m"
}

#line 347 "query.m"
MR_Word MR_CALL 
query__default_colour_column_groups_0_f_0(void)
#line 347 "query.m"
{
#line 500 "query.m"
  {
#line 500 "query.m"
    MR_bool query__succeeded;

#line 500 "query.m"
    return (MR_Integer) 0;
#line 500 "query.m"
  }
#line 347 "query.m"
}

#line 346 "query.m"
MR_Word MR_CALL 
query__default_box_tables_0_f_0(void)
#line 346 "query.m"
{
#line 499 "query.m"
  {
#line 499 "query.m"
    MR_bool query__succeeded;

#line 499 "query.m"
    return (MR_Integer) 0;
#line 499 "query.m"
  }
#line 346 "query.m"
}

#line 345 "query.m"
MR_Word MR_CALL 
query__all_fields_0_f_0(void)
#line 345 "query.m"
{
#line 496 "query.m"
  {
#line 496 "query.m"
    MR_bool query__succeeded;

#line 496 "query.m"
    return (MR_Word) &query_scalar_common_1[3];
#line 496 "query.m"
  }
#line 345 "query.m"
}

#line 344 "query.m"
MR_Word MR_CALL 
query__default_fields_1_f_0(
#line 344 "query.m"
  MR_Word query__Deep_3)
#line 344 "query.m"
{
#line 485 "query.m"
  {
#line 485 "query.m"
    MR_bool query__succeeded;
#line 485 "query.m"
    MR_Word query__Fields_4;
#line 485 "query.m"
    MR_Word query__Time_6;
#line 485 "query.m"
    MR_Integer query__UserQuanta_14;
#line 485 "query.m"
    MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 449 "query.m"
    MR_String query__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 449 "query.m"
    MR_String query__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 449 "query.m"
    MR_String query__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 449 "query.m"
    MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 449 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 449 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 449 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 449 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 449 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 449 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 449 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 449 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 449 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 449 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 449 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 449 "query.m"
    MR_ArrayPtr query__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 449 "query.m"
    MR_ArrayPtr query__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 449 "query.m"
    MR_ArrayPtr query__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 449 "query.m"
    MR_ArrayPtr query__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 449 "query.m"
    MR_ArrayPtr query__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 449 "query.m"
    MR_ArrayPtr query__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 449 "query.m"
    MR_ArrayPtr query__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 449 "query.m"
    MR_ArrayPtr query__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 449 "query.m"
    MR_ArrayPtr query__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 449 "query.m"
    MR_Word query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 449 "query.m"
    MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 449 "query.m"
    MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 449 "query.m"
    MR_Word query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 449 "query.m"
    MR_String query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 0)));
#line 449 "query.m"
    MR_Integer query__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 1)));
#line 449 "query.m"
    MR_Integer query__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 2)));
#line 449 "query.m"
    MR_Integer query__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 3)));
#line 449 "query.m"
    MR_Integer query__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 4)));
#line 449 "query.m"
    MR_Integer query__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 5)));
#line 449 "query.m"
    MR_Integer query__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 6)));
#line 449 "query.m"
    MR_Integer query__V_52_52;
#line 449 "query.m"
    MR_Word query__V_53_53;

#line 449 "query.m"
    query__UserQuanta_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 7)));
#line 449 "query.m"
    query__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 8)));
#line 449 "query.m"
    query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 9)));
#line 450 "query.m"
    query__succeeded = (query__UserQuanta_14 > (MR_Integer) 10);
#line 16545 "query.c"
    if (query__succeeded)
#line 489 "query.m"
      query__Time_6 = (MR_Integer) 1;
#line 16549 "query.c"
    else
#line 492 "query.m"
      query__Time_6 = (MR_Integer) 0;
#line 494 "query.m"
    {
#line 494 "query.m"
      query__Fields_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 0) = ((MR_Box) (((MR_Integer) 1 | ((((query__Time_6 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))));
#line 494 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])));
#line 494 "query.m"
    }
#line 485 "query.m"
    return query__Fields_4;
#line 485 "query.m"
  }
#line 344 "query.m"
}

#line 342 "query.m"
MR_Word MR_CALL 
query__default_preferences_1_f_0(
#line 342 "query.m"
  MR_Word query__Deep_3)
#line 342 "query.m"
{
#line 469 "query.m"
  {
#line 469 "query.m"
    MR_bool query__succeeded;
#line 469 "query.m"
    MR_Word query__HeadVar__2_2;
#line 469 "query.m"
    MR_Word query__V_4_4;

#line 471 "query.m"
    {
#line 471 "query.m"
      query__V_4_4 = query__default_fields_1_f_0(query__Deep_3);
    }
#line 470 "query.m"
    {
#line 470 "query.m"
      query__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 0) = ((MR_Box) (query__V_4_4));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[8])));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 4) = ((MR_Box) ((MR_Integer) 1));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 6) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 2 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[9]));
#line 470 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 8) = ((MR_Box) ((MR_Integer) 1));
#line 470 "query.m"
    }
#line 469 "query.m"
    return query__HeadVar__2_2;
#line 469 "query.m"
  }
#line 342 "query.m"
}

#line 340 "query.m"
MR_Word MR_CALL 
query__solidify_preference_2_f_0(
#line 340 "query.m"
  MR_Word query__Deep_4,
#line 340 "query.m"
  MR_Word query__PrefInd_5)
#line 340 "query.m"
{
#line 460 "query.m"
  {
#line 460 "query.m"
    MR_bool query__succeeded;
#line 460 "query.m"
    MR_Word query__Pref_6;

#line 460 "query.m"
#line 460 "query.m"
    switch (MR_tag((MR_Word) query__PrefInd_5)) {
#line 460 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 460 "query.m"
      case (MR_Integer) 0:
#line 460 "query.m"
#line 460 "query.m"
        switch (MR_unmkbody(query__PrefInd_5)) {
#line 460 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 460 "query.m"
          case (MR_Integer) 0:
#line 463 "query.m"
            {
#line 463 "query.m"
              query__Pref_6 = query__default_preferences_1_f_0(query__Deep_4);
            }
#line 460 "query.m"
            break;
#line 460 "query.m"
          case (MR_Integer) 1:
#line 465 "query.m"
            {
#line 465 "query.m"
              MR_Word query__V_7_7;
#line 466 "query.m"
              MR_Word query__V_10_10;
#line 466 "query.m"
              MR_Word query__V_11_11;
#line 466 "query.m"
              MR_Word query__V_12_12;
#line 466 "query.m"
              MR_Integer query__V_13_13;
#line 466 "query.m"
              MR_Word query__V_14_14;
#line 466 "query.m"
              MR_Word query__V_15_15;
#line 466 "query.m"
              MR_Word query__V_16_16;
#line 466 "query.m"
              MR_Word query__V_17_17;
#line 466 "query.m"
              MR_Word query__V_18_18;
#line 466 "query.m"
              MR_Word query__V_19_19;
#line 466 "query.m"
              MR_Word query__V_20_20;
#line 466 "query.m"
              MR_Word query__V_9_9;

#line 466 "query.m"
              {
#line 466 "query.m"
                query__V_7_7 = query__default_preferences_1_f_0(query__Deep_4);
              }
#line 466 "query.m"
              query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 0)));
#line 466 "query.m"
              query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 466 "query.m"
              query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 466 "query.m"
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 2)));
#line 466 "query.m"
              query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 3)));
#line 466 "query.m"
              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 4)));
#line 466 "query.m"
              query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 5)));
#line 466 "query.m"
              query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 466 "query.m"
              query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 466 "query.m"
              query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 466 "query.m"
              query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 7)));
#line 466 "query.m"
              query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 8)));
#line 466 "query.m"
              {
#line 466 "query.m"
                query__Pref_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 0) = ((MR_Box) (&query_scalar_common_1[3]));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 1) = ((MR_Box) ((query__V_10_10 | ((query__V_11_11 << (MR_Integer) 1)))));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 2) = ((MR_Box) (query__V_12_12));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 3) = ((MR_Box) (query__V_13_13));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 4) = ((MR_Box) (query__V_14_14));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 5) = ((MR_Box) (query__V_15_15));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 6) = ((MR_Box) ((query__V_16_16 | ((((query__V_17_17 << (MR_Integer) 1)) | ((query__V_18_18 << (MR_Integer) 3)))))));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 7) = ((MR_Box) (query__V_19_19));
#line 466 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 8) = ((MR_Box) (query__V_20_20));
#line 466 "query.m"
              }
#line 465 "query.m"
            }
#line 460 "query.m"
            break;
#line 460 "query.m"
        }
#line 460 "query.m"
        break;
#line 460 "query.m"
      case (MR_Integer) 1:
#line 460 "query.m"
        query__Pref_6 = (MR_Word) MR_body(((MR_Word) query__PrefInd_5), (MR_Integer) 1);
#line 460 "query.m"
        break;
#line 460 "query.m"
    }
#line 460 "query.m"
    return query__Pref_6;
#line 460 "query.m"
  }
#line 340 "query.m"
}

#line 338 "query.m"
MR_Word MR_CALL 
query__default_command_0_f_0(void)
#line 338 "query.m"
{
#line 456 "query.m"
  {
#line 456 "query.m"
    MR_bool query__succeeded;

#line 456 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 456 "query.m"
  }
#line 338 "query.m"
}

#line 336 "query.m"
MR_Word MR_CALL 
query__should_display_times_1_f_0(
#line 336 "query.m"
  MR_Word query__Deep_3)
#line 336 "query.m"
{
#line 448 "query.m"
  {
#line 448 "query.m"
    MR_bool query__succeeded;
#line 448 "query.m"
    MR_Word query__ShouldDisplayTimes_4;
#line 448 "query.m"
    MR_Integer query__UserQuanta_5;
#line 448 "query.m"
    MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 449 "query.m"
    MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 449 "query.m"
    MR_String query__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 449 "query.m"
    MR_String query__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 449 "query.m"
    MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 449 "query.m"
    MR_ArrayPtr query__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 449 "query.m"
    MR_ArrayPtr query__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 449 "query.m"
    MR_ArrayPtr query__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 449 "query.m"
    MR_ArrayPtr query__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 449 "query.m"
    MR_ArrayPtr query__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 449 "query.m"
    MR_ArrayPtr query__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 449 "query.m"
    MR_ArrayPtr query__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 449 "query.m"
    MR_ArrayPtr query__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 449 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 449 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 449 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 449 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 449 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 449 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 449 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 449 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 449 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 449 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 449 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 449 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 449 "query.m"
    MR_Word query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 449 "query.m"
    MR_Word query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 449 "query.m"
    MR_Word query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 449 "query.m"
    MR_Word query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 449 "query.m"
    MR_String query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 0)));
#line 449 "query.m"
    MR_Integer query__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 1)));
#line 449 "query.m"
    MR_Integer query__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 2)));
#line 449 "query.m"
    MR_Integer query__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 3)));
#line 449 "query.m"
    MR_Integer query__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 4)));
#line 449 "query.m"
    MR_Integer query__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 5)));
#line 449 "query.m"
    MR_Integer query__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 6)));
#line 449 "query.m"
    MR_Integer query__V_43_43;
#line 449 "query.m"
    MR_Word query__V_44_44;

#line 449 "query.m"
    query__UserQuanta_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 7)));
#line 449 "query.m"
    query__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 8)));
#line 449 "query.m"
    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 9)));
#line 450 "query.m"
    query__succeeded = (query__UserQuanta_5 > (MR_Integer) 10);
#line 452 "query.m"
    if (query__succeeded)
#line 451 "query.m"
      query__ShouldDisplayTimes_4 = (MR_Integer) 1;
#line 452 "query.m"
    else
#line 453 "query.m"
      query__ShouldDisplayTimes_4 = (MR_Integer) 0;
#line 448 "query.m"
    return query__ShouldDisplayTimes_4;
#line 448 "query.m"
  }
#line 336 "query.m"
}

#line 66 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_pref_1_f_0(
#line 66 "query.m"
  MR_String query__QueryString_3)
#line 66 "query.m"
{
#line 866 "query.m"
  {
#line 866 "query.m"
    MR_bool query__succeeded;
#line 866 "query.m"
    MR_Word query__MaybePreferences_4;
#line 866 "query.m"
    MR_Word query__Pieces_5;
#line 897 "query.m"
    MR_Word query__Fields_18;
#line 897 "query.m"
    MR_Word query__Box_19;
#line 897 "query.m"
    MR_Word query__Colour_20;
#line 897 "query.m"
    MR_Word query__MaybeAncestorLimit_22;
#line 897 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_23;
#line 897 "query.m"
    MR_Word query__SummarizeHoCallSites_24;
#line 897 "query.m"
    MR_Word query__Order_25;
#line 897 "query.m"
    MR_Word query__Contour_26;
#line 897 "query.m"
    MR_Word query__Time_27;
#line 897 "query.m"
    MR_Word query__ModuleQual_28;
#line 897 "query.m"
    MR_Word query__InactiveItems_29;
#line 897 "query.m"
    MR_Word query__DeveloperMode_30;
#line 872 "query.m"
    MR_String query__FieldsStr_6;
#line 872 "query.m"
    MR_String query__BoxStr_7;
#line 872 "query.m"
    MR_String query__ColourStr_8;
#line 872 "query.m"
    MR_String query__MaybeAncestorLimitStr_9;
#line 872 "query.m"
    MR_String query__ProcStaticsPerRecTypeLimitStr_10;
#line 872 "query.m"
    MR_String query__SummarizeHoCallSitesStr_11;
#line 872 "query.m"
    MR_String query__OrderStr_12;
#line 872 "query.m"
    MR_String query__ContourStr_13;
#line 872 "query.m"
    MR_String query__TimeStr_14;
#line 872 "query.m"
    MR_String query__ModuleQualStr_15;
#line 872 "query.m"
    MR_String query__InactiveItemsStr_16;
#line 872 "query.m"
    MR_String query__DeveloperModeStr_17;
#line 872 "query.m"
    MR_Word query__V_33_33;
#line 872 "query.m"
    MR_Word query__V_34_34;
#line 872 "query.m"
    MR_Word query__V_35_35;
#line 872 "query.m"
    MR_Word query__V_36_36;
#line 872 "query.m"
    MR_Word query__V_37_37;
#line 872 "query.m"
    MR_Word query__V_38_38;
#line 872 "query.m"
    MR_Word query__V_39_39;
#line 872 "query.m"
    MR_Word query__V_40_40;
#line 872 "query.m"
    MR_Word query__V_41_41;
#line 872 "query.m"
    MR_Word query__V_42_42;
#line 872 "query.m"
    MR_Word query__V_43_43;
#line 872 "query.m"
    MR_Word query__V_44_44;
#line 872 "query.m"
    MR_Word query__Pieces_47;
#line 872 "query.m"
    MR_String query__PortStr_48;
#line 872 "query.m"
    MR_String query__TimeStr_49;
#line 872 "query.m"
    MR_String query__CallSeqsStr_50;
#line 872 "query.m"
    MR_String query__AllocStr_51;
#line 872 "query.m"
    MR_String query__MemoryStr_52;
#line 872 "query.m"
    MR_Word query__Port_53;
#line 872 "query.m"
    MR_Word query__Time_54;
#line 872 "query.m"
    MR_Word query__CallSeqs_55;
#line 872 "query.m"
    MR_Word query__Alloc_56;
#line 872 "query.m"
    MR_Word query__Memory_57;
#line 872 "query.m"
    MR_Char query__V_58_58;
#line 872 "query.m"
    MR_Word query__V_59_59;
#line 872 "query.m"
    MR_Word query__V_60_60;
#line 872 "query.m"
    MR_Word query__V_61_61;
#line 872 "query.m"
    MR_Word query__V_62_62;
#line 872 "query.m"
    MR_Word query__V_63_63;
#line 985 "query.m"
    MR_Integer query__lo_0;
#line 985 "query.m"
    MR_Integer query__hi_1;
#line 985 "query.m"
    MR_Integer query__mid_2;
#line 985 "query.m"
    MR_Integer query__result_3;
#line 1027 "query.m"
    MR_Integer query__lo_4;
#line 1027 "query.m"
    MR_Integer query__hi_5;
#line 1027 "query.m"
    MR_Integer query__mid_6;
#line 1027 "query.m"
    MR_Integer query__result_7;
#line 878 "query.m"
    MR_Integer query__AncestorLimit_21;

#line 867 "query.m"
    {
#line 867 "query.m"
      util__split_3_p_0(query__QueryString_3, (MR_Char) 47, &query__Pieces_5);
    }
#line 869 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 869 "query.m"
    if (query__succeeded)
#line 869 "query.m"
      {
#line 869 "query.m"
        query__FieldsStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 869 "query.m"
        query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 869 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 869 "query.m"
        if (query__succeeded)
#line 869 "query.m"
          {
#line 869 "query.m"
            query__BoxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 0)));
#line 869 "query.m"
            query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 1)));
#line 869 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 869 "query.m"
            if (query__succeeded)
#line 869 "query.m"
              {
#line 869 "query.m"
                query__ColourStr_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 0)));
#line 869 "query.m"
                query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 1)));
#line 870 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 870 "query.m"
                if (query__succeeded)
#line 870 "query.m"
                  {
#line 870 "query.m"
                    query__MaybeAncestorLimitStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 0)));
#line 870 "query.m"
                    query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 1)));
#line 870 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 870 "query.m"
                    if (query__succeeded)
#line 870 "query.m"
                      {
#line 870 "query.m"
                        query__ProcStaticsPerRecTypeLimitStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 0)));
#line 870 "query.m"
                        query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 1)));
#line 871 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                        if (query__succeeded)
#line 871 "query.m"
                          {
#line 871 "query.m"
                            query__SummarizeHoCallSitesStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 0)));
#line 871 "query.m"
                            query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 1)));
#line 871 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                            if (query__succeeded)
#line 871 "query.m"
                              {
#line 871 "query.m"
                                query__OrderStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 0)));
#line 871 "query.m"
                                query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 1)));
#line 871 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                                if (query__succeeded)
#line 871 "query.m"
                                  {
#line 871 "query.m"
                                    query__ContourStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 0)));
#line 871 "query.m"
                                    query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 1)));
#line 871 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                                    if (query__succeeded)
#line 871 "query.m"
                                      {
#line 871 "query.m"
                                        query__TimeStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 0)));
#line 871 "query.m"
                                        query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 1)));
#line 872 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                                        if (query__succeeded)
#line 872 "query.m"
                                          {
#line 872 "query.m"
                                            query__ModuleQualStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 0)));
#line 872 "query.m"
                                            query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 1)));
#line 872 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                                            if (query__succeeded)
#line 872 "query.m"
                                              {
#line 872 "query.m"
                                                query__InactiveItemsStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 0)));
#line 872 "query.m"
                                                query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 1)));
#line 872 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                                                if (query__succeeded)
#line 872 "query.m"
                                                  {
#line 872 "query.m"
                                                    query__DeveloperModeStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 0)));
#line 872 "query.m"
                                                    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 1)));
#line 872 "query.m"
                                                    query__succeeded = (query__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "query.m"
                                                    if (query__succeeded)
#line 872 "query.m"
                                                      {
#line 528 "query.m"
                                                        query__V_58_58 = (MR_Char) 45;
#line 1050 "query.m"
                                                        {
#line 1050 "query.m"
                                                          util__split_3_p_0(query__FieldsStr_6, query__V_58_58, &query__Pieces_47);
                                                        }
#line 1051 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_47)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "query.m"
                                                        if (query__succeeded)
#line 1051 "query.m"
                                                          {
#line 1051 "query.m"
                                                            query__PortStr_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 0)));
#line 1051 "query.m"
                                                            query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 1)));
#line 1051 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "query.m"
                                                            if (query__succeeded)
#line 1051 "query.m"
                                                              {
#line 1051 "query.m"
                                                                query__TimeStr_49 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 0)));
#line 1051 "query.m"
                                                                query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 1)));
#line 1051 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "query.m"
                                                                if (query__succeeded)
#line 1051 "query.m"
                                                                  {
#line 1051 "query.m"
                                                                    query__CallSeqsStr_50 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
#line 1051 "query.m"
                                                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
#line 1051 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "query.m"
                                                                    if (query__succeeded)
#line 1051 "query.m"
                                                                      {
#line 1051 "query.m"
                                                                        query__AllocStr_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
#line 1051 "query.m"
                                                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
#line 1051 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 1051 "query.m"
                                                                        if (query__succeeded)
#line 1051 "query.m"
                                                                          {
#line 1051 "query.m"
                                                                            query__MemoryStr_52 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
#line 1051 "query.m"
                                                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
#line 1051 "query.m"
                                                                            query__succeeded = (query__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "query.m"
                                                                            if (query__succeeded)
#line 872 "query.m"
                                                                              {
#line 973 "query.m"
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "_") == 0))
#line 973 "query.m"
                                                                                  {
#line 973 "query.m"
                                                                                    query__Port_53 = (MR_Integer) 0;
#line 973 "query.m"
                                                                                    query__succeeded = MR_TRUE;
#line 973 "query.m"
                                                                                  }
#line 973 "query.m"
                                                                                else
#line 973 "query.m"
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "p") == 0))
#line 974 "query.m"
                                                                                  {
#line 974 "query.m"
                                                                                    query__Port_53 = (MR_Integer) 1;
#line 974 "query.m"
                                                                                    query__succeeded = MR_TRUE;
#line 974 "query.m"
                                                                                  }
#line 973 "query.m"
                                                                                else
#line 973 "query.m"
                                                                                  query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                if (query__succeeded)
#line 872 "query.m"
                                                                                  {
#line 985 "query.m"
                                                                                    /* binary string simple lookup switch */
#line 985 "query.m"
                                                                                    query__lo_0 = (MR_Integer) 0;
#line 985 "query.m"
                                                                                    query__hi_1 = (MR_Integer) 5;
#line 985 "query.m"
                                                                                    do
#line 985 "query.m"
                                                                                      {
#line 985 "query.m"
                                                                                        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 985 "query.m"
                                                                                        query__result_3 = MR_strcmp(query__TimeStr_49, ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_0);
#line 985 "query.m"
                                                                                        if ((query__result_3 == (MR_Integer) 0))
#line 985 "query.m"
                                                                                          {
#line 985 "query.m"
                                                                                            query__Time_54 = ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_1;
#line 985 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 985 "query.m"
                                                                                            /* jump out of search loop */
#line 985 "query.m"
                                                                                            goto label_0;
#line 985 "query.m"
                                                                                          }
#line 985 "query.m"
                                                                                        else
#line 985 "query.m"
                                                                                        if ((query__result_3 < (MR_Integer) 0))
#line 985 "query.m"
                                                                                          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 985 "query.m"
                                                                                        else
#line 985 "query.m"
                                                                                          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 985 "query.m"
                                                                                      }
#line 985 "query.m"
                                                                                    while ((query__lo_0 <= query__hi_1));
#line 985 "query.m"
                                                                                    query__succeeded = MR_FALSE;
#line 985 "query.m"
                                                                                  label_0:;
#line 872 "query.m"
                                                                                    if (query__succeeded)
#line 872 "query.m"
                                                                                      {
#line 1001 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "S") == 0))
#line 1003 "query.m"
                                                                                          {
#line 1003 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 2;
#line 1003 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1003 "query.m"
                                                                                          }
#line 1001 "query.m"
                                                                                        else
#line 1001 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "_") == 0))
#line 1001 "query.m"
                                                                                          {
#line 1001 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 0;
#line 1001 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1001 "query.m"
                                                                                          }
#line 1001 "query.m"
                                                                                        else
#line 1001 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "s") == 0))
#line 1002 "query.m"
                                                                                          {
#line 1002 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 1;
#line 1002 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1002 "query.m"
                                                                                          }
#line 1001 "query.m"
                                                                                        else
#line 1001 "query.m"
                                                                                          query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                        if (query__succeeded)
#line 872 "query.m"
                                                                                          {
#line 1014 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "A") == 0))
#line 1016 "query.m"
                                                                                              {
#line 1016 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 2;
#line 1016 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1016 "query.m"
                                                                                              }
#line 1014 "query.m"
                                                                                            else
#line 1014 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "_") == 0))
#line 1014 "query.m"
                                                                                              {
#line 1014 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 0;
#line 1014 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1014 "query.m"
                                                                                              }
#line 1014 "query.m"
                                                                                            else
#line 1014 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "a") == 0))
#line 1015 "query.m"
                                                                                              {
#line 1015 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 1;
#line 1015 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1015 "query.m"
                                                                                              }
#line 1014 "query.m"
                                                                                            else
#line 1014 "query.m"
                                                                                              query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                            if (query__succeeded)
#line 872 "query.m"
                                                                                              {
#line 1027 "query.m"
                                                                                                /* binary string simple lookup switch */
#line 1027 "query.m"
                                                                                                query__lo_4 = (MR_Integer) 0;
#line 1027 "query.m"
                                                                                                query__hi_5 = (MR_Integer) 4;
#line 1027 "query.m"
                                                                                                do
#line 1027 "query.m"
                                                                                                  {
#line 1027 "query.m"
                                                                                                    query__mid_6 = (((query__lo_4 + query__hi_5)) / (MR_Integer) 2);
#line 1027 "query.m"
                                                                                                    query__result_7 = MR_strcmp(query__MemoryStr_52, ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_0);
#line 1027 "query.m"
                                                                                                    if ((query__result_7 == (MR_Integer) 0))
#line 1027 "query.m"
                                                                                                      {
#line 1027 "query.m"
                                                                                                        query__Memory_57 = ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_1;
#line 1027 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1027 "query.m"
                                                                                                        /* jump out of search loop */
#line 1027 "query.m"
                                                                                                        goto label_1;
#line 1027 "query.m"
                                                                                                      }
#line 1027 "query.m"
                                                                                                    else
#line 1027 "query.m"
                                                                                                    if ((query__result_7 < (MR_Integer) 0))
#line 1027 "query.m"
                                                                                                      query__hi_5 = (query__mid_6 - (MR_Integer) 1);
#line 1027 "query.m"
                                                                                                    else
#line 1027 "query.m"
                                                                                                      query__lo_4 = (query__mid_6 + (MR_Integer) 1);
#line 1027 "query.m"
                                                                                                  }
#line 1027 "query.m"
                                                                                                while ((query__lo_4 <= query__hi_5));
#line 1027 "query.m"
                                                                                                query__succeeded = MR_FALSE;
#line 1027 "query.m"
                                                                                              label_1:;
#line 872 "query.m"
                                                                                                if (query__succeeded)
#line 872 "query.m"
                                                                                                  {
#line 1058 "query.m"
                                                                                                    {
#line 1058 "query.m"
                                                                                                      query__Fields_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "query.m"
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 0) = ((MR_Box) ((query__Port_53 | ((((query__Time_54 << (MR_Integer) 1)) | ((((query__CallSeqs_55 << (MR_Integer) 4)) | ((query__Alloc_56 << (MR_Integer) 6)))))))));
#line 1058 "query.m"
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 1) = ((MR_Box) (query__Memory_57));
#line 1058 "query.m"
                                                                                                    }
#line 1294 "query.m"
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "box") == 0))
#line 1294 "query.m"
                                                                                                      {
#line 1294 "query.m"
                                                                                                        query__Box_19 = (MR_Integer) 0;
#line 1294 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1294 "query.m"
                                                                                                      }
#line 1294 "query.m"
                                                                                                    else
#line 1294 "query.m"
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "nobox") == 0))
#line 1295 "query.m"
                                                                                                      {
#line 1295 "query.m"
                                                                                                        query__Box_19 = (MR_Integer) 1;
#line 1295 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1295 "query.m"
                                                                                                      }
#line 1294 "query.m"
                                                                                                    else
#line 1294 "query.m"
                                                                                                      query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                    if (query__succeeded)
#line 872 "query.m"
                                                                                                      {
#line 1282 "query.m"
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "cols") == 0))
#line 1282 "query.m"
                                                                                                          {
#line 1282 "query.m"
                                                                                                            query__Colour_20 = (MR_Integer) 0;
#line 1282 "query.m"
                                                                                                            query__succeeded = MR_TRUE;
#line 1282 "query.m"
                                                                                                          }
#line 1282 "query.m"
                                                                                                        else
#line 1282 "query.m"
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "none") == 0))
#line 1283 "query.m"
                                                                                                          {
#line 1283 "query.m"
                                                                                                            query__Colour_20 = (MR_Integer) 1;
#line 1283 "query.m"
                                                                                                            query__succeeded = MR_TRUE;
#line 1283 "query.m"
                                                                                                          }
#line 1282 "query.m"
                                                                                                        else
#line 1282 "query.m"
                                                                                                          query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                        if (query__succeeded)
#line 872 "query.m"
                                                                                                          {
#line 876 "query.m"
                                                                                                            {
#line 876 "query.m"
                                                                                                              query__succeeded = mercury__string__to_int_2_p_0(query__MaybeAncestorLimitStr_9, &query__AncestorLimit_21);
                                                                                                            }
#line 878 "query.m"
                                                                                                            if (query__succeeded)
#line 877 "query.m"
                                                                                                              {
#line 877 "query.m"
                                                                                                                {
#line 877 "query.m"
                                                                                                                  query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 877 "query.m"
                                                                                                                  MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_22, 0) = ((MR_Box) (query__AncestorLimit_21));
#line 877 "query.m"
                                                                                                                }
#line 877 "query.m"
                                                                                                                query__succeeded = MR_TRUE;
#line 877 "query.m"
                                                                                                              }
#line 878 "query.m"
                                                                                                            else
#line 880 "query.m"
                                                                                                              {
#line 878 "query.m"
                                                                                                                query__succeeded = (strcmp(query__MaybeAncestorLimitStr_9, (MR_String) "no") == 0);
#line 880 "query.m"
                                                                                                                if (query__succeeded)
#line 880 "query.m"
                                                                                                                  {
#line 879 "query.m"
                                                                                                                    query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 879 "query.m"
                                                                                                                    query__succeeded = MR_TRUE;
#line 880 "query.m"
                                                                                                                  }
#line 880 "query.m"
                                                                                                              }
#line 872 "query.m"
                                                                                                            if (query__succeeded)
#line 872 "query.m"
                                                                                                              {
#line 883 "query.m"
                                                                                                                {
#line 883 "query.m"
                                                                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__ProcStaticsPerRecTypeLimitStr_10, &query__ProcStaticsPerRecTypeLimit_23);
                                                                                                                }
#line 872 "query.m"
                                                                                                                if (query__succeeded)
#line 872 "query.m"
                                                                                                                  {
#line 1146 "query.m"
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "sum") == 0))
#line 1146 "query.m"
                                                                                                                      {
#line 1146 "query.m"
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 0;
#line 1146 "query.m"
                                                                                                                        query__succeeded = MR_TRUE;
#line 1146 "query.m"
                                                                                                                      }
#line 1146 "query.m"
                                                                                                                    else
#line 1146 "query.m"
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "nosum") == 0))
#line 1147 "query.m"
                                                                                                                      {
#line 1147 "query.m"
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 1;
#line 1147 "query.m"
                                                                                                                        query__succeeded = MR_TRUE;
#line 1147 "query.m"
                                                                                                                      }
#line 1146 "query.m"
                                                                                                                    else
#line 1146 "query.m"
                                                                                                                      query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                                    if (query__succeeded)
#line 872 "query.m"
                                                                                                                      {
#line 1178 "query.m"
                                                                                                                        query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "context") == 0);
#line 1181 "query.m"
                                                                                                                        if (query__succeeded)
#line 1180 "query.m"
                                                                                                                          {
#line 1180 "query.m"
                                                                                                                            query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1180 "query.m"
                                                                                                                            query__succeeded = MR_TRUE;
#line 1180 "query.m"
                                                                                                                          }
#line 1181 "query.m"
                                                                                                                        else
#line 1185 "query.m"
                                                                                                                          {
#line 1182 "query.m"
                                                                                                                            query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "name") == 0);
#line 1185 "query.m"
                                                                                                                            if (query__succeeded)
#line 1184 "query.m"
                                                                                                                              {
#line 1184 "query.m"
                                                                                                                                query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1184 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1184 "query.m"
                                                                                                                              }
#line 1185 "query.m"
                                                                                                                            else
#line 1193 "query.m"
                                                                                                                              {
#line 1193 "query.m"
                                                                                                                                MR_Word query__Pieces_70;
#line 1193 "query.m"
                                                                                                                                MR_String query__CostKindStr_71;
#line 1193 "query.m"
                                                                                                                                MR_String query__InclDescStr_72;
#line 1193 "query.m"
                                                                                                                                MR_String query__ScopeStr_73;
#line 1193 "query.m"
                                                                                                                                MR_Word query__CostKind_74;
#line 1193 "query.m"
                                                                                                                                MR_Word query__InclDesc_75;
#line 1193 "query.m"
                                                                                                                                MR_Word query__Scope_76;
#line 1193 "query.m"
                                                                                                                                MR_String query__V_78_78;
#line 1193 "query.m"
                                                                                                                                MR_Word query__V_79_79;
#line 1193 "query.m"
                                                                                                                                MR_Word query__V_80_80;
#line 1193 "query.m"
                                                                                                                                MR_Word query__V_81_81;
#line 1193 "query.m"
                                                                                                                                MR_Word query__V_82_82;
#line 1086 "query.m"
                                                                                                                                MR_Integer query__lo_8;
#line 1086 "query.m"
                                                                                                                                MR_Integer query__hi_9;
#line 1086 "query.m"
                                                                                                                                MR_Integer query__mid_10;
#line 1086 "query.m"
                                                                                                                                MR_Integer query__result_11;

#line 1186 "query.m"
                                                                                                                                {
#line 1186 "query.m"
                                                                                                                                  util__split_3_p_0(query__OrderStr_12, (MR_Char) 45, &query__Pieces_70);
                                                                                                                                }
#line 1187 "query.m"
                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_70)) == (MR_mktag((MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                if (query__succeeded)
#line 1187 "query.m"
                                                                                                                                  {
#line 1187 "query.m"
                                                                                                                                    query__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 0)));
#line 1187 "query.m"
                                                                                                                                    query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                    query__succeeded = (strcmp(query__V_78_78, (MR_String) "cost") == 0);
#line 1193 "query.m"
                                                                                                                                    if (query__succeeded)
#line 1193 "query.m"
                                                                                                                                      {
#line 1187 "query.m"
                                                                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                        if (query__succeeded)
#line 1187 "query.m"
                                                                                                                                          {
#line 1187 "query.m"
                                                                                                                                            query__CostKindStr_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
#line 1187 "query.m"
                                                                                                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                            if (query__succeeded)
#line 1187 "query.m"
                                                                                                                                              {
#line 1187 "query.m"
                                                                                                                                                query__InclDescStr_72 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
#line 1187 "query.m"
                                                                                                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                                if (query__succeeded)
#line 1187 "query.m"
                                                                                                                                                  {
#line 1187 "query.m"
                                                                                                                                                    query__ScopeStr_73 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
#line 1187 "query.m"
                                                                                                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
#line 1187 "query.m"
                                                                                                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1193 "query.m"
                                                                                                                                                    if (query__succeeded)
#line 1193 "query.m"
                                                                                                                                                      {
#line 1086 "query.m"
                                                                                                                                                        /* binary string simple lookup switch */
#line 1086 "query.m"
                                                                                                                                                        query__lo_8 = (MR_Integer) 0;
#line 1086 "query.m"
                                                                                                                                                        query__hi_9 = (MR_Integer) 5;
#line 1086 "query.m"
                                                                                                                                                        do
#line 1086 "query.m"
                                                                                                                                                          {
#line 1086 "query.m"
                                                                                                                                                            query__mid_10 = (((query__lo_8 + query__hi_9)) / (MR_Integer) 2);
#line 1086 "query.m"
                                                                                                                                                            query__result_11 = MR_strcmp(query__CostKindStr_71, ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_0);
#line 1086 "query.m"
                                                                                                                                                            if ((query__result_11 == (MR_Integer) 0))
#line 1086 "query.m"
                                                                                                                                                              {
#line 1086 "query.m"
                                                                                                                                                                query__CostKind_74 = ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_1;
#line 1086 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1086 "query.m"
                                                                                                                                                                /* jump out of search loop */
#line 1086 "query.m"
                                                                                                                                                                goto label_2;
#line 1086 "query.m"
                                                                                                                                                              }
#line 1086 "query.m"
                                                                                                                                                            else
#line 1086 "query.m"
                                                                                                                                                            if ((query__result_11 < (MR_Integer) 0))
#line 1086 "query.m"
                                                                                                                                                              query__hi_9 = (query__mid_10 - (MR_Integer) 1);
#line 1086 "query.m"
                                                                                                                                                            else
#line 1086 "query.m"
                                                                                                                                                              query__lo_8 = (query__mid_10 + (MR_Integer) 1);
#line 1086 "query.m"
                                                                                                                                                          }
#line 1086 "query.m"
                                                                                                                                                        while ((query__lo_8 <= query__hi_9));
#line 1086 "query.m"
                                                                                                                                                        query__succeeded = MR_FALSE;
#line 1086 "query.m"
                                                                                                                                                      label_2:;
#line 1193 "query.m"
                                                                                                                                                        if (query__succeeded)
#line 1193 "query.m"
                                                                                                                                                          {
#line 1102 "query.m"
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "both") == 0))
#line 1103 "query.m"
                                                                                                                                                              {
#line 1103 "query.m"
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 1;
#line 1103 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1103 "query.m"
                                                                                                                                                              }
#line 1102 "query.m"
                                                                                                                                                            else
#line 1102 "query.m"
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "self") == 0))
#line 1102 "query.m"
                                                                                                                                                              {
#line 1102 "query.m"
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 0;
#line 1102 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1102 "query.m"
                                                                                                                                                              }
#line 1102 "query.m"
                                                                                                                                                            else
#line 1102 "query.m"
                                                                                                                                                              query__succeeded = MR_FALSE;
#line 1193 "query.m"
                                                                                                                                                            if (query__succeeded)
#line 1193 "query.m"
                                                                                                                                                              {
#line 1206 "query.m"
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "oa") == 0))
#line 1207 "query.m"
                                                                                                                                                                  {
#line 1207 "query.m"
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 1;
#line 1207 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1207 "query.m"
                                                                                                                                                                  }
#line 1206 "query.m"
                                                                                                                                                                else
#line 1206 "query.m"
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "pc") == 0))
#line 1206 "query.m"
                                                                                                                                                                  {
#line 1206 "query.m"
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 0;
#line 1206 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1206 "query.m"
                                                                                                                                                                  }
#line 1206 "query.m"
                                                                                                                                                                else
#line 1206 "query.m"
                                                                                                                                                                  query__succeeded = MR_FALSE;
#line 1193 "query.m"
                                                                                                                                                                if (query__succeeded)
#line 1193 "query.m"
                                                                                                                                                                  {
#line 1192 "query.m"
                                                                                                                                                                    {
#line 1192 "query.m"
                                                                                                                                                                      query__Order_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "query.m"
                                                                                                                                                                      MR_hl_field(MR_mktag(1), query__Order_25, 0) = ((MR_Box) ((query__CostKind_74 | ((((query__InclDesc_75 << (MR_Integer) 3)) | ((query__Scope_76 << (MR_Integer) 4)))))));
#line 1192 "query.m"
                                                                                                                                                                    }
#line 1192 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1193 "query.m"
                                                                                                                                                                  }
#line 1193 "query.m"
                                                                                                                                                              }
#line 1193 "query.m"
                                                                                                                                                          }
#line 1193 "query.m"
                                                                                                                                                      }
#line 1187 "query.m"
                                                                                                                                                  }
#line 1187 "query.m"
                                                                                                                                              }
#line 1187 "query.m"
                                                                                                                                          }
#line 1193 "query.m"
                                                                                                                                      }
#line 1187 "query.m"
                                                                                                                                  }
#line 1193 "query.m"
                                                                                                                              }
#line 1185 "query.m"
                                                                                                                          }
#line 872 "query.m"
                                                                                                                        if (query__succeeded)
#line 872 "query.m"
                                                                                                                          {
#line 1218 "query.m"
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "ac") == 0))
#line 1218 "query.m"
                                                                                                                              {
#line 1218 "query.m"
                                                                                                                                query__Contour_26 = (MR_Integer) 0;
#line 1218 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1218 "query.m"
                                                                                                                              }
#line 1218 "query.m"
                                                                                                                            else
#line 1218 "query.m"
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "nc") == 0))
#line 1219 "query.m"
                                                                                                                              {
#line 1219 "query.m"
                                                                                                                                query__Contour_26 = (MR_Integer) 1;
#line 1219 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1219 "query.m"
                                                                                                                              }
#line 1218 "query.m"
                                                                                                                            else
#line 1218 "query.m"
                                                                                                                              query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                                            if (query__succeeded)
#line 872 "query.m"
                                                                                                                              {
#line 1231 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "mi") == 0))
#line 1232 "query.m"
                                                                                                                                  {
#line 1232 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 1;
#line 1232 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1232 "query.m"
                                                                                                                                  }
#line 1231 "query.m"
                                                                                                                                else
#line 1231 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "no") == 0))
#line 1231 "query.m"
                                                                                                                                  {
#line 1231 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 0;
#line 1231 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1231 "query.m"
                                                                                                                                  }
#line 1231 "query.m"
                                                                                                                                else
#line 1231 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "th") == 0))
#line 1233 "query.m"
                                                                                                                                  {
#line 1233 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 2;
#line 1233 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1233 "query.m"
                                                                                                                                  }
#line 1231 "query.m"
                                                                                                                                else
#line 1231 "query.m"
                                                                                                                                  query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                                                if (query__succeeded)
#line 872 "query.m"
                                                                                                                                  {
#line 1157 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqa") == 0))
#line 1157 "query.m"
                                                                                                                                      {
#line 1157 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 0;
#line 1157 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1157 "query.m"
                                                                                                                                      }
#line 1157 "query.m"
                                                                                                                                    else
#line 1157 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqn") == 0))
#line 1159 "query.m"
                                                                                                                                      {
#line 1159 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 2;
#line 1159 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1159 "query.m"
                                                                                                                                      }
#line 1157 "query.m"
                                                                                                                                    else
#line 1157 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqwd") == 0))
#line 1158 "query.m"
                                                                                                                                      {
#line 1158 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 1;
#line 1158 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1158 "query.m"
                                                                                                                                      }
#line 1157 "query.m"
                                                                                                                                    else
#line 1157 "query.m"
                                                                                                                                      query__succeeded = MR_FALSE;
#line 872 "query.m"
                                                                                                                                    if (query__succeeded)
#line 872 "query.m"
                                                                                                                                      {
#line 890 "query.m"
                                                                                                                                        {
#line 890 "query.m"
                                                                                                                                          query__succeeded = query__string_to_inactive_items_2_p_0(query__InactiveItemsStr_16, &query__InactiveItems_29);
                                                                                                                                        }
#line 872 "query.m"
                                                                                                                                        if (query__succeeded)
#line 1270 "query.m"
                                                                                                                                          {
#line 1270 "query.m"
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "dev") == 0))
#line 1270 "query.m"
                                                                                                                                              {
#line 1270 "query.m"
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 0;
#line 1270 "query.m"
                                                                                                                                                query__succeeded = MR_TRUE;
#line 1270 "query.m"
                                                                                                                                              }
#line 1270 "query.m"
                                                                                                                                            else
#line 1270 "query.m"
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "nodev") == 0))
#line 1271 "query.m"
                                                                                                                                              {
#line 1271 "query.m"
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 1;
#line 1271 "query.m"
                                                                                                                                                query__succeeded = MR_TRUE;
#line 1271 "query.m"
                                                                                                                                              }
#line 1270 "query.m"
                                                                                                                                            else
#line 1270 "query.m"
                                                                                                                                              query__succeeded = MR_FALSE;
#line 1270 "query.m"
                                                                                                                                          }
#line 872 "query.m"
                                                                                                                                      }
#line 872 "query.m"
                                                                                                                                  }
#line 872 "query.m"
                                                                                                                              }
#line 872 "query.m"
                                                                                                                          }
#line 872 "query.m"
                                                                                                                      }
#line 872 "query.m"
                                                                                                                  }
#line 872 "query.m"
                                                                                                              }
#line 872 "query.m"
                                                                                                          }
#line 872 "query.m"
                                                                                                      }
#line 872 "query.m"
                                                                                                  }
#line 872 "query.m"
                                                                                              }
#line 872 "query.m"
                                                                                          }
#line 872 "query.m"
                                                                                      }
#line 872 "query.m"
                                                                                  }
#line 872 "query.m"
                                                                              }
#line 1051 "query.m"
                                                                          }
#line 1051 "query.m"
                                                                      }
#line 1051 "query.m"
                                                                  }
#line 1051 "query.m"
                                                              }
#line 1051 "query.m"
                                                          }
#line 872 "query.m"
                                                      }
#line 872 "query.m"
                                                  }
#line 872 "query.m"
                                              }
#line 872 "query.m"
                                          }
#line 871 "query.m"
                                      }
#line 871 "query.m"
                                  }
#line 871 "query.m"
                              }
#line 871 "query.m"
                          }
#line 870 "query.m"
                      }
#line 870 "query.m"
                  }
#line 869 "query.m"
              }
#line 869 "query.m"
          }
#line 869 "query.m"
      }
#line 897 "query.m"
    if (query__succeeded)
#line 895 "query.m"
      {
#line 895 "query.m"
        MR_Word query__Preferences_31;

#line 893 "query.m"
        {
#line 893 "query.m"
          query__Preferences_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 0) = ((MR_Box) (query__Fields_18));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 1) = ((MR_Box) ((query__Box_19 | ((query__Colour_20 << (MR_Integer) 1)))));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 2) = ((MR_Box) (query__MaybeAncestorLimit_22));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 3) = ((MR_Box) (query__ProcStaticsPerRecTypeLimit_23));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 4) = ((MR_Box) (query__SummarizeHoCallSites_24));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 5) = ((MR_Box) (query__Order_25));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 6) = ((MR_Box) ((query__Contour_26 | ((((query__Time_27 << (MR_Integer) 1)) | ((query__ModuleQual_28 << (MR_Integer) 3)))))));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 7) = ((MR_Box) (query__InactiveItems_29));
#line 893 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 8) = ((MR_Box) (query__DeveloperMode_30));
#line 893 "query.m"
        }
#line 896 "query.m"
        {
#line 896 "query.m"
          query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybePreferences_4, 0) = ((MR_Box) (query__Preferences_31));
#line 896 "query.m"
        }
#line 895 "query.m"
      }
#line 897 "query.m"
    else
#line 898 "query.m"
      query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "query.m"
    return query__MaybePreferences_4;
#line 866 "query.m"
  }
#line 66 "query.m"
}

#line 64 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_cmd_1_f_0(
#line 64 "query.m"
  MR_String query__QueryString_3)
#line 64 "query.m"
{
#line 704 "query.m"
  {
#line 704 "query.m"
    MR_bool query__succeeded;
#line 704 "query.m"
    MR_Word query__MaybeCmd_4;
#line 704 "query.m"
    MR_Word query__Pieces_5;
#line 704 "query.m"
    MR_Char query__V_44_44;
#line 718 "query.m"
    MR_Word query__MaybePercent_7;
#line 707 "query.m"
    MR_String query__MaybePercentStr_6;
#line 707 "query.m"
    MR_String query__V_45_45;
#line 707 "query.m"
    MR_Word query__V_46_46;
#line 707 "query.m"
    MR_Word query__V_47_47;
#line 707 "query.m"
    MR_String query__V_272_272;

#line 705 "query.m"
    {
#line 705 "query.m"
      query__V_44_44 = query__pref_separator_char_0_f_0();
    }
#line 705 "query.m"
    {
#line 705 "query.m"
      util__split_3_p_0(query__QueryString_3, query__V_44_44, &query__Pieces_5);
    }
#line 707 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 707 "query.m"
    if (query__succeeded)
#line 707 "query.m"
      {
#line 707 "query.m"
        query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 707 "query.m"
        query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 707 "query.m"
        {
#line 707 "query.m"
          query__V_272_272 = query__cmd_str_root_0_f_0();
        }
#line 707 "query.m"
        query__succeeded = (strcmp(query__V_45_45, query__V_272_272) == 0);
#line 707 "query.m"
        if (query__succeeded)
#line 707 "query.m"
          {
#line 707 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 707 "query.m"
            if (query__succeeded)
#line 707 "query.m"
              {
#line 707 "query.m"
                query__MaybePercentStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 0)));
#line 707 "query.m"
                query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 1)));
#line 707 "query.m"
                query__succeeded = (query__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "query.m"
                if (query__succeeded)
#line 707 "query.m"
                  {
#line 708 "query.m"
                    query__succeeded = (strcmp(query__MaybePercentStr_6, (MR_String) "no") == 0);
#line 710 "query.m"
                    if (query__succeeded)
#line 709 "query.m"
                      {
#line 709 "query.m"
                        query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "query.m"
                        query__succeeded = MR_TRUE;
#line 709 "query.m"
                      }
#line 710 "query.m"
                    else
#line 712 "query.m"
                      {
#line 712 "query.m"
                        MR_Integer query__Percent_8;

#line 710 "query.m"
                        {
#line 710 "query.m"
                          query__succeeded = mercury__string__to_int_2_p_0(query__MaybePercentStr_6, &query__Percent_8);
                        }
#line 712 "query.m"
                        if (query__succeeded)
#line 712 "query.m"
                          {
#line 711 "query.m"
                            {
#line 711 "query.m"
                              query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybePercent_7, 0) = ((MR_Box) (query__Percent_8));
#line 711 "query.m"
                            }
#line 711 "query.m"
                            query__succeeded = MR_TRUE;
#line 712 "query.m"
                          }
#line 712 "query.m"
                      }
#line 707 "query.m"
                  }
#line 707 "query.m"
              }
#line 707 "query.m"
          }
#line 707 "query.m"
      }
#line 718 "query.m"
    if (query__succeeded)
#line 716 "query.m"
      {
#line 716 "query.m"
        MR_Word query__Cmd_9;

#line 716 "query.m"
        {
#line 716 "query.m"
          query__Cmd_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 716 "query.m"
          MR_hl_field(MR_mktag(2), query__Cmd_9, 0) = ((MR_Box) (query__MaybePercent_7));
#line 716 "query.m"
        }
#line 717 "query.m"
        {
#line 717 "query.m"
          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_9));
#line 717 "query.m"
        }
#line 716 "query.m"
      }
#line 718 "query.m"
    else
#line 725 "query.m"
      {
#line 725 "query.m"
        MR_Integer query__CliqueNum_11;
#line 719 "query.m"
        MR_String query__CliqueNumStr_10;
#line 719 "query.m"
        MR_String query__V_48_48;
#line 719 "query.m"
        MR_Word query__V_49_49;
#line 719 "query.m"
        MR_Word query__V_50_50;
#line 719 "query.m"
        MR_String query__V_273_273;

#line 719 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 719 "query.m"
        if (query__succeeded)
#line 719 "query.m"
          {
#line 719 "query.m"
            query__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 719 "query.m"
            query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 719 "query.m"
            {
#line 719 "query.m"
              query__V_273_273 = query__cmd_str_clique_0_f_0();
            }
#line 719 "query.m"
            query__succeeded = (strcmp(query__V_48_48, query__V_273_273) == 0);
#line 719 "query.m"
            if (query__succeeded)
#line 719 "query.m"
              {
#line 719 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 719 "query.m"
                if (query__succeeded)
#line 719 "query.m"
                  {
#line 719 "query.m"
                    query__CliqueNumStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 0)));
#line 719 "query.m"
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 1)));
#line 719 "query.m"
                    query__succeeded = (query__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "query.m"
                    if (query__succeeded)
#line 720 "query.m"
                      {
#line 720 "query.m"
                        query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_10, &query__CliqueNum_11);
                      }
#line 719 "query.m"
                  }
#line 719 "query.m"
              }
#line 719 "query.m"
          }
#line 725 "query.m"
        if (query__succeeded)
#line 722 "query.m"
          {
#line 722 "query.m"
            MR_Word query__CliquePtr_12 = (MR_Word) query__CliqueNum_11;
#line 722 "query.m"
            MR_Word query__Cmd_118;

#line 723 "query.m"
            {
#line 723 "query.m"
              query__Cmd_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 723 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 1) = ((MR_Box) (query__CliquePtr_12));
#line 723 "query.m"
            }
#line 724 "query.m"
            {
#line 724 "query.m"
              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 724 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_118));
#line 724 "query.m"
            }
#line 722 "query.m"
          }
#line 725 "query.m"
        else
#line 732 "query.m"
          {
#line 732 "query.m"
            MR_Integer query__CliqueNum_269;
#line 726 "query.m"
            MR_String query__V_51_51;
#line 726 "query.m"
            MR_Word query__V_52_52;
#line 726 "query.m"
            MR_Word query__V_53_53;
#line 726 "query.m"
            MR_String query__CliqueNumStr_119;
#line 726 "query.m"
            MR_String query__V_274_274;

#line 726 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 726 "query.m"
            if (query__succeeded)
#line 726 "query.m"
              {
#line 726 "query.m"
                query__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 726 "query.m"
                query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 726 "query.m"
                {
#line 726 "query.m"
                  query__V_274_274 = query__cmd_str_clique_recursive_costs_0_f_0();
                }
#line 726 "query.m"
                query__succeeded = (strcmp(query__V_51_51, query__V_274_274) == 0);
#line 726 "query.m"
                if (query__succeeded)
#line 726 "query.m"
                  {
#line 726 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 726 "query.m"
                    if (query__succeeded)
#line 726 "query.m"
                      {
#line 726 "query.m"
                        query__CliqueNumStr_119 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 0)));
#line 726 "query.m"
                        query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 1)));
#line 726 "query.m"
                        query__succeeded = (query__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "query.m"
                        if (query__succeeded)
#line 727 "query.m"
                          {
#line 727 "query.m"
                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_119, &query__CliqueNum_269);
                          }
#line 726 "query.m"
                      }
#line 726 "query.m"
                  }
#line 726 "query.m"
              }
#line 732 "query.m"
            if (query__succeeded)
#line 729 "query.m"
              {
#line 729 "query.m"
                MR_Word query__Cmd_120;
#line 729 "query.m"
                MR_Word query__CliquePtr_121 = (MR_Word) query__CliqueNum_269;

#line 730 "query.m"
                {
#line 730 "query.m"
                  query__Cmd_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 730 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 1) = ((MR_Box) (query__CliquePtr_121));
#line 730 "query.m"
                }
#line 731 "query.m"
                {
#line 731 "query.m"
                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 731 "query.m"
                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_120));
#line 731 "query.m"
                }
#line 729 "query.m"
              }
#line 732 "query.m"
            else
#line 737 "query.m"
              {
#line 733 "query.m"
                MR_String query__V_54_54;
#line 733 "query.m"
                MR_Word query__V_55_55;
#line 733 "query.m"
                MR_String query__V_275_275;

#line 733 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 733 "query.m"
                if (query__succeeded)
#line 733 "query.m"
                  {
#line 733 "query.m"
                    query__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 733 "query.m"
                    query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 733 "query.m"
                    {
#line 733 "query.m"
                      query__V_275_275 = query__cmd_str_recursion_types_frequency_0_f_0();
                    }
#line 733 "query.m"
                    query__succeeded = (strcmp(query__V_54_54, query__V_275_275) == 0);
#line 733 "query.m"
                    if (query__succeeded)
#line 733 "query.m"
                      query__succeeded = (query__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 733 "query.m"
                  }
#line 737 "query.m"
                if (query__succeeded)
#line 735 "query.m"
                  {
#line 736 "query.m"
                    query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[2]);
#line 735 "query.m"
                  }
#line 737 "query.m"
                else
#line 744 "query.m"
                  {
#line 744 "query.m"
                    MR_Integer query__PSI_14;
#line 738 "query.m"
                    MR_String query__PSIStr_13;
#line 738 "query.m"
                    MR_String query__V_56_56;
#line 738 "query.m"
                    MR_Word query__V_57_57;
#line 738 "query.m"
                    MR_Word query__V_58_58;
#line 738 "query.m"
                    MR_String query__V_276_276;

#line 738 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 738 "query.m"
                    if (query__succeeded)
#line 738 "query.m"
                      {
#line 738 "query.m"
                        query__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 738 "query.m"
                        query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 738 "query.m"
                        {
#line 738 "query.m"
                          query__V_276_276 = query__cmd_str_proc_0_f_0();
                        }
#line 738 "query.m"
                        query__succeeded = (strcmp(query__V_56_56, query__V_276_276) == 0);
#line 738 "query.m"
                        if (query__succeeded)
#line 738 "query.m"
                          {
#line 738 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 738 "query.m"
                            if (query__succeeded)
#line 738 "query.m"
                              {
#line 738 "query.m"
                                query__PSIStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 0)));
#line 738 "query.m"
                                query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 1)));
#line 738 "query.m"
                                query__succeeded = (query__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 738 "query.m"
                                if (query__succeeded)
#line 739 "query.m"
                                  {
#line 739 "query.m"
                                    query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_13, &query__PSI_14);
                                  }
#line 738 "query.m"
                              }
#line 738 "query.m"
                          }
#line 738 "query.m"
                      }
#line 744 "query.m"
                    if (query__succeeded)
#line 741 "query.m"
                      {
#line 741 "query.m"
                        MR_Word query__PSPtr_15 = (MR_Word) query__PSI_14;
#line 741 "query.m"
                        MR_Word query__Cmd_123;

#line 742 "query.m"
                        {
#line 742 "query.m"
                          query__Cmd_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 742 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 1) = ((MR_Box) (query__PSPtr_15));
#line 742 "query.m"
                        }
#line 743 "query.m"
                        {
#line 743 "query.m"
                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "query.m"
                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_123));
#line 743 "query.m"
                        }
#line 741 "query.m"
                      }
#line 744 "query.m"
                    else
#line 757 "query.m"
                      {
#line 757 "query.m"
                        MR_Word query__GroupCallers_20;
#line 757 "query.m"
                        MR_Integer query__BunchNum_21;
#line 757 "query.m"
                        MR_Integer query__CallersPerBunch_22;
#line 757 "query.m"
                        MR_Word query__Contour_23;
#line 757 "query.m"
                        MR_Integer query__PSI_257;
#line 746 "query.m"
                        MR_String query__GroupCallersStr_16;
#line 746 "query.m"
                        MR_String query__BunchNumStr_17;
#line 746 "query.m"
                        MR_String query__CallersPerBunchStr_18;
#line 746 "query.m"
                        MR_String query__ContourStr_19;
#line 746 "query.m"
                        MR_String query__V_59_59;
#line 746 "query.m"
                        MR_Word query__V_60_60;
#line 746 "query.m"
                        MR_Word query__V_61_61;
#line 746 "query.m"
                        MR_Word query__V_62_62;
#line 746 "query.m"
                        MR_Word query__V_63_63;
#line 746 "query.m"
                        MR_Word query__V_64_64;
#line 746 "query.m"
                        MR_Word query__V_65_65;
#line 746 "query.m"
                        MR_String query__PSIStr_124;
#line 746 "query.m"
                        MR_String query__V_277_277;

#line 745 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 745 "query.m"
                        if (query__succeeded)
#line 745 "query.m"
                          {
#line 745 "query.m"
                            query__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 745 "query.m"
                            query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 745 "query.m"
                            {
#line 745 "query.m"
                              query__V_277_277 = query__cmd_str_proc_callers_0_f_0();
                            }
#line 745 "query.m"
                            query__succeeded = (strcmp(query__V_59_59, query__V_277_277) == 0);
#line 746 "query.m"
                            if (query__succeeded)
#line 746 "query.m"
                              {
#line 745 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 745 "query.m"
                                if (query__succeeded)
#line 745 "query.m"
                                  {
#line 745 "query.m"
                                    query__PSIStr_124 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
#line 745 "query.m"
                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
#line 745 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 745 "query.m"
                                    if (query__succeeded)
#line 745 "query.m"
                                      {
#line 745 "query.m"
                                        query__GroupCallersStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
#line 745 "query.m"
                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
#line 745 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 745 "query.m"
                                        if (query__succeeded)
#line 745 "query.m"
                                          {
#line 745 "query.m"
                                            query__BunchNumStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
#line 745 "query.m"
                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
#line 746 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                                            if (query__succeeded)
#line 746 "query.m"
                                              {
#line 746 "query.m"
                                                query__CallersPerBunchStr_18 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 0)));
#line 746 "query.m"
                                                query__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 1)));
#line 746 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                                                if (query__succeeded)
#line 746 "query.m"
                                                  {
#line 746 "query.m"
                                                    query__ContourStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 0)));
#line 746 "query.m"
                                                    query__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 1)));
#line 746 "query.m"
                                                    query__succeeded = (query__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "query.m"
                                                    if (query__succeeded)
#line 746 "query.m"
                                                      {
#line 747 "query.m"
                                                        {
#line 747 "query.m"
                                                          query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_124, &query__PSI_257);
                                                        }
#line 746 "query.m"
                                                        if (query__succeeded)
#line 746 "query.m"
                                                          {
#line 748 "query.m"
                                                            {
#line 748 "query.m"
                                                              query__succeeded = query__string_to_caller_groups_2_p_0(query__GroupCallersStr_16, &query__GroupCallers_20);
                                                            }
#line 746 "query.m"
                                                            if (query__succeeded)
#line 746 "query.m"
                                                              {
#line 749 "query.m"
                                                                {
#line 749 "query.m"
                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__BunchNumStr_17, &query__BunchNum_21);
                                                                }
#line 746 "query.m"
                                                                if (query__succeeded)
#line 746 "query.m"
                                                                  {
#line 750 "query.m"
                                                                    {
#line 750 "query.m"
                                                                      query__succeeded = mercury__string__to_int_2_p_0(query__CallersPerBunchStr_18, &query__CallersPerBunch_22);
                                                                    }
#line 746 "query.m"
                                                                    if (query__succeeded)
#line 751 "query.m"
                                                                      {
#line 751 "query.m"
                                                                        query__succeeded = query__string_to_contour_exclusion_2_p_0(query__ContourStr_19, &query__Contour_23);
                                                                      }
#line 746 "query.m"
                                                                  }
#line 746 "query.m"
                                                              }
#line 746 "query.m"
                                                          }
#line 746 "query.m"
                                                      }
#line 746 "query.m"
                                                  }
#line 746 "query.m"
                                              }
#line 745 "query.m"
                                          }
#line 745 "query.m"
                                      }
#line 745 "query.m"
                                  }
#line 746 "query.m"
                              }
#line 745 "query.m"
                          }
#line 757 "query.m"
                        if (query__succeeded)
#line 753 "query.m"
                          {
#line 753 "query.m"
                            MR_Word query__Cmd_125;
#line 753 "query.m"
                            MR_Word query__PSPtr_126 = (MR_Word) query__PSI_257;

#line 754 "query.m"
                            {
#line 754 "query.m"
                              query__Cmd_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 1) = ((MR_Box) (query__PSPtr_126));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 2) = ((MR_Box) (query__GroupCallers_20));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 3) = ((MR_Box) (query__BunchNum_21));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 4) = ((MR_Box) (query__CallersPerBunch_22));
#line 754 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 5) = ((MR_Box) (query__Contour_23));
#line 754 "query.m"
                            }
#line 756 "query.m"
                            {
#line 756 "query.m"
                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_125));
#line 756 "query.m"
                            }
#line 753 "query.m"
                          }
#line 757 "query.m"
                        else
#line 762 "query.m"
                          {
#line 758 "query.m"
                            MR_String query__V_66_66;
#line 758 "query.m"
                            MR_Word query__V_67_67;
#line 758 "query.m"
                            MR_String query__V_278_278;

#line 758 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 758 "query.m"
                            if (query__succeeded)
#line 758 "query.m"
                              {
#line 758 "query.m"
                                query__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 758 "query.m"
                                query__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 758 "query.m"
                                {
#line 758 "query.m"
                                  query__V_278_278 = query__cmd_str_program_modules_0_f_0();
                                }
#line 758 "query.m"
                                query__succeeded = (strcmp(query__V_66_66, query__V_278_278) == 0);
#line 758 "query.m"
                                if (query__succeeded)
#line 758 "query.m"
                                  query__succeeded = (query__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 758 "query.m"
                              }
#line 762 "query.m"
                            if (query__succeeded)
#line 760 "query.m"
                              {
#line 761 "query.m"
                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[3]);
#line 760 "query.m"
                              }
#line 762 "query.m"
                            else
#line 767 "query.m"
                              {
#line 767 "query.m"
                                MR_String query__ModuleName_24;
#line 763 "query.m"
                                MR_String query__V_68_68;
#line 763 "query.m"
                                MR_Word query__V_69_69;
#line 763 "query.m"
                                MR_Word query__V_70_70;
#line 763 "query.m"
                                MR_String query__V_279_279;

#line 763 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 763 "query.m"
                                if (query__succeeded)
#line 763 "query.m"
                                  {
#line 763 "query.m"
                                    query__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 763 "query.m"
                                    query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 763 "query.m"
                                    {
#line 763 "query.m"
                                      query__V_279_279 = query__cmd_str_module_0_f_0();
                                    }
#line 763 "query.m"
                                    query__succeeded = (strcmp(query__V_68_68, query__V_279_279) == 0);
#line 763 "query.m"
                                    if (query__succeeded)
#line 763 "query.m"
                                      {
#line 763 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 763 "query.m"
                                        if (query__succeeded)
#line 763 "query.m"
                                          {
#line 763 "query.m"
                                            query__ModuleName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 0)));
#line 763 "query.m"
                                            query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 1)));
#line 763 "query.m"
                                            query__succeeded = (query__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "query.m"
                                          }
#line 763 "query.m"
                                      }
#line 763 "query.m"
                                  }
#line 767 "query.m"
                                if (query__succeeded)
#line 765 "query.m"
                                  {
#line 765 "query.m"
                                    MR_Word query__Cmd_128;

#line 765 "query.m"
                                    {
#line 765 "query.m"
                                      query__Cmd_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 765 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 1) = ((MR_Box) (query__ModuleName_24));
#line 765 "query.m"
                                    }
#line 766 "query.m"
                                    {
#line 766 "query.m"
                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "query.m"
                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_128));
#line 766 "query.m"
                                    }
#line 765 "query.m"
                                  }
#line 767 "query.m"
                                else
#line 772 "query.m"
                                  {
#line 772 "query.m"
                                    MR_String query__ModuleName_237;
#line 768 "query.m"
                                    MR_String query__V_71_71;
#line 768 "query.m"
                                    MR_Word query__V_72_72;
#line 768 "query.m"
                                    MR_Word query__V_73_73;
#line 768 "query.m"
                                    MR_String query__V_280_280;

#line 768 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 768 "query.m"
                                    if (query__succeeded)
#line 768 "query.m"
                                      {
#line 768 "query.m"
                                        query__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 768 "query.m"
                                        query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 768 "query.m"
                                        {
#line 768 "query.m"
                                          query__V_280_280 = query__cmd_str_module_getter_setters_0_f_0();
                                        }
#line 768 "query.m"
                                        query__succeeded = (strcmp(query__V_71_71, query__V_280_280) == 0);
#line 768 "query.m"
                                        if (query__succeeded)
#line 768 "query.m"
                                          {
#line 768 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 768 "query.m"
                                            if (query__succeeded)
#line 768 "query.m"
                                              {
#line 768 "query.m"
                                                query__ModuleName_237 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 0)));
#line 768 "query.m"
                                                query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 1)));
#line 768 "query.m"
                                                query__succeeded = (query__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 768 "query.m"
                                              }
#line 768 "query.m"
                                          }
#line 768 "query.m"
                                      }
#line 772 "query.m"
                                    if (query__succeeded)
#line 770 "query.m"
                                      {
#line 770 "query.m"
                                        MR_Word query__Cmd_129;

#line 770 "query.m"
                                        {
#line 770 "query.m"
                                          query__Cmd_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 770 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 1) = ((MR_Box) (query__ModuleName_237));
#line 770 "query.m"
                                        }
#line 771 "query.m"
                                        {
#line 771 "query.m"
                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 771 "query.m"
                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_129));
#line 771 "query.m"
                                        }
#line 770 "query.m"
                                      }
#line 772 "query.m"
                                    else
#line 777 "query.m"
                                      {
#line 777 "query.m"
                                        MR_String query__ModuleName_229;
#line 773 "query.m"
                                        MR_String query__V_74_74;
#line 773 "query.m"
                                        MR_Word query__V_75_75;
#line 773 "query.m"
                                        MR_Word query__V_76_76;
#line 773 "query.m"
                                        MR_String query__V_281_281;

#line 773 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 773 "query.m"
                                        if (query__succeeded)
#line 773 "query.m"
                                          {
#line 773 "query.m"
                                            query__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 773 "query.m"
                                            query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 773 "query.m"
                                            {
#line 773 "query.m"
                                              query__V_281_281 = query__cmd_str_module_rep_0_f_0();
                                            }
#line 773 "query.m"
                                            query__succeeded = (strcmp(query__V_74_74, query__V_281_281) == 0);
#line 773 "query.m"
                                            if (query__succeeded)
#line 773 "query.m"
                                              {
#line 773 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 773 "query.m"
                                                if (query__succeeded)
#line 773 "query.m"
                                                  {
#line 773 "query.m"
                                                    query__ModuleName_229 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 0)));
#line 773 "query.m"
                                                    query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 1)));
#line 773 "query.m"
                                                    query__succeeded = (query__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "query.m"
                                                  }
#line 773 "query.m"
                                              }
#line 773 "query.m"
                                          }
#line 777 "query.m"
                                        if (query__succeeded)
#line 775 "query.m"
                                          {
#line 775 "query.m"
                                            MR_Word query__Cmd_130;

#line 775 "query.m"
                                            {
#line 775 "query.m"
                                              query__Cmd_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 775 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 1) = ((MR_Box) (query__ModuleName_229));
#line 775 "query.m"
                                            }
#line 776 "query.m"
                                            {
#line 776 "query.m"
                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 776 "query.m"
                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_130));
#line 776 "query.m"
                                            }
#line 775 "query.m"
                                          }
#line 777 "query.m"
                                        else
#line 787 "query.m"
                                          {
#line 787 "query.m"
                                            MR_Word query__Limit_29;
#line 787 "query.m"
                                            MR_Word query__CostKind_30;
#line 787 "query.m"
                                            MR_Word query__InclDesc_31;
#line 787 "query.m"
                                            MR_Word query__Scope_32;
#line 779 "query.m"
                                            MR_String query__LimitStr_25;
#line 779 "query.m"
                                            MR_String query__CostKindStr_26;
#line 779 "query.m"
                                            MR_String query__InclDescStr_27;
#line 779 "query.m"
                                            MR_String query__ScopeStr_28;
#line 779 "query.m"
                                            MR_String query__V_77_77;
#line 779 "query.m"
                                            MR_Word query__V_78_78;
#line 779 "query.m"
                                            MR_Word query__V_79_79;
#line 779 "query.m"
                                            MR_Word query__V_80_80;
#line 779 "query.m"
                                            MR_Word query__V_81_81;
#line 779 "query.m"
                                            MR_Word query__V_82_82;
#line 779 "query.m"
                                            MR_String query__V_282_282;

#line 778 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 778 "query.m"
                                            if (query__succeeded)
#line 778 "query.m"
                                              {
#line 778 "query.m"
                                                query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 778 "query.m"
                                                query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 778 "query.m"
                                                {
#line 778 "query.m"
                                                  query__V_282_282 = query__cmd_str_top_procs_0_f_0();
                                                }
#line 778 "query.m"
                                                query__succeeded = (strcmp(query__V_77_77, query__V_282_282) == 0);
#line 779 "query.m"
                                                if (query__succeeded)
#line 779 "query.m"
                                                  {
#line 778 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 778 "query.m"
                                                    if (query__succeeded)
#line 778 "query.m"
                                                      {
#line 778 "query.m"
                                                        query__LimitStr_25 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 0)));
#line 778 "query.m"
                                                        query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 1)));
#line 778 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 778 "query.m"
                                                        if (query__succeeded)
#line 778 "query.m"
                                                          {
#line 778 "query.m"
                                                            query__CostKindStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
#line 778 "query.m"
                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
#line 778 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 778 "query.m"
                                                            if (query__succeeded)
#line 778 "query.m"
                                                              {
#line 778 "query.m"
                                                                query__InclDescStr_27 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
#line 778 "query.m"
                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
#line 779 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 779 "query.m"
                                                                if (query__succeeded)
#line 779 "query.m"
                                                                  {
#line 779 "query.m"
                                                                    query__ScopeStr_28 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
#line 779 "query.m"
                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
#line 779 "query.m"
                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "query.m"
                                                                    if (query__succeeded)
#line 779 "query.m"
                                                                      {
#line 780 "query.m"
                                                                        {
#line 780 "query.m"
                                                                          query__succeeded = query__string_to_limit_2_p_0(query__LimitStr_25, &query__Limit_29);
                                                                        }
#line 779 "query.m"
                                                                        if (query__succeeded)
#line 779 "query.m"
                                                                          {
#line 781 "query.m"
                                                                            {
#line 781 "query.m"
                                                                              query__succeeded = query__string_to_cost_kind_2_p_0(query__CostKindStr_26, &query__CostKind_30);
                                                                            }
#line 779 "query.m"
                                                                            if (query__succeeded)
#line 779 "query.m"
                                                                              {
#line 782 "query.m"
                                                                                {
#line 782 "query.m"
                                                                                  query__succeeded = query__string_to_incl_desc_2_p_0(query__InclDescStr_27, &query__InclDesc_31);
                                                                                }
#line 779 "query.m"
                                                                                if (query__succeeded)
#line 783 "query.m"
                                                                                  {
#line 783 "query.m"
                                                                                    query__succeeded = query__string_to_scope_2_p_0(query__ScopeStr_28, &query__Scope_32);
                                                                                  }
#line 779 "query.m"
                                                                              }
#line 779 "query.m"
                                                                          }
#line 779 "query.m"
                                                                      }
#line 779 "query.m"
                                                                  }
#line 778 "query.m"
                                                              }
#line 778 "query.m"
                                                          }
#line 778 "query.m"
                                                      }
#line 779 "query.m"
                                                  }
#line 778 "query.m"
                                              }
#line 787 "query.m"
                                            if (query__succeeded)
#line 785 "query.m"
                                              {
#line 785 "query.m"
                                                MR_Word query__Cmd_131;

#line 785 "query.m"
                                                {
#line 785 "query.m"
                                                  query__Cmd_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 785 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 785 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 1) = ((MR_Box) (query__Limit_29));
#line 785 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 2) = ((MR_Box) ((query__CostKind_30 | ((((query__InclDesc_31 << (MR_Integer) 3)) | ((query__Scope_32 << (MR_Integer) 4)))))));
#line 785 "query.m"
                                                }
#line 786 "query.m"
                                                {
#line 786 "query.m"
                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "query.m"
                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_131));
#line 786 "query.m"
                                                }
#line 785 "query.m"
                                              }
#line 787 "query.m"
                                            else
#line 793 "query.m"
                                              {
#line 793 "query.m"
                                                MR_Integer query__PSI_213;
#line 788 "query.m"
                                                MR_String query__V_83_83;
#line 788 "query.m"
                                                MR_Word query__V_84_84;
#line 788 "query.m"
                                                MR_Word query__V_85_85;
#line 788 "query.m"
                                                MR_String query__PSIStr_132;
#line 788 "query.m"
                                                MR_String query__V_283_283;

#line 788 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 788 "query.m"
                                                if (query__succeeded)
#line 788 "query.m"
                                                  {
#line 788 "query.m"
                                                    query__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 788 "query.m"
                                                    query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 788 "query.m"
                                                    {
#line 788 "query.m"
                                                      query__V_283_283 = query__cmd_str_static_coverage_0_f_0();
                                                    }
#line 788 "query.m"
                                                    query__succeeded = (strcmp(query__V_83_83, query__V_283_283) == 0);
#line 788 "query.m"
                                                    if (query__succeeded)
#line 788 "query.m"
                                                      {
#line 788 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 788 "query.m"
                                                        if (query__succeeded)
#line 788 "query.m"
                                                          {
#line 788 "query.m"
                                                            query__PSIStr_132 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 0)));
#line 788 "query.m"
                                                            query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 1)));
#line 788 "query.m"
                                                            query__succeeded = (query__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 788 "query.m"
                                                            if (query__succeeded)
#line 789 "query.m"
                                                              {
#line 789 "query.m"
                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_132, &query__PSI_213);
                                                              }
#line 788 "query.m"
                                                          }
#line 788 "query.m"
                                                      }
#line 788 "query.m"
                                                  }
#line 793 "query.m"
                                                if (query__succeeded)
#line 791 "query.m"
                                                  {
#line 791 "query.m"
                                                    MR_Word query__V_86_86;
#line 791 "query.m"
                                                    MR_Word query__PSPtr_133 = (MR_Word) query__PSI_213;

#line 792 "query.m"
                                                    {
#line 792 "query.m"
                                                      query__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 792 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 1) = ((MR_Box) (query__PSPtr_133));
#line 792 "query.m"
                                                    }
#line 792 "query.m"
                                                    {
#line 792 "query.m"
                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 792 "query.m"
                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_86_86));
#line 792 "query.m"
                                                    }
#line 791 "query.m"
                                                  }
#line 793 "query.m"
                                                else
#line 799 "query.m"
                                                  {
#line 799 "query.m"
                                                    MR_Integer query__PDI_34;
#line 794 "query.m"
                                                    MR_String query__PDIStr_33;
#line 794 "query.m"
                                                    MR_String query__V_87_87;
#line 794 "query.m"
                                                    MR_Word query__V_88_88;
#line 794 "query.m"
                                                    MR_Word query__V_89_89;
#line 794 "query.m"
                                                    MR_String query__V_284_284;

#line 794 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 794 "query.m"
                                                    if (query__succeeded)
#line 794 "query.m"
                                                      {
#line 794 "query.m"
                                                        query__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 794 "query.m"
                                                        query__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 794 "query.m"
                                                        {
#line 794 "query.m"
                                                          query__V_284_284 = query__cmd_str_dynamic_coverage_0_f_0();
                                                        }
#line 794 "query.m"
                                                        query__succeeded = (strcmp(query__V_87_87, query__V_284_284) == 0);
#line 794 "query.m"
                                                        if (query__succeeded)
#line 794 "query.m"
                                                          {
#line 794 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 794 "query.m"
                                                            if (query__succeeded)
#line 794 "query.m"
                                                              {
#line 794 "query.m"
                                                                query__PDIStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 0)));
#line 794 "query.m"
                                                                query__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 1)));
#line 794 "query.m"
                                                                query__succeeded = (query__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 794 "query.m"
                                                                if (query__succeeded)
#line 795 "query.m"
                                                                  {
#line 795 "query.m"
                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_33, &query__PDI_34);
                                                                  }
#line 794 "query.m"
                                                              }
#line 794 "query.m"
                                                          }
#line 794 "query.m"
                                                      }
#line 799 "query.m"
                                                    if (query__succeeded)
#line 797 "query.m"
                                                      {
#line 797 "query.m"
                                                        MR_Word query__PDPtr_35 = (MR_Word) query__PDI_34;
#line 797 "query.m"
                                                        MR_Word query__V_90_90;

#line 798 "query.m"
                                                        {
#line 798 "query.m"
                                                          query__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 798 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 1) = ((MR_Box) (query__PDPtr_35));
#line 798 "query.m"
                                                        }
#line 798 "query.m"
                                                        {
#line 798 "query.m"
                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "query.m"
                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_90_90));
#line 798 "query.m"
                                                        }
#line 797 "query.m"
                                                      }
#line 799 "query.m"
                                                    else
#line 804 "query.m"
                                                      {
#line 800 "query.m"
                                                        MR_String query__V_91_91;
#line 800 "query.m"
                                                        MR_Word query__V_92_92;
#line 800 "query.m"
                                                        MR_String query__V_285_285;

#line 800 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 800 "query.m"
                                                        if (query__succeeded)
#line 800 "query.m"
                                                          {
#line 800 "query.m"
                                                            query__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 800 "query.m"
                                                            query__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 800 "query.m"
                                                            {
#line 800 "query.m"
                                                              query__V_285_285 = query__cmd_str_menu_0_f_0();
                                                            }
#line 800 "query.m"
                                                            query__succeeded = (strcmp(query__V_91_91, query__V_285_285) == 0);
#line 800 "query.m"
                                                            if (query__succeeded)
#line 800 "query.m"
                                                              query__succeeded = (query__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 800 "query.m"
                                                          }
#line 804 "query.m"
                                                        if (query__succeeded)
#line 802 "query.m"
                                                          {
#line 803 "query.m"
                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[4]);
#line 802 "query.m"
                                                          }
#line 804 "query.m"
                                                        else
#line 811 "query.m"
                                                          {
#line 811 "query.m"
                                                            MR_Integer query__PSI_186;
#line 805 "query.m"
                                                            MR_String query__V_93_93;
#line 805 "query.m"
                                                            MR_Word query__V_94_94;
#line 805 "query.m"
                                                            MR_Word query__V_95_95;
#line 805 "query.m"
                                                            MR_String query__PSIStr_135;
#line 805 "query.m"
                                                            MR_String query__V_286_286;

#line 805 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 805 "query.m"
                                                            if (query__succeeded)
#line 805 "query.m"
                                                              {
#line 805 "query.m"
                                                                query__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 805 "query.m"
                                                                query__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 805 "query.m"
                                                                {
#line 805 "query.m"
                                                                  query__V_286_286 = query__cmd_str_dump_proc_static_0_f_0();
                                                                }
#line 805 "query.m"
                                                                query__succeeded = (strcmp(query__V_93_93, query__V_286_286) == 0);
#line 805 "query.m"
                                                                if (query__succeeded)
#line 805 "query.m"
                                                                  {
#line 805 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 805 "query.m"
                                                                    if (query__succeeded)
#line 805 "query.m"
                                                                      {
#line 805 "query.m"
                                                                        query__PSIStr_135 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 0)));
#line 805 "query.m"
                                                                        query__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 1)));
#line 805 "query.m"
                                                                        query__succeeded = (query__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "query.m"
                                                                        if (query__succeeded)
#line 806 "query.m"
                                                                          {
#line 806 "query.m"
                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_135, &query__PSI_186);
                                                                          }
#line 805 "query.m"
                                                                      }
#line 805 "query.m"
                                                                  }
#line 805 "query.m"
                                                              }
#line 811 "query.m"
                                                            if (query__succeeded)
#line 808 "query.m"
                                                              {
#line 808 "query.m"
                                                                MR_Word query__Cmd_136;
#line 808 "query.m"
                                                                MR_Word query__PSPtr_137 = (MR_Word) query__PSI_186;

#line 809 "query.m"
                                                                {
#line 809 "query.m"
                                                                  query__Cmd_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 809 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 1) = ((MR_Box) (query__PSPtr_137));
#line 809 "query.m"
                                                                }
#line 810 "query.m"
                                                                {
#line 810 "query.m"
                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "query.m"
                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_136));
#line 810 "query.m"
                                                                }
#line 808 "query.m"
                                                              }
#line 811 "query.m"
                                                            else
#line 818 "query.m"
                                                              {
#line 818 "query.m"
                                                                MR_Integer query__PDI_179;
#line 812 "query.m"
                                                                MR_String query__V_96_96;
#line 812 "query.m"
                                                                MR_Word query__V_97_97;
#line 812 "query.m"
                                                                MR_Word query__V_98_98;
#line 812 "query.m"
                                                                MR_String query__PDIStr_138;
#line 812 "query.m"
                                                                MR_String query__V_287_287;

#line 812 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 812 "query.m"
                                                                if (query__succeeded)
#line 812 "query.m"
                                                                  {
#line 812 "query.m"
                                                                    query__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 812 "query.m"
                                                                    query__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 812 "query.m"
                                                                    {
#line 812 "query.m"
                                                                      query__V_287_287 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                                                    }
#line 812 "query.m"
                                                                    query__succeeded = (strcmp(query__V_96_96, query__V_287_287) == 0);
#line 812 "query.m"
                                                                    if (query__succeeded)
#line 812 "query.m"
                                                                      {
#line 812 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 812 "query.m"
                                                                        if (query__succeeded)
#line 812 "query.m"
                                                                          {
#line 812 "query.m"
                                                                            query__PDIStr_138 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 0)));
#line 812 "query.m"
                                                                            query__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 1)));
#line 812 "query.m"
                                                                            query__succeeded = (query__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 812 "query.m"
                                                                            if (query__succeeded)
#line 813 "query.m"
                                                                              {
#line 813 "query.m"
                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_138, &query__PDI_179);
                                                                              }
#line 812 "query.m"
                                                                          }
#line 812 "query.m"
                                                                      }
#line 812 "query.m"
                                                                  }
#line 818 "query.m"
                                                                if (query__succeeded)
#line 815 "query.m"
                                                                  {
#line 815 "query.m"
                                                                    MR_Word query__Cmd_139;
#line 815 "query.m"
                                                                    MR_Word query__PDPtr_140 = (MR_Word) query__PDI_179;

#line 816 "query.m"
                                                                    {
#line 816 "query.m"
                                                                      query__Cmd_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 816 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 1) = ((MR_Box) (query__PDPtr_140));
#line 816 "query.m"
                                                                    }
#line 817 "query.m"
                                                                    {
#line 817 "query.m"
                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 817 "query.m"
                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_139));
#line 817 "query.m"
                                                                    }
#line 815 "query.m"
                                                                  }
#line 818 "query.m"
                                                                else
#line 825 "query.m"
                                                                  {
#line 825 "query.m"
                                                                    MR_Integer query__CSSI_37;
#line 819 "query.m"
                                                                    MR_String query__CSSIStr_36;
#line 819 "query.m"
                                                                    MR_String query__V_99_99;
#line 819 "query.m"
                                                                    MR_Word query__V_100_100;
#line 819 "query.m"
                                                                    MR_Word query__V_101_101;
#line 819 "query.m"
                                                                    MR_String query__V_288_288;

#line 819 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 819 "query.m"
                                                                    if (query__succeeded)
#line 819 "query.m"
                                                                      {
#line 819 "query.m"
                                                                        query__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 819 "query.m"
                                                                        query__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 819 "query.m"
                                                                        {
#line 819 "query.m"
                                                                          query__V_288_288 = query__cmd_str_dump_call_site_static_0_f_0();
                                                                        }
#line 819 "query.m"
                                                                        query__succeeded = (strcmp(query__V_99_99, query__V_288_288) == 0);
#line 819 "query.m"
                                                                        if (query__succeeded)
#line 819 "query.m"
                                                                          {
#line 819 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 819 "query.m"
                                                                            if (query__succeeded)
#line 819 "query.m"
                                                                              {
#line 819 "query.m"
                                                                                query__CSSIStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 0)));
#line 819 "query.m"
                                                                                query__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 1)));
#line 819 "query.m"
                                                                                query__succeeded = (query__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "query.m"
                                                                                if (query__succeeded)
#line 820 "query.m"
                                                                                  {
#line 820 "query.m"
                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__CSSIStr_36, &query__CSSI_37);
                                                                                  }
#line 819 "query.m"
                                                                              }
#line 819 "query.m"
                                                                          }
#line 819 "query.m"
                                                                      }
#line 825 "query.m"
                                                                    if (query__succeeded)
#line 822 "query.m"
                                                                      {
#line 822 "query.m"
                                                                        MR_Word query__CSSPtr_38 = (MR_Word) query__CSSI_37;
#line 822 "query.m"
                                                                        MR_Word query__Cmd_141;

#line 823 "query.m"
                                                                        {
#line 823 "query.m"
                                                                          query__Cmd_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 823 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 1) = ((MR_Box) (query__CSSPtr_38));
#line 823 "query.m"
                                                                        }
#line 824 "query.m"
                                                                        {
#line 824 "query.m"
                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 824 "query.m"
                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_141));
#line 824 "query.m"
                                                                        }
#line 822 "query.m"
                                                                      }
#line 825 "query.m"
                                                                    else
#line 832 "query.m"
                                                                      {
#line 832 "query.m"
                                                                        MR_Integer query__CSDI_40;
#line 826 "query.m"
                                                                        MR_String query__CSDIStr_39;
#line 826 "query.m"
                                                                        MR_String query__V_102_102;
#line 826 "query.m"
                                                                        MR_Word query__V_103_103;
#line 826 "query.m"
                                                                        MR_Word query__V_104_104;
#line 826 "query.m"
                                                                        MR_String query__V_289_289;

#line 826 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 826 "query.m"
                                                                        if (query__succeeded)
#line 826 "query.m"
                                                                          {
#line 826 "query.m"
                                                                            query__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 826 "query.m"
                                                                            query__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 826 "query.m"
                                                                            {
#line 826 "query.m"
                                                                              query__V_289_289 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                                                                            }
#line 826 "query.m"
                                                                            query__succeeded = (strcmp(query__V_102_102, query__V_289_289) == 0);
#line 826 "query.m"
                                                                            if (query__succeeded)
#line 826 "query.m"
                                                                              {
#line 826 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_103_103)) == (MR_mktag((MR_Integer) 1)));
#line 826 "query.m"
                                                                                if (query__succeeded)
#line 826 "query.m"
                                                                                  {
#line 826 "query.m"
                                                                                    query__CSDIStr_39 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 0)));
#line 826 "query.m"
                                                                                    query__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 1)));
#line 826 "query.m"
                                                                                    query__succeeded = (query__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "query.m"
                                                                                    if (query__succeeded)
#line 827 "query.m"
                                                                                      {
#line 827 "query.m"
                                                                                        query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_39, &query__CSDI_40);
                                                                                      }
#line 826 "query.m"
                                                                                  }
#line 826 "query.m"
                                                                              }
#line 826 "query.m"
                                                                          }
#line 832 "query.m"
                                                                        if (query__succeeded)
#line 829 "query.m"
                                                                          {
#line 829 "query.m"
                                                                            MR_Word query__CSDPtr_41 = (MR_Word) query__CSDI_40;
#line 829 "query.m"
                                                                            MR_Word query__Cmd_142;

#line 830 "query.m"
                                                                            {
#line 830 "query.m"
                                                                              query__Cmd_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 830 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 1) = ((MR_Box) (query__CSDPtr_41));
#line 830 "query.m"
                                                                            }
#line 831 "query.m"
                                                                            {
#line 831 "query.m"
                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "query.m"
                                                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_142));
#line 831 "query.m"
                                                                            }
#line 829 "query.m"
                                                                          }
#line 832 "query.m"
                                                                        else
#line 839 "query.m"
                                                                          {
#line 839 "query.m"
                                                                            MR_Integer query__CliqueNum_161;
#line 833 "query.m"
                                                                            MR_String query__V_105_105;
#line 833 "query.m"
                                                                            MR_Word query__V_106_106;
#line 833 "query.m"
                                                                            MR_Word query__V_107_107;
#line 833 "query.m"
                                                                            MR_String query__CliqueNumStr_143;
#line 833 "query.m"
                                                                            MR_String query__V_290_290;

#line 833 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 833 "query.m"
                                                                            if (query__succeeded)
#line 833 "query.m"
                                                                              {
#line 833 "query.m"
                                                                                query__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 833 "query.m"
                                                                                query__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 833 "query.m"
                                                                                {
#line 833 "query.m"
                                                                                  query__V_290_290 = query__cmd_str_dump_raw_clique_0_f_0();
                                                                                }
#line 833 "query.m"
                                                                                query__succeeded = (strcmp(query__V_105_105, query__V_290_290) == 0);
#line 833 "query.m"
                                                                                if (query__succeeded)
#line 833 "query.m"
                                                                                  {
#line 833 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_106_106)) == (MR_mktag((MR_Integer) 1)));
#line 833 "query.m"
                                                                                    if (query__succeeded)
#line 833 "query.m"
                                                                                      {
#line 833 "query.m"
                                                                                        query__CliqueNumStr_143 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 0)));
#line 833 "query.m"
                                                                                        query__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 1)));
#line 833 "query.m"
                                                                                        query__succeeded = (query__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "query.m"
                                                                                        if (query__succeeded)
#line 834 "query.m"
                                                                                          {
#line 834 "query.m"
                                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_143, &query__CliqueNum_161);
                                                                                          }
#line 833 "query.m"
                                                                                      }
#line 833 "query.m"
                                                                                  }
#line 833 "query.m"
                                                                              }
#line 839 "query.m"
                                                                            if (query__succeeded)
#line 836 "query.m"
                                                                              {
#line 836 "query.m"
                                                                                MR_Word query__Cmd_144;
#line 836 "query.m"
                                                                                MR_Word query__CliquePtr_145 = (MR_Word) query__CliqueNum_161;

#line 837 "query.m"
                                                                                {
#line 837 "query.m"
                                                                                  query__Cmd_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 837 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 1) = ((MR_Box) (query__CliquePtr_145));
#line 837 "query.m"
                                                                                }
#line 838 "query.m"
                                                                                {
#line 838 "query.m"
                                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 838 "query.m"
                                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_144));
#line 838 "query.m"
                                                                                }
#line 836 "query.m"
                                                                              }
#line 839 "query.m"
                                                                            else
#line 846 "query.m"
                                                                              {
#line 846 "query.m"
                                                                                MR_Integer query__CSDI_157;
#line 840 "query.m"
                                                                                MR_String query__V_108_108;
#line 840 "query.m"
                                                                                MR_Word query__V_109_109;
#line 840 "query.m"
                                                                                MR_Word query__V_110_110;
#line 840 "query.m"
                                                                                MR_String query__CSDIStr_146;
#line 840 "query.m"
                                                                                MR_String query__V_291_291;

#line 840 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 840 "query.m"
                                                                                if (query__succeeded)
#line 840 "query.m"
                                                                                  {
#line 840 "query.m"
                                                                                    query__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 840 "query.m"
                                                                                    query__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 840 "query.m"
                                                                                    {
#line 840 "query.m"
                                                                                      query__V_291_291 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                                                                                    }
#line 840 "query.m"
                                                                                    query__succeeded = (strcmp(query__V_108_108, query__V_291_291) == 0);
#line 840 "query.m"
                                                                                    if (query__succeeded)
#line 840 "query.m"
                                                                                      {
#line 840 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 840 "query.m"
                                                                                        if (query__succeeded)
#line 840 "query.m"
                                                                                          {
#line 840 "query.m"
                                                                                            query__CSDIStr_146 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 0)));
#line 840 "query.m"
                                                                                            query__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 1)));
#line 840 "query.m"
                                                                                            query__succeeded = (query__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "query.m"
                                                                                            if (query__succeeded)
#line 841 "query.m"
                                                                                              {
#line 841 "query.m"
                                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_146, &query__CSDI_157);
                                                                                              }
#line 840 "query.m"
                                                                                          }
#line 840 "query.m"
                                                                                      }
#line 840 "query.m"
                                                                                  }
#line 846 "query.m"
                                                                                if (query__succeeded)
#line 843 "query.m"
                                                                                  {
#line 843 "query.m"
                                                                                    MR_Word query__Cmd_147;
#line 843 "query.m"
                                                                                    MR_Word query__CSDPtr_148 = (MR_Word) query__CSDI_157;

#line 844 "query.m"
                                                                                    {
#line 844 "query.m"
                                                                                      query__Cmd_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 844 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 844 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 1) = ((MR_Box) (query__CSDPtr_148));
#line 844 "query.m"
                                                                                    }
#line 845 "query.m"
                                                                                    {
#line 845 "query.m"
                                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 845 "query.m"
                                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_147));
#line 845 "query.m"
                                                                                    }
#line 843 "query.m"
                                                                                  }
#line 846 "query.m"
                                                                                else
#line 852 "query.m"
                                                                                  {
#line 852 "query.m"
                                                                                    MR_Integer query__TimeOut_43;
#line 847 "query.m"
                                                                                    MR_String query__TimeOutStr_42;
#line 847 "query.m"
                                                                                    MR_String query__V_111_111;
#line 847 "query.m"
                                                                                    MR_Word query__V_112_112;
#line 847 "query.m"
                                                                                    MR_Word query__V_113_113;
#line 847 "query.m"
                                                                                    MR_String query__V_292_292;

#line 847 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 847 "query.m"
                                                                                    if (query__succeeded)
#line 847 "query.m"
                                                                                      {
#line 847 "query.m"
                                                                                        query__V_111_111 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 847 "query.m"
                                                                                        query__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 847 "query.m"
                                                                                        {
#line 847 "query.m"
                                                                                          query__V_292_292 = query__cmd_str_timeout_0_f_0();
                                                                                        }
#line 847 "query.m"
                                                                                        query__succeeded = (strcmp(query__V_111_111, query__V_292_292) == 0);
#line 847 "query.m"
                                                                                        if (query__succeeded)
#line 847 "query.m"
                                                                                          {
#line 847 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_112_112)) == (MR_mktag((MR_Integer) 1)));
#line 847 "query.m"
                                                                                            if (query__succeeded)
#line 847 "query.m"
                                                                                              {
#line 847 "query.m"
                                                                                                query__TimeOutStr_42 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 0)));
#line 847 "query.m"
                                                                                                query__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 1)));
#line 847 "query.m"
                                                                                                query__succeeded = (query__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "query.m"
                                                                                                if (query__succeeded)
#line 848 "query.m"
                                                                                                  {
#line 848 "query.m"
                                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__TimeOutStr_42, &query__TimeOut_43);
                                                                                                  }
#line 847 "query.m"
                                                                                              }
#line 847 "query.m"
                                                                                          }
#line 847 "query.m"
                                                                                      }
#line 852 "query.m"
                                                                                    if (query__succeeded)
#line 850 "query.m"
                                                                                      {
#line 850 "query.m"
                                                                                        MR_Word query__Cmd_149;

#line 850 "query.m"
                                                                                        {
#line 850 "query.m"
                                                                                          query__Cmd_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__Cmd_149, 0) = ((MR_Box) (query__TimeOut_43));
#line 850 "query.m"
                                                                                        }
#line 851 "query.m"
                                                                                        {
#line 851 "query.m"
                                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 851 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_149));
#line 851 "query.m"
                                                                                        }
#line 850 "query.m"
                                                                                      }
#line 852 "query.m"
                                                                                    else
#line 857 "query.m"
                                                                                      {
#line 853 "query.m"
                                                                                        MR_String query__V_114_114;
#line 853 "query.m"
                                                                                        MR_Word query__V_115_115;
#line 853 "query.m"
                                                                                        MR_String query__V_293_293;

#line 853 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 853 "query.m"
                                                                                        if (query__succeeded)
#line 853 "query.m"
                                                                                          {
#line 853 "query.m"
                                                                                            query__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 853 "query.m"
                                                                                            query__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 853 "query.m"
                                                                                            {
#line 853 "query.m"
                                                                                              query__V_293_293 = query__cmd_str_restart_0_f_0();
                                                                                            }
#line 853 "query.m"
                                                                                            query__succeeded = (strcmp(query__V_114_114, query__V_293_293) == 0);
#line 853 "query.m"
                                                                                            if (query__succeeded)
#line 853 "query.m"
                                                                                              query__succeeded = (query__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "query.m"
                                                                                          }
#line 857 "query.m"
                                                                                        if (query__succeeded)
#line 855 "query.m"
                                                                                          {
#line 856 "query.m"
                                                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[5]);
#line 855 "query.m"
                                                                                          }
#line 857 "query.m"
                                                                                        else
#line 862 "query.m"
                                                                                          {
#line 858 "query.m"
                                                                                            MR_String query__V_116_116;
#line 858 "query.m"
                                                                                            MR_Word query__V_117_117;
#line 858 "query.m"
                                                                                            MR_String query__V_294_294;

#line 858 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 858 "query.m"
                                                                                            if (query__succeeded)
#line 858 "query.m"
                                                                                              {
#line 858 "query.m"
                                                                                                query__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 858 "query.m"
                                                                                                query__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 858 "query.m"
                                                                                                {
#line 858 "query.m"
                                                                                                  query__V_294_294 = query__cmd_str_quit_0_f_0();
                                                                                                }
#line 858 "query.m"
                                                                                                query__succeeded = (strcmp(query__V_116_116, query__V_294_294) == 0);
#line 858 "query.m"
                                                                                                if (query__succeeded)
#line 858 "query.m"
                                                                                                  query__succeeded = (query__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "query.m"
                                                                                              }
#line 862 "query.m"
                                                                                            if (query__succeeded)
#line 860 "query.m"
                                                                                              {
#line 861 "query.m"
                                                                                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[6]);
#line 860 "query.m"
                                                                                              }
#line 862 "query.m"
                                                                                            else
#line 863 "query.m"
                                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 862 "query.m"
                                                                                          }
#line 857 "query.m"
                                                                                      }
#line 852 "query.m"
                                                                                  }
#line 846 "query.m"
                                                                              }
#line 839 "query.m"
                                                                          }
#line 832 "query.m"
                                                                      }
#line 825 "query.m"
                                                                  }
#line 818 "query.m"
                                                              }
#line 811 "query.m"
                                                          }
#line 804 "query.m"
                                                      }
#line 799 "query.m"
                                                  }
#line 793 "query.m"
                                              }
#line 787 "query.m"
                                          }
#line 777 "query.m"
                                      }
#line 772 "query.m"
                                  }
#line 767 "query.m"
                              }
#line 762 "query.m"
                          }
#line 757 "query.m"
                      }
#line 744 "query.m"
                  }
#line 737 "query.m"
              }
#line 732 "query.m"
          }
#line 725 "query.m"
      }
#line 704 "query.m"
    return query__MaybeCmd_4;
#line 704 "query.m"
  }
#line 64 "query.m"
}

#line 62 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_query_1_f_0(
#line 62 "query.m"
  MR_String query__String_3)
#line 62 "query.m"
{
#line 936 "query.m"
  {
#line 936 "query.m"
    MR_bool query__succeeded;
#line 936 "query.m"
    MR_Word query__MaybeDeepQuery_4;
#line 936 "query.m"
    MR_Word query__MaybeCmdStr_5;
#line 936 "query.m"
    MR_Word query__MaybePrefStr_6;
#line 936 "query.m"
    MR_String query__DeepFileName_7;
#line 946 "query.m"
    MR_Word query__Pieces_19;
#line 952 "query.m"
    MR_String query__DeepFileName0_20;
#line 948 "query.m"
    MR_Word query__V_24_24;

#line 947 "query.m"
    {
#line 947 "query.m"
      util__split_3_p_0(query__String_3, (MR_Char) 38, &query__Pieces_19);
    }
#line 948 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 948 "query.m"
    if (query__succeeded)
#line 948 "query.m"
      {
#line 948 "query.m"
        query__DeepFileName0_20 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 948 "query.m"
        query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 948 "query.m"
        query__succeeded = (query__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 948 "query.m"
      }
#line 952 "query.m"
    if (query__succeeded)
#line 949 "query.m"
      {
#line 949 "query.m"
        query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 950 "query.m"
        query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "query.m"
        query__DeepFileName_7 = query__DeepFileName0_20;
#line 949 "query.m"
        query__succeeded = MR_TRUE;
#line 949 "query.m"
      }
#line 952 "query.m"
    else
#line 956 "query.m"
      {
#line 956 "query.m"
        MR_String query__CmdStr_21;
#line 956 "query.m"
        MR_String query__DeepFileName0_32;
#line 952 "query.m"
        MR_Word query__V_25_25;
#line 952 "query.m"
        MR_Word query__V_26_26;

#line 952 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 952 "query.m"
        if (query__succeeded)
#line 952 "query.m"
          {
#line 952 "query.m"
            query__CmdStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 952 "query.m"
            query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 952 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 952 "query.m"
            if (query__succeeded)
#line 952 "query.m"
              {
#line 952 "query.m"
                query__DeepFileName0_32 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 0)));
#line 952 "query.m"
                query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 1)));
#line 952 "query.m"
                query__succeeded = (query__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "query.m"
              }
#line 952 "query.m"
          }
#line 956 "query.m"
        if (query__succeeded)
#line 953 "query.m"
          {
#line 953 "query.m"
            {
#line 953 "query.m"
              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 953 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_21));
#line 953 "query.m"
            }
#line 954 "query.m"
            query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "query.m"
            query__DeepFileName_7 = query__DeepFileName0_32;
#line 953 "query.m"
            query__succeeded = MR_TRUE;
#line 953 "query.m"
          }
#line 956 "query.m"
        else
#line 960 "query.m"
          {
#line 960 "query.m"
            MR_String query__PrefsStr_22;
#line 960 "query.m"
            MR_Word query__V_27_27;
#line 960 "query.m"
            MR_Word query__V_28_28;
#line 960 "query.m"
            MR_Word query__V_29_29;
#line 960 "query.m"
            MR_String query__CmdStr_31;

#line 956 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 956 "query.m"
            if (query__succeeded)
#line 956 "query.m"
              {
#line 956 "query.m"
                query__CmdStr_31 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 956 "query.m"
                query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 956 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 956 "query.m"
                if (query__succeeded)
#line 956 "query.m"
                  {
#line 956 "query.m"
                    query__PrefsStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 0)));
#line 956 "query.m"
                    query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 1)));
#line 956 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 956 "query.m"
                    if (query__succeeded)
#line 956 "query.m"
                      {
#line 956 "query.m"
                        query__DeepFileName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 0)));
#line 956 "query.m"
                        query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 1)));
#line 956 "query.m"
                        query__succeeded = (query__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 960 "query.m"
                        if (query__succeeded)
#line 960 "query.m"
                          {
#line 957 "query.m"
                            {
#line 957 "query.m"
                              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_31));
#line 957 "query.m"
                            }
#line 958 "query.m"
                            {
#line 958 "query.m"
                              query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, 0) = ((MR_Box) (query__PrefsStr_22));
#line 958 "query.m"
                            }
#line 958 "query.m"
                            query__succeeded = MR_TRUE;
#line 960 "query.m"
                          }
#line 956 "query.m"
                      }
#line 956 "query.m"
                  }
#line 956 "query.m"
              }
#line 960 "query.m"
          }
#line 956 "query.m"
      }
#line 936 "query.m"
    if (query__succeeded)
#line 926 "query.m"
      {
#line 926 "query.m"
        MR_Word query__MaybeCmd_8;
#line 926 "query.m"
        MR_Word query__MaybePreferences_11;
#line 926 "query.m"
        MR_Word query__V_14_14;

#line 923 "query.m"
        if ((query__MaybeCmdStr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 922 "query.m"
          query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 923 "query.m"
        else
#line 924 "query.m"
          {
#line 924 "query.m"
            MR_String query__CmdStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, (MR_Integer) 0)));
#line 924 "query.m"
            MR_Word query__V_12_12;
#line 924 "query.m"
            MR_Word query__MaybeCmd_36;

#line 696 "query.m"
            {
#line 696 "query.m"
              query__MaybeCmd_36 = query__string_to_maybe_cmd_1_f_0(query__CmdStr_9);
            }
#line 699 "query.m"
            if ((query__MaybeCmd_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "query.m"
              query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 699 "query.m"
            else
#line 698 "query.m"
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybeCmd_36, (MR_Integer) 0)));
#line 925 "query.m"
            {
#line 925 "query.m"
              query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_8, 0) = ((MR_Box) (query__V_12_12));
#line 925 "query.m"
            }
#line 924 "query.m"
          }
#line 930 "query.m"
        if ((query__MaybePrefStr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "query.m"
          query__MaybePreferences_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 930 "query.m"
        else
#line 928 "query.m"
          {
#line 928 "query.m"
            MR_String query__PrefStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, (MR_Integer) 0)));

#line 929 "query.m"
            {
#line 929 "query.m"
              query__MaybePreferences_11 = query__string_to_maybe_pref_1_f_0(query__PrefStr_10);
            }
#line 928 "query.m"
          }
#line 935 "query.m"
        {
#line 935 "query.m"
          query__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 935 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 0) = ((MR_Box) (query__MaybeCmd_8));
#line 935 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 1) = ((MR_Box) (query__DeepFileName_7));
#line 935 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 2) = ((MR_Box) (query__MaybePreferences_11));
#line 935 "query.m"
        }
#line 935 "query.m"
        {
#line 935 "query.m"
          query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 935 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeDeepQuery_4, 0) = ((MR_Box) (query__V_14_14));
#line 935 "query.m"
        }
#line 926 "query.m"
      }
#line 936 "query.m"
    else
#line 937 "query.m"
      query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 936 "query.m"
    return query__MaybeDeepQuery_4;
#line 936 "query.m"
  }
#line 62 "query.m"
}

#line 60 "query.m"
MR_String MR_CALL 
query__query_to_string_1_f_0(
#line 60 "query.m"
  MR_Word query__DeepQuery_3)
#line 60 "query.m"
{
#line 901 "query.m"
  {
#line 901 "query.m"
    MR_bool query__succeeded;
#line 901 "query.m"
    MR_String query__String_4;
#line 901 "query.m"
    MR_Word query__Cmd_5;
#line 901 "query.m"
    MR_String query__DeepFileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 1)));
#line 901 "query.m"
    MR_Word query__MaybePreferences_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 2)));
#line 901 "query.m"
    MR_String query__PreferencesString_9;
#line 901 "query.m"
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 0)));
#line 901 "query.m"
    MR_String query__V_11_11;
#line 901 "query.m"
    MR_String query__V_12_12;
#line 901 "query.m"
    MR_String query__V_13_13;
#line 901 "query.m"
    MR_String query__V_15_15;
#line 901 "query.m"
    MR_String query__V_16_16;
#line 901 "query.m"
    MR_String query__V_17_17;

#line 902 "query.m"
    query__Cmd_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_10_10, (MR_Integer) 0)));
#line 906 "query.m"
    if ((query__MaybePreferences_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 908 "query.m"
      query__PreferencesString_9 = (MR_String) "";
#line 906 "query.m"
    else
#line 904 "query.m"
      {
#line 904 "query.m"
        MR_Word query__Preferences_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybePreferences_7, (MR_Integer) 0)));

#line 905 "query.m"
        {
#line 905 "query.m"
          query__PreferencesString_9 = query__preferences_to_string_1_f_0(query__Preferences_8);
        }
#line 904 "query.m"
      }
#line 910 "query.m"
    {
#line 910 "query.m"
      query__V_11_11 = query__cmd_to_string_1_f_0(query__Cmd_5);
    }
#line 911 "query.m"
    {
#line 911 "query.m"
      query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 913 "query.m"
    {
#line 913 "query.m"
      query__V_17_17 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 913 "query.m"
    {
#line 913 "query.m"
      query__V_16_16 = mercury__string__f_43_43_2_f_0(query__V_17_17, query__DeepFileName_6);
    }
#line 912 "query.m"
    {
#line 912 "query.m"
      query__V_15_15 = mercury__string__f_43_43_2_f_0(query__PreferencesString_9, query__V_16_16);
    }
#line 911 "query.m"
    {
#line 911 "query.m"
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
    }
#line 910 "query.m"
    {
#line 910 "query.m"
      query__String_4 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
    }
#line 901 "query.m"
    return query__String_4;
#line 901 "query.m"
  }
#line 60 "query.m"
}

#line 384 "query.m"
static void MR_CALL 
query__try_exec_4_p_0_1(
#line 384 "query.m"
  MR_Box query__closure_arg,
#line 384 "query.m"
  MR_Box * query__wrapper_arg_1)
#line 384 "query.m"
{
#line 384 "query.m"
  {
#line 384 "query.m"
    MR_Box query__closure = query__closure_arg;
#line 384 "query.m"
    MR_String query__conv0_HTMLStr_8;

#line 384 "query.m"
    {
#line 384 "query.m"
      query__exec_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 5))), &query__conv0_HTMLStr_8);
    }
#line 384 "query.m"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HTMLStr_8));
#line 384 "query.m"
  }
#line 384 "query.m"
}

#line 38 "query.m"
void MR_CALL 
query__try_exec_4_p_0(
#line 38 "query.m"
  MR_Word query__Cmd_5,
#line 38 "query.m"
  MR_Word query__Pref_6,
#line 38 "query.m"
  MR_Word query__Deep_7,
#line 38 "query.m"
  MR_String * query__HTML_8)
#line 38 "query.m"
{
#line 383 "query.m"
  {
#line 383 "query.m"
    MR_bool query__succeeded;
#line 383 "query.m"
    MR_Word query__TypeCtorInfo_34_34;
#line 383 "query.m"
    MR_Word query__Result_9;
#line 383 "query.m"
    MR_Word query__V_19_19;

#line 384 "query.m"
    {
#line 384 "query.m"
      query__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 0) = ((MR_Box) (&query_scalar_common_3[0]));
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 1) = ((MR_Box) (query__try_exec_4_p_0_1));
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 3) = ((MR_Box) (query__Cmd_5));
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 4) = ((MR_Box) (query__Pref_6));
#line 384 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 5) = ((MR_Box) (query__Deep_7));
#line 384 "query.m"
    }
#line 20757 "query.c"
    query__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 384 "query.m"
    {
#line 384 "query.m"
      mercury__exception__try_2_p_0(query__TypeCtorInfo_34_34, query__V_19_19, &query__Result_9);
    }
#line 387 "query.m"
    if (((MR_tag((MR_Word) query__Result_9)) == (MR_mktag((MR_Integer) 2))))
#line 388 "query.m"
      {
#line 388 "query.m"
        MR_Word query__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Result_9, (MR_Integer) 0)));
#line 388 "query.m"
        MR_String query__Msg_12;
#line 388 "query.m"
        MR_String query__V_39_39;
#line 388 "query.m"
        MR_String query__V_46_46;
#line 391 "query.m"
        MR_String query__MsgPrime_11;
#line 389 "query.m"
        MR_Box query__conv1_MsgPrime_11;

#line 389 "query.m"
        {
#line 389 "query.m"
          query__succeeded = mercury__univ__univ_to_type_2_p_0(query__TypeCtorInfo_34_34, query__Exception_10, &query__conv1_MsgPrime_11);
        }
#line 389 "query.m"
        if (query__succeeded)
#line 389 "query.m"
          {
#line 389 "query.m"
            query__MsgPrime_11 = ((MR_String) query__conv1_MsgPrime_11);
#line 389 "query.m"
            query__succeeded = MR_TRUE;
#line 389 "query.m"
          }
#line 391 "query.m"
        if (query__succeeded)
#line 390 "query.m"
          query__Msg_12 = query__MsgPrime_11;
#line 391 "query.m"
        else
#line 393 "query.m"
          {
#line 393 "query.m"
            MR_String query__ErrorMsg_13;
#line 391 "query.m"
            MR_Word query__V_20_20;
#line 391 "query.m"
            MR_Box query__conv2_V_20_20;

#line 391 "query.m"
            {
#line 391 "query.m"
              query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, query__Exception_10, &query__conv2_V_20_20);
            }
#line 391 "query.m"
            if (query__succeeded)
#line 391 "query.m"
              {
#line 391 "query.m"
                query__V_20_20 = ((MR_Word) query__conv2_V_20_20);
#line 391 "query.m"
                query__succeeded = MR_TRUE;
#line 391 "query.m"
              }
#line 391 "query.m"
            if (query__succeeded)
#line 391 "query.m"
              {
#line 391 "query.m"
                query__ErrorMsg_13 = (MR_String) query__V_20_20;
#line 391 "query.m"
                query__succeeded = MR_TRUE;
#line 391 "query.m"
              }
#line 393 "query.m"
            if (query__succeeded)
#line 392 "query.m"
              {
#line 392 "query.m"
                {
#line 392 "query.m"
                  query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "internal software error: ", query__ErrorMsg_13);
                }
#line 392 "query.m"
              }
#line 393 "query.m"
            else
#line 395 "query.m"
              {
#line 395 "query.m"
                MR_String query__DomainMsg_14;
#line 393 "query.m"
                MR_Word query__V_22_22;
#line 393 "query.m"
                MR_Box query__conv3_V_22_22;

#line 393 "query.m"
                {
#line 393 "query.m"
                  query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__math__math__type_ctor_info_domain_error_0, query__Exception_10, &query__conv3_V_22_22);
                }
#line 393 "query.m"
                if (query__succeeded)
#line 393 "query.m"
                  {
#line 393 "query.m"
                    query__V_22_22 = ((MR_Word) query__conv3_V_22_22);
#line 393 "query.m"
                    query__succeeded = MR_TRUE;
#line 393 "query.m"
                  }
#line 393 "query.m"
                if (query__succeeded)
#line 393 "query.m"
                  {
#line 393 "query.m"
                    query__DomainMsg_14 = (MR_String) query__V_22_22;
#line 393 "query.m"
                    query__succeeded = MR_TRUE;
#line 393 "query.m"
                  }
#line 395 "query.m"
                if (query__succeeded)
#line 394 "query.m"
                  {
#line 394 "query.m"
                    {
#line 394 "query.m"
                      query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "domain error: ", query__DomainMsg_14);
                    }
#line 394 "query.m"
                  }
#line 395 "query.m"
                else
#line 396 "query.m"
                  query__Msg_12 = (MR_String) "unknown exception";
#line 395 "query.m"
              }
#line 393 "query.m"
          }
#line 410 "query.m"
        {
#line 410 "query.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__Msg_12, &query__V_39_39);
        }
#line 409 "query.m"
        {
#line 409 "query.m"
          query__V_46_46 = mercury__string__f_43_43_2_f_0(query__V_39_39, (MR_String) "</H3>\n");
        }
#line 409 "query.m"
        {
#line 409 "query.m"
          *query__HTML_8 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", query__V_46_46);
        }
#line 388 "query.m"
      }
#line 387 "query.m"
    else
#line 386 "query.m"
      *query__HTML_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Result_9, (MR_Integer) 0)));
#line 383 "query.m"
  }
#line 38 "query.m"
}

void mercury__query__init(void)
{
}

void mercury__query__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&query__query__type_ctor_info_alloc_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_box_tables_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_caller_groups_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_callseqs_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_cmd_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_colour_column_groups_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_contour_exclusion_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_cost_kind_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_deep_query_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_descendants_meaningful_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_developer_mode_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_display_limit_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_inactive_items_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_inactive_status_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_include_descendants_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_measurement_scope_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_memory_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_module_qual_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_order_criteria_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_port_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_preferences_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_preferences_indication_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_resp_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_summarize_ho_call_sites_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_time_fields_0);
	MR_register_type_ctor_info(&query__query__type_ctor_info_time_format_0);
}

void mercury__query__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module query. */
