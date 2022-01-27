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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "deconstruct.mih"
#include "display.mih"
#include "display_report.mih"
#include "enum.mih"
#include "exception.mih"
#include "exclude.mih"
#include "html_format.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "random.mih"
#include "report.mih"
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
#include "util.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

#line 435 "query.m"
static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2];

#line 435 "query.m"
static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 435 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 435 "query.m"
static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 435 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 435 "query.m"
static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0;

#line 1366 "query.m"
static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void);

#line 1363 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void);

#line 1360 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void);

#line 1357 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void);

#line 1354 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void);

#line 1351 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void);

#line 1348 "query.m"
static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void);

#line 1345 "query.m"
static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void);

#line 1342 "query.m"
static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void);

#line 1339 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void);

#line 1336 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void);

#line 1333 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void);

#line 1330 "query.m"
static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void);

#line 1327 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void);

#line 1324 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void);

#line 1321 "query.m"
static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void);

#line 1318 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void);

#line 1315 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void);

#line 1312 "query.m"
static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void);

#line 1309 "query.m"
static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void);

#line 1306 "query.m"
static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void);

#line 1303 "query.m"
static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void);

#line 1300 "query.m"
static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void);

#line 1286 "query.m"
static MR_String MR_CALL 
query__box_to_string_1_f_0(
#line 1286 "query.m"
  MR_Word query__Box_3);

#line 1274 "query.m"
static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
#line 1274 "query.m"
  MR_Word query__Scheme_3);

#line 1262 "query.m"
static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
#line 1262 "query.m"
  MR_Word query__DevMode_3);

#line 1242 "query.m"
static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
#line 1242 "query.m"
  MR_String query__HeadVar__1_1,
#line 1242 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1236 "query.m"
static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
#line 1236 "query.m"
  MR_Word query__Items_3);

#line 1222 "query.m"
static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
#line 1222 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1216 "query.m"
static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
#line 1216 "query.m"
  MR_String query__HeadVar__1_1,
#line 1216 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1210 "query.m"
static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
#line 1210 "query.m"
  MR_Word query__Contour_3);

#line 1204 "query.m"
static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
#line 1204 "query.m"
  MR_String query__HeadVar__1_1,
#line 1204 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1198 "query.m"
static MR_String MR_CALL 
query__scope_to_string_1_f_0(
#line 1198 "query.m"
  MR_Word query__Scope_3);

#line 1162 "query.m"
static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
#line 1162 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1150 "query.m"
static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
#line 1150 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1139 "query.m"
static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
#line 1139 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1115 "query.m"
static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
#line 1115 "query.m"
  MR_String query__LimitStr_3,
#line 1115 "query.m"
  MR_Word * query__Limit_4);

#line 1106 "query.m"
static MR_String MR_CALL 
query__limit_to_string_1_f_0(
#line 1106 "query.m"
  MR_Word query__HeadVar__1_1);

#line 1100 "query.m"
static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
#line 1100 "query.m"
  MR_String query__HeadVar__1_1,
#line 1100 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1094 "query.m"
static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
#line 1094 "query.m"
  MR_Word query__InclDesc_3);

#line 1084 "query.m"
static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
#line 1084 "query.m"
  MR_String query__HeadVar__1_1,
#line 1084 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1078 "query.m"
static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
#line 1078 "query.m"
  MR_Word query__CostKind_3);

#line 1070 "query.m"
static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
#line 1070 "query.m"
  MR_String query__HeadVar__1_1,
#line 1070 "query.m"
  MR_Word * query__HeadVar__2_2);

#line 1064 "query.m"
static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
#line 1064 "query.m"
  MR_Word query__CallerGroups_3);

#line 1034 "query.m"
static MR_String MR_CALL 
query__fields_to_string_1_f_0(
#line 1034 "query.m"
  MR_Word query__HeadVar__1_1);

#line 665 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 665 "query.m"
  MR_Word query__Pref_3);

#line 534 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 534 "query.m"
  MR_Word query__Cmd_3);

#line 520 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void);

#line 519 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void);

#line 435 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 435 "query.m"
  MR_Word query__Cmd_4,
#line 435 "query.m"
  MR_Word query__Deep_5,
#line 435 "query.m"
  MR_Word * query__Report_6);

#line 414 "query.m"
static void MR_CALL 
query__exec_4_p_0(
#line 414 "query.m"
  MR_Word query__Cmd_5,
#line 414 "query.m"
  MR_Word query__Prefs_6,
#line 414 "query.m"
  MR_Word query__Deep_7,
#line 414 "query.m"
  MR_String * query__HTMLStr_8);

#line 385 "query.m"
static void MR_CALL 
query__try_exec_4_p_0_1(
#line 385 "query.m"
  MR_Box query__closure_arg,
#line 385 "query.m"
  MR_Box * query__wrapper_arg_1);


static /* final */ const MR_Box query_scalar_common_1[4][2];

static /* final */ const MR_Box query_scalar_common_2[17][1];

static /* final */ const MR_Box query_scalar_common_3[1][7];


#line 986 "query.m"
/* sealed */ struct query__vector_common_type_4_0_s {
#line 986 "query.m"
  const MR_String query__vector_common_type_4_0__vct_4_f_0;
#line 986 "query.m"
  const MR_Word query__vector_common_type_4_0__vct_4_f_1;
#line 986 "query.m"
};

static /* final */ const struct query__vector_common_type_4_0_s query_vector_common_4[6];

#line 1028 "query.m"
/* sealed */ struct query__vector_common_type_5_0_s {
#line 1028 "query.m"
  const MR_String query__vector_common_type_5_0__vct_5_f_0;
#line 1028 "query.m"
  const MR_Word query__vector_common_type_5_0__vct_5_f_1;
#line 1028 "query.m"
};

static /* final */ const struct query__vector_common_type_5_0_s query_vector_common_5[5];

#line 1087 "query.m"
/* sealed */ struct query__vector_common_type_6_0_s {
#line 1087 "query.m"
  const MR_String query__vector_common_type_6_0__vct_6_f_0;
#line 1087 "query.m"
  const MR_Word query__vector_common_type_6_0__vct_6_f_1;
#line 1087 "query.m"
};

static /* final */ const struct query__vector_common_type_6_0_s query_vector_common_6[12];

#line 986 "query.m"
/* sealed */ struct query__vector_common_type_7_0_s {
#line 986 "query.m"
  const MR_String query__vector_common_type_7_0__vct_7_f_0;
#line 986 "query.m"
};

static /* final */ const struct query__vector_common_type_7_0_s query_vector_common_7[22];

#line 1073 "query.m"
/* sealed */ struct query__vector_common_type_8_0_s {
#line 1073 "query.m"
  const MR_String query__vector_common_type_8_0__vct_8_f_0;
#line 1073 "query.m"
  const MR_Word query__vector_common_type_8_0__vct_8_f_1;
#line 1073 "query.m"
};

static /* final */ const struct query__vector_common_type_8_0_s query_vector_common_8[4];

#line 1245 "query.m"
/* sealed */ struct query__vector_common_type_9_0_s {
#line 1245 "query.m"
  const MR_String query__vector_common_type_9_0__vct_9_f_0;
#line 1245 "query.m"
  const MR_Word query__vector_common_type_9_0__vct_9_f_1;
#line 1245 "query.m"
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


#include "profile.mh"
#include "profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2073 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

#line 2079 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

#line 2085 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

#line 2091 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

#line 2098 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

#line 2105 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2112 "query.c"
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

#line 2129 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

#line 2135 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

#line 2141 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 2147 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 2153 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2159 "query.c"
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

#line 2176 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

#line 2182 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

#line 2188 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

#line 2194 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

#line 2200 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

#line 2208 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

#line 2216 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 2224 "query.c"
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

#line 2241 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

#line 2247 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

#line 2253 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

#line 2259 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

#line 2266 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

#line 2273 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2280 "query.c"
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

#line 2297 "query.c"
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

#line 2312 "query.c"
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

#line 2327 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2332 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

#line 2337 "query.c"
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

#line 2352 "query.c"
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

#line 2367 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2375 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2380 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

#line 2385 "query.c"
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

#line 2400 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2405 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

#line 2410 "query.c"
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

#line 2425 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2430 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

#line 2435 "query.c"
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

#line 2450 "query.c"
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

#line 2465 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2470 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

#line 2475 "query.c"
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

#line 2490 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

#line 2499 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

#line 2508 "query.c"
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

#line 2523 "query.c"
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

#line 2538 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2543 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

#line 2548 "query.c"
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

#line 2563 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2568 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

#line 2573 "query.c"
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

#line 2588 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2593 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

#line 2598 "query.c"
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

#line 2613 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 2621 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

#line 2629 "query.c"
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

#line 2653 "query.c"
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

#line 2668 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2673 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

#line 2678 "query.c"
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

#line 2693 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2698 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

#line 2703 "query.c"
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

#line 2718 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2723 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

#line 2728 "query.c"
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

#line 2743 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2748 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

#line 2753 "query.c"
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

#line 2768 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

#line 2773 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

#line 2778 "query.c"
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

#line 2793 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2798 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

#line 2803 "query.c"
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

#line 2818 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2823 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

#line 2828 "query.c"
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

#line 2843 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2848 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

#line 2853 "query.c"
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

#line 2868 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

#line 2877 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

#line 2882 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

#line 2887 "query.c"
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

#line 2907 "query.c"
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

#line 2931 "query.c"
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

#line 2958 "query.c"
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

#line 2985 "query.c"
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

#line 3002 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

#line 3008 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

#line 3014 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 3020 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 3026 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3032 "query.c"
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

#line 3049 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

#line 3055 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

#line 3061 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 3067 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 3073 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3079 "query.c"
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

#line 3096 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

#line 3102 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

#line 3108 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

#line 3114 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

#line 3120 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

#line 3126 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

#line 3132 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 3142 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 3152 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 3162 "query.c"
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

#line 3179 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

#line 3187 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 3195 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

#line 3202 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

#line 3209 "query.c"
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

#line 3224 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 3229 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

#line 3238 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 3243 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

#line 3248 "query.c"
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

#line 3265 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

#line 3271 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

#line 3277 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3283 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3289 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3295 "query.c"
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

#line 3312 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

#line 3318 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

#line 3324 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

#line 3330 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

#line 3336 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3342 "query.c"
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

#line 3359 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3365 "query.c"
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

#line 3380 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3385 "query.c"
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

#line 3400 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3405 "query.c"
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

#line 3420 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

#line 3425 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

#line 3430 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3435 "query.c"
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

#line 3454 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3461 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 3468 "query.c"
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

#line 3485 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
};

#line 3494 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

#line 3503 "query.c"
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

#line 3532 "query.c"
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

#line 3547 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3552 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

#line 3561 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3566 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

#line 3571 "query.c"
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

#line 3588 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

#line 3595 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

#line 3602 "query.c"
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

#line 3621 "query.c"
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

#line 3636 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3641 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

#line 3650 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3655 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

#line 3660 "query.c"
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

#line 3677 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

#line 3683 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

#line 3689 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3695 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3701 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3707 "query.c"
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

#line 3724 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

#line 3730 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

#line 3736 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3742 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3748 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3754 "query.c"
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

#line 3771 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

#line 3777 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

#line 3783 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

#line 3789 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

#line 3795 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3801 "query.c"
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

#line 3818 "query.c"
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

#line 3833 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3838 "query.c"
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

#line 3853 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3858 "query.c"
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

#line 3873 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3878 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

#line 3883 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

#line 3888 "query.c"
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

#line 3907 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3914 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3921 "query.c"
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

#line 3938 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

#line 3944 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

#line 3950 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

#line 3956 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

#line 3963 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

#line 3970 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3977 "query.c"
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

#line 3994 "query.c"
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

#line 4009 "query.c"
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

#line 4024 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 4031 "query.c"
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

#line 4050 "query.c"
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

#line 4065 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 4071 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

#line 4076 "query.c"
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

#line 4090 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 4097 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 4104 "query.c"
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

#line 4121 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

#line 4127 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

#line 4133 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 4139 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 4145 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4151 "query.c"
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

#line 4168 "query.c"
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

#line 4184 "query.c"
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

#line 4200 "query.c"
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

#line 4264 "query.c"
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

#line 4279 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4284 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

#line 4293 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4298 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

#line 4303 "query.c"
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

#line 4320 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

#line 4325 "query.c"
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

#line 4340 "query.c"
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

#line 4355 "query.c"
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

#line 4370 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

#line 4376 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4381 "query.c"
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

#line 4395 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4402 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4409 "query.c"
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

#line 4426 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

#line 4431 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4438 "query.c"
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

#line 4455 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

#line 4461 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

#line 4467 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

#line 4473 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

#line 4479 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4485 "query.c"
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

#line 4502 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

#line 4508 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

#line 4514 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

#line 4520 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

#line 4526 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

#line 4532 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

#line 4538 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

#line 4548 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

#line 4558 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 4568 "query.c"
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

#line 4585 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

#line 4591 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

#line 4597 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

#line 4603 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4610 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4617 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4624 "query.c"
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

#line 4641 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 4644 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4646 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4648 "query.c"
{
#line 4650 "query.c"
  {
#line 4652 "query.c"
    MR_bool query__succeeded;

#line 4655 "query.c"
    {
#line 4657 "query.c"
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4660 "query.c"
    return query__succeeded;
#line 4662 "query.c"
  }
#line 4664 "query.c"
}

#line 4667 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 4670 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4672 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4674 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4676 "query.c"
{
#line 4678 "query.c"
  {
#line 4680 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4683 "query.c"
    {
#line 4685 "query.c"
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4688 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4690 "query.c"
  }
#line 4692 "query.c"
}

#line 4695 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 4698 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4700 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4702 "query.c"
{
#line 4704 "query.c"
  {
#line 4706 "query.c"
    MR_bool query__succeeded;

#line 4709 "query.c"
    {
#line 4711 "query.c"
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4714 "query.c"
    return query__succeeded;
#line 4716 "query.c"
  }
#line 4718 "query.c"
}

#line 4721 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 4724 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4726 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4728 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4730 "query.c"
{
#line 4732 "query.c"
  {
#line 4734 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4737 "query.c"
    {
#line 4739 "query.c"
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4742 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4744 "query.c"
  }
#line 4746 "query.c"
}

#line 4749 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 4752 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4754 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4756 "query.c"
{
#line 4758 "query.c"
  {
#line 4760 "query.c"
    MR_bool query__succeeded;

#line 4763 "query.c"
    {
#line 4765 "query.c"
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4768 "query.c"
    return query__succeeded;
#line 4770 "query.c"
  }
#line 4772 "query.c"
}

#line 4775 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 4778 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4780 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4782 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4784 "query.c"
{
#line 4786 "query.c"
  {
#line 4788 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4791 "query.c"
    {
#line 4793 "query.c"
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4796 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4798 "query.c"
  }
#line 4800 "query.c"
}

#line 4803 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 4806 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4808 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4810 "query.c"
{
#line 4812 "query.c"
  {
#line 4814 "query.c"
    MR_bool query__succeeded;

#line 4817 "query.c"
    {
#line 4819 "query.c"
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4822 "query.c"
    return query__succeeded;
#line 4824 "query.c"
  }
#line 4826 "query.c"
}

#line 4829 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 4832 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4834 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4836 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4838 "query.c"
{
#line 4840 "query.c"
  {
#line 4842 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4845 "query.c"
    {
#line 4847 "query.c"
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4850 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4852 "query.c"
  }
#line 4854 "query.c"
}

#line 4857 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 4860 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4862 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4864 "query.c"
{
#line 4866 "query.c"
  {
#line 4868 "query.c"
    MR_bool query__succeeded;

#line 4871 "query.c"
    {
#line 4873 "query.c"
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4876 "query.c"
    return query__succeeded;
#line 4878 "query.c"
  }
#line 4880 "query.c"
}

#line 4883 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 4886 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4888 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4890 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4892 "query.c"
{
#line 4894 "query.c"
  {
#line 4896 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4899 "query.c"
    {
#line 4901 "query.c"
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4904 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4906 "query.c"
  }
#line 4908 "query.c"
}

#line 4911 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 4914 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4916 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4918 "query.c"
{
#line 4920 "query.c"
  {
#line 4922 "query.c"
    MR_bool query__succeeded;

#line 4925 "query.c"
    {
#line 4927 "query.c"
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4930 "query.c"
    return query__succeeded;
#line 4932 "query.c"
  }
#line 4934 "query.c"
}

#line 4937 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 4940 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4942 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4944 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4946 "query.c"
{
#line 4948 "query.c"
  {
#line 4950 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4953 "query.c"
    {
#line 4955 "query.c"
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4958 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4960 "query.c"
  }
#line 4962 "query.c"
}

#line 4965 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 4968 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4970 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4972 "query.c"
{
#line 4974 "query.c"
  {
#line 4976 "query.c"
    MR_bool query__succeeded;

#line 4979 "query.c"
    {
#line 4981 "query.c"
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4984 "query.c"
    return query__succeeded;
#line 4986 "query.c"
  }
#line 4988 "query.c"
}

#line 4991 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 4994 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4996 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4998 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5000 "query.c"
{
#line 5002 "query.c"
  {
#line 5004 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5007 "query.c"
    {
#line 5009 "query.c"
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5012 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5014 "query.c"
  }
#line 5016 "query.c"
}

#line 5019 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 5022 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5024 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5026 "query.c"
{
#line 5028 "query.c"
  {
#line 5030 "query.c"
    MR_bool query__succeeded;

#line 5033 "query.c"
    {
#line 5035 "query.c"
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5038 "query.c"
    return query__succeeded;
#line 5040 "query.c"
  }
#line 5042 "query.c"
}

#line 5045 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 5048 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5050 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5052 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5054 "query.c"
{
#line 5056 "query.c"
  {
#line 5058 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5061 "query.c"
    {
#line 5063 "query.c"
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5066 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5068 "query.c"
  }
#line 5070 "query.c"
}

#line 5073 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 5076 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5078 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5080 "query.c"
{
#line 5082 "query.c"
  {
#line 5084 "query.c"
    MR_bool query__succeeded;

#line 5087 "query.c"
    {
#line 5089 "query.c"
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5092 "query.c"
    return query__succeeded;
#line 5094 "query.c"
  }
#line 5096 "query.c"
}

#line 5099 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 5102 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5104 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5106 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5108 "query.c"
{
#line 5110 "query.c"
  {
#line 5112 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5115 "query.c"
    {
#line 5117 "query.c"
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5120 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5122 "query.c"
  }
#line 5124 "query.c"
}

#line 5127 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 5130 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5132 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5134 "query.c"
{
#line 5136 "query.c"
  {
#line 5138 "query.c"
    MR_bool query__succeeded;

#line 5141 "query.c"
    {
#line 5143 "query.c"
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5146 "query.c"
    return query__succeeded;
#line 5148 "query.c"
  }
#line 5150 "query.c"
}

#line 5153 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 5156 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5158 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5160 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5162 "query.c"
{
#line 5164 "query.c"
  {
#line 5166 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5169 "query.c"
    {
#line 5171 "query.c"
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5174 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5176 "query.c"
  }
#line 5178 "query.c"
}

#line 5181 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 5184 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5186 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5188 "query.c"
{
#line 5190 "query.c"
  {
#line 5192 "query.c"
    MR_bool query__succeeded;

#line 5195 "query.c"
    {
#line 5197 "query.c"
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5200 "query.c"
    return query__succeeded;
#line 5202 "query.c"
  }
#line 5204 "query.c"
}

#line 5207 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 5210 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5212 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5214 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5216 "query.c"
{
#line 5218 "query.c"
  {
#line 5220 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5223 "query.c"
    {
#line 5225 "query.c"
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5228 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5230 "query.c"
  }
#line 5232 "query.c"
}

#line 5235 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 5238 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5240 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5242 "query.c"
{
#line 5244 "query.c"
  {
#line 5246 "query.c"
    MR_bool query__succeeded;

#line 5249 "query.c"
    {
#line 5251 "query.c"
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5254 "query.c"
    return query__succeeded;
#line 5256 "query.c"
  }
#line 5258 "query.c"
}

#line 5261 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 5264 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5266 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5268 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5270 "query.c"
{
#line 5272 "query.c"
  {
#line 5274 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5277 "query.c"
    {
#line 5279 "query.c"
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5282 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5284 "query.c"
  }
#line 5286 "query.c"
}

#line 5289 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 5292 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5294 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5296 "query.c"
{
#line 5298 "query.c"
  {
#line 5300 "query.c"
    MR_bool query__succeeded;

#line 5303 "query.c"
    {
#line 5305 "query.c"
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5308 "query.c"
    return query__succeeded;
#line 5310 "query.c"
  }
#line 5312 "query.c"
}

#line 5315 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 5318 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5320 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5322 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5324 "query.c"
{
#line 5326 "query.c"
  {
#line 5328 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5331 "query.c"
    {
#line 5333 "query.c"
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5336 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5338 "query.c"
  }
#line 5340 "query.c"
}

#line 5343 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 5346 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5348 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5350 "query.c"
{
#line 5352 "query.c"
  {
#line 5354 "query.c"
    MR_bool query__succeeded;

#line 5357 "query.c"
    {
#line 5359 "query.c"
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5362 "query.c"
    return query__succeeded;
#line 5364 "query.c"
  }
#line 5366 "query.c"
}

#line 5369 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 5372 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5374 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5376 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5378 "query.c"
{
#line 5380 "query.c"
  {
#line 5382 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5385 "query.c"
    {
#line 5387 "query.c"
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5390 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5392 "query.c"
  }
#line 5394 "query.c"
}

#line 5397 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 5400 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5402 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5404 "query.c"
{
#line 5406 "query.c"
  {
#line 5408 "query.c"
    MR_bool query__succeeded;

#line 5411 "query.c"
    {
#line 5413 "query.c"
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5416 "query.c"
    return query__succeeded;
#line 5418 "query.c"
  }
#line 5420 "query.c"
}

#line 5423 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 5426 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5428 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5430 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5432 "query.c"
{
#line 5434 "query.c"
  {
#line 5436 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5439 "query.c"
    {
#line 5441 "query.c"
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5444 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5446 "query.c"
  }
#line 5448 "query.c"
}

#line 5451 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 5454 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5456 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5458 "query.c"
{
#line 5460 "query.c"
  {
#line 5462 "query.c"
    MR_bool query__succeeded;

#line 5465 "query.c"
    {
#line 5467 "query.c"
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5470 "query.c"
    return query__succeeded;
#line 5472 "query.c"
  }
#line 5474 "query.c"
}

#line 5477 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 5480 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5482 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5484 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5486 "query.c"
{
#line 5488 "query.c"
  {
#line 5490 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5493 "query.c"
    {
#line 5495 "query.c"
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5498 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5500 "query.c"
  }
#line 5502 "query.c"
}

#line 5505 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 5508 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5510 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5512 "query.c"
{
#line 5514 "query.c"
  {
#line 5516 "query.c"
    MR_bool query__succeeded;

#line 5519 "query.c"
    {
#line 5521 "query.c"
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5524 "query.c"
    return query__succeeded;
#line 5526 "query.c"
  }
#line 5528 "query.c"
}

#line 5531 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 5534 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5536 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5538 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5540 "query.c"
{
#line 5542 "query.c"
  {
#line 5544 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5547 "query.c"
    {
#line 5549 "query.c"
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5552 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5554 "query.c"
  }
#line 5556 "query.c"
}

#line 5559 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 5562 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5564 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5566 "query.c"
{
#line 5568 "query.c"
  {
#line 5570 "query.c"
    MR_bool query__succeeded;

#line 5573 "query.c"
    {
#line 5575 "query.c"
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5578 "query.c"
    return query__succeeded;
#line 5580 "query.c"
  }
#line 5582 "query.c"
}

#line 5585 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 5588 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5590 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5592 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5594 "query.c"
{
#line 5596 "query.c"
  {
#line 5598 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5601 "query.c"
    {
#line 5603 "query.c"
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5606 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5608 "query.c"
  }
#line 5610 "query.c"
}

#line 5613 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 5616 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5618 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5620 "query.c"
{
#line 5622 "query.c"
  {
#line 5624 "query.c"
    MR_bool query__succeeded;

#line 5627 "query.c"
    {
#line 5629 "query.c"
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5632 "query.c"
    return query__succeeded;
#line 5634 "query.c"
  }
#line 5636 "query.c"
}

#line 5639 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 5642 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5644 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5646 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5648 "query.c"
{
#line 5650 "query.c"
  {
#line 5652 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5655 "query.c"
    {
#line 5657 "query.c"
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5660 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5662 "query.c"
  }
#line 5664 "query.c"
}

#line 5667 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 5670 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5672 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5674 "query.c"
{
#line 5676 "query.c"
  {
#line 5678 "query.c"
    MR_bool query__succeeded;

#line 5681 "query.c"
    {
#line 5683 "query.c"
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5686 "query.c"
    return query__succeeded;
#line 5688 "query.c"
  }
#line 5690 "query.c"
}

#line 5693 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 5696 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5698 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5700 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5702 "query.c"
{
#line 5704 "query.c"
  {
#line 5706 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5709 "query.c"
    {
#line 5711 "query.c"
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5714 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5716 "query.c"
  }
#line 5718 "query.c"
}

#line 5721 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 5724 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5726 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5728 "query.c"
{
#line 5730 "query.c"
  {
#line 5732 "query.c"
    MR_bool query__succeeded;

#line 5735 "query.c"
    {
#line 5737 "query.c"
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5740 "query.c"
    return query__succeeded;
#line 5742 "query.c"
  }
#line 5744 "query.c"
}

#line 5747 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 5750 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5752 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5754 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5756 "query.c"
{
#line 5758 "query.c"
  {
#line 5760 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5763 "query.c"
    {
#line 5765 "query.c"
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5768 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5770 "query.c"
  }
#line 5772 "query.c"
}

#line 5775 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 5778 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5780 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5782 "query.c"
{
#line 5784 "query.c"
  {
#line 5786 "query.c"
    MR_bool query__succeeded;

#line 5789 "query.c"
    {
#line 5791 "query.c"
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5794 "query.c"
    return query__succeeded;
#line 5796 "query.c"
  }
#line 5798 "query.c"
}

#line 5801 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 5804 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5806 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5808 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5810 "query.c"
{
#line 5812 "query.c"
  {
#line 5814 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5817 "query.c"
    {
#line 5819 "query.c"
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5822 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5824 "query.c"
  }
#line 5826 "query.c"
}

#line 5829 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 5832 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5834 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5836 "query.c"
{
#line 5838 "query.c"
  {
#line 5840 "query.c"
    MR_bool query__succeeded;

#line 5843 "query.c"
    {
#line 5845 "query.c"
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5848 "query.c"
    return query__succeeded;
#line 5850 "query.c"
  }
#line 5852 "query.c"
}

#line 5855 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 5858 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5860 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5862 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5864 "query.c"
{
#line 5866 "query.c"
  {
#line 5868 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5871 "query.c"
    {
#line 5873 "query.c"
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5876 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5878 "query.c"
  }
#line 5880 "query.c"
}

#line 5883 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 5886 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5888 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5890 "query.c"
{
#line 5892 "query.c"
  {
#line 5894 "query.c"
    MR_bool query__succeeded;

#line 5897 "query.c"
    {
#line 5899 "query.c"
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5902 "query.c"
    return query__succeeded;
#line 5904 "query.c"
  }
#line 5906 "query.c"
}

#line 5909 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 5912 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5914 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5916 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5918 "query.c"
{
#line 5920 "query.c"
  {
#line 5922 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5925 "query.c"
    {
#line 5927 "query.c"
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5930 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5932 "query.c"
  }
#line 5934 "query.c"
}

#line 5937 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 5940 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5942 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5944 "query.c"
{
#line 5946 "query.c"
  {
#line 5948 "query.c"
    MR_bool query__succeeded;

#line 5951 "query.c"
    {
#line 5953 "query.c"
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5956 "query.c"
    return query__succeeded;
#line 5958 "query.c"
  }
#line 5960 "query.c"
}

#line 5963 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 5966 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5968 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5970 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5972 "query.c"
{
#line 5974 "query.c"
  {
#line 5976 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5979 "query.c"
    {
#line 5981 "query.c"
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5984 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5986 "query.c"
  }
#line 5988 "query.c"
}

#line 5991 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 5994 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5996 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5998 "query.c"
{
#line 6000 "query.c"
  {
#line 6002 "query.c"
    MR_bool query__succeeded;

#line 6005 "query.c"
    {
#line 6007 "query.c"
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 6010 "query.c"
    return query__succeeded;
#line 6012 "query.c"
  }
#line 6014 "query.c"
}

#line 6017 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 6020 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 6022 "query.c"
  MR_Box query__wrapper_arg_2,
#line 6024 "query.c"
  MR_Box query__wrapper_arg_3)
#line 6026 "query.c"
{
#line 6028 "query.c"
  {
#line 6030 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 6033 "query.c"
    {
#line 6035 "query.c"
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 6038 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 6040 "query.c"
  }
#line 6042 "query.c"
}

#line 6045 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 6048 "query.c"
  MR_Box query__wrapper_arg_1,
#line 6050 "query.c"
  MR_Box query__wrapper_arg_2)
#line 6052 "query.c"
{
#line 6054 "query.c"
  {
#line 6056 "query.c"
    MR_bool query__succeeded;

#line 6059 "query.c"
    {
#line 6061 "query.c"
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 6064 "query.c"
    return query__succeeded;
#line 6066 "query.c"
  }
#line 6068 "query.c"
}

#line 6071 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 6074 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 6076 "query.c"
  MR_Box query__wrapper_arg_2,
#line 6078 "query.c"
  MR_Box query__wrapper_arg_3)
#line 6080 "query.c"
{
#line 6082 "query.c"
  {
#line 6084 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 6087 "query.c"
    {
#line 6089 "query.c"
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 6092 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 6094 "query.c"
  }
#line 6096 "query.c"
}

#line 435 "query.m"
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

#line 435 "query.m"
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

#line 435 "query.m"
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

#line 435 "query.m"
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

#line 435 "query.m"
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

#line 435 "query.m"
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
#line 307 "query.m"
      return;
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
#line 6391 "query.c"
  {
#line 6393 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6396 "query.c"
    return query__succeeded;
#line 6398 "query.c"
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
#line 246 "query.m"
      return;
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
#line 6444 "query.c"
  {
#line 6446 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6449 "query.c"
    return query__succeeded;
#line 6451 "query.c"
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
#line 286 "query.m"
      return;
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
#line 6497 "query.c"
  {
#line 6499 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6502 "query.c"
    return query__succeeded;
#line 6504 "query.c"
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
#line 6533 "query.c"
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
#line 70 "query.m"
          return;
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

#line 6591 "query.c"
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
#line 6626 "query.c"
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
#line 6674 "query.c"
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
#line 6714 "query.c"
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
#line 6747 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
                    break;
#line 237 "query.m"
                  case (MR_Integer) 1:
#line 6753 "query.c"
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
#line 237 "query.m"
                    return;
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
#line 6881 "query.c"
                {
#line 6883 "query.c"
                  return query__succeeded = query____Unify____preferences_0_0(query__V_3_3, query__V_4_4);
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
#line 6925 "query.c"
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
#line 6987 "query.c"
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
#line 7011 "query.c"
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
#line 7035 "query.c"
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
#line 7055 "query.c"
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
#line 7075 "query.c"
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
#line 7099 "query.c"
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
#line 7119 "query.c"
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
#line 7143 "query.c"
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
#line 7167 "query.c"
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
#line 7191 "query.c"
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
#line 7211 "query.c"
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
#line 189 "query.m"
                                                      return;
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

#line 7343 "query.c"
        {
#line 7345 "query.c"
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
#line 189 "query.m"
        if (query__succeeded)
#line 189 "query.m"
          {
#line 7352 "query.c"
            query__succeeded = (query__V_4_4 == query__V_16_16);
#line 189 "query.m"
            if (query__succeeded)
#line 189 "query.m"
              {
#line 7358 "query.c"
                query__succeeded = (query__V_5_5 == query__V_17_17);
#line 189 "query.m"
                if (query__succeeded)
#line 189 "query.m"
                  {
#line 7364 "query.c"
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
#line 7366 "query.c"
                    {
#line 7368 "query.c"
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
#line 189 "query.m"
                    if (query__succeeded)
#line 189 "query.m"
                      {
#line 7375 "query.c"
                        query__succeeded = (query__V_7_7 == query__V_19_19);
#line 189 "query.m"
                        if (query__succeeded)
#line 189 "query.m"
                          {
#line 7381 "query.c"
                            query__succeeded = (query__V_8_8 == query__V_20_20);
#line 189 "query.m"
                            if (query__succeeded)
#line 189 "query.m"
                              {
#line 7387 "query.c"
                                {
#line 7389 "query.c"
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
#line 189 "query.m"
                                if (query__succeeded)
#line 189 "query.m"
                                  {
#line 7396 "query.c"
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
#line 189 "query.m"
                                    if (query__succeeded)
#line 189 "query.m"
                                      {
#line 7402 "query.c"
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
#line 189 "query.m"
                                        if (query__succeeded)
#line 189 "query.m"
                                          {
#line 7408 "query.c"
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
#line 189 "query.m"
                                            if (query__succeeded)
#line 189 "query.m"
                                              {
#line 7414 "query.c"
                                                {
#line 7416 "query.c"
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
#line 189 "query.m"
                                                if (query__succeeded)
#line 7421 "query.c"
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
#line 242 "query.m"
      return;
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
#line 7493 "query.c"
  {
#line 7495 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7498 "query.c"
    return query__succeeded;
#line 7500 "query.c"
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
#line 7529 "query.c"
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
#line 7577 "query.c"
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
#line 7617 "query.c"
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
#line 7654 "query.c"
                    *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
                    break;
#line 290 "query.m"
                  case (MR_Integer) 1:
#line 7660 "query.c"
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
#line 7690 "query.c"
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
#line 7714 "query.c"
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
#line 290 "query.m"
                            return;
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
#line 7860 "query.c"
                query__succeeded = (query__V_7_7 == query__V_10_10);
#line 290 "query.m"
                if (query__succeeded)
#line 290 "query.m"
                  {
#line 7866 "query.c"
                    query__succeeded = (query__V_8_8 == query__V_11_11);
#line 290 "query.m"
                    if (query__succeeded)
#line 7870 "query.c"
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
#line 312 "query.m"
      return;
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
#line 7930 "query.c"
  {
#line 7932 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7935 "query.c"
    return query__succeeded;
#line 7937 "query.c"
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
#line 7966 "query.c"
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
#line 7990 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
              break;
#line 264 "query.m"
            case (MR_Integer) 2:
#line 7996 "query.c"
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
#line 8018 "query.c"
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
#line 264 "query.m"
                    return;
                  }
#line 264 "query.m"
                }
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 2:
#line 8046 "query.c"
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
#line 8070 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
                break;
#line 264 "query.m"
              case (MR_Integer) 1:
#line 8076 "query.c"
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
#line 264 "query.m"
                    return;
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
#line 8178 "query.c"
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
#line 8203 "query.c"
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
#line 299 "query.m"
      return;
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
#line 8261 "query.c"
  {
#line 8263 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8266 "query.c"
    return query__succeeded;
#line 8268 "query.c"
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
#line 168 "query.m"
      return;
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
#line 8314 "query.c"
  {
#line 8316 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8319 "query.c"
    return query__succeeded;
#line 8321 "query.c"
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
#line 317 "query.m"
      return;
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
#line 8367 "query.c"
  {
#line 8369 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8372 "query.c"
    return query__succeeded;
#line 8374 "query.c"
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
#line 8403 "query.c"
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
#line 8433 "query.c"
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
#line 8457 "query.c"
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
#line 321 "query.m"
                  return;
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

#line 8533 "query.c"
        query__succeeded = (query__V_3_3 == query__V_6_6);
#line 321 "query.m"
        if (query__succeeded)
#line 321 "query.m"
          {
#line 8539 "query.c"
            query__succeeded = (query__V_4_4 == query__V_7_7);
#line 321 "query.m"
            if (query__succeeded)
#line 8543 "query.c"
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
#line 8580 "query.c"
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
#line 8618 "query.c"
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
#line 8642 "query.c"
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
#line 8666 "query.c"
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
#line 8690 "query.c"
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
#line 269 "query.m"
                        return;
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

#line 8769 "query.c"
        query__succeeded = (query__V_3_3 == query__V_8_8);
#line 269 "query.m"
        if (query__succeeded)
#line 269 "query.m"
          {
#line 8775 "query.c"
            query__succeeded = (query__V_4_4 == query__V_9_9);
#line 269 "query.m"
            if (query__succeeded)
#line 269 "query.m"
              {
#line 8781 "query.c"
                query__succeeded = (query__V_5_5 == query__V_10_10);
#line 269 "query.m"
                if (query__succeeded)
#line 269 "query.m"
                  {
#line 8787 "query.c"
                    query__succeeded = (query__V_6_6 == query__V_11_11);
#line 269 "query.m"
                    if (query__succeeded)
#line 8791 "query.c"
                      {
#line 8793 "query.c"
                        return query__succeeded = query____Unify____memory_fields_0_0(query__V_7_7, query__V_12_12);
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
#line 8835 "query.c"
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
#line 8874 "query.c"
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
#line 176 "query.m"
                      return;
                    }
#line 176 "query.m"
                }
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 1:
#line 8897 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 2:
#line 8903 "query.c"
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
#line 8927 "query.c"
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
#line 176 "query.m"
                    return;
                  }
#line 176 "query.m"
                }
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 2:
#line 8951 "query.c"
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
#line 8975 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
                break;
#line 176 "query.m"
              case (MR_Integer) 1:
#line 8981 "query.c"
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
#line 176 "query.m"
                    return;
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
#line 9070 "query.c"
                query__succeeded = (query__V_3_3 == query__V_5_5);
#line 176 "query.m"
                if (query__succeeded)
#line 9074 "query.c"
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
#line 9099 "query.c"
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
#line 9124 "query.c"
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
#line 328 "query.m"
      return;
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
#line 9182 "query.c"
  {
#line 9184 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9187 "query.c"
    return query__succeeded;
#line 9189 "query.c"
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
#line 172 "query.m"
      return;
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
#line 9235 "query.c"
  {
#line 9237 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9240 "query.c"
    return query__succeeded;
#line 9242 "query.c"
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
#line 9271 "query.c"
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
#line 9297 "query.c"
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
#line 9317 "query.c"
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
#line 47 "query.m"
                  return;
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

#line 9390 "query.c"
        {
#line 9392 "query.c"
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
#line 47 "query.m"
        if (query__succeeded)
#line 47 "query.m"
          {
#line 9399 "query.c"
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
#line 47 "query.m"
            if (query__succeeded)
#line 47 "query.m"
              {
#line 9405 "query.c"
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
#line 9407 "query.c"
                {
#line 9409 "query.c"
                  return query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_12_12, ((MR_Box) (query__V_5_5)), ((MR_Box) (query__V_8_8)));
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
#line 160 "query.m"
      return;
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
#line 9466 "query.c"
  {
#line 9468 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9471 "query.c"
    return query__succeeded;
#line 9473 "query.c"
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
#line 303 "query.m"
      return;
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
#line 9519 "query.c"
  {
#line 9521 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9524 "query.c"
    return query__succeeded;
#line 9526 "query.c"
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
#line 282 "query.m"
      return;
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
#line 9572 "query.c"
  {
#line 9574 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9577 "query.c"
    return query__succeeded;
#line 9579 "query.c"
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
#line 9608 "query.c"
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
#line 9633 "query.c"
          *query__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "query.m"
        else
#line 73 "query.m"
          {
#line 73 "query.m"
            query__succeeded = (query__V_4_4 > query__V_5_5);
#line 73 "query.m"
            if (query__succeeded)
#line 9643 "query.c"
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
#line 9777 "query.c"
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
#line 9969 "query.c"
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
#line 9993 "query.c"
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
#line 10013 "query.c"
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
#line 10033 "query.c"
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
#line 10203 "query.c"
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
#line 10227 "query.c"
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
#line 10251 "query.c"
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
#line 10649 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 0;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 1:
#line 10655 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 1;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 2:
#line 10661 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 3;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 3:
#line 10667 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 7;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 4:
#line 10673 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 10;
#line 73 "query.m"
            break;
#line 73 "query.m"
        }
#line 73 "query.m"
        break;
#line 73 "query.m"
      case (MR_Integer) 1:
#line 10683 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 2;
#line 73 "query.m"
        break;
#line 73 "query.m"
      case (MR_Integer) 2:
#line 10689 "query.c"
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
#line 10702 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 5;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 1:
#line 10708 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 6;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 2:
#line 10714 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 8;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 3:
#line 10720 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 9;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 4:
#line 10726 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 11;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 5:
#line 10732 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 12;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 6:
#line 10738 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 13;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 7:
#line 10744 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 14;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 8:
#line 10750 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 15;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 9:
#line 10756 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 16;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 10:
#line 10762 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 17;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 11:
#line 10768 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 18;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 12:
#line 10774 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 19;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 13:
#line 10780 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 20;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 14:
#line 10786 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 21;
#line 73 "query.m"
            break;
#line 73 "query.m"
          case (MR_Integer) 15:
#line 10792 "query.c"
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
#line 10941 "query.c"
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
#line 10968 "query.c"
                query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
#line 10970 "query.c"
                {
#line 10972 "query.c"
                  return query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_76_76, ((MR_Box) (query__V_11_11)), ((MR_Box) (query__V_12_12)));
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
#line 11009 "query.c"
                    query__V_80_80 = (MR_Integer) query__V_13_13;
#line 11011 "query.c"
                    query__V_81_81 = (MR_Integer) query__V_14_14;
#line 11013 "query.c"
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
#line 11042 "query.c"
                    query__V_82_82 = (MR_Integer) query__V_15_15;
#line 11044 "query.c"
                    query__V_83_83 = (MR_Integer) query__V_16_16;
#line 11046 "query.c"
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
#line 11075 "query.c"
                    query__V_96_96 = (MR_Integer) query__V_19_19;
#line 11077 "query.c"
                    query__V_97_97 = (MR_Integer) query__V_20_20;
#line 11079 "query.c"
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
#line 11132 "query.c"
                    query__succeeded = (query__V_22_22 == query__V_27_27);
#line 73 "query.m"
                    if (query__succeeded)
#line 73 "query.m"
                      {
#line 11138 "query.c"
                        query__succeeded = (query__V_23_23 == query__V_28_28);
#line 73 "query.m"
                        if (query__succeeded)
#line 73 "query.m"
                          {
#line 11144 "query.c"
                            query__succeeded = (query__V_24_24 == query__V_29_29);
#line 73 "query.m"
                            if (query__succeeded)
#line 73 "query.m"
                              {
#line 11150 "query.c"
                                query__succeeded = (query__V_25_25 == query__V_30_30);
#line 73 "query.m"
                                if (query__succeeded)
#line 73 "query.m"
                                  {
#line 11156 "query.c"
                                    query__V_98_98 = (MR_Integer) query__V_21_21;
#line 11158 "query.c"
                                    query__V_99_99 = (MR_Integer) query__V_26_26;
#line 11160 "query.c"
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
#line 11193 "query.c"
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
#line 11218 "query.c"
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
#line 11243 "query.c"
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
#line 11286 "query.c"
                    {
#line 11288 "query.c"
                      query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                    }
#line 73 "query.m"
                    if (query__succeeded)
#line 73 "query.m"
                      {
#line 11295 "query.c"
                        query__succeeded = (query__V_40_40 == query__V_44_44);
#line 73 "query.m"
                        if (query__succeeded)
#line 73 "query.m"
                          {
#line 11301 "query.c"
                            query__succeeded = (query__V_41_41 == query__V_45_45);
#line 73 "query.m"
                            if (query__succeeded)
#line 11305 "query.c"
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
#line 11338 "query.c"
                    query__V_100_100 = (MR_Integer) query__V_47_47;
#line 11340 "query.c"
                    query__V_101_101 = (MR_Integer) query__V_48_48;
#line 11342 "query.c"
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
#line 11371 "query.c"
                    query__V_94_94 = (MR_Integer) query__V_49_49;
#line 11373 "query.c"
                    query__V_95_95 = (MR_Integer) query__V_50_50;
#line 11375 "query.c"
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
#line 11404 "query.c"
                    query__V_92_92 = (MR_Integer) query__V_51_51;
#line 11406 "query.c"
                    query__V_93_93 = (MR_Integer) query__V_52_52;
#line 11408 "query.c"
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
#line 11437 "query.c"
                    query__V_90_90 = (MR_Integer) query__V_53_53;
#line 11439 "query.c"
                    query__V_91_91 = (MR_Integer) query__V_54_54;
#line 11441 "query.c"
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
#line 11470 "query.c"
                    query__V_86_86 = (MR_Integer) query__V_55_55;
#line 11472 "query.c"
                    query__V_87_87 = (MR_Integer) query__V_56_56;
#line 11474 "query.c"
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
#line 11503 "query.c"
                    query__V_84_84 = (MR_Integer) query__V_57_57;
#line 11505 "query.c"
                    query__V_85_85 = (MR_Integer) query__V_58_58;
#line 11507 "query.c"
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
#line 11536 "query.c"
                    query__V_88_88 = (MR_Integer) query__V_59_59;
#line 11538 "query.c"
                    query__V_89_89 = (MR_Integer) query__V_60_60;
#line 11540 "query.c"
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
#line 11569 "query.c"
                    query__V_78_78 = (MR_Integer) query__V_61_61;
#line 11571 "query.c"
                    query__V_79_79 = (MR_Integer) query__V_62_62;
#line 11573 "query.c"
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
#line 254 "query.m"
      return;
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
#line 11635 "query.c"
  {
#line 11637 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11640 "query.c"
    return query__succeeded;
#line 11642 "query.c"
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
#line 154 "query.m"
      return;
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
#line 11688 "query.c"
  {
#line 11690 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11693 "query.c"
    return query__succeeded;
#line 11695 "query.c"
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
#line 278 "query.m"
      return;
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
#line 11741 "query.c"
  {
#line 11743 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11746 "query.c"
    return query__succeeded;
#line 11748 "query.c"
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
#line 259 "query.m"
      return;
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
#line 11794 "query.c"
  {
#line 11796 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11799 "query.c"
    return query__succeeded;
#line 11801 "query.c"
  }
#line 259 "query.m"
}

#line 1366 "query.m"
static MR_String MR_CALL 
query__cmd_str_call_site_dynamic_var_use_0_f_0(void)
#line 1366 "query.m"
{
#line 1367 "query.m"
  {
#line 1367 "query.m"
    MR_bool query__succeeded;

#line 1367 "query.m"
    return (MR_String) "call_site_dynamic_var_use";
#line 1367 "query.m"
  }
#line 1366 "query.m"
}

#line 1363 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_raw_clique_0_f_0(void)
#line 1363 "query.m"
{
#line 1364 "query.m"
  {
#line 1364 "query.m"
    MR_bool query__succeeded;

#line 1364 "query.m"
    return (MR_String) "dump_raw_clique";
#line 1364 "query.m"
  }
#line 1363 "query.m"
}

#line 1360 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_dynamic_0_f_0(void)
#line 1360 "query.m"
{
#line 1361 "query.m"
  {
#line 1361 "query.m"
    MR_bool query__succeeded;

#line 1361 "query.m"
    return (MR_String) "dump_call_site_dynamic";
#line 1361 "query.m"
  }
#line 1360 "query.m"
}

#line 1357 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_call_site_static_0_f_0(void)
#line 1357 "query.m"
{
#line 1358 "query.m"
  {
#line 1358 "query.m"
    MR_bool query__succeeded;

#line 1358 "query.m"
    return (MR_String) "dump_call_site_static";
#line 1358 "query.m"
  }
#line 1357 "query.m"
}

#line 1354 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_dynamic_0_f_0(void)
#line 1354 "query.m"
{
#line 1355 "query.m"
  {
#line 1355 "query.m"
    MR_bool query__succeeded;

#line 1355 "query.m"
    return (MR_String) "dump_proc_dynamic";
#line 1355 "query.m"
  }
#line 1354 "query.m"
}

#line 1351 "query.m"
static MR_String MR_CALL 
query__cmd_str_dump_proc_static_0_f_0(void)
#line 1351 "query.m"
{
#line 1352 "query.m"
  {
#line 1352 "query.m"
    MR_bool query__succeeded;

#line 1352 "query.m"
    return (MR_String) "dump_proc_static";
#line 1352 "query.m"
  }
#line 1351 "query.m"
}

#line 1348 "query.m"
static MR_String MR_CALL 
query__cmd_str_dynamic_coverage_0_f_0(void)
#line 1348 "query.m"
{
#line 1349 "query.m"
  {
#line 1349 "query.m"
    MR_bool query__succeeded;

#line 1349 "query.m"
    return (MR_String) "proc_dynamic_coverage";
#line 1349 "query.m"
  }
#line 1348 "query.m"
}

#line 1345 "query.m"
static MR_String MR_CALL 
query__cmd_str_static_coverage_0_f_0(void)
#line 1345 "query.m"
{
#line 1346 "query.m"
  {
#line 1346 "query.m"
    MR_bool query__succeeded;

#line 1346 "query.m"
    return (MR_String) "proc_static_coverage";
#line 1346 "query.m"
  }
#line 1345 "query.m"
}

#line 1342 "query.m"
static MR_String MR_CALL 
query__cmd_str_top_procs_0_f_0(void)
#line 1342 "query.m"
{
#line 1343 "query.m"
  {
#line 1343 "query.m"
    MR_bool query__succeeded;

#line 1343 "query.m"
    return (MR_String) "top_procs";
#line 1343 "query.m"
  }
#line 1342 "query.m"
}

#line 1339 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_rep_0_f_0(void)
#line 1339 "query.m"
{
#line 1340 "query.m"
  {
#line 1340 "query.m"
    MR_bool query__succeeded;

#line 1340 "query.m"
    return (MR_String) "module_rep";
#line 1340 "query.m"
  }
#line 1339 "query.m"
}

#line 1336 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_getter_setters_0_f_0(void)
#line 1336 "query.m"
{
#line 1337 "query.m"
  {
#line 1337 "query.m"
    MR_bool query__succeeded;

#line 1337 "query.m"
    return (MR_String) "module_getter_setters";
#line 1337 "query.m"
  }
#line 1336 "query.m"
}

#line 1333 "query.m"
static MR_String MR_CALL 
query__cmd_str_module_0_f_0(void)
#line 1333 "query.m"
{
#line 1334 "query.m"
  {
#line 1334 "query.m"
    MR_bool query__succeeded;

#line 1334 "query.m"
    return (MR_String) "module";
#line 1334 "query.m"
  }
#line 1333 "query.m"
}

#line 1330 "query.m"
static MR_String MR_CALL 
query__cmd_str_program_modules_0_f_0(void)
#line 1330 "query.m"
{
#line 1331 "query.m"
  {
#line 1331 "query.m"
    MR_bool query__succeeded;

#line 1331 "query.m"
    return (MR_String) "program_modules";
#line 1331 "query.m"
  }
#line 1330 "query.m"
}

#line 1327 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_callers_0_f_0(void)
#line 1327 "query.m"
{
#line 1328 "query.m"
  {
#line 1328 "query.m"
    MR_bool query__succeeded;

#line 1328 "query.m"
    return (MR_String) "proc_callers";
#line 1328 "query.m"
  }
#line 1327 "query.m"
}

#line 1324 "query.m"
static MR_String MR_CALL 
query__cmd_str_proc_0_f_0(void)
#line 1324 "query.m"
{
#line 1325 "query.m"
  {
#line 1325 "query.m"
    MR_bool query__succeeded;

#line 1325 "query.m"
    return (MR_String) "proc";
#line 1325 "query.m"
  }
#line 1324 "query.m"
}

#line 1321 "query.m"
static MR_String MR_CALL 
query__cmd_str_recursion_types_frequency_0_f_0(void)
#line 1321 "query.m"
{
#line 1322 "query.m"
  {
#line 1322 "query.m"
    MR_bool query__succeeded;

#line 1322 "query.m"
    return (MR_String) "recursion_type_freq";
#line 1322 "query.m"
  }
#line 1321 "query.m"
}

#line 1318 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_recursive_costs_0_f_0(void)
#line 1318 "query.m"
{
#line 1319 "query.m"
  {
#line 1319 "query.m"
    MR_bool query__succeeded;

#line 1319 "query.m"
    return (MR_String) "clique_rc";
#line 1319 "query.m"
  }
#line 1318 "query.m"
}

#line 1315 "query.m"
static MR_String MR_CALL 
query__cmd_str_clique_0_f_0(void)
#line 1315 "query.m"
{
#line 1316 "query.m"
  {
#line 1316 "query.m"
    MR_bool query__succeeded;

#line 1316 "query.m"
    return (MR_String) "clique";
#line 1316 "query.m"
  }
#line 1315 "query.m"
}

#line 1312 "query.m"
static MR_String MR_CALL 
query__cmd_str_root_0_f_0(void)
#line 1312 "query.m"
{
#line 1313 "query.m"
  {
#line 1313 "query.m"
    MR_bool query__succeeded;

#line 1313 "query.m"
    return (MR_String) "root";
#line 1313 "query.m"
  }
#line 1312 "query.m"
}

#line 1309 "query.m"
static MR_String MR_CALL 
query__cmd_str_menu_0_f_0(void)
#line 1309 "query.m"
{
#line 1310 "query.m"
  {
#line 1310 "query.m"
    MR_bool query__succeeded;

#line 1310 "query.m"
    return (MR_String) "menu";
#line 1310 "query.m"
  }
#line 1309 "query.m"
}

#line 1306 "query.m"
static MR_String MR_CALL 
query__cmd_str_timeout_0_f_0(void)
#line 1306 "query.m"
{
#line 1307 "query.m"
  {
#line 1307 "query.m"
    MR_bool query__succeeded;

#line 1307 "query.m"
    return (MR_String) "timeout";
#line 1307 "query.m"
  }
#line 1306 "query.m"
}

#line 1303 "query.m"
static MR_String MR_CALL 
query__cmd_str_restart_0_f_0(void)
#line 1303 "query.m"
{
#line 1304 "query.m"
  {
#line 1304 "query.m"
    MR_bool query__succeeded;

#line 1304 "query.m"
    return (MR_String) "restart";
#line 1304 "query.m"
  }
#line 1303 "query.m"
}

#line 1300 "query.m"
static MR_String MR_CALL 
query__cmd_str_quit_0_f_0(void)
#line 1300 "query.m"
{
#line 1301 "query.m"
  {
#line 1301 "query.m"
    MR_bool query__succeeded;

#line 1301 "query.m"
    return (MR_String) "quit";
#line 1301 "query.m"
  }
#line 1300 "query.m"
}

#line 1286 "query.m"
static MR_String MR_CALL 
query__box_to_string_1_f_0(
#line 1286 "query.m"
  MR_Word query__Box_3)
#line 1286 "query.m"
{
#line 1295 "query.m"
  {
#line 1295 "query.m"
    MR_bool query__succeeded;
#line 1295 "query.m"
    MR_String query__String_4;

#line 1295 "query.m"
#line 1295 "query.m"
    switch (query__Box_3) {
#line 1295 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1295 "query.m"
      case (MR_Integer) 0:
#line 1295 "query.m"
        query__String_4 = (MR_String) "box";
#line 1295 "query.m"
        break;
#line 1295 "query.m"
      case (MR_Integer) 1:
#line 1296 "query.m"
        query__String_4 = (MR_String) "nobox";
#line 1295 "query.m"
        break;
#line 1295 "query.m"
    }
#line 1295 "query.m"
    return query__String_4;
#line 1295 "query.m"
  }
#line 1286 "query.m"
}

#line 1274 "query.m"
static MR_String MR_CALL 
query__colour_scheme_to_string_1_f_0(
#line 1274 "query.m"
  MR_Word query__Scheme_3)
#line 1274 "query.m"
{
#line 1283 "query.m"
  {
#line 1283 "query.m"
    MR_bool query__succeeded;
#line 1283 "query.m"
    MR_String query__String_4;

#line 1283 "query.m"
#line 1283 "query.m"
    switch (query__Scheme_3) {
#line 1283 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1283 "query.m"
      case (MR_Integer) 0:
#line 1283 "query.m"
        query__String_4 = (MR_String) "cols";
#line 1283 "query.m"
        break;
#line 1283 "query.m"
      case (MR_Integer) 1:
#line 1284 "query.m"
        query__String_4 = (MR_String) "none";
#line 1283 "query.m"
        break;
#line 1283 "query.m"
    }
#line 1283 "query.m"
    return query__String_4;
#line 1283 "query.m"
  }
#line 1274 "query.m"
}

#line 1262 "query.m"
static MR_String MR_CALL 
query__developer_mode_to_string_1_f_0(
#line 1262 "query.m"
  MR_Word query__DevMode_3)
#line 1262 "query.m"
{
#line 1271 "query.m"
  {
#line 1271 "query.m"
    MR_bool query__succeeded;
#line 1271 "query.m"
    MR_String query__String_4;

#line 1271 "query.m"
#line 1271 "query.m"
    switch (query__DevMode_3) {
#line 1271 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1271 "query.m"
      case (MR_Integer) 1:
#line 1272 "query.m"
        query__String_4 = (MR_String) "nodev";
#line 1271 "query.m"
        break;
#line 1271 "query.m"
      case (MR_Integer) 0:
#line 1271 "query.m"
        query__String_4 = (MR_String) "dev";
#line 1271 "query.m"
        break;
#line 1271 "query.m"
    }
#line 1271 "query.m"
    return query__String_4;
#line 1271 "query.m"
  }
#line 1262 "query.m"
}

#line 1242 "query.m"
static MR_bool MR_CALL 
query__string_to_inactive_items_2_p_0(
#line 1242 "query.m"
  MR_String query__HeadVar__1_1,
#line 1242 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1242 "query.m"
{
#line 1245 "query.m"
  {
#line 1245 "query.m"
    MR_bool query__succeeded;
#line 1245 "query.m"
    MR_Integer query__slot_0;
#line 1245 "query.m"
    MR_String query__str_1;

#line 1245 "query.m"
    /* hashed string simple lookup switch */
#line 1245 "query.m"
    /* compute the hash value of the input string */
#line 1245 "query.m"
    query__slot_0 = ((MR_hash_string5(query__HeadVar__1_1)) & (MR_Integer) 15);
#line 1245 "query.m"
    /* no collisions; no hash chain loop */
#line 1245 "query.m"
    /* lookup the string for this hash slot */
#line 1245 "query.m"
    query__str_1 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_0;
#line 1245 "query.m"
    /* did we find a match? */
#line 1245 "query.m"
    if ((((query__str_1 != NULL)) && ((strcmp(query__str_1, query__HeadVar__1_1) == 0))))
#line 1245 "query.m"
      {
#line 1245 "query.m"
        /* we found a match; look up the results */
#line 1245 "query.m"
        *query__HeadVar__2_2 = ((&query_vector_common_9[0 + query__slot_0]))->query__vector_common_type_9_0__vct_9_f_1;
#line 1245 "query.m"
        query__succeeded = MR_TRUE;
#line 1245 "query.m"
        /* jump out of search loop */
#line 1245 "query.m"
        goto label_0;
#line 1245 "query.m"
      }
#line 1245 "query.m"
    query__succeeded = MR_FALSE;
#line 1245 "query.m"
  label_0:;
#line 1245 "query.m"
    return query__succeeded;
#line 1245 "query.m"
  }
#line 1242 "query.m"
}

#line 1236 "query.m"
static MR_String MR_CALL 
query__inactive_items_to_string_1_f_0(
#line 1236 "query.m"
  MR_Word query__Items_3)
#line 1236 "query.m"
{
#line 1245 "query.m"
  {
#line 1245 "query.m"
    MR_bool query__succeeded;
#line 1245 "query.m"
    MR_String query__String_4;
#line 1245 "query.m"
    MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1245 "query.m"
    MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1245 "query.m"
    MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Items_3, (MR_Integer) 0)))) & (MR_Integer) 1);

#line 1245 "query.m"
#line 1245 "query.m"
    switch (query__V_29_29) {
#line 1245 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
      case (MR_Integer) 0:
#line 1245 "query.m"
#line 1245 "query.m"
        switch (query__V_30_30) {
#line 1245 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
          case (MR_Integer) 0:
#line 1245 "query.m"
#line 1245 "query.m"
            switch (query__V_31_31) {
#line 1245 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
              case (MR_Integer) 0:
#line 1245 "query.m"
                query__String_4 = (MR_String) "hhh";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
              case (MR_Integer) 1:
#line 1253 "query.m"
                query__String_4 = (MR_String) "shh";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
            }
#line 1245 "query.m"
            break;
#line 1245 "query.m"
          case (MR_Integer) 1:
#line 1245 "query.m"
#line 1245 "query.m"
            switch (query__V_31_31) {
#line 1245 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
              case (MR_Integer) 0:
#line 1249 "query.m"
                query__String_4 = (MR_String) "hsh";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
              case (MR_Integer) 1:
#line 1257 "query.m"
                query__String_4 = (MR_String) "ssh";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
            }
#line 1245 "query.m"
            break;
#line 1245 "query.m"
        }
#line 1245 "query.m"
        break;
#line 1245 "query.m"
      case (MR_Integer) 1:
#line 1245 "query.m"
#line 1245 "query.m"
        switch (query__V_30_30) {
#line 1245 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
          case (MR_Integer) 0:
#line 1245 "query.m"
#line 1245 "query.m"
            switch (query__V_31_31) {
#line 1245 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
              case (MR_Integer) 0:
#line 1247 "query.m"
                query__String_4 = (MR_String) "hhs";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
              case (MR_Integer) 1:
#line 1255 "query.m"
                query__String_4 = (MR_String) "shs";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
            }
#line 1245 "query.m"
            break;
#line 1245 "query.m"
          case (MR_Integer) 1:
#line 1245 "query.m"
#line 1245 "query.m"
            switch (query__V_31_31) {
#line 1245 "query.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "query.m"
              case (MR_Integer) 0:
#line 1251 "query.m"
                query__String_4 = (MR_String) "hss";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
              case (MR_Integer) 1:
#line 1259 "query.m"
                query__String_4 = (MR_String) "sss";
#line 1245 "query.m"
                break;
#line 1245 "query.m"
            }
#line 1245 "query.m"
            break;
#line 1245 "query.m"
        }
#line 1245 "query.m"
        break;
#line 1245 "query.m"
    }
#line 1245 "query.m"
    return query__String_4;
#line 1245 "query.m"
  }
#line 1236 "query.m"
}

#line 1222 "query.m"
static MR_String MR_CALL 
query__time_format_to_string_1_f_0(
#line 1222 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1222 "query.m"
{
#line 1224 "query.m"
  {
#line 1224 "query.m"
    MR_bool query__succeeded;
#line 1224 "query.m"
    MR_String query__HeadVar__2_2;

#line 1224 "query.m"
#line 1224 "query.m"
    switch (query__HeadVar__1_1) {
#line 1224 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1224 "query.m"
      case (MR_Integer) 0:
#line 1224 "query.m"
        query__HeadVar__2_2 = (MR_String) "no";
#line 1224 "query.m"
        break;
#line 1224 "query.m"
      case (MR_Integer) 1:
#line 1225 "query.m"
        query__HeadVar__2_2 = (MR_String) "mi";
#line 1224 "query.m"
        break;
#line 1224 "query.m"
      case (MR_Integer) 2:
#line 1226 "query.m"
        query__HeadVar__2_2 = (MR_String) "th";
#line 1224 "query.m"
        break;
#line 1224 "query.m"
    }
#line 1224 "query.m"
    return query__HeadVar__2_2;
#line 1224 "query.m"
  }
#line 1222 "query.m"
}

#line 1216 "query.m"
static MR_bool MR_CALL 
query__string_to_contour_exclusion_2_p_0(
#line 1216 "query.m"
  MR_String query__HeadVar__1_1,
#line 1216 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1216 "query.m"
{
#line 1219 "query.m"
  {
#line 1219 "query.m"
    MR_bool query__succeeded;

#line 1219 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "ac") == 0))
#line 1219 "query.m"
      {
#line 1219 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1219 "query.m"
        query__succeeded = MR_TRUE;
#line 1219 "query.m"
      }
#line 1219 "query.m"
    else
#line 1219 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "nc") == 0))
#line 1220 "query.m"
      {
#line 1220 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1220 "query.m"
        query__succeeded = MR_TRUE;
#line 1220 "query.m"
      }
#line 1219 "query.m"
    else
#line 1219 "query.m"
      query__succeeded = MR_FALSE;
#line 1219 "query.m"
    return query__succeeded;
#line 1219 "query.m"
  }
#line 1216 "query.m"
}

#line 1210 "query.m"
static MR_String MR_CALL 
query__contour_exclusion_to_string_1_f_0(
#line 1210 "query.m"
  MR_Word query__Contour_3)
#line 1210 "query.m"
{
#line 1219 "query.m"
  {
#line 1219 "query.m"
    MR_bool query__succeeded;
#line 1219 "query.m"
    MR_String query__String_4;

#line 1219 "query.m"
#line 1219 "query.m"
    switch (query__Contour_3) {
#line 1219 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1219 "query.m"
      case (MR_Integer) 0:
#line 1219 "query.m"
        query__String_4 = (MR_String) "ac";
#line 1219 "query.m"
        break;
#line 1219 "query.m"
      case (MR_Integer) 1:
#line 1220 "query.m"
        query__String_4 = (MR_String) "nc";
#line 1219 "query.m"
        break;
#line 1219 "query.m"
    }
#line 1219 "query.m"
    return query__String_4;
#line 1219 "query.m"
  }
#line 1210 "query.m"
}

#line 1204 "query.m"
static MR_bool MR_CALL 
query__string_to_scope_2_p_0(
#line 1204 "query.m"
  MR_String query__HeadVar__1_1,
#line 1204 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1204 "query.m"
{
#line 1207 "query.m"
  {
#line 1207 "query.m"
    MR_bool query__succeeded;

#line 1207 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "oa") == 0))
#line 1208 "query.m"
      {
#line 1208 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1208 "query.m"
        query__succeeded = MR_TRUE;
#line 1208 "query.m"
      }
#line 1207 "query.m"
    else
#line 1207 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "pc") == 0))
#line 1207 "query.m"
      {
#line 1207 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1207 "query.m"
        query__succeeded = MR_TRUE;
#line 1207 "query.m"
      }
#line 1207 "query.m"
    else
#line 1207 "query.m"
      query__succeeded = MR_FALSE;
#line 1207 "query.m"
    return query__succeeded;
#line 1207 "query.m"
  }
#line 1204 "query.m"
}

#line 1198 "query.m"
static MR_String MR_CALL 
query__scope_to_string_1_f_0(
#line 1198 "query.m"
  MR_Word query__Scope_3)
#line 1198 "query.m"
{
#line 1207 "query.m"
  {
#line 1207 "query.m"
    MR_bool query__succeeded;
#line 1207 "query.m"
    MR_String query__String_4;

#line 1207 "query.m"
#line 1207 "query.m"
    switch (query__Scope_3) {
#line 1207 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1207 "query.m"
      case (MR_Integer) 1:
#line 1208 "query.m"
        query__String_4 = (MR_String) "oa";
#line 1207 "query.m"
        break;
#line 1207 "query.m"
      case (MR_Integer) 0:
#line 1207 "query.m"
        query__String_4 = (MR_String) "pc";
#line 1207 "query.m"
        break;
#line 1207 "query.m"
    }
#line 1207 "query.m"
    return query__String_4;
#line 1207 "query.m"
  }
#line 1198 "query.m"
}

#line 1162 "query.m"
static MR_String MR_CALL 
query__order_criteria_to_string_1_f_0(
#line 1162 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1162 "query.m"
{
#line 1164 "query.m"
  {
#line 1164 "query.m"
    MR_bool query__succeeded;
#line 1164 "query.m"
    MR_String query__HeadVar__2_2;

#line 1164 "query.m"
#line 1164 "query.m"
    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 1164 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1164 "query.m"
      case (MR_Integer) 0:
#line 1164 "query.m"
#line 1164 "query.m"
        switch (MR_unmkbody(query__HeadVar__1_1)) {
#line 1164 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1164 "query.m"
          case (MR_Integer) 0:
#line 1164 "query.m"
            query__HeadVar__2_2 = (MR_String) "context";
#line 1164 "query.m"
            break;
#line 1164 "query.m"
          case (MR_Integer) 1:
#line 1165 "query.m"
            query__HeadVar__2_2 = (MR_String) "name";
#line 1164 "query.m"
            break;
#line 1164 "query.m"
        }
#line 1164 "query.m"
        break;
#line 1164 "query.m"
      case (MR_Integer) 1:
#line 1166 "query.m"
        {
#line 1166 "query.m"
          MR_Word query__CostKind_3 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 1166 "query.m"
          MR_Word query__InclDesc_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1166 "query.m"
          MR_Word query__Scope_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1166 "query.m"
          MR_String query__V_7_7;
#line 1166 "query.m"
          MR_String query__V_8_8;
#line 1166 "query.m"
          MR_String query__V_10_10;
#line 1166 "query.m"
          MR_String query__V_11_11;
#line 1166 "query.m"
          MR_String query__V_12_12;
#line 1166 "query.m"
          MR_String query__V_13_13;
#line 1166 "query.m"
          MR_String query__V_15_15;
#line 1166 "query.m"
          MR_String query__V_16_16;
#line 1166 "query.m"
          MR_String query__V_17_17;
#line 1166 "query.m"
          MR_String query__V_18_18;
#line 1166 "query.m"
          MR_String query__V_20_20;

#line 1168 "query.m"
          {
#line 1168 "query.m"
            query__V_8_8 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1087 "query.m"
          query__V_11_11 = ((&query_vector_common_7[16 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;
#line 1170 "query.m"
          {
#line 1170 "query.m"
            query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1103 "query.m"
#line 1103 "query.m"
          switch (query__InclDesc_4) {
#line 1103 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "query.m"
            case (MR_Integer) 0:
#line 1103 "query.m"
              query__V_16_16 = (MR_String) "self";
#line 1103 "query.m"
              break;
#line 1103 "query.m"
            case (MR_Integer) 1:
#line 1104 "query.m"
              query__V_16_16 = (MR_String) "both";
#line 1103 "query.m"
              break;
#line 1103 "query.m"
          }
#line 1172 "query.m"
          {
#line 1172 "query.m"
            query__V_18_18 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1207 "query.m"
#line 1207 "query.m"
          switch (query__Scope_5) {
#line 1207 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1207 "query.m"
            case (MR_Integer) 1:
#line 1208 "query.m"
              query__V_20_20 = (MR_String) "oa";
#line 1207 "query.m"
              break;
#line 1207 "query.m"
            case (MR_Integer) 0:
#line 1207 "query.m"
              query__V_20_20 = (MR_String) "pc";
#line 1207 "query.m"
              break;
#line 1207 "query.m"
          }
#line 1172 "query.m"
          {
#line 1172 "query.m"
            query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_20_20);
          }
#line 1171 "query.m"
          {
#line 1171 "query.m"
            query__V_15_15 = mercury__string__f_43_43_2_f_0(query__V_16_16, query__V_17_17);
          }
#line 1170 "query.m"
          {
#line 1170 "query.m"
            query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
          }
#line 1169 "query.m"
          {
#line 1169 "query.m"
            query__V_10_10 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
          }
#line 1168 "query.m"
          {
#line 1168 "query.m"
            query__V_7_7 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_10_10);
          }
#line 1167 "query.m"
          {
#line 1167 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cost", query__V_7_7);
          }
#line 1166 "query.m"
        }
#line 1164 "query.m"
        break;
#line 1164 "query.m"
    }
#line 1164 "query.m"
    return query__HeadVar__2_2;
#line 1164 "query.m"
  }
#line 1162 "query.m"
}

#line 1150 "query.m"
static MR_String MR_CALL 
query__module_qual_to_string_1_f_0(
#line 1150 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1150 "query.m"
{
#line 1152 "query.m"
  {
#line 1152 "query.m"
    MR_bool query__succeeded;
#line 1152 "query.m"
    MR_String query__HeadVar__2_2;

#line 1152 "query.m"
#line 1152 "query.m"
    switch (query__HeadVar__1_1) {
#line 1152 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1152 "query.m"
      case (MR_Integer) 0:
#line 1152 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqa";
#line 1152 "query.m"
        break;
#line 1152 "query.m"
      case (MR_Integer) 2:
#line 1154 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqn";
#line 1152 "query.m"
        break;
#line 1152 "query.m"
      case (MR_Integer) 1:
#line 1153 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqwd";
#line 1152 "query.m"
        break;
#line 1152 "query.m"
    }
#line 1152 "query.m"
    return query__HeadVar__2_2;
#line 1152 "query.m"
  }
#line 1150 "query.m"
}

#line 1139 "query.m"
static MR_String MR_CALL 
query__summarize_to_string_1_f_0(
#line 1139 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1139 "query.m"
{
#line 1141 "query.m"
  {
#line 1141 "query.m"
    MR_bool query__succeeded;
#line 1141 "query.m"
    MR_String query__HeadVar__2_2;

#line 1141 "query.m"
#line 1141 "query.m"
    switch (query__HeadVar__1_1) {
#line 1141 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "query.m"
      case (MR_Integer) 1:
#line 1142 "query.m"
        query__HeadVar__2_2 = (MR_String) "nosum";
#line 1141 "query.m"
        break;
#line 1141 "query.m"
      case (MR_Integer) 0:
#line 1141 "query.m"
        query__HeadVar__2_2 = (MR_String) "sum";
#line 1141 "query.m"
        break;
#line 1141 "query.m"
    }
#line 1141 "query.m"
    return query__HeadVar__2_2;
#line 1141 "query.m"
  }
#line 1139 "query.m"
}

#line 1115 "query.m"
static MR_bool MR_CALL 
query__string_to_limit_2_p_0(
#line 1115 "query.m"
  MR_String query__LimitStr_3,
#line 1115 "query.m"
  MR_Word * query__Limit_4)
#line 1115 "query.m"
{
#line 1125 "query.m"
  {
#line 1125 "query.m"
    MR_bool query__succeeded;
#line 1125 "query.m"
    MR_Integer query__First_8;
#line 1125 "query.m"
    MR_Integer query__Last_9;
#line 1119 "query.m"
    MR_Word query__Pieces_5;
#line 1119 "query.m"
    MR_String query__FirstStr_6;
#line 1119 "query.m"
    MR_String query__LastStr_7;
#line 1119 "query.m"
    MR_Word query__V_15_15;
#line 1119 "query.m"
    MR_Word query__V_16_16;

#line 1119 "query.m"
    {
#line 1119 "query.m"
      util__split_3_p_0(query__LimitStr_3, (MR_Char) 45, &query__Pieces_5);
    }
#line 1120 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 1120 "query.m"
    if (query__succeeded)
#line 1120 "query.m"
      {
#line 1120 "query.m"
        query__FirstStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 1120 "query.m"
        query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 1120 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1120 "query.m"
        if (query__succeeded)
#line 1120 "query.m"
          {
#line 1120 "query.m"
            query__LastStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 0)));
#line 1120 "query.m"
            query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_15_15, (MR_Integer) 1)));
#line 1120 "query.m"
            query__succeeded = (query__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1119 "query.m"
            if (query__succeeded)
#line 1119 "query.m"
              {
#line 1121 "query.m"
                {
#line 1121 "query.m"
                  query__succeeded = mercury__string__to_int_2_p_0(query__FirstStr_6, &query__First_8);
                }
#line 1119 "query.m"
                if (query__succeeded)
#line 1122 "query.m"
                  {
#line 1122 "query.m"
                    query__succeeded = mercury__string__to_int_2_p_0(query__LastStr_7, &query__Last_9);
                  }
#line 1119 "query.m"
              }
#line 1120 "query.m"
          }
#line 1120 "query.m"
      }
#line 1125 "query.m"
    if (query__succeeded)
#line 1124 "query.m"
      {
#line 1124 "query.m"
        {
#line 1124 "query.m"
          MR_Word base;
#line 1124 "query.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1124 "query.m"
          *query__Limit_4 = base;
#line 1124 "query.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (query__First_8));
#line 1124 "query.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (query__Last_9));
#line 1124 "query.m"
        }
#line 1124 "query.m"
        query__succeeded = MR_TRUE;
#line 1124 "query.m"
      }
#line 1125 "query.m"
    else
#line 1130 "query.m"
      {
#line 1130 "query.m"
        MR_Float query__Threshold_11;
#line 1126 "query.m"
        MR_String query__PercentStr_10;

#line 1126 "query.m"
        {
#line 1126 "query.m"
          query__succeeded = mercury__string__append_3_p_1((MR_String) "p", &query__PercentStr_10, query__LimitStr_3);
        }
#line 1126 "query.m"
        if (query__succeeded)
#line 1127 "query.m"
          {
#line 1127 "query.m"
            query__succeeded = mercury__string__to_float_2_p_0(query__PercentStr_10, &query__Threshold_11);
          }
#line 1130 "query.m"
        if (query__succeeded)
#line 1129 "query.m"
          {
#line 1129 "query.m"
            {
#line 1129 "query.m"
              MR_Word base;
#line 1129 "query.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "query.m"
              *query__Limit_4 = base;
#line 1129 "query.m"
              MR_hl_field(MR_mktag(1), base, 0) = MR_box_float(query__Threshold_11);
#line 1129 "query.m"
            }
#line 1129 "query.m"
            query__succeeded = MR_TRUE;
#line 1129 "query.m"
          }
#line 1130 "query.m"
        else
#line 1135 "query.m"
          {
#line 1135 "query.m"
            MR_String query__ValueStr_12;
#line 1135 "query.m"
            MR_Float query__Value_13;

#line 1131 "query.m"
            {
#line 1131 "query.m"
              query__succeeded = mercury__string__append_3_p_1((MR_String) "v", &query__ValueStr_12, query__LimitStr_3);
            }
#line 1135 "query.m"
            if (query__succeeded)
#line 1135 "query.m"
              {
#line 1132 "query.m"
                {
#line 1132 "query.m"
                  query__succeeded = mercury__string__to_float_2_p_0(query__ValueStr_12, &query__Value_13);
                }
#line 1135 "query.m"
                if (query__succeeded)
#line 1135 "query.m"
                  {
#line 1134 "query.m"
                    {
#line 1134 "query.m"
                      MR_Word base;
#line 1134 "query.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "query.m"
                      *query__Limit_4 = base;
#line 1134 "query.m"
                      MR_hl_field(MR_mktag(2), base, 0) = MR_box_float(query__Value_13);
#line 1134 "query.m"
                    }
#line 1134 "query.m"
                    query__succeeded = MR_TRUE;
#line 1135 "query.m"
                  }
#line 1135 "query.m"
              }
#line 1135 "query.m"
          }
#line 1130 "query.m"
      }
#line 1125 "query.m"
    return query__succeeded;
#line 1125 "query.m"
  }
#line 1115 "query.m"
}

#line 1106 "query.m"
static MR_String MR_CALL 
query__limit_to_string_1_f_0(
#line 1106 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1106 "query.m"
{
#line 1108 "query.m"
  {
#line 1108 "query.m"
    MR_bool query__succeeded;
#line 1108 "query.m"
    MR_String query__HeadVar__2_2;

#line 1108 "query.m"
#line 1108 "query.m"
    switch (MR_tag((MR_Word) query__HeadVar__1_1)) {
#line 1108 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "query.m"
      case (MR_Integer) 0:
#line 1108 "query.m"
        {
#line 1108 "query.m"
          MR_Integer query__Lo_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1108 "query.m"
          MR_Integer query__Hi_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "query.m"
          MR_String query__V_42_42;
#line 1108 "query.m"
          MR_Word query__V_48_48 = (MR_Word) &query_scalar_common_2[1];
#line 1108 "query.m"
          MR_String query__V_49_49;
#line 1108 "query.m"
          MR_String query__V_56_56;
#line 1108 "query.m"
          MR_String query__V_57_57;

#line 1109 "query.m"
          {
#line 1109 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Hi_4, &query__V_42_42);
          }
#line 1109 "query.m"
          {
#line 1109 "query.m"
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_48_48, (MR_Char) 45, &query__V_49_49);
          }
#line 1109 "query.m"
          {
#line 1109 "query.m"
            query__V_56_56 = mercury__string__f_43_43_2_f_0(query__V_49_49, query__V_42_42);
          }
#line 1109 "query.m"
          {
#line 1109 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_48_48, query__Lo_3, &query__V_57_57);
          }
#line 1109 "query.m"
          {
#line 1109 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_56_56);
          }
#line 1108 "query.m"
        }
#line 1108 "query.m"
        break;
#line 1108 "query.m"
      case (MR_Integer) 1:
#line 1110 "query.m"
        {
#line 1110 "query.m"
          MR_Float query__Threshold_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "query.m"
          MR_String query__V_33_33;

#line 1111 "query.m"
          {
#line 1111 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Threshold_14, &query__V_33_33);
          }
#line 1111 "query.m"
          {
#line 1111 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "p", query__V_33_33);
          }
#line 1110 "query.m"
        }
#line 1108 "query.m"
        break;
#line 1108 "query.m"
      case (MR_Integer) 2:
#line 1112 "query.m"
        {
#line 1112 "query.m"
          MR_Float query__Value_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "query.m"
          MR_String query__V_24_24;

#line 1113 "query.m"
          {
#line 1113 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Value_19, &query__V_24_24);
          }
#line 1113 "query.m"
          {
#line 1113 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "v", query__V_24_24);
          }
#line 1112 "query.m"
        }
#line 1108 "query.m"
        break;
#line 1108 "query.m"
    }
#line 1108 "query.m"
    return query__HeadVar__2_2;
#line 1108 "query.m"
  }
#line 1106 "query.m"
}

#line 1100 "query.m"
static MR_bool MR_CALL 
query__string_to_incl_desc_2_p_0(
#line 1100 "query.m"
  MR_String query__HeadVar__1_1,
#line 1100 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1100 "query.m"
{
#line 1103 "query.m"
  {
#line 1103 "query.m"
    MR_bool query__succeeded;

#line 1103 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "both") == 0))
#line 1104 "query.m"
      {
#line 1104 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1104 "query.m"
        query__succeeded = MR_TRUE;
#line 1104 "query.m"
      }
#line 1103 "query.m"
    else
#line 1103 "query.m"
    if ((strcmp(query__HeadVar__1_1, (MR_String) "self") == 0))
#line 1103 "query.m"
      {
#line 1103 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1103 "query.m"
        query__succeeded = MR_TRUE;
#line 1103 "query.m"
      }
#line 1103 "query.m"
    else
#line 1103 "query.m"
      query__succeeded = MR_FALSE;
#line 1103 "query.m"
    return query__succeeded;
#line 1103 "query.m"
  }
#line 1100 "query.m"
}

#line 1094 "query.m"
static MR_String MR_CALL 
query__incl_desc_to_string_1_f_0(
#line 1094 "query.m"
  MR_Word query__InclDesc_3)
#line 1094 "query.m"
{
#line 1103 "query.m"
  {
#line 1103 "query.m"
    MR_bool query__succeeded;
#line 1103 "query.m"
    MR_String query__String_4;

#line 1103 "query.m"
#line 1103 "query.m"
    switch (query__InclDesc_3) {
#line 1103 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "query.m"
      case (MR_Integer) 0:
#line 1103 "query.m"
        query__String_4 = (MR_String) "self";
#line 1103 "query.m"
        break;
#line 1103 "query.m"
      case (MR_Integer) 1:
#line 1104 "query.m"
        query__String_4 = (MR_String) "both";
#line 1103 "query.m"
        break;
#line 1103 "query.m"
    }
#line 1103 "query.m"
    return query__String_4;
#line 1103 "query.m"
  }
#line 1094 "query.m"
}

#line 1084 "query.m"
static MR_bool MR_CALL 
query__string_to_cost_kind_2_p_0(
#line 1084 "query.m"
  MR_String query__HeadVar__1_1,
#line 1084 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1084 "query.m"
{
#line 1087 "query.m"
  {
#line 1087 "query.m"
    MR_bool query__succeeded;
#line 1087 "query.m"
    MR_Integer query__lo_0;
#line 1087 "query.m"
    MR_Integer query__hi_1;
#line 1087 "query.m"
    MR_Integer query__mid_2;
#line 1087 "query.m"
    MR_Integer query__result_3;

#line 1087 "query.m"
    /* binary string simple lookup switch */
#line 1087 "query.m"
    query__lo_0 = (MR_Integer) 0;
#line 1087 "query.m"
    query__hi_1 = (MR_Integer) 5;
#line 1087 "query.m"
    do
#line 1087 "query.m"
      {
#line 1087 "query.m"
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 1087 "query.m"
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_0);
#line 1087 "query.m"
        if ((query__result_3 == (MR_Integer) 0))
#line 1087 "query.m"
          {
#line 1087 "query.m"
            *query__HeadVar__2_2 = ((&query_vector_common_6[6 + query__mid_2]))->query__vector_common_type_6_0__vct_6_f_1;
#line 1087 "query.m"
            query__succeeded = MR_TRUE;
#line 1087 "query.m"
            /* jump out of search loop */
#line 1087 "query.m"
            goto label_0;
#line 1087 "query.m"
          }
#line 1087 "query.m"
        else
#line 1087 "query.m"
        if ((query__result_3 < (MR_Integer) 0))
#line 1087 "query.m"
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 1087 "query.m"
        else
#line 1087 "query.m"
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 1087 "query.m"
      }
#line 1087 "query.m"
    while ((query__lo_0 <= query__hi_1));
#line 1087 "query.m"
    query__succeeded = MR_FALSE;
#line 1087 "query.m"
  label_0:;
#line 1087 "query.m"
    return query__succeeded;
#line 1087 "query.m"
  }
#line 1084 "query.m"
}

#line 1078 "query.m"
static MR_String MR_CALL 
query__cost_kind_to_string_1_f_0(
#line 1078 "query.m"
  MR_Word query__CostKind_3)
#line 1078 "query.m"
{
#line 1087 "query.m"
  {
#line 1087 "query.m"
    MR_bool query__succeeded;
#line 1087 "query.m"
    MR_String query__String_4 = ((&query_vector_common_7[10 + query__CostKind_3]))->query__vector_common_type_7_0__vct_7_f_0;

#line 1087 "query.m"
    return query__String_4;
#line 1087 "query.m"
  }
#line 1078 "query.m"
}

#line 1070 "query.m"
static MR_bool MR_CALL 
query__string_to_caller_groups_2_p_0(
#line 1070 "query.m"
  MR_String query__HeadVar__1_1,
#line 1070 "query.m"
  MR_Word * query__HeadVar__2_2)
#line 1070 "query.m"
{
#line 1073 "query.m"
  {
#line 1073 "query.m"
    MR_bool query__succeeded;
#line 1073 "query.m"
    MR_Integer query__lo_0;
#line 1073 "query.m"
    MR_Integer query__hi_1;
#line 1073 "query.m"
    MR_Integer query__mid_2;
#line 1073 "query.m"
    MR_Integer query__result_3;

#line 1073 "query.m"
    /* binary string simple lookup switch */
#line 1073 "query.m"
    query__lo_0 = (MR_Integer) 0;
#line 1073 "query.m"
    query__hi_1 = (MR_Integer) 3;
#line 1073 "query.m"
    do
#line 1073 "query.m"
      {
#line 1073 "query.m"
        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 1073 "query.m"
        query__result_3 = MR_strcmp(query__HeadVar__1_1, ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_0);
#line 1073 "query.m"
        if ((query__result_3 == (MR_Integer) 0))
#line 1073 "query.m"
          {
#line 1073 "query.m"
            *query__HeadVar__2_2 = ((&query_vector_common_8[0 + query__mid_2]))->query__vector_common_type_8_0__vct_8_f_1;
#line 1073 "query.m"
            query__succeeded = MR_TRUE;
#line 1073 "query.m"
            /* jump out of search loop */
#line 1073 "query.m"
            goto label_0;
#line 1073 "query.m"
          }
#line 1073 "query.m"
        else
#line 1073 "query.m"
        if ((query__result_3 < (MR_Integer) 0))
#line 1073 "query.m"
          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 1073 "query.m"
        else
#line 1073 "query.m"
          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 1073 "query.m"
      }
#line 1073 "query.m"
    while ((query__lo_0 <= query__hi_1));
#line 1073 "query.m"
    query__succeeded = MR_FALSE;
#line 1073 "query.m"
  label_0:;
#line 1073 "query.m"
    return query__succeeded;
#line 1073 "query.m"
  }
#line 1070 "query.m"
}

#line 1064 "query.m"
static MR_String MR_CALL 
query__caller_groups_to_string_1_f_0(
#line 1064 "query.m"
  MR_Word query__CallerGroups_3)
#line 1064 "query.m"
{
#line 1073 "query.m"
  {
#line 1073 "query.m"
    MR_bool query__succeeded;
#line 1073 "query.m"
    MR_String query__String_4 = ((&query_vector_common_7[6 + query__CallerGroups_3]))->query__vector_common_type_7_0__vct_7_f_0;

#line 1073 "query.m"
    return query__String_4;
#line 1073 "query.m"
  }
#line 1064 "query.m"
}

#line 1034 "query.m"
static MR_String MR_CALL 
query__fields_to_string_1_f_0(
#line 1034 "query.m"
  MR_Word query__HeadVar__1_1)
#line 1034 "query.m"
{
#line 1036 "query.m"
  {
#line 1036 "query.m"
    MR_bool query__succeeded;
#line 1036 "query.m"
    MR_String query__HeadVar__2_2;
#line 1036 "query.m"
    MR_Word query__Port_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 1036 "query.m"
    MR_Word query__Time_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 1036 "query.m"
    MR_Word query__CallSeqs_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 1036 "query.m"
    MR_Word query__Allocs_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 1036 "query.m"
    MR_Word query__Memory_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 1036 "query.m"
    MR_String query__V_8_8;
#line 1036 "query.m"
    MR_String query__V_9_9;
#line 1036 "query.m"
    MR_String query__V_10_10;
#line 1036 "query.m"
    MR_String query__V_12_12;
#line 1036 "query.m"
    MR_String query__V_13_13;
#line 1036 "query.m"
    MR_String query__V_14_14;
#line 1036 "query.m"
    MR_String query__V_15_15;
#line 1036 "query.m"
    MR_String query__V_17_17;
#line 1036 "query.m"
    MR_String query__V_18_18;
#line 1036 "query.m"
    MR_String query__V_19_19;
#line 1036 "query.m"
    MR_String query__V_20_20;
#line 1036 "query.m"
    MR_String query__V_22_22;
#line 1036 "query.m"
    MR_String query__V_23_23;
#line 1036 "query.m"
    MR_String query__V_24_24;
#line 1036 "query.m"
    MR_String query__V_25_25;
#line 1036 "query.m"
    MR_String query__V_27_27;

#line 974 "query.m"
#line 974 "query.m"
    switch (query__Port_3) {
#line 974 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 974 "query.m"
      case (MR_Integer) 0:
#line 974 "query.m"
        query__V_8_8 = (MR_String) "_";
#line 974 "query.m"
        break;
#line 974 "query.m"
      case (MR_Integer) 1:
#line 975 "query.m"
        query__V_8_8 = (MR_String) "p";
#line 974 "query.m"
        break;
#line 974 "query.m"
    }
#line 1038 "query.m"
    {
#line 1038 "query.m"
      query__V_10_10 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 986 "query.m"
    query__V_13_13 = ((&query_vector_common_7[0 + query__Time_4]))->query__vector_common_type_7_0__vct_7_f_0;
#line 1040 "query.m"
    {
#line 1040 "query.m"
      query__V_15_15 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1002 "query.m"
#line 1002 "query.m"
    switch (query__CallSeqs_5) {
#line 1002 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1002 "query.m"
      case (MR_Integer) 1:
#line 1003 "query.m"
        query__V_18_18 = (MR_String) "s";
#line 1002 "query.m"
        break;
#line 1002 "query.m"
      case (MR_Integer) 2:
#line 1004 "query.m"
        query__V_18_18 = (MR_String) "S";
#line 1002 "query.m"
        break;
#line 1002 "query.m"
      case (MR_Integer) 0:
#line 1002 "query.m"
        query__V_18_18 = (MR_String) "_";
#line 1002 "query.m"
        break;
#line 1002 "query.m"
    }
#line 1042 "query.m"
    {
#line 1042 "query.m"
      query__V_20_20 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1015 "query.m"
#line 1015 "query.m"
    switch (query__Allocs_6) {
#line 1015 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1015 "query.m"
      case (MR_Integer) 1:
#line 1016 "query.m"
        query__V_23_23 = (MR_String) "a";
#line 1015 "query.m"
        break;
#line 1015 "query.m"
      case (MR_Integer) 2:
#line 1017 "query.m"
        query__V_23_23 = (MR_String) "A";
#line 1015 "query.m"
        break;
#line 1015 "query.m"
      case (MR_Integer) 0:
#line 1015 "query.m"
        query__V_23_23 = (MR_String) "_";
#line 1015 "query.m"
        break;
#line 1015 "query.m"
    }
#line 1044 "query.m"
    {
#line 1044 "query.m"
      query__V_25_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1028 "query.m"
#line 1028 "query.m"
    switch (MR_tag((MR_Word) query__Memory_7)) {
#line 1028 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1028 "query.m"
      case (MR_Integer) 0:
#line 1028 "query.m"
        query__V_27_27 = (MR_String) "_";
#line 1028 "query.m"
        break;
#line 1028 "query.m"
      case (MR_Integer) 1:
#line 1028 "query.m"
        {
#line 1028 "query.m"
          MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Memory_7, (MR_Integer) 0)));

#line 1028 "query.m"
#line 1028 "query.m"
          switch (query__V_42_42) {
#line 1028 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1028 "query.m"
            case (MR_Integer) 1:
#line 1029 "query.m"
              query__V_27_27 = (MR_String) "b";
#line 1028 "query.m"
              break;
#line 1028 "query.m"
            case (MR_Integer) 0:
#line 1030 "query.m"
              query__V_27_27 = (MR_String) "w";
#line 1028 "query.m"
              break;
#line 1028 "query.m"
          }
#line 1028 "query.m"
        }
#line 1028 "query.m"
        break;
#line 1028 "query.m"
      case (MR_Integer) 2:
#line 1028 "query.m"
        {
#line 1028 "query.m"
          MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Memory_7, (MR_Integer) 0)));

#line 1028 "query.m"
#line 1028 "query.m"
          switch (query__V_43_43) {
#line 1028 "query.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1028 "query.m"
            case (MR_Integer) 1:
#line 1031 "query.m"
              query__V_27_27 = (MR_String) "B";
#line 1028 "query.m"
              break;
#line 1028 "query.m"
            case (MR_Integer) 0:
#line 1032 "query.m"
              query__V_27_27 = (MR_String) "W";
#line 1028 "query.m"
              break;
#line 1028 "query.m"
          }
#line 1028 "query.m"
        }
#line 1028 "query.m"
        break;
#line 1028 "query.m"
    }
#line 1044 "query.m"
    {
#line 1044 "query.m"
      query__V_24_24 = mercury__string__f_43_43_2_f_0(query__V_25_25, query__V_27_27);
    }
#line 1043 "query.m"
    {
#line 1043 "query.m"
      query__V_22_22 = mercury__string__f_43_43_2_f_0(query__V_23_23, query__V_24_24);
    }
#line 1042 "query.m"
    {
#line 1042 "query.m"
      query__V_19_19 = mercury__string__f_43_43_2_f_0(query__V_20_20, query__V_22_22);
    }
#line 1041 "query.m"
    {
#line 1041 "query.m"
      query__V_17_17 = mercury__string__f_43_43_2_f_0(query__V_18_18, query__V_19_19);
    }
#line 1040 "query.m"
    {
#line 1040 "query.m"
      query__V_14_14 = mercury__string__f_43_43_2_f_0(query__V_15_15, query__V_17_17);
    }
#line 1039 "query.m"
    {
#line 1039 "query.m"
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_14_14);
    }
#line 1038 "query.m"
    {
#line 1038 "query.m"
      query__V_9_9 = mercury__string__f_43_43_2_f_0(query__V_10_10, query__V_12_12);
    }
#line 1037 "query.m"
    {
#line 1037 "query.m"
      return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_9_9);
    }
#line 1036 "query.m"
    return query__HeadVar__2_2;
#line 1036 "query.m"
  }
#line 1034 "query.m"
}

#line 665 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 665 "query.m"
  MR_Word query__Pref_3)
#line 665 "query.m"
{
#line 667 "query.m"
  {
#line 667 "query.m"
    MR_bool query__succeeded;
#line 667 "query.m"
    MR_String query__PrefStr_4;
#line 667 "query.m"
    MR_Word query__Fields_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 0)));
#line 667 "query.m"
    MR_Word query__Box_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 667 "query.m"
    MR_Word query__Colour_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 667 "query.m"
    MR_Word query__MaybeAncestorLimit_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 2)));
#line 667 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 3)));
#line 667 "query.m"
    MR_Word query__SummarizeHoCallSites_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 4)));
#line 667 "query.m"
    MR_Word query__Order_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 5)));
#line 667 "query.m"
    MR_Word query__Contour_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 667 "query.m"
    MR_Word query__Time_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 667 "query.m"
    MR_Word query__ModuleQual_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 667 "query.m"
    MR_Word query__InactiveItems_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 7)));
#line 667 "query.m"
    MR_Word query__DeveloperMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 8)));
#line 667 "query.m"
    MR_String query__MaybeAncestorLimitStr_18;
#line 667 "query.m"
    MR_String query__V_26_26;
#line 667 "query.m"
    MR_Char query__V_29_29;
#line 667 "query.m"
    MR_String query__V_32_32;
#line 667 "query.m"
    MR_Char query__V_35_35;
#line 667 "query.m"
    MR_String query__V_38_38;
#line 667 "query.m"
    MR_Char query__V_41_41;
#line 667 "query.m"
    MR_Char query__V_46_46;
#line 667 "query.m"
    MR_Char query__V_51_51;
#line 667 "query.m"
    MR_String query__V_54_54;
#line 667 "query.m"
    MR_Char query__V_57_57;
#line 667 "query.m"
    MR_String query__V_60_60;
#line 667 "query.m"
    MR_Char query__V_63_63;
#line 667 "query.m"
    MR_String query__V_66_66;
#line 667 "query.m"
    MR_Char query__V_69_69;
#line 667 "query.m"
    MR_String query__V_72_72;
#line 667 "query.m"
    MR_Char query__V_75_75;
#line 667 "query.m"
    MR_String query__V_78_78;
#line 667 "query.m"
    MR_Char query__V_81_81;
#line 667 "query.m"
    MR_String query__V_84_84;
#line 667 "query.m"
    MR_Char query__V_87_87;
#line 667 "query.m"
    MR_String query__V_90_90;
#line 667 "query.m"
    MR_String query__V_98_98;
#line 667 "query.m"
    MR_Word query__V_104_104;
#line 667 "query.m"
    MR_String query__V_105_105;
#line 667 "query.m"
    MR_String query__V_112_112;
#line 667 "query.m"
    MR_String query__V_113_113;
#line 667 "query.m"
    MR_String query__V_120_120;
#line 667 "query.m"
    MR_String query__V_121_121;
#line 667 "query.m"
    MR_String query__V_128_128;
#line 667 "query.m"
    MR_String query__V_129_129;
#line 667 "query.m"
    MR_String query__V_136_136;
#line 667 "query.m"
    MR_String query__V_137_137;
#line 667 "query.m"
    MR_String query__V_144_144;
#line 667 "query.m"
    MR_String query__V_145_145;
#line 667 "query.m"
    MR_String query__V_152_152;
#line 667 "query.m"
    MR_String query__V_153_153;
#line 667 "query.m"
    MR_String query__V_160_160;
#line 667 "query.m"
    MR_String query__V_161_161;
#line 667 "query.m"
    MR_String query__V_168_168;
#line 667 "query.m"
    MR_String query__V_169_169;
#line 667 "query.m"
    MR_String query__V_176_176;
#line 667 "query.m"
    MR_String query__V_177_177;
#line 667 "query.m"
    MR_String query__V_184_184;
#line 667 "query.m"
    MR_String query__V_185_185;
#line 667 "query.m"
    MR_String query__V_192_192;
#line 667 "query.m"
    MR_String query__V_193_193;
#line 667 "query.m"
    MR_String query__V_200_200;
#line 667 "query.m"
    MR_String query__V_201_201;
#line 667 "query.m"
    MR_String query__V_208_208;
#line 667 "query.m"
    MR_String query__V_209_209;
#line 667 "query.m"
    MR_String query__V_216_216;
#line 667 "query.m"
    MR_String query__V_217_217;
#line 667 "query.m"
    MR_String query__V_224_224;
#line 667 "query.m"
    MR_String query__V_225_225;
#line 667 "query.m"
    MR_String query__V_232_232;
#line 667 "query.m"
    MR_String query__V_233_233;
#line 667 "query.m"
    MR_String query__V_240_240;
#line 667 "query.m"
    MR_String query__V_241_241;
#line 667 "query.m"
    MR_String query__V_248_248;
#line 667 "query.m"
    MR_String query__V_249_249;
#line 667 "query.m"
    MR_String query__V_256_256;
#line 667 "query.m"
    MR_String query__V_257_257;
#line 667 "query.m"
    MR_String query__V_264_264;
#line 667 "query.m"
    MR_String query__V_265_265;
#line 667 "query.m"
    MR_String query__V_272_272;
#line 667 "query.m"
    MR_String query__V_273_273;

#line 675 "query.m"
    if ((query__MaybeAncestorLimit_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "query.m"
      query__MaybeAncestorLimitStr_18 = (MR_String) "no";
#line 675 "query.m"
    else
#line 672 "query.m"
      {
#line 672 "query.m"
        MR_Integer query__AncestorLimit_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_8, (MR_Integer) 0)));

#line 674 "query.m"
        {
#line 674 "query.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__AncestorLimit_17, &query__MaybeAncestorLimitStr_18);
        }
#line 672 "query.m"
      }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_26_26 = query__fields_to_string_1_f_0(query__Fields_5);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      query__V_29_29 = query__pref_separator_char_0_f_0();
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      query__V_32_32 = query__box_to_string_1_f_0(query__Box_6);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      query__V_35_35 = query__pref_separator_char_0_f_0();
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      query__V_38_38 = query__colour_scheme_to_string_1_f_0(query__Colour_7);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      query__V_41_41 = query__pref_separator_char_0_f_0();
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      query__V_46_46 = query__pref_separator_char_0_f_0();
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      query__V_51_51 = query__pref_separator_char_0_f_0();
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      query__V_54_54 = query__summarize_to_string_1_f_0(query__SummarizeHoCallSites_10);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_57_57 = query__pref_separator_char_0_f_0();
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_60_60 = query__order_criteria_to_string_1_f_0(query__Order_11);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_63_63 = query__pref_separator_char_0_f_0();
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_66_66 = query__contour_exclusion_to_string_1_f_0(query__Contour_12);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_69_69 = query__pref_separator_char_0_f_0();
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_72_72 = query__time_format_to_string_1_f_0(query__Time_13);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_75_75 = query__pref_separator_char_0_f_0();
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_78_78 = query__module_qual_to_string_1_f_0(query__ModuleQual_14);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_81_81 = query__pref_separator_char_0_f_0();
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_84_84 = query__inactive_items_to_string_1_f_0(query__InactiveItems_15);
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      query__V_87_87 = query__pref_separator_char_0_f_0();
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      query__V_90_90 = query__developer_mode_to_string_1_f_0(query__DeveloperMode_16);
    }
#line 14162 "query.c"
    query__V_104_104 = (MR_Word) &query_scalar_common_2[1];
#line 691 "query.m"
    {
#line 691 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_90_90, &query__V_98_98);
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_87_87, &query__V_105_105);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_112_112 = mercury__string__f_43_43_2_f_0(query__V_105_105, query__V_98_98);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_84_84, &query__V_113_113);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_120_120 = mercury__string__f_43_43_2_f_0(query__V_113_113, query__V_112_112);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_81_81, &query__V_121_121);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_128_128 = mercury__string__f_43_43_2_f_0(query__V_121_121, query__V_120_120);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_78_78, &query__V_129_129);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_136_136 = mercury__string__f_43_43_2_f_0(query__V_129_129, query__V_128_128);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_75_75, &query__V_137_137);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_144_144 = mercury__string__f_43_43_2_f_0(query__V_137_137, query__V_136_136);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_72_72, &query__V_145_145);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_152_152 = mercury__string__f_43_43_2_f_0(query__V_145_145, query__V_144_144);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_69_69, &query__V_153_153);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_160_160 = mercury__string__f_43_43_2_f_0(query__V_153_153, query__V_152_152);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_66_66, &query__V_161_161);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_168_168 = mercury__string__f_43_43_2_f_0(query__V_161_161, query__V_160_160);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_63_63, &query__V_169_169);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_176_176 = mercury__string__f_43_43_2_f_0(query__V_169_169, query__V_168_168);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_60_60, &query__V_177_177);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_184_184 = mercury__string__f_43_43_2_f_0(query__V_177_177, query__V_176_176);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_57_57, &query__V_185_185);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_192_192 = mercury__string__f_43_43_2_f_0(query__V_185_185, query__V_184_184);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_54_54, &query__V_193_193);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_200_200 = mercury__string__f_43_43_2_f_0(query__V_193_193, query__V_192_192);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_51_51, &query__V_201_201);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_208_208 = mercury__string__f_43_43_2_f_0(query__V_201_201, query__V_200_200);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_104_104, query__ProcStaticsPerRecTypeLimit_9, &query__V_209_209);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_216_216 = mercury__string__f_43_43_2_f_0(query__V_209_209, query__V_208_208);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_46_46, &query__V_217_217);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_224_224 = mercury__string__f_43_43_2_f_0(query__V_217_217, query__V_216_216);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__MaybeAncestorLimitStr_18, &query__V_225_225);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_232_232 = mercury__string__f_43_43_2_f_0(query__V_225_225, query__V_224_224);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_41_41, &query__V_233_233);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_240_240 = mercury__string__f_43_43_2_f_0(query__V_233_233, query__V_232_232);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_38_38, &query__V_241_241);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_248_248 = mercury__string__f_43_43_2_f_0(query__V_241_241, query__V_240_240);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_35_35, &query__V_249_249);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_256_256 = mercury__string__f_43_43_2_f_0(query__V_249_249, query__V_248_248);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_32_32, &query__V_257_257);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_264_264 = mercury__string__f_43_43_2_f_0(query__V_257_257, query__V_256_256);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_29_29, &query__V_265_265);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      query__V_272_272 = mercury__string__f_43_43_2_f_0(query__V_265_265, query__V_264_264);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_26_26, &query__V_273_273);
    }
#line 679 "query.m"
    {
#line 679 "query.m"
      return query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_273_273, query__V_272_272);
    }
#line 667 "query.m"
    return query__PrefStr_4;
#line 667 "query.m"
  }
#line 665 "query.m"
}

#line 534 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 534 "query.m"
  MR_Word query__Cmd_3)
#line 534 "query.m"
{
#line 538 "query.m"
  {
#line 538 "query.m"
    MR_bool query__succeeded;
#line 538 "query.m"
    MR_String query__CmdStr_4;

#line 538 "query.m"
#line 538 "query.m"
    switch (MR_tag((MR_Word) query__Cmd_3)) {
#line 538 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "query.m"
      case (MR_Integer) 0:
#line 538 "query.m"
#line 538 "query.m"
        switch (MR_unmkbody(query__Cmd_3)) {
#line 538 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 538 "query.m"
          case (MR_Integer) 0:
#line 539 "query.m"
            {
#line 539 "query.m"
              return query__CmdStr_4 = query__cmd_str_quit_0_f_0();
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 1:
#line 542 "query.m"
            {
#line 542 "query.m"
              return query__CmdStr_4 = query__cmd_str_restart_0_f_0();
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 2:
#line 549 "query.m"
            {
#line 549 "query.m"
              return query__CmdStr_4 = query__cmd_str_menu_0_f_0();
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 3:
#line 574 "query.m"
            {
#line 574 "query.m"
              return query__CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 4:
#line 595 "query.m"
            {
#line 595 "query.m"
              return query__CmdStr_4 = query__cmd_str_program_modules_0_f_0();
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
        }
#line 538 "query.m"
        break;
#line 538 "query.m"
      case (MR_Integer) 1:
#line 544 "query.m"
        {
#line 544 "query.m"
          MR_Integer query__Minutes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__Cmd_3, (MR_Integer) 0)));
#line 544 "query.m"
          MR_String query__V_242_242;
#line 544 "query.m"
          MR_Char query__V_245_245;
#line 544 "query.m"
          MR_String query__V_345_345;
#line 544 "query.m"
          MR_Word query__V_351_351;
#line 544 "query.m"
          MR_String query__V_352_352;
#line 544 "query.m"
          MR_String query__V_359_359;
#line 544 "query.m"
          MR_String query__V_360_360;

#line 546 "query.m"
          {
#line 546 "query.m"
            query__V_242_242 = query__cmd_str_timeout_0_f_0();
          }
#line 546 "query.m"
          {
#line 546 "query.m"
            query__V_245_245 = query__cmd_separator_char_0_f_0();
          }
#line 14502 "query.c"
          query__V_351_351 = (MR_Word) &query_scalar_common_2[1];
#line 546 "query.m"
          {
#line 546 "query.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_351_351, query__Minutes_5, &query__V_345_345);
          }
#line 546 "query.m"
          {
#line 546 "query.m"
            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_351_351, query__V_245_245, &query__V_352_352);
          }
#line 545 "query.m"
          {
#line 545 "query.m"
            query__V_359_359 = mercury__string__f_43_43_2_f_0(query__V_352_352, query__V_345_345);
          }
#line 546 "query.m"
          {
#line 546 "query.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_351_351, query__V_242_242, &query__V_360_360);
          }
#line 545 "query.m"
          {
#line 545 "query.m"
            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_360_360, query__V_359_359);
          }
#line 544 "query.m"
        }
#line 538 "query.m"
        break;
#line 538 "query.m"
      case (MR_Integer) 2:
#line 551 "query.m"
        {
#line 551 "query.m"
          MR_Word query__MaybePercent_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Cmd_3, (MR_Integer) 0)));

#line 556 "query.m"
          if ((query__MaybePercent_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "query.m"
            {
#line 557 "query.m"
              MR_String query__V_221_221;
#line 557 "query.m"
              MR_Char query__V_224_224;
#line 557 "query.m"
              MR_String query__V_411_411;
#line 557 "query.m"
              MR_Word query__V_417_417;
#line 557 "query.m"
              MR_String query__V_418_418;
#line 557 "query.m"
              MR_String query__V_425_425;
#line 557 "query.m"
              MR_String query__V_426_426;

#line 559 "query.m"
              {
#line 559 "query.m"
                query__V_221_221 = query__cmd_str_root_0_f_0();
              }
#line 559 "query.m"
              {
#line 559 "query.m"
                query__V_224_224 = query__cmd_separator_char_0_f_0();
              }
#line 14569 "query.c"
              query__V_417_417 = (MR_Word) &query_scalar_common_2[1];
#line 559 "query.m"
              {
#line 559 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, (MR_String) "no", &query__V_411_411);
              }
#line 559 "query.m"
              {
#line 559 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_417_417, query__V_224_224, &query__V_418_418);
              }
#line 558 "query.m"
              {
#line 558 "query.m"
                query__V_425_425 = mercury__string__f_43_43_2_f_0(query__V_418_418, query__V_411_411);
              }
#line 559 "query.m"
              {
#line 559 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, query__V_221_221, &query__V_426_426);
              }
#line 558 "query.m"
              {
#line 558 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_426_426, query__V_425_425);
              }
#line 557 "query.m"
            }
#line 556 "query.m"
          else
#line 553 "query.m"
            {
#line 553 "query.m"
              MR_Integer query__Percent_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybePercent_6, (MR_Integer) 0)));
#line 553 "query.m"
              MR_String query__V_232_232;
#line 553 "query.m"
              MR_Char query__V_235_235;
#line 553 "query.m"
              MR_String query__V_389_389;
#line 553 "query.m"
              MR_Word query__V_395_395;
#line 553 "query.m"
              MR_String query__V_396_396;
#line 553 "query.m"
              MR_String query__V_403_403;
#line 553 "query.m"
              MR_String query__V_404_404;

#line 555 "query.m"
              {
#line 555 "query.m"
                query__V_232_232 = query__cmd_str_root_0_f_0();
              }
#line 555 "query.m"
              {
#line 555 "query.m"
                query__V_235_235 = query__cmd_separator_char_0_f_0();
              }
#line 14629 "query.c"
              query__V_395_395 = (MR_Word) &query_scalar_common_2[1];
#line 555 "query.m"
              {
#line 555 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_395_395, query__Percent_7, &query__V_389_389);
              }
#line 555 "query.m"
              {
#line 555 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_395_395, query__V_235_235, &query__V_396_396);
              }
#line 554 "query.m"
              {
#line 554 "query.m"
                query__V_403_403 = mercury__string__f_43_43_2_f_0(query__V_396_396, query__V_389_389);
              }
#line 555 "query.m"
              {
#line 555 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_395_395, query__V_232_232, &query__V_404_404);
              }
#line 554 "query.m"
              {
#line 554 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_404_404, query__V_403_403);
              }
#line 553 "query.m"
            }
#line 551 "query.m"
        }
#line 538 "query.m"
        break;
#line 538 "query.m"
      case (MR_Integer) 3:
#line 538 "query.m"
#line 538 "query.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) {
#line 538 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 538 "query.m"
          case (MR_Integer) 0:
#line 568 "query.m"
            {
#line 568 "query.m"
              MR_Word query__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 568 "query.m"
              MR_String query__Name_9;
#line 568 "query.m"
              MR_Integer query__CliqueNum_10;
#line 568 "query.m"
              MR_Char query__V_214_214;
#line 568 "query.m"
              MR_String query__V_761_761;
#line 568 "query.m"
              MR_Word query__V_767_767;
#line 568 "query.m"
              MR_String query__V_768_768;
#line 568 "query.m"
              MR_String query__V_775_775;
#line 568 "query.m"
              MR_String query__V_776_776;

#line 564 "query.m"
              {
#line 564 "query.m"
                query__Name_9 = query__cmd_str_clique_0_f_0();
              }
#line 569 "query.m"
              query__CliqueNum_10 = (MR_Integer) query__CliquePtr_8;
#line 571 "query.m"
              {
#line 571 "query.m"
                query__V_214_214 = query__cmd_separator_char_0_f_0();
              }
#line 14704 "query.c"
              query__V_767_767 = (MR_Word) &query_scalar_common_2[1];
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_767_767, query__CliqueNum_10, &query__V_761_761);
              }
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_767_767, query__V_214_214, &query__V_768_768);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                query__V_775_775 = mercury__string__f_43_43_2_f_0(query__V_768_768, query__V_761_761);
              }
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_767_767, query__Name_9, &query__V_776_776);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_776_776, query__V_775_775);
              }
#line 568 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 1:
#line 568 "query.m"
            {
#line 568 "query.m"
              MR_Word query__CliquePtr_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 568 "query.m"
              MR_String query__Name_264;
#line 568 "query.m"
              MR_Integer query__CliqueNum_265;
#line 568 "query.m"
              MR_Char query__V_271_271;
#line 568 "query.m"
              MR_String query__V_739_739;
#line 568 "query.m"
              MR_Word query__V_745_745;
#line 568 "query.m"
              MR_String query__V_746_746;
#line 568 "query.m"
              MR_String query__V_753_753;
#line 568 "query.m"
              MR_String query__V_754_754;

#line 567 "query.m"
              {
#line 567 "query.m"
                query__Name_264 = query__cmd_str_clique_recursive_costs_0_f_0();
              }
#line 569 "query.m"
              query__CliqueNum_265 = (MR_Integer) query__CliquePtr_263;
#line 571 "query.m"
              {
#line 571 "query.m"
                query__V_271_271 = query__cmd_separator_char_0_f_0();
              }
#line 14770 "query.c"
              query__V_745_745 = (MR_Word) &query_scalar_common_2[1];
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_745_745, query__CliqueNum_265, &query__V_739_739);
              }
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_745_745, query__V_271_271, &query__V_746_746);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                query__V_753_753 = mercury__string__f_43_43_2_f_0(query__V_746_746, query__V_739_739);
              }
#line 571 "query.m"
              {
#line 571 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_745_745, query__Name_264, &query__V_754_754);
              }
#line 570 "query.m"
              {
#line 570 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_754_754, query__V_753_753);
              }
#line 568 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 2:
#line 576 "query.m"
            {
#line 576 "query.m"
              MR_Word query__PSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 576 "query.m"
              MR_Integer query__PSI_12 = (MR_Integer) query__PSPtr_11;
#line 576 "query.m"
              MR_String query__V_202_202;
#line 576 "query.m"
              MR_Char query__V_205_205;
#line 576 "query.m"
              MR_String query__V_519_519;
#line 576 "query.m"
              MR_Word query__V_525_525;
#line 576 "query.m"
              MR_String query__V_526_526;
#line 576 "query.m"
              MR_String query__V_533_533;
#line 576 "query.m"
              MR_String query__V_534_534;

#line 579 "query.m"
              {
#line 579 "query.m"
                query__V_202_202 = query__cmd_str_proc_0_f_0();
              }
#line 579 "query.m"
              {
#line 579 "query.m"
                query__V_205_205 = query__cmd_separator_char_0_f_0();
              }
#line 14834 "query.c"
              query__V_525_525 = (MR_Word) &query_scalar_common_2[1];
#line 579 "query.m"
              {
#line 579 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_525_525, query__PSI_12, &query__V_519_519);
              }
#line 579 "query.m"
              {
#line 579 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_525_525, query__V_205_205, &query__V_526_526);
              }
#line 578 "query.m"
              {
#line 578 "query.m"
                query__V_533_533 = mercury__string__f_43_43_2_f_0(query__V_526_526, query__V_519_519);
              }
#line 579 "query.m"
              {
#line 579 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_525_525, query__V_202_202, &query__V_534_534);
              }
#line 578 "query.m"
              {
#line 578 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_534_534, query__V_533_533);
              }
#line 576 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 3:
#line 582 "query.m"
            {
#line 582 "query.m"
              MR_Word query__GroupCallers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)));
#line 582 "query.m"
              MR_Integer query__BunchNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 3)));
#line 582 "query.m"
              MR_Integer query__CallersPerBunch_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 4)));
#line 582 "query.m"
              MR_Word query__Contour_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 5)));
#line 582 "query.m"
              MR_String query__GroupCallersStr_17;
#line 582 "query.m"
              MR_String query__ContourStr_18;
#line 582 "query.m"
              MR_String query__V_172_172;
#line 582 "query.m"
              MR_Char query__V_175_175;
#line 582 "query.m"
              MR_Char query__V_180_180;
#line 582 "query.m"
              MR_Char query__V_185_185;
#line 582 "query.m"
              MR_Char query__V_190_190;
#line 582 "query.m"
              MR_Char query__V_195_195;
#line 582 "query.m"
              MR_Word query__PSPtr_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 582 "query.m"
              MR_Integer query__PSI_250 = (MR_Integer) query__PSPtr_249;
#line 582 "query.m"
              MR_String query__V_433_433;
#line 582 "query.m"
              MR_Word query__V_439_439;
#line 582 "query.m"
              MR_String query__V_440_440;
#line 582 "query.m"
              MR_String query__V_447_447;
#line 582 "query.m"
              MR_String query__V_448_448;
#line 582 "query.m"
              MR_String query__V_455_455;
#line 582 "query.m"
              MR_String query__V_456_456;
#line 582 "query.m"
              MR_String query__V_463_463;
#line 582 "query.m"
              MR_String query__V_464_464;
#line 582 "query.m"
              MR_String query__V_471_471;
#line 582 "query.m"
              MR_String query__V_472_472;
#line 582 "query.m"
              MR_String query__V_479_479;
#line 582 "query.m"
              MR_String query__V_480_480;
#line 582 "query.m"
              MR_String query__V_487_487;
#line 582 "query.m"
              MR_String query__V_488_488;
#line 582 "query.m"
              MR_String query__V_495_495;
#line 582 "query.m"
              MR_String query__V_496_496;
#line 582 "query.m"
              MR_String query__V_503_503;
#line 582 "query.m"
              MR_String query__V_504_504;
#line 582 "query.m"
              MR_String query__V_511_511;
#line 582 "query.m"
              MR_String query__V_512_512;

#line 584 "query.m"
              {
#line 584 "query.m"
                query__GroupCallersStr_17 = query__caller_groups_to_string_1_f_0(query__GroupCallers_13);
              }
#line 585 "query.m"
              {
#line 585 "query.m"
                query__ContourStr_18 = query__contour_exclusion_to_string_1_f_0(query__Contour_16);
              }
#line 587 "query.m"
              {
#line 587 "query.m"
                query__V_172_172 = query__cmd_str_proc_callers_0_f_0();
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                query__V_175_175 = query__cmd_separator_char_0_f_0();
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                query__V_180_180 = query__cmd_separator_char_0_f_0();
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                query__V_185_185 = query__cmd_separator_char_0_f_0();
              }
#line 591 "query.m"
              {
#line 591 "query.m"
                query__V_190_190 = query__cmd_separator_char_0_f_0();
              }
#line 592 "query.m"
              {
#line 592 "query.m"
                query__V_195_195 = query__cmd_separator_char_0_f_0();
              }
#line 14980 "query.c"
              query__V_439_439 = (MR_Word) &query_scalar_common_2[1];
#line 592 "query.m"
              {
#line 592 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__ContourStr_18, &query__V_433_433);
              }
#line 592 "query.m"
              {
#line 592 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_195_195, &query__V_440_440);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_447_447 = mercury__string__f_43_43_2_f_0(query__V_440_440, query__V_433_433);
              }
#line 591 "query.m"
              {
#line 591 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__CallersPerBunch_15, &query__V_448_448);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_455_455 = mercury__string__f_43_43_2_f_0(query__V_448_448, query__V_447_447);
              }
#line 591 "query.m"
              {
#line 591 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_190_190, &query__V_456_456);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_463_463 = mercury__string__f_43_43_2_f_0(query__V_456_456, query__V_455_455);
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__BunchNum_14, &query__V_464_464);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_471_471 = mercury__string__f_43_43_2_f_0(query__V_464_464, query__V_463_463);
              }
#line 590 "query.m"
              {
#line 590 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_185_185, &query__V_472_472);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_479_479 = mercury__string__f_43_43_2_f_0(query__V_472_472, query__V_471_471);
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__GroupCallersStr_17, &query__V_480_480);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_487_487 = mercury__string__f_43_43_2_f_0(query__V_480_480, query__V_479_479);
              }
#line 589 "query.m"
              {
#line 589 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_180_180, &query__V_488_488);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_495_495 = mercury__string__f_43_43_2_f_0(query__V_488_488, query__V_487_487);
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__PSI_250, &query__V_496_496);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_503_503 = mercury__string__f_43_43_2_f_0(query__V_496_496, query__V_495_495);
              }
#line 588 "query.m"
              {
#line 588 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_175_175, &query__V_504_504);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                query__V_511_511 = mercury__string__f_43_43_2_f_0(query__V_504_504, query__V_503_503);
              }
#line 587 "query.m"
              {
#line 587 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__V_172_172, &query__V_512_512);
              }
#line 586 "query.m"
              {
#line 586 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_512_512, query__V_511_511);
              }
#line 582 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 4:
#line 597 "query.m"
            {
#line 597 "query.m"
              MR_String query__ModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 597 "query.m"
              MR_String query__V_162_162;
#line 597 "query.m"
              MR_Char query__V_165_165;
#line 597 "query.m"
              MR_String query__V_585_585;
#line 597 "query.m"
              MR_Word query__V_591_591;
#line 597 "query.m"
              MR_String query__V_592_592;
#line 597 "query.m"
              MR_String query__V_599_599;
#line 597 "query.m"
              MR_String query__V_600_600;

#line 599 "query.m"
              {
#line 599 "query.m"
                query__V_162_162 = query__cmd_str_module_0_f_0();
              }
#line 599 "query.m"
              {
#line 599 "query.m"
                query__V_165_165 = query__cmd_separator_char_0_f_0();
              }
#line 15122 "query.c"
              query__V_591_591 = (MR_Word) &query_scalar_common_2[1];
#line 599 "query.m"
              {
#line 599 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__ModuleName_19, &query__V_585_585);
              }
#line 599 "query.m"
              {
#line 599 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_591_591, query__V_165_165, &query__V_592_592);
              }
#line 598 "query.m"
              {
#line 598 "query.m"
                query__V_599_599 = mercury__string__f_43_43_2_f_0(query__V_592_592, query__V_585_585);
              }
#line 599 "query.m"
              {
#line 599 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__V_162_162, &query__V_600_600);
              }
#line 598 "query.m"
              {
#line 598 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_600_600, query__V_599_599);
              }
#line 597 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 5:
#line 601 "query.m"
            {
#line 601 "query.m"
              MR_String query__V_152_152;
#line 601 "query.m"
              MR_Char query__V_155_155;
#line 601 "query.m"
              MR_String query__ModuleName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 601 "query.m"
              MR_String query__V_563_563;
#line 601 "query.m"
              MR_Word query__V_569_569;
#line 601 "query.m"
              MR_String query__V_570_570;
#line 601 "query.m"
              MR_String query__V_577_577;
#line 601 "query.m"
              MR_String query__V_578_578;

#line 603 "query.m"
              {
#line 603 "query.m"
                query__V_152_152 = query__cmd_str_module_getter_setters_0_f_0();
              }
#line 603 "query.m"
              {
#line 603 "query.m"
                query__V_155_155 = query__cmd_separator_char_0_f_0();
              }
#line 15184 "query.c"
              query__V_569_569 = (MR_Word) &query_scalar_common_2[1];
#line 604 "query.m"
              {
#line 604 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__ModuleName_251, &query__V_563_563);
              }
#line 603 "query.m"
              {
#line 603 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_569_569, query__V_155_155, &query__V_570_570);
              }
#line 602 "query.m"
              {
#line 602 "query.m"
                query__V_577_577 = mercury__string__f_43_43_2_f_0(query__V_570_570, query__V_563_563);
              }
#line 603 "query.m"
              {
#line 603 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__V_152_152, &query__V_578_578);
              }
#line 602 "query.m"
              {
#line 602 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_578_578, query__V_577_577);
              }
#line 601 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 6:
#line 606 "query.m"
            {
#line 606 "query.m"
              MR_String query__V_142_142;
#line 606 "query.m"
              MR_Char query__V_145_145;
#line 606 "query.m"
              MR_String query__ModuleName_252 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 606 "query.m"
              MR_String query__V_541_541;
#line 606 "query.m"
              MR_Word query__V_547_547;
#line 606 "query.m"
              MR_String query__V_548_548;
#line 606 "query.m"
              MR_String query__V_555_555;
#line 606 "query.m"
              MR_String query__V_556_556;

#line 608 "query.m"
              {
#line 608 "query.m"
                query__V_142_142 = query__cmd_str_module_rep_0_f_0();
              }
#line 608 "query.m"
              {
#line 608 "query.m"
                query__V_145_145 = query__cmd_separator_char_0_f_0();
              }
#line 15246 "query.c"
              query__V_547_547 = (MR_Word) &query_scalar_common_2[1];
#line 608 "query.m"
              {
#line 608 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__ModuleName_252, &query__V_541_541);
              }
#line 608 "query.m"
              {
#line 608 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_547_547, query__V_145_145, &query__V_548_548);
              }
#line 607 "query.m"
              {
#line 607 "query.m"
                query__V_555_555 = mercury__string__f_43_43_2_f_0(query__V_548_548, query__V_541_541);
              }
#line 608 "query.m"
              {
#line 608 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__V_142_142, &query__V_556_556);
              }
#line 607 "query.m"
              {
#line 607 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_556_556, query__V_555_555);
              }
#line 606 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 7:
#line 610 "query.m"
            {
#line 610 "query.m"
              MR_Word query__Limit_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 610 "query.m"
              MR_Word query__CostKind_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 610 "query.m"
              MR_Word query__InclDesc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 610 "query.m"
              MR_Word query__Scope_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 610 "query.m"
              MR_String query__LimitStr_24;
#line 610 "query.m"
              MR_String query__CostKindStr_25;
#line 610 "query.m"
              MR_String query__InclDescStr_26;
#line 610 "query.m"
              MR_String query__ScopeStr_27;
#line 610 "query.m"
              MR_String query__V_117_117;
#line 610 "query.m"
              MR_Char query__V_120_120;
#line 610 "query.m"
              MR_Char query__V_125_125;
#line 610 "query.m"
              MR_Char query__V_130_130;
#line 610 "query.m"
              MR_Char query__V_135_135;
#line 610 "query.m"
              MR_String query__V_275_275;
#line 610 "query.m"
              MR_Word query__V_281_281;
#line 610 "query.m"
              MR_String query__V_282_282;
#line 610 "query.m"
              MR_String query__V_289_289;
#line 610 "query.m"
              MR_String query__V_290_290;
#line 610 "query.m"
              MR_String query__V_297_297;
#line 610 "query.m"
              MR_String query__V_298_298;
#line 610 "query.m"
              MR_String query__V_305_305;
#line 610 "query.m"
              MR_String query__V_306_306;
#line 610 "query.m"
              MR_String query__V_313_313;
#line 610 "query.m"
              MR_String query__V_314_314;
#line 610 "query.m"
              MR_String query__V_321_321;
#line 610 "query.m"
              MR_String query__V_322_322;
#line 610 "query.m"
              MR_String query__V_329_329;
#line 610 "query.m"
              MR_String query__V_330_330;
#line 610 "query.m"
              MR_String query__V_337_337;
#line 610 "query.m"
              MR_String query__V_338_338;

#line 611 "query.m"
              {
#line 611 "query.m"
                query__LimitStr_24 = query__limit_to_string_1_f_0(query__Limit_20);
              }
#line 612 "query.m"
              {
#line 612 "query.m"
                query__CostKindStr_25 = query__cost_kind_to_string_1_f_0(query__CostKind_21);
              }
#line 613 "query.m"
              {
#line 613 "query.m"
                query__InclDescStr_26 = query__incl_desc_to_string_1_f_0(query__InclDesc_22);
              }
#line 614 "query.m"
              {
#line 614 "query.m"
                query__ScopeStr_27 = query__scope_to_string_1_f_0(query__Scope_23);
              }
#line 616 "query.m"
              {
#line 616 "query.m"
                query__V_117_117 = query__cmd_str_top_procs_0_f_0();
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                query__V_120_120 = query__cmd_separator_char_0_f_0();
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                query__V_125_125 = query__cmd_separator_char_0_f_0();
              }
#line 619 "query.m"
              {
#line 619 "query.m"
                query__V_130_130 = query__cmd_separator_char_0_f_0();
              }
#line 620 "query.m"
              {
#line 620 "query.m"
                query__V_135_135 = query__cmd_separator_char_0_f_0();
              }
#line 15387 "query.c"
              query__V_281_281 = (MR_Word) &query_scalar_common_2[1];
#line 620 "query.m"
              {
#line 620 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__ScopeStr_27, &query__V_275_275);
              }
#line 620 "query.m"
              {
#line 620 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_135_135, &query__V_282_282);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_289_289 = mercury__string__f_43_43_2_f_0(query__V_282_282, query__V_275_275);
              }
#line 619 "query.m"
              {
#line 619 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__InclDescStr_26, &query__V_290_290);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_297_297 = mercury__string__f_43_43_2_f_0(query__V_290_290, query__V_289_289);
              }
#line 619 "query.m"
              {
#line 619 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_130_130, &query__V_298_298);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_305_305 = mercury__string__f_43_43_2_f_0(query__V_298_298, query__V_297_297);
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__CostKindStr_25, &query__V_306_306);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_313_313 = mercury__string__f_43_43_2_f_0(query__V_306_306, query__V_305_305);
              }
#line 618 "query.m"
              {
#line 618 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_125_125, &query__V_314_314);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_321_321 = mercury__string__f_43_43_2_f_0(query__V_314_314, query__V_313_313);
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__LimitStr_24, &query__V_322_322);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_329_329 = mercury__string__f_43_43_2_f_0(query__V_322_322, query__V_321_321);
              }
#line 617 "query.m"
              {
#line 617 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_120_120, &query__V_330_330);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                query__V_337_337 = mercury__string__f_43_43_2_f_0(query__V_330_330, query__V_329_329);
              }
#line 616 "query.m"
              {
#line 616 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__V_117_117, &query__V_338_338);
              }
#line 615 "query.m"
              {
#line 615 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_338_338, query__V_337_337);
              }
#line 610 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 8:
#line 622 "query.m"
            {
#line 622 "query.m"
              MR_String query__V_107_107;
#line 622 "query.m"
              MR_Char query__V_110_110;
#line 622 "query.m"
              MR_Word query__PSPtr_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 622 "query.m"
              MR_Integer query__PSI_254 = (MR_Integer) query__PSPtr_253;
#line 622 "query.m"
              MR_String query__V_367_367;
#line 622 "query.m"
              MR_Word query__V_373_373;
#line 622 "query.m"
              MR_String query__V_374_374;
#line 622 "query.m"
              MR_String query__V_381_381;
#line 622 "query.m"
              MR_String query__V_382_382;

#line 625 "query.m"
              {
#line 625 "query.m"
                query__V_107_107 = query__cmd_str_static_coverage_0_f_0();
              }
#line 625 "query.m"
              {
#line 625 "query.m"
                query__V_110_110 = query__cmd_separator_char_0_f_0();
              }
#line 15511 "query.c"
              query__V_373_373 = (MR_Word) &query_scalar_common_2[1];
#line 625 "query.m"
              {
#line 625 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_373_373, query__PSI_254, &query__V_367_367);
              }
#line 625 "query.m"
              {
#line 625 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_373_373, query__V_110_110, &query__V_374_374);
              }
#line 624 "query.m"
              {
#line 624 "query.m"
                query__V_381_381 = mercury__string__f_43_43_2_f_0(query__V_374_374, query__V_367_367);
              }
#line 625 "query.m"
              {
#line 625 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_373_373, query__V_107_107, &query__V_382_382);
              }
#line 624 "query.m"
              {
#line 624 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_382_382, query__V_381_381);
              }
#line 622 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 9:
#line 627 "query.m"
            {
#line 627 "query.m"
              MR_Word query__PDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 627 "query.m"
              MR_Integer query__PDI_29 = (MR_Integer) query__PDPtr_28;
#line 627 "query.m"
              MR_String query__V_97_97;
#line 627 "query.m"
              MR_Char query__V_100_100;
#line 627 "query.m"
              MR_String query__V_607_607;
#line 627 "query.m"
              MR_Word query__V_613_613;
#line 627 "query.m"
              MR_String query__V_614_614;
#line 627 "query.m"
              MR_String query__V_621_621;
#line 627 "query.m"
              MR_String query__V_622_622;

#line 630 "query.m"
              {
#line 630 "query.m"
                query__V_97_97 = query__cmd_str_dynamic_coverage_0_f_0();
              }
#line 630 "query.m"
              {
#line 630 "query.m"
                query__V_100_100 = query__cmd_separator_char_0_f_0();
              }
#line 15575 "query.c"
              query__V_613_613 = (MR_Word) &query_scalar_common_2[1];
#line 630 "query.m"
              {
#line 630 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_613_613, query__PDI_29, &query__V_607_607);
              }
#line 630 "query.m"
              {
#line 630 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_613_613, query__V_100_100, &query__V_614_614);
              }
#line 629 "query.m"
              {
#line 629 "query.m"
                query__V_621_621 = mercury__string__f_43_43_2_f_0(query__V_614_614, query__V_607_607);
              }
#line 630 "query.m"
              {
#line 630 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_613_613, query__V_97_97, &query__V_622_622);
              }
#line 629 "query.m"
              {
#line 629 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_622_622, query__V_621_621);
              }
#line 627 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 10:
#line 632 "query.m"
            {
#line 632 "query.m"
              MR_String query__V_87_87;
#line 632 "query.m"
              MR_Char query__V_90_90;
#line 632 "query.m"
              MR_Word query__PSPtr_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 632 "query.m"
              MR_Integer query__PSI_256 = (MR_Integer) query__PSPtr_255;
#line 632 "query.m"
              MR_String query__V_629_629;
#line 632 "query.m"
              MR_Word query__V_635_635;
#line 632 "query.m"
              MR_String query__V_636_636;
#line 632 "query.m"
              MR_String query__V_643_643;
#line 632 "query.m"
              MR_String query__V_644_644;

#line 635 "query.m"
              {
#line 635 "query.m"
                query__V_87_87 = query__cmd_str_dump_proc_static_0_f_0();
              }
#line 635 "query.m"
              {
#line 635 "query.m"
                query__V_90_90 = query__cmd_separator_char_0_f_0();
              }
#line 15639 "query.c"
              query__V_635_635 = (MR_Word) &query_scalar_common_2[1];
#line 635 "query.m"
              {
#line 635 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_635_635, query__PSI_256, &query__V_629_629);
              }
#line 635 "query.m"
              {
#line 635 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_635_635, query__V_90_90, &query__V_636_636);
              }
#line 634 "query.m"
              {
#line 634 "query.m"
                query__V_643_643 = mercury__string__f_43_43_2_f_0(query__V_636_636, query__V_629_629);
              }
#line 635 "query.m"
              {
#line 635 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_635_635, query__V_87_87, &query__V_644_644);
              }
#line 634 "query.m"
              {
#line 634 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_644_644, query__V_643_643);
              }
#line 632 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 11:
#line 637 "query.m"
            {
#line 637 "query.m"
              MR_String query__V_77_77;
#line 637 "query.m"
              MR_Char query__V_80_80;
#line 637 "query.m"
              MR_Word query__PDPtr_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 637 "query.m"
              MR_Integer query__PDI_258 = (MR_Integer) query__PDPtr_257;
#line 637 "query.m"
              MR_String query__V_651_651;
#line 637 "query.m"
              MR_Word query__V_657_657;
#line 637 "query.m"
              MR_String query__V_658_658;
#line 637 "query.m"
              MR_String query__V_665_665;
#line 637 "query.m"
              MR_String query__V_666_666;

#line 640 "query.m"
              {
#line 640 "query.m"
                query__V_77_77 = query__cmd_str_dump_proc_dynamic_0_f_0();
              }
#line 640 "query.m"
              {
#line 640 "query.m"
                query__V_80_80 = query__cmd_separator_char_0_f_0();
              }
#line 15703 "query.c"
              query__V_657_657 = (MR_Word) &query_scalar_common_2[1];
#line 640 "query.m"
              {
#line 640 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_657_657, query__PDI_258, &query__V_651_651);
              }
#line 640 "query.m"
              {
#line 640 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_657_657, query__V_80_80, &query__V_658_658);
              }
#line 639 "query.m"
              {
#line 639 "query.m"
                query__V_665_665 = mercury__string__f_43_43_2_f_0(query__V_658_658, query__V_651_651);
              }
#line 640 "query.m"
              {
#line 640 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_657_657, query__V_77_77, &query__V_666_666);
              }
#line 639 "query.m"
              {
#line 639 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_666_666, query__V_665_665);
              }
#line 637 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 12:
#line 642 "query.m"
            {
#line 642 "query.m"
              MR_Word query__CSSPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 642 "query.m"
              MR_Integer query__CSSI_31 = (MR_Integer) query__CSSPtr_30;
#line 642 "query.m"
              MR_String query__V_67_67;
#line 642 "query.m"
              MR_Char query__V_70_70;
#line 642 "query.m"
              MR_String query__V_695_695;
#line 642 "query.m"
              MR_Word query__V_701_701;
#line 642 "query.m"
              MR_String query__V_702_702;
#line 642 "query.m"
              MR_String query__V_709_709;
#line 642 "query.m"
              MR_String query__V_710_710;

#line 645 "query.m"
              {
#line 645 "query.m"
                query__V_67_67 = query__cmd_str_dump_call_site_static_0_f_0();
              }
#line 645 "query.m"
              {
#line 645 "query.m"
                query__V_70_70 = query__cmd_separator_char_0_f_0();
              }
#line 15767 "query.c"
              query__V_701_701 = (MR_Word) &query_scalar_common_2[1];
#line 645 "query.m"
              {
#line 645 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_701_701, query__CSSI_31, &query__V_695_695);
              }
#line 645 "query.m"
              {
#line 645 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_701_701, query__V_70_70, &query__V_702_702);
              }
#line 644 "query.m"
              {
#line 644 "query.m"
                query__V_709_709 = mercury__string__f_43_43_2_f_0(query__V_702_702, query__V_695_695);
              }
#line 645 "query.m"
              {
#line 645 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_701_701, query__V_67_67, &query__V_710_710);
              }
#line 644 "query.m"
              {
#line 644 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_710_710, query__V_709_709);
              }
#line 642 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 13:
#line 647 "query.m"
            {
#line 647 "query.m"
              MR_Word query__CSDPtr_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 647 "query.m"
              MR_Integer query__CSDI_33 = (MR_Integer) query__CSDPtr_32;
#line 647 "query.m"
              MR_String query__V_57_57;
#line 647 "query.m"
              MR_Char query__V_60_60;
#line 647 "query.m"
              MR_String query__V_717_717;
#line 647 "query.m"
              MR_Word query__V_723_723;
#line 647 "query.m"
              MR_String query__V_724_724;
#line 647 "query.m"
              MR_String query__V_731_731;
#line 647 "query.m"
              MR_String query__V_732_732;

#line 650 "query.m"
              {
#line 650 "query.m"
                query__V_57_57 = query__cmd_str_dump_call_site_dynamic_0_f_0();
              }
#line 650 "query.m"
              {
#line 650 "query.m"
                query__V_60_60 = query__cmd_separator_char_0_f_0();
              }
#line 15831 "query.c"
              query__V_723_723 = (MR_Word) &query_scalar_common_2[1];
#line 651 "query.m"
              {
#line 651 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_723_723, query__CSDI_33, &query__V_717_717);
              }
#line 650 "query.m"
              {
#line 650 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_723_723, query__V_60_60, &query__V_724_724);
              }
#line 649 "query.m"
              {
#line 649 "query.m"
                query__V_731_731 = mercury__string__f_43_43_2_f_0(query__V_724_724, query__V_717_717);
              }
#line 650 "query.m"
              {
#line 650 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_723_723, query__V_57_57, &query__V_732_732);
              }
#line 649 "query.m"
              {
#line 649 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_732_732, query__V_731_731);
              }
#line 647 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 14:
#line 653 "query.m"
            {
#line 653 "query.m"
              MR_String query__V_47_47;
#line 653 "query.m"
              MR_Char query__V_50_50;
#line 653 "query.m"
              MR_Word query__CliquePtr_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 653 "query.m"
              MR_Integer query__CliqueNum_260 = (MR_Integer) query__CliquePtr_259;
#line 653 "query.m"
              MR_String query__V_673_673;
#line 653 "query.m"
              MR_Word query__V_679_679;
#line 653 "query.m"
              MR_String query__V_680_680;
#line 653 "query.m"
              MR_String query__V_687_687;
#line 653 "query.m"
              MR_String query__V_688_688;

#line 656 "query.m"
              {
#line 656 "query.m"
                query__V_47_47 = query__cmd_str_dump_raw_clique_0_f_0();
              }
#line 656 "query.m"
              {
#line 656 "query.m"
                query__V_50_50 = query__cmd_separator_char_0_f_0();
              }
#line 15895 "query.c"
              query__V_679_679 = (MR_Word) &query_scalar_common_2[1];
#line 656 "query.m"
              {
#line 656 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_679_679, query__CliqueNum_260, &query__V_673_673);
              }
#line 656 "query.m"
              {
#line 656 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_679_679, query__V_50_50, &query__V_680_680);
              }
#line 655 "query.m"
              {
#line 655 "query.m"
                query__V_687_687 = mercury__string__f_43_43_2_f_0(query__V_680_680, query__V_673_673);
              }
#line 656 "query.m"
              {
#line 656 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_679_679, query__V_47_47, &query__V_688_688);
              }
#line 655 "query.m"
              {
#line 655 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_688_688, query__V_687_687);
              }
#line 653 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
          case (MR_Integer) 15:
#line 658 "query.m"
            {
#line 658 "query.m"
              MR_String query__V_37_37;
#line 658 "query.m"
              MR_Char query__V_40_40;
#line 658 "query.m"
              MR_Word query__CSDPtr_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 658 "query.m"
              MR_Integer query__CSDI_262 = (MR_Integer) query__CSDPtr_261;
#line 658 "query.m"
              MR_String query__V_783_783;
#line 658 "query.m"
              MR_Word query__V_789_789;
#line 658 "query.m"
              MR_String query__V_790_790;
#line 658 "query.m"
              MR_String query__V_797_797;
#line 658 "query.m"
              MR_String query__V_798_798;

#line 661 "query.m"
              {
#line 661 "query.m"
                query__V_37_37 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
              }
#line 661 "query.m"
              {
#line 661 "query.m"
                query__V_40_40 = query__cmd_separator_char_0_f_0();
              }
#line 15959 "query.c"
              query__V_789_789 = (MR_Word) &query_scalar_common_2[1];
#line 662 "query.m"
              {
#line 662 "query.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_789_789, query__CSDI_262, &query__V_783_783);
              }
#line 661 "query.m"
              {
#line 661 "query.m"
                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_789_789, query__V_40_40, &query__V_790_790);
              }
#line 660 "query.m"
              {
#line 660 "query.m"
                query__V_797_797 = mercury__string__f_43_43_2_f_0(query__V_790_790, query__V_783_783);
              }
#line 661 "query.m"
              {
#line 661 "query.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_789_789, query__V_37_37, &query__V_798_798);
              }
#line 660 "query.m"
              {
#line 660 "query.m"
                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_798_798, query__V_797_797);
              }
#line 658 "query.m"
            }
#line 538 "query.m"
            break;
#line 538 "query.m"
        }
#line 538 "query.m"
        break;
#line 538 "query.m"
    }
#line 538 "query.m"
    return query__CmdStr_4;
#line 538 "query.m"
  }
#line 534 "query.m"
}

#line 520 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void)
#line 520 "query.m"
{
#line 527 "query.m"
  {
#line 527 "query.m"
    MR_bool query__succeeded;

#line 527 "query.m"
    return (MR_Char) 47;
#line 527 "query.m"
  }
#line 520 "query.m"
}

#line 519 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void)
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

#line 435 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 435 "query.m"
  MR_Word query__Cmd_4,
#line 435 "query.m"
  MR_Word query__Deep_5,
#line 435 "query.m"
  MR_Word * query__Report_6)
#line 435 "query.m"
{
#line 438 "query.m"
  {
#line 438 "query.m"
    MR_bool query__succeeded;
#line 438 "query.m"
    MR_Box query__CallTableTipVar_10;
#line 438 "query.m"
    MR_Word query__Status_11;

#line 438 "query.m"
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
#line 438 "query.m"
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo0, arg0, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen_addr(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);

#line 16087 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	 query__Status_11  = status;
#line 438 "query.m"
}
#line 438 "query.m"
#line 438 "query.m"
    switch (query__Status_11) {
#line 438 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "query.m"
      case (MR_Integer) 1:
#line 438 "query.m"
        {
#line 438 "query.m"
          {
#line 438 "query.m"
            mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred query.create_and_memoize_report/3");
#line 438 "query.m"
            return;
          }
#line 438 "query.m"
        }
#line 438 "query.m"
        break;
#line 438 "query.m"
      case (MR_Integer) 0:
#line 438 "query.m"
        {
#line 438 "query.m"
          {
#line 438 "query.m"
            create_report__create_report_3_p_0(query__Cmd_4, query__Deep_5, query__Report_6);
          }
#line 438 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) query__CallTableTipVar_10 ;
	arg0 = (MR_Word) ((MR_Box) (*query__Report_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &report__report__type_ctor_info_deep_report_0 ;
		{
#line 438 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 16141 "query.c"

		;}
#undef MR_PROC_LABEL
#line 438 "query.m"
}
#line 438 "query.m"
        }
#line 438 "query.m"
        break;
#line 438 "query.m"
      case (MR_Integer) 2:
#line 438 "query.m"
        {
#line 438 "query.m"
          MR_Box query__conv0_restore_arg0;

#line 438 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) query__CallTableTipVar_10 ;
		{
#line 438 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 16172 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 438 "query.m"
          *query__Report_6 = ((MR_Word) query__conv0_restore_arg0);
#line 438 "query.m"
}
#line 438 "query.m"
        }
#line 438 "query.m"
        break;
#line 438 "query.m"
    }
#line 438 "query.m"
  }
#line 435 "query.m"
}

#line 414 "query.m"
static void MR_CALL 
query__exec_4_p_0(
#line 414 "query.m"
  MR_Word query__Cmd_5,
#line 414 "query.m"
  MR_Word query__Prefs_6,
#line 414 "query.m"
  MR_Word query__Deep_7,
#line 414 "query.m"
  MR_String * query__HTMLStr_8)
#line 414 "query.m"
{
#line 416 "query.m"
  {
#line 416 "query.m"
    MR_bool query__succeeded = (query__Cmd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 416 "query.m"
    MR_Word query__Report_9;
#line 416 "query.m"
    MR_Word query__Display_10;
#line 416 "query.m"
    MR_Word query__HTML_11;

#line 419 "query.m"
    if (query__succeeded)
#line 418 "query.m"
      {
#line 418 "query.m"
        query__create_and_memoize_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
#line 419 "query.m"
    else
#line 420 "query.m"
      {
#line 420 "query.m"
        create_report__create_report_3_p_0(query__Cmd_5, query__Deep_7, &query__Report_9);
      }
#line 422 "query.m"
    {
#line 422 "query.m"
      query__Display_10 = display_report__report_to_display_3_f_0(query__Deep_7, query__Prefs_6, query__Report_9);
    }
#line 423 "query.m"
    {
#line 423 "query.m"
      query__HTML_11 = html_format__htmlize_display_3_f_0(query__Deep_7, query__Prefs_6, query__Display_10);
    }
#line 424 "query.m"
    {
#line 424 "query.m"
      *query__HTMLStr_8 = html_format__html_to_string_1_f_0(query__HTML_11);
    }
#line 416 "query.m"
  }
#line 414 "query.m"
}

#line 359 "query.m"
MR_Word MR_CALL 
query__default_developer_mode_0_f_0(void)
#line 359 "query.m"
{
#line 514 "query.m"
  {
#line 514 "query.m"
    MR_bool query__succeeded;

#line 514 "query.m"
    return (MR_Integer) 1;
#line 514 "query.m"
  }
#line 359 "query.m"
}

#line 358 "query.m"
MR_Word MR_CALL 
query__default_inactive_items_0_f_0(void)
#line 358 "query.m"
{
#line 512 "query.m"
  {
#line 512 "query.m"
    MR_bool query__succeeded;

#line 512 "query.m"
    return (MR_Word) &query_scalar_common_2[9];
#line 512 "query.m"
  }
#line 358 "query.m"
}

#line 357 "query.m"
MR_Word MR_CALL 
query__default_module_qual_0_f_0(void)
#line 357 "query.m"
{
#line 511 "query.m"
  {
#line 511 "query.m"
    MR_bool query__succeeded;

#line 511 "query.m"
    return (MR_Integer) 1;
#line 511 "query.m"
  }
#line 357 "query.m"
}

#line 356 "query.m"
MR_Word MR_CALL 
query__default_time_format_0_f_0(void)
#line 356 "query.m"
{
#line 510 "query.m"
  {
#line 510 "query.m"
    MR_bool query__succeeded;

#line 510 "query.m"
    return (MR_Integer) 2;
#line 510 "query.m"
  }
#line 356 "query.m"
}

#line 355 "query.m"
MR_Word MR_CALL 
query__default_contour_exclusion_0_f_0(void)
#line 355 "query.m"
{
#line 509 "query.m"
  {
#line 509 "query.m"
    MR_bool query__succeeded;

#line 509 "query.m"
    return (MR_Integer) 1;
#line 509 "query.m"
  }
#line 355 "query.m"
}

#line 354 "query.m"
MR_Word MR_CALL 
query__default_scope_0_f_0(void)
#line 354 "query.m"
{
#line 508 "query.m"
  {
#line 508 "query.m"
    MR_bool query__succeeded;

#line 508 "query.m"
    return (MR_Integer) 1;
#line 508 "query.m"
  }
#line 354 "query.m"
}

#line 353 "query.m"
MR_Word MR_CALL 
query__default_incl_desc_0_f_0(void)
#line 353 "query.m"
{
#line 507 "query.m"
  {
#line 507 "query.m"
    MR_bool query__succeeded;

#line 507 "query.m"
    return (MR_Integer) 1;
#line 507 "query.m"
  }
#line 353 "query.m"
}

#line 352 "query.m"
MR_Word MR_CALL 
query__default_cost_kind_0_f_0(void)
#line 352 "query.m"
{
#line 506 "query.m"
  {
#line 506 "query.m"
    MR_bool query__succeeded;

#line 506 "query.m"
    return (MR_Integer) 3;
#line 506 "query.m"
  }
#line 352 "query.m"
}

#line 351 "query.m"
MR_Word MR_CALL 
query__default_order_criteria_0_f_0(void)
#line 351 "query.m"
{
#line 505 "query.m"
  {
#line 505 "query.m"
    MR_bool query__succeeded;

#line 505 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 505 "query.m"
  }
#line 351 "query.m"
}

#line 350 "query.m"
MR_Word MR_CALL 
query__default_summarize_ho_call_sites_0_f_0(void)
#line 350 "query.m"
{
#line 504 "query.m"
  {
#line 504 "query.m"
    MR_bool query__succeeded;

#line 504 "query.m"
    return (MR_Integer) 1;
#line 504 "query.m"
  }
#line 350 "query.m"
}

#line 349 "query.m"
MR_Integer MR_CALL 
query__default_proc_statics_per_rec_type_limit_0_f_0(void)
#line 349 "query.m"
{
#line 503 "query.m"
  {
#line 503 "query.m"
    MR_bool query__succeeded;

#line 503 "query.m"
    return (MR_Integer) 20;
#line 503 "query.m"
  }
#line 349 "query.m"
}

#line 348 "query.m"
MR_Word MR_CALL 
query__default_ancestor_limit_0_f_0(void)
#line 348 "query.m"
{
#line 502 "query.m"
  {
#line 502 "query.m"
    MR_bool query__succeeded;

#line 502 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[8]);
#line 502 "query.m"
  }
#line 348 "query.m"
}

#line 347 "query.m"
MR_Word MR_CALL 
query__default_colour_column_groups_0_f_0(void)
#line 347 "query.m"
{
#line 501 "query.m"
  {
#line 501 "query.m"
    MR_bool query__succeeded;

#line 501 "query.m"
    return (MR_Integer) 0;
#line 501 "query.m"
  }
#line 347 "query.m"
}

#line 346 "query.m"
MR_Word MR_CALL 
query__default_box_tables_0_f_0(void)
#line 346 "query.m"
{
#line 500 "query.m"
  {
#line 500 "query.m"
    MR_bool query__succeeded;

#line 500 "query.m"
    return (MR_Integer) 0;
#line 500 "query.m"
  }
#line 346 "query.m"
}

#line 345 "query.m"
MR_Word MR_CALL 
query__all_fields_0_f_0(void)
#line 345 "query.m"
{
#line 497 "query.m"
  {
#line 497 "query.m"
    MR_bool query__succeeded;

#line 497 "query.m"
    return (MR_Word) &query_scalar_common_1[3];
#line 497 "query.m"
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
#line 486 "query.m"
  {
#line 486 "query.m"
    MR_bool query__succeeded;
#line 486 "query.m"
    MR_Word query__Fields_4;
#line 486 "query.m"
    MR_Word query__Time_6;
#line 486 "query.m"
    MR_Integer query__UserQuanta_14;
#line 486 "query.m"
    MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 450 "query.m"
    MR_String query__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 450 "query.m"
    MR_String query__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 450 "query.m"
    MR_String query__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 450 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 450 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 450 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 450 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 450 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 450 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 450 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 450 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 450 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 450 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 450 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 450 "query.m"
    MR_ArrayPtr query__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 450 "query.m"
    MR_ArrayPtr query__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 450 "query.m"
    MR_ArrayPtr query__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 450 "query.m"
    MR_ArrayPtr query__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 450 "query.m"
    MR_ArrayPtr query__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 450 "query.m"
    MR_ArrayPtr query__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 450 "query.m"
    MR_ArrayPtr query__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 450 "query.m"
    MR_ArrayPtr query__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 450 "query.m"
    MR_ArrayPtr query__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 450 "query.m"
    MR_Word query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 450 "query.m"
    MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 450 "query.m"
    MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 450 "query.m"
    MR_Word query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 450 "query.m"
    MR_String query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 0)));
#line 450 "query.m"
    MR_Integer query__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 1)));
#line 450 "query.m"
    MR_Integer query__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 2)));
#line 450 "query.m"
    MR_Integer query__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Integer query__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 4)));
#line 450 "query.m"
    MR_Integer query__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 5)));
#line 450 "query.m"
    MR_Integer query__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 6)));
#line 450 "query.m"
    MR_Integer query__V_52_52;
#line 450 "query.m"
    MR_Word query__V_53_53;

#line 450 "query.m"
    query__UserQuanta_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 7)));
#line 450 "query.m"
    query__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 8)));
#line 450 "query.m"
    query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 9)));
#line 451 "query.m"
    query__succeeded = (query__UserQuanta_14 > (MR_Integer) 10);
#line 16607 "query.c"
    if (query__succeeded)
#line 490 "query.m"
      query__Time_6 = (MR_Integer) 1;
#line 16611 "query.c"
    else
#line 493 "query.m"
      query__Time_6 = (MR_Integer) 0;
#line 495 "query.m"
    {
#line 495 "query.m"
      query__Fields_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 0) = ((MR_Box) (((MR_Integer) 1 | ((((query__Time_6 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))));
#line 495 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])));
#line 495 "query.m"
    }
#line 486 "query.m"
    return query__Fields_4;
#line 486 "query.m"
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
#line 470 "query.m"
  {
#line 470 "query.m"
    MR_bool query__succeeded;
#line 470 "query.m"
    MR_Word query__HeadVar__2_2;
#line 470 "query.m"
    MR_Word query__V_4_4;

#line 472 "query.m"
    {
#line 472 "query.m"
      query__V_4_4 = query__default_fields_1_f_0(query__Deep_3);
    }
#line 471 "query.m"
    {
#line 471 "query.m"
      query__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 0) = ((MR_Box) (query__V_4_4));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[8])));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 4) = ((MR_Box) ((MR_Integer) 1));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 6) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 2 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[9]));
#line 471 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 8) = ((MR_Box) ((MR_Integer) 1));
#line 471 "query.m"
    }
#line 470 "query.m"
    return query__HeadVar__2_2;
#line 470 "query.m"
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
#line 461 "query.m"
  {
#line 461 "query.m"
    MR_bool query__succeeded;
#line 461 "query.m"
    MR_Word query__Pref_6;

#line 461 "query.m"
#line 461 "query.m"
    switch (MR_tag((MR_Word) query__PrefInd_5)) {
#line 461 "query.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 461 "query.m"
      case (MR_Integer) 0:
#line 461 "query.m"
#line 461 "query.m"
        switch (MR_unmkbody(query__PrefInd_5)) {
#line 461 "query.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 461 "query.m"
          case (MR_Integer) 0:
#line 464 "query.m"
            {
#line 464 "query.m"
              return query__Pref_6 = query__default_preferences_1_f_0(query__Deep_4);
            }
#line 461 "query.m"
            break;
#line 461 "query.m"
          case (MR_Integer) 1:
#line 466 "query.m"
            {
#line 466 "query.m"
              MR_Word query__V_7_7;
#line 467 "query.m"
              MR_Word query__V_10_10;
#line 467 "query.m"
              MR_Word query__V_11_11;
#line 467 "query.m"
              MR_Word query__V_12_12;
#line 467 "query.m"
              MR_Integer query__V_13_13;
#line 467 "query.m"
              MR_Word query__V_14_14;
#line 467 "query.m"
              MR_Word query__V_15_15;
#line 467 "query.m"
              MR_Word query__V_16_16;
#line 467 "query.m"
              MR_Word query__V_17_17;
#line 467 "query.m"
              MR_Word query__V_18_18;
#line 467 "query.m"
              MR_Word query__V_19_19;
#line 467 "query.m"
              MR_Word query__V_20_20;
#line 467 "query.m"
              MR_Word query__V_9_9;

#line 467 "query.m"
              {
#line 467 "query.m"
                query__V_7_7 = query__default_preferences_1_f_0(query__Deep_4);
              }
#line 467 "query.m"
              query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 0)));
#line 467 "query.m"
              query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 467 "query.m"
              query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 467 "query.m"
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 2)));
#line 467 "query.m"
              query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 3)));
#line 467 "query.m"
              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 4)));
#line 467 "query.m"
              query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 5)));
#line 467 "query.m"
              query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 467 "query.m"
              query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 467 "query.m"
              query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 467 "query.m"
              query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 7)));
#line 467 "query.m"
              query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 8)));
#line 467 "query.m"
              {
#line 467 "query.m"
                query__Pref_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 0) = ((MR_Box) (&query_scalar_common_1[3]));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 1) = ((MR_Box) ((query__V_10_10 | ((query__V_11_11 << (MR_Integer) 1)))));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 2) = ((MR_Box) (query__V_12_12));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 3) = ((MR_Box) (query__V_13_13));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 4) = ((MR_Box) (query__V_14_14));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 5) = ((MR_Box) (query__V_15_15));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 6) = ((MR_Box) ((query__V_16_16 | ((((query__V_17_17 << (MR_Integer) 1)) | ((query__V_18_18 << (MR_Integer) 3)))))));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 7) = ((MR_Box) (query__V_19_19));
#line 467 "query.m"
                MR_hl_field(MR_mktag(0), query__Pref_6, 8) = ((MR_Box) (query__V_20_20));
#line 467 "query.m"
              }
#line 466 "query.m"
            }
#line 461 "query.m"
            break;
#line 461 "query.m"
        }
#line 461 "query.m"
        break;
#line 461 "query.m"
      case (MR_Integer) 1:
#line 461 "query.m"
        query__Pref_6 = (MR_Word) MR_body(((MR_Word) query__PrefInd_5), (MR_Integer) 1);
#line 461 "query.m"
        break;
#line 461 "query.m"
    }
#line 461 "query.m"
    return query__Pref_6;
#line 461 "query.m"
  }
#line 340 "query.m"
}

#line 338 "query.m"
MR_Word MR_CALL 
query__default_command_0_f_0(void)
#line 338 "query.m"
{
#line 457 "query.m"
  {
#line 457 "query.m"
    MR_bool query__succeeded;

#line 457 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 457 "query.m"
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
#line 449 "query.m"
  {
#line 449 "query.m"
    MR_bool query__succeeded;
#line 449 "query.m"
    MR_Word query__ShouldDisplayTimes_4;
#line 449 "query.m"
    MR_Integer query__UserQuanta_5;
#line 449 "query.m"
    MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 450 "query.m"
    MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 450 "query.m"
    MR_String query__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 450 "query.m"
    MR_String query__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 450 "query.m"
    MR_ArrayPtr query__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 450 "query.m"
    MR_ArrayPtr query__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 450 "query.m"
    MR_ArrayPtr query__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 450 "query.m"
    MR_ArrayPtr query__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 450 "query.m"
    MR_ArrayPtr query__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 450 "query.m"
    MR_ArrayPtr query__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 450 "query.m"
    MR_ArrayPtr query__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 450 "query.m"
    MR_ArrayPtr query__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 450 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 450 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 450 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 450 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 450 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 450 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 450 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 450 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 450 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 450 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 450 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 450 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 450 "query.m"
    MR_Word query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 450 "query.m"
    MR_Word query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 450 "query.m"
    MR_Word query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 450 "query.m"
    MR_Word query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 450 "query.m"
    MR_String query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 0)));
#line 450 "query.m"
    MR_Integer query__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 1)));
#line 450 "query.m"
    MR_Integer query__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 2)));
#line 450 "query.m"
    MR_Integer query__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Integer query__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 4)));
#line 450 "query.m"
    MR_Integer query__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 5)));
#line 450 "query.m"
    MR_Integer query__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 6)));
#line 450 "query.m"
    MR_Integer query__V_43_43;
#line 450 "query.m"
    MR_Word query__V_44_44;

#line 450 "query.m"
    query__UserQuanta_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 7)));
#line 450 "query.m"
    query__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 8)));
#line 450 "query.m"
    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 9)));
#line 451 "query.m"
    query__succeeded = (query__UserQuanta_5 > (MR_Integer) 10);
#line 453 "query.m"
    if (query__succeeded)
#line 452 "query.m"
      query__ShouldDisplayTimes_4 = (MR_Integer) 1;
#line 453 "query.m"
    else
#line 454 "query.m"
      query__ShouldDisplayTimes_4 = (MR_Integer) 0;
#line 449 "query.m"
    return query__ShouldDisplayTimes_4;
#line 449 "query.m"
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
#line 867 "query.m"
  {
#line 867 "query.m"
    MR_bool query__succeeded;
#line 867 "query.m"
    MR_Word query__MaybePreferences_4;
#line 867 "query.m"
    MR_Word query__Pieces_5;
#line 898 "query.m"
    MR_Word query__Fields_18;
#line 898 "query.m"
    MR_Word query__Box_19;
#line 898 "query.m"
    MR_Word query__Colour_20;
#line 898 "query.m"
    MR_Word query__MaybeAncestorLimit_22;
#line 898 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_23;
#line 898 "query.m"
    MR_Word query__SummarizeHoCallSites_24;
#line 898 "query.m"
    MR_Word query__Order_25;
#line 898 "query.m"
    MR_Word query__Contour_26;
#line 898 "query.m"
    MR_Word query__Time_27;
#line 898 "query.m"
    MR_Word query__ModuleQual_28;
#line 898 "query.m"
    MR_Word query__InactiveItems_29;
#line 898 "query.m"
    MR_Word query__DeveloperMode_30;
#line 873 "query.m"
    MR_String query__FieldsStr_6;
#line 873 "query.m"
    MR_String query__BoxStr_7;
#line 873 "query.m"
    MR_String query__ColourStr_8;
#line 873 "query.m"
    MR_String query__MaybeAncestorLimitStr_9;
#line 873 "query.m"
    MR_String query__ProcStaticsPerRecTypeLimitStr_10;
#line 873 "query.m"
    MR_String query__SummarizeHoCallSitesStr_11;
#line 873 "query.m"
    MR_String query__OrderStr_12;
#line 873 "query.m"
    MR_String query__ContourStr_13;
#line 873 "query.m"
    MR_String query__TimeStr_14;
#line 873 "query.m"
    MR_String query__ModuleQualStr_15;
#line 873 "query.m"
    MR_String query__InactiveItemsStr_16;
#line 873 "query.m"
    MR_String query__DeveloperModeStr_17;
#line 873 "query.m"
    MR_Word query__V_33_33;
#line 873 "query.m"
    MR_Word query__V_34_34;
#line 873 "query.m"
    MR_Word query__V_35_35;
#line 873 "query.m"
    MR_Word query__V_36_36;
#line 873 "query.m"
    MR_Word query__V_37_37;
#line 873 "query.m"
    MR_Word query__V_38_38;
#line 873 "query.m"
    MR_Word query__V_39_39;
#line 873 "query.m"
    MR_Word query__V_40_40;
#line 873 "query.m"
    MR_Word query__V_41_41;
#line 873 "query.m"
    MR_Word query__V_42_42;
#line 873 "query.m"
    MR_Word query__V_43_43;
#line 873 "query.m"
    MR_Word query__V_44_44;
#line 873 "query.m"
    MR_Word query__Pieces_47;
#line 873 "query.m"
    MR_String query__PortStr_48;
#line 873 "query.m"
    MR_String query__TimeStr_49;
#line 873 "query.m"
    MR_String query__CallSeqsStr_50;
#line 873 "query.m"
    MR_String query__AllocStr_51;
#line 873 "query.m"
    MR_String query__MemoryStr_52;
#line 873 "query.m"
    MR_Word query__Port_53;
#line 873 "query.m"
    MR_Word query__Time_54;
#line 873 "query.m"
    MR_Word query__CallSeqs_55;
#line 873 "query.m"
    MR_Word query__Alloc_56;
#line 873 "query.m"
    MR_Word query__Memory_57;
#line 873 "query.m"
    MR_Char query__V_58_58;
#line 873 "query.m"
    MR_Word query__V_59_59;
#line 873 "query.m"
    MR_Word query__V_60_60;
#line 873 "query.m"
    MR_Word query__V_61_61;
#line 873 "query.m"
    MR_Word query__V_62_62;
#line 873 "query.m"
    MR_Word query__V_63_63;
#line 986 "query.m"
    MR_Integer query__lo_0;
#line 986 "query.m"
    MR_Integer query__hi_1;
#line 986 "query.m"
    MR_Integer query__mid_2;
#line 986 "query.m"
    MR_Integer query__result_3;
#line 1028 "query.m"
    MR_Integer query__lo_4;
#line 1028 "query.m"
    MR_Integer query__hi_5;
#line 1028 "query.m"
    MR_Integer query__mid_6;
#line 1028 "query.m"
    MR_Integer query__result_7;
#line 879 "query.m"
    MR_Integer query__AncestorLimit_21;

#line 868 "query.m"
    {
#line 868 "query.m"
      util__split_3_p_0(query__QueryString_3, (MR_Char) 47, &query__Pieces_5);
    }
#line 870 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 870 "query.m"
    if (query__succeeded)
#line 870 "query.m"
      {
#line 870 "query.m"
        query__FieldsStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 870 "query.m"
        query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 870 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 870 "query.m"
        if (query__succeeded)
#line 870 "query.m"
          {
#line 870 "query.m"
            query__BoxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 0)));
#line 870 "query.m"
            query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 1)));
#line 870 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 870 "query.m"
            if (query__succeeded)
#line 870 "query.m"
              {
#line 870 "query.m"
                query__ColourStr_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 0)));
#line 870 "query.m"
                query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 1)));
#line 871 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                if (query__succeeded)
#line 871 "query.m"
                  {
#line 871 "query.m"
                    query__MaybeAncestorLimitStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 0)));
#line 871 "query.m"
                    query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 1)));
#line 871 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
                    if (query__succeeded)
#line 871 "query.m"
                      {
#line 871 "query.m"
                        query__ProcStaticsPerRecTypeLimitStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 0)));
#line 871 "query.m"
                        query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 1)));
#line 872 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                        if (query__succeeded)
#line 872 "query.m"
                          {
#line 872 "query.m"
                            query__SummarizeHoCallSitesStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 0)));
#line 872 "query.m"
                            query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 1)));
#line 872 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                            if (query__succeeded)
#line 872 "query.m"
                              {
#line 872 "query.m"
                                query__OrderStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 0)));
#line 872 "query.m"
                                query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 1)));
#line 872 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                                if (query__succeeded)
#line 872 "query.m"
                                  {
#line 872 "query.m"
                                    query__ContourStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 0)));
#line 872 "query.m"
                                    query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 1)));
#line 872 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                                    if (query__succeeded)
#line 872 "query.m"
                                      {
#line 872 "query.m"
                                        query__TimeStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 0)));
#line 872 "query.m"
                                        query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 1)));
#line 873 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                                        if (query__succeeded)
#line 873 "query.m"
                                          {
#line 873 "query.m"
                                            query__ModuleQualStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 0)));
#line 873 "query.m"
                                            query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 1)));
#line 873 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                                            if (query__succeeded)
#line 873 "query.m"
                                              {
#line 873 "query.m"
                                                query__InactiveItemsStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 0)));
#line 873 "query.m"
                                                query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 1)));
#line 873 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                                                if (query__succeeded)
#line 873 "query.m"
                                                  {
#line 873 "query.m"
                                                    query__DeveloperModeStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 0)));
#line 873 "query.m"
                                                    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 1)));
#line 873 "query.m"
                                                    query__succeeded = (query__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "query.m"
                                                    if (query__succeeded)
#line 873 "query.m"
                                                      {
#line 529 "query.m"
                                                        query__V_58_58 = (MR_Char) 45;
#line 1051 "query.m"
                                                        {
#line 1051 "query.m"
                                                          util__split_3_p_0(query__FieldsStr_6, query__V_58_58, &query__Pieces_47);
                                                        }
#line 1052 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_47)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "query.m"
                                                        if (query__succeeded)
#line 1052 "query.m"
                                                          {
#line 1052 "query.m"
                                                            query__PortStr_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 0)));
#line 1052 "query.m"
                                                            query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_47, (MR_Integer) 1)));
#line 1052 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "query.m"
                                                            if (query__succeeded)
#line 1052 "query.m"
                                                              {
#line 1052 "query.m"
                                                                query__TimeStr_49 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 0)));
#line 1052 "query.m"
                                                                query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_59_59, (MR_Integer) 1)));
#line 1052 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "query.m"
                                                                if (query__succeeded)
#line 1052 "query.m"
                                                                  {
#line 1052 "query.m"
                                                                    query__CallSeqsStr_50 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
#line 1052 "query.m"
                                                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
#line 1052 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "query.m"
                                                                    if (query__succeeded)
#line 1052 "query.m"
                                                                      {
#line 1052 "query.m"
                                                                        query__AllocStr_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
#line 1052 "query.m"
                                                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
#line 1052 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 1052 "query.m"
                                                                        if (query__succeeded)
#line 1052 "query.m"
                                                                          {
#line 1052 "query.m"
                                                                            query__MemoryStr_52 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
#line 1052 "query.m"
                                                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
#line 1052 "query.m"
                                                                            query__succeeded = (query__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "query.m"
                                                                            if (query__succeeded)
#line 873 "query.m"
                                                                              {
#line 974 "query.m"
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "_") == 0))
#line 974 "query.m"
                                                                                  {
#line 974 "query.m"
                                                                                    query__Port_53 = (MR_Integer) 0;
#line 974 "query.m"
                                                                                    query__succeeded = MR_TRUE;
#line 974 "query.m"
                                                                                  }
#line 974 "query.m"
                                                                                else
#line 974 "query.m"
                                                                                if ((strcmp(query__PortStr_48, (MR_String) "p") == 0))
#line 975 "query.m"
                                                                                  {
#line 975 "query.m"
                                                                                    query__Port_53 = (MR_Integer) 1;
#line 975 "query.m"
                                                                                    query__succeeded = MR_TRUE;
#line 975 "query.m"
                                                                                  }
#line 974 "query.m"
                                                                                else
#line 974 "query.m"
                                                                                  query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                if (query__succeeded)
#line 873 "query.m"
                                                                                  {
#line 986 "query.m"
                                                                                    /* binary string simple lookup switch */
#line 986 "query.m"
                                                                                    query__lo_0 = (MR_Integer) 0;
#line 986 "query.m"
                                                                                    query__hi_1 = (MR_Integer) 5;
#line 986 "query.m"
                                                                                    do
#line 986 "query.m"
                                                                                      {
#line 986 "query.m"
                                                                                        query__mid_2 = (((query__lo_0 + query__hi_1)) / (MR_Integer) 2);
#line 986 "query.m"
                                                                                        query__result_3 = MR_strcmp(query__TimeStr_49, ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_0);
#line 986 "query.m"
                                                                                        if ((query__result_3 == (MR_Integer) 0))
#line 986 "query.m"
                                                                                          {
#line 986 "query.m"
                                                                                            query__Time_54 = ((&query_vector_common_4[0 + query__mid_2]))->query__vector_common_type_4_0__vct_4_f_1;
#line 986 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 986 "query.m"
                                                                                            /* jump out of search loop */
#line 986 "query.m"
                                                                                            goto label_0;
#line 986 "query.m"
                                                                                          }
#line 986 "query.m"
                                                                                        else
#line 986 "query.m"
                                                                                        if ((query__result_3 < (MR_Integer) 0))
#line 986 "query.m"
                                                                                          query__hi_1 = (query__mid_2 - (MR_Integer) 1);
#line 986 "query.m"
                                                                                        else
#line 986 "query.m"
                                                                                          query__lo_0 = (query__mid_2 + (MR_Integer) 1);
#line 986 "query.m"
                                                                                      }
#line 986 "query.m"
                                                                                    while ((query__lo_0 <= query__hi_1));
#line 986 "query.m"
                                                                                    query__succeeded = MR_FALSE;
#line 986 "query.m"
                                                                                  label_0:;
#line 873 "query.m"
                                                                                    if (query__succeeded)
#line 873 "query.m"
                                                                                      {
#line 1002 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "S") == 0))
#line 1004 "query.m"
                                                                                          {
#line 1004 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 2;
#line 1004 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1004 "query.m"
                                                                                          }
#line 1002 "query.m"
                                                                                        else
#line 1002 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "_") == 0))
#line 1002 "query.m"
                                                                                          {
#line 1002 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 0;
#line 1002 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1002 "query.m"
                                                                                          }
#line 1002 "query.m"
                                                                                        else
#line 1002 "query.m"
                                                                                        if ((strcmp(query__CallSeqsStr_50, (MR_String) "s") == 0))
#line 1003 "query.m"
                                                                                          {
#line 1003 "query.m"
                                                                                            query__CallSeqs_55 = (MR_Integer) 1;
#line 1003 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 1003 "query.m"
                                                                                          }
#line 1002 "query.m"
                                                                                        else
#line 1002 "query.m"
                                                                                          query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                        if (query__succeeded)
#line 873 "query.m"
                                                                                          {
#line 1015 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "A") == 0))
#line 1017 "query.m"
                                                                                              {
#line 1017 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 2;
#line 1017 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1017 "query.m"
                                                                                              }
#line 1015 "query.m"
                                                                                            else
#line 1015 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "_") == 0))
#line 1015 "query.m"
                                                                                              {
#line 1015 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 0;
#line 1015 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1015 "query.m"
                                                                                              }
#line 1015 "query.m"
                                                                                            else
#line 1015 "query.m"
                                                                                            if ((strcmp(query__AllocStr_51, (MR_String) "a") == 0))
#line 1016 "query.m"
                                                                                              {
#line 1016 "query.m"
                                                                                                query__Alloc_56 = (MR_Integer) 1;
#line 1016 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 1016 "query.m"
                                                                                              }
#line 1015 "query.m"
                                                                                            else
#line 1015 "query.m"
                                                                                              query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                            if (query__succeeded)
#line 873 "query.m"
                                                                                              {
#line 1028 "query.m"
                                                                                                /* binary string simple lookup switch */
#line 1028 "query.m"
                                                                                                query__lo_4 = (MR_Integer) 0;
#line 1028 "query.m"
                                                                                                query__hi_5 = (MR_Integer) 4;
#line 1028 "query.m"
                                                                                                do
#line 1028 "query.m"
                                                                                                  {
#line 1028 "query.m"
                                                                                                    query__mid_6 = (((query__lo_4 + query__hi_5)) / (MR_Integer) 2);
#line 1028 "query.m"
                                                                                                    query__result_7 = MR_strcmp(query__MemoryStr_52, ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_0);
#line 1028 "query.m"
                                                                                                    if ((query__result_7 == (MR_Integer) 0))
#line 1028 "query.m"
                                                                                                      {
#line 1028 "query.m"
                                                                                                        query__Memory_57 = ((&query_vector_common_5[0 + query__mid_6]))->query__vector_common_type_5_0__vct_5_f_1;
#line 1028 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1028 "query.m"
                                                                                                        /* jump out of search loop */
#line 1028 "query.m"
                                                                                                        goto label_1;
#line 1028 "query.m"
                                                                                                      }
#line 1028 "query.m"
                                                                                                    else
#line 1028 "query.m"
                                                                                                    if ((query__result_7 < (MR_Integer) 0))
#line 1028 "query.m"
                                                                                                      query__hi_5 = (query__mid_6 - (MR_Integer) 1);
#line 1028 "query.m"
                                                                                                    else
#line 1028 "query.m"
                                                                                                      query__lo_4 = (query__mid_6 + (MR_Integer) 1);
#line 1028 "query.m"
                                                                                                  }
#line 1028 "query.m"
                                                                                                while ((query__lo_4 <= query__hi_5));
#line 1028 "query.m"
                                                                                                query__succeeded = MR_FALSE;
#line 1028 "query.m"
                                                                                              label_1:;
#line 873 "query.m"
                                                                                                if (query__succeeded)
#line 873 "query.m"
                                                                                                  {
#line 1059 "query.m"
                                                                                                    {
#line 1059 "query.m"
                                                                                                      query__Fields_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1059 "query.m"
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 0) = ((MR_Box) ((query__Port_53 | ((((query__Time_54 << (MR_Integer) 1)) | ((((query__CallSeqs_55 << (MR_Integer) 4)) | ((query__Alloc_56 << (MR_Integer) 6)))))))));
#line 1059 "query.m"
                                                                                                      MR_hl_field(MR_mktag(0), query__Fields_18, 1) = ((MR_Box) (query__Memory_57));
#line 1059 "query.m"
                                                                                                    }
#line 1295 "query.m"
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "box") == 0))
#line 1295 "query.m"
                                                                                                      {
#line 1295 "query.m"
                                                                                                        query__Box_19 = (MR_Integer) 0;
#line 1295 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1295 "query.m"
                                                                                                      }
#line 1295 "query.m"
                                                                                                    else
#line 1295 "query.m"
                                                                                                    if ((strcmp(query__BoxStr_7, (MR_String) "nobox") == 0))
#line 1296 "query.m"
                                                                                                      {
#line 1296 "query.m"
                                                                                                        query__Box_19 = (MR_Integer) 1;
#line 1296 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1296 "query.m"
                                                                                                      }
#line 1295 "query.m"
                                                                                                    else
#line 1295 "query.m"
                                                                                                      query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                    if (query__succeeded)
#line 873 "query.m"
                                                                                                      {
#line 1283 "query.m"
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "cols") == 0))
#line 1283 "query.m"
                                                                                                          {
#line 1283 "query.m"
                                                                                                            query__Colour_20 = (MR_Integer) 0;
#line 1283 "query.m"
                                                                                                            query__succeeded = MR_TRUE;
#line 1283 "query.m"
                                                                                                          }
#line 1283 "query.m"
                                                                                                        else
#line 1283 "query.m"
                                                                                                        if ((strcmp(query__ColourStr_8, (MR_String) "none") == 0))
#line 1284 "query.m"
                                                                                                          {
#line 1284 "query.m"
                                                                                                            query__Colour_20 = (MR_Integer) 1;
#line 1284 "query.m"
                                                                                                            query__succeeded = MR_TRUE;
#line 1284 "query.m"
                                                                                                          }
#line 1283 "query.m"
                                                                                                        else
#line 1283 "query.m"
                                                                                                          query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                        if (query__succeeded)
#line 873 "query.m"
                                                                                                          {
#line 877 "query.m"
                                                                                                            {
#line 877 "query.m"
                                                                                                              query__succeeded = mercury__string__to_int_2_p_0(query__MaybeAncestorLimitStr_9, &query__AncestorLimit_21);
                                                                                                            }
#line 879 "query.m"
                                                                                                            if (query__succeeded)
#line 878 "query.m"
                                                                                                              {
#line 878 "query.m"
                                                                                                                {
#line 878 "query.m"
                                                                                                                  query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 878 "query.m"
                                                                                                                  MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_22, 0) = ((MR_Box) (query__AncestorLimit_21));
#line 878 "query.m"
                                                                                                                }
#line 878 "query.m"
                                                                                                                query__succeeded = MR_TRUE;
#line 878 "query.m"
                                                                                                              }
#line 879 "query.m"
                                                                                                            else
#line 881 "query.m"
                                                                                                              {
#line 879 "query.m"
                                                                                                                query__succeeded = (strcmp(query__MaybeAncestorLimitStr_9, (MR_String) "no") == 0);
#line 881 "query.m"
                                                                                                                if (query__succeeded)
#line 881 "query.m"
                                                                                                                  {
#line 880 "query.m"
                                                                                                                    query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 880 "query.m"
                                                                                                                    query__succeeded = MR_TRUE;
#line 881 "query.m"
                                                                                                                  }
#line 881 "query.m"
                                                                                                              }
#line 873 "query.m"
                                                                                                            if (query__succeeded)
#line 873 "query.m"
                                                                                                              {
#line 884 "query.m"
                                                                                                                {
#line 884 "query.m"
                                                                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__ProcStaticsPerRecTypeLimitStr_10, &query__ProcStaticsPerRecTypeLimit_23);
                                                                                                                }
#line 873 "query.m"
                                                                                                                if (query__succeeded)
#line 873 "query.m"
                                                                                                                  {
#line 1147 "query.m"
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "sum") == 0))
#line 1147 "query.m"
                                                                                                                      {
#line 1147 "query.m"
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 0;
#line 1147 "query.m"
                                                                                                                        query__succeeded = MR_TRUE;
#line 1147 "query.m"
                                                                                                                      }
#line 1147 "query.m"
                                                                                                                    else
#line 1147 "query.m"
                                                                                                                    if ((strcmp(query__SummarizeHoCallSitesStr_11, (MR_String) "nosum") == 0))
#line 1148 "query.m"
                                                                                                                      {
#line 1148 "query.m"
                                                                                                                        query__SummarizeHoCallSites_24 = (MR_Integer) 1;
#line 1148 "query.m"
                                                                                                                        query__succeeded = MR_TRUE;
#line 1148 "query.m"
                                                                                                                      }
#line 1147 "query.m"
                                                                                                                    else
#line 1147 "query.m"
                                                                                                                      query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                                    if (query__succeeded)
#line 873 "query.m"
                                                                                                                      {
#line 1179 "query.m"
                                                                                                                        query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "context") == 0);
#line 1182 "query.m"
                                                                                                                        if (query__succeeded)
#line 1181 "query.m"
                                                                                                                          {
#line 1181 "query.m"
                                                                                                                            query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1181 "query.m"
                                                                                                                            query__succeeded = MR_TRUE;
#line 1181 "query.m"
                                                                                                                          }
#line 1182 "query.m"
                                                                                                                        else
#line 1186 "query.m"
                                                                                                                          {
#line 1183 "query.m"
                                                                                                                            query__succeeded = (strcmp(query__OrderStr_12, (MR_String) "name") == 0);
#line 1186 "query.m"
                                                                                                                            if (query__succeeded)
#line 1185 "query.m"
                                                                                                                              {
#line 1185 "query.m"
                                                                                                                                query__Order_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1185 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1185 "query.m"
                                                                                                                              }
#line 1186 "query.m"
                                                                                                                            else
#line 1194 "query.m"
                                                                                                                              {
#line 1194 "query.m"
                                                                                                                                MR_Word query__Pieces_70;
#line 1194 "query.m"
                                                                                                                                MR_String query__CostKindStr_71;
#line 1194 "query.m"
                                                                                                                                MR_String query__InclDescStr_72;
#line 1194 "query.m"
                                                                                                                                MR_String query__ScopeStr_73;
#line 1194 "query.m"
                                                                                                                                MR_Word query__CostKind_74;
#line 1194 "query.m"
                                                                                                                                MR_Word query__InclDesc_75;
#line 1194 "query.m"
                                                                                                                                MR_Word query__Scope_76;
#line 1194 "query.m"
                                                                                                                                MR_String query__V_78_78;
#line 1194 "query.m"
                                                                                                                                MR_Word query__V_79_79;
#line 1194 "query.m"
                                                                                                                                MR_Word query__V_80_80;
#line 1194 "query.m"
                                                                                                                                MR_Word query__V_81_81;
#line 1194 "query.m"
                                                                                                                                MR_Word query__V_82_82;
#line 1087 "query.m"
                                                                                                                                MR_Integer query__lo_8;
#line 1087 "query.m"
                                                                                                                                MR_Integer query__hi_9;
#line 1087 "query.m"
                                                                                                                                MR_Integer query__mid_10;
#line 1087 "query.m"
                                                                                                                                MR_Integer query__result_11;

#line 1187 "query.m"
                                                                                                                                {
#line 1187 "query.m"
                                                                                                                                  util__split_3_p_0(query__OrderStr_12, (MR_Char) 45, &query__Pieces_70);
                                                                                                                                }
#line 1188 "query.m"
                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_70)) == (MR_mktag((MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                if (query__succeeded)
#line 1188 "query.m"
                                                                                                                                  {
#line 1188 "query.m"
                                                                                                                                    query__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 0)));
#line 1188 "query.m"
                                                                                                                                    query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_70, (MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                    query__succeeded = (strcmp(query__V_78_78, (MR_String) "cost") == 0);
#line 1194 "query.m"
                                                                                                                                    if (query__succeeded)
#line 1194 "query.m"
                                                                                                                                      {
#line 1188 "query.m"
                                                                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                        if (query__succeeded)
#line 1188 "query.m"
                                                                                                                                          {
#line 1188 "query.m"
                                                                                                                                            query__CostKindStr_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
#line 1188 "query.m"
                                                                                                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                            if (query__succeeded)
#line 1188 "query.m"
                                                                                                                                              {
#line 1188 "query.m"
                                                                                                                                                query__InclDescStr_72 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
#line 1188 "query.m"
                                                                                                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                                if (query__succeeded)
#line 1188 "query.m"
                                                                                                                                                  {
#line 1188 "query.m"
                                                                                                                                                    query__ScopeStr_73 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
#line 1188 "query.m"
                                                                                                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
#line 1188 "query.m"
                                                                                                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1194 "query.m"
                                                                                                                                                    if (query__succeeded)
#line 1194 "query.m"
                                                                                                                                                      {
#line 1087 "query.m"
                                                                                                                                                        /* binary string simple lookup switch */
#line 1087 "query.m"
                                                                                                                                                        query__lo_8 = (MR_Integer) 0;
#line 1087 "query.m"
                                                                                                                                                        query__hi_9 = (MR_Integer) 5;
#line 1087 "query.m"
                                                                                                                                                        do
#line 1087 "query.m"
                                                                                                                                                          {
#line 1087 "query.m"
                                                                                                                                                            query__mid_10 = (((query__lo_8 + query__hi_9)) / (MR_Integer) 2);
#line 1087 "query.m"
                                                                                                                                                            query__result_11 = MR_strcmp(query__CostKindStr_71, ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_0);
#line 1087 "query.m"
                                                                                                                                                            if ((query__result_11 == (MR_Integer) 0))
#line 1087 "query.m"
                                                                                                                                                              {
#line 1087 "query.m"
                                                                                                                                                                query__CostKind_74 = ((&query_vector_common_6[0 + query__mid_10]))->query__vector_common_type_6_0__vct_6_f_1;
#line 1087 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1087 "query.m"
                                                                                                                                                                /* jump out of search loop */
#line 1087 "query.m"
                                                                                                                                                                goto label_2;
#line 1087 "query.m"
                                                                                                                                                              }
#line 1087 "query.m"
                                                                                                                                                            else
#line 1087 "query.m"
                                                                                                                                                            if ((query__result_11 < (MR_Integer) 0))
#line 1087 "query.m"
                                                                                                                                                              query__hi_9 = (query__mid_10 - (MR_Integer) 1);
#line 1087 "query.m"
                                                                                                                                                            else
#line 1087 "query.m"
                                                                                                                                                              query__lo_8 = (query__mid_10 + (MR_Integer) 1);
#line 1087 "query.m"
                                                                                                                                                          }
#line 1087 "query.m"
                                                                                                                                                        while ((query__lo_8 <= query__hi_9));
#line 1087 "query.m"
                                                                                                                                                        query__succeeded = MR_FALSE;
#line 1087 "query.m"
                                                                                                                                                      label_2:;
#line 1194 "query.m"
                                                                                                                                                        if (query__succeeded)
#line 1194 "query.m"
                                                                                                                                                          {
#line 1103 "query.m"
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "both") == 0))
#line 1104 "query.m"
                                                                                                                                                              {
#line 1104 "query.m"
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 1;
#line 1104 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1104 "query.m"
                                                                                                                                                              }
#line 1103 "query.m"
                                                                                                                                                            else
#line 1103 "query.m"
                                                                                                                                                            if ((strcmp(query__InclDescStr_72, (MR_String) "self") == 0))
#line 1103 "query.m"
                                                                                                                                                              {
#line 1103 "query.m"
                                                                                                                                                                query__InclDesc_75 = (MR_Integer) 0;
#line 1103 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1103 "query.m"
                                                                                                                                                              }
#line 1103 "query.m"
                                                                                                                                                            else
#line 1103 "query.m"
                                                                                                                                                              query__succeeded = MR_FALSE;
#line 1194 "query.m"
                                                                                                                                                            if (query__succeeded)
#line 1194 "query.m"
                                                                                                                                                              {
#line 1207 "query.m"
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "oa") == 0))
#line 1208 "query.m"
                                                                                                                                                                  {
#line 1208 "query.m"
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 1;
#line 1208 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1208 "query.m"
                                                                                                                                                                  }
#line 1207 "query.m"
                                                                                                                                                                else
#line 1207 "query.m"
                                                                                                                                                                if ((strcmp(query__ScopeStr_73, (MR_String) "pc") == 0))
#line 1207 "query.m"
                                                                                                                                                                  {
#line 1207 "query.m"
                                                                                                                                                                    query__Scope_76 = (MR_Integer) 0;
#line 1207 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1207 "query.m"
                                                                                                                                                                  }
#line 1207 "query.m"
                                                                                                                                                                else
#line 1207 "query.m"
                                                                                                                                                                  query__succeeded = MR_FALSE;
#line 1194 "query.m"
                                                                                                                                                                if (query__succeeded)
#line 1194 "query.m"
                                                                                                                                                                  {
#line 1193 "query.m"
                                                                                                                                                                    {
#line 1193 "query.m"
                                                                                                                                                                      query__Order_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1193 "query.m"
                                                                                                                                                                      MR_hl_field(MR_mktag(1), query__Order_25, 0) = ((MR_Box) ((query__CostKind_74 | ((((query__InclDesc_75 << (MR_Integer) 3)) | ((query__Scope_76 << (MR_Integer) 4)))))));
#line 1193 "query.m"
                                                                                                                                                                    }
#line 1193 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1194 "query.m"
                                                                                                                                                                  }
#line 1194 "query.m"
                                                                                                                                                              }
#line 1194 "query.m"
                                                                                                                                                          }
#line 1194 "query.m"
                                                                                                                                                      }
#line 1188 "query.m"
                                                                                                                                                  }
#line 1188 "query.m"
                                                                                                                                              }
#line 1188 "query.m"
                                                                                                                                          }
#line 1194 "query.m"
                                                                                                                                      }
#line 1188 "query.m"
                                                                                                                                  }
#line 1194 "query.m"
                                                                                                                              }
#line 1186 "query.m"
                                                                                                                          }
#line 873 "query.m"
                                                                                                                        if (query__succeeded)
#line 873 "query.m"
                                                                                                                          {
#line 1219 "query.m"
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "ac") == 0))
#line 1219 "query.m"
                                                                                                                              {
#line 1219 "query.m"
                                                                                                                                query__Contour_26 = (MR_Integer) 0;
#line 1219 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1219 "query.m"
                                                                                                                              }
#line 1219 "query.m"
                                                                                                                            else
#line 1219 "query.m"
                                                                                                                            if ((strcmp(query__ContourStr_13, (MR_String) "nc") == 0))
#line 1220 "query.m"
                                                                                                                              {
#line 1220 "query.m"
                                                                                                                                query__Contour_26 = (MR_Integer) 1;
#line 1220 "query.m"
                                                                                                                                query__succeeded = MR_TRUE;
#line 1220 "query.m"
                                                                                                                              }
#line 1219 "query.m"
                                                                                                                            else
#line 1219 "query.m"
                                                                                                                              query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                                            if (query__succeeded)
#line 873 "query.m"
                                                                                                                              {
#line 1232 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "mi") == 0))
#line 1233 "query.m"
                                                                                                                                  {
#line 1233 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 1;
#line 1233 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1233 "query.m"
                                                                                                                                  }
#line 1232 "query.m"
                                                                                                                                else
#line 1232 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "no") == 0))
#line 1232 "query.m"
                                                                                                                                  {
#line 1232 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 0;
#line 1232 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1232 "query.m"
                                                                                                                                  }
#line 1232 "query.m"
                                                                                                                                else
#line 1232 "query.m"
                                                                                                                                if ((strcmp(query__TimeStr_14, (MR_String) "th") == 0))
#line 1234 "query.m"
                                                                                                                                  {
#line 1234 "query.m"
                                                                                                                                    query__Time_27 = (MR_Integer) 2;
#line 1234 "query.m"
                                                                                                                                    query__succeeded = MR_TRUE;
#line 1234 "query.m"
                                                                                                                                  }
#line 1232 "query.m"
                                                                                                                                else
#line 1232 "query.m"
                                                                                                                                  query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                                                if (query__succeeded)
#line 873 "query.m"
                                                                                                                                  {
#line 1158 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqa") == 0))
#line 1158 "query.m"
                                                                                                                                      {
#line 1158 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 0;
#line 1158 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1158 "query.m"
                                                                                                                                      }
#line 1158 "query.m"
                                                                                                                                    else
#line 1158 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqn") == 0))
#line 1160 "query.m"
                                                                                                                                      {
#line 1160 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 2;
#line 1160 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1160 "query.m"
                                                                                                                                      }
#line 1158 "query.m"
                                                                                                                                    else
#line 1158 "query.m"
                                                                                                                                    if ((strcmp(query__ModuleQualStr_15, (MR_String) "mqwd") == 0))
#line 1159 "query.m"
                                                                                                                                      {
#line 1159 "query.m"
                                                                                                                                        query__ModuleQual_28 = (MR_Integer) 1;
#line 1159 "query.m"
                                                                                                                                        query__succeeded = MR_TRUE;
#line 1159 "query.m"
                                                                                                                                      }
#line 1158 "query.m"
                                                                                                                                    else
#line 1158 "query.m"
                                                                                                                                      query__succeeded = MR_FALSE;
#line 873 "query.m"
                                                                                                                                    if (query__succeeded)
#line 873 "query.m"
                                                                                                                                      {
#line 891 "query.m"
                                                                                                                                        {
#line 891 "query.m"
                                                                                                                                          query__succeeded = query__string_to_inactive_items_2_p_0(query__InactiveItemsStr_16, &query__InactiveItems_29);
                                                                                                                                        }
#line 873 "query.m"
                                                                                                                                        if (query__succeeded)
#line 1271 "query.m"
                                                                                                                                          {
#line 1271 "query.m"
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "dev") == 0))
#line 1271 "query.m"
                                                                                                                                              {
#line 1271 "query.m"
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 0;
#line 1271 "query.m"
                                                                                                                                                query__succeeded = MR_TRUE;
#line 1271 "query.m"
                                                                                                                                              }
#line 1271 "query.m"
                                                                                                                                            else
#line 1271 "query.m"
                                                                                                                                            if ((strcmp(query__DeveloperModeStr_17, (MR_String) "nodev") == 0))
#line 1272 "query.m"
                                                                                                                                              {
#line 1272 "query.m"
                                                                                                                                                query__DeveloperMode_30 = (MR_Integer) 1;
#line 1272 "query.m"
                                                                                                                                                query__succeeded = MR_TRUE;
#line 1272 "query.m"
                                                                                                                                              }
#line 1271 "query.m"
                                                                                                                                            else
#line 1271 "query.m"
                                                                                                                                              query__succeeded = MR_FALSE;
#line 1271 "query.m"
                                                                                                                                          }
#line 873 "query.m"
                                                                                                                                      }
#line 873 "query.m"
                                                                                                                                  }
#line 873 "query.m"
                                                                                                                              }
#line 873 "query.m"
                                                                                                                          }
#line 873 "query.m"
                                                                                                                      }
#line 873 "query.m"
                                                                                                                  }
#line 873 "query.m"
                                                                                                              }
#line 873 "query.m"
                                                                                                          }
#line 873 "query.m"
                                                                                                      }
#line 873 "query.m"
                                                                                                  }
#line 873 "query.m"
                                                                                              }
#line 873 "query.m"
                                                                                          }
#line 873 "query.m"
                                                                                      }
#line 873 "query.m"
                                                                                  }
#line 873 "query.m"
                                                                              }
#line 1052 "query.m"
                                                                          }
#line 1052 "query.m"
                                                                      }
#line 1052 "query.m"
                                                                  }
#line 1052 "query.m"
                                                              }
#line 1052 "query.m"
                                                          }
#line 873 "query.m"
                                                      }
#line 873 "query.m"
                                                  }
#line 873 "query.m"
                                              }
#line 873 "query.m"
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
#line 870 "query.m"
              }
#line 870 "query.m"
          }
#line 870 "query.m"
      }
#line 898 "query.m"
    if (query__succeeded)
#line 896 "query.m"
      {
#line 896 "query.m"
        MR_Word query__Preferences_31;

#line 894 "query.m"
        {
#line 894 "query.m"
          query__Preferences_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 0) = ((MR_Box) (query__Fields_18));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 1) = ((MR_Box) ((query__Box_19 | ((query__Colour_20 << (MR_Integer) 1)))));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 2) = ((MR_Box) (query__MaybeAncestorLimit_22));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 3) = ((MR_Box) (query__ProcStaticsPerRecTypeLimit_23));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 4) = ((MR_Box) (query__SummarizeHoCallSites_24));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 5) = ((MR_Box) (query__Order_25));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 6) = ((MR_Box) ((query__Contour_26 | ((((query__Time_27 << (MR_Integer) 1)) | ((query__ModuleQual_28 << (MR_Integer) 3)))))));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 7) = ((MR_Box) (query__InactiveItems_29));
#line 894 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 8) = ((MR_Box) (query__DeveloperMode_30));
#line 894 "query.m"
        }
#line 897 "query.m"
        {
#line 897 "query.m"
          query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybePreferences_4, 0) = ((MR_Box) (query__Preferences_31));
#line 897 "query.m"
        }
#line 896 "query.m"
      }
#line 898 "query.m"
    else
#line 899 "query.m"
      query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "query.m"
    return query__MaybePreferences_4;
#line 867 "query.m"
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
#line 705 "query.m"
  {
#line 705 "query.m"
    MR_bool query__succeeded;
#line 705 "query.m"
    MR_Word query__MaybeCmd_4;
#line 705 "query.m"
    MR_Word query__Pieces_5;
#line 705 "query.m"
    MR_Char query__V_44_44;
#line 719 "query.m"
    MR_Word query__MaybePercent_7;
#line 708 "query.m"
    MR_String query__MaybePercentStr_6;
#line 708 "query.m"
    MR_String query__V_45_45;
#line 708 "query.m"
    MR_Word query__V_46_46;
#line 708 "query.m"
    MR_Word query__V_47_47;
#line 708 "query.m"
    MR_String query__V_272_272;

#line 706 "query.m"
    {
#line 706 "query.m"
      query__V_44_44 = query__pref_separator_char_0_f_0();
    }
#line 706 "query.m"
    {
#line 706 "query.m"
      util__split_3_p_0(query__QueryString_3, query__V_44_44, &query__Pieces_5);
    }
#line 708 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 708 "query.m"
    if (query__succeeded)
#line 708 "query.m"
      {
#line 708 "query.m"
        query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 708 "query.m"
        query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 708 "query.m"
        {
#line 708 "query.m"
          query__V_272_272 = query__cmd_str_root_0_f_0();
        }
#line 708 "query.m"
        query__succeeded = (strcmp(query__V_45_45, query__V_272_272) == 0);
#line 708 "query.m"
        if (query__succeeded)
#line 708 "query.m"
          {
#line 708 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 708 "query.m"
            if (query__succeeded)
#line 708 "query.m"
              {
#line 708 "query.m"
                query__MaybePercentStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 0)));
#line 708 "query.m"
                query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 1)));
#line 708 "query.m"
                query__succeeded = (query__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "query.m"
                if (query__succeeded)
#line 708 "query.m"
                  {
#line 709 "query.m"
                    query__succeeded = (strcmp(query__MaybePercentStr_6, (MR_String) "no") == 0);
#line 711 "query.m"
                    if (query__succeeded)
#line 710 "query.m"
                      {
#line 710 "query.m"
                        query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "query.m"
                        query__succeeded = MR_TRUE;
#line 710 "query.m"
                      }
#line 711 "query.m"
                    else
#line 713 "query.m"
                      {
#line 713 "query.m"
                        MR_Integer query__Percent_8;

#line 711 "query.m"
                        {
#line 711 "query.m"
                          query__succeeded = mercury__string__to_int_2_p_0(query__MaybePercentStr_6, &query__Percent_8);
                        }
#line 713 "query.m"
                        if (query__succeeded)
#line 713 "query.m"
                          {
#line 712 "query.m"
                            {
#line 712 "query.m"
                              query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybePercent_7, 0) = ((MR_Box) (query__Percent_8));
#line 712 "query.m"
                            }
#line 712 "query.m"
                            query__succeeded = MR_TRUE;
#line 713 "query.m"
                          }
#line 713 "query.m"
                      }
#line 708 "query.m"
                  }
#line 708 "query.m"
              }
#line 708 "query.m"
          }
#line 708 "query.m"
      }
#line 719 "query.m"
    if (query__succeeded)
#line 717 "query.m"
      {
#line 717 "query.m"
        MR_Word query__Cmd_9;

#line 717 "query.m"
        {
#line 717 "query.m"
          query__Cmd_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "query.m"
          MR_hl_field(MR_mktag(2), query__Cmd_9, 0) = ((MR_Box) (query__MaybePercent_7));
#line 717 "query.m"
        }
#line 718 "query.m"
        {
#line 718 "query.m"
          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_9));
#line 718 "query.m"
        }
#line 717 "query.m"
      }
#line 719 "query.m"
    else
#line 726 "query.m"
      {
#line 726 "query.m"
        MR_Integer query__CliqueNum_11;
#line 720 "query.m"
        MR_String query__CliqueNumStr_10;
#line 720 "query.m"
        MR_String query__V_48_48;
#line 720 "query.m"
        MR_Word query__V_49_49;
#line 720 "query.m"
        MR_Word query__V_50_50;
#line 720 "query.m"
        MR_String query__V_273_273;

#line 720 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 720 "query.m"
        if (query__succeeded)
#line 720 "query.m"
          {
#line 720 "query.m"
            query__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 720 "query.m"
            query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 720 "query.m"
            {
#line 720 "query.m"
              query__V_273_273 = query__cmd_str_clique_0_f_0();
            }
#line 720 "query.m"
            query__succeeded = (strcmp(query__V_48_48, query__V_273_273) == 0);
#line 720 "query.m"
            if (query__succeeded)
#line 720 "query.m"
              {
#line 720 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 720 "query.m"
                if (query__succeeded)
#line 720 "query.m"
                  {
#line 720 "query.m"
                    query__CliqueNumStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 0)));
#line 720 "query.m"
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 1)));
#line 720 "query.m"
                    query__succeeded = (query__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 720 "query.m"
                    if (query__succeeded)
#line 721 "query.m"
                      {
#line 721 "query.m"
                        query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_10, &query__CliqueNum_11);
                      }
#line 720 "query.m"
                  }
#line 720 "query.m"
              }
#line 720 "query.m"
          }
#line 726 "query.m"
        if (query__succeeded)
#line 723 "query.m"
          {
#line 723 "query.m"
            MR_Word query__CliquePtr_12 = (MR_Word) query__CliqueNum_11;
#line 723 "query.m"
            MR_Word query__Cmd_118;

#line 724 "query.m"
            {
#line 724 "query.m"
              query__Cmd_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 724 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 1) = ((MR_Box) (query__CliquePtr_12));
#line 724 "query.m"
            }
#line 725 "query.m"
            {
#line 725 "query.m"
              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 725 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_118));
#line 725 "query.m"
            }
#line 723 "query.m"
          }
#line 726 "query.m"
        else
#line 733 "query.m"
          {
#line 733 "query.m"
            MR_Integer query__CliqueNum_269;
#line 727 "query.m"
            MR_String query__V_51_51;
#line 727 "query.m"
            MR_Word query__V_52_52;
#line 727 "query.m"
            MR_Word query__V_53_53;
#line 727 "query.m"
            MR_String query__CliqueNumStr_119;
#line 727 "query.m"
            MR_String query__V_274_274;

#line 727 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 727 "query.m"
            if (query__succeeded)
#line 727 "query.m"
              {
#line 727 "query.m"
                query__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 727 "query.m"
                query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 727 "query.m"
                {
#line 727 "query.m"
                  query__V_274_274 = query__cmd_str_clique_recursive_costs_0_f_0();
                }
#line 727 "query.m"
                query__succeeded = (strcmp(query__V_51_51, query__V_274_274) == 0);
#line 727 "query.m"
                if (query__succeeded)
#line 727 "query.m"
                  {
#line 727 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 727 "query.m"
                    if (query__succeeded)
#line 727 "query.m"
                      {
#line 727 "query.m"
                        query__CliqueNumStr_119 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 0)));
#line 727 "query.m"
                        query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 1)));
#line 727 "query.m"
                        query__succeeded = (query__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "query.m"
                        if (query__succeeded)
#line 728 "query.m"
                          {
#line 728 "query.m"
                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_119, &query__CliqueNum_269);
                          }
#line 727 "query.m"
                      }
#line 727 "query.m"
                  }
#line 727 "query.m"
              }
#line 733 "query.m"
            if (query__succeeded)
#line 730 "query.m"
              {
#line 730 "query.m"
                MR_Word query__Cmd_120;
#line 730 "query.m"
                MR_Word query__CliquePtr_121 = (MR_Word) query__CliqueNum_269;

#line 731 "query.m"
                {
#line 731 "query.m"
                  query__Cmd_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 731 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 1) = ((MR_Box) (query__CliquePtr_121));
#line 731 "query.m"
                }
#line 732 "query.m"
                {
#line 732 "query.m"
                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 732 "query.m"
                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_120));
#line 732 "query.m"
                }
#line 730 "query.m"
              }
#line 733 "query.m"
            else
#line 738 "query.m"
              {
#line 734 "query.m"
                MR_String query__V_54_54;
#line 734 "query.m"
                MR_Word query__V_55_55;
#line 734 "query.m"
                MR_String query__V_275_275;

#line 734 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 734 "query.m"
                if (query__succeeded)
#line 734 "query.m"
                  {
#line 734 "query.m"
                    query__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 734 "query.m"
                    query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 734 "query.m"
                    {
#line 734 "query.m"
                      query__V_275_275 = query__cmd_str_recursion_types_frequency_0_f_0();
                    }
#line 734 "query.m"
                    query__succeeded = (strcmp(query__V_54_54, query__V_275_275) == 0);
#line 734 "query.m"
                    if (query__succeeded)
#line 734 "query.m"
                      query__succeeded = (query__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 734 "query.m"
                  }
#line 738 "query.m"
                if (query__succeeded)
#line 736 "query.m"
                  {
#line 737 "query.m"
                    query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[2]);
#line 736 "query.m"
                  }
#line 738 "query.m"
                else
#line 745 "query.m"
                  {
#line 745 "query.m"
                    MR_Integer query__PSI_14;
#line 739 "query.m"
                    MR_String query__PSIStr_13;
#line 739 "query.m"
                    MR_String query__V_56_56;
#line 739 "query.m"
                    MR_Word query__V_57_57;
#line 739 "query.m"
                    MR_Word query__V_58_58;
#line 739 "query.m"
                    MR_String query__V_276_276;

#line 739 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 739 "query.m"
                    if (query__succeeded)
#line 739 "query.m"
                      {
#line 739 "query.m"
                        query__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 739 "query.m"
                        query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 739 "query.m"
                        {
#line 739 "query.m"
                          query__V_276_276 = query__cmd_str_proc_0_f_0();
                        }
#line 739 "query.m"
                        query__succeeded = (strcmp(query__V_56_56, query__V_276_276) == 0);
#line 739 "query.m"
                        if (query__succeeded)
#line 739 "query.m"
                          {
#line 739 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 739 "query.m"
                            if (query__succeeded)
#line 739 "query.m"
                              {
#line 739 "query.m"
                                query__PSIStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 0)));
#line 739 "query.m"
                                query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 1)));
#line 739 "query.m"
                                query__succeeded = (query__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "query.m"
                                if (query__succeeded)
#line 740 "query.m"
                                  {
#line 740 "query.m"
                                    query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_13, &query__PSI_14);
                                  }
#line 739 "query.m"
                              }
#line 739 "query.m"
                          }
#line 739 "query.m"
                      }
#line 745 "query.m"
                    if (query__succeeded)
#line 742 "query.m"
                      {
#line 742 "query.m"
                        MR_Word query__PSPtr_15 = (MR_Word) query__PSI_14;
#line 742 "query.m"
                        MR_Word query__Cmd_123;

#line 743 "query.m"
                        {
#line 743 "query.m"
                          query__Cmd_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 1) = ((MR_Box) (query__PSPtr_15));
#line 743 "query.m"
                        }
#line 744 "query.m"
                        {
#line 744 "query.m"
                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "query.m"
                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_123));
#line 744 "query.m"
                        }
#line 742 "query.m"
                      }
#line 745 "query.m"
                    else
#line 758 "query.m"
                      {
#line 758 "query.m"
                        MR_Word query__GroupCallers_20;
#line 758 "query.m"
                        MR_Integer query__BunchNum_21;
#line 758 "query.m"
                        MR_Integer query__CallersPerBunch_22;
#line 758 "query.m"
                        MR_Word query__Contour_23;
#line 758 "query.m"
                        MR_Integer query__PSI_257;
#line 747 "query.m"
                        MR_String query__GroupCallersStr_16;
#line 747 "query.m"
                        MR_String query__BunchNumStr_17;
#line 747 "query.m"
                        MR_String query__CallersPerBunchStr_18;
#line 747 "query.m"
                        MR_String query__ContourStr_19;
#line 747 "query.m"
                        MR_String query__V_59_59;
#line 747 "query.m"
                        MR_Word query__V_60_60;
#line 747 "query.m"
                        MR_Word query__V_61_61;
#line 747 "query.m"
                        MR_Word query__V_62_62;
#line 747 "query.m"
                        MR_Word query__V_63_63;
#line 747 "query.m"
                        MR_Word query__V_64_64;
#line 747 "query.m"
                        MR_Word query__V_65_65;
#line 747 "query.m"
                        MR_String query__PSIStr_124;
#line 747 "query.m"
                        MR_String query__V_277_277;

#line 746 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                        if (query__succeeded)
#line 746 "query.m"
                          {
#line 746 "query.m"
                            query__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 746 "query.m"
                            query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 746 "query.m"
                            {
#line 746 "query.m"
                              query__V_277_277 = query__cmd_str_proc_callers_0_f_0();
                            }
#line 746 "query.m"
                            query__succeeded = (strcmp(query__V_59_59, query__V_277_277) == 0);
#line 747 "query.m"
                            if (query__succeeded)
#line 747 "query.m"
                              {
#line 746 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                                if (query__succeeded)
#line 746 "query.m"
                                  {
#line 746 "query.m"
                                    query__PSIStr_124 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
#line 746 "query.m"
                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
#line 746 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                                    if (query__succeeded)
#line 746 "query.m"
                                      {
#line 746 "query.m"
                                        query__GroupCallersStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
#line 746 "query.m"
                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
#line 746 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 746 "query.m"
                                        if (query__succeeded)
#line 746 "query.m"
                                          {
#line 746 "query.m"
                                            query__BunchNumStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
#line 746 "query.m"
                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
#line 747 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                                            if (query__succeeded)
#line 747 "query.m"
                                              {
#line 747 "query.m"
                                                query__CallersPerBunchStr_18 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 0)));
#line 747 "query.m"
                                                query__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 1)));
#line 747 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                                                if (query__succeeded)
#line 747 "query.m"
                                                  {
#line 747 "query.m"
                                                    query__ContourStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 0)));
#line 747 "query.m"
                                                    query__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 1)));
#line 747 "query.m"
                                                    query__succeeded = (query__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "query.m"
                                                    if (query__succeeded)
#line 747 "query.m"
                                                      {
#line 748 "query.m"
                                                        {
#line 748 "query.m"
                                                          query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_124, &query__PSI_257);
                                                        }
#line 747 "query.m"
                                                        if (query__succeeded)
#line 747 "query.m"
                                                          {
#line 749 "query.m"
                                                            {
#line 749 "query.m"
                                                              query__succeeded = query__string_to_caller_groups_2_p_0(query__GroupCallersStr_16, &query__GroupCallers_20);
                                                            }
#line 747 "query.m"
                                                            if (query__succeeded)
#line 747 "query.m"
                                                              {
#line 750 "query.m"
                                                                {
#line 750 "query.m"
                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__BunchNumStr_17, &query__BunchNum_21);
                                                                }
#line 747 "query.m"
                                                                if (query__succeeded)
#line 747 "query.m"
                                                                  {
#line 751 "query.m"
                                                                    {
#line 751 "query.m"
                                                                      query__succeeded = mercury__string__to_int_2_p_0(query__CallersPerBunchStr_18, &query__CallersPerBunch_22);
                                                                    }
#line 747 "query.m"
                                                                    if (query__succeeded)
#line 752 "query.m"
                                                                      {
#line 752 "query.m"
                                                                        query__succeeded = query__string_to_contour_exclusion_2_p_0(query__ContourStr_19, &query__Contour_23);
                                                                      }
#line 747 "query.m"
                                                                  }
#line 747 "query.m"
                                                              }
#line 747 "query.m"
                                                          }
#line 747 "query.m"
                                                      }
#line 747 "query.m"
                                                  }
#line 747 "query.m"
                                              }
#line 746 "query.m"
                                          }
#line 746 "query.m"
                                      }
#line 746 "query.m"
                                  }
#line 747 "query.m"
                              }
#line 746 "query.m"
                          }
#line 758 "query.m"
                        if (query__succeeded)
#line 754 "query.m"
                          {
#line 754 "query.m"
                            MR_Word query__Cmd_125;
#line 754 "query.m"
                            MR_Word query__PSPtr_126 = (MR_Word) query__PSI_257;

#line 755 "query.m"
                            {
#line 755 "query.m"
                              query__Cmd_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 1) = ((MR_Box) (query__PSPtr_126));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 2) = ((MR_Box) (query__GroupCallers_20));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 3) = ((MR_Box) (query__BunchNum_21));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 4) = ((MR_Box) (query__CallersPerBunch_22));
#line 755 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 5) = ((MR_Box) (query__Contour_23));
#line 755 "query.m"
                            }
#line 757 "query.m"
                            {
#line 757 "query.m"
                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_125));
#line 757 "query.m"
                            }
#line 754 "query.m"
                          }
#line 758 "query.m"
                        else
#line 763 "query.m"
                          {
#line 759 "query.m"
                            MR_String query__V_66_66;
#line 759 "query.m"
                            MR_Word query__V_67_67;
#line 759 "query.m"
                            MR_String query__V_278_278;

#line 759 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 759 "query.m"
                            if (query__succeeded)
#line 759 "query.m"
                              {
#line 759 "query.m"
                                query__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 759 "query.m"
                                query__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 759 "query.m"
                                {
#line 759 "query.m"
                                  query__V_278_278 = query__cmd_str_program_modules_0_f_0();
                                }
#line 759 "query.m"
                                query__succeeded = (strcmp(query__V_66_66, query__V_278_278) == 0);
#line 759 "query.m"
                                if (query__succeeded)
#line 759 "query.m"
                                  query__succeeded = (query__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 759 "query.m"
                              }
#line 763 "query.m"
                            if (query__succeeded)
#line 761 "query.m"
                              {
#line 762 "query.m"
                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[3]);
#line 761 "query.m"
                              }
#line 763 "query.m"
                            else
#line 768 "query.m"
                              {
#line 768 "query.m"
                                MR_String query__ModuleName_24;
#line 764 "query.m"
                                MR_String query__V_68_68;
#line 764 "query.m"
                                MR_Word query__V_69_69;
#line 764 "query.m"
                                MR_Word query__V_70_70;
#line 764 "query.m"
                                MR_String query__V_279_279;

#line 764 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 764 "query.m"
                                if (query__succeeded)
#line 764 "query.m"
                                  {
#line 764 "query.m"
                                    query__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 764 "query.m"
                                    query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 764 "query.m"
                                    {
#line 764 "query.m"
                                      query__V_279_279 = query__cmd_str_module_0_f_0();
                                    }
#line 764 "query.m"
                                    query__succeeded = (strcmp(query__V_68_68, query__V_279_279) == 0);
#line 764 "query.m"
                                    if (query__succeeded)
#line 764 "query.m"
                                      {
#line 764 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 764 "query.m"
                                        if (query__succeeded)
#line 764 "query.m"
                                          {
#line 764 "query.m"
                                            query__ModuleName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 0)));
#line 764 "query.m"
                                            query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 1)));
#line 764 "query.m"
                                            query__succeeded = (query__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 764 "query.m"
                                          }
#line 764 "query.m"
                                      }
#line 764 "query.m"
                                  }
#line 768 "query.m"
                                if (query__succeeded)
#line 766 "query.m"
                                  {
#line 766 "query.m"
                                    MR_Word query__Cmd_128;

#line 766 "query.m"
                                    {
#line 766 "query.m"
                                      query__Cmd_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 766 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 1) = ((MR_Box) (query__ModuleName_24));
#line 766 "query.m"
                                    }
#line 767 "query.m"
                                    {
#line 767 "query.m"
                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "query.m"
                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_128));
#line 767 "query.m"
                                    }
#line 766 "query.m"
                                  }
#line 768 "query.m"
                                else
#line 773 "query.m"
                                  {
#line 773 "query.m"
                                    MR_String query__ModuleName_237;
#line 769 "query.m"
                                    MR_String query__V_71_71;
#line 769 "query.m"
                                    MR_Word query__V_72_72;
#line 769 "query.m"
                                    MR_Word query__V_73_73;
#line 769 "query.m"
                                    MR_String query__V_280_280;

#line 769 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 769 "query.m"
                                    if (query__succeeded)
#line 769 "query.m"
                                      {
#line 769 "query.m"
                                        query__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 769 "query.m"
                                        query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 769 "query.m"
                                        {
#line 769 "query.m"
                                          query__V_280_280 = query__cmd_str_module_getter_setters_0_f_0();
                                        }
#line 769 "query.m"
                                        query__succeeded = (strcmp(query__V_71_71, query__V_280_280) == 0);
#line 769 "query.m"
                                        if (query__succeeded)
#line 769 "query.m"
                                          {
#line 769 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 769 "query.m"
                                            if (query__succeeded)
#line 769 "query.m"
                                              {
#line 769 "query.m"
                                                query__ModuleName_237 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 0)));
#line 769 "query.m"
                                                query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 1)));
#line 769 "query.m"
                                                query__succeeded = (query__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "query.m"
                                              }
#line 769 "query.m"
                                          }
#line 769 "query.m"
                                      }
#line 773 "query.m"
                                    if (query__succeeded)
#line 771 "query.m"
                                      {
#line 771 "query.m"
                                        MR_Word query__Cmd_129;

#line 771 "query.m"
                                        {
#line 771 "query.m"
                                          query__Cmd_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 771 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 1) = ((MR_Box) (query__ModuleName_237));
#line 771 "query.m"
                                        }
#line 772 "query.m"
                                        {
#line 772 "query.m"
                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "query.m"
                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_129));
#line 772 "query.m"
                                        }
#line 771 "query.m"
                                      }
#line 773 "query.m"
                                    else
#line 778 "query.m"
                                      {
#line 778 "query.m"
                                        MR_String query__ModuleName_229;
#line 774 "query.m"
                                        MR_String query__V_74_74;
#line 774 "query.m"
                                        MR_Word query__V_75_75;
#line 774 "query.m"
                                        MR_Word query__V_76_76;
#line 774 "query.m"
                                        MR_String query__V_281_281;

#line 774 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 774 "query.m"
                                        if (query__succeeded)
#line 774 "query.m"
                                          {
#line 774 "query.m"
                                            query__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 774 "query.m"
                                            query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 774 "query.m"
                                            {
#line 774 "query.m"
                                              query__V_281_281 = query__cmd_str_module_rep_0_f_0();
                                            }
#line 774 "query.m"
                                            query__succeeded = (strcmp(query__V_74_74, query__V_281_281) == 0);
#line 774 "query.m"
                                            if (query__succeeded)
#line 774 "query.m"
                                              {
#line 774 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 774 "query.m"
                                                if (query__succeeded)
#line 774 "query.m"
                                                  {
#line 774 "query.m"
                                                    query__ModuleName_229 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 0)));
#line 774 "query.m"
                                                    query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 1)));
#line 774 "query.m"
                                                    query__succeeded = (query__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "query.m"
                                                  }
#line 774 "query.m"
                                              }
#line 774 "query.m"
                                          }
#line 778 "query.m"
                                        if (query__succeeded)
#line 776 "query.m"
                                          {
#line 776 "query.m"
                                            MR_Word query__Cmd_130;

#line 776 "query.m"
                                            {
#line 776 "query.m"
                                              query__Cmd_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 776 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 1) = ((MR_Box) (query__ModuleName_229));
#line 776 "query.m"
                                            }
#line 777 "query.m"
                                            {
#line 777 "query.m"
                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "query.m"
                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_130));
#line 777 "query.m"
                                            }
#line 776 "query.m"
                                          }
#line 778 "query.m"
                                        else
#line 788 "query.m"
                                          {
#line 788 "query.m"
                                            MR_Word query__Limit_29;
#line 788 "query.m"
                                            MR_Word query__CostKind_30;
#line 788 "query.m"
                                            MR_Word query__InclDesc_31;
#line 788 "query.m"
                                            MR_Word query__Scope_32;
#line 780 "query.m"
                                            MR_String query__LimitStr_25;
#line 780 "query.m"
                                            MR_String query__CostKindStr_26;
#line 780 "query.m"
                                            MR_String query__InclDescStr_27;
#line 780 "query.m"
                                            MR_String query__ScopeStr_28;
#line 780 "query.m"
                                            MR_String query__V_77_77;
#line 780 "query.m"
                                            MR_Word query__V_78_78;
#line 780 "query.m"
                                            MR_Word query__V_79_79;
#line 780 "query.m"
                                            MR_Word query__V_80_80;
#line 780 "query.m"
                                            MR_Word query__V_81_81;
#line 780 "query.m"
                                            MR_Word query__V_82_82;
#line 780 "query.m"
                                            MR_String query__V_282_282;

#line 779 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 779 "query.m"
                                            if (query__succeeded)
#line 779 "query.m"
                                              {
#line 779 "query.m"
                                                query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 779 "query.m"
                                                query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 779 "query.m"
                                                {
#line 779 "query.m"
                                                  query__V_282_282 = query__cmd_str_top_procs_0_f_0();
                                                }
#line 779 "query.m"
                                                query__succeeded = (strcmp(query__V_77_77, query__V_282_282) == 0);
#line 780 "query.m"
                                                if (query__succeeded)
#line 780 "query.m"
                                                  {
#line 779 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 779 "query.m"
                                                    if (query__succeeded)
#line 779 "query.m"
                                                      {
#line 779 "query.m"
                                                        query__LimitStr_25 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 0)));
#line 779 "query.m"
                                                        query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 1)));
#line 779 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 779 "query.m"
                                                        if (query__succeeded)
#line 779 "query.m"
                                                          {
#line 779 "query.m"
                                                            query__CostKindStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
#line 779 "query.m"
                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
#line 779 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 779 "query.m"
                                                            if (query__succeeded)
#line 779 "query.m"
                                                              {
#line 779 "query.m"
                                                                query__InclDescStr_27 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
#line 779 "query.m"
                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
#line 780 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 780 "query.m"
                                                                if (query__succeeded)
#line 780 "query.m"
                                                                  {
#line 780 "query.m"
                                                                    query__ScopeStr_28 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
#line 780 "query.m"
                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
#line 780 "query.m"
                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "query.m"
                                                                    if (query__succeeded)
#line 780 "query.m"
                                                                      {
#line 781 "query.m"
                                                                        {
#line 781 "query.m"
                                                                          query__succeeded = query__string_to_limit_2_p_0(query__LimitStr_25, &query__Limit_29);
                                                                        }
#line 780 "query.m"
                                                                        if (query__succeeded)
#line 780 "query.m"
                                                                          {
#line 782 "query.m"
                                                                            {
#line 782 "query.m"
                                                                              query__succeeded = query__string_to_cost_kind_2_p_0(query__CostKindStr_26, &query__CostKind_30);
                                                                            }
#line 780 "query.m"
                                                                            if (query__succeeded)
#line 780 "query.m"
                                                                              {
#line 783 "query.m"
                                                                                {
#line 783 "query.m"
                                                                                  query__succeeded = query__string_to_incl_desc_2_p_0(query__InclDescStr_27, &query__InclDesc_31);
                                                                                }
#line 780 "query.m"
                                                                                if (query__succeeded)
#line 784 "query.m"
                                                                                  {
#line 784 "query.m"
                                                                                    query__succeeded = query__string_to_scope_2_p_0(query__ScopeStr_28, &query__Scope_32);
                                                                                  }
#line 780 "query.m"
                                                                              }
#line 780 "query.m"
                                                                          }
#line 780 "query.m"
                                                                      }
#line 780 "query.m"
                                                                  }
#line 779 "query.m"
                                                              }
#line 779 "query.m"
                                                          }
#line 779 "query.m"
                                                      }
#line 780 "query.m"
                                                  }
#line 779 "query.m"
                                              }
#line 788 "query.m"
                                            if (query__succeeded)
#line 786 "query.m"
                                              {
#line 786 "query.m"
                                                MR_Word query__Cmd_131;

#line 786 "query.m"
                                                {
#line 786 "query.m"
                                                  query__Cmd_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 786 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 786 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 1) = ((MR_Box) (query__Limit_29));
#line 786 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 2) = ((MR_Box) ((query__CostKind_30 | ((((query__InclDesc_31 << (MR_Integer) 3)) | ((query__Scope_32 << (MR_Integer) 4)))))));
#line 786 "query.m"
                                                }
#line 787 "query.m"
                                                {
#line 787 "query.m"
                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 787 "query.m"
                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_131));
#line 787 "query.m"
                                                }
#line 786 "query.m"
                                              }
#line 788 "query.m"
                                            else
#line 794 "query.m"
                                              {
#line 794 "query.m"
                                                MR_Integer query__PSI_213;
#line 789 "query.m"
                                                MR_String query__V_83_83;
#line 789 "query.m"
                                                MR_Word query__V_84_84;
#line 789 "query.m"
                                                MR_Word query__V_85_85;
#line 789 "query.m"
                                                MR_String query__PSIStr_132;
#line 789 "query.m"
                                                MR_String query__V_283_283;

#line 789 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 789 "query.m"
                                                if (query__succeeded)
#line 789 "query.m"
                                                  {
#line 789 "query.m"
                                                    query__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 789 "query.m"
                                                    query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 789 "query.m"
                                                    {
#line 789 "query.m"
                                                      query__V_283_283 = query__cmd_str_static_coverage_0_f_0();
                                                    }
#line 789 "query.m"
                                                    query__succeeded = (strcmp(query__V_83_83, query__V_283_283) == 0);
#line 789 "query.m"
                                                    if (query__succeeded)
#line 789 "query.m"
                                                      {
#line 789 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 789 "query.m"
                                                        if (query__succeeded)
#line 789 "query.m"
                                                          {
#line 789 "query.m"
                                                            query__PSIStr_132 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 0)));
#line 789 "query.m"
                                                            query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 1)));
#line 789 "query.m"
                                                            query__succeeded = (query__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "query.m"
                                                            if (query__succeeded)
#line 790 "query.m"
                                                              {
#line 790 "query.m"
                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_132, &query__PSI_213);
                                                              }
#line 789 "query.m"
                                                          }
#line 789 "query.m"
                                                      }
#line 789 "query.m"
                                                  }
#line 794 "query.m"
                                                if (query__succeeded)
#line 792 "query.m"
                                                  {
#line 792 "query.m"
                                                    MR_Word query__V_86_86;
#line 792 "query.m"
                                                    MR_Word query__PSPtr_133 = (MR_Word) query__PSI_213;

#line 793 "query.m"
                                                    {
#line 793 "query.m"
                                                      query__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 793 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 1) = ((MR_Box) (query__PSPtr_133));
#line 793 "query.m"
                                                    }
#line 793 "query.m"
                                                    {
#line 793 "query.m"
                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 793 "query.m"
                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_86_86));
#line 793 "query.m"
                                                    }
#line 792 "query.m"
                                                  }
#line 794 "query.m"
                                                else
#line 800 "query.m"
                                                  {
#line 800 "query.m"
                                                    MR_Integer query__PDI_34;
#line 795 "query.m"
                                                    MR_String query__PDIStr_33;
#line 795 "query.m"
                                                    MR_String query__V_87_87;
#line 795 "query.m"
                                                    MR_Word query__V_88_88;
#line 795 "query.m"
                                                    MR_Word query__V_89_89;
#line 795 "query.m"
                                                    MR_String query__V_284_284;

#line 795 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 795 "query.m"
                                                    if (query__succeeded)
#line 795 "query.m"
                                                      {
#line 795 "query.m"
                                                        query__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 795 "query.m"
                                                        query__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 795 "query.m"
                                                        {
#line 795 "query.m"
                                                          query__V_284_284 = query__cmd_str_dynamic_coverage_0_f_0();
                                                        }
#line 795 "query.m"
                                                        query__succeeded = (strcmp(query__V_87_87, query__V_284_284) == 0);
#line 795 "query.m"
                                                        if (query__succeeded)
#line 795 "query.m"
                                                          {
#line 795 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 795 "query.m"
                                                            if (query__succeeded)
#line 795 "query.m"
                                                              {
#line 795 "query.m"
                                                                query__PDIStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 0)));
#line 795 "query.m"
                                                                query__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 1)));
#line 795 "query.m"
                                                                query__succeeded = (query__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "query.m"
                                                                if (query__succeeded)
#line 796 "query.m"
                                                                  {
#line 796 "query.m"
                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_33, &query__PDI_34);
                                                                  }
#line 795 "query.m"
                                                              }
#line 795 "query.m"
                                                          }
#line 795 "query.m"
                                                      }
#line 800 "query.m"
                                                    if (query__succeeded)
#line 798 "query.m"
                                                      {
#line 798 "query.m"
                                                        MR_Word query__PDPtr_35 = (MR_Word) query__PDI_34;
#line 798 "query.m"
                                                        MR_Word query__V_90_90;

#line 799 "query.m"
                                                        {
#line 799 "query.m"
                                                          query__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 799 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 1) = ((MR_Box) (query__PDPtr_35));
#line 799 "query.m"
                                                        }
#line 799 "query.m"
                                                        {
#line 799 "query.m"
                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 799 "query.m"
                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_90_90));
#line 799 "query.m"
                                                        }
#line 798 "query.m"
                                                      }
#line 800 "query.m"
                                                    else
#line 805 "query.m"
                                                      {
#line 801 "query.m"
                                                        MR_String query__V_91_91;
#line 801 "query.m"
                                                        MR_Word query__V_92_92;
#line 801 "query.m"
                                                        MR_String query__V_285_285;

#line 801 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 801 "query.m"
                                                        if (query__succeeded)
#line 801 "query.m"
                                                          {
#line 801 "query.m"
                                                            query__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 801 "query.m"
                                                            query__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 801 "query.m"
                                                            {
#line 801 "query.m"
                                                              query__V_285_285 = query__cmd_str_menu_0_f_0();
                                                            }
#line 801 "query.m"
                                                            query__succeeded = (strcmp(query__V_91_91, query__V_285_285) == 0);
#line 801 "query.m"
                                                            if (query__succeeded)
#line 801 "query.m"
                                                              query__succeeded = (query__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 801 "query.m"
                                                          }
#line 805 "query.m"
                                                        if (query__succeeded)
#line 803 "query.m"
                                                          {
#line 804 "query.m"
                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[4]);
#line 803 "query.m"
                                                          }
#line 805 "query.m"
                                                        else
#line 812 "query.m"
                                                          {
#line 812 "query.m"
                                                            MR_Integer query__PSI_186;
#line 806 "query.m"
                                                            MR_String query__V_93_93;
#line 806 "query.m"
                                                            MR_Word query__V_94_94;
#line 806 "query.m"
                                                            MR_Word query__V_95_95;
#line 806 "query.m"
                                                            MR_String query__PSIStr_135;
#line 806 "query.m"
                                                            MR_String query__V_286_286;

#line 806 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 806 "query.m"
                                                            if (query__succeeded)
#line 806 "query.m"
                                                              {
#line 806 "query.m"
                                                                query__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 806 "query.m"
                                                                query__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 806 "query.m"
                                                                {
#line 806 "query.m"
                                                                  query__V_286_286 = query__cmd_str_dump_proc_static_0_f_0();
                                                                }
#line 806 "query.m"
                                                                query__succeeded = (strcmp(query__V_93_93, query__V_286_286) == 0);
#line 806 "query.m"
                                                                if (query__succeeded)
#line 806 "query.m"
                                                                  {
#line 806 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 806 "query.m"
                                                                    if (query__succeeded)
#line 806 "query.m"
                                                                      {
#line 806 "query.m"
                                                                        query__PSIStr_135 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 0)));
#line 806 "query.m"
                                                                        query__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 1)));
#line 806 "query.m"
                                                                        query__succeeded = (query__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 806 "query.m"
                                                                        if (query__succeeded)
#line 807 "query.m"
                                                                          {
#line 807 "query.m"
                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_135, &query__PSI_186);
                                                                          }
#line 806 "query.m"
                                                                      }
#line 806 "query.m"
                                                                  }
#line 806 "query.m"
                                                              }
#line 812 "query.m"
                                                            if (query__succeeded)
#line 809 "query.m"
                                                              {
#line 809 "query.m"
                                                                MR_Word query__Cmd_136;
#line 809 "query.m"
                                                                MR_Word query__PSPtr_137 = (MR_Word) query__PSI_186;

#line 810 "query.m"
                                                                {
#line 810 "query.m"
                                                                  query__Cmd_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 810 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 1) = ((MR_Box) (query__PSPtr_137));
#line 810 "query.m"
                                                                }
#line 811 "query.m"
                                                                {
#line 811 "query.m"
                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "query.m"
                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_136));
#line 811 "query.m"
                                                                }
#line 809 "query.m"
                                                              }
#line 812 "query.m"
                                                            else
#line 819 "query.m"
                                                              {
#line 819 "query.m"
                                                                MR_Integer query__PDI_179;
#line 813 "query.m"
                                                                MR_String query__V_96_96;
#line 813 "query.m"
                                                                MR_Word query__V_97_97;
#line 813 "query.m"
                                                                MR_Word query__V_98_98;
#line 813 "query.m"
                                                                MR_String query__PDIStr_138;
#line 813 "query.m"
                                                                MR_String query__V_287_287;

#line 813 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 813 "query.m"
                                                                if (query__succeeded)
#line 813 "query.m"
                                                                  {
#line 813 "query.m"
                                                                    query__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 813 "query.m"
                                                                    query__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 813 "query.m"
                                                                    {
#line 813 "query.m"
                                                                      query__V_287_287 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                                                    }
#line 813 "query.m"
                                                                    query__succeeded = (strcmp(query__V_96_96, query__V_287_287) == 0);
#line 813 "query.m"
                                                                    if (query__succeeded)
#line 813 "query.m"
                                                                      {
#line 813 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 813 "query.m"
                                                                        if (query__succeeded)
#line 813 "query.m"
                                                                          {
#line 813 "query.m"
                                                                            query__PDIStr_138 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 0)));
#line 813 "query.m"
                                                                            query__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 1)));
#line 813 "query.m"
                                                                            query__succeeded = (query__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 813 "query.m"
                                                                            if (query__succeeded)
#line 814 "query.m"
                                                                              {
#line 814 "query.m"
                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_138, &query__PDI_179);
                                                                              }
#line 813 "query.m"
                                                                          }
#line 813 "query.m"
                                                                      }
#line 813 "query.m"
                                                                  }
#line 819 "query.m"
                                                                if (query__succeeded)
#line 816 "query.m"
                                                                  {
#line 816 "query.m"
                                                                    MR_Word query__Cmd_139;
#line 816 "query.m"
                                                                    MR_Word query__PDPtr_140 = (MR_Word) query__PDI_179;

#line 817 "query.m"
                                                                    {
#line 817 "query.m"
                                                                      query__Cmd_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 817 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 1) = ((MR_Box) (query__PDPtr_140));
#line 817 "query.m"
                                                                    }
#line 818 "query.m"
                                                                    {
#line 818 "query.m"
                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 818 "query.m"
                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_139));
#line 818 "query.m"
                                                                    }
#line 816 "query.m"
                                                                  }
#line 819 "query.m"
                                                                else
#line 826 "query.m"
                                                                  {
#line 826 "query.m"
                                                                    MR_Integer query__CSSI_37;
#line 820 "query.m"
                                                                    MR_String query__CSSIStr_36;
#line 820 "query.m"
                                                                    MR_String query__V_99_99;
#line 820 "query.m"
                                                                    MR_Word query__V_100_100;
#line 820 "query.m"
                                                                    MR_Word query__V_101_101;
#line 820 "query.m"
                                                                    MR_String query__V_288_288;

#line 820 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 820 "query.m"
                                                                    if (query__succeeded)
#line 820 "query.m"
                                                                      {
#line 820 "query.m"
                                                                        query__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 820 "query.m"
                                                                        query__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 820 "query.m"
                                                                        {
#line 820 "query.m"
                                                                          query__V_288_288 = query__cmd_str_dump_call_site_static_0_f_0();
                                                                        }
#line 820 "query.m"
                                                                        query__succeeded = (strcmp(query__V_99_99, query__V_288_288) == 0);
#line 820 "query.m"
                                                                        if (query__succeeded)
#line 820 "query.m"
                                                                          {
#line 820 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 820 "query.m"
                                                                            if (query__succeeded)
#line 820 "query.m"
                                                                              {
#line 820 "query.m"
                                                                                query__CSSIStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 0)));
#line 820 "query.m"
                                                                                query__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 1)));
#line 820 "query.m"
                                                                                query__succeeded = (query__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "query.m"
                                                                                if (query__succeeded)
#line 821 "query.m"
                                                                                  {
#line 821 "query.m"
                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__CSSIStr_36, &query__CSSI_37);
                                                                                  }
#line 820 "query.m"
                                                                              }
#line 820 "query.m"
                                                                          }
#line 820 "query.m"
                                                                      }
#line 826 "query.m"
                                                                    if (query__succeeded)
#line 823 "query.m"
                                                                      {
#line 823 "query.m"
                                                                        MR_Word query__CSSPtr_38 = (MR_Word) query__CSSI_37;
#line 823 "query.m"
                                                                        MR_Word query__Cmd_141;

#line 824 "query.m"
                                                                        {
#line 824 "query.m"
                                                                          query__Cmd_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 824 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 824 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 1) = ((MR_Box) (query__CSSPtr_38));
#line 824 "query.m"
                                                                        }
#line 825 "query.m"
                                                                        {
#line 825 "query.m"
                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "query.m"
                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_141));
#line 825 "query.m"
                                                                        }
#line 823 "query.m"
                                                                      }
#line 826 "query.m"
                                                                    else
#line 833 "query.m"
                                                                      {
#line 833 "query.m"
                                                                        MR_Integer query__CSDI_40;
#line 827 "query.m"
                                                                        MR_String query__CSDIStr_39;
#line 827 "query.m"
                                                                        MR_String query__V_102_102;
#line 827 "query.m"
                                                                        MR_Word query__V_103_103;
#line 827 "query.m"
                                                                        MR_Word query__V_104_104;
#line 827 "query.m"
                                                                        MR_String query__V_289_289;

#line 827 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 827 "query.m"
                                                                        if (query__succeeded)
#line 827 "query.m"
                                                                          {
#line 827 "query.m"
                                                                            query__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 827 "query.m"
                                                                            query__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 827 "query.m"
                                                                            {
#line 827 "query.m"
                                                                              query__V_289_289 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                                                                            }
#line 827 "query.m"
                                                                            query__succeeded = (strcmp(query__V_102_102, query__V_289_289) == 0);
#line 827 "query.m"
                                                                            if (query__succeeded)
#line 827 "query.m"
                                                                              {
#line 827 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_103_103)) == (MR_mktag((MR_Integer) 1)));
#line 827 "query.m"
                                                                                if (query__succeeded)
#line 827 "query.m"
                                                                                  {
#line 827 "query.m"
                                                                                    query__CSDIStr_39 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 0)));
#line 827 "query.m"
                                                                                    query__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 1)));
#line 827 "query.m"
                                                                                    query__succeeded = (query__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "query.m"
                                                                                    if (query__succeeded)
#line 828 "query.m"
                                                                                      {
#line 828 "query.m"
                                                                                        query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_39, &query__CSDI_40);
                                                                                      }
#line 827 "query.m"
                                                                                  }
#line 827 "query.m"
                                                                              }
#line 827 "query.m"
                                                                          }
#line 833 "query.m"
                                                                        if (query__succeeded)
#line 830 "query.m"
                                                                          {
#line 830 "query.m"
                                                                            MR_Word query__CSDPtr_41 = (MR_Word) query__CSDI_40;
#line 830 "query.m"
                                                                            MR_Word query__Cmd_142;

#line 831 "query.m"
                                                                            {
#line 831 "query.m"
                                                                              query__Cmd_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 831 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 1) = ((MR_Box) (query__CSDPtr_41));
#line 831 "query.m"
                                                                            }
#line 832 "query.m"
                                                                            {
#line 832 "query.m"
                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 832 "query.m"
                                                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_142));
#line 832 "query.m"
                                                                            }
#line 830 "query.m"
                                                                          }
#line 833 "query.m"
                                                                        else
#line 840 "query.m"
                                                                          {
#line 840 "query.m"
                                                                            MR_Integer query__CliqueNum_161;
#line 834 "query.m"
                                                                            MR_String query__V_105_105;
#line 834 "query.m"
                                                                            MR_Word query__V_106_106;
#line 834 "query.m"
                                                                            MR_Word query__V_107_107;
#line 834 "query.m"
                                                                            MR_String query__CliqueNumStr_143;
#line 834 "query.m"
                                                                            MR_String query__V_290_290;

#line 834 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 834 "query.m"
                                                                            if (query__succeeded)
#line 834 "query.m"
                                                                              {
#line 834 "query.m"
                                                                                query__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 834 "query.m"
                                                                                query__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 834 "query.m"
                                                                                {
#line 834 "query.m"
                                                                                  query__V_290_290 = query__cmd_str_dump_raw_clique_0_f_0();
                                                                                }
#line 834 "query.m"
                                                                                query__succeeded = (strcmp(query__V_105_105, query__V_290_290) == 0);
#line 834 "query.m"
                                                                                if (query__succeeded)
#line 834 "query.m"
                                                                                  {
#line 834 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_106_106)) == (MR_mktag((MR_Integer) 1)));
#line 834 "query.m"
                                                                                    if (query__succeeded)
#line 834 "query.m"
                                                                                      {
#line 834 "query.m"
                                                                                        query__CliqueNumStr_143 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 0)));
#line 834 "query.m"
                                                                                        query__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 1)));
#line 834 "query.m"
                                                                                        query__succeeded = (query__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "query.m"
                                                                                        if (query__succeeded)
#line 835 "query.m"
                                                                                          {
#line 835 "query.m"
                                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_143, &query__CliqueNum_161);
                                                                                          }
#line 834 "query.m"
                                                                                      }
#line 834 "query.m"
                                                                                  }
#line 834 "query.m"
                                                                              }
#line 840 "query.m"
                                                                            if (query__succeeded)
#line 837 "query.m"
                                                                              {
#line 837 "query.m"
                                                                                MR_Word query__Cmd_144;
#line 837 "query.m"
                                                                                MR_Word query__CliquePtr_145 = (MR_Word) query__CliqueNum_161;

#line 838 "query.m"
                                                                                {
#line 838 "query.m"
                                                                                  query__Cmd_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 838 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 1) = ((MR_Box) (query__CliquePtr_145));
#line 838 "query.m"
                                                                                }
#line 839 "query.m"
                                                                                {
#line 839 "query.m"
                                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "query.m"
                                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_144));
#line 839 "query.m"
                                                                                }
#line 837 "query.m"
                                                                              }
#line 840 "query.m"
                                                                            else
#line 847 "query.m"
                                                                              {
#line 847 "query.m"
                                                                                MR_Integer query__CSDI_157;
#line 841 "query.m"
                                                                                MR_String query__V_108_108;
#line 841 "query.m"
                                                                                MR_Word query__V_109_109;
#line 841 "query.m"
                                                                                MR_Word query__V_110_110;
#line 841 "query.m"
                                                                                MR_String query__CSDIStr_146;
#line 841 "query.m"
                                                                                MR_String query__V_291_291;

#line 841 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 841 "query.m"
                                                                                if (query__succeeded)
#line 841 "query.m"
                                                                                  {
#line 841 "query.m"
                                                                                    query__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 841 "query.m"
                                                                                    query__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 841 "query.m"
                                                                                    {
#line 841 "query.m"
                                                                                      query__V_291_291 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                                                                                    }
#line 841 "query.m"
                                                                                    query__succeeded = (strcmp(query__V_108_108, query__V_291_291) == 0);
#line 841 "query.m"
                                                                                    if (query__succeeded)
#line 841 "query.m"
                                                                                      {
#line 841 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 841 "query.m"
                                                                                        if (query__succeeded)
#line 841 "query.m"
                                                                                          {
#line 841 "query.m"
                                                                                            query__CSDIStr_146 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 0)));
#line 841 "query.m"
                                                                                            query__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 1)));
#line 841 "query.m"
                                                                                            query__succeeded = (query__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 841 "query.m"
                                                                                            if (query__succeeded)
#line 842 "query.m"
                                                                                              {
#line 842 "query.m"
                                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_146, &query__CSDI_157);
                                                                                              }
#line 841 "query.m"
                                                                                          }
#line 841 "query.m"
                                                                                      }
#line 841 "query.m"
                                                                                  }
#line 847 "query.m"
                                                                                if (query__succeeded)
#line 844 "query.m"
                                                                                  {
#line 844 "query.m"
                                                                                    MR_Word query__Cmd_147;
#line 844 "query.m"
                                                                                    MR_Word query__CSDPtr_148 = (MR_Word) query__CSDI_157;

#line 845 "query.m"
                                                                                    {
#line 845 "query.m"
                                                                                      query__Cmd_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 845 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 1) = ((MR_Box) (query__CSDPtr_148));
#line 845 "query.m"
                                                                                    }
#line 846 "query.m"
                                                                                    {
#line 846 "query.m"
                                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 846 "query.m"
                                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_147));
#line 846 "query.m"
                                                                                    }
#line 844 "query.m"
                                                                                  }
#line 847 "query.m"
                                                                                else
#line 853 "query.m"
                                                                                  {
#line 853 "query.m"
                                                                                    MR_Integer query__TimeOut_43;
#line 848 "query.m"
                                                                                    MR_String query__TimeOutStr_42;
#line 848 "query.m"
                                                                                    MR_String query__V_111_111;
#line 848 "query.m"
                                                                                    MR_Word query__V_112_112;
#line 848 "query.m"
                                                                                    MR_Word query__V_113_113;
#line 848 "query.m"
                                                                                    MR_String query__V_292_292;

#line 848 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 848 "query.m"
                                                                                    if (query__succeeded)
#line 848 "query.m"
                                                                                      {
#line 848 "query.m"
                                                                                        query__V_111_111 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 848 "query.m"
                                                                                        query__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 848 "query.m"
                                                                                        {
#line 848 "query.m"
                                                                                          query__V_292_292 = query__cmd_str_timeout_0_f_0();
                                                                                        }
#line 848 "query.m"
                                                                                        query__succeeded = (strcmp(query__V_111_111, query__V_292_292) == 0);
#line 848 "query.m"
                                                                                        if (query__succeeded)
#line 848 "query.m"
                                                                                          {
#line 848 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_112_112)) == (MR_mktag((MR_Integer) 1)));
#line 848 "query.m"
                                                                                            if (query__succeeded)
#line 848 "query.m"
                                                                                              {
#line 848 "query.m"
                                                                                                query__TimeOutStr_42 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 0)));
#line 848 "query.m"
                                                                                                query__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 1)));
#line 848 "query.m"
                                                                                                query__succeeded = (query__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 848 "query.m"
                                                                                                if (query__succeeded)
#line 849 "query.m"
                                                                                                  {
#line 849 "query.m"
                                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__TimeOutStr_42, &query__TimeOut_43);
                                                                                                  }
#line 848 "query.m"
                                                                                              }
#line 848 "query.m"
                                                                                          }
#line 848 "query.m"
                                                                                      }
#line 853 "query.m"
                                                                                    if (query__succeeded)
#line 851 "query.m"
                                                                                      {
#line 851 "query.m"
                                                                                        MR_Word query__Cmd_149;

#line 851 "query.m"
                                                                                        {
#line 851 "query.m"
                                                                                          query__Cmd_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 851 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__Cmd_149, 0) = ((MR_Box) (query__TimeOut_43));
#line 851 "query.m"
                                                                                        }
#line 852 "query.m"
                                                                                        {
#line 852 "query.m"
                                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 852 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_149));
#line 852 "query.m"
                                                                                        }
#line 851 "query.m"
                                                                                      }
#line 853 "query.m"
                                                                                    else
#line 858 "query.m"
                                                                                      {
#line 854 "query.m"
                                                                                        MR_String query__V_114_114;
#line 854 "query.m"
                                                                                        MR_Word query__V_115_115;
#line 854 "query.m"
                                                                                        MR_String query__V_293_293;

#line 854 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 854 "query.m"
                                                                                        if (query__succeeded)
#line 854 "query.m"
                                                                                          {
#line 854 "query.m"
                                                                                            query__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 854 "query.m"
                                                                                            query__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 854 "query.m"
                                                                                            {
#line 854 "query.m"
                                                                                              query__V_293_293 = query__cmd_str_restart_0_f_0();
                                                                                            }
#line 854 "query.m"
                                                                                            query__succeeded = (strcmp(query__V_114_114, query__V_293_293) == 0);
#line 854 "query.m"
                                                                                            if (query__succeeded)
#line 854 "query.m"
                                                                                              query__succeeded = (query__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "query.m"
                                                                                          }
#line 858 "query.m"
                                                                                        if (query__succeeded)
#line 856 "query.m"
                                                                                          {
#line 857 "query.m"
                                                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[5]);
#line 856 "query.m"
                                                                                          }
#line 858 "query.m"
                                                                                        else
#line 863 "query.m"
                                                                                          {
#line 859 "query.m"
                                                                                            MR_String query__V_116_116;
#line 859 "query.m"
                                                                                            MR_Word query__V_117_117;
#line 859 "query.m"
                                                                                            MR_String query__V_294_294;

#line 859 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 859 "query.m"
                                                                                            if (query__succeeded)
#line 859 "query.m"
                                                                                              {
#line 859 "query.m"
                                                                                                query__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 859 "query.m"
                                                                                                query__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 859 "query.m"
                                                                                                {
#line 859 "query.m"
                                                                                                  query__V_294_294 = query__cmd_str_quit_0_f_0();
                                                                                                }
#line 859 "query.m"
                                                                                                query__succeeded = (strcmp(query__V_116_116, query__V_294_294) == 0);
#line 859 "query.m"
                                                                                                if (query__succeeded)
#line 859 "query.m"
                                                                                                  query__succeeded = (query__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 859 "query.m"
                                                                                              }
#line 863 "query.m"
                                                                                            if (query__succeeded)
#line 861 "query.m"
                                                                                              {
#line 862 "query.m"
                                                                                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[6]);
#line 861 "query.m"
                                                                                              }
#line 863 "query.m"
                                                                                            else
#line 864 "query.m"
                                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "query.m"
                                                                                          }
#line 858 "query.m"
                                                                                      }
#line 853 "query.m"
                                                                                  }
#line 847 "query.m"
                                                                              }
#line 840 "query.m"
                                                                          }
#line 833 "query.m"
                                                                      }
#line 826 "query.m"
                                                                  }
#line 819 "query.m"
                                                              }
#line 812 "query.m"
                                                          }
#line 805 "query.m"
                                                      }
#line 800 "query.m"
                                                  }
#line 794 "query.m"
                                              }
#line 788 "query.m"
                                          }
#line 778 "query.m"
                                      }
#line 773 "query.m"
                                  }
#line 768 "query.m"
                              }
#line 763 "query.m"
                          }
#line 758 "query.m"
                      }
#line 745 "query.m"
                  }
#line 738 "query.m"
              }
#line 733 "query.m"
          }
#line 726 "query.m"
      }
#line 705 "query.m"
    return query__MaybeCmd_4;
#line 705 "query.m"
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
#line 937 "query.m"
  {
#line 937 "query.m"
    MR_bool query__succeeded;
#line 937 "query.m"
    MR_Word query__MaybeDeepQuery_4;
#line 937 "query.m"
    MR_Word query__MaybeCmdStr_5;
#line 937 "query.m"
    MR_Word query__MaybePrefStr_6;
#line 937 "query.m"
    MR_String query__DeepFileName_7;
#line 947 "query.m"
    MR_Word query__Pieces_19;
#line 953 "query.m"
    MR_String query__DeepFileName0_20;
#line 949 "query.m"
    MR_Word query__V_24_24;

#line 948 "query.m"
    {
#line 948 "query.m"
      util__split_3_p_0(query__String_3, (MR_Char) 38, &query__Pieces_19);
    }
#line 949 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 949 "query.m"
    if (query__succeeded)
#line 949 "query.m"
      {
#line 949 "query.m"
        query__DeepFileName0_20 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 949 "query.m"
        query__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 949 "query.m"
        query__succeeded = (query__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "query.m"
      }
#line 953 "query.m"
    if (query__succeeded)
#line 950 "query.m"
      {
#line 950 "query.m"
        query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 951 "query.m"
        query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 952 "query.m"
        query__DeepFileName_7 = query__DeepFileName0_20;
#line 950 "query.m"
        query__succeeded = MR_TRUE;
#line 950 "query.m"
      }
#line 953 "query.m"
    else
#line 957 "query.m"
      {
#line 957 "query.m"
        MR_String query__CmdStr_21;
#line 957 "query.m"
        MR_String query__DeepFileName0_32;
#line 953 "query.m"
        MR_Word query__V_25_25;
#line 953 "query.m"
        MR_Word query__V_26_26;

#line 953 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 953 "query.m"
        if (query__succeeded)
#line 953 "query.m"
          {
#line 953 "query.m"
            query__CmdStr_21 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 953 "query.m"
            query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 953 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 953 "query.m"
            if (query__succeeded)
#line 953 "query.m"
              {
#line 953 "query.m"
                query__DeepFileName0_32 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 0)));
#line 953 "query.m"
                query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_25_25, (MR_Integer) 1)));
#line 953 "query.m"
                query__succeeded = (query__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "query.m"
              }
#line 953 "query.m"
          }
#line 957 "query.m"
        if (query__succeeded)
#line 954 "query.m"
          {
#line 954 "query.m"
            {
#line 954 "query.m"
              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_21));
#line 954 "query.m"
            }
#line 955 "query.m"
            query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "query.m"
            query__DeepFileName_7 = query__DeepFileName0_32;
#line 954 "query.m"
            query__succeeded = MR_TRUE;
#line 954 "query.m"
          }
#line 957 "query.m"
        else
#line 961 "query.m"
          {
#line 961 "query.m"
            MR_String query__PrefsStr_22;
#line 961 "query.m"
            MR_Word query__V_27_27;
#line 961 "query.m"
            MR_Word query__V_28_28;
#line 961 "query.m"
            MR_Word query__V_29_29;
#line 961 "query.m"
            MR_String query__CmdStr_31;

#line 957 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__Pieces_19)) == (MR_mktag((MR_Integer) 1)));
#line 957 "query.m"
            if (query__succeeded)
#line 957 "query.m"
              {
#line 957 "query.m"
                query__CmdStr_31 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 0)));
#line 957 "query.m"
                query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_19, (MR_Integer) 1)));
#line 957 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 957 "query.m"
                if (query__succeeded)
#line 957 "query.m"
                  {
#line 957 "query.m"
                    query__PrefsStr_22 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 0)));
#line 957 "query.m"
                    query__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_27_27, (MR_Integer) 1)));
#line 957 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_28_28)) == (MR_mktag((MR_Integer) 1)));
#line 957 "query.m"
                    if (query__succeeded)
#line 957 "query.m"
                      {
#line 957 "query.m"
                        query__DeepFileName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 0)));
#line 957 "query.m"
                        query__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_28_28, (MR_Integer) 1)));
#line 957 "query.m"
                        query__succeeded = (query__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 961 "query.m"
                        if (query__succeeded)
#line 961 "query.m"
                          {
#line 958 "query.m"
                            {
#line 958 "query.m"
                              query__MaybeCmdStr_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, 0) = ((MR_Box) (query__CmdStr_31));
#line 958 "query.m"
                            }
#line 959 "query.m"
                            {
#line 959 "query.m"
                              query__MaybePrefStr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 959 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, 0) = ((MR_Box) (query__PrefsStr_22));
#line 959 "query.m"
                            }
#line 959 "query.m"
                            query__succeeded = MR_TRUE;
#line 961 "query.m"
                          }
#line 957 "query.m"
                      }
#line 957 "query.m"
                  }
#line 957 "query.m"
              }
#line 961 "query.m"
          }
#line 957 "query.m"
      }
#line 937 "query.m"
    if (query__succeeded)
#line 927 "query.m"
      {
#line 927 "query.m"
        MR_Word query__MaybeCmd_8;
#line 927 "query.m"
        MR_Word query__MaybePreferences_11;
#line 927 "query.m"
        MR_Word query__V_14_14;

#line 924 "query.m"
        if ((query__MaybeCmdStr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "query.m"
          query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "query.m"
        else
#line 925 "query.m"
          {
#line 925 "query.m"
            MR_String query__CmdStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, (MR_Integer) 0)));
#line 925 "query.m"
            MR_Word query__V_12_12;
#line 925 "query.m"
            MR_Word query__MaybeCmd_36;

#line 697 "query.m"
            {
#line 697 "query.m"
              query__MaybeCmd_36 = query__string_to_maybe_cmd_1_f_0(query__CmdStr_9);
            }
#line 700 "query.m"
            if ((query__MaybeCmd_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "query.m"
              query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 700 "query.m"
            else
#line 699 "query.m"
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybeCmd_36, (MR_Integer) 0)));
#line 926 "query.m"
            {
#line 926 "query.m"
              query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 926 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_8, 0) = ((MR_Box) (query__V_12_12));
#line 926 "query.m"
            }
#line 925 "query.m"
          }
#line 931 "query.m"
        if ((query__MaybePrefStr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "query.m"
          query__MaybePreferences_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "query.m"
        else
#line 929 "query.m"
          {
#line 929 "query.m"
            MR_String query__PrefStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, (MR_Integer) 0)));

#line 930 "query.m"
            {
#line 930 "query.m"
              query__MaybePreferences_11 = query__string_to_maybe_pref_1_f_0(query__PrefStr_10);
            }
#line 929 "query.m"
          }
#line 936 "query.m"
        {
#line 936 "query.m"
          query__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 936 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 0) = ((MR_Box) (query__MaybeCmd_8));
#line 936 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 1) = ((MR_Box) (query__DeepFileName_7));
#line 936 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 2) = ((MR_Box) (query__MaybePreferences_11));
#line 936 "query.m"
        }
#line 936 "query.m"
        {
#line 936 "query.m"
          query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeDeepQuery_4, 0) = ((MR_Box) (query__V_14_14));
#line 936 "query.m"
        }
#line 927 "query.m"
      }
#line 937 "query.m"
    else
#line 938 "query.m"
      query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 937 "query.m"
    return query__MaybeDeepQuery_4;
#line 937 "query.m"
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
#line 902 "query.m"
  {
#line 902 "query.m"
    MR_bool query__succeeded;
#line 902 "query.m"
    MR_String query__String_4;
#line 902 "query.m"
    MR_Word query__Cmd_5;
#line 902 "query.m"
    MR_String query__DeepFileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 1)));
#line 902 "query.m"
    MR_Word query__MaybePreferences_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 2)));
#line 902 "query.m"
    MR_String query__PreferencesString_9;
#line 902 "query.m"
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 0)));
#line 902 "query.m"
    MR_String query__V_11_11;
#line 902 "query.m"
    MR_String query__V_12_12;
#line 902 "query.m"
    MR_String query__V_13_13;
#line 902 "query.m"
    MR_String query__V_15_15;
#line 902 "query.m"
    MR_String query__V_16_16;
#line 902 "query.m"
    MR_String query__V_17_17;

#line 903 "query.m"
    query__Cmd_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_10_10, (MR_Integer) 0)));
#line 907 "query.m"
    if ((query__MaybePreferences_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "query.m"
      query__PreferencesString_9 = (MR_String) "";
#line 907 "query.m"
    else
#line 905 "query.m"
      {
#line 905 "query.m"
        MR_Word query__Preferences_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybePreferences_7, (MR_Integer) 0)));

#line 906 "query.m"
        {
#line 906 "query.m"
          query__PreferencesString_9 = query__preferences_to_string_1_f_0(query__Preferences_8);
        }
#line 905 "query.m"
      }
#line 911 "query.m"
    {
#line 911 "query.m"
      query__V_11_11 = query__cmd_to_string_1_f_0(query__Cmd_5);
    }
#line 912 "query.m"
    {
#line 912 "query.m"
      query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 914 "query.m"
    {
#line 914 "query.m"
      query__V_17_17 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 914 "query.m"
    {
#line 914 "query.m"
      query__V_16_16 = mercury__string__f_43_43_2_f_0(query__V_17_17, query__DeepFileName_6);
    }
#line 913 "query.m"
    {
#line 913 "query.m"
      query__V_15_15 = mercury__string__f_43_43_2_f_0(query__PreferencesString_9, query__V_16_16);
    }
#line 912 "query.m"
    {
#line 912 "query.m"
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
    }
#line 911 "query.m"
    {
#line 911 "query.m"
      return query__String_4 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
    }
#line 902 "query.m"
    return query__String_4;
#line 902 "query.m"
  }
#line 60 "query.m"
}

#line 385 "query.m"
static void MR_CALL 
query__try_exec_4_p_0_1(
#line 385 "query.m"
  MR_Box query__closure_arg,
#line 385 "query.m"
  MR_Box * query__wrapper_arg_1)
#line 385 "query.m"
{
#line 385 "query.m"
  {
#line 385 "query.m"
    MR_Box query__closure = query__closure_arg;
#line 385 "query.m"
    MR_String query__conv0_HTMLStr_8;

#line 385 "query.m"
    {
#line 385 "query.m"
      query__exec_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 5))), &query__conv0_HTMLStr_8);
    }
#line 385 "query.m"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HTMLStr_8));
#line 385 "query.m"
  }
#line 385 "query.m"
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
#line 384 "query.m"
  {
#line 384 "query.m"
    MR_bool query__succeeded;
#line 384 "query.m"
    MR_Word query__TypeCtorInfo_34_34;
#line 384 "query.m"
    MR_Word query__Result_9;
#line 384 "query.m"
    MR_Word query__V_19_19;

#line 385 "query.m"
    {
#line 385 "query.m"
      query__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 0) = ((MR_Box) (&query_scalar_common_3[0]));
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 1) = ((MR_Box) (query__try_exec_4_p_0_1));
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 3) = ((MR_Box) (query__Cmd_5));
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 4) = ((MR_Box) (query__Pref_6));
#line 385 "query.m"
      MR_hl_field(MR_mktag(0), query__V_19_19, 5) = ((MR_Box) (query__Deep_7));
#line 385 "query.m"
    }
#line 20819 "query.c"
    query__TypeCtorInfo_34_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 385 "query.m"
    {
#line 385 "query.m"
      mercury__exception__try_2_p_0(query__TypeCtorInfo_34_34, query__V_19_19, &query__Result_9);
    }
#line 388 "query.m"
    if (((MR_tag((MR_Word) query__Result_9)) == (MR_mktag((MR_Integer) 2))))
#line 389 "query.m"
      {
#line 389 "query.m"
        MR_Word query__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Result_9, (MR_Integer) 0)));
#line 389 "query.m"
        MR_String query__Msg_12;
#line 389 "query.m"
        MR_String query__V_39_39;
#line 389 "query.m"
        MR_String query__V_46_46;
#line 392 "query.m"
        MR_String query__MsgPrime_11;
#line 390 "query.m"
        MR_Box query__conv1_MsgPrime_11;

#line 390 "query.m"
        {
#line 390 "query.m"
          query__succeeded = mercury__univ__univ_to_type_2_p_0(query__TypeCtorInfo_34_34, query__Exception_10, &query__conv1_MsgPrime_11);
        }
#line 390 "query.m"
        if (query__succeeded)
#line 390 "query.m"
          {
#line 390 "query.m"
            query__MsgPrime_11 = ((MR_String) query__conv1_MsgPrime_11);
#line 390 "query.m"
            query__succeeded = MR_TRUE;
#line 390 "query.m"
          }
#line 392 "query.m"
        if (query__succeeded)
#line 391 "query.m"
          query__Msg_12 = query__MsgPrime_11;
#line 392 "query.m"
        else
#line 394 "query.m"
          {
#line 394 "query.m"
            MR_String query__ErrorMsg_13;
#line 392 "query.m"
            MR_Word query__V_20_20;
#line 392 "query.m"
            MR_Box query__conv2_V_20_20;

#line 392 "query.m"
            {
#line 392 "query.m"
              query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, query__Exception_10, &query__conv2_V_20_20);
            }
#line 392 "query.m"
            if (query__succeeded)
#line 392 "query.m"
              {
#line 392 "query.m"
                query__V_20_20 = ((MR_Word) query__conv2_V_20_20);
#line 392 "query.m"
                query__succeeded = MR_TRUE;
#line 392 "query.m"
              }
#line 392 "query.m"
            if (query__succeeded)
#line 392 "query.m"
              {
#line 392 "query.m"
                query__ErrorMsg_13 = (MR_String) query__V_20_20;
#line 392 "query.m"
                query__succeeded = MR_TRUE;
#line 392 "query.m"
              }
#line 394 "query.m"
            if (query__succeeded)
#line 393 "query.m"
              {
#line 393 "query.m"
                {
#line 393 "query.m"
                  query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "internal software error: ", query__ErrorMsg_13);
                }
#line 393 "query.m"
              }
#line 394 "query.m"
            else
#line 396 "query.m"
              {
#line 396 "query.m"
                MR_String query__DomainMsg_14;
#line 394 "query.m"
                MR_Word query__V_22_22;
#line 394 "query.m"
                MR_Box query__conv3_V_22_22;

#line 394 "query.m"
                {
#line 394 "query.m"
                  query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__math__math__type_ctor_info_domain_error_0, query__Exception_10, &query__conv3_V_22_22);
                }
#line 394 "query.m"
                if (query__succeeded)
#line 394 "query.m"
                  {
#line 394 "query.m"
                    query__V_22_22 = ((MR_Word) query__conv3_V_22_22);
#line 394 "query.m"
                    query__succeeded = MR_TRUE;
#line 394 "query.m"
                  }
#line 394 "query.m"
                if (query__succeeded)
#line 394 "query.m"
                  {
#line 394 "query.m"
                    query__DomainMsg_14 = (MR_String) query__V_22_22;
#line 394 "query.m"
                    query__succeeded = MR_TRUE;
#line 394 "query.m"
                  }
#line 396 "query.m"
                if (query__succeeded)
#line 395 "query.m"
                  {
#line 395 "query.m"
                    {
#line 395 "query.m"
                      query__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "domain error: ", query__DomainMsg_14);
                    }
#line 395 "query.m"
                  }
#line 396 "query.m"
                else
#line 397 "query.m"
                  query__Msg_12 = (MR_String) "unknown exception";
#line 396 "query.m"
              }
#line 394 "query.m"
          }
#line 411 "query.m"
        {
#line 411 "query.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__Msg_12, &query__V_39_39);
        }
#line 410 "query.m"
        {
#line 410 "query.m"
          query__V_46_46 = mercury__string__f_43_43_2_f_0(query__V_39_39, (MR_String) "</H3>\n");
        }
#line 410 "query.m"
        {
#line 410 "query.m"
          *query__HTML_8 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", query__V_46_46);
        }
#line 389 "query.m"
      }
#line 388 "query.m"
    else
#line 387 "query.m"
      *query__HTML_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Result_9, (MR_Integer) 0)));
#line 384 "query.m"
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
