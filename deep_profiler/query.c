/*
** Automatically generated from `query.m'
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 94 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0;

#line 97 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1;

#line 100 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2;

#line 103 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3];

#line 106 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3];

#line 109 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3];

#line 112 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0;

#line 115 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1;

#line 118 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2];

#line 121 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2];

#line 124 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2];

#line 127 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0;

#line 130 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1;

#line 133 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2;

#line 136 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3;

#line 139 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4];

#line 142 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4];

#line 145 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4];

#line 148 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0;

#line 151 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1;

#line 154 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2;

#line 157 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3];

#line 160 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3];

#line 163 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3];

#line 166 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0;

#line 169 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1;

#line 172 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1];

#line 175 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1];

#line 178 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2;

#line 181 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3;

#line 184 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 187 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1];

#line 190 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1];

#line 193 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4;

#line 196 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1];

#line 199 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1];

#line 202 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5;

#line 205 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1];

#line 208 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1];

#line 211 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6;

#line 214 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7;

#line 217 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1];

#line 220 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1];

#line 223 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8;

#line 226 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5];

#line 229 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5];

#line 232 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9;

#line 235 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10;

#line 238 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1];

#line 241 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1];

#line 244 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11;

#line 247 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1];

#line 250 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1];

#line 253 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12;

#line 256 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1];

#line 259 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1];

#line 262 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13;

#line 265 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4];

#line 268 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4];

#line 271 "query.c"
static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4];

#line 274 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14;

#line 277 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1];

#line 280 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1];

#line 283 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15;

#line 286 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1];

#line 289 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1];

#line 292 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16;

#line 295 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1];

#line 298 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1];

#line 301 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17;

#line 304 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1];

#line 307 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1];

#line 310 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18;

#line 313 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1];

#line 316 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1];

#line 319 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19;

#line 322 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1];

#line 325 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1];

#line 328 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20;

#line 331 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1];

#line 334 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1];

#line 337 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21;

#line 340 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1];

#line 343 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1];

#line 346 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22;

#line 349 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5];

#line 352 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1];

#line 355 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1];

#line 358 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16];

#line 361 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4];

#line 364 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23];

#line 367 "query.c"
static const MR_Integer query__query__functor_number_map_cmd_0[23];

#line 370 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0;

#line 373 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1;

#line 376 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2];

#line 379 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2];

#line 382 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2];

#line 385 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0;

#line 388 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1;

#line 391 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2];

#line 394 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2];

#line 397 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2];

#line 400 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0;

#line 403 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1;

#line 406 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2;

#line 409 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3;

#line 412 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4;

#line 415 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5;

#line 418 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6];

#line 421 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6];

#line 424 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6];

#line 427 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0;

#line 430 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 433 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3];

#line 436 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3];

#line 439 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0;

#line 442 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1];

#line 445 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1];

#line 448 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1];

#line 451 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1];

#line 454 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0;

#line 457 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1;

#line 460 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2];

#line 463 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2];

#line 466 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2];

#line 469 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0;

#line 472 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1;

#line 475 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2];

#line 478 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2];

#line 481 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2];

#line 484 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2];

#line 487 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0;

#line 490 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1];

#line 493 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1;

#line 496 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1];

#line 499 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2;

#line 502 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1];

#line 505 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1];

#line 508 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1];

#line 511 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3];

#line 514 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3];

#line 517 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3];

#line 520 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5];

#line 523 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5];

#line 526 "query.c"
static const MR_DuArgLocn query__query__field_locns_fields_0_0[5];

#line 529 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0;

#line 532 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1];

#line 535 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1];

#line 538 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1];

#line 541 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1];

#line 544 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3];

#line 547 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3];

#line 550 "query.c"
static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3];

#line 553 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0;

#line 556 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1];

#line 559 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1];

#line 562 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1];

#line 565 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1];

#line 568 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0;

#line 571 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1;

#line 574 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2];

#line 577 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2];

#line 580 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2];

#line 583 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0;

#line 586 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1;

#line 589 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2];

#line 592 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2];

#line 595 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2];

#line 598 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0;

#line 601 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1;

#line 604 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2];

#line 607 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2];

#line 610 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2];

#line 613 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0;

#line 616 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1];

#line 619 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1;

#line 622 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1];

#line 625 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2;

#line 628 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1];

#line 631 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1];

#line 634 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1];

#line 637 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3];

#line 640 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3];

#line 643 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3];

#line 646 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0;

#line 649 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1;

#line 652 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2;

#line 655 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3];

#line 658 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3];

#line 661 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3];

#line 664 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0;

#line 667 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1;

#line 670 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3];

#line 673 "query.c"
static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3];

#line 676 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2;

#line 679 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2];

#line 682 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1];

#line 685 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2];

#line 688 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3];

#line 691 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3];

#line 694 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0;

#line 697 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1;

#line 700 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2];

#line 703 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2];

#line 706 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2];

#line 709 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12];

#line 712 "query.c"
static const MR_ConstString query__query__field_names_preferences_0_0[12];

#line 715 "query.c"
static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12];

#line 718 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0;

#line 721 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1];

#line 724 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1];

#line 727 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1];

#line 730 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1];

#line 733 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1];

#line 736 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0;

#line 739 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1;

#line 742 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2;

#line 745 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2];

#line 748 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1];

#line 751 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2];

#line 754 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3];

#line 757 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3];

#line 760 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1];

#line 763 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0;

#line 766 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0;

#line 769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1;

#line 772 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2];

#line 775 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2];

#line 778 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2];

#line 781 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0;

#line 784 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1;

#line 787 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2;

#line 790 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3;

#line 793 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4;

#line 796 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5;

#line 799 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6];

#line 802 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6];

#line 805 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6];

#line 808 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0;

#line 811 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1;

#line 814 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2;

#line 817 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3];

#line 820 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3];

#line 823 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3];

#line 826 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 829 "query.c"
  MR_Box query__wrapper_arg_1,
#line 831 "query.c"
  MR_Box query__wrapper_arg_2);

#line 834 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 837 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 839 "query.c"
  MR_Box query__wrapper_arg_2,
#line 841 "query.c"
  MR_Box query__wrapper_arg_3);

#line 844 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 847 "query.c"
  MR_Box query__wrapper_arg_1,
#line 849 "query.c"
  MR_Box query__wrapper_arg_2);

#line 852 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 855 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 857 "query.c"
  MR_Box query__wrapper_arg_2,
#line 859 "query.c"
  MR_Box query__wrapper_arg_3);

#line 862 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 865 "query.c"
  MR_Box query__wrapper_arg_1,
#line 867 "query.c"
  MR_Box query__wrapper_arg_2);

#line 870 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 873 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 875 "query.c"
  MR_Box query__wrapper_arg_2,
#line 877 "query.c"
  MR_Box query__wrapper_arg_3);

#line 880 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 883 "query.c"
  MR_Box query__wrapper_arg_1,
#line 885 "query.c"
  MR_Box query__wrapper_arg_2);

#line 888 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 891 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 893 "query.c"
  MR_Box query__wrapper_arg_2,
#line 895 "query.c"
  MR_Box query__wrapper_arg_3);

#line 898 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 901 "query.c"
  MR_Box query__wrapper_arg_1,
#line 903 "query.c"
  MR_Box query__wrapper_arg_2);

#line 906 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 909 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 911 "query.c"
  MR_Box query__wrapper_arg_2,
#line 913 "query.c"
  MR_Box query__wrapper_arg_3);

#line 916 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 919 "query.c"
  MR_Box query__wrapper_arg_1,
#line 921 "query.c"
  MR_Box query__wrapper_arg_2);

#line 924 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 927 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 929 "query.c"
  MR_Box query__wrapper_arg_2,
#line 931 "query.c"
  MR_Box query__wrapper_arg_3);

#line 934 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 937 "query.c"
  MR_Box query__wrapper_arg_1,
#line 939 "query.c"
  MR_Box query__wrapper_arg_2);

#line 942 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 945 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 947 "query.c"
  MR_Box query__wrapper_arg_2,
#line 949 "query.c"
  MR_Box query__wrapper_arg_3);

#line 952 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 955 "query.c"
  MR_Box query__wrapper_arg_1,
#line 957 "query.c"
  MR_Box query__wrapper_arg_2);

#line 960 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 963 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 965 "query.c"
  MR_Box query__wrapper_arg_2,
#line 967 "query.c"
  MR_Box query__wrapper_arg_3);

#line 970 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 973 "query.c"
  MR_Box query__wrapper_arg_1,
#line 975 "query.c"
  MR_Box query__wrapper_arg_2);

#line 978 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 981 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 983 "query.c"
  MR_Box query__wrapper_arg_2,
#line 985 "query.c"
  MR_Box query__wrapper_arg_3);

#line 988 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 991 "query.c"
  MR_Box query__wrapper_arg_1,
#line 993 "query.c"
  MR_Box query__wrapper_arg_2);

#line 996 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 999 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1001 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1003 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1006 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 1009 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1011 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1014 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 1017 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1019 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1021 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1024 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 1027 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1029 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1032 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 1035 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1037 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1039 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1042 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 1045 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1047 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1050 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 1053 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1055 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1057 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1060 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 1063 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1065 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1068 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 1071 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1073 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1075 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1078 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 1081 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1083 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1086 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 1089 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1091 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1093 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1096 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 1099 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1101 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1104 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 1107 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1109 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1111 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1114 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 1117 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1119 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1122 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 1125 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1127 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1129 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1132 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 1135 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1137 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1140 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 1143 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1145 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1147 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1150 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 1153 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1155 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1158 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 1161 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1163 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1165 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1168 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 1171 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1173 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1176 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 1179 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1181 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1183 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1186 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 1189 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1191 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1194 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 1197 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1199 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1201 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1204 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 1207 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1209 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1212 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 1215 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1217 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1219 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1222 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 1225 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1227 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1230 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 1233 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1235 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1237 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1240 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 1243 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1245 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1248 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 1251 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1253 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1255 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1258 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 1261 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1263 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1266 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 1269 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1271 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1273 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1276 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 1279 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1281 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1284 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 1287 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1289 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1291 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1294 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 1297 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1299 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1302 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 1305 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1307 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1309 "query.c"
  MR_Box query__wrapper_arg_3);

#line 437 "query.m"
static /* sealed */ const MR_TableStepDesc query__table_input_steps_for_create_and_memoize_report_3_p_0[2];

#line 437 "query.m"
static /* sealed */ MR_TableStepStats query__table_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 437 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_call_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 437 "query.m"
static /* sealed */ MR_TableStepStats query__table_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 437 "query.m"
static /* sealed */ MR_TableStepStats query__table_prev_answer_step_stats_for_create_and_memoize_report_3_p_0[2];

#line 437 "query.m"
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

#line 666 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 666 "query.m"
  MR_Word query__Pref_3);

#line 535 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 535 "query.m"
  MR_Word query__Cmd_3);

#line 521 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void);

#line 520 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void);

#line 437 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 437 "query.m"
  MR_Word query__Cmd_4,
#line 437 "query.m"
  MR_Word query__Deep_5,
#line 437 "query.m"
  MR_Word * query__Report_6);

#line 415 "query.m"
static void MR_CALL 
query__exec_6_p_0(
#line 415 "query.m"
  MR_Word query__Cmd_7,
#line 415 "query.m"
  MR_Word query__Prefs_8,
#line 415 "query.m"
  MR_Word query__Deep_9,
#line 415 "query.m"
  MR_String * query__HTMLStr_10);

#line 386 "query.m"
static void MR_CALL 
query__try_exec_6_p_0_1(
#line 386 "query.m"
  MR_Box query__closure_arg,
#line 386 "query.m"
  MR_Box * query__wrapper_arg_1,
#line 386 "query.m"
  MR_Box query__wrapper_arg_2,
#line 386 "query.m"
  MR_Box * query__wrapper_arg_3);


static /* final */ const MR_Box query_scalar_common_1[4][2];

static /* final */ const MR_Box query_scalar_common_2[16][1];

static /* final */ const MR_Box query_scalar_common_3[1][9];




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

static /* final */ const MR_Box query_scalar_common_2[16][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 2)))))))
  },
};

static /* final */ const MR_Box query_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 1762 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

#line 1768 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

#line 1774 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

#line 1780 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

#line 1787 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

#line 1794 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1801 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_alloc_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____alloc_fields_0_0_10001)),
  ((MR_Box) (query____Compare____alloc_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "alloc_fields",
  {
    query__query__enum_name_ordered_alloc_fields_0
  },
  {
    query__query__enum_value_ordered_alloc_fields_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_alloc_fields_0
};

#line 1822 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

#line 1828 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

#line 1834 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1840 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1846 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1852 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_box_tables_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____box_tables_0_0_10001)),
  ((MR_Box) (query____Compare____box_tables_0_0_10001)),
  (MR_String) "query",
  (MR_String) "box_tables",
  {
    query__query__enum_name_ordered_box_tables_0
  },
  {
    query__query__enum_value_ordered_box_tables_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_box_tables_0
};

#line 1873 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

#line 1879 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

#line 1885 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

#line 1891 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

#line 1897 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

#line 1905 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

#line 1913 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1921 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_caller_groups_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____caller_groups_0_0_10001)),
  ((MR_Box) (query____Compare____caller_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "caller_groups",
  {
    query__query__enum_name_ordered_caller_groups_0
  },
  {
    query__query__enum_value_ordered_caller_groups_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  query__query__functor_number_map_caller_groups_0
};

#line 1942 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

#line 1948 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

#line 1954 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

#line 1960 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

#line 1967 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

#line 1974 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1981 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_callseqs_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____callseqs_fields_0_0_10001)),
  ((MR_Box) (query____Compare____callseqs_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "callseqs_fields",
  {
    query__query__enum_name_ordered_callseqs_fields_0
  },
  {
    query__query__enum_value_ordered_callseqs_fields_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_callseqs_fields_0
};

#line 2002 "query.c"
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

#line 2017 "query.c"
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

#line 2032 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2037 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

#line 2042 "query.c"
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

#line 2057 "query.c"
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

#line 2072 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2080 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2085 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

#line 2090 "query.c"
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

#line 2105 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2110 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

#line 2115 "query.c"
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

#line 2130 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2135 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

#line 2140 "query.c"
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

#line 2155 "query.c"
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

#line 2170 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2175 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

#line 2180 "query.c"
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

#line 2195 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

#line 2204 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

#line 2213 "query.c"
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

#line 2228 "query.c"
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

#line 2243 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2248 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

#line 2253 "query.c"
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

#line 2268 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2273 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

#line 2278 "query.c"
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

#line 2293 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2298 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

#line 2303 "query.c"
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

#line 2318 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 2326 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

#line 2334 "query.c"
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

#line 2358 "query.c"
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

#line 2373 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2378 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

#line 2383 "query.c"
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

#line 2398 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2403 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

#line 2408 "query.c"
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

#line 2423 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2428 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

#line 2433 "query.c"
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

#line 2448 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2453 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

#line 2458 "query.c"
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

#line 2473 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

#line 2478 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

#line 2483 "query.c"
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

#line 2498 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2503 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

#line 2508 "query.c"
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

#line 2523 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2528 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

#line 2533 "query.c"
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

#line 2548 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2553 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

#line 2558 "query.c"
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

#line 2573 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

#line 2582 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

#line 2587 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

#line 2592 "query.c"
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

#line 2612 "query.c"
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

#line 2636 "query.c"
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

#line 2663 "query.c"
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

#line 2690 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cmd_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____cmd_0_0_10001)),
  ((MR_Box) (query____Compare____cmd_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cmd",
  {
    query__query__du_name_ordered_cmd_0
  },
  {
    query__query__du_ptag_ordered_cmd_0
  },
  (MR_Integer) 23,
  (MR_Integer) 4,
  query__query__functor_number_map_cmd_0
};

#line 2711 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

#line 2717 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

#line 2723 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2729 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2735 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2741 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_colour_column_groups_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____colour_column_groups_0_0_10001)),
  ((MR_Box) (query____Compare____colour_column_groups_0_0_10001)),
  (MR_String) "query",
  (MR_String) "colour_column_groups",
  {
    query__query__enum_name_ordered_colour_column_groups_0
  },
  {
    query__query__enum_value_ordered_colour_column_groups_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_colour_column_groups_0
};

#line 2762 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

#line 2768 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

#line 2774 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2780 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2786 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2792 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_contour_exclusion_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____contour_exclusion_0_0_10001)),
  ((MR_Box) (query____Compare____contour_exclusion_0_0_10001)),
  (MR_String) "query",
  (MR_String) "contour_exclusion",
  {
    query__query__enum_name_ordered_contour_exclusion_0
  },
  {
    query__query__enum_value_ordered_contour_exclusion_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_contour_exclusion_0
};

#line 2813 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

#line 2819 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

#line 2825 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

#line 2831 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

#line 2837 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

#line 2843 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

#line 2849 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2859 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2869 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 2879 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_cost_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____cost_kind_0_0_10001)),
  ((MR_Box) (query____Compare____cost_kind_0_0_10001)),
  (MR_String) "query",
  (MR_String) "cost_kind",
  {
    query__query__enum_name_ordered_cost_kind_0
  },
  {
    query__query__enum_value_ordered_cost_kind_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_cost_kind_0
};

#line 2900 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

#line 2908 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 2916 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

#line 2923 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

#line 2930 "query.c"
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

#line 2945 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2950 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

#line 2959 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2964 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

#line 2969 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_deep_query_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____deep_query_0_0_10001)),
  ((MR_Box) (query____Compare____deep_query_0_0_10001)),
  (MR_String) "query",
  (MR_String) "deep_query",
  {
    query__query__du_name_ordered_deep_query_0
  },
  {
    query__query__du_ptag_ordered_deep_query_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_deep_query_0
};

#line 2990 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

#line 2996 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

#line 3002 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3008 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3014 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3020 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_descendants_meaningful_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____descendants_meaningful_0_0_10001)),
  ((MR_Box) (query____Compare____descendants_meaningful_0_0_10001)),
  (MR_String) "query",
  (MR_String) "descendants_meaningful",
  {
    query__query__enum_name_ordered_descendants_meaningful_0
  },
  {
    query__query__enum_value_ordered_descendants_meaningful_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_descendants_meaningful_0
};

#line 3041 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

#line 3047 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

#line 3053 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

#line 3059 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

#line 3065 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3071 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_developer_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____developer_mode_0_0_10001)),
  ((MR_Box) (query____Compare____developer_mode_0_0_10001)),
  (MR_String) "query",
  (MR_String) "developer_mode",
  {
    query__query__enum_name_ordered_developer_mode_0
  },
  {
    query__query__enum_value_ordered_developer_mode_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_developer_mode_0
};

#line 3092 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3098 "query.c"
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

#line 3113 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3118 "query.c"
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

#line 3133 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3138 "query.c"
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

#line 3153 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

#line 3158 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

#line 3163 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3168 "query.c"
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

#line 3187 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3194 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 3201 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_display_limit_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____display_limit_0_0_10001)),
  ((MR_Box) (query____Compare____display_limit_0_0_10001)),
  (MR_String) "query",
  (MR_String) "display_limit",
  {
    query__query__du_name_ordered_display_limit_0
  },
  {
    query__query__du_ptag_ordered_display_limit_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_display_limit_0
};

#line 3222 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
};

#line 3231 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

#line 3240 "query.c"
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

#line 3269 "query.c"
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

#line 3284 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3289 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

#line 3298 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3303 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

#line 3308 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____fields_0_0_10001)),
  ((MR_Box) (query____Compare____fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "fields",
  {
    query__query__du_name_ordered_fields_0
  },
  {
    query__query__du_ptag_ordered_fields_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_fields_0
};

#line 3329 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

#line 3336 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

#line 3343 "query.c"
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

#line 3362 "query.c"
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

#line 3377 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3382 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

#line 3391 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3396 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

#line 3401 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_items_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____inactive_items_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_items_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_items",
  {
    query__query__du_name_ordered_inactive_items_0
  },
  {
    query__query__du_ptag_ordered_inactive_items_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_items_0
};

#line 3422 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

#line 3428 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

#line 3434 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3440 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3446 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3452 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_inactive_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____inactive_status_0_0_10001)),
  ((MR_Box) (query____Compare____inactive_status_0_0_10001)),
  (MR_String) "query",
  (MR_String) "inactive_status",
  {
    query__query__enum_name_ordered_inactive_status_0
  },
  {
    query__query__enum_value_ordered_inactive_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_inactive_status_0
};

#line 3473 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

#line 3479 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

#line 3485 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3491 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3497 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3503 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_include_descendants_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____include_descendants_0_0_10001)),
  ((MR_Box) (query____Compare____include_descendants_0_0_10001)),
  (MR_String) "query",
  (MR_String) "include_descendants",
  {
    query__query__enum_name_ordered_include_descendants_0
  },
  {
    query__query__enum_value_ordered_include_descendants_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_include_descendants_0
};

#line 3524 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

#line 3530 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

#line 3536 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

#line 3542 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

#line 3548 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3554 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_measurement_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____measurement_scope_0_0_10001)),
  ((MR_Box) (query____Compare____measurement_scope_0_0_10001)),
  (MR_String) "query",
  (MR_String) "measurement_scope",
  {
    query__query__enum_name_ordered_measurement_scope_0
  },
  {
    query__query__enum_value_ordered_measurement_scope_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_measurement_scope_0
};

#line 3575 "query.c"
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

#line 3590 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3595 "query.c"
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

#line 3610 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3615 "query.c"
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

#line 3630 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3635 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

#line 3640 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

#line 3645 "query.c"
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

#line 3664 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3671 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3678 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_memory_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____memory_fields_0_0_10001)),
  ((MR_Box) (query____Compare____memory_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "memory_fields",
  {
    query__query__du_name_ordered_memory_fields_0
  },
  {
    query__query__du_ptag_ordered_memory_fields_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_memory_fields_0
};

#line 3699 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

#line 3705 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

#line 3711 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

#line 3717 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

#line 3724 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

#line 3731 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3738 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_module_qual_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____module_qual_0_0_10001)),
  ((MR_Box) (query____Compare____module_qual_0_0_10001)),
  (MR_String) "query",
  (MR_String) "module_qual",
  {
    query__query__enum_name_ordered_module_qual_0
  },
  {
    query__query__enum_value_ordered_module_qual_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_module_qual_0
};

#line 3759 "query.c"
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

#line 3774 "query.c"
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

#line 3789 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 3796 "query.c"
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

#line 3815 "query.c"
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

#line 3830 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3836 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

#line 3841 "query.c"
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

#line 3855 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3862 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3869 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_order_criteria_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____order_criteria_0_0_10001)),
  ((MR_Box) (query____Compare____order_criteria_0_0_10001)),
  (MR_String) "query",
  (MR_String) "order_criteria",
  {
    query__query__du_name_ordered_order_criteria_0
  },
  {
    query__query__du_ptag_ordered_order_criteria_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_order_criteria_0
};

#line 3890 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

#line 3896 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

#line 3902 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3908 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3914 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3920 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_port_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____port_fields_0_0_10001)),
  ((MR_Box) (query____Compare____port_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "port_fields",
  {
    query__query__enum_name_ordered_port_fields_0
  },
  {
    query__query__enum_value_ordered_port_fields_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_port_fields_0
};

#line 3941 "query.c"
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

#line 3957 "query.c"
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

#line 3973 "query.c"
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

#line 4037 "query.c"
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

#line 4052 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4057 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

#line 4066 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4071 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

#line 4076 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences",
  {
    query__query__du_name_ordered_preferences_0
  },
  {
    query__query__du_ptag_ordered_preferences_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_0
};

#line 4097 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

#line 4102 "query.c"
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

#line 4117 "query.c"
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

#line 4132 "query.c"
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

#line 4147 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

#line 4153 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4158 "query.c"
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

#line 4172 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4179 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4186 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_preferences_indication_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (query____Unify____preferences_indication_0_0_10001)),
  ((MR_Box) (query____Compare____preferences_indication_0_0_10001)),
  (MR_String) "query",
  (MR_String) "preferences_indication",
  {
    query__query__du_name_ordered_preferences_indication_0
  },
  {
    query__query__du_ptag_ordered_preferences_indication_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_preferences_indication_0
};

#line 4207 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

#line 4212 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4219 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_resp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (query____Unify____resp_0_0_10001)),
  ((MR_Box) (query____Compare____resp_0_0_10001)),
  (MR_String) "query",
  (MR_String) "resp",
  {
    &query__query__notag_functor_desc_resp_0
  },
  {
    &query__query__notag_functor_desc_resp_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  query__query__functor_number_map_resp_0
};

#line 4240 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

#line 4246 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

#line 4252 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

#line 4258 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

#line 4264 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4270 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_summarize_ho_call_sites_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____summarize_ho_call_sites_0_0_10001)),
  ((MR_Box) (query____Compare____summarize_ho_call_sites_0_0_10001)),
  (MR_String) "query",
  (MR_String) "summarize_ho_call_sites",
  {
    query__query__enum_name_ordered_summarize_ho_call_sites_0
  },
  {
    query__query__enum_value_ordered_summarize_ho_call_sites_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  query__query__functor_number_map_summarize_ho_call_sites_0
};

#line 4291 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

#line 4297 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

#line 4303 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

#line 4309 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

#line 4315 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

#line 4321 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

#line 4327 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

#line 4337 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

#line 4347 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 4357 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_fields_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_fields_0_0_10001)),
  ((MR_Box) (query____Compare____time_fields_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_fields",
  {
    query__query__enum_name_ordered_time_fields_0
  },
  {
    query__query__enum_value_ordered_time_fields_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  query__query__functor_number_map_time_fields_0
};

#line 4378 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

#line 4384 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

#line 4390 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

#line 4396 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4403 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4410 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4417 "query.c"
const MR_TypeCtorInfo_Struct query__query__type_ctor_info_time_format_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (query____Unify____time_format_0_0_10001)),
  ((MR_Box) (query____Compare____time_format_0_0_10001)),
  (MR_String) "query",
  (MR_String) "time_format",
  {
    query__query__enum_name_ordered_time_format_0
  },
  {
    query__query__enum_value_ordered_time_format_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  query__query__functor_number_map_time_format_0
};

#line 4438 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 4441 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4443 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4445 "query.c"
{
#line 4447 "query.c"
  {
#line 4449 "query.c"
    MR_bool query__succeeded;

#line 4452 "query.c"
    {
#line 4454 "query.c"
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4457 "query.c"
    return query__succeeded;
#line 4459 "query.c"
  }
#line 4461 "query.c"
}

#line 4464 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 4467 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4469 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4471 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4473 "query.c"
{
#line 4475 "query.c"
  {
#line 4477 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4480 "query.c"
    {
#line 4482 "query.c"
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4485 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4487 "query.c"
  }
#line 4489 "query.c"
}

#line 4492 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 4495 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4497 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4499 "query.c"
{
#line 4501 "query.c"
  {
#line 4503 "query.c"
    MR_bool query__succeeded;

#line 4506 "query.c"
    {
#line 4508 "query.c"
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4511 "query.c"
    return query__succeeded;
#line 4513 "query.c"
  }
#line 4515 "query.c"
}

#line 4518 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 4521 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4523 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4525 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4527 "query.c"
{
#line 4529 "query.c"
  {
#line 4531 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4534 "query.c"
    {
#line 4536 "query.c"
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4539 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4541 "query.c"
  }
#line 4543 "query.c"
}

#line 4546 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 4549 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4551 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4553 "query.c"
{
#line 4555 "query.c"
  {
#line 4557 "query.c"
    MR_bool query__succeeded;

#line 4560 "query.c"
    {
#line 4562 "query.c"
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4565 "query.c"
    return query__succeeded;
#line 4567 "query.c"
  }
#line 4569 "query.c"
}

#line 4572 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 4575 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4577 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4579 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4581 "query.c"
{
#line 4583 "query.c"
  {
#line 4585 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4588 "query.c"
    {
#line 4590 "query.c"
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4593 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4595 "query.c"
  }
#line 4597 "query.c"
}

#line 4600 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 4603 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4605 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4607 "query.c"
{
#line 4609 "query.c"
  {
#line 4611 "query.c"
    MR_bool query__succeeded;

#line 4614 "query.c"
    {
#line 4616 "query.c"
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4619 "query.c"
    return query__succeeded;
#line 4621 "query.c"
  }
#line 4623 "query.c"
}

#line 4626 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 4629 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4631 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4633 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4635 "query.c"
{
#line 4637 "query.c"
  {
#line 4639 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4642 "query.c"
    {
#line 4644 "query.c"
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4647 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4649 "query.c"
  }
#line 4651 "query.c"
}

#line 4654 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 4657 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4659 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4661 "query.c"
{
#line 4663 "query.c"
  {
#line 4665 "query.c"
    MR_bool query__succeeded;

#line 4668 "query.c"
    {
#line 4670 "query.c"
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4673 "query.c"
    return query__succeeded;
#line 4675 "query.c"
  }
#line 4677 "query.c"
}

#line 4680 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 4683 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4685 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4687 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4689 "query.c"
{
#line 4691 "query.c"
  {
#line 4693 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4696 "query.c"
    {
#line 4698 "query.c"
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4701 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4703 "query.c"
  }
#line 4705 "query.c"
}

#line 4708 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 4711 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4713 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4715 "query.c"
{
#line 4717 "query.c"
  {
#line 4719 "query.c"
    MR_bool query__succeeded;

#line 4722 "query.c"
    {
#line 4724 "query.c"
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4727 "query.c"
    return query__succeeded;
#line 4729 "query.c"
  }
#line 4731 "query.c"
}

#line 4734 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 4737 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4739 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4741 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4743 "query.c"
{
#line 4745 "query.c"
  {
#line 4747 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4750 "query.c"
    {
#line 4752 "query.c"
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4755 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4757 "query.c"
  }
#line 4759 "query.c"
}

#line 4762 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 4765 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4767 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4769 "query.c"
{
#line 4771 "query.c"
  {
#line 4773 "query.c"
    MR_bool query__succeeded;

#line 4776 "query.c"
    {
#line 4778 "query.c"
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4781 "query.c"
    return query__succeeded;
#line 4783 "query.c"
  }
#line 4785 "query.c"
}

#line 4788 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 4791 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4793 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4795 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4797 "query.c"
{
#line 4799 "query.c"
  {
#line 4801 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4804 "query.c"
    {
#line 4806 "query.c"
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4809 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4811 "query.c"
  }
#line 4813 "query.c"
}

#line 4816 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 4819 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4821 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4823 "query.c"
{
#line 4825 "query.c"
  {
#line 4827 "query.c"
    MR_bool query__succeeded;

#line 4830 "query.c"
    {
#line 4832 "query.c"
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4835 "query.c"
    return query__succeeded;
#line 4837 "query.c"
  }
#line 4839 "query.c"
}

#line 4842 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 4845 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4847 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4849 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4851 "query.c"
{
#line 4853 "query.c"
  {
#line 4855 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4858 "query.c"
    {
#line 4860 "query.c"
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4863 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4865 "query.c"
  }
#line 4867 "query.c"
}

#line 4870 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 4873 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4875 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4877 "query.c"
{
#line 4879 "query.c"
  {
#line 4881 "query.c"
    MR_bool query__succeeded;

#line 4884 "query.c"
    {
#line 4886 "query.c"
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4889 "query.c"
    return query__succeeded;
#line 4891 "query.c"
  }
#line 4893 "query.c"
}

#line 4896 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 4899 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4901 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4903 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4905 "query.c"
{
#line 4907 "query.c"
  {
#line 4909 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4912 "query.c"
    {
#line 4914 "query.c"
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4917 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4919 "query.c"
  }
#line 4921 "query.c"
}

#line 4924 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 4927 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4929 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4931 "query.c"
{
#line 4933 "query.c"
  {
#line 4935 "query.c"
    MR_bool query__succeeded;

#line 4938 "query.c"
    {
#line 4940 "query.c"
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4943 "query.c"
    return query__succeeded;
#line 4945 "query.c"
  }
#line 4947 "query.c"
}

#line 4950 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 4953 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4955 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4957 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4959 "query.c"
{
#line 4961 "query.c"
  {
#line 4963 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4966 "query.c"
    {
#line 4968 "query.c"
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4971 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4973 "query.c"
  }
#line 4975 "query.c"
}

#line 4978 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 4981 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4983 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4985 "query.c"
{
#line 4987 "query.c"
  {
#line 4989 "query.c"
    MR_bool query__succeeded;

#line 4992 "query.c"
    {
#line 4994 "query.c"
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4997 "query.c"
    return query__succeeded;
#line 4999 "query.c"
  }
#line 5001 "query.c"
}

#line 5004 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 5007 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5009 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5011 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5013 "query.c"
{
#line 5015 "query.c"
  {
#line 5017 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5020 "query.c"
    {
#line 5022 "query.c"
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5025 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5027 "query.c"
  }
#line 5029 "query.c"
}

#line 5032 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 5035 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5037 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5039 "query.c"
{
#line 5041 "query.c"
  {
#line 5043 "query.c"
    MR_bool query__succeeded;

#line 5046 "query.c"
    {
#line 5048 "query.c"
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5051 "query.c"
    return query__succeeded;
#line 5053 "query.c"
  }
#line 5055 "query.c"
}

#line 5058 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 5061 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5063 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5065 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5067 "query.c"
{
#line 5069 "query.c"
  {
#line 5071 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5074 "query.c"
    {
#line 5076 "query.c"
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5079 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5081 "query.c"
  }
#line 5083 "query.c"
}

#line 5086 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 5089 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5091 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5093 "query.c"
{
#line 5095 "query.c"
  {
#line 5097 "query.c"
    MR_bool query__succeeded;

#line 5100 "query.c"
    {
#line 5102 "query.c"
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5105 "query.c"
    return query__succeeded;
#line 5107 "query.c"
  }
#line 5109 "query.c"
}

#line 5112 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 5115 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5117 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5119 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5121 "query.c"
{
#line 5123 "query.c"
  {
#line 5125 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5128 "query.c"
    {
#line 5130 "query.c"
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5133 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5135 "query.c"
  }
#line 5137 "query.c"
}

#line 5140 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 5143 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5145 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5147 "query.c"
{
#line 5149 "query.c"
  {
#line 5151 "query.c"
    MR_bool query__succeeded;

#line 5154 "query.c"
    {
#line 5156 "query.c"
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5159 "query.c"
    return query__succeeded;
#line 5161 "query.c"
  }
#line 5163 "query.c"
}

#line 5166 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 5169 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5171 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5173 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5175 "query.c"
{
#line 5177 "query.c"
  {
#line 5179 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5182 "query.c"
    {
#line 5184 "query.c"
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5187 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5189 "query.c"
  }
#line 5191 "query.c"
}

#line 5194 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 5197 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5199 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5201 "query.c"
{
#line 5203 "query.c"
  {
#line 5205 "query.c"
    MR_bool query__succeeded;

#line 5208 "query.c"
    {
#line 5210 "query.c"
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5213 "query.c"
    return query__succeeded;
#line 5215 "query.c"
  }
#line 5217 "query.c"
}

#line 5220 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 5223 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5225 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5227 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5229 "query.c"
{
#line 5231 "query.c"
  {
#line 5233 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5236 "query.c"
    {
#line 5238 "query.c"
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5241 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5243 "query.c"
  }
#line 5245 "query.c"
}

#line 5248 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 5251 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5253 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5255 "query.c"
{
#line 5257 "query.c"
  {
#line 5259 "query.c"
    MR_bool query__succeeded;

#line 5262 "query.c"
    {
#line 5264 "query.c"
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5267 "query.c"
    return query__succeeded;
#line 5269 "query.c"
  }
#line 5271 "query.c"
}

#line 5274 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 5277 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5279 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5281 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5283 "query.c"
{
#line 5285 "query.c"
  {
#line 5287 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5290 "query.c"
    {
#line 5292 "query.c"
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5295 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5297 "query.c"
  }
#line 5299 "query.c"
}

#line 5302 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 5305 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5307 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5309 "query.c"
{
#line 5311 "query.c"
  {
#line 5313 "query.c"
    MR_bool query__succeeded;

#line 5316 "query.c"
    {
#line 5318 "query.c"
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5321 "query.c"
    return query__succeeded;
#line 5323 "query.c"
  }
#line 5325 "query.c"
}

#line 5328 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 5331 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5333 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5335 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5337 "query.c"
{
#line 5339 "query.c"
  {
#line 5341 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5344 "query.c"
    {
#line 5346 "query.c"
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5349 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5351 "query.c"
  }
#line 5353 "query.c"
}

#line 5356 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 5359 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5361 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5363 "query.c"
{
#line 5365 "query.c"
  {
#line 5367 "query.c"
    MR_bool query__succeeded;

#line 5370 "query.c"
    {
#line 5372 "query.c"
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5375 "query.c"
    return query__succeeded;
#line 5377 "query.c"
  }
#line 5379 "query.c"
}

#line 5382 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 5385 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5387 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5389 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5391 "query.c"
{
#line 5393 "query.c"
  {
#line 5395 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5398 "query.c"
    {
#line 5400 "query.c"
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5403 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5405 "query.c"
  }
#line 5407 "query.c"
}

#line 5410 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 5413 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5415 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5417 "query.c"
{
#line 5419 "query.c"
  {
#line 5421 "query.c"
    MR_bool query__succeeded;

#line 5424 "query.c"
    {
#line 5426 "query.c"
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5429 "query.c"
    return query__succeeded;
#line 5431 "query.c"
  }
#line 5433 "query.c"
}

#line 5436 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 5439 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5441 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5443 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5445 "query.c"
{
#line 5447 "query.c"
  {
#line 5449 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5452 "query.c"
    {
#line 5454 "query.c"
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5457 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5459 "query.c"
  }
#line 5461 "query.c"
}

#line 5464 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 5467 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5469 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5471 "query.c"
{
#line 5473 "query.c"
  {
#line 5475 "query.c"
    MR_bool query__succeeded;

#line 5478 "query.c"
    {
#line 5480 "query.c"
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5483 "query.c"
    return query__succeeded;
#line 5485 "query.c"
  }
#line 5487 "query.c"
}

#line 5490 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 5493 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5495 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5497 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5499 "query.c"
{
#line 5501 "query.c"
  {
#line 5503 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5506 "query.c"
    {
#line 5508 "query.c"
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5511 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5513 "query.c"
  }
#line 5515 "query.c"
}

#line 5518 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 5521 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5523 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5525 "query.c"
{
#line 5527 "query.c"
  {
#line 5529 "query.c"
    MR_bool query__succeeded;

#line 5532 "query.c"
    {
#line 5534 "query.c"
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5537 "query.c"
    return query__succeeded;
#line 5539 "query.c"
  }
#line 5541 "query.c"
}

#line 5544 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 5547 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5549 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5551 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5553 "query.c"
{
#line 5555 "query.c"
  {
#line 5557 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5560 "query.c"
    {
#line 5562 "query.c"
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5565 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5567 "query.c"
  }
#line 5569 "query.c"
}

#line 5572 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 5575 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5577 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5579 "query.c"
{
#line 5581 "query.c"
  {
#line 5583 "query.c"
    MR_bool query__succeeded;

#line 5586 "query.c"
    {
#line 5588 "query.c"
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5591 "query.c"
    return query__succeeded;
#line 5593 "query.c"
  }
#line 5595 "query.c"
}

#line 5598 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 5601 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5603 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5605 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5607 "query.c"
{
#line 5609 "query.c"
  {
#line 5611 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5614 "query.c"
    {
#line 5616 "query.c"
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5619 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5621 "query.c"
  }
#line 5623 "query.c"
}

#line 5626 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 5629 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5631 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5633 "query.c"
{
#line 5635 "query.c"
  {
#line 5637 "query.c"
    MR_bool query__succeeded;

#line 5640 "query.c"
    {
#line 5642 "query.c"
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5645 "query.c"
    return query__succeeded;
#line 5647 "query.c"
  }
#line 5649 "query.c"
}

#line 5652 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 5655 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5657 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5659 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5661 "query.c"
{
#line 5663 "query.c"
  {
#line 5665 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5668 "query.c"
    {
#line 5670 "query.c"
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5673 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5675 "query.c"
  }
#line 5677 "query.c"
}

#line 5680 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 5683 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5685 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5687 "query.c"
{
#line 5689 "query.c"
  {
#line 5691 "query.c"
    MR_bool query__succeeded;

#line 5694 "query.c"
    {
#line 5696 "query.c"
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5699 "query.c"
    return query__succeeded;
#line 5701 "query.c"
  }
#line 5703 "query.c"
}

#line 5706 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 5709 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5711 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5713 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5715 "query.c"
{
#line 5717 "query.c"
  {
#line 5719 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5722 "query.c"
    {
#line 5724 "query.c"
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5727 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5729 "query.c"
  }
#line 5731 "query.c"
}

#line 5734 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 5737 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5739 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5741 "query.c"
{
#line 5743 "query.c"
  {
#line 5745 "query.c"
    MR_bool query__succeeded;

#line 5748 "query.c"
    {
#line 5750 "query.c"
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5753 "query.c"
    return query__succeeded;
#line 5755 "query.c"
  }
#line 5757 "query.c"
}

#line 5760 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 5763 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5765 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5767 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5769 "query.c"
{
#line 5771 "query.c"
  {
#line 5773 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5776 "query.c"
    {
#line 5778 "query.c"
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5781 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5783 "query.c"
  }
#line 5785 "query.c"
}

#line 5788 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 5791 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5793 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5795 "query.c"
{
#line 5797 "query.c"
  {
#line 5799 "query.c"
    MR_bool query__succeeded;

#line 5802 "query.c"
    {
#line 5804 "query.c"
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5807 "query.c"
    return query__succeeded;
#line 5809 "query.c"
  }
#line 5811 "query.c"
}

#line 5814 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 5817 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5819 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5821 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5823 "query.c"
{
#line 5825 "query.c"
  {
#line 5827 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5830 "query.c"
    {
#line 5832 "query.c"
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5835 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5837 "query.c"
  }
#line 5839 "query.c"
}

#line 5842 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 5845 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5847 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5849 "query.c"
{
#line 5851 "query.c"
  {
#line 5853 "query.c"
    MR_bool query__succeeded;

#line 5856 "query.c"
    {
#line 5858 "query.c"
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5861 "query.c"
    return query__succeeded;
#line 5863 "query.c"
  }
#line 5865 "query.c"
}

#line 5868 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 5871 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5873 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5875 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5877 "query.c"
{
#line 5879 "query.c"
  {
#line 5881 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5884 "query.c"
    {
#line 5886 "query.c"
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5889 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5891 "query.c"
  }
#line 5893 "query.c"
}

#line 437 "query.m"
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

#line 437 "query.m"
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

#line 437 "query.m"
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

#line 437 "query.m"
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

#line 437 "query.m"
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

#line 437 "query.m"
static /* sealed */ MR_ProcTableInfo query__table_info_for_create_and_memoize_report_3_p_0 = {
  mercury__private_builtin__MR_TABLE_TYPE_MEMO,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  NULL,
  NULL,
  {
    (MR_Integer) 0
  },
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

#line 309 "query.m"
void MR_CALL 
query____Compare____time_format_0_0(
#line 309 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 309 "query.m"
  MR_Word query__HeadVar__2_2,
#line 309 "query.m"
  MR_Word query__HeadVar__3_3)
#line 309 "query.m"
{
#line 309 "query.m"
  {
#line 309 "query.m"
    MR_bool query__succeeded;
#line 309 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 309 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 309 "query.m"
    {
#line 309 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 309 "query.m"
      return;
    }
#line 309 "query.m"
  }
#line 309 "query.m"
}

#line 309 "query.m"
MR_bool MR_CALL 
query____Unify____time_format_0_0(
#line 309 "query.m"
  MR_Word query__HeadVar__2_1,
#line 309 "query.m"
  MR_Word query__HeadVar__2_2)
#line 309 "query.m"
{
#line 6190 "query.c"
  {
#line 6192 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6195 "query.c"
    return query__succeeded;
#line 6197 "query.c"
  }
#line 309 "query.m"
}

#line 248 "query.m"
void MR_CALL 
query____Compare____time_fields_0_0(
#line 248 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 248 "query.m"
  MR_Word query__HeadVar__2_2,
#line 248 "query.m"
  MR_Word query__HeadVar__3_3)
#line 248 "query.m"
{
#line 248 "query.m"
  {
#line 248 "query.m"
    MR_bool query__succeeded;
#line 248 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 248 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 248 "query.m"
    {
#line 248 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 248 "query.m"
      return;
    }
#line 248 "query.m"
  }
#line 248 "query.m"
}

#line 248 "query.m"
MR_bool MR_CALL 
query____Unify____time_fields_0_0(
#line 248 "query.m"
  MR_Word query__HeadVar__2_1,
#line 248 "query.m"
  MR_Word query__HeadVar__2_2)
#line 248 "query.m"
{
#line 6243 "query.c"
  {
#line 6245 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6248 "query.c"
    return query__succeeded;
#line 6250 "query.c"
  }
#line 248 "query.m"
}

#line 288 "query.m"
void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0(
#line 288 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 288 "query.m"
  MR_Word query__HeadVar__2_2,
#line 288 "query.m"
  MR_Word query__HeadVar__3_3)
#line 288 "query.m"
{
#line 288 "query.m"
  {
#line 288 "query.m"
    MR_bool query__succeeded;
#line 288 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 288 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 288 "query.m"
    {
#line 288 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 288 "query.m"
      return;
    }
#line 288 "query.m"
  }
#line 288 "query.m"
}

#line 288 "query.m"
MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0(
#line 288 "query.m"
  MR_Word query__HeadVar__2_1,
#line 288 "query.m"
  MR_Word query__HeadVar__2_2)
#line 288 "query.m"
{
#line 6296 "query.c"
  {
#line 6298 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6301 "query.c"
    return query__succeeded;
#line 6303 "query.c"
  }
#line 288 "query.m"
}

#line 72 "query.m"
void MR_CALL 
query____Compare____resp_0_0(
#line 72 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 72 "query.m"
  MR_Word query__HeadVar__2_2,
#line 72 "query.m"
  MR_Word query__HeadVar__3_3)
#line 72 "query.m"
{
#line 72 "query.m"
  {
#line 72 "query.m"
    MR_bool query__succeeded;
#line 72 "query.m"
    MR_Integer query__CastX_6 = (MR_Integer) query__HeadVar__2_2;
#line 72 "query.m"
    MR_Integer query__CastY_7 = (MR_Integer) query__HeadVar__3_3;

#line 72 "query.m"
    query__succeeded = (query__CastX_6 == query__CastY_7);
#line 72 "query.m"
    if (query__succeeded)
#line 6332 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "query.m"
    else
#line 72 "query.m"
      {
#line 72 "query.m"
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;
#line 72 "query.m"
        MR_String query__V_5_5 = (MR_String) query__HeadVar__3_3;

#line 72 "query.m"
        {
#line 72 "query.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(query__HeadVar__1_1, query__V_4_4, query__V_5_5);
#line 72 "query.m"
          return;
        }
#line 72 "query.m"
      }
#line 72 "query.m"
  }
#line 72 "query.m"
}

#line 72 "query.m"
MR_bool MR_CALL 
query____Unify____resp_0_0(
#line 72 "query.m"
  MR_Word query__HeadVar__1_1,
#line 72 "query.m"
  MR_Word query__HeadVar__2_2)
#line 72 "query.m"
{
#line 72 "query.m"
  {
#line 72 "query.m"
    MR_bool query__succeeded;
#line 72 "query.m"
    MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 72 "query.m"
    MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 72 "query.m"
    query__succeeded = (query__CastX_5 == query__CastY_6);
#line 72 "query.m"
    if (query__succeeded)
#line 72 "query.m"
      query__succeeded = MR_TRUE;
#line 72 "query.m"
    else
#line 72 "query.m"
      {
#line 72 "query.m"
        MR_String query__V_3_3 = (MR_String) query__HeadVar__1_1;
#line 72 "query.m"
        MR_String query__V_4_4 = (MR_String) query__HeadVar__2_2;

#line 6390 "query.c"
        query__succeeded = (strcmp(query__V_3_3, query__V_4_4) == 0);
#line 72 "query.m"
      }
#line 72 "query.m"
    return query__succeeded;
#line 72 "query.m"
  }
#line 72 "query.m"
}

#line 239 "query.m"
void MR_CALL 
query____Compare____preferences_indication_0_0(
#line 239 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 239 "query.m"
  MR_Word query__HeadVar__2_2,
#line 239 "query.m"
  MR_Word query__HeadVar__3_3)
#line 239 "query.m"
{
#line 239 "query.m"
  {
#line 239 "query.m"
    MR_bool query__succeeded;
#line 239 "query.m"
    MR_Integer query__CastX_10 = (MR_Integer) query__HeadVar__2_2;
#line 239 "query.m"
    MR_Integer query__CastY_11 = (MR_Integer) query__HeadVar__3_3;

#line 239 "query.m"
    query__succeeded = (query__CastX_10 == query__CastY_11);
#line 239 "query.m"
    if (query__succeeded)
#line 6425 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "query.m"
    else
#line 239 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 239 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 239 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "query.m"
        else
#line 239 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "query.m"
          else
#line 6443 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "query.m"
      else
#line 239 "query.m"
        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 239 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "query.m"
          else
#line 239 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "query.m"
              *query__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "query.m"
            else
#line 6461 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "query.m"
        else
#line 239 "query.m"
          {
#line 239 "query.m"
            MR_Word query__V_13_13 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);

#line 239 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6472 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "query.m"
            else
#line 239 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6478 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "query.m"
              else
#line 239 "query.m"
                {
#line 239 "query.m"
                  MR_Word query__V_5_5 = (MR_Word) MR_body(((MR_Word) query__HeadVar__3_3), (MR_Integer) 1);

#line 239 "query.m"
                  {
#line 239 "query.m"
                    query____Compare____preferences_0_0(query__HeadVar__1_1, query__V_13_13, query__V_5_5);
#line 239 "query.m"
                    return;
                  }
#line 239 "query.m"
                }
#line 239 "query.m"
          }
#line 239 "query.m"
  }
#line 239 "query.m"
}

#line 239 "query.m"
MR_bool MR_CALL 
query____Unify____preferences_indication_0_0(
#line 239 "query.m"
  MR_Word query__HeadVar__1_1,
#line 239 "query.m"
  MR_Word query__HeadVar__2_2)
#line 239 "query.m"
{
#line 239 "query.m"
  {
#line 239 "query.m"
    MR_bool query__succeeded;
#line 239 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 239 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 239 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 239 "query.m"
    if (query__succeeded)
#line 239 "query.m"
      query__succeeded = MR_TRUE;
#line 239 "query.m"
    else
#line 239 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 239 "query.m"
        {
#line 239 "query.m"
          MR_Integer query__CastX_7 = (MR_Integer) query__HeadVar__1_1;
#line 239 "query.m"
          MR_Integer query__CastY_8 = (MR_Integer) query__HeadVar__2_2;

#line 239 "query.m"
          query__succeeded = (query__CastY_8 == query__CastX_7);
#line 239 "query.m"
        }
#line 239 "query.m"
      else
#line 239 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 239 "query.m"
          {
#line 239 "query.m"
            MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 239 "query.m"
            MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 239 "query.m"
            query__succeeded = (query__CastY_6 == query__CastX_5);
#line 239 "query.m"
          }
#line 239 "query.m"
        else
#line 239 "query.m"
          {
#line 239 "query.m"
            MR_Word query__V_3_3 = (MR_Word) MR_body(((MR_Word) query__HeadVar__1_1), (MR_Integer) 1);
#line 239 "query.m"
            MR_Word query__V_4_4;

#line 239 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 239 "query.m"
            if (query__succeeded)
#line 239 "query.m"
              {
#line 239 "query.m"
                query__V_4_4 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);
#line 6574 "query.c"
                {
#line 6576 "query.c"
                  return query__succeeded = query____Unify____preferences_0_0(query__V_3_3, query__V_4_4);
                }
#line 239 "query.m"
              }
#line 239 "query.m"
          }
#line 239 "query.m"
    return query__succeeded;
#line 239 "query.m"
  }
#line 239 "query.m"
}

#line 191 "query.m"
void MR_CALL 
query____Compare____preferences_0_0(
#line 191 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 191 "query.m"
  MR_Word query__HeadVar__2_2,
#line 191 "query.m"
  MR_Word query__HeadVar__3_3)
#line 191 "query.m"
{
#line 191 "query.m"
  {
#line 191 "query.m"
    MR_bool query__succeeded;
#line 191 "query.m"
    MR_Integer query__CastX_39 = (MR_Integer) query__HeadVar__2_2;
#line 191 "query.m"
    MR_Integer query__CastY_40 = (MR_Integer) query__HeadVar__3_3;

#line 191 "query.m"
    query__succeeded = (query__CastX_39 == query__CastY_40);
#line 191 "query.m"
    if (query__succeeded)
#line 6614 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 191 "query.m"
    else
#line 191 "query.m"
      {
#line 191 "query.m"
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 191 "query.m"
        MR_Word query__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 191 "query.m"
        MR_Integer query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
#line 191 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
#line 191 "query.m"
        MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
#line 191 "query.m"
        MR_Word query__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
#line 191 "query.m"
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));
#line 191 "query.m"
        MR_Word query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 191 "query.m"
        MR_Word query__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
#line 191 "query.m"
        MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 3)));
#line 191 "query.m"
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 4)));
#line 191 "query.m"
        MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 5)));
#line 191 "query.m"
        MR_Word query__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 7)));
#line 191 "query.m"
        MR_Word query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 8)));
#line 191 "query.m"
        MR_Word query__V_28_28;

#line 191 "query.m"
        {
#line 191 "query.m"
          query____Compare____fields_0_0(&query__V_28_28, query__V_4_4, query__V_16_16);
        }
#line 6676 "query.c"
        query__succeeded = (query__V_28_28 == (MR_Integer) 0);
#line 191 "query.m"
        query__succeeded = !(query__succeeded);
#line 191 "query.m"
        if (query__succeeded)
#line 191 "query.m"
          *query__HeadVar__1_1 = query__V_28_28;
#line 191 "query.m"
        else
#line 191 "query.m"
          {
#line 191 "query.m"
            MR_Word query__V_29_29;
#line 191 "query.m"
            MR_Integer query__V_53_53 = (MR_Integer) query__V_5_5;
#line 191 "query.m"
            MR_Integer query__V_54_54 = (MR_Integer) query__V_17_17;

#line 191 "query.m"
            {
#line 191 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_53_53, query__V_54_54);
            }
#line 6700 "query.c"
            query__succeeded = (query__V_29_29 == (MR_Integer) 0);
#line 191 "query.m"
            query__succeeded = !(query__succeeded);
#line 191 "query.m"
            if (query__succeeded)
#line 191 "query.m"
              *query__HeadVar__1_1 = query__V_29_29;
#line 191 "query.m"
            else
#line 191 "query.m"
              {
#line 191 "query.m"
                MR_Word query__V_30_30;
#line 191 "query.m"
                MR_Integer query__V_55_55 = (MR_Integer) query__V_6_6;
#line 191 "query.m"
                MR_Integer query__V_56_56 = (MR_Integer) query__V_18_18;

#line 191 "query.m"
                {
#line 191 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_55_55, query__V_56_56);
                }
#line 6724 "query.c"
                query__succeeded = (query__V_30_30 == (MR_Integer) 0);
#line 191 "query.m"
                query__succeeded = !(query__succeeded);
#line 191 "query.m"
                if (query__succeeded)
#line 191 "query.m"
                  *query__HeadVar__1_1 = query__V_30_30;
#line 191 "query.m"
                else
#line 191 "query.m"
                  {
#line 191 "query.m"
                    MR_Word query__V_31_31;

#line 191 "query.m"
                    {
#line 191 "query.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[0], &query__V_31_31, ((MR_Box) (query__V_7_7)), ((MR_Box) (query__V_19_19)));
                    }
#line 6744 "query.c"
                    query__succeeded = (query__V_31_31 == (MR_Integer) 0);
#line 191 "query.m"
                    query__succeeded = !(query__succeeded);
#line 191 "query.m"
                    if (query__succeeded)
#line 191 "query.m"
                      *query__HeadVar__1_1 = query__V_31_31;
#line 191 "query.m"
                    else
#line 191 "query.m"
                      {
#line 191 "query.m"
                        MR_Word query__V_32_32;

#line 191 "query.m"
                        {
#line 191 "query.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_32_32, query__V_8_8, query__V_20_20);
                        }
#line 6764 "query.c"
                        query__succeeded = (query__V_32_32 == (MR_Integer) 0);
#line 191 "query.m"
                        query__succeeded = !(query__succeeded);
#line 191 "query.m"
                        if (query__succeeded)
#line 191 "query.m"
                          *query__HeadVar__1_1 = query__V_32_32;
#line 191 "query.m"
                        else
#line 191 "query.m"
                          {
#line 191 "query.m"
                            MR_Word query__V_33_33;
#line 191 "query.m"
                            MR_Integer query__V_57_57 = (MR_Integer) query__V_9_9;
#line 191 "query.m"
                            MR_Integer query__V_58_58 = (MR_Integer) query__V_21_21;

#line 191 "query.m"
                            {
#line 191 "query.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_33_33, query__V_57_57, query__V_58_58);
                            }
#line 6788 "query.c"
                            query__succeeded = (query__V_33_33 == (MR_Integer) 0);
#line 191 "query.m"
                            query__succeeded = !(query__succeeded);
#line 191 "query.m"
                            if (query__succeeded)
#line 191 "query.m"
                              *query__HeadVar__1_1 = query__V_33_33;
#line 191 "query.m"
                            else
#line 191 "query.m"
                              {
#line 191 "query.m"
                                MR_Word query__V_34_34;

#line 191 "query.m"
                                {
#line 191 "query.m"
                                  query____Compare____order_criteria_0_0(&query__V_34_34, query__V_10_10, query__V_22_22);
                                }
#line 6808 "query.c"
                                query__succeeded = (query__V_34_34 == (MR_Integer) 0);
#line 191 "query.m"
                                query__succeeded = !(query__succeeded);
#line 191 "query.m"
                                if (query__succeeded)
#line 191 "query.m"
                                  *query__HeadVar__1_1 = query__V_34_34;
#line 191 "query.m"
                                else
#line 191 "query.m"
                                  {
#line 191 "query.m"
                                    MR_Word query__V_35_35;
#line 191 "query.m"
                                    MR_Integer query__V_59_59 = (MR_Integer) query__V_11_11;
#line 191 "query.m"
                                    MR_Integer query__V_60_60 = (MR_Integer) query__V_23_23;

#line 191 "query.m"
                                    {
#line 191 "query.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_35_35, query__V_59_59, query__V_60_60);
                                    }
#line 6832 "query.c"
                                    query__succeeded = (query__V_35_35 == (MR_Integer) 0);
#line 191 "query.m"
                                    query__succeeded = !(query__succeeded);
#line 191 "query.m"
                                    if (query__succeeded)
#line 191 "query.m"
                                      *query__HeadVar__1_1 = query__V_35_35;
#line 191 "query.m"
                                    else
#line 191 "query.m"
                                      {
#line 191 "query.m"
                                        MR_Word query__V_36_36;
#line 191 "query.m"
                                        MR_Integer query__V_61_61 = (MR_Integer) query__V_12_12;
#line 191 "query.m"
                                        MR_Integer query__V_62_62 = (MR_Integer) query__V_24_24;

#line 191 "query.m"
                                        {
#line 191 "query.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_36_36, query__V_61_61, query__V_62_62);
                                        }
#line 6856 "query.c"
                                        query__succeeded = (query__V_36_36 == (MR_Integer) 0);
#line 191 "query.m"
                                        query__succeeded = !(query__succeeded);
#line 191 "query.m"
                                        if (query__succeeded)
#line 191 "query.m"
                                          *query__HeadVar__1_1 = query__V_36_36;
#line 191 "query.m"
                                        else
#line 191 "query.m"
                                          {
#line 191 "query.m"
                                            MR_Word query__V_37_37;
#line 191 "query.m"
                                            MR_Integer query__V_63_63 = (MR_Integer) query__V_13_13;
#line 191 "query.m"
                                            MR_Integer query__V_64_64 = (MR_Integer) query__V_25_25;

#line 191 "query.m"
                                            {
#line 191 "query.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_37_37, query__V_63_63, query__V_64_64);
                                            }
#line 6880 "query.c"
                                            query__succeeded = (query__V_37_37 == (MR_Integer) 0);
#line 191 "query.m"
                                            query__succeeded = !(query__succeeded);
#line 191 "query.m"
                                            if (query__succeeded)
#line 191 "query.m"
                                              *query__HeadVar__1_1 = query__V_37_37;
#line 191 "query.m"
                                            else
#line 191 "query.m"
                                              {
#line 191 "query.m"
                                                MR_Word query__V_38_38;

#line 191 "query.m"
                                                {
#line 191 "query.m"
                                                  query____Compare____inactive_items_0_0(&query__V_38_38, query__V_14_14, query__V_26_26);
                                                }
#line 6900 "query.c"
                                                query__succeeded = (query__V_38_38 == (MR_Integer) 0);
#line 191 "query.m"
                                                query__succeeded = !(query__succeeded);
#line 191 "query.m"
                                                if (query__succeeded)
#line 191 "query.m"
                                                  *query__HeadVar__1_1 = query__V_38_38;
#line 191 "query.m"
                                                else
#line 191 "query.m"
                                                  {
#line 191 "query.m"
                                                    MR_Integer query__V_65_65 = (MR_Integer) query__V_15_15;
#line 191 "query.m"
                                                    MR_Integer query__V_66_66 = (MR_Integer) query__V_27_27;

#line 191 "query.m"
                                                    {
#line 191 "query.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_65_65, query__V_66_66);
#line 191 "query.m"
                                                      return;
                                                    }
#line 191 "query.m"
                                                  }
#line 191 "query.m"
                                              }
#line 191 "query.m"
                                          }
#line 191 "query.m"
                                      }
#line 191 "query.m"
                                  }
#line 191 "query.m"
                              }
#line 191 "query.m"
                          }
#line 191 "query.m"
                      }
#line 191 "query.m"
                  }
#line 191 "query.m"
              }
#line 191 "query.m"
          }
#line 191 "query.m"
      }
#line 191 "query.m"
  }
#line 191 "query.m"
}

#line 191 "query.m"
MR_bool MR_CALL 
query____Unify____preferences_0_0(
#line 191 "query.m"
  MR_Word query__HeadVar__1_1,
#line 191 "query.m"
  MR_Word query__HeadVar__2_2)
#line 191 "query.m"
{
#line 191 "query.m"
  {
#line 191 "query.m"
    MR_bool query__succeeded;
#line 191 "query.m"
    MR_Integer query__CastX_27 = (MR_Integer) query__HeadVar__1_1;
#line 191 "query.m"
    MR_Integer query__CastY_28 = (MR_Integer) query__HeadVar__2_2;

#line 191 "query.m"
    query__succeeded = (query__CastX_27 == query__CastY_28);
#line 191 "query.m"
    if (query__succeeded)
#line 191 "query.m"
      query__succeeded = MR_TRUE;
#line 191 "query.m"
    else
#line 191 "query.m"
      {
#line 191 "query.m"
        MR_Word query__TypeInfo_29_29;
#line 191 "query.m"
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 191 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
#line 191 "query.m"
        MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 3)));
#line 191 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 4)));
#line 191 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 5)));
#line 191 "query.m"
        MR_Word query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 7)));
#line 191 "query.m"
        MR_Word query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 8)));
#line 191 "query.m"
        MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 191 "query.m"
        MR_Word query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 191 "query.m"
        MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 3)));
#line 191 "query.m"
        MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 4)));
#line 191 "query.m"
        MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 5)));
#line 191 "query.m"
        MR_Word query__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 191 "query.m"
        MR_Word query__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 191 "query.m"
        MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 7)));
#line 191 "query.m"
        MR_Word query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 8)));

#line 7032 "query.c"
        {
#line 7034 "query.c"
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
#line 191 "query.m"
        if (query__succeeded)
#line 191 "query.m"
          {
#line 7041 "query.c"
            query__succeeded = (query__V_4_4 == query__V_16_16);
#line 191 "query.m"
            if (query__succeeded)
#line 191 "query.m"
              {
#line 7047 "query.c"
                query__succeeded = (query__V_5_5 == query__V_17_17);
#line 191 "query.m"
                if (query__succeeded)
#line 191 "query.m"
                  {
#line 7053 "query.c"
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
#line 7055 "query.c"
                    {
#line 7057 "query.c"
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
#line 191 "query.m"
                    if (query__succeeded)
#line 191 "query.m"
                      {
#line 7064 "query.c"
                        query__succeeded = (query__V_7_7 == query__V_19_19);
#line 191 "query.m"
                        if (query__succeeded)
#line 191 "query.m"
                          {
#line 7070 "query.c"
                            query__succeeded = (query__V_8_8 == query__V_20_20);
#line 191 "query.m"
                            if (query__succeeded)
#line 191 "query.m"
                              {
#line 7076 "query.c"
                                {
#line 7078 "query.c"
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
#line 191 "query.m"
                                if (query__succeeded)
#line 191 "query.m"
                                  {
#line 7085 "query.c"
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
#line 191 "query.m"
                                    if (query__succeeded)
#line 191 "query.m"
                                      {
#line 7091 "query.c"
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
#line 191 "query.m"
                                        if (query__succeeded)
#line 191 "query.m"
                                          {
#line 7097 "query.c"
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
#line 191 "query.m"
                                            if (query__succeeded)
#line 191 "query.m"
                                              {
#line 7103 "query.c"
                                                {
#line 7105 "query.c"
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
#line 191 "query.m"
                                                if (query__succeeded)
#line 7110 "query.c"
                                                  query__succeeded = (query__V_14_14 == query__V_26_26);
#line 191 "query.m"
                                              }
#line 191 "query.m"
                                          }
#line 191 "query.m"
                                      }
#line 191 "query.m"
                                  }
#line 191 "query.m"
                              }
#line 191 "query.m"
                          }
#line 191 "query.m"
                      }
#line 191 "query.m"
                  }
#line 191 "query.m"
              }
#line 191 "query.m"
          }
#line 191 "query.m"
      }
#line 191 "query.m"
    return query__succeeded;
#line 191 "query.m"
  }
#line 191 "query.m"
}

#line 244 "query.m"
void MR_CALL 
query____Compare____port_fields_0_0(
#line 244 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 244 "query.m"
  MR_Word query__HeadVar__2_2,
#line 244 "query.m"
  MR_Word query__HeadVar__3_3)
#line 244 "query.m"
{
#line 244 "query.m"
  {
#line 244 "query.m"
    MR_bool query__succeeded;
#line 244 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 244 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 244 "query.m"
    {
#line 244 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 244 "query.m"
      return;
    }
#line 244 "query.m"
  }
#line 244 "query.m"
}

#line 244 "query.m"
MR_bool MR_CALL 
query____Unify____port_fields_0_0(
#line 244 "query.m"
  MR_Word query__HeadVar__2_1,
#line 244 "query.m"
  MR_Word query__HeadVar__2_2)
#line 244 "query.m"
{
#line 7182 "query.c"
  {
#line 7184 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7187 "query.c"
    return query__succeeded;
#line 7189 "query.c"
  }
#line 244 "query.m"
}

#line 292 "query.m"
void MR_CALL 
query____Compare____order_criteria_0_0(
#line 292 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 292 "query.m"
  MR_Word query__HeadVar__2_2,
#line 292 "query.m"
  MR_Word query__HeadVar__3_3)
#line 292 "query.m"
{
#line 292 "query.m"
  {
#line 292 "query.m"
    MR_bool query__succeeded;
#line 292 "query.m"
    MR_Integer query__CastX_24 = (MR_Integer) query__HeadVar__2_2;
#line 292 "query.m"
    MR_Integer query__CastY_25 = (MR_Integer) query__HeadVar__3_3;

#line 292 "query.m"
    query__succeeded = (query__CastX_24 == query__CastY_25);
#line 292 "query.m"
    if (query__succeeded)
#line 7218 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "query.m"
    else
#line 292 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "query.m"
        else
#line 292 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "query.m"
          else
#line 7236 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "query.m"
      else
#line 292 "query.m"
        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "query.m"
          else
#line 292 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "query.m"
              *query__HeadVar__1_1 = (MR_Integer) 0;
#line 292 "query.m"
            else
#line 7254 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 292 "query.m"
        else
#line 292 "query.m"
          {
#line 292 "query.m"
            MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 292 "query.m"
            MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 292 "query.m"
            MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);

#line 292 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7269 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "query.m"
            else
#line 292 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7275 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "query.m"
              else
#line 292 "query.m"
                {
#line 292 "query.m"
                  MR_Word query__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 292 "query.m"
                  MR_Word query__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 292 "query.m"
                  MR_Word query__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 292 "query.m"
                  MR_Word query__V_22_22;
#line 292 "query.m"
                  MR_Integer query__V_32_32 = (MR_Integer) query__V_31_31;
#line 292 "query.m"
                  MR_Integer query__V_33_33 = (MR_Integer) query__V_19_19;

#line 292 "query.m"
                  {
#line 292 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_22_22, query__V_32_32, query__V_33_33);
                  }
#line 7299 "query.c"
                  query__succeeded = (query__V_22_22 == (MR_Integer) 0);
#line 292 "query.m"
                  query__succeeded = !(query__succeeded);
#line 292 "query.m"
                  if (query__succeeded)
#line 292 "query.m"
                    *query__HeadVar__1_1 = query__V_22_22;
#line 292 "query.m"
                  else
#line 292 "query.m"
                    {
#line 292 "query.m"
                      MR_Word query__V_23_23;
#line 292 "query.m"
                      MR_Integer query__V_34_34 = (MR_Integer) query__V_30_30;
#line 292 "query.m"
                      MR_Integer query__V_35_35 = (MR_Integer) query__V_20_20;

#line 292 "query.m"
                      {
#line 292 "query.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_23_23, query__V_34_34, query__V_35_35);
                      }
#line 7323 "query.c"
                      query__succeeded = (query__V_23_23 == (MR_Integer) 0);
#line 292 "query.m"
                      query__succeeded = !(query__succeeded);
#line 292 "query.m"
                      if (query__succeeded)
#line 292 "query.m"
                        *query__HeadVar__1_1 = query__V_23_23;
#line 292 "query.m"
                      else
#line 292 "query.m"
                        {
#line 292 "query.m"
                          MR_Integer query__V_36_36 = (MR_Integer) query__V_29_29;
#line 292 "query.m"
                          MR_Integer query__V_37_37 = (MR_Integer) query__V_21_21;

#line 292 "query.m"
                          {
#line 292 "query.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_36_36, query__V_37_37);
#line 292 "query.m"
                            return;
                          }
#line 292 "query.m"
                        }
#line 292 "query.m"
                    }
#line 292 "query.m"
                }
#line 292 "query.m"
          }
#line 292 "query.m"
  }
#line 292 "query.m"
}

#line 292 "query.m"
MR_bool MR_CALL 
query____Unify____order_criteria_0_0(
#line 292 "query.m"
  MR_Word query__HeadVar__1_1,
#line 292 "query.m"
  MR_Word query__HeadVar__2_2)
#line 292 "query.m"
{
#line 292 "query.m"
  {
#line 292 "query.m"
    MR_bool query__succeeded;
#line 292 "query.m"
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
#line 292 "query.m"
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

#line 292 "query.m"
    query__succeeded = (query__CastX_13 == query__CastY_14);
#line 292 "query.m"
    if (query__succeeded)
#line 292 "query.m"
      query__succeeded = MR_TRUE;
#line 292 "query.m"
    else
#line 292 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "query.m"
        {
#line 292 "query.m"
          MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 292 "query.m"
          MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 292 "query.m"
          query__succeeded = (query__CastY_4 == query__CastX_3);
#line 292 "query.m"
        }
#line 292 "query.m"
      else
#line 292 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 292 "query.m"
          {
#line 292 "query.m"
            MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 292 "query.m"
            MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 292 "query.m"
            query__succeeded = (query__CastY_6 == query__CastX_5);
#line 292 "query.m"
          }
#line 292 "query.m"
        else
#line 292 "query.m"
          {
#line 292 "query.m"
            MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 292 "query.m"
            MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 292 "query.m"
            MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 292 "query.m"
            MR_Word query__V_10_10;
#line 292 "query.m"
            MR_Word query__V_11_11;
#line 292 "query.m"
            MR_Word query__V_12_12;

#line 292 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 292 "query.m"
            if (query__succeeded)
#line 292 "query.m"
              {
#line 292 "query.m"
                query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);
#line 292 "query.m"
                query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 292 "query.m"
                query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 7443 "query.c"
                query__succeeded = (query__V_7_7 == query__V_10_10);
#line 292 "query.m"
                if (query__succeeded)
#line 292 "query.m"
                  {
#line 7449 "query.c"
                    query__succeeded = (query__V_8_8 == query__V_11_11);
#line 292 "query.m"
                    if (query__succeeded)
#line 7453 "query.c"
                      query__succeeded = (query__V_9_9 == query__V_12_12);
#line 292 "query.m"
                  }
#line 292 "query.m"
              }
#line 292 "query.m"
          }
#line 292 "query.m"
    return query__succeeded;
#line 292 "query.m"
  }
#line 292 "query.m"
}

#line 314 "query.m"
void MR_CALL 
query____Compare____module_qual_0_0(
#line 314 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 314 "query.m"
  MR_Word query__HeadVar__2_2,
#line 314 "query.m"
  MR_Word query__HeadVar__3_3)
#line 314 "query.m"
{
#line 314 "query.m"
  {
#line 314 "query.m"
    MR_bool query__succeeded;
#line 314 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 314 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 314 "query.m"
    {
#line 314 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 314 "query.m"
      return;
    }
#line 314 "query.m"
  }
#line 314 "query.m"
}

#line 314 "query.m"
MR_bool MR_CALL 
query____Unify____module_qual_0_0(
#line 314 "query.m"
  MR_Word query__HeadVar__2_1,
#line 314 "query.m"
  MR_Word query__HeadVar__2_2)
#line 314 "query.m"
{
#line 7509 "query.c"
  {
#line 7511 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7514 "query.c"
    return query__succeeded;
#line 7516 "query.c"
  }
#line 314 "query.m"
}

#line 266 "query.m"
void MR_CALL 
query____Compare____memory_fields_0_0(
#line 266 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 266 "query.m"
  MR_Word query__HeadVar__2_2,
#line 266 "query.m"
  MR_Word query__HeadVar__3_3)
#line 266 "query.m"
{
#line 266 "query.m"
  {
#line 266 "query.m"
    MR_bool query__succeeded;
#line 266 "query.m"
    MR_Integer query__CastX_16 = (MR_Integer) query__HeadVar__2_2;
#line 266 "query.m"
    MR_Integer query__CastY_17 = (MR_Integer) query__HeadVar__3_3;

#line 266 "query.m"
    query__succeeded = (query__CastX_16 == query__CastY_17);
#line 266 "query.m"
    if (query__succeeded)
#line 7545 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "query.m"
    else
#line 266 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "query.m"
        else
#line 266 "query.m"
          if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7559 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "query.m"
          else
#line 7563 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "query.m"
      else
#line 266 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 266 "query.m"
          {
#line 266 "query.m"
            MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 266 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7576 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "query.m"
            else
#line 266 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 266 "query.m"
                {
#line 266 "query.m"
                  MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "query.m"
                  MR_Integer query__V_22_22 = (MR_Integer) query__V_20_20;
#line 266 "query.m"
                  MR_Integer query__V_23_23 = (MR_Integer) query__V_8_8;

#line 266 "query.m"
                  {
#line 266 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_22_22, query__V_23_23);
#line 266 "query.m"
                    return;
                  }
#line 266 "query.m"
                }
#line 266 "query.m"
              else
#line 7602 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "query.m"
          }
#line 266 "query.m"
        else
#line 266 "query.m"
          {
#line 266 "query.m"
            MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 266 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7615 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "query.m"
            else
#line 266 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7621 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "query.m"
              else
#line 266 "query.m"
                {
#line 266 "query.m"
                  MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "query.m"
                  MR_Integer query__V_24_24 = (MR_Integer) query__V_21_21;
#line 266 "query.m"
                  MR_Integer query__V_25_25 = (MR_Integer) query__V_15_15;

#line 266 "query.m"
                  {
#line 266 "query.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_24_24, query__V_25_25);
#line 266 "query.m"
                    return;
                  }
#line 266 "query.m"
                }
#line 266 "query.m"
          }
#line 266 "query.m"
  }
#line 266 "query.m"
}

#line 266 "query.m"
MR_bool MR_CALL 
query____Unify____memory_fields_0_0(
#line 266 "query.m"
  MR_Word query__HeadVar__1_1,
#line 266 "query.m"
  MR_Word query__HeadVar__2_2)
#line 266 "query.m"
{
#line 266 "query.m"
  {
#line 266 "query.m"
    MR_bool query__succeeded;
#line 266 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 266 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 266 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 266 "query.m"
    if (query__succeeded)
#line 266 "query.m"
      query__succeeded = MR_TRUE;
#line 266 "query.m"
    else
#line 266 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "query.m"
        {
#line 266 "query.m"
          MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 266 "query.m"
          MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 266 "query.m"
          query__succeeded = (query__CastY_4 == query__CastX_3);
#line 266 "query.m"
        }
#line 266 "query.m"
      else
#line 266 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 266 "query.m"
          {
#line 266 "query.m"
            MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "query.m"
            MR_Word query__V_6_6;

#line 266 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 266 "query.m"
            if (query__succeeded)
#line 266 "query.m"
              {
#line 266 "query.m"
                query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 7708 "query.c"
                query__succeeded = (query__V_5_5 == query__V_6_6);
#line 266 "query.m"
              }
#line 266 "query.m"
          }
#line 266 "query.m"
        else
#line 266 "query.m"
          {
#line 266 "query.m"
            MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "query.m"
            MR_Word query__V_8_8;

#line 266 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 266 "query.m"
            if (query__succeeded)
#line 266 "query.m"
              {
#line 266 "query.m"
                query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 7731 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 266 "query.m"
              }
#line 266 "query.m"
          }
#line 266 "query.m"
    return query__succeeded;
#line 266 "query.m"
  }
#line 266 "query.m"
}

#line 301 "query.m"
void MR_CALL 
query____Compare____measurement_scope_0_0(
#line 301 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 301 "query.m"
  MR_Word query__HeadVar__2_2,
#line 301 "query.m"
  MR_Word query__HeadVar__3_3)
#line 301 "query.m"
{
#line 301 "query.m"
  {
#line 301 "query.m"
    MR_bool query__succeeded;
#line 301 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 301 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 301 "query.m"
    {
#line 301 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 301 "query.m"
      return;
    }
#line 301 "query.m"
  }
#line 301 "query.m"
}

#line 301 "query.m"
MR_bool MR_CALL 
query____Unify____measurement_scope_0_0(
#line 301 "query.m"
  MR_Word query__HeadVar__2_1,
#line 301 "query.m"
  MR_Word query__HeadVar__2_2)
#line 301 "query.m"
{
#line 7785 "query.c"
  {
#line 7787 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7790 "query.c"
    return query__succeeded;
#line 7792 "query.c"
  }
#line 301 "query.m"
}

#line 170 "query.m"
void MR_CALL 
query____Compare____include_descendants_0_0(
#line 170 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 170 "query.m"
  MR_Word query__HeadVar__2_2,
#line 170 "query.m"
  MR_Word query__HeadVar__3_3)
#line 170 "query.m"
{
#line 170 "query.m"
  {
#line 170 "query.m"
    MR_bool query__succeeded;
#line 170 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 170 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 170 "query.m"
    {
#line 170 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 170 "query.m"
      return;
    }
#line 170 "query.m"
  }
#line 170 "query.m"
}

#line 170 "query.m"
MR_bool MR_CALL 
query____Unify____include_descendants_0_0(
#line 170 "query.m"
  MR_Word query__HeadVar__2_1,
#line 170 "query.m"
  MR_Word query__HeadVar__2_2)
#line 170 "query.m"
{
#line 7838 "query.c"
  {
#line 7840 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7843 "query.c"
    return query__succeeded;
#line 7845 "query.c"
  }
#line 170 "query.m"
}

#line 319 "query.m"
void MR_CALL 
query____Compare____inactive_status_0_0(
#line 319 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 319 "query.m"
  MR_Word query__HeadVar__2_2,
#line 319 "query.m"
  MR_Word query__HeadVar__3_3)
#line 319 "query.m"
{
#line 319 "query.m"
  {
#line 319 "query.m"
    MR_bool query__succeeded;
#line 319 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 319 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 319 "query.m"
    {
#line 319 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 319 "query.m"
      return;
    }
#line 319 "query.m"
  }
#line 319 "query.m"
}

#line 319 "query.m"
MR_bool MR_CALL 
query____Unify____inactive_status_0_0(
#line 319 "query.m"
  MR_Word query__HeadVar__2_1,
#line 319 "query.m"
  MR_Word query__HeadVar__2_2)
#line 319 "query.m"
{
#line 7891 "query.c"
  {
#line 7893 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7896 "query.c"
    return query__succeeded;
#line 7898 "query.c"
  }
#line 319 "query.m"
}

#line 323 "query.m"
void MR_CALL 
query____Compare____inactive_items_0_0(
#line 323 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 323 "query.m"
  MR_Word query__HeadVar__2_2,
#line 323 "query.m"
  MR_Word query__HeadVar__3_3)
#line 323 "query.m"
{
#line 323 "query.m"
  {
#line 323 "query.m"
    MR_bool query__succeeded;
#line 323 "query.m"
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
#line 323 "query.m"
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

#line 323 "query.m"
    query__succeeded = (query__CastX_12 == query__CastY_13);
#line 323 "query.m"
    if (query__succeeded)
#line 7927 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "query.m"
    else
#line 323 "query.m"
      {
#line 323 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_10_10;
#line 323 "query.m"
        MR_Integer query__V_17_17 = (MR_Integer) query__V_4_4;
#line 323 "query.m"
        MR_Integer query__V_18_18 = (MR_Integer) query__V_7_7;

#line 323 "query.m"
        {
#line 323 "query.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_10_10, query__V_17_17, query__V_18_18);
        }
#line 7957 "query.c"
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
#line 323 "query.m"
        query__succeeded = !(query__succeeded);
#line 323 "query.m"
        if (query__succeeded)
#line 323 "query.m"
          *query__HeadVar__1_1 = query__V_10_10;
#line 323 "query.m"
        else
#line 323 "query.m"
          {
#line 323 "query.m"
            MR_Word query__V_11_11;
#line 323 "query.m"
            MR_Integer query__V_19_19 = (MR_Integer) query__V_5_5;
#line 323 "query.m"
            MR_Integer query__V_20_20 = (MR_Integer) query__V_8_8;

#line 323 "query.m"
            {
#line 323 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_11_11, query__V_19_19, query__V_20_20);
            }
#line 7981 "query.c"
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
#line 323 "query.m"
            query__succeeded = !(query__succeeded);
#line 323 "query.m"
            if (query__succeeded)
#line 323 "query.m"
              *query__HeadVar__1_1 = query__V_11_11;
#line 323 "query.m"
            else
#line 323 "query.m"
              {
#line 323 "query.m"
                MR_Integer query__V_21_21 = (MR_Integer) query__V_6_6;
#line 323 "query.m"
                MR_Integer query__V_22_22 = (MR_Integer) query__V_9_9;

#line 323 "query.m"
                {
#line 323 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_21_21, query__V_22_22);
#line 323 "query.m"
                  return;
                }
#line 323 "query.m"
              }
#line 323 "query.m"
          }
#line 323 "query.m"
      }
#line 323 "query.m"
  }
#line 323 "query.m"
}

#line 323 "query.m"
MR_bool MR_CALL 
query____Unify____inactive_items_0_0(
#line 323 "query.m"
  MR_Word query__HeadVar__1_1,
#line 323 "query.m"
  MR_Word query__HeadVar__2_2)
#line 323 "query.m"
{
#line 323 "query.m"
  {
#line 323 "query.m"
    MR_bool query__succeeded;
#line 323 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 323 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 323 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 323 "query.m"
    if (query__succeeded)
#line 323 "query.m"
      query__succeeded = MR_TRUE;
#line 323 "query.m"
    else
#line 323 "query.m"
      {
#line 323 "query.m"
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 323 "query.m"
        MR_Word query__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 8057 "query.c"
        query__succeeded = (query__V_3_3 == query__V_6_6);
#line 323 "query.m"
        if (query__succeeded)
#line 323 "query.m"
          {
#line 8063 "query.c"
            query__succeeded = (query__V_4_4 == query__V_7_7);
#line 323 "query.m"
            if (query__succeeded)
#line 8067 "query.c"
              query__succeeded = (query__V_5_5 == query__V_8_8);
#line 323 "query.m"
          }
#line 323 "query.m"
      }
#line 323 "query.m"
    return query__succeeded;
#line 323 "query.m"
  }
#line 323 "query.m"
}

#line 271 "query.m"
void MR_CALL 
query____Compare____fields_0_0(
#line 271 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 271 "query.m"
  MR_Word query__HeadVar__2_2,
#line 271 "query.m"
  MR_Word query__HeadVar__3_3)
#line 271 "query.m"
{
#line 271 "query.m"
  {
#line 271 "query.m"
    MR_bool query__succeeded;
#line 271 "query.m"
    MR_Integer query__CastX_18 = (MR_Integer) query__HeadVar__2_2;
#line 271 "query.m"
    MR_Integer query__CastY_19 = (MR_Integer) query__HeadVar__3_3;

#line 271 "query.m"
    query__succeeded = (query__CastX_18 == query__CastY_19);
#line 271 "query.m"
    if (query__succeeded)
#line 8104 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 271 "query.m"
    else
#line 271 "query.m"
      {
#line 271 "query.m"
        MR_Word query__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 271 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 271 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 271 "query.m"
        MR_Word query__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 271 "query.m"
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 271 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 271 "query.m"
        MR_Word query__V_14_14;
#line 271 "query.m"
        MR_Integer query__V_25_25 = (MR_Integer) query__V_4_4;
#line 271 "query.m"
        MR_Integer query__V_26_26 = (MR_Integer) query__V_9_9;

#line 271 "query.m"
        {
#line 271 "query.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_14_14, query__V_25_25, query__V_26_26);
        }
#line 8142 "query.c"
        query__succeeded = (query__V_14_14 == (MR_Integer) 0);
#line 271 "query.m"
        query__succeeded = !(query__succeeded);
#line 271 "query.m"
        if (query__succeeded)
#line 271 "query.m"
          *query__HeadVar__1_1 = query__V_14_14;
#line 271 "query.m"
        else
#line 271 "query.m"
          {
#line 271 "query.m"
            MR_Word query__V_15_15;
#line 271 "query.m"
            MR_Integer query__V_27_27 = (MR_Integer) query__V_5_5;
#line 271 "query.m"
            MR_Integer query__V_28_28 = (MR_Integer) query__V_10_10;

#line 271 "query.m"
            {
#line 271 "query.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_15_15, query__V_27_27, query__V_28_28);
            }
#line 8166 "query.c"
            query__succeeded = (query__V_15_15 == (MR_Integer) 0);
#line 271 "query.m"
            query__succeeded = !(query__succeeded);
#line 271 "query.m"
            if (query__succeeded)
#line 271 "query.m"
              *query__HeadVar__1_1 = query__V_15_15;
#line 271 "query.m"
            else
#line 271 "query.m"
              {
#line 271 "query.m"
                MR_Word query__V_16_16;
#line 271 "query.m"
                MR_Integer query__V_29_29 = (MR_Integer) query__V_6_6;
#line 271 "query.m"
                MR_Integer query__V_30_30 = (MR_Integer) query__V_11_11;

#line 271 "query.m"
                {
#line 271 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_16_16, query__V_29_29, query__V_30_30);
                }
#line 8190 "query.c"
                query__succeeded = (query__V_16_16 == (MR_Integer) 0);
#line 271 "query.m"
                query__succeeded = !(query__succeeded);
#line 271 "query.m"
                if (query__succeeded)
#line 271 "query.m"
                  *query__HeadVar__1_1 = query__V_16_16;
#line 271 "query.m"
                else
#line 271 "query.m"
                  {
#line 271 "query.m"
                    MR_Word query__V_17_17;
#line 271 "query.m"
                    MR_Integer query__V_31_31 = (MR_Integer) query__V_7_7;
#line 271 "query.m"
                    MR_Integer query__V_32_32 = (MR_Integer) query__V_12_12;

#line 271 "query.m"
                    {
#line 271 "query.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_17_17, query__V_31_31, query__V_32_32);
                    }
#line 8214 "query.c"
                    query__succeeded = (query__V_17_17 == (MR_Integer) 0);
#line 271 "query.m"
                    query__succeeded = !(query__succeeded);
#line 271 "query.m"
                    if (query__succeeded)
#line 271 "query.m"
                      *query__HeadVar__1_1 = query__V_17_17;
#line 271 "query.m"
                    else
#line 271 "query.m"
                      {
#line 271 "query.m"
                        query____Compare____memory_fields_0_0(query__HeadVar__1_1, query__V_8_8, query__V_13_13);
#line 271 "query.m"
                        return;
                      }
#line 271 "query.m"
                  }
#line 271 "query.m"
              }
#line 271 "query.m"
          }
#line 271 "query.m"
      }
#line 271 "query.m"
  }
#line 271 "query.m"
}

#line 271 "query.m"
MR_bool MR_CALL 
query____Unify____fields_0_0(
#line 271 "query.m"
  MR_Word query__HeadVar__1_1,
#line 271 "query.m"
  MR_Word query__HeadVar__2_2)
#line 271 "query.m"
{
#line 271 "query.m"
  {
#line 271 "query.m"
    MR_bool query__succeeded;
#line 271 "query.m"
    MR_Integer query__CastX_13 = (MR_Integer) query__HeadVar__1_1;
#line 271 "query.m"
    MR_Integer query__CastY_14 = (MR_Integer) query__HeadVar__2_2;

#line 271 "query.m"
    query__succeeded = (query__CastX_13 == query__CastY_14);
#line 271 "query.m"
    if (query__succeeded)
#line 271 "query.m"
      query__succeeded = MR_TRUE;
#line 271 "query.m"
    else
#line 271 "query.m"
      {
#line 271 "query.m"
        MR_Word query__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 271 "query.m"
        MR_Word query__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 271 "query.m"
        MR_Word query__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "query.m"
        MR_Word query__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 271 "query.m"
        MR_Word query__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 7);
#line 271 "query.m"
        MR_Word query__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 3);
#line 271 "query.m"
        MR_Word query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));

#line 8293 "query.c"
        query__succeeded = (query__V_3_3 == query__V_8_8);
#line 271 "query.m"
        if (query__succeeded)
#line 271 "query.m"
          {
#line 8299 "query.c"
            query__succeeded = (query__V_4_4 == query__V_9_9);
#line 271 "query.m"
            if (query__succeeded)
#line 271 "query.m"
              {
#line 8305 "query.c"
                query__succeeded = (query__V_5_5 == query__V_10_10);
#line 271 "query.m"
                if (query__succeeded)
#line 271 "query.m"
                  {
#line 8311 "query.c"
                    query__succeeded = (query__V_6_6 == query__V_11_11);
#line 271 "query.m"
                    if (query__succeeded)
#line 8315 "query.c"
                      {
#line 8317 "query.c"
                        return query__succeeded = query____Unify____memory_fields_0_0(query__V_7_7, query__V_12_12);
                      }
#line 271 "query.m"
                  }
#line 271 "query.m"
              }
#line 271 "query.m"
          }
#line 271 "query.m"
      }
#line 271 "query.m"
    return query__succeeded;
#line 271 "query.m"
  }
#line 271 "query.m"
}

#line 178 "query.m"
void MR_CALL 
query____Compare____display_limit_0_0(
#line 178 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 178 "query.m"
  MR_Word query__HeadVar__2_2,
#line 178 "query.m"
  MR_Word query__HeadVar__3_3)
#line 178 "query.m"
{
#line 178 "query.m"
  {
#line 178 "query.m"
    MR_bool query__succeeded;
#line 178 "query.m"
    MR_Integer query__CastX_29 = (MR_Integer) query__HeadVar__2_2;
#line 178 "query.m"
    MR_Integer query__CastY_30 = (MR_Integer) query__HeadVar__3_3;

#line 178 "query.m"
    query__succeeded = (query__CastX_29 == query__CastY_30);
#line 178 "query.m"
    if (query__succeeded)
#line 8359 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 178 "query.m"
    else
#line 178 "query.m"
      if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 178 "query.m"
        {
#line 178 "query.m"
          MR_Integer query__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "query.m"
          MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));

#line 178 "query.m"
          if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 178 "query.m"
            {
#line 178 "query.m"
              MR_Integer query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 178 "query.m"
              MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 178 "query.m"
              MR_Word query__V_8_8;

#line 178 "query.m"
              {
#line 178 "query.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_8_8, query__V_36_36, query__V_6_6);
              }
#line 8388 "query.c"
              query__succeeded = (query__V_8_8 == (MR_Integer) 0);
#line 178 "query.m"
              query__succeeded = !(query__succeeded);
#line 178 "query.m"
              if (query__succeeded)
#line 178 "query.m"
                *query__HeadVar__1_1 = query__V_8_8;
#line 178 "query.m"
              else
#line 178 "query.m"
                {
#line 178 "query.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__V_35_35, query__V_7_7);
#line 178 "query.m"
                  return;
                }
#line 178 "query.m"
            }
#line 178 "query.m"
          else
#line 178 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8411 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 178 "query.m"
            else
#line 8415 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 178 "query.m"
        }
#line 178 "query.m"
      else
#line 178 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 178 "query.m"
          {
#line 178 "query.m"
            MR_Float query__V_37_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 178 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8430 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 178 "query.m"
            else
#line 178 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 178 "query.m"
                {
#line 178 "query.m"
                  MR_Float query__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));

#line 178 "query.m"
                  {
#line 178 "query.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_37_37, query__V_19_19);
#line 178 "query.m"
                    return;
                  }
#line 178 "query.m"
                }
#line 178 "query.m"
              else
#line 8452 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 178 "query.m"
          }
#line 178 "query.m"
        else
#line 178 "query.m"
          {
#line 178 "query.m"
            MR_Float query__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 178 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8465 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 178 "query.m"
            else
#line 178 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8471 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 178 "query.m"
              else
#line 178 "query.m"
                {
#line 178 "query.m"
                  MR_Float query__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));

#line 178 "query.m"
                  {
#line 178 "query.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(query__HeadVar__1_1, query__V_38_38, query__V_28_28);
#line 178 "query.m"
                    return;
                  }
#line 178 "query.m"
                }
#line 178 "query.m"
          }
#line 178 "query.m"
  }
#line 178 "query.m"
}

#line 178 "query.m"
MR_bool MR_CALL 
query____Unify____display_limit_0_0(
#line 178 "query.m"
  MR_Word query__HeadVar__1_1,
#line 178 "query.m"
  MR_Word query__HeadVar__2_2)
#line 178 "query.m"
{
#line 178 "query.m"
  {
#line 178 "query.m"
    MR_bool query__succeeded;
#line 178 "query.m"
    MR_Integer query__CastX_11 = (MR_Integer) query__HeadVar__1_1;
#line 178 "query.m"
    MR_Integer query__CastY_12 = (MR_Integer) query__HeadVar__2_2;

#line 178 "query.m"
    query__succeeded = (query__CastX_11 == query__CastY_12);
#line 178 "query.m"
    if (query__succeeded)
#line 178 "query.m"
      query__succeeded = MR_TRUE;
#line 178 "query.m"
    else
#line 178 "query.m"
      if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 178 "query.m"
        {
#line 178 "query.m"
          MR_Integer query__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "query.m"
          MR_Integer query__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "query.m"
          MR_Integer query__V_5_5;
#line 178 "query.m"
          MR_Integer query__V_6_6;

#line 178 "query.m"
          query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 178 "query.m"
          if (query__succeeded)
#line 178 "query.m"
            {
#line 178 "query.m"
              query__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 178 "query.m"
              query__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 8545 "query.c"
              query__succeeded = (query__V_3_3 == query__V_5_5);
#line 178 "query.m"
              if (query__succeeded)
#line 8549 "query.c"
                query__succeeded = (query__V_4_4 == query__V_6_6);
#line 178 "query.m"
            }
#line 178 "query.m"
        }
#line 178 "query.m"
      else
#line 178 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 178 "query.m"
          {
#line 178 "query.m"
            MR_Float query__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "query.m"
            MR_Float query__V_8_8;

#line 178 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 178 "query.m"
            if (query__succeeded)
#line 178 "query.m"
              {
#line 178 "query.m"
                query__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 8574 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 178 "query.m"
              }
#line 178 "query.m"
          }
#line 178 "query.m"
        else
#line 178 "query.m"
          {
#line 178 "query.m"
            MR_Float query__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "query.m"
            MR_Float query__V_10_10;

#line 178 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 178 "query.m"
            if (query__succeeded)
#line 178 "query.m"
              {
#line 178 "query.m"
                query__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 8597 "query.c"
                query__succeeded = (query__V_9_9 == query__V_10_10);
#line 178 "query.m"
              }
#line 178 "query.m"
          }
#line 178 "query.m"
    return query__succeeded;
#line 178 "query.m"
  }
#line 178 "query.m"
}

#line 330 "query.m"
void MR_CALL 
query____Compare____developer_mode_0_0(
#line 330 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 330 "query.m"
  MR_Word query__HeadVar__2_2,
#line 330 "query.m"
  MR_Word query__HeadVar__3_3)
#line 330 "query.m"
{
#line 330 "query.m"
  {
#line 330 "query.m"
    MR_bool query__succeeded;
#line 330 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 330 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 330 "query.m"
    {
#line 330 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 330 "query.m"
      return;
    }
#line 330 "query.m"
  }
#line 330 "query.m"
}

#line 330 "query.m"
MR_bool MR_CALL 
query____Unify____developer_mode_0_0(
#line 330 "query.m"
  MR_Word query__HeadVar__2_1,
#line 330 "query.m"
  MR_Word query__HeadVar__2_2)
#line 330 "query.m"
{
#line 8651 "query.c"
  {
#line 8653 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8656 "query.c"
    return query__succeeded;
#line 8658 "query.c"
  }
#line 330 "query.m"
}

#line 174 "query.m"
void MR_CALL 
query____Compare____descendants_meaningful_0_0(
#line 174 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 174 "query.m"
  MR_Word query__HeadVar__2_2,
#line 174 "query.m"
  MR_Word query__HeadVar__3_3)
#line 174 "query.m"
{
#line 174 "query.m"
  {
#line 174 "query.m"
    MR_bool query__succeeded;
#line 174 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 174 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 174 "query.m"
    {
#line 174 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 174 "query.m"
      return;
    }
#line 174 "query.m"
  }
#line 174 "query.m"
}

#line 174 "query.m"
MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0(
#line 174 "query.m"
  MR_Word query__HeadVar__2_1,
#line 174 "query.m"
  MR_Word query__HeadVar__2_2)
#line 174 "query.m"
{
#line 8704 "query.c"
  {
#line 8706 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8709 "query.c"
    return query__succeeded;
#line 8711 "query.c"
  }
#line 174 "query.m"
}

#line 49 "query.m"
void MR_CALL 
query____Compare____deep_query_0_0(
#line 49 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 49 "query.m"
  MR_Word query__HeadVar__2_2,
#line 49 "query.m"
  MR_Word query__HeadVar__3_3)
#line 49 "query.m"
{
#line 49 "query.m"
  {
#line 49 "query.m"
    MR_bool query__succeeded;
#line 49 "query.m"
    MR_Integer query__CastX_12 = (MR_Integer) query__HeadVar__2_2;
#line 49 "query.m"
    MR_Integer query__CastY_13 = (MR_Integer) query__HeadVar__3_3;

#line 49 "query.m"
    query__succeeded = (query__CastX_12 == query__CastY_13);
#line 49 "query.m"
    if (query__succeeded)
#line 8740 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "query.m"
    else
#line 49 "query.m"
      {
#line 49 "query.m"
        MR_Word query__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 49 "query.m"
        MR_String query__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));
#line 49 "query.m"
        MR_Word query__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 0)));
#line 49 "query.m"
        MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 1)));
#line 49 "query.m"
        MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__3_3, (MR_Integer) 2)));
#line 49 "query.m"
        MR_Word query__V_10_10;

#line 49 "query.m"
        {
#line 49 "query.m"
          mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[1], &query__V_10_10, ((MR_Box) (query__V_4_4)), ((MR_Box) (query__V_7_7)));
        }
#line 8766 "query.c"
        query__succeeded = (query__V_10_10 == (MR_Integer) 0);
#line 49 "query.m"
        query__succeeded = !(query__succeeded);
#line 49 "query.m"
        if (query__succeeded)
#line 49 "query.m"
          *query__HeadVar__1_1 = query__V_10_10;
#line 49 "query.m"
        else
#line 49 "query.m"
          {
#line 49 "query.m"
            MR_Word query__V_11_11;

#line 49 "query.m"
            {
#line 49 "query.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_11_11, query__V_5_5, query__V_8_8);
            }
#line 8786 "query.c"
            query__succeeded = (query__V_11_11 == (MR_Integer) 0);
#line 49 "query.m"
            query__succeeded = !(query__succeeded);
#line 49 "query.m"
            if (query__succeeded)
#line 49 "query.m"
              *query__HeadVar__1_1 = query__V_11_11;
#line 49 "query.m"
            else
#line 49 "query.m"
              {
#line 49 "query.m"
                {
#line 49 "query.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &query_scalar_common_1[2], query__HeadVar__1_1, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_9_9)));
#line 49 "query.m"
                  return;
                }
#line 49 "query.m"
              }
#line 49 "query.m"
          }
#line 49 "query.m"
      }
#line 49 "query.m"
  }
#line 49 "query.m"
}

#line 49 "query.m"
MR_bool MR_CALL 
query____Unify____deep_query_0_0(
#line 49 "query.m"
  MR_Word query__HeadVar__1_1,
#line 49 "query.m"
  MR_Word query__HeadVar__2_2)
#line 49 "query.m"
{
#line 49 "query.m"
  {
#line 49 "query.m"
    MR_bool query__succeeded;
#line 49 "query.m"
    MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 49 "query.m"
    MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 49 "query.m"
    query__succeeded = (query__CastX_9 == query__CastY_10);
#line 49 "query.m"
    if (query__succeeded)
#line 49 "query.m"
      query__succeeded = MR_TRUE;
#line 49 "query.m"
    else
#line 49 "query.m"
      {
#line 49 "query.m"
        MR_Word query__TypeInfo_12_12;
#line 49 "query.m"
        MR_Word query__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "query.m"
        MR_String query__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 49 "query.m"
        MR_Word query__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 2)));
#line 49 "query.m"
        MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));
#line 49 "query.m"
        MR_String query__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "query.m"
        MR_Word query__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 2)));

#line 8859 "query.c"
        {
#line 8861 "query.c"
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
#line 49 "query.m"
        if (query__succeeded)
#line 49 "query.m"
          {
#line 8868 "query.c"
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
#line 49 "query.m"
            if (query__succeeded)
#line 49 "query.m"
              {
#line 8874 "query.c"
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
#line 8876 "query.c"
                {
#line 8878 "query.c"
                  return query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_12_12, ((MR_Box) (query__V_5_5)), ((MR_Box) (query__V_8_8)));
                }
#line 49 "query.m"
              }
#line 49 "query.m"
          }
#line 49 "query.m"
      }
#line 49 "query.m"
    return query__succeeded;
#line 49 "query.m"
  }
#line 49 "query.m"
}

#line 162 "query.m"
void MR_CALL 
query____Compare____cost_kind_0_0(
#line 162 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 162 "query.m"
  MR_Word query__HeadVar__2_2,
#line 162 "query.m"
  MR_Word query__HeadVar__3_3)
#line 162 "query.m"
{
#line 162 "query.m"
  {
#line 162 "query.m"
    MR_bool query__succeeded;
#line 162 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 162 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 162 "query.m"
    {
#line 162 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 162 "query.m"
      return;
    }
#line 162 "query.m"
  }
#line 162 "query.m"
}

#line 162 "query.m"
MR_bool MR_CALL 
query____Unify____cost_kind_0_0(
#line 162 "query.m"
  MR_Word query__HeadVar__2_1,
#line 162 "query.m"
  MR_Word query__HeadVar__2_2)
#line 162 "query.m"
{
#line 8935 "query.c"
  {
#line 8937 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8940 "query.c"
    return query__succeeded;
#line 8942 "query.c"
  }
#line 162 "query.m"
}

#line 305 "query.m"
void MR_CALL 
query____Compare____contour_exclusion_0_0(
#line 305 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 305 "query.m"
  MR_Word query__HeadVar__2_2,
#line 305 "query.m"
  MR_Word query__HeadVar__3_3)
#line 305 "query.m"
{
#line 305 "query.m"
  {
#line 305 "query.m"
    MR_bool query__succeeded;
#line 305 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 305 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 305 "query.m"
    {
#line 305 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 305 "query.m"
      return;
    }
#line 305 "query.m"
  }
#line 305 "query.m"
}

#line 305 "query.m"
MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0(
#line 305 "query.m"
  MR_Word query__HeadVar__2_1,
#line 305 "query.m"
  MR_Word query__HeadVar__2_2)
#line 305 "query.m"
{
#line 8988 "query.c"
  {
#line 8990 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8993 "query.c"
    return query__succeeded;
#line 8995 "query.c"
  }
#line 305 "query.m"
}

#line 284 "query.m"
void MR_CALL 
query____Compare____colour_column_groups_0_0(
#line 284 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 284 "query.m"
  MR_Word query__HeadVar__2_2,
#line 284 "query.m"
  MR_Word query__HeadVar__3_3)
#line 284 "query.m"
{
#line 284 "query.m"
  {
#line 284 "query.m"
    MR_bool query__succeeded;
#line 284 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 284 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 284 "query.m"
    {
#line 284 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 284 "query.m"
      return;
    }
#line 284 "query.m"
  }
#line 284 "query.m"
}

#line 284 "query.m"
MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0(
#line 284 "query.m"
  MR_Word query__HeadVar__2_1,
#line 284 "query.m"
  MR_Word query__HeadVar__2_2)
#line 284 "query.m"
{
#line 9041 "query.c"
  {
#line 9043 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9046 "query.c"
    return query__succeeded;
#line 9048 "query.c"
  }
#line 284 "query.m"
}

#line 75 "query.m"
void MR_CALL 
query____Compare____cmd_0_0(
#line 75 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 75 "query.m"
  MR_Word query__HeadVar__2_2,
#line 75 "query.m"
  MR_Word query__HeadVar__3_3)
#line 75 "query.m"
{
#line 75 "query.m"
  {
#line 75 "query.m"
    MR_bool query__succeeded;
#line 75 "query.m"
    MR_Integer query__CastX_64 = (MR_Integer) query__HeadVar__2_2;
#line 75 "query.m"
    MR_Integer query__CastY_65 = (MR_Integer) query__HeadVar__3_3;

#line 75 "query.m"
    query__succeeded = (query__CastX_64 == query__CastY_65);
#line 75 "query.m"
    if (query__succeeded)
#line 9077 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "query.m"
    else
#line 75 "query.m"
      {
#line 75 "query.m"
        MR_Integer query__V_4_4;
#line 75 "query.m"
        MR_Integer query__V_5_5;

#line 75 "query.m"
        {
#line 75 "query.m"
          query____Index____cmd_0_0(query__HeadVar__2_2, &query__V_4_4);
        }
#line 75 "query.m"
        {
#line 75 "query.m"
          query____Index____cmd_0_0(query__HeadVar__3_3, &query__V_5_5);
        }
#line 75 "query.m"
        query__succeeded = (query__V_4_4 < query__V_5_5);
#line 75 "query.m"
        if (query__succeeded)
#line 9102 "query.c"
          *query__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "query.m"
        else
#line 75 "query.m"
          {
#line 75 "query.m"
            query__succeeded = (query__V_4_4 > query__V_5_5);
#line 75 "query.m"
            if (query__succeeded)
#line 9112 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "query.m"
            else
#line 75 "query.m"
              {
#line 75 "query.m"
                MR_Word query__V_6_6;

#line 75 "query.m"
                if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 75 "query.m"
                  {
#line 75 "query.m"
                    query__V_6_6 = (MR_Integer) 0;
#line 75 "query.m"
                    query__succeeded = MR_TRUE;
#line 75 "query.m"
                  }
#line 75 "query.m"
                else
#line 75 "query.m"
                  if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 75 "query.m"
                    {
#line 75 "query.m"
                      query__V_6_6 = (MR_Integer) 0;
#line 75 "query.m"
                      query__succeeded = MR_TRUE;
#line 75 "query.m"
                    }
#line 75 "query.m"
                  else
#line 75 "query.m"
                    if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "query.m"
                      {
#line 75 "query.m"
                        query__V_6_6 = (MR_Integer) 0;
#line 75 "query.m"
                        query__succeeded = MR_TRUE;
#line 75 "query.m"
                      }
#line 75 "query.m"
                    else
#line 75 "query.m"
                      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 75 "query.m"
                        {
#line 75 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 75 "query.m"
                          query__succeeded = MR_TRUE;
#line 75 "query.m"
                        }
#line 75 "query.m"
                      else
#line 75 "query.m"
                        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "query.m"
                          {
#line 75 "query.m"
                            query__V_6_6 = (MR_Integer) 0;
#line 75 "query.m"
                            query__succeeded = MR_TRUE;
#line 75 "query.m"
                          }
#line 75 "query.m"
                        else
#line 75 "query.m"
                          if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 75 "query.m"
                            {
#line 75 "query.m"
                              MR_Word query__TypeInfo_67_67;
#line 75 "query.m"
                              MR_Word query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "query.m"
                              MR_Word query__V_10_10;

#line 75 "query.m"
                              query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 75 "query.m"
                              if (query__succeeded)
#line 75 "query.m"
                                {
#line 75 "query.m"
                                  query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__3_3, (MR_Integer) 0)));
#line 9200 "query.c"
                                  query__TypeInfo_67_67 = (MR_Word) &query_scalar_common_1[0];
#line 75 "query.m"
                                  {
#line 75 "query.m"
                                    mercury__builtin__compare_3_p_0(query__TypeInfo_67_67, &query__V_6_6, ((MR_Box) (query__V_9_9)), ((MR_Box) (query__V_10_10)));
                                  }
#line 75 "query.m"
                                  query__succeeded = MR_TRUE;
#line 75 "query.m"
                                }
#line 75 "query.m"
                            }
#line 75 "query.m"
                          else
#line 75 "query.m"
                            if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 75 "query.m"
                              {
#line 75 "query.m"
                                MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "query.m"
                                MR_Integer query__V_8_8;

#line 75 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 75 "query.m"
                                if (query__succeeded)
#line 75 "query.m"
                                  {
#line 75 "query.m"
                                    query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "query.m"
                                    {
#line 75 "query.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_7_7, query__V_8_8);
                                    }
#line 75 "query.m"
                                    query__succeeded = MR_TRUE;
#line 75 "query.m"
                                  }
#line 75 "query.m"
                              }
#line 75 "query.m"
                            else
#line 75 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 75 "query.m"
                                {
#line 75 "query.m"
                                  MR_Word query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                  MR_Word query__V_63_63;
#line 75 "query.m"
                                  MR_Integer query__V_91_91;
#line 75 "query.m"
                                  MR_Integer query__V_92_92;

#line 75 "query.m"
                                  query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 75 "query.m"
                                  if (query__succeeded)
#line 75 "query.m"
                                    {
#line 75 "query.m"
                                      query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                      query__V_91_91 = (MR_Integer) query__V_62_62;
#line 75 "query.m"
                                      query__V_92_92 = (MR_Integer) query__V_63_63;
#line 75 "query.m"
                                      {
#line 75 "query.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_91_91, query__V_92_92);
                                      }
#line 75 "query.m"
                                      query__succeeded = MR_TRUE;
#line 75 "query.m"
                                    }
#line 75 "query.m"
                                }
#line 75 "query.m"
                              else
#line 75 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "query.m"
                                  {
#line 75 "query.m"
                                    MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                    MR_Word query__V_12_12;
#line 75 "query.m"
                                    MR_Integer query__V_93_93;
#line 75 "query.m"
                                    MR_Integer query__V_94_94;

#line 75 "query.m"
                                    query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "query.m"
                                    if (query__succeeded)
#line 75 "query.m"
                                      {
#line 75 "query.m"
                                        query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                        query__V_93_93 = (MR_Integer) query__V_11_11;
#line 75 "query.m"
                                        query__V_94_94 = (MR_Integer) query__V_12_12;
#line 75 "query.m"
                                        {
#line 75 "query.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_93_93, query__V_94_94);
                                        }
#line 75 "query.m"
                                        query__succeeded = MR_TRUE;
#line 75 "query.m"
                                      }
#line 75 "query.m"
                                  }
#line 75 "query.m"
                                else
#line 75 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 75 "query.m"
                                    {
#line 75 "query.m"
                                      MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                      MR_Word query__V_14_14;
#line 75 "query.m"
                                      MR_Integer query__V_95_95;
#line 75 "query.m"
                                      MR_Integer query__V_96_96;

#line 75 "query.m"
                                      query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "query.m"
                                      if (query__succeeded)
#line 75 "query.m"
                                        {
#line 75 "query.m"
                                          query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                          query__V_95_95 = (MR_Integer) query__V_13_13;
#line 75 "query.m"
                                          query__V_96_96 = (MR_Integer) query__V_14_14;
#line 75 "query.m"
                                          {
#line 75 "query.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_95_95, query__V_96_96);
                                          }
#line 75 "query.m"
                                          query__succeeded = MR_TRUE;
#line 75 "query.m"
                                        }
#line 75 "query.m"
                                    }
#line 75 "query.m"
                                  else
#line 75 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 75 "query.m"
                                      {
#line 75 "query.m"
                                        MR_Word query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                        MR_Word query__V_59_59;
#line 75 "query.m"
                                        MR_Integer query__V_97_97;
#line 75 "query.m"
                                        MR_Integer query__V_98_98;

#line 75 "query.m"
                                        query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 75 "query.m"
                                        if (query__succeeded)
#line 75 "query.m"
                                          {
#line 75 "query.m"
                                            query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                            query__V_97_97 = (MR_Integer) query__V_58_58;
#line 75 "query.m"
                                            query__V_98_98 = (MR_Integer) query__V_59_59;
#line 75 "query.m"
                                            {
#line 75 "query.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_97_97, query__V_98_98);
                                            }
#line 75 "query.m"
                                            query__succeeded = MR_TRUE;
#line 75 "query.m"
                                          }
#line 75 "query.m"
                                      }
#line 75 "query.m"
                                    else
#line 75 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 75 "query.m"
                                        {
#line 75 "query.m"
                                          MR_Word query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                          MR_Word query__V_57_57;
#line 75 "query.m"
                                          MR_Integer query__V_99_99;
#line 75 "query.m"
                                          MR_Integer query__V_100_100;

#line 75 "query.m"
                                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 75 "query.m"
                                          if (query__succeeded)
#line 75 "query.m"
                                            {
#line 75 "query.m"
                                              query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                              query__V_99_99 = (MR_Integer) query__V_56_56;
#line 75 "query.m"
                                              query__V_100_100 = (MR_Integer) query__V_57_57;
#line 75 "query.m"
                                              {
#line 75 "query.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_99_99, query__V_100_100);
                                              }
#line 75 "query.m"
                                              query__succeeded = MR_TRUE;
#line 75 "query.m"
                                            }
#line 75 "query.m"
                                        }
#line 75 "query.m"
                                      else
#line 75 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 75 "query.m"
                                          {
#line 75 "query.m"
                                            MR_Word query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                            MR_Word query__V_61_61;
#line 75 "query.m"
                                            MR_Integer query__V_101_101;
#line 75 "query.m"
                                            MR_Integer query__V_102_102;

#line 75 "query.m"
                                            query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 75 "query.m"
                                            if (query__succeeded)
#line 75 "query.m"
                                              {
#line 75 "query.m"
                                                query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                query__V_101_101 = (MR_Integer) query__V_60_60;
#line 75 "query.m"
                                                query__V_102_102 = (MR_Integer) query__V_61_61;
#line 75 "query.m"
                                                {
#line 75 "query.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_101_101, query__V_102_102);
                                                }
#line 75 "query.m"
                                                query__succeeded = MR_TRUE;
#line 75 "query.m"
                                              }
#line 75 "query.m"
                                          }
#line 75 "query.m"
                                        else
#line 75 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 75 "query.m"
                                            {
#line 75 "query.m"
                                              MR_Word query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                              MR_Word query__V_55_55;
#line 75 "query.m"
                                              MR_Integer query__V_103_103;
#line 75 "query.m"
                                              MR_Integer query__V_104_104;

#line 75 "query.m"
                                              query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 75 "query.m"
                                              if (query__succeeded)
#line 75 "query.m"
                                                {
#line 75 "query.m"
                                                  query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                  query__V_103_103 = (MR_Integer) query__V_54_54;
#line 75 "query.m"
                                                  query__V_104_104 = (MR_Integer) query__V_55_55;
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_103_103, query__V_104_104);
                                                  }
#line 75 "query.m"
                                                  query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                }
#line 75 "query.m"
                                            }
#line 75 "query.m"
                                          else
#line 75 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 75 "query.m"
                                              {
#line 75 "query.m"
                                                MR_Word query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                MR_Word query__V_53_53;
#line 75 "query.m"
                                                MR_Integer query__V_105_105;
#line 75 "query.m"
                                                MR_Integer query__V_106_106;

#line 75 "query.m"
                                                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 75 "query.m"
                                                if (query__succeeded)
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                    query__V_105_105 = (MR_Integer) query__V_52_52;
#line 75 "query.m"
                                                    query__V_106_106 = (MR_Integer) query__V_53_53;
#line 75 "query.m"
                                                    {
#line 75 "query.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_105_105, query__V_106_106);
                                                    }
#line 75 "query.m"
                                                    query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                  }
#line 75 "query.m"
                                              }
#line 75 "query.m"
                                            else
#line 75 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 75 "query.m"
                                                {
#line 75 "query.m"
                                                  MR_Word query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                  MR_Word query__V_51_51;
#line 75 "query.m"
                                                  MR_Integer query__V_107_107;
#line 75 "query.m"
                                                  MR_Integer query__V_108_108;

#line 75 "query.m"
                                                  query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 75 "query.m"
                                                  if (query__succeeded)
#line 75 "query.m"
                                                    {
#line 75 "query.m"
                                                      query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                      query__V_107_107 = (MR_Integer) query__V_50_50;
#line 75 "query.m"
                                                      query__V_108_108 = (MR_Integer) query__V_51_51;
#line 75 "query.m"
                                                      {
#line 75 "query.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_107_107, query__V_108_108);
                                                      }
#line 75 "query.m"
                                                      query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                    }
#line 75 "query.m"
                                                }
#line 75 "query.m"
                                              else
#line 75 "query.m"
                                                if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    MR_String query__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                    MR_String query__V_32_32;

#line 75 "query.m"
                                                    query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 75 "query.m"
                                                    if (query__succeeded)
#line 75 "query.m"
                                                      {
#line 75 "query.m"
                                                        query__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                        {
#line 75 "query.m"
                                                          mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_31_31, query__V_32_32);
                                                        }
#line 75 "query.m"
                                                        query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                      }
#line 75 "query.m"
                                                  }
#line 75 "query.m"
                                                else
#line 75 "query.m"
                                                  if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 75 "query.m"
                                                    {
#line 75 "query.m"
                                                      MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                      MR_String query__V_34_34;

#line 75 "query.m"
                                                      query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 75 "query.m"
                                                      if (query__succeeded)
#line 75 "query.m"
                                                        {
#line 75 "query.m"
                                                          query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                          {
#line 75 "query.m"
                                                            mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_33_33, query__V_34_34);
                                                          }
#line 75 "query.m"
                                                          query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                        }
#line 75 "query.m"
                                                    }
#line 75 "query.m"
                                                  else
#line 75 "query.m"
                                                    if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 75 "query.m"
                                                      {
#line 75 "query.m"
                                                        MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                        MR_String query__V_36_36;

#line 75 "query.m"
                                                        query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 75 "query.m"
                                                        if (query__succeeded)
#line 75 "query.m"
                                                          {
#line 75 "query.m"
                                                            query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                            {
#line 75 "query.m"
                                                              mercury__private_builtin__builtin_compare_string_3_p_0(&query__V_6_6, query__V_35_35, query__V_36_36);
                                                            }
#line 75 "query.m"
                                                            query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                          }
#line 75 "query.m"
                                                      }
#line 75 "query.m"
                                                    else
#line 75 "query.m"
                                                      if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 75 "query.m"
                                                        {
#line 75 "query.m"
                                                          MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                          MR_Word query__V_16_16;
#line 75 "query.m"
                                                          MR_Integer query__V_109_109;
#line 75 "query.m"
                                                          MR_Integer query__V_110_110;

#line 75 "query.m"
                                                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "query.m"
                                                          if (query__succeeded)
#line 75 "query.m"
                                                            {
#line 75 "query.m"
                                                              query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                              query__V_109_109 = (MR_Integer) query__V_15_15;
#line 75 "query.m"
                                                              query__V_110_110 = (MR_Integer) query__V_16_16;
#line 75 "query.m"
                                                              {
#line 75 "query.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_109_109, query__V_110_110);
                                                              }
#line 75 "query.m"
                                                              query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                            }
#line 75 "query.m"
                                                        }
#line 75 "query.m"
                                                      else
#line 75 "query.m"
                                                        if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 75 "query.m"
                                                          {
#line 75 "query.m"
                                                            MR_Word query__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                            MR_Word query__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "query.m"
                                                            MR_Integer query__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
#line 75 "query.m"
                                                            MR_Integer query__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
#line 75 "query.m"
                                                            MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
#line 75 "query.m"
                                                            MR_Word query__V_22_22;
#line 75 "query.m"
                                                            MR_Word query__V_23_23;
#line 75 "query.m"
                                                            MR_Integer query__V_24_24;
#line 75 "query.m"
                                                            MR_Integer query__V_25_25;
#line 75 "query.m"
                                                            MR_Word query__V_26_26;
#line 75 "query.m"
                                                            MR_Word query__V_27_27;
#line 75 "query.m"
                                                            MR_Integer query__V_111_111;
#line 75 "query.m"
                                                            MR_Integer query__V_112_112;

#line 75 "query.m"
                                                            query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "query.m"
                                                            if (query__succeeded)
#line 75 "query.m"
                                                              {
#line 75 "query.m"
                                                                query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                                query__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "query.m"
                                                                query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 3)));
#line 75 "query.m"
                                                                query__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 4)));
#line 75 "query.m"
                                                                query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 5)));
#line 75 "query.m"
                                                                query__V_111_111 = (MR_Integer) query__V_17_17;
#line 75 "query.m"
                                                                query__V_112_112 = (MR_Integer) query__V_22_22;
#line 75 "query.m"
                                                                {
#line 75 "query.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_27_27, query__V_111_111, query__V_112_112);
                                                                }
#line 9771 "query.c"
                                                                query__succeeded = (query__V_27_27 == (MR_Integer) 0);
#line 75 "query.m"
                                                                query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                if (query__succeeded)
#line 75 "query.m"
                                                                  query__V_6_6 = query__V_27_27;
#line 75 "query.m"
                                                                else
#line 75 "query.m"
                                                                  {
#line 75 "query.m"
                                                                    MR_Word query__V_28_28;
#line 75 "query.m"
                                                                    MR_Integer query__V_113_113 = (MR_Integer) query__V_18_18;
#line 75 "query.m"
                                                                    MR_Integer query__V_114_114 = (MR_Integer) query__V_23_23;

#line 75 "query.m"
                                                                    {
#line 75 "query.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_28_28, query__V_113_113, query__V_114_114);
                                                                    }
#line 9795 "query.c"
                                                                    query__succeeded = (query__V_28_28 == (MR_Integer) 0);
#line 75 "query.m"
                                                                    query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                    if (query__succeeded)
#line 75 "query.m"
                                                                      query__V_6_6 = query__V_28_28;
#line 75 "query.m"
                                                                    else
#line 75 "query.m"
                                                                      {
#line 75 "query.m"
                                                                        MR_Word query__V_29_29;

#line 75 "query.m"
                                                                        {
#line 75 "query.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_29_29, query__V_19_19, query__V_24_24);
                                                                        }
#line 9815 "query.c"
                                                                        query__succeeded = (query__V_29_29 == (MR_Integer) 0);
#line 75 "query.m"
                                                                        query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                        if (query__succeeded)
#line 75 "query.m"
                                                                          query__V_6_6 = query__V_29_29;
#line 75 "query.m"
                                                                        else
#line 75 "query.m"
                                                                          {
#line 75 "query.m"
                                                                            MR_Word query__V_30_30;

#line 75 "query.m"
                                                                            {
#line 75 "query.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_30_30, query__V_20_20, query__V_25_25);
                                                                            }
#line 9835 "query.c"
                                                                            query__succeeded = (query__V_30_30 == (MR_Integer) 0);
#line 75 "query.m"
                                                                            query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                            if (query__succeeded)
#line 75 "query.m"
                                                                              query__V_6_6 = query__V_30_30;
#line 75 "query.m"
                                                                            else
#line 75 "query.m"
                                                                              {
#line 75 "query.m"
                                                                                MR_Integer query__V_115_115 = (MR_Integer) query__V_21_21;
#line 75 "query.m"
                                                                                MR_Integer query__V_116_116 = (MR_Integer) query__V_26_26;

#line 75 "query.m"
                                                                                {
#line 75 "query.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_115_115, query__V_116_116);
                                                                                }
#line 75 "query.m"
                                                                              }
#line 75 "query.m"
                                                                          }
#line 75 "query.m"
                                                                      }
#line 75 "query.m"
                                                                  }
#line 75 "query.m"
                                                                query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                              }
#line 75 "query.m"
                                                          }
#line 75 "query.m"
                                                        else
#line 75 "query.m"
                                                          if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 75 "query.m"
                                                            {
#line 75 "query.m"
                                                              MR_Word query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                              MR_Word query__V_49_49;
#line 75 "query.m"
                                                              MR_Integer query__V_117_117;
#line 75 "query.m"
                                                              MR_Integer query__V_118_118;

#line 75 "query.m"
                                                              query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 75 "query.m"
                                                              if (query__succeeded)
#line 75 "query.m"
                                                                {
#line 75 "query.m"
                                                                  query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                                  query__V_117_117 = (MR_Integer) query__V_48_48;
#line 75 "query.m"
                                                                  query__V_118_118 = (MR_Integer) query__V_49_49;
#line 75 "query.m"
                                                                  {
#line 75 "query.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_117_117, query__V_118_118);
                                                                  }
#line 75 "query.m"
                                                                  query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                                }
#line 75 "query.m"
                                                            }
#line 75 "query.m"
                                                          else
#line 75 "query.m"
                                                            {
#line 75 "query.m"
                                                              MR_Word query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                              MR_Word query__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 75 "query.m"
                                                              MR_Word query__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "query.m"
                                                              MR_Word query__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "query.m"
                                                              MR_Word query__V_41_41;
#line 75 "query.m"
                                                              MR_Word query__V_42_42;
#line 75 "query.m"
                                                              MR_Word query__V_43_43;
#line 75 "query.m"
                                                              MR_Word query__V_44_44;
#line 75 "query.m"
                                                              MR_Word query__V_45_45;

#line 75 "query.m"
                                                              query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 75 "query.m"
                                                              if (query__succeeded)
#line 75 "query.m"
                                                                {
#line 75 "query.m"
                                                                  query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "query.m"
                                                                  query__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 75 "query.m"
                                                                  query__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "query.m"
                                                                  query__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__3_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "query.m"
                                                                  {
#line 75 "query.m"
                                                                    query____Compare____display_limit_0_0(&query__V_45_45, query__V_37_37, query__V_41_41);
                                                                  }
#line 9951 "query.c"
                                                                  query__succeeded = (query__V_45_45 == (MR_Integer) 0);
#line 75 "query.m"
                                                                  query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                  if (query__succeeded)
#line 75 "query.m"
                                                                    query__V_6_6 = query__V_45_45;
#line 75 "query.m"
                                                                  else
#line 75 "query.m"
                                                                    {
#line 75 "query.m"
                                                                      MR_Word query__V_46_46;
#line 75 "query.m"
                                                                      MR_Integer query__V_119_119 = (MR_Integer) query__V_38_38;
#line 75 "query.m"
                                                                      MR_Integer query__V_120_120 = (MR_Integer) query__V_42_42;

#line 75 "query.m"
                                                                      {
#line 75 "query.m"
                                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_46_46, query__V_119_119, query__V_120_120);
                                                                      }
#line 9975 "query.c"
                                                                      query__succeeded = (query__V_46_46 == (MR_Integer) 0);
#line 75 "query.m"
                                                                      query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                      if (query__succeeded)
#line 75 "query.m"
                                                                        query__V_6_6 = query__V_46_46;
#line 75 "query.m"
                                                                      else
#line 75 "query.m"
                                                                        {
#line 75 "query.m"
                                                                          MR_Word query__V_47_47;
#line 75 "query.m"
                                                                          MR_Integer query__V_121_121 = (MR_Integer) query__V_39_39;
#line 75 "query.m"
                                                                          MR_Integer query__V_122_122 = (MR_Integer) query__V_43_43;

#line 75 "query.m"
                                                                          {
#line 75 "query.m"
                                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_47_47, query__V_121_121, query__V_122_122);
                                                                          }
#line 9999 "query.c"
                                                                          query__succeeded = (query__V_47_47 == (MR_Integer) 0);
#line 75 "query.m"
                                                                          query__succeeded = !(query__succeeded);
#line 75 "query.m"
                                                                          if (query__succeeded)
#line 75 "query.m"
                                                                            query__V_6_6 = query__V_47_47;
#line 75 "query.m"
                                                                          else
#line 75 "query.m"
                                                                            {
#line 75 "query.m"
                                                                              MR_Integer query__V_123_123 = (MR_Integer) query__V_40_40;
#line 75 "query.m"
                                                                              MR_Integer query__V_124_124 = (MR_Integer) query__V_44_44;

#line 75 "query.m"
                                                                              {
#line 75 "query.m"
                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&query__V_6_6, query__V_123_123, query__V_124_124);
                                                                              }
#line 75 "query.m"
                                                                            }
#line 75 "query.m"
                                                                        }
#line 75 "query.m"
                                                                    }
#line 75 "query.m"
                                                                  query__succeeded = MR_TRUE;
#line 75 "query.m"
                                                                }
#line 75 "query.m"
                                                            }
#line 75 "query.m"
                if (query__succeeded)
#line 75 "query.m"
                  *query__HeadVar__1_1 = query__V_6_6;
#line 75 "query.m"
                else
#line 75 "query.m"
                  {
#line 75 "query.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 75 "query.m"
                    return;
                  }
#line 75 "query.m"
              }
#line 75 "query.m"
          }
#line 75 "query.m"
      }
#line 75 "query.m"
  }
#line 75 "query.m"
}

#line 75 "query.m"
void MR_CALL 
query____Index____cmd_0_0(
#line 75 "query.m"
  MR_Word query__HeadVar__1_1,
#line 75 "query.m"
  MR_Integer * query__HeadVar__2_2)
#line 75 "query.m"
{
#line 75 "query.m"
  {
#line 75 "query.m"
    MR_bool query__succeeded;

#line 75 "query.m"
    if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 10073 "query.c"
      *query__HeadVar__2_2 = (MR_Integer) 3;
#line 75 "query.m"
    else
#line 75 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 10079 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 10;
#line 75 "query.m"
      else
#line 75 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10085 "query.c"
          *query__HeadVar__2_2 = (MR_Integer) 0;
#line 75 "query.m"
        else
#line 75 "query.m"
          if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 10091 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 7;
#line 75 "query.m"
          else
#line 75 "query.m"
            if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 10097 "query.c"
              *query__HeadVar__2_2 = (MR_Integer) 1;
#line 75 "query.m"
            else
#line 75 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10103 "query.c"
                *query__HeadVar__2_2 = (MR_Integer) 4;
#line 75 "query.m"
              else
#line 75 "query.m"
                if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10109 "query.c"
                  *query__HeadVar__2_2 = (MR_Integer) 2;
#line 75 "query.m"
                else
#line 75 "query.m"
                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10115 "query.c"
                    *query__HeadVar__2_2 = (MR_Integer) 22;
#line 75 "query.m"
                  else
#line 75 "query.m"
                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10121 "query.c"
                      *query__HeadVar__2_2 = (MR_Integer) 5;
#line 75 "query.m"
                    else
#line 75 "query.m"
                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10127 "query.c"
                        *query__HeadVar__2_2 = (MR_Integer) 6;
#line 75 "query.m"
                      else
#line 75 "query.m"
                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10133 "query.c"
                          *query__HeadVar__2_2 = (MR_Integer) 20;
#line 75 "query.m"
                        else
#line 75 "query.m"
                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10139 "query.c"
                            *query__HeadVar__2_2 = (MR_Integer) 19;
#line 75 "query.m"
                          else
#line 75 "query.m"
                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 10145 "query.c"
                              *query__HeadVar__2_2 = (MR_Integer) 21;
#line 75 "query.m"
                            else
#line 75 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10151 "query.c"
                                *query__HeadVar__2_2 = (MR_Integer) 18;
#line 75 "query.m"
                              else
#line 75 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10157 "query.c"
                                  *query__HeadVar__2_2 = (MR_Integer) 17;
#line 75 "query.m"
                                else
#line 75 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10163 "query.c"
                                    *query__HeadVar__2_2 = (MR_Integer) 16;
#line 75 "query.m"
                                  else
#line 75 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10169 "query.c"
                                      *query__HeadVar__2_2 = (MR_Integer) 11;
#line 75 "query.m"
                                    else
#line 75 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10175 "query.c"
                                        *query__HeadVar__2_2 = (MR_Integer) 12;
#line 75 "query.m"
                                      else
#line 75 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10181 "query.c"
                                          *query__HeadVar__2_2 = (MR_Integer) 13;
#line 75 "query.m"
                                        else
#line 75 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10187 "query.c"
                                            *query__HeadVar__2_2 = (MR_Integer) 8;
#line 75 "query.m"
                                          else
#line 75 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10193 "query.c"
                                              *query__HeadVar__2_2 = (MR_Integer) 9;
#line 75 "query.m"
                                            else
#line 75 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10199 "query.c"
                                                *query__HeadVar__2_2 = (MR_Integer) 15;
#line 75 "query.m"
                                              else
#line 10203 "query.c"
                                                *query__HeadVar__2_2 = (MR_Integer) 14;
#line 75 "query.m"
  }
#line 75 "query.m"
}

#line 75 "query.m"
MR_bool MR_CALL 
query____Unify____cmd_0_0(
#line 75 "query.m"
  MR_Word query__HeadVar__1_1,
#line 75 "query.m"
  MR_Word query__HeadVar__2_2)
#line 75 "query.m"
{
#line 75 "query.m"
  {
#line 75 "query.m"
    MR_bool query__succeeded;
#line 75 "query.m"
    MR_Integer query__CastX_63 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
    MR_Integer query__CastY_64 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
    query__succeeded = (query__CastX_63 == query__CastY_64);
#line 75 "query.m"
    if (query__succeeded)
#line 75 "query.m"
      query__succeeded = MR_TRUE;
#line 75 "query.m"
    else
#line 75 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 75 "query.m"
        {
#line 75 "query.m"
          MR_Integer query__CastX_9 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
          MR_Integer query__CastY_10 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
          query__succeeded = (query__CastY_10 == query__CastX_9);
#line 75 "query.m"
        }
#line 75 "query.m"
      else
#line 75 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 75 "query.m"
          {
#line 75 "query.m"
            MR_Integer query__CastX_31 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
            MR_Integer query__CastY_32 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
            query__succeeded = (query__CastY_32 == query__CastX_31);
#line 75 "query.m"
          }
#line 75 "query.m"
        else
#line 75 "query.m"
          if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "query.m"
            {
#line 75 "query.m"
              MR_Integer query__CastX_3 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
              MR_Integer query__CastY_4 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
              query__succeeded = (query__CastY_4 == query__CastX_3);
#line 75 "query.m"
            }
#line 75 "query.m"
          else
#line 75 "query.m"
            if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 75 "query.m"
              {
#line 75 "query.m"
                MR_Integer query__CastX_17 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
                MR_Integer query__CastY_18 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
                query__succeeded = (query__CastY_18 == query__CastX_17);
#line 75 "query.m"
              }
#line 75 "query.m"
            else
#line 75 "query.m"
              if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "query.m"
                {
#line 75 "query.m"
                  MR_Integer query__CastX_5 = (MR_Integer) query__HeadVar__1_1;
#line 75 "query.m"
                  MR_Integer query__CastY_6 = (MR_Integer) query__HeadVar__2_2;

#line 75 "query.m"
                  query__succeeded = (query__CastY_6 == query__CastX_5);
#line 75 "query.m"
                }
#line 75 "query.m"
              else
#line 75 "query.m"
                if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 75 "query.m"
                  {
#line 75 "query.m"
                    MR_Word query__TypeInfo_76_76;
#line 75 "query.m"
                    MR_Word query__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "query.m"
                    MR_Word query__V_12_12;

#line 75 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "query.m"
                    if (query__succeeded)
#line 75 "query.m"
                      {
#line 75 "query.m"
                        query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));
#line 10330 "query.c"
                        query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
#line 10332 "query.c"
                        {
#line 10334 "query.c"
                          return query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_76_76, ((MR_Box) (query__V_11_11)), ((MR_Box) (query__V_12_12)));
                        }
#line 75 "query.m"
                      }
#line 75 "query.m"
                  }
#line 75 "query.m"
                else
#line 75 "query.m"
                  if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 75 "query.m"
                    {
#line 75 "query.m"
                      MR_Integer query__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "query.m"
                      MR_Integer query__V_8_8;

#line 75 "query.m"
                      query__succeeded = ((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "query.m"
                      if (query__succeeded)
#line 75 "query.m"
                        {
#line 75 "query.m"
                          query__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));
#line 10360 "query.c"
                          query__succeeded = (query__V_7_7 == query__V_8_8);
#line 75 "query.m"
                        }
#line 75 "query.m"
                    }
#line 75 "query.m"
                  else
#line 75 "query.m"
                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 75 "query.m"
                      {
#line 75 "query.m"
                        MR_Word query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                        MR_Word query__V_62_62;
#line 75 "query.m"
                        MR_Integer query__V_78_78;
#line 75 "query.m"
                        MR_Integer query__V_79_79;

#line 75 "query.m"
                        query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 75 "query.m"
                        if (query__succeeded)
#line 75 "query.m"
                          {
#line 75 "query.m"
                            query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10389 "query.c"
                            query__V_78_78 = (MR_Integer) query__V_61_61;
#line 10391 "query.c"
                            query__V_79_79 = (MR_Integer) query__V_62_62;
#line 10393 "query.c"
                            query__succeeded = (query__V_78_78 == query__V_79_79);
#line 75 "query.m"
                          }
#line 75 "query.m"
                      }
#line 75 "query.m"
                    else
#line 75 "query.m"
                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "query.m"
                        {
#line 75 "query.m"
                          MR_Word query__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                          MR_Word query__V_14_14;
#line 75 "query.m"
                          MR_Integer query__V_80_80;
#line 75 "query.m"
                          MR_Integer query__V_81_81;

#line 75 "query.m"
                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "query.m"
                          if (query__succeeded)
#line 75 "query.m"
                            {
#line 75 "query.m"
                              query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10422 "query.c"
                              query__V_80_80 = (MR_Integer) query__V_13_13;
#line 10424 "query.c"
                              query__V_81_81 = (MR_Integer) query__V_14_14;
#line 10426 "query.c"
                              query__succeeded = (query__V_80_80 == query__V_81_81);
#line 75 "query.m"
                            }
#line 75 "query.m"
                        }
#line 75 "query.m"
                      else
#line 75 "query.m"
                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 75 "query.m"
                          {
#line 75 "query.m"
                            MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                            MR_Word query__V_16_16;
#line 75 "query.m"
                            MR_Integer query__V_82_82;
#line 75 "query.m"
                            MR_Integer query__V_83_83;

#line 75 "query.m"
                            query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "query.m"
                            if (query__succeeded)
#line 75 "query.m"
                              {
#line 75 "query.m"
                                query__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10455 "query.c"
                                query__V_82_82 = (MR_Integer) query__V_15_15;
#line 10457 "query.c"
                                query__V_83_83 = (MR_Integer) query__V_16_16;
#line 10459 "query.c"
                                query__succeeded = (query__V_82_82 == query__V_83_83);
#line 75 "query.m"
                              }
#line 75 "query.m"
                          }
#line 75 "query.m"
                        else
#line 75 "query.m"
                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 75 "query.m"
                            {
#line 75 "query.m"
                              MR_Word query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                              MR_Word query__V_58_58;
#line 75 "query.m"
                              MR_Integer query__V_84_84;
#line 75 "query.m"
                              MR_Integer query__V_85_85;

#line 75 "query.m"
                              query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 75 "query.m"
                              if (query__succeeded)
#line 75 "query.m"
                                {
#line 75 "query.m"
                                  query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10488 "query.c"
                                  query__V_84_84 = (MR_Integer) query__V_57_57;
#line 10490 "query.c"
                                  query__V_85_85 = (MR_Integer) query__V_58_58;
#line 10492 "query.c"
                                  query__succeeded = (query__V_84_84 == query__V_85_85);
#line 75 "query.m"
                                }
#line 75 "query.m"
                            }
#line 75 "query.m"
                          else
#line 75 "query.m"
                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 75 "query.m"
                              {
#line 75 "query.m"
                                MR_Word query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                MR_Word query__V_56_56;
#line 75 "query.m"
                                MR_Integer query__V_86_86;
#line 75 "query.m"
                                MR_Integer query__V_87_87;

#line 75 "query.m"
                                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 75 "query.m"
                                if (query__succeeded)
#line 75 "query.m"
                                  {
#line 75 "query.m"
                                    query__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10521 "query.c"
                                    query__V_86_86 = (MR_Integer) query__V_55_55;
#line 10523 "query.c"
                                    query__V_87_87 = (MR_Integer) query__V_56_56;
#line 10525 "query.c"
                                    query__succeeded = (query__V_86_86 == query__V_87_87);
#line 75 "query.m"
                                  }
#line 75 "query.m"
                              }
#line 75 "query.m"
                            else
#line 75 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 75 "query.m"
                                {
#line 75 "query.m"
                                  MR_Word query__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                  MR_Word query__V_60_60;
#line 75 "query.m"
                                  MR_Integer query__V_88_88;
#line 75 "query.m"
                                  MR_Integer query__V_89_89;

#line 75 "query.m"
                                  query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 75 "query.m"
                                  if (query__succeeded)
#line 75 "query.m"
                                    {
#line 75 "query.m"
                                      query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10554 "query.c"
                                      query__V_88_88 = (MR_Integer) query__V_59_59;
#line 10556 "query.c"
                                      query__V_89_89 = (MR_Integer) query__V_60_60;
#line 10558 "query.c"
                                      query__succeeded = (query__V_88_88 == query__V_89_89);
#line 75 "query.m"
                                    }
#line 75 "query.m"
                                }
#line 75 "query.m"
                              else
#line 75 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 75 "query.m"
                                  {
#line 75 "query.m"
                                    MR_Word query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                    MR_Word query__V_54_54;
#line 75 "query.m"
                                    MR_Integer query__V_90_90;
#line 75 "query.m"
                                    MR_Integer query__V_91_91;

#line 75 "query.m"
                                    query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 75 "query.m"
                                    if (query__succeeded)
#line 75 "query.m"
                                      {
#line 75 "query.m"
                                        query__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10587 "query.c"
                                        query__V_90_90 = (MR_Integer) query__V_53_53;
#line 10589 "query.c"
                                        query__V_91_91 = (MR_Integer) query__V_54_54;
#line 10591 "query.c"
                                        query__succeeded = (query__V_90_90 == query__V_91_91);
#line 75 "query.m"
                                      }
#line 75 "query.m"
                                  }
#line 75 "query.m"
                                else
#line 75 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 75 "query.m"
                                    {
#line 75 "query.m"
                                      MR_Word query__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                      MR_Word query__V_52_52;
#line 75 "query.m"
                                      MR_Integer query__V_92_92;
#line 75 "query.m"
                                      MR_Integer query__V_93_93;

#line 75 "query.m"
                                      query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 75 "query.m"
                                      if (query__succeeded)
#line 75 "query.m"
                                        {
#line 75 "query.m"
                                          query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10620 "query.c"
                                          query__V_92_92 = (MR_Integer) query__V_51_51;
#line 10622 "query.c"
                                          query__V_93_93 = (MR_Integer) query__V_52_52;
#line 10624 "query.c"
                                          query__succeeded = (query__V_92_92 == query__V_93_93);
#line 75 "query.m"
                                        }
#line 75 "query.m"
                                    }
#line 75 "query.m"
                                  else
#line 75 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 75 "query.m"
                                      {
#line 75 "query.m"
                                        MR_Word query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                        MR_Word query__V_50_50;
#line 75 "query.m"
                                        MR_Integer query__V_94_94;
#line 75 "query.m"
                                        MR_Integer query__V_95_95;

#line 75 "query.m"
                                        query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 75 "query.m"
                                        if (query__succeeded)
#line 75 "query.m"
                                          {
#line 75 "query.m"
                                            query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10653 "query.c"
                                            query__V_94_94 = (MR_Integer) query__V_49_49;
#line 10655 "query.c"
                                            query__V_95_95 = (MR_Integer) query__V_50_50;
#line 10657 "query.c"
                                            query__succeeded = (query__V_94_94 == query__V_95_95);
#line 75 "query.m"
                                          }
#line 75 "query.m"
                                      }
#line 75 "query.m"
                                    else
#line 75 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 75 "query.m"
                                        {
#line 75 "query.m"
                                          MR_String query__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                          MR_String query__V_34_34;

#line 75 "query.m"
                                          query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 75 "query.m"
                                          if (query__succeeded)
#line 75 "query.m"
                                            {
#line 75 "query.m"
                                              query__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10682 "query.c"
                                              query__succeeded = (strcmp(query__V_33_33, query__V_34_34) == 0);
#line 75 "query.m"
                                            }
#line 75 "query.m"
                                        }
#line 75 "query.m"
                                      else
#line 75 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 75 "query.m"
                                          {
#line 75 "query.m"
                                            MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                            MR_String query__V_36_36;

#line 75 "query.m"
                                            query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 75 "query.m"
                                            if (query__succeeded)
#line 75 "query.m"
                                              {
#line 75 "query.m"
                                                query__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10707 "query.c"
                                                query__succeeded = (strcmp(query__V_35_35, query__V_36_36) == 0);
#line 75 "query.m"
                                              }
#line 75 "query.m"
                                          }
#line 75 "query.m"
                                        else
#line 75 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 75 "query.m"
                                            {
#line 75 "query.m"
                                              MR_String query__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                              MR_String query__V_38_38;

#line 75 "query.m"
                                              query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 75 "query.m"
                                              if (query__succeeded)
#line 75 "query.m"
                                                {
#line 75 "query.m"
                                                  query__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10732 "query.c"
                                                  query__succeeded = (strcmp(query__V_37_37, query__V_38_38) == 0);
#line 75 "query.m"
                                                }
#line 75 "query.m"
                                            }
#line 75 "query.m"
                                          else
#line 75 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 75 "query.m"
                                              {
#line 75 "query.m"
                                                MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                                MR_Word query__V_20_20;
#line 75 "query.m"
                                                MR_Integer query__V_96_96;
#line 75 "query.m"
                                                MR_Integer query__V_97_97;

#line 75 "query.m"
                                                query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "query.m"
                                                if (query__succeeded)
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10761 "query.c"
                                                    query__V_96_96 = (MR_Integer) query__V_19_19;
#line 10763 "query.c"
                                                    query__V_97_97 = (MR_Integer) query__V_20_20;
#line 10765 "query.c"
                                                    query__succeeded = (query__V_96_96 == query__V_97_97);
#line 75 "query.m"
                                                  }
#line 75 "query.m"
                                              }
#line 75 "query.m"
                                            else
#line 75 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 75 "query.m"
                                                {
#line 75 "query.m"
                                                  MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                                  MR_Word query__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "query.m"
                                                  MR_Integer query__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 3)));
#line 75 "query.m"
                                                  MR_Integer query__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 4)));
#line 75 "query.m"
                                                  MR_Word query__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 5)));
#line 75 "query.m"
                                                  MR_Word query__V_26_26;
#line 75 "query.m"
                                                  MR_Word query__V_27_27;
#line 75 "query.m"
                                                  MR_Integer query__V_28_28;
#line 75 "query.m"
                                                  MR_Integer query__V_29_29;
#line 75 "query.m"
                                                  MR_Word query__V_30_30;
#line 75 "query.m"
                                                  MR_Integer query__V_98_98;
#line 75 "query.m"
                                                  MR_Integer query__V_99_99;

#line 75 "query.m"
                                                  query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "query.m"
                                                  if (query__succeeded)
#line 75 "query.m"
                                                    {
#line 75 "query.m"
                                                      query__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                      query__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "query.m"
                                                      query__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 3)));
#line 75 "query.m"
                                                      query__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 4)));
#line 75 "query.m"
                                                      query__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 5)));
#line 10818 "query.c"
                                                      query__succeeded = (query__V_22_22 == query__V_27_27);
#line 75 "query.m"
                                                      if (query__succeeded)
#line 75 "query.m"
                                                        {
#line 10824 "query.c"
                                                          query__succeeded = (query__V_23_23 == query__V_28_28);
#line 75 "query.m"
                                                          if (query__succeeded)
#line 75 "query.m"
                                                            {
#line 10830 "query.c"
                                                              query__succeeded = (query__V_24_24 == query__V_29_29);
#line 75 "query.m"
                                                              if (query__succeeded)
#line 75 "query.m"
                                                                {
#line 10836 "query.c"
                                                                  query__succeeded = (query__V_25_25 == query__V_30_30);
#line 75 "query.m"
                                                                  if (query__succeeded)
#line 75 "query.m"
                                                                    {
#line 10842 "query.c"
                                                                      query__V_98_98 = (MR_Integer) query__V_21_21;
#line 10844 "query.c"
                                                                      query__V_99_99 = (MR_Integer) query__V_26_26;
#line 10846 "query.c"
                                                                      query__succeeded = (query__V_98_98 == query__V_99_99);
#line 75 "query.m"
                                                                    }
#line 75 "query.m"
                                                                }
#line 75 "query.m"
                                                            }
#line 75 "query.m"
                                                        }
#line 75 "query.m"
                                                    }
#line 75 "query.m"
                                                }
#line 75 "query.m"
                                              else
#line 75 "query.m"
                                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    MR_Word query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                                    MR_Word query__V_48_48;
#line 75 "query.m"
                                                    MR_Integer query__V_100_100;
#line 75 "query.m"
                                                    MR_Integer query__V_101_101;

#line 75 "query.m"
                                                    query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 75 "query.m"
                                                    if (query__succeeded)
#line 75 "query.m"
                                                      {
#line 75 "query.m"
                                                        query__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 10883 "query.c"
                                                        query__V_100_100 = (MR_Integer) query__V_47_47;
#line 10885 "query.c"
                                                        query__V_101_101 = (MR_Integer) query__V_48_48;
#line 10887 "query.c"
                                                        query__succeeded = (query__V_100_100 == query__V_101_101);
#line 75 "query.m"
                                                      }
#line 75 "query.m"
                                                  }
#line 75 "query.m"
                                                else
#line 75 "query.m"
                                                  {
#line 75 "query.m"
                                                    MR_Word query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "query.m"
                                                    MR_Word query__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 75 "query.m"
                                                    MR_Word query__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "query.m"
                                                    MR_Word query__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 75 "query.m"
                                                    MR_Word query__V_43_43;
#line 75 "query.m"
                                                    MR_Word query__V_44_44;
#line 75 "query.m"
                                                    MR_Word query__V_45_45;
#line 75 "query.m"
                                                    MR_Word query__V_46_46;

#line 75 "query.m"
                                                    query__succeeded = ((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 75 "query.m"
                                                    if (query__succeeded)
#line 75 "query.m"
                                                      {
#line 75 "query.m"
                                                        query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "query.m"
                                                        query__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 75 "query.m"
                                                        query__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 75 "query.m"
                                                        query__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 10928 "query.c"
                                                        {
#line 10930 "query.c"
                                                          query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                                                        }
#line 75 "query.m"
                                                        if (query__succeeded)
#line 75 "query.m"
                                                          {
#line 10937 "query.c"
                                                            query__succeeded = (query__V_40_40 == query__V_44_44);
#line 75 "query.m"
                                                            if (query__succeeded)
#line 75 "query.m"
                                                              {
#line 10943 "query.c"
                                                                query__succeeded = (query__V_41_41 == query__V_45_45);
#line 75 "query.m"
                                                                if (query__succeeded)
#line 10947 "query.c"
                                                                  query__succeeded = (query__V_42_42 == query__V_46_46);
#line 75 "query.m"
                                                              }
#line 75 "query.m"
                                                          }
#line 75 "query.m"
                                                      }
#line 75 "query.m"
                                                  }
#line 75 "query.m"
    return query__succeeded;
#line 75 "query.m"
  }
#line 75 "query.m"
}

#line 256 "query.m"
void MR_CALL 
query____Compare____callseqs_fields_0_0(
#line 256 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 256 "query.m"
  MR_Word query__HeadVar__2_2,
#line 256 "query.m"
  MR_Word query__HeadVar__3_3)
#line 256 "query.m"
{
#line 256 "query.m"
  {
#line 256 "query.m"
    MR_bool query__succeeded;
#line 256 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 256 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 256 "query.m"
    {
#line 256 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 256 "query.m"
      return;
    }
#line 256 "query.m"
  }
#line 256 "query.m"
}

#line 256 "query.m"
MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0(
#line 256 "query.m"
  MR_Word query__HeadVar__2_1,
#line 256 "query.m"
  MR_Word query__HeadVar__2_2)
#line 256 "query.m"
{
#line 11005 "query.c"
  {
#line 11007 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11010 "query.c"
    return query__succeeded;
#line 11012 "query.c"
  }
#line 256 "query.m"
}

#line 156 "query.m"
void MR_CALL 
query____Compare____caller_groups_0_0(
#line 156 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 156 "query.m"
  MR_Word query__HeadVar__2_2,
#line 156 "query.m"
  MR_Word query__HeadVar__3_3)
#line 156 "query.m"
{
#line 156 "query.m"
  {
#line 156 "query.m"
    MR_bool query__succeeded;
#line 156 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 156 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 156 "query.m"
    {
#line 156 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 156 "query.m"
      return;
    }
#line 156 "query.m"
  }
#line 156 "query.m"
}

#line 156 "query.m"
MR_bool MR_CALL 
query____Unify____caller_groups_0_0(
#line 156 "query.m"
  MR_Word query__HeadVar__2_1,
#line 156 "query.m"
  MR_Word query__HeadVar__2_2)
#line 156 "query.m"
{
#line 11058 "query.c"
  {
#line 11060 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11063 "query.c"
    return query__succeeded;
#line 11065 "query.c"
  }
#line 156 "query.m"
}

#line 280 "query.m"
void MR_CALL 
query____Compare____box_tables_0_0(
#line 280 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 280 "query.m"
  MR_Word query__HeadVar__2_2,
#line 280 "query.m"
  MR_Word query__HeadVar__3_3)
#line 280 "query.m"
{
#line 280 "query.m"
  {
#line 280 "query.m"
    MR_bool query__succeeded;
#line 280 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 280 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 280 "query.m"
    {
#line 280 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 280 "query.m"
      return;
    }
#line 280 "query.m"
  }
#line 280 "query.m"
}

#line 280 "query.m"
MR_bool MR_CALL 
query____Unify____box_tables_0_0(
#line 280 "query.m"
  MR_Word query__HeadVar__2_1,
#line 280 "query.m"
  MR_Word query__HeadVar__2_2)
#line 280 "query.m"
{
#line 11111 "query.c"
  {
#line 11113 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11116 "query.c"
    return query__succeeded;
#line 11118 "query.c"
  }
#line 280 "query.m"
}

#line 261 "query.m"
void MR_CALL 
query____Compare____alloc_fields_0_0(
#line 261 "query.m"
  MR_Word * query__HeadVar__1_1,
#line 261 "query.m"
  MR_Word query__HeadVar__2_2,
#line 261 "query.m"
  MR_Word query__HeadVar__3_3)
#line 261 "query.m"
{
#line 261 "query.m"
  {
#line 261 "query.m"
    MR_bool query__succeeded;
#line 261 "query.m"
    MR_Integer query__Cast_HeadVar1_4 = (MR_Integer) query__HeadVar__2_2;
#line 261 "query.m"
    MR_Integer query__Cast_HeadVar2_5 = (MR_Integer) query__HeadVar__3_3;

#line 261 "query.m"
    {
#line 261 "query.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(query__HeadVar__1_1, query__Cast_HeadVar1_4, query__Cast_HeadVar2_5);
#line 261 "query.m"
      return;
    }
#line 261 "query.m"
  }
#line 261 "query.m"
}

#line 261 "query.m"
MR_bool MR_CALL 
query____Unify____alloc_fields_0_0(
#line 261 "query.m"
  MR_Word query__HeadVar__2_1,
#line 261 "query.m"
  MR_Word query__HeadVar__2_2)
#line 261 "query.m"
{
#line 11164 "query.c"
  {
#line 11166 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11169 "query.c"
    return query__succeeded;
#line 11171 "query.c"
  }
#line 261 "query.m"
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
    if ((query__Box_3 == (MR_Integer) 0))
#line 1294 "query.m"
      query__String_4 = (MR_String) "box";
#line 1294 "query.m"
    else
#line 1295 "query.m"
      query__String_4 = (MR_String) "nobox";
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
    if ((query__Scheme_3 == (MR_Integer) 0))
#line 1282 "query.m"
      query__String_4 = (MR_String) "cols";
#line 1282 "query.m"
    else
#line 1283 "query.m"
      query__String_4 = (MR_String) "none";
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
    if ((query__DevMode_3 == (MR_Integer) 1))
#line 1271 "query.m"
      query__String_4 = (MR_String) "nodev";
#line 1270 "query.m"
    else
#line 1270 "query.m"
      query__String_4 = (MR_String) "dev";
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
    if ((strcmp(query__HeadVar__1_1, (MR_String) "hhh") == 0))
#line 1244 "query.m"
      {
#line 1245 "query.m"
        *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[8];
#line 1244 "query.m"
        query__succeeded = MR_TRUE;
#line 1244 "query.m"
      }
#line 1244 "query.m"
    else
#line 1244 "query.m"
      if ((strcmp(query__HeadVar__1_1, (MR_String) "hhs") == 0))
#line 1246 "query.m"
        {
#line 1247 "query.m"
          *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[9];
#line 1246 "query.m"
          query__succeeded = MR_TRUE;
#line 1246 "query.m"
        }
#line 1244 "query.m"
      else
#line 1244 "query.m"
        if ((strcmp(query__HeadVar__1_1, (MR_String) "hsh") == 0))
#line 1248 "query.m"
          {
#line 1249 "query.m"
            *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[10];
#line 1248 "query.m"
            query__succeeded = MR_TRUE;
#line 1248 "query.m"
          }
#line 1244 "query.m"
        else
#line 1244 "query.m"
          if ((strcmp(query__HeadVar__1_1, (MR_String) "hss") == 0))
#line 1250 "query.m"
            {
#line 1251 "query.m"
              *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[11];
#line 1250 "query.m"
              query__succeeded = MR_TRUE;
#line 1250 "query.m"
            }
#line 1244 "query.m"
          else
#line 1244 "query.m"
            if ((strcmp(query__HeadVar__1_1, (MR_String) "shh") == 0))
#line 1252 "query.m"
              {
#line 1253 "query.m"
                *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[12];
#line 1252 "query.m"
                query__succeeded = MR_TRUE;
#line 1252 "query.m"
              }
#line 1244 "query.m"
            else
#line 1244 "query.m"
              if ((strcmp(query__HeadVar__1_1, (MR_String) "shs") == 0))
#line 1254 "query.m"
                {
#line 1255 "query.m"
                  *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[13];
#line 1254 "query.m"
                  query__succeeded = MR_TRUE;
#line 1254 "query.m"
                }
#line 1244 "query.m"
              else
#line 1244 "query.m"
                if ((strcmp(query__HeadVar__1_1, (MR_String) "ssh") == 0))
#line 1256 "query.m"
                  {
#line 1257 "query.m"
                    *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[14];
#line 1256 "query.m"
                    query__succeeded = MR_TRUE;
#line 1256 "query.m"
                  }
#line 1244 "query.m"
                else
#line 1244 "query.m"
                  if ((strcmp(query__HeadVar__1_1, (MR_String) "sss") == 0))
#line 1258 "query.m"
                    {
#line 1259 "query.m"
                      *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[15];
#line 1258 "query.m"
                      query__succeeded = MR_TRUE;
#line 1258 "query.m"
                    }
#line 1244 "query.m"
                  else
#line 1244 "query.m"
                    query__succeeded = MR_FALSE;
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
    if ((query__V_29_29 == (MR_Integer) 0))
#line 1244 "query.m"
      if ((query__V_30_30 == (MR_Integer) 0))
#line 1244 "query.m"
        if ((query__V_31_31 == (MR_Integer) 0))
#line 1244 "query.m"
          query__String_4 = (MR_String) "hhh";
#line 1244 "query.m"
        else
#line 1252 "query.m"
          query__String_4 = (MR_String) "shh";
#line 1244 "query.m"
      else
#line 1244 "query.m"
        if ((query__V_31_31 == (MR_Integer) 0))
#line 1248 "query.m"
          query__String_4 = (MR_String) "hsh";
#line 1244 "query.m"
        else
#line 1256 "query.m"
          query__String_4 = (MR_String) "ssh";
#line 1244 "query.m"
    else
#line 1244 "query.m"
      if ((query__V_30_30 == (MR_Integer) 0))
#line 1244 "query.m"
        if ((query__V_31_31 == (MR_Integer) 0))
#line 1246 "query.m"
          query__String_4 = (MR_String) "hhs";
#line 1244 "query.m"
        else
#line 1254 "query.m"
          query__String_4 = (MR_String) "shs";
#line 1244 "query.m"
      else
#line 1244 "query.m"
        if ((query__V_31_31 == (MR_Integer) 0))
#line 1250 "query.m"
          query__String_4 = (MR_String) "hss";
#line 1244 "query.m"
        else
#line 1258 "query.m"
          query__String_4 = (MR_String) "sss";
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
    if ((query__HeadVar__1_1 == (MR_Integer) 0))
#line 1223 "query.m"
      query__HeadVar__2_2 = (MR_String) "no";
#line 1223 "query.m"
    else
#line 1223 "query.m"
      if ((query__HeadVar__1_1 == (MR_Integer) 1))
#line 1224 "query.m"
        query__HeadVar__2_2 = (MR_String) "mi";
#line 1223 "query.m"
      else
#line 1225 "query.m"
        query__HeadVar__2_2 = (MR_String) "th";
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
    if ((query__Contour_3 == (MR_Integer) 0))
#line 1218 "query.m"
      query__String_4 = (MR_String) "ac";
#line 1218 "query.m"
    else
#line 1219 "query.m"
      query__String_4 = (MR_String) "nc";
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
    if ((query__Scope_3 == (MR_Integer) 1))
#line 1207 "query.m"
      query__String_4 = (MR_String) "oa";
#line 1206 "query.m"
    else
#line 1206 "query.m"
      query__String_4 = (MR_String) "pc";
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
    if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "query.m"
      query__HeadVar__2_2 = (MR_String) "context";
#line 1163 "query.m"
    else
#line 1163 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1164 "query.m"
        query__HeadVar__2_2 = (MR_String) "name";
#line 1163 "query.m"
      else
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
          if ((query__CostKind_3 == (MR_Integer) 4))
#line 1090 "query.m"
            query__V_11_11 = (MR_String) "allocs";
#line 1086 "query.m"
          else
#line 1086 "query.m"
            if ((query__CostKind_3 == (MR_Integer) 0))
#line 1086 "query.m"
              query__V_11_11 = (MR_String) "calls";
#line 1086 "query.m"
            else
#line 1086 "query.m"
              if ((query__CostKind_3 == (MR_Integer) 3))
#line 1089 "query.m"
                query__V_11_11 = (MR_String) "callseqs";
#line 1086 "query.m"
              else
#line 1086 "query.m"
                if ((query__CostKind_3 == (MR_Integer) 1))
#line 1087 "query.m"
                  query__V_11_11 = (MR_String) "redos";
#line 1086 "query.m"
                else
#line 1086 "query.m"
                  if ((query__CostKind_3 == (MR_Integer) 2))
#line 1088 "query.m"
                    query__V_11_11 = (MR_String) "time";
#line 1086 "query.m"
                  else
#line 1091 "query.m"
                    query__V_11_11 = (MR_String) "words";
#line 1169 "query.m"
          {
#line 1169 "query.m"
            query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1102 "query.m"
          if ((query__InclDesc_4 == (MR_Integer) 0))
#line 1102 "query.m"
            query__V_16_16 = (MR_String) "self";
#line 1102 "query.m"
          else
#line 1103 "query.m"
            query__V_16_16 = (MR_String) "both";
#line 1171 "query.m"
          {
#line 1171 "query.m"
            query__V_18_18 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
          }
#line 1206 "query.m"
          if ((query__Scope_5 == (MR_Integer) 1))
#line 1207 "query.m"
            query__V_20_20 = (MR_String) "oa";
#line 1206 "query.m"
          else
#line 1206 "query.m"
            query__V_20_20 = (MR_String) "pc";
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
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "cost", query__V_7_7);
          }
#line 1165 "query.m"
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
    if ((query__HeadVar__1_1 == (MR_Integer) 0))
#line 1151 "query.m"
      query__HeadVar__2_2 = (MR_String) "mqa";
#line 1151 "query.m"
    else
#line 1151 "query.m"
      if ((query__HeadVar__1_1 == (MR_Integer) 2))
#line 1153 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqn";
#line 1151 "query.m"
      else
#line 1152 "query.m"
        query__HeadVar__2_2 = (MR_String) "mqwd";
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
    if ((query__HeadVar__1_1 == (MR_Integer) 1))
#line 1141 "query.m"
      query__HeadVar__2_2 = (MR_String) "nosum";
#line 1140 "query.m"
    else
#line 1140 "query.m"
      query__HeadVar__2_2 = (MR_String) "sum";
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
    if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1107 "query.m"
      {
#line 1107 "query.m"
        MR_Integer query__Lo_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "query.m"
        MR_Integer query__Hi_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__1_1, (MR_Integer) 1)));
#line 1107 "query.m"
        MR_String query__V_24_24;
#line 1107 "query.m"
        MR_String query__V_25_25;
#line 1107 "query.m"
        MR_String query__V_26_26;
#line 1107 "query.m"
        MR_String query__V_27_27;

#line 12481 "query.c"
        {
#line 12483 "query.c"
          query__V_24_24 = mercury__string__int_to_string_1_f_0(query__Hi_4);
        }
#line 12486 "query.c"
        {
#line 12488 "query.c"
          query__V_25_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
        }
#line 12491 "query.c"
        {
#line 12493 "query.c"
          query__V_26_26 = mercury__string__f_43_43_2_f_0(query__V_25_25, query__V_24_24);
        }
#line 12496 "query.c"
        {
#line 12498 "query.c"
          query__V_27_27 = mercury__string__int_to_string_1_f_0(query__Lo_3);
        }
#line 12501 "query.c"
        {
#line 12503 "query.c"
          return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_27_27, query__V_26_26);
        }
#line 1107 "query.m"
      }
#line 1107 "query.m"
    else
#line 1107 "query.m"
      if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1109 "query.m"
        {
#line 1109 "query.m"
          MR_Float query__Threshold_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1109 "query.m"
          MR_Word query__V_16_16;
#line 1109 "query.m"
          MR_Word query__V_17_17;

#line 1110 "query.m"
          {
#line 1110 "query.m"
            query__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1110 "query.m"
            MR_hl_field(MR_mktag(0), query__V_17_17, 0) = MR_box_float(query__Threshold_14);
#line 1110 "query.m"
          }
#line 1110 "query.m"
          {
#line 1110 "query.m"
            query__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "query.m"
            MR_hl_field(MR_mktag(1), query__V_16_16, 0) = ((MR_Box) (query__V_17_17));
#line 1110 "query.m"
            MR_hl_field(MR_mktag(1), query__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1110 "query.m"
          }
#line 1110 "query.m"
          {
#line 1110 "query.m"
            return query__HeadVar__2_2 = mercury__string__format_2_f_0((MR_String) "p%g", query__V_16_16);
          }
#line 1109 "query.m"
        }
#line 1107 "query.m"
      else
#line 1111 "query.m"
        {
#line 1111 "query.m"
          MR_Float query__Value_19 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__1_1, (MR_Integer) 0)));
#line 1111 "query.m"
          MR_Word query__V_21_21;
#line 1111 "query.m"
          MR_Word query__V_22_22;

#line 1112 "query.m"
          {
#line 1112 "query.m"
            query__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "query.m"
            MR_hl_field(MR_mktag(0), query__V_22_22, 0) = MR_box_float(query__Value_19);
#line 1112 "query.m"
          }
#line 1112 "query.m"
          {
#line 1112 "query.m"
            query__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "query.m"
            MR_hl_field(MR_mktag(1), query__V_21_21, 0) = ((MR_Box) (query__V_22_22));
#line 1112 "query.m"
            MR_hl_field(MR_mktag(1), query__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1112 "query.m"
          }
#line 1112 "query.m"
          {
#line 1112 "query.m"
            return query__HeadVar__2_2 = mercury__string__format_2_f_0((MR_String) "v%g", query__V_21_21);
          }
#line 1111 "query.m"
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
    if ((query__InclDesc_3 == (MR_Integer) 0))
#line 1102 "query.m"
      query__String_4 = (MR_String) "self";
#line 1102 "query.m"
    else
#line 1103 "query.m"
      query__String_4 = (MR_String) "both";
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
    if ((strcmp(query__HeadVar__1_1, (MR_String) "time") == 0))
#line 1088 "query.m"
      {
#line 1088 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 2;
#line 1088 "query.m"
        query__succeeded = MR_TRUE;
#line 1088 "query.m"
      }
#line 1086 "query.m"
    else
#line 1086 "query.m"
      if ((strcmp(query__HeadVar__1_1, (MR_String) "calls") == 0))
#line 1086 "query.m"
        {
#line 1086 "query.m"
          *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1086 "query.m"
          query__succeeded = MR_TRUE;
#line 1086 "query.m"
        }
#line 1086 "query.m"
      else
#line 1086 "query.m"
        if ((strcmp(query__HeadVar__1_1, (MR_String) "redos") == 0))
#line 1087 "query.m"
          {
#line 1087 "query.m"
            *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1087 "query.m"
            query__succeeded = MR_TRUE;
#line 1087 "query.m"
          }
#line 1086 "query.m"
        else
#line 1086 "query.m"
          if ((strcmp(query__HeadVar__1_1, (MR_String) "words") == 0))
#line 1091 "query.m"
            {
#line 1091 "query.m"
              *query__HeadVar__2_2 = (MR_Integer) 5;
#line 1091 "query.m"
              query__succeeded = MR_TRUE;
#line 1091 "query.m"
            }
#line 1086 "query.m"
          else
#line 1086 "query.m"
            if ((strcmp(query__HeadVar__1_1, (MR_String) "allocs") == 0))
#line 1090 "query.m"
              {
#line 1090 "query.m"
                *query__HeadVar__2_2 = (MR_Integer) 4;
#line 1090 "query.m"
                query__succeeded = MR_TRUE;
#line 1090 "query.m"
              }
#line 1086 "query.m"
            else
#line 1086 "query.m"
              if ((strcmp(query__HeadVar__1_1, (MR_String) "callseqs") == 0))
#line 1089 "query.m"
                {
#line 1089 "query.m"
                  *query__HeadVar__2_2 = (MR_Integer) 3;
#line 1089 "query.m"
                  query__succeeded = MR_TRUE;
#line 1089 "query.m"
                }
#line 1086 "query.m"
              else
#line 1086 "query.m"
                query__succeeded = MR_FALSE;
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
    MR_String query__String_4;

#line 1086 "query.m"
    if ((query__CostKind_3 == (MR_Integer) 4))
#line 1090 "query.m"
      query__String_4 = (MR_String) "allocs";
#line 1086 "query.m"
    else
#line 1086 "query.m"
      if ((query__CostKind_3 == (MR_Integer) 0))
#line 1086 "query.m"
        query__String_4 = (MR_String) "calls";
#line 1086 "query.m"
      else
#line 1086 "query.m"
        if ((query__CostKind_3 == (MR_Integer) 3))
#line 1089 "query.m"
          query__String_4 = (MR_String) "callseqs";
#line 1086 "query.m"
        else
#line 1086 "query.m"
          if ((query__CostKind_3 == (MR_Integer) 1))
#line 1087 "query.m"
            query__String_4 = (MR_String) "redos";
#line 1086 "query.m"
          else
#line 1086 "query.m"
            if ((query__CostKind_3 == (MR_Integer) 2))
#line 1088 "query.m"
              query__String_4 = (MR_String) "time";
#line 1086 "query.m"
            else
#line 1091 "query.m"
              query__String_4 = (MR_String) "words";
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
    if ((strcmp(query__HeadVar__1_1, (MR_String) "cl") == 0))
#line 1075 "query.m"
      {
#line 1075 "query.m"
        *query__HeadVar__2_2 = (MR_Integer) 3;
#line 1075 "query.m"
        query__succeeded = MR_TRUE;
#line 1075 "query.m"
      }
#line 1072 "query.m"
    else
#line 1072 "query.m"
      if ((strcmp(query__HeadVar__1_1, (MR_String) "cs") == 0))
#line 1072 "query.m"
        {
#line 1072 "query.m"
          *query__HeadVar__2_2 = (MR_Integer) 0;
#line 1072 "query.m"
          query__succeeded = MR_TRUE;
#line 1072 "query.m"
        }
#line 1072 "query.m"
      else
#line 1072 "query.m"
        if ((strcmp(query__HeadVar__1_1, (MR_String) "mo") == 0))
#line 1074 "query.m"
          {
#line 1074 "query.m"
            *query__HeadVar__2_2 = (MR_Integer) 2;
#line 1074 "query.m"
            query__succeeded = MR_TRUE;
#line 1074 "query.m"
          }
#line 1072 "query.m"
        else
#line 1072 "query.m"
          if ((strcmp(query__HeadVar__1_1, (MR_String) "pr") == 0))
#line 1073 "query.m"
            {
#line 1073 "query.m"
              *query__HeadVar__2_2 = (MR_Integer) 1;
#line 1073 "query.m"
              query__succeeded = MR_TRUE;
#line 1073 "query.m"
            }
#line 1072 "query.m"
          else
#line 1072 "query.m"
            query__succeeded = MR_FALSE;
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
    MR_String query__String_4;

#line 1072 "query.m"
    if ((query__CallerGroups_3 == (MR_Integer) 0))
#line 1072 "query.m"
      query__String_4 = (MR_String) "cs";
#line 1072 "query.m"
    else
#line 1072 "query.m"
      if ((query__CallerGroups_3 == (MR_Integer) 3))
#line 1075 "query.m"
        query__String_4 = (MR_String) "cl";
#line 1072 "query.m"
      else
#line 1072 "query.m"
        if ((query__CallerGroups_3 == (MR_Integer) 2))
#line 1074 "query.m"
          query__String_4 = (MR_String) "mo";
#line 1072 "query.m"
        else
#line 1073 "query.m"
          query__String_4 = (MR_String) "pr";
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
    if ((query__Port_3 == (MR_Integer) 0))
#line 973 "query.m"
      query__V_8_8 = (MR_String) "_";
#line 973 "query.m"
    else
#line 974 "query.m"
      query__V_8_8 = (MR_String) "p";
#line 1037 "query.m"
    {
#line 1037 "query.m"
      query__V_10_10 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 985 "query.m"
    if ((query__Time_4 == (MR_Integer) 0))
#line 985 "query.m"
      query__V_13_13 = (MR_String) "_";
#line 985 "query.m"
    else
#line 985 "query.m"
      if ((query__Time_4 == (MR_Integer) 1))
#line 986 "query.m"
        query__V_13_13 = (MR_String) "q";
#line 985 "query.m"
      else
#line 985 "query.m"
        if ((query__Time_4 == (MR_Integer) 3))
#line 988 "query.m"
          query__V_13_13 = (MR_String) "qt";
#line 985 "query.m"
        else
#line 985 "query.m"
          if ((query__Time_4 == (MR_Integer) 5))
#line 990 "query.m"
            query__V_13_13 = (MR_String) "qtp";
#line 985 "query.m"
          else
#line 985 "query.m"
            if ((query__Time_4 == (MR_Integer) 2))
#line 987 "query.m"
              query__V_13_13 = (MR_String) "t";
#line 985 "query.m"
            else
#line 989 "query.m"
              query__V_13_13 = (MR_String) "tp";
#line 1039 "query.m"
    {
#line 1039 "query.m"
      query__V_15_15 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1001 "query.m"
    if ((query__CallSeqs_5 == (MR_Integer) 1))
#line 1002 "query.m"
      query__V_18_18 = (MR_String) "s";
#line 1001 "query.m"
    else
#line 1001 "query.m"
      if ((query__CallSeqs_5 == (MR_Integer) 2))
#line 1003 "query.m"
        query__V_18_18 = (MR_String) "S";
#line 1001 "query.m"
      else
#line 1001 "query.m"
        query__V_18_18 = (MR_String) "_";
#line 1041 "query.m"
    {
#line 1041 "query.m"
      query__V_20_20 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1014 "query.m"
    if ((query__Allocs_6 == (MR_Integer) 1))
#line 1015 "query.m"
      query__V_23_23 = (MR_String) "a";
#line 1014 "query.m"
    else
#line 1014 "query.m"
      if ((query__Allocs_6 == (MR_Integer) 2))
#line 1016 "query.m"
        query__V_23_23 = (MR_String) "A";
#line 1014 "query.m"
      else
#line 1014 "query.m"
        query__V_23_23 = (MR_String) "_";
#line 1043 "query.m"
    {
#line 1043 "query.m"
      query__V_25_25 = mercury__string__char_to_string_1_f_0((MR_Char) 45);
    }
#line 1027 "query.m"
    if ((query__Memory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1027 "query.m"
      query__V_27_27 = (MR_String) "_";
#line 1027 "query.m"
    else
#line 1027 "query.m"
      if (((MR_tag((MR_Word) query__Memory_7)) == (MR_mktag((MR_Integer) 1))))
#line 1027 "query.m"
        {
#line 1027 "query.m"
          MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Memory_7, (MR_Integer) 0)));

#line 1027 "query.m"
          if ((query__V_42_42 == (MR_Integer) 1))
#line 1028 "query.m"
            query__V_27_27 = (MR_String) "b";
#line 1027 "query.m"
          else
#line 1029 "query.m"
            query__V_27_27 = (MR_String) "w";
#line 1027 "query.m"
        }
#line 1027 "query.m"
      else
#line 1027 "query.m"
        {
#line 1027 "query.m"
          MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Memory_7, (MR_Integer) 0)));

#line 1027 "query.m"
          if ((query__V_43_43 == (MR_Integer) 1))
#line 1030 "query.m"
            query__V_27_27 = (MR_String) "B";
#line 1027 "query.m"
          else
#line 1031 "query.m"
            query__V_27_27 = (MR_String) "W";
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
      return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_8_8, query__V_9_9);
    }
#line 1035 "query.m"
    return query__HeadVar__2_2;
#line 1035 "query.m"
  }
#line 1033 "query.m"
}

#line 666 "query.m"
static MR_String MR_CALL 
query__preferences_to_string_1_f_0(
#line 666 "query.m"
  MR_Word query__Pref_3)
#line 666 "query.m"
{
#line 668 "query.m"
  {
#line 668 "query.m"
    MR_bool query__succeeded;
#line 668 "query.m"
    MR_String query__PrefStr_4;
#line 668 "query.m"
    MR_Word query__Fields_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 0)));
#line 668 "query.m"
    MR_Word query__Box_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 668 "query.m"
    MR_Word query__Colour_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "query.m"
    MR_Word query__MaybeAncestorLimit_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 2)));
#line 668 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 3)));
#line 668 "query.m"
    MR_Word query__SummarizeHoCallSites_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 4)));
#line 668 "query.m"
    MR_Word query__Order_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 5)));
#line 668 "query.m"
    MR_Word query__Contour_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 668 "query.m"
    MR_Word query__Time_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 668 "query.m"
    MR_Word query__ModuleQual_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 668 "query.m"
    MR_Word query__InactiveItems_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 7)));
#line 668 "query.m"
    MR_Word query__DeveloperMode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Pref_3, (MR_Integer) 8)));
#line 668 "query.m"
    MR_String query__MaybeAncestorLimitStr_18;
#line 668 "query.m"
    MR_String query__V_26_26;
#line 668 "query.m"
    MR_Char query__V_29_29;
#line 668 "query.m"
    MR_String query__V_32_32;
#line 668 "query.m"
    MR_Char query__V_35_35;
#line 668 "query.m"
    MR_String query__V_38_38;
#line 668 "query.m"
    MR_Char query__V_41_41;
#line 668 "query.m"
    MR_Char query__V_46_46;
#line 668 "query.m"
    MR_Char query__V_51_51;
#line 668 "query.m"
    MR_String query__V_54_54;
#line 668 "query.m"
    MR_Char query__V_57_57;
#line 668 "query.m"
    MR_String query__V_60_60;
#line 668 "query.m"
    MR_Char query__V_63_63;
#line 668 "query.m"
    MR_String query__V_66_66;
#line 668 "query.m"
    MR_Char query__V_69_69;
#line 668 "query.m"
    MR_String query__V_72_72;
#line 668 "query.m"
    MR_Char query__V_75_75;
#line 668 "query.m"
    MR_String query__V_78_78;
#line 668 "query.m"
    MR_Char query__V_81_81;
#line 668 "query.m"
    MR_String query__V_84_84;
#line 668 "query.m"
    MR_Char query__V_87_87;
#line 668 "query.m"
    MR_String query__V_90_90;
#line 668 "query.m"
    MR_String query__V_92_92;
#line 668 "query.m"
    MR_String query__V_93_93;
#line 668 "query.m"
    MR_String query__V_94_94;
#line 668 "query.m"
    MR_String query__V_95_95;
#line 668 "query.m"
    MR_String query__V_96_96;
#line 668 "query.m"
    MR_String query__V_97_97;
#line 668 "query.m"
    MR_String query__V_98_98;
#line 668 "query.m"
    MR_String query__V_99_99;
#line 668 "query.m"
    MR_String query__V_100_100;
#line 668 "query.m"
    MR_String query__V_101_101;
#line 668 "query.m"
    MR_String query__V_102_102;
#line 668 "query.m"
    MR_String query__V_103_103;
#line 668 "query.m"
    MR_String query__V_104_104;
#line 668 "query.m"
    MR_String query__V_105_105;
#line 668 "query.m"
    MR_String query__V_106_106;
#line 668 "query.m"
    MR_String query__V_107_107;
#line 668 "query.m"
    MR_String query__V_108_108;
#line 668 "query.m"
    MR_String query__V_109_109;
#line 668 "query.m"
    MR_String query__V_110_110;
#line 668 "query.m"
    MR_String query__V_111_111;
#line 668 "query.m"
    MR_String query__V_112_112;
#line 668 "query.m"
    MR_String query__V_113_113;
#line 668 "query.m"
    MR_String query__V_114_114;
#line 668 "query.m"
    MR_String query__V_115_115;
#line 668 "query.m"
    MR_String query__V_116_116;
#line 668 "query.m"
    MR_String query__V_117_117;
#line 668 "query.m"
    MR_String query__V_118_118;
#line 668 "query.m"
    MR_String query__V_119_119;
#line 668 "query.m"
    MR_String query__V_120_120;
#line 668 "query.m"
    MR_String query__V_121_121;
#line 668 "query.m"
    MR_String query__V_122_122;
#line 668 "query.m"
    MR_String query__V_123_123;
#line 668 "query.m"
    MR_String query__V_124_124;

#line 676 "query.m"
    if ((query__MaybeAncestorLimit_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 678 "query.m"
      query__MaybeAncestorLimitStr_18 = (MR_String) "no";
#line 676 "query.m"
    else
#line 673 "query.m"
      {
#line 673 "query.m"
        MR_Integer query__AncestorLimit_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_8, (MR_Integer) 0)));

#line 13315 "query.c"
        {
#line 13317 "query.c"
          query__MaybeAncestorLimitStr_18 = mercury__string__int_to_string_1_f_0(query__AncestorLimit_17);
        }
#line 673 "query.m"
      }
#line 681 "query.m"
    {
#line 681 "query.m"
      query__V_26_26 = query__fields_to_string_1_f_0(query__Fields_5);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      query__V_29_29 = query__pref_separator_char_0_f_0();
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      query__V_32_32 = query__box_to_string_1_f_0(query__Box_6);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      query__V_35_35 = query__pref_separator_char_0_f_0();
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      query__V_38_38 = query__colour_scheme_to_string_1_f_0(query__Colour_7);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      query__V_41_41 = query__pref_separator_char_0_f_0();
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      query__V_46_46 = query__pref_separator_char_0_f_0();
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_51_51 = query__pref_separator_char_0_f_0();
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      query__V_54_54 = query__summarize_to_string_1_f_0(query__SummarizeHoCallSites_10);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_57_57 = query__pref_separator_char_0_f_0();
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      query__V_60_60 = query__order_criteria_to_string_1_f_0(query__Order_11);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_63_63 = query__pref_separator_char_0_f_0();
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      query__V_66_66 = query__contour_exclusion_to_string_1_f_0(query__Contour_12);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_69_69 = query__pref_separator_char_0_f_0();
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      query__V_72_72 = query__time_format_to_string_1_f_0(query__Time_13);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_75_75 = query__pref_separator_char_0_f_0();
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      query__V_78_78 = query__module_qual_to_string_1_f_0(query__ModuleQual_14);
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      query__V_81_81 = query__pref_separator_char_0_f_0();
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      query__V_84_84 = query__inactive_items_to_string_1_f_0(query__InactiveItems_15);
    }
#line 692 "query.m"
    {
#line 692 "query.m"
      query__V_87_87 = query__pref_separator_char_0_f_0();
    }
#line 692 "query.m"
    {
#line 692 "query.m"
      query__V_90_90 = query__developer_mode_to_string_1_f_0(query__DeveloperMode_16);
    }
#line 13427 "query.c"
    {
#line 13429 "query.c"
      query__V_92_92 = mercury__string__char_to_string_1_f_0(query__V_87_87);
    }
#line 13432 "query.c"
    {
#line 13434 "query.c"
      query__V_93_93 = mercury__string__f_43_43_2_f_0(query__V_92_92, query__V_90_90);
    }
#line 13437 "query.c"
    {
#line 13439 "query.c"
      query__V_94_94 = mercury__string__f_43_43_2_f_0(query__V_84_84, query__V_93_93);
    }
#line 13442 "query.c"
    {
#line 13444 "query.c"
      query__V_95_95 = mercury__string__char_to_string_1_f_0(query__V_81_81);
    }
#line 13447 "query.c"
    {
#line 13449 "query.c"
      query__V_96_96 = mercury__string__f_43_43_2_f_0(query__V_95_95, query__V_94_94);
    }
#line 13452 "query.c"
    {
#line 13454 "query.c"
      query__V_97_97 = mercury__string__f_43_43_2_f_0(query__V_78_78, query__V_96_96);
    }
#line 13457 "query.c"
    {
#line 13459 "query.c"
      query__V_98_98 = mercury__string__char_to_string_1_f_0(query__V_75_75);
    }
#line 13462 "query.c"
    {
#line 13464 "query.c"
      query__V_99_99 = mercury__string__f_43_43_2_f_0(query__V_98_98, query__V_97_97);
    }
#line 13467 "query.c"
    {
#line 13469 "query.c"
      query__V_100_100 = mercury__string__f_43_43_2_f_0(query__V_72_72, query__V_99_99);
    }
#line 13472 "query.c"
    {
#line 13474 "query.c"
      query__V_101_101 = mercury__string__char_to_string_1_f_0(query__V_69_69);
    }
#line 13477 "query.c"
    {
#line 13479 "query.c"
      query__V_102_102 = mercury__string__f_43_43_2_f_0(query__V_101_101, query__V_100_100);
    }
#line 13482 "query.c"
    {
#line 13484 "query.c"
      query__V_103_103 = mercury__string__f_43_43_2_f_0(query__V_66_66, query__V_102_102);
    }
#line 13487 "query.c"
    {
#line 13489 "query.c"
      query__V_104_104 = mercury__string__char_to_string_1_f_0(query__V_63_63);
    }
#line 13492 "query.c"
    {
#line 13494 "query.c"
      query__V_105_105 = mercury__string__f_43_43_2_f_0(query__V_104_104, query__V_103_103);
    }
#line 13497 "query.c"
    {
#line 13499 "query.c"
      query__V_106_106 = mercury__string__f_43_43_2_f_0(query__V_60_60, query__V_105_105);
    }
#line 13502 "query.c"
    {
#line 13504 "query.c"
      query__V_107_107 = mercury__string__char_to_string_1_f_0(query__V_57_57);
    }
#line 13507 "query.c"
    {
#line 13509 "query.c"
      query__V_108_108 = mercury__string__f_43_43_2_f_0(query__V_107_107, query__V_106_106);
    }
#line 13512 "query.c"
    {
#line 13514 "query.c"
      query__V_109_109 = mercury__string__f_43_43_2_f_0(query__V_54_54, query__V_108_108);
    }
#line 13517 "query.c"
    {
#line 13519 "query.c"
      query__V_110_110 = mercury__string__char_to_string_1_f_0(query__V_51_51);
    }
#line 13522 "query.c"
    {
#line 13524 "query.c"
      query__V_111_111 = mercury__string__f_43_43_2_f_0(query__V_110_110, query__V_109_109);
    }
#line 13527 "query.c"
    {
#line 13529 "query.c"
      query__V_112_112 = mercury__string__int_to_string_1_f_0(query__ProcStaticsPerRecTypeLimit_9);
    }
#line 13532 "query.c"
    {
#line 13534 "query.c"
      query__V_113_113 = mercury__string__f_43_43_2_f_0(query__V_112_112, query__V_111_111);
    }
#line 13537 "query.c"
    {
#line 13539 "query.c"
      query__V_114_114 = mercury__string__char_to_string_1_f_0(query__V_46_46);
    }
#line 13542 "query.c"
    {
#line 13544 "query.c"
      query__V_115_115 = mercury__string__f_43_43_2_f_0(query__V_114_114, query__V_113_113);
    }
#line 13547 "query.c"
    {
#line 13549 "query.c"
      query__V_116_116 = mercury__string__f_43_43_2_f_0(query__MaybeAncestorLimitStr_18, query__V_115_115);
    }
#line 13552 "query.c"
    {
#line 13554 "query.c"
      query__V_117_117 = mercury__string__char_to_string_1_f_0(query__V_41_41);
    }
#line 13557 "query.c"
    {
#line 13559 "query.c"
      query__V_118_118 = mercury__string__f_43_43_2_f_0(query__V_117_117, query__V_116_116);
    }
#line 13562 "query.c"
    {
#line 13564 "query.c"
      query__V_119_119 = mercury__string__f_43_43_2_f_0(query__V_38_38, query__V_118_118);
    }
#line 13567 "query.c"
    {
#line 13569 "query.c"
      query__V_120_120 = mercury__string__char_to_string_1_f_0(query__V_35_35);
    }
#line 13572 "query.c"
    {
#line 13574 "query.c"
      query__V_121_121 = mercury__string__f_43_43_2_f_0(query__V_120_120, query__V_119_119);
    }
#line 13577 "query.c"
    {
#line 13579 "query.c"
      query__V_122_122 = mercury__string__f_43_43_2_f_0(query__V_32_32, query__V_121_121);
    }
#line 13582 "query.c"
    {
#line 13584 "query.c"
      query__V_123_123 = mercury__string__char_to_string_1_f_0(query__V_29_29);
    }
#line 13587 "query.c"
    {
#line 13589 "query.c"
      query__V_124_124 = mercury__string__f_43_43_2_f_0(query__V_123_123, query__V_122_122);
    }
#line 13592 "query.c"
    {
#line 13594 "query.c"
      return query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_26_26, query__V_124_124);
    }
#line 668 "query.m"
    return query__PrefStr_4;
#line 668 "query.m"
  }
#line 666 "query.m"
}

#line 535 "query.m"
static MR_String MR_CALL 
query__cmd_to_string_1_f_0(
#line 535 "query.m"
  MR_Word query__Cmd_3)
#line 535 "query.m"
{
#line 539 "query.m"
  {
#line 539 "query.m"
    MR_bool query__succeeded;
#line 539 "query.m"
    MR_String query__CmdStr_4;

#line 539 "query.m"
    if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 550 "query.m"
      {
#line 550 "query.m"
        return query__CmdStr_4 = query__cmd_str_menu_0_f_0();
      }
#line 539 "query.m"
    else
#line 539 "query.m"
      if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 596 "query.m"
        {
#line 596 "query.m"
          return query__CmdStr_4 = query__cmd_str_program_modules_0_f_0();
        }
#line 539 "query.m"
      else
#line 539 "query.m"
        if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 540 "query.m"
          {
#line 540 "query.m"
            return query__CmdStr_4 = query__cmd_str_quit_0_f_0();
          }
#line 539 "query.m"
        else
#line 539 "query.m"
          if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 575 "query.m"
            {
#line 575 "query.m"
              return query__CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
            }
#line 539 "query.m"
          else
#line 539 "query.m"
            if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 543 "query.m"
              {
#line 543 "query.m"
                return query__CmdStr_4 = query__cmd_str_restart_0_f_0();
              }
#line 539 "query.m"
            else
#line 539 "query.m"
              if (((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 2))))
#line 552 "query.m"
                {
#line 552 "query.m"
                  MR_Word query__MaybePercent_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Cmd_3, (MR_Integer) 0)));

#line 557 "query.m"
                  if ((query__MaybePercent_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "query.m"
                    {
#line 558 "query.m"
                      MR_String query__V_221_221;
#line 558 "query.m"
                      MR_Char query__V_224_224;
#line 558 "query.m"
                      MR_String query__V_328_328;
#line 558 "query.m"
                      MR_String query__V_329_329;

#line 560 "query.m"
                      {
#line 560 "query.m"
                        query__V_221_221 = query__cmd_str_root_0_f_0();
                      }
#line 560 "query.m"
                      {
#line 560 "query.m"
                        query__V_224_224 = query__cmd_separator_char_0_f_0();
                      }
#line 13693 "query.c"
                      {
#line 13695 "query.c"
                        query__V_328_328 = mercury__string__char_to_string_1_f_0(query__V_224_224);
                      }
#line 13698 "query.c"
                      {
#line 13700 "query.c"
                        query__V_329_329 = mercury__string__f_43_43_2_f_0(query__V_328_328, (MR_String) "no");
                      }
#line 13703 "query.c"
                      {
#line 13705 "query.c"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_221_221, query__V_329_329);
                      }
#line 558 "query.m"
                    }
#line 557 "query.m"
                  else
#line 554 "query.m"
                    {
#line 554 "query.m"
                      MR_Integer query__Percent_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__MaybePercent_6, (MR_Integer) 0)));
#line 554 "query.m"
                      MR_String query__V_232_232;
#line 554 "query.m"
                      MR_Char query__V_235_235;
#line 554 "query.m"
                      MR_String query__V_330_330;
#line 554 "query.m"
                      MR_String query__V_331_331;
#line 554 "query.m"
                      MR_String query__V_332_332;

#line 556 "query.m"
                      {
#line 556 "query.m"
                        query__V_232_232 = query__cmd_str_root_0_f_0();
                      }
#line 556 "query.m"
                      {
#line 556 "query.m"
                        query__V_235_235 = query__cmd_separator_char_0_f_0();
                      }
#line 13737 "query.c"
                      {
#line 13739 "query.c"
                        query__V_330_330 = mercury__string__int_to_string_1_f_0(query__Percent_7);
                      }
#line 13742 "query.c"
                      {
#line 13744 "query.c"
                        query__V_331_331 = mercury__string__char_to_string_1_f_0(query__V_235_235);
                      }
#line 13747 "query.c"
                      {
#line 13749 "query.c"
                        query__V_332_332 = mercury__string__f_43_43_2_f_0(query__V_331_331, query__V_330_330);
                      }
#line 13752 "query.c"
                      {
#line 13754 "query.c"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_232_232, query__V_332_332);
                      }
#line 554 "query.m"
                    }
#line 552 "query.m"
                }
#line 539 "query.m"
              else
#line 539 "query.m"
                if (((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 1))))
#line 545 "query.m"
                  {
#line 545 "query.m"
                    MR_Integer query__Minutes_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), query__Cmd_3, (MR_Integer) 0)));
#line 545 "query.m"
                    MR_String query__V_242_242;
#line 545 "query.m"
                    MR_Char query__V_245_245;
#line 545 "query.m"
                    MR_String query__V_336_336;
#line 545 "query.m"
                    MR_String query__V_337_337;
#line 545 "query.m"
                    MR_String query__V_338_338;

#line 547 "query.m"
                    {
#line 547 "query.m"
                      query__V_242_242 = query__cmd_str_timeout_0_f_0();
                    }
#line 547 "query.m"
                    {
#line 547 "query.m"
                      query__V_245_245 = query__cmd_separator_char_0_f_0();
                    }
#line 13790 "query.c"
                    {
#line 13792 "query.c"
                      query__V_336_336 = mercury__string__int_to_string_1_f_0(query__Minutes_5);
                    }
#line 13795 "query.c"
                    {
#line 13797 "query.c"
                      query__V_337_337 = mercury__string__char_to_string_1_f_0(query__V_245_245);
                    }
#line 13800 "query.c"
                    {
#line 13802 "query.c"
                      query__V_338_338 = mercury__string__f_43_43_2_f_0(query__V_337_337, query__V_336_336);
                    }
#line 13805 "query.c"
                    {
#line 13807 "query.c"
                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_242_242, query__V_338_338);
                    }
#line 545 "query.m"
                  }
#line 539 "query.m"
                else
#line 539 "query.m"
                  if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 659 "query.m"
                    {
#line 659 "query.m"
                      MR_String query__V_37_37;
#line 659 "query.m"
                      MR_Char query__V_40_40;
#line 659 "query.m"
                      MR_Word query__CSDPtr_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 659 "query.m"
                      MR_Integer query__CSDI_262 = (MR_Integer) query__CSDPtr_261;
#line 659 "query.m"
                      MR_String query__V_275_275;
#line 659 "query.m"
                      MR_String query__V_276_276;
#line 659 "query.m"
                      MR_String query__V_277_277;

#line 662 "query.m"
                      {
#line 662 "query.m"
                        query__V_37_37 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                      }
#line 662 "query.m"
                      {
#line 662 "query.m"
                        query__V_40_40 = query__cmd_separator_char_0_f_0();
                      }
#line 13843 "query.c"
                      {
#line 13845 "query.c"
                        query__V_275_275 = mercury__string__int_to_string_1_f_0(query__CSDI_262);
                      }
#line 13848 "query.c"
                      {
#line 13850 "query.c"
                        query__V_276_276 = mercury__string__char_to_string_1_f_0(query__V_40_40);
                      }
#line 13853 "query.c"
                      {
#line 13855 "query.c"
                        query__V_277_277 = mercury__string__f_43_43_2_f_0(query__V_276_276, query__V_275_275);
                      }
#line 13858 "query.c"
                      {
#line 13860 "query.c"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_37_37, query__V_277_277);
                      }
#line 659 "query.m"
                    }
#line 539 "query.m"
                  else
#line 539 "query.m"
                    if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 569 "query.m"
                      {
#line 569 "query.m"
                        MR_Word query__CliquePtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 569 "query.m"
                        MR_String query__Name_9;
#line 569 "query.m"
                        MR_Integer query__CliqueNum_10;
#line 569 "query.m"
                        MR_Char query__V_214_214;
#line 569 "query.m"
                        MR_String query__V_278_278;
#line 569 "query.m"
                        MR_String query__V_279_279;
#line 569 "query.m"
                        MR_String query__V_280_280;

#line 565 "query.m"
                        {
#line 565 "query.m"
                          query__Name_9 = query__cmd_str_clique_0_f_0();
                        }
#line 570 "query.m"
                        query__CliqueNum_10 = (MR_Integer) query__CliquePtr_8;
#line 572 "query.m"
                        {
#line 572 "query.m"
                          query__V_214_214 = query__cmd_separator_char_0_f_0();
                        }
#line 13898 "query.c"
                        {
#line 13900 "query.c"
                          query__V_278_278 = mercury__string__int_to_string_1_f_0(query__CliqueNum_10);
                        }
#line 13903 "query.c"
                        {
#line 13905 "query.c"
                          query__V_279_279 = mercury__string__char_to_string_1_f_0(query__V_214_214);
                        }
#line 13908 "query.c"
                        {
#line 13910 "query.c"
                          query__V_280_280 = mercury__string__f_43_43_2_f_0(query__V_279_279, query__V_278_278);
                        }
#line 13913 "query.c"
                        {
#line 13915 "query.c"
                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__Name_9, query__V_280_280);
                        }
#line 569 "query.m"
                      }
#line 539 "query.m"
                    else
#line 539 "query.m"
                      if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 569 "query.m"
                        {
#line 569 "query.m"
                          MR_Word query__CliquePtr_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 569 "query.m"
                          MR_String query__Name_264;
#line 569 "query.m"
                          MR_Integer query__CliqueNum_265;
#line 569 "query.m"
                          MR_Char query__V_271_271;
#line 569 "query.m"
                          MR_String query__V_281_281;
#line 569 "query.m"
                          MR_String query__V_282_282;
#line 569 "query.m"
                          MR_String query__V_283_283;

#line 568 "query.m"
                          {
#line 568 "query.m"
                            query__Name_264 = query__cmd_str_clique_recursive_costs_0_f_0();
                          }
#line 570 "query.m"
                          query__CliqueNum_265 = (MR_Integer) query__CliquePtr_263;
#line 572 "query.m"
                          {
#line 572 "query.m"
                            query__V_271_271 = query__cmd_separator_char_0_f_0();
                          }
#line 13953 "query.c"
                          {
#line 13955 "query.c"
                            query__V_281_281 = mercury__string__int_to_string_1_f_0(query__CliqueNum_265);
                          }
#line 13958 "query.c"
                          {
#line 13960 "query.c"
                            query__V_282_282 = mercury__string__char_to_string_1_f_0(query__V_271_271);
                          }
#line 13963 "query.c"
                          {
#line 13965 "query.c"
                            query__V_283_283 = mercury__string__f_43_43_2_f_0(query__V_282_282, query__V_281_281);
                          }
#line 13968 "query.c"
                          {
#line 13970 "query.c"
                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__Name_264, query__V_283_283);
                          }
#line 569 "query.m"
                        }
#line 539 "query.m"
                      else
#line 539 "query.m"
                        if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 648 "query.m"
                          {
#line 648 "query.m"
                            MR_Word query__CSDPtr_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 648 "query.m"
                            MR_Integer query__CSDI_33 = (MR_Integer) query__CSDPtr_32;
#line 648 "query.m"
                            MR_String query__V_57_57;
#line 648 "query.m"
                            MR_Char query__V_60_60;
#line 648 "query.m"
                            MR_String query__V_284_284;
#line 648 "query.m"
                            MR_String query__V_285_285;
#line 648 "query.m"
                            MR_String query__V_286_286;

#line 651 "query.m"
                            {
#line 651 "query.m"
                              query__V_57_57 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                            }
#line 651 "query.m"
                            {
#line 651 "query.m"
                              query__V_60_60 = query__cmd_separator_char_0_f_0();
                            }
#line 14006 "query.c"
                            {
#line 14008 "query.c"
                              query__V_284_284 = mercury__string__int_to_string_1_f_0(query__CSDI_33);
                            }
#line 14011 "query.c"
                            {
#line 14013 "query.c"
                              query__V_285_285 = mercury__string__char_to_string_1_f_0(query__V_60_60);
                            }
#line 14016 "query.c"
                            {
#line 14018 "query.c"
                              query__V_286_286 = mercury__string__f_43_43_2_f_0(query__V_285_285, query__V_284_284);
                            }
#line 14021 "query.c"
                            {
#line 14023 "query.c"
                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_286_286);
                            }
#line 648 "query.m"
                          }
#line 539 "query.m"
                        else
#line 539 "query.m"
                          if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 643 "query.m"
                            {
#line 643 "query.m"
                              MR_Word query__CSSPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 643 "query.m"
                              MR_Integer query__CSSI_31 = (MR_Integer) query__CSSPtr_30;
#line 643 "query.m"
                              MR_String query__V_67_67;
#line 643 "query.m"
                              MR_Char query__V_70_70;
#line 643 "query.m"
                              MR_String query__V_287_287;
#line 643 "query.m"
                              MR_String query__V_288_288;
#line 643 "query.m"
                              MR_String query__V_289_289;

#line 646 "query.m"
                              {
#line 646 "query.m"
                                query__V_67_67 = query__cmd_str_dump_call_site_static_0_f_0();
                              }
#line 646 "query.m"
                              {
#line 646 "query.m"
                                query__V_70_70 = query__cmd_separator_char_0_f_0();
                              }
#line 14059 "query.c"
                              {
#line 14061 "query.c"
                                query__V_287_287 = mercury__string__int_to_string_1_f_0(query__CSSI_31);
                              }
#line 14064 "query.c"
                              {
#line 14066 "query.c"
                                query__V_288_288 = mercury__string__char_to_string_1_f_0(query__V_70_70);
                              }
#line 14069 "query.c"
                              {
#line 14071 "query.c"
                                query__V_289_289 = mercury__string__f_43_43_2_f_0(query__V_288_288, query__V_287_287);
                              }
#line 14074 "query.c"
                              {
#line 14076 "query.c"
                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_67_67, query__V_289_289);
                              }
#line 643 "query.m"
                            }
#line 539 "query.m"
                          else
#line 539 "query.m"
                            if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 654 "query.m"
                              {
#line 654 "query.m"
                                MR_String query__V_47_47;
#line 654 "query.m"
                                MR_Char query__V_50_50;
#line 654 "query.m"
                                MR_Word query__CliquePtr_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 654 "query.m"
                                MR_Integer query__CliqueNum_260 = (MR_Integer) query__CliquePtr_259;
#line 654 "query.m"
                                MR_String query__V_290_290;
#line 654 "query.m"
                                MR_String query__V_291_291;
#line 654 "query.m"
                                MR_String query__V_292_292;

#line 657 "query.m"
                                {
#line 657 "query.m"
                                  query__V_47_47 = query__cmd_str_dump_raw_clique_0_f_0();
                                }
#line 657 "query.m"
                                {
#line 657 "query.m"
                                  query__V_50_50 = query__cmd_separator_char_0_f_0();
                                }
#line 14112 "query.c"
                                {
#line 14114 "query.c"
                                  query__V_290_290 = mercury__string__int_to_string_1_f_0(query__CliqueNum_260);
                                }
#line 14117 "query.c"
                                {
#line 14119 "query.c"
                                  query__V_291_291 = mercury__string__char_to_string_1_f_0(query__V_50_50);
                                }
#line 14122 "query.c"
                                {
#line 14124 "query.c"
                                  query__V_292_292 = mercury__string__f_43_43_2_f_0(query__V_291_291, query__V_290_290);
                                }
#line 14127 "query.c"
                                {
#line 14129 "query.c"
                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_47_47, query__V_292_292);
                                }
#line 654 "query.m"
                              }
#line 539 "query.m"
                            else
#line 539 "query.m"
                              if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 638 "query.m"
                                {
#line 638 "query.m"
                                  MR_String query__V_77_77;
#line 638 "query.m"
                                  MR_Char query__V_80_80;
#line 638 "query.m"
                                  MR_Word query__PDPtr_257 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 638 "query.m"
                                  MR_Integer query__PDI_258 = (MR_Integer) query__PDPtr_257;
#line 638 "query.m"
                                  MR_String query__V_293_293;
#line 638 "query.m"
                                  MR_String query__V_294_294;
#line 638 "query.m"
                                  MR_String query__V_295_295;

#line 641 "query.m"
                                  {
#line 641 "query.m"
                                    query__V_77_77 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                  }
#line 641 "query.m"
                                  {
#line 641 "query.m"
                                    query__V_80_80 = query__cmd_separator_char_0_f_0();
                                  }
#line 14165 "query.c"
                                  {
#line 14167 "query.c"
                                    query__V_293_293 = mercury__string__int_to_string_1_f_0(query__PDI_258);
                                  }
#line 14170 "query.c"
                                  {
#line 14172 "query.c"
                                    query__V_294_294 = mercury__string__char_to_string_1_f_0(query__V_80_80);
                                  }
#line 14175 "query.c"
                                  {
#line 14177 "query.c"
                                    query__V_295_295 = mercury__string__f_43_43_2_f_0(query__V_294_294, query__V_293_293);
                                  }
#line 14180 "query.c"
                                  {
#line 14182 "query.c"
                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_77_77, query__V_295_295);
                                  }
#line 638 "query.m"
                                }
#line 539 "query.m"
                              else
#line 539 "query.m"
                                if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 633 "query.m"
                                  {
#line 633 "query.m"
                                    MR_String query__V_87_87;
#line 633 "query.m"
                                    MR_Char query__V_90_90;
#line 633 "query.m"
                                    MR_Word query__PSPtr_255 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 633 "query.m"
                                    MR_Integer query__PSI_256 = (MR_Integer) query__PSPtr_255;
#line 633 "query.m"
                                    MR_String query__V_296_296;
#line 633 "query.m"
                                    MR_String query__V_297_297;
#line 633 "query.m"
                                    MR_String query__V_298_298;

#line 636 "query.m"
                                    {
#line 636 "query.m"
                                      query__V_87_87 = query__cmd_str_dump_proc_static_0_f_0();
                                    }
#line 636 "query.m"
                                    {
#line 636 "query.m"
                                      query__V_90_90 = query__cmd_separator_char_0_f_0();
                                    }
#line 14218 "query.c"
                                    {
#line 14220 "query.c"
                                      query__V_296_296 = mercury__string__int_to_string_1_f_0(query__PSI_256);
                                    }
#line 14223 "query.c"
                                    {
#line 14225 "query.c"
                                      query__V_297_297 = mercury__string__char_to_string_1_f_0(query__V_90_90);
                                    }
#line 14228 "query.c"
                                    {
#line 14230 "query.c"
                                      query__V_298_298 = mercury__string__f_43_43_2_f_0(query__V_297_297, query__V_296_296);
                                    }
#line 14233 "query.c"
                                    {
#line 14235 "query.c"
                                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_87_87, query__V_298_298);
                                    }
#line 633 "query.m"
                                  }
#line 539 "query.m"
                                else
#line 539 "query.m"
                                  if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 628 "query.m"
                                    {
#line 628 "query.m"
                                      MR_Word query__PDPtr_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 628 "query.m"
                                      MR_Integer query__PDI_29 = (MR_Integer) query__PDPtr_28;
#line 628 "query.m"
                                      MR_String query__V_97_97;
#line 628 "query.m"
                                      MR_Char query__V_100_100;
#line 628 "query.m"
                                      MR_String query__V_299_299;
#line 628 "query.m"
                                      MR_String query__V_300_300;
#line 628 "query.m"
                                      MR_String query__V_301_301;

#line 631 "query.m"
                                      {
#line 631 "query.m"
                                        query__V_97_97 = query__cmd_str_dynamic_coverage_0_f_0();
                                      }
#line 631 "query.m"
                                      {
#line 631 "query.m"
                                        query__V_100_100 = query__cmd_separator_char_0_f_0();
                                      }
#line 14271 "query.c"
                                      {
#line 14273 "query.c"
                                        query__V_299_299 = mercury__string__int_to_string_1_f_0(query__PDI_29);
                                      }
#line 14276 "query.c"
                                      {
#line 14278 "query.c"
                                        query__V_300_300 = mercury__string__char_to_string_1_f_0(query__V_100_100);
                                      }
#line 14281 "query.c"
                                      {
#line 14283 "query.c"
                                        query__V_301_301 = mercury__string__f_43_43_2_f_0(query__V_300_300, query__V_299_299);
                                      }
#line 14286 "query.c"
                                      {
#line 14288 "query.c"
                                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_97_97, query__V_301_301);
                                      }
#line 628 "query.m"
                                    }
#line 539 "query.m"
                                  else
#line 539 "query.m"
                                    if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 598 "query.m"
                                      {
#line 598 "query.m"
                                        MR_String query__ModuleName_19 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 598 "query.m"
                                        MR_String query__V_162_162;
#line 598 "query.m"
                                        MR_Char query__V_165_165;
#line 598 "query.m"
                                        MR_String query__V_302_302;
#line 598 "query.m"
                                        MR_String query__V_303_303;

#line 600 "query.m"
                                        {
#line 600 "query.m"
                                          query__V_162_162 = query__cmd_str_module_0_f_0();
                                        }
#line 600 "query.m"
                                        {
#line 600 "query.m"
                                          query__V_165_165 = query__cmd_separator_char_0_f_0();
                                        }
#line 14320 "query.c"
                                        {
#line 14322 "query.c"
                                          query__V_302_302 = mercury__string__char_to_string_1_f_0(query__V_165_165);
                                        }
#line 14325 "query.c"
                                        {
#line 14327 "query.c"
                                          query__V_303_303 = mercury__string__f_43_43_2_f_0(query__V_302_302, query__ModuleName_19);
                                        }
#line 14330 "query.c"
                                        {
#line 14332 "query.c"
                                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_162_162, query__V_303_303);
                                        }
#line 598 "query.m"
                                      }
#line 539 "query.m"
                                    else
#line 539 "query.m"
                                      if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 602 "query.m"
                                        {
#line 602 "query.m"
                                          MR_String query__V_152_152;
#line 602 "query.m"
                                          MR_Char query__V_155_155;
#line 602 "query.m"
                                          MR_String query__ModuleName_251 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 602 "query.m"
                                          MR_String query__V_304_304;
#line 602 "query.m"
                                          MR_String query__V_305_305;

#line 604 "query.m"
                                          {
#line 604 "query.m"
                                            query__V_152_152 = query__cmd_str_module_getter_setters_0_f_0();
                                          }
#line 604 "query.m"
                                          {
#line 604 "query.m"
                                            query__V_155_155 = query__cmd_separator_char_0_f_0();
                                          }
#line 14364 "query.c"
                                          {
#line 14366 "query.c"
                                            query__V_304_304 = mercury__string__char_to_string_1_f_0(query__V_155_155);
                                          }
#line 14369 "query.c"
                                          {
#line 14371 "query.c"
                                            query__V_305_305 = mercury__string__f_43_43_2_f_0(query__V_304_304, query__ModuleName_251);
                                          }
#line 14374 "query.c"
                                          {
#line 14376 "query.c"
                                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_152_152, query__V_305_305);
                                          }
#line 602 "query.m"
                                        }
#line 539 "query.m"
                                      else
#line 539 "query.m"
                                        if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 607 "query.m"
                                          {
#line 607 "query.m"
                                            MR_String query__V_142_142;
#line 607 "query.m"
                                            MR_Char query__V_145_145;
#line 607 "query.m"
                                            MR_String query__ModuleName_252 = ((MR_String) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 607 "query.m"
                                            MR_String query__V_306_306;
#line 607 "query.m"
                                            MR_String query__V_307_307;

#line 609 "query.m"
                                            {
#line 609 "query.m"
                                              query__V_142_142 = query__cmd_str_module_rep_0_f_0();
                                            }
#line 609 "query.m"
                                            {
#line 609 "query.m"
                                              query__V_145_145 = query__cmd_separator_char_0_f_0();
                                            }
#line 14408 "query.c"
                                            {
#line 14410 "query.c"
                                              query__V_306_306 = mercury__string__char_to_string_1_f_0(query__V_145_145);
                                            }
#line 14413 "query.c"
                                            {
#line 14415 "query.c"
                                              query__V_307_307 = mercury__string__f_43_43_2_f_0(query__V_306_306, query__ModuleName_252);
                                            }
#line 14418 "query.c"
                                            {
#line 14420 "query.c"
                                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_142_142, query__V_307_307);
                                            }
#line 607 "query.m"
                                          }
#line 539 "query.m"
                                        else
#line 539 "query.m"
                                          if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 577 "query.m"
                                            {
#line 577 "query.m"
                                              MR_Word query__PSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 577 "query.m"
                                              MR_Integer query__PSI_12 = (MR_Integer) query__PSPtr_11;
#line 577 "query.m"
                                              MR_String query__V_202_202;
#line 577 "query.m"
                                              MR_Char query__V_205_205;
#line 577 "query.m"
                                              MR_String query__V_308_308;
#line 577 "query.m"
                                              MR_String query__V_309_309;
#line 577 "query.m"
                                              MR_String query__V_310_310;

#line 580 "query.m"
                                              {
#line 580 "query.m"
                                                query__V_202_202 = query__cmd_str_proc_0_f_0();
                                              }
#line 580 "query.m"
                                              {
#line 580 "query.m"
                                                query__V_205_205 = query__cmd_separator_char_0_f_0();
                                              }
#line 14456 "query.c"
                                              {
#line 14458 "query.c"
                                                query__V_308_308 = mercury__string__int_to_string_1_f_0(query__PSI_12);
                                              }
#line 14461 "query.c"
                                              {
#line 14463 "query.c"
                                                query__V_309_309 = mercury__string__char_to_string_1_f_0(query__V_205_205);
                                              }
#line 14466 "query.c"
                                              {
#line 14468 "query.c"
                                                query__V_310_310 = mercury__string__f_43_43_2_f_0(query__V_309_309, query__V_308_308);
                                              }
#line 14471 "query.c"
                                              {
#line 14473 "query.c"
                                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_202_202, query__V_310_310);
                                              }
#line 577 "query.m"
                                            }
#line 539 "query.m"
                                          else
#line 539 "query.m"
                                            if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 583 "query.m"
                                              {
#line 583 "query.m"
                                                MR_Word query__GroupCallers_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)));
#line 583 "query.m"
                                                MR_Integer query__BunchNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 3)));
#line 583 "query.m"
                                                MR_Integer query__CallersPerBunch_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 4)));
#line 583 "query.m"
                                                MR_Word query__Contour_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 5)));
#line 583 "query.m"
                                                MR_String query__GroupCallersStr_17;
#line 583 "query.m"
                                                MR_String query__ContourStr_18;
#line 583 "query.m"
                                                MR_String query__V_172_172;
#line 583 "query.m"
                                                MR_Char query__V_175_175;
#line 583 "query.m"
                                                MR_Char query__V_180_180;
#line 583 "query.m"
                                                MR_Char query__V_185_185;
#line 583 "query.m"
                                                MR_Char query__V_190_190;
#line 583 "query.m"
                                                MR_Char query__V_195_195;
#line 583 "query.m"
                                                MR_Word query__PSPtr_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 583 "query.m"
                                                MR_Integer query__PSI_250 = (MR_Integer) query__PSPtr_249;
#line 583 "query.m"
                                                MR_String query__V_311_311;
#line 583 "query.m"
                                                MR_String query__V_312_312;
#line 583 "query.m"
                                                MR_String query__V_313_313;
#line 583 "query.m"
                                                MR_String query__V_314_314;
#line 583 "query.m"
                                                MR_String query__V_315_315;
#line 583 "query.m"
                                                MR_String query__V_316_316;
#line 583 "query.m"
                                                MR_String query__V_317_317;
#line 583 "query.m"
                                                MR_String query__V_318_318;
#line 583 "query.m"
                                                MR_String query__V_319_319;
#line 583 "query.m"
                                                MR_String query__V_320_320;
#line 583 "query.m"
                                                MR_String query__V_321_321;
#line 583 "query.m"
                                                MR_String query__V_322_322;
#line 583 "query.m"
                                                MR_String query__V_323_323;
#line 583 "query.m"
                                                MR_String query__V_324_324;
#line 583 "query.m"
                                                MR_String query__V_325_325;
#line 583 "query.m"
                                                MR_String query__V_326_326;
#line 583 "query.m"
                                                MR_String query__V_327_327;

#line 585 "query.m"
                                                {
#line 585 "query.m"
                                                  query__GroupCallersStr_17 = query__caller_groups_to_string_1_f_0(query__GroupCallers_13);
                                                }
#line 586 "query.m"
                                                {
#line 586 "query.m"
                                                  query__ContourStr_18 = query__contour_exclusion_to_string_1_f_0(query__Contour_16);
                                                }
#line 588 "query.m"
                                                {
#line 588 "query.m"
                                                  query__V_172_172 = query__cmd_str_proc_callers_0_f_0();
                                                }
#line 589 "query.m"
                                                {
#line 589 "query.m"
                                                  query__V_175_175 = query__cmd_separator_char_0_f_0();
                                                }
#line 590 "query.m"
                                                {
#line 590 "query.m"
                                                  query__V_180_180 = query__cmd_separator_char_0_f_0();
                                                }
#line 591 "query.m"
                                                {
#line 591 "query.m"
                                                  query__V_185_185 = query__cmd_separator_char_0_f_0();
                                                }
#line 592 "query.m"
                                                {
#line 592 "query.m"
                                                  query__V_190_190 = query__cmd_separator_char_0_f_0();
                                                }
#line 593 "query.m"
                                                {
#line 593 "query.m"
                                                  query__V_195_195 = query__cmd_separator_char_0_f_0();
                                                }
#line 14587 "query.c"
                                                {
#line 14589 "query.c"
                                                  query__V_311_311 = mercury__string__char_to_string_1_f_0(query__V_195_195);
                                                }
#line 14592 "query.c"
                                                {
#line 14594 "query.c"
                                                  query__V_312_312 = mercury__string__f_43_43_2_f_0(query__V_311_311, query__ContourStr_18);
                                                }
#line 14597 "query.c"
                                                {
#line 14599 "query.c"
                                                  query__V_313_313 = mercury__string__int_to_string_1_f_0(query__CallersPerBunch_15);
                                                }
#line 14602 "query.c"
                                                {
#line 14604 "query.c"
                                                  query__V_314_314 = mercury__string__f_43_43_2_f_0(query__V_313_313, query__V_312_312);
                                                }
#line 14607 "query.c"
                                                {
#line 14609 "query.c"
                                                  query__V_315_315 = mercury__string__char_to_string_1_f_0(query__V_190_190);
                                                }
#line 14612 "query.c"
                                                {
#line 14614 "query.c"
                                                  query__V_316_316 = mercury__string__f_43_43_2_f_0(query__V_315_315, query__V_314_314);
                                                }
#line 14617 "query.c"
                                                {
#line 14619 "query.c"
                                                  query__V_317_317 = mercury__string__int_to_string_1_f_0(query__BunchNum_14);
                                                }
#line 14622 "query.c"
                                                {
#line 14624 "query.c"
                                                  query__V_318_318 = mercury__string__f_43_43_2_f_0(query__V_317_317, query__V_316_316);
                                                }
#line 14627 "query.c"
                                                {
#line 14629 "query.c"
                                                  query__V_319_319 = mercury__string__char_to_string_1_f_0(query__V_185_185);
                                                }
#line 14632 "query.c"
                                                {
#line 14634 "query.c"
                                                  query__V_320_320 = mercury__string__f_43_43_2_f_0(query__V_319_319, query__V_318_318);
                                                }
#line 14637 "query.c"
                                                {
#line 14639 "query.c"
                                                  query__V_321_321 = mercury__string__f_43_43_2_f_0(query__GroupCallersStr_17, query__V_320_320);
                                                }
#line 14642 "query.c"
                                                {
#line 14644 "query.c"
                                                  query__V_322_322 = mercury__string__char_to_string_1_f_0(query__V_180_180);
                                                }
#line 14647 "query.c"
                                                {
#line 14649 "query.c"
                                                  query__V_323_323 = mercury__string__f_43_43_2_f_0(query__V_322_322, query__V_321_321);
                                                }
#line 14652 "query.c"
                                                {
#line 14654 "query.c"
                                                  query__V_324_324 = mercury__string__int_to_string_1_f_0(query__PSI_250);
                                                }
#line 14657 "query.c"
                                                {
#line 14659 "query.c"
                                                  query__V_325_325 = mercury__string__f_43_43_2_f_0(query__V_324_324, query__V_323_323);
                                                }
#line 14662 "query.c"
                                                {
#line 14664 "query.c"
                                                  query__V_326_326 = mercury__string__char_to_string_1_f_0(query__V_175_175);
                                                }
#line 14667 "query.c"
                                                {
#line 14669 "query.c"
                                                  query__V_327_327 = mercury__string__f_43_43_2_f_0(query__V_326_326, query__V_325_325);
                                                }
#line 14672 "query.c"
                                                {
#line 14674 "query.c"
                                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_172_172, query__V_327_327);
                                                }
#line 583 "query.m"
                                              }
#line 539 "query.m"
                                            else
#line 539 "query.m"
                                              if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 623 "query.m"
                                                {
#line 623 "query.m"
                                                  MR_String query__V_107_107;
#line 623 "query.m"
                                                  MR_Char query__V_110_110;
#line 623 "query.m"
                                                  MR_Word query__PSPtr_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 623 "query.m"
                                                  MR_Integer query__PSI_254 = (MR_Integer) query__PSPtr_253;
#line 623 "query.m"
                                                  MR_String query__V_333_333;
#line 623 "query.m"
                                                  MR_String query__V_334_334;
#line 623 "query.m"
                                                  MR_String query__V_335_335;

#line 626 "query.m"
                                                  {
#line 626 "query.m"
                                                    query__V_107_107 = query__cmd_str_static_coverage_0_f_0();
                                                  }
#line 626 "query.m"
                                                  {
#line 626 "query.m"
                                                    query__V_110_110 = query__cmd_separator_char_0_f_0();
                                                  }
#line 14710 "query.c"
                                                  {
#line 14712 "query.c"
                                                    query__V_333_333 = mercury__string__int_to_string_1_f_0(query__PSI_254);
                                                  }
#line 14715 "query.c"
                                                  {
#line 14717 "query.c"
                                                    query__V_334_334 = mercury__string__char_to_string_1_f_0(query__V_110_110);
                                                  }
#line 14720 "query.c"
                                                  {
#line 14722 "query.c"
                                                    query__V_335_335 = mercury__string__f_43_43_2_f_0(query__V_334_334, query__V_333_333);
                                                  }
#line 14725 "query.c"
                                                  {
#line 14727 "query.c"
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_107_107, query__V_335_335);
                                                  }
#line 623 "query.m"
                                                }
#line 539 "query.m"
                                              else
#line 611 "query.m"
                                                {
#line 611 "query.m"
                                                  MR_Word query__Limit_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 1)));
#line 611 "query.m"
                                                  MR_Word query__CostKind_21 = ((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 611 "query.m"
                                                  MR_Word query__InclDesc_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 611 "query.m"
                                                  MR_Word query__Scope_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 611 "query.m"
                                                  MR_String query__LimitStr_24;
#line 611 "query.m"
                                                  MR_String query__CostKindStr_25;
#line 611 "query.m"
                                                  MR_String query__InclDescStr_26;
#line 611 "query.m"
                                                  MR_String query__ScopeStr_27;
#line 611 "query.m"
                                                  MR_String query__V_117_117;
#line 611 "query.m"
                                                  MR_Char query__V_120_120;
#line 611 "query.m"
                                                  MR_Char query__V_125_125;
#line 611 "query.m"
                                                  MR_Char query__V_130_130;
#line 611 "query.m"
                                                  MR_Char query__V_135_135;
#line 611 "query.m"
                                                  MR_String query__V_339_339;
#line 611 "query.m"
                                                  MR_String query__V_340_340;
#line 611 "query.m"
                                                  MR_String query__V_341_341;
#line 611 "query.m"
                                                  MR_String query__V_342_342;
#line 611 "query.m"
                                                  MR_String query__V_343_343;
#line 611 "query.m"
                                                  MR_String query__V_344_344;
#line 611 "query.m"
                                                  MR_String query__V_345_345;
#line 611 "query.m"
                                                  MR_String query__V_346_346;
#line 611 "query.m"
                                                  MR_String query__V_347_347;
#line 611 "query.m"
                                                  MR_String query__V_348_348;
#line 611 "query.m"
                                                  MR_String query__V_349_349;

#line 612 "query.m"
                                                  {
#line 612 "query.m"
                                                    query__LimitStr_24 = query__limit_to_string_1_f_0(query__Limit_20);
                                                  }
#line 613 "query.m"
                                                  {
#line 613 "query.m"
                                                    query__CostKindStr_25 = query__cost_kind_to_string_1_f_0(query__CostKind_21);
                                                  }
#line 614 "query.m"
                                                  {
#line 614 "query.m"
                                                    query__InclDescStr_26 = query__incl_desc_to_string_1_f_0(query__InclDesc_22);
                                                  }
#line 615 "query.m"
                                                  {
#line 615 "query.m"
                                                    query__ScopeStr_27 = query__scope_to_string_1_f_0(query__Scope_23);
                                                  }
#line 617 "query.m"
                                                  {
#line 617 "query.m"
                                                    query__V_117_117 = query__cmd_str_top_procs_0_f_0();
                                                  }
#line 618 "query.m"
                                                  {
#line 618 "query.m"
                                                    query__V_120_120 = query__cmd_separator_char_0_f_0();
                                                  }
#line 619 "query.m"
                                                  {
#line 619 "query.m"
                                                    query__V_125_125 = query__cmd_separator_char_0_f_0();
                                                  }
#line 620 "query.m"
                                                  {
#line 620 "query.m"
                                                    query__V_130_130 = query__cmd_separator_char_0_f_0();
                                                  }
#line 621 "query.m"
                                                  {
#line 621 "query.m"
                                                    query__V_135_135 = query__cmd_separator_char_0_f_0();
                                                  }
#line 14830 "query.c"
                                                  {
#line 14832 "query.c"
                                                    query__V_339_339 = mercury__string__char_to_string_1_f_0(query__V_135_135);
                                                  }
#line 14835 "query.c"
                                                  {
#line 14837 "query.c"
                                                    query__V_340_340 = mercury__string__f_43_43_2_f_0(query__V_339_339, query__ScopeStr_27);
                                                  }
#line 14840 "query.c"
                                                  {
#line 14842 "query.c"
                                                    query__V_341_341 = mercury__string__f_43_43_2_f_0(query__InclDescStr_26, query__V_340_340);
                                                  }
#line 14845 "query.c"
                                                  {
#line 14847 "query.c"
                                                    query__V_342_342 = mercury__string__char_to_string_1_f_0(query__V_130_130);
                                                  }
#line 14850 "query.c"
                                                  {
#line 14852 "query.c"
                                                    query__V_343_343 = mercury__string__f_43_43_2_f_0(query__V_342_342, query__V_341_341);
                                                  }
#line 14855 "query.c"
                                                  {
#line 14857 "query.c"
                                                    query__V_344_344 = mercury__string__f_43_43_2_f_0(query__CostKindStr_25, query__V_343_343);
                                                  }
#line 14860 "query.c"
                                                  {
#line 14862 "query.c"
                                                    query__V_345_345 = mercury__string__char_to_string_1_f_0(query__V_125_125);
                                                  }
#line 14865 "query.c"
                                                  {
#line 14867 "query.c"
                                                    query__V_346_346 = mercury__string__f_43_43_2_f_0(query__V_345_345, query__V_344_344);
                                                  }
#line 14870 "query.c"
                                                  {
#line 14872 "query.c"
                                                    query__V_347_347 = mercury__string__f_43_43_2_f_0(query__LimitStr_24, query__V_346_346);
                                                  }
#line 14875 "query.c"
                                                  {
#line 14877 "query.c"
                                                    query__V_348_348 = mercury__string__char_to_string_1_f_0(query__V_120_120);
                                                  }
#line 14880 "query.c"
                                                  {
#line 14882 "query.c"
                                                    query__V_349_349 = mercury__string__f_43_43_2_f_0(query__V_348_348, query__V_347_347);
                                                  }
#line 14885 "query.c"
                                                  {
#line 14887 "query.c"
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_117_117, query__V_349_349);
                                                  }
#line 611 "query.m"
                                                }
#line 539 "query.m"
    return query__CmdStr_4;
#line 539 "query.m"
  }
#line 535 "query.m"
}

#line 521 "query.m"
static MR_Char MR_CALL 
query__pref_separator_char_0_f_0(void)
#line 521 "query.m"
{
#line 528 "query.m"
  {
#line 528 "query.m"
    MR_bool query__succeeded;

#line 528 "query.m"
    return (MR_Char) 47;
#line 528 "query.m"
  }
#line 521 "query.m"
}

#line 520 "query.m"
static MR_Char MR_CALL 
query__cmd_separator_char_0_f_0(void)
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

#line 437 "query.m"
static void MR_CALL 
query__create_and_memoize_report_3_p_0(
#line 437 "query.m"
  MR_Word query__Cmd_4,
#line 437 "query.m"
  MR_Word query__Deep_5,
#line 437 "query.m"
  MR_Word * query__Report_6)
#line 437 "query.m"
{
#line 440 "query.m"
  {
#line 440 "query.m"
    MR_bool query__succeeded;
#line 440 "query.m"
    MR_Box query__CallTableTipVar_10;
#line 440 "query.m"
    MR_Word query__Status_11;

#line 440 "query.m"
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
#line 440 "query.m"
	MR_TrieNode cur_node;
	MR_TrieNode next_node;

	cur_node = &proc_table_info->MR_pt_tablenode;
	MR_tbl_lookup_insert_gen(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo0, arg0, next_node);
	cur_node = next_node;
	MR_tbl_lookup_insert_gen_addr(NULL, MR_FALSE, MR_FALSE, cur_node, input_typeinfo1, arg1, next_node);
	cur_node = next_node;
	CallTableTipVar = cur_node;
	MR_tbl_memo_det_setup(MR_FALSE, MR_FALSE, cur_node, status);

#line 14983 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	 query__Status_11  = status;
#line 440 "query.m"
}
#line 440 "query.m"
    if ((query__Status_11 == (MR_Integer) 1))
#line 440 "query.m"
      {
#line 440 "query.m"
        {
#line 440 "query.m"
          mercury__table_builtin__table_error_1_p_0((MR_String) "detected infinite recursion in pred query.create_and_memoize_report/3");
#line 440 "query.m"
          return;
        }
#line 440 "query.m"
      }
#line 440 "query.m"
    else
#line 440 "query.m"
      if ((query__Status_11 == (MR_Integer) 0))
#line 440 "query.m"
        {
#line 440 "query.m"
          {
#line 440 "query.m"
            create_report__create_report_3_p_0(query__Cmd_4, query__Deep_5, query__Report_6);
          }
#line 440 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode cur_node;
	MR_Word arg0;
	MR_Word save_arg_typeinfo0;

	cur_node = (MR_TrieNode) query__CallTableTipVar_10 ;
	arg0 = (MR_Word) ((MR_Box) (*query__Report_6)) ;
	save_arg_typeinfo0 =  (MR_Word) &report__report__type_ctor_info_deep_report_0 ;
		{
#line 440 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_create_answer_block(MR_FALSE, cur_node, 1, answerblock);
	MR_tbl_save_any_answer(MR_FALSE, answerblock, 0, save_arg_typeinfo0, arg0);

#line 15032 "query.c"

		;}
#undef MR_PROC_LABEL
#line 440 "query.m"
}
#line 440 "query.m"
        }
#line 440 "query.m"
      else
#line 440 "query.m"
        {
#line 440 "query.m"
          MR_Box query__conv0_restore_arg0;

#line 440 "query.m"
{
#define MR_PROC_LABEL query__create_and_memoize_report_3_p_0

	MR_TrieNode base;
	MR_Word restore_arg0;

	base = (MR_TrieNode) query__CallTableTipVar_10 ;
		{
#line 440 "query.m"
	MR_AnswerBlock answerblock;
	MR_tbl_memo_get_answer_block(MR_FALSE, base, answerblock);
	MR_tbl_restore_any_answer(MR_FALSE, answerblock, 0, restore_arg0);

#line 15061 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__conv0_restore_arg0  = (MR_Box) restore_arg0;
#line 440 "query.m"
          *query__Report_6 = ((MR_Word) query__conv0_restore_arg0);
#line 440 "query.m"
}
#line 440 "query.m"
        }
#line 440 "query.m"
  }
#line 437 "query.m"
}

#line 415 "query.m"
static void MR_CALL 
query__exec_6_p_0(
#line 415 "query.m"
  MR_Word query__Cmd_7,
#line 415 "query.m"
  MR_Word query__Prefs_8,
#line 415 "query.m"
  MR_Word query__Deep_9,
#line 415 "query.m"
  MR_String * query__HTMLStr_10)
#line 415 "query.m"
{
#line 418 "query.m"
  {
#line 418 "query.m"
    MR_bool query__succeeded = (query__Cmd_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 418 "query.m"
    MR_Word query__Report_12;
#line 418 "query.m"
    MR_Word query__Display_13;
#line 418 "query.m"
    MR_Word query__HTML_14;

#line 421 "query.m"
    if (query__succeeded)
#line 420 "query.m"
      {
#line 420 "query.m"
        query__create_and_memoize_report_3_p_0(query__Cmd_7, query__Deep_9, &query__Report_12);
      }
#line 421 "query.m"
    else
#line 422 "query.m"
      {
#line 422 "query.m"
        create_report__create_report_3_p_0(query__Cmd_7, query__Deep_9, &query__Report_12);
      }
#line 424 "query.m"
    {
#line 424 "query.m"
      query__Display_13 = display_report__report_to_display_3_f_0(query__Deep_9, query__Prefs_8, query__Report_12);
    }
#line 425 "query.m"
    {
#line 425 "query.m"
      query__HTML_14 = html_format__htmlize_display_3_f_0(query__Deep_9, query__Prefs_8, query__Display_13);
    }
#line 426 "query.m"
    {
#line 426 "query.m"
      *query__HTMLStr_10 = html_format__html_to_string_1_f_0(query__HTML_14);
    }
#line 418 "query.m"
  }
#line 415 "query.m"
}

#line 361 "query.m"
MR_Word MR_CALL 
query__default_developer_mode_0_f_0(void)
#line 361 "query.m"
{
#line 515 "query.m"
  {
#line 515 "query.m"
    MR_bool query__succeeded;

#line 515 "query.m"
    return (MR_Integer) 1;
#line 515 "query.m"
  }
#line 361 "query.m"
}

#line 360 "query.m"
MR_Word MR_CALL 
query__default_inactive_items_0_f_0(void)
#line 360 "query.m"
{
#line 513 "query.m"
  {
#line 513 "query.m"
    MR_bool query__succeeded;

#line 513 "query.m"
    return (MR_Word) &query_scalar_common_2[8];
#line 513 "query.m"
  }
#line 360 "query.m"
}

#line 359 "query.m"
MR_Word MR_CALL 
query__default_module_qual_0_f_0(void)
#line 359 "query.m"
{
#line 512 "query.m"
  {
#line 512 "query.m"
    MR_bool query__succeeded;

#line 512 "query.m"
    return (MR_Integer) 1;
#line 512 "query.m"
  }
#line 359 "query.m"
}

#line 358 "query.m"
MR_Word MR_CALL 
query__default_time_format_0_f_0(void)
#line 358 "query.m"
{
#line 511 "query.m"
  {
#line 511 "query.m"
    MR_bool query__succeeded;

#line 511 "query.m"
    return (MR_Integer) 2;
#line 511 "query.m"
  }
#line 358 "query.m"
}

#line 357 "query.m"
MR_Word MR_CALL 
query__default_contour_exclusion_0_f_0(void)
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
query__default_scope_0_f_0(void)
#line 356 "query.m"
{
#line 509 "query.m"
  {
#line 509 "query.m"
    MR_bool query__succeeded;

#line 509 "query.m"
    return (MR_Integer) 1;
#line 509 "query.m"
  }
#line 356 "query.m"
}

#line 355 "query.m"
MR_Word MR_CALL 
query__default_incl_desc_0_f_0(void)
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
query__default_cost_kind_0_f_0(void)
#line 354 "query.m"
{
#line 507 "query.m"
  {
#line 507 "query.m"
    MR_bool query__succeeded;

#line 507 "query.m"
    return (MR_Integer) 3;
#line 507 "query.m"
  }
#line 354 "query.m"
}

#line 353 "query.m"
MR_Word MR_CALL 
query__default_order_criteria_0_f_0(void)
#line 353 "query.m"
{
#line 506 "query.m"
  {
#line 506 "query.m"
    MR_bool query__succeeded;

#line 506 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "query.m"
  }
#line 353 "query.m"
}

#line 352 "query.m"
MR_Word MR_CALL 
query__default_summarize_ho_call_sites_0_f_0(void)
#line 352 "query.m"
{
#line 505 "query.m"
  {
#line 505 "query.m"
    MR_bool query__succeeded;

#line 505 "query.m"
    return (MR_Integer) 1;
#line 505 "query.m"
  }
#line 352 "query.m"
}

#line 351 "query.m"
MR_Integer MR_CALL 
query__default_proc_statics_per_rec_type_limit_0_f_0(void)
#line 351 "query.m"
{
#line 504 "query.m"
  {
#line 504 "query.m"
    MR_bool query__succeeded;

#line 504 "query.m"
    return (MR_Integer) 20;
#line 504 "query.m"
  }
#line 351 "query.m"
}

#line 350 "query.m"
MR_Word MR_CALL 
query__default_ancestor_limit_0_f_0(void)
#line 350 "query.m"
{
#line 503 "query.m"
  {
#line 503 "query.m"
    MR_bool query__succeeded;

#line 503 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[7]);
#line 503 "query.m"
  }
#line 350 "query.m"
}

#line 349 "query.m"
MR_Word MR_CALL 
query__default_colour_column_groups_0_f_0(void)
#line 349 "query.m"
{
#line 502 "query.m"
  {
#line 502 "query.m"
    MR_bool query__succeeded;

#line 502 "query.m"
    return (MR_Integer) 0;
#line 502 "query.m"
  }
#line 349 "query.m"
}

#line 348 "query.m"
MR_Word MR_CALL 
query__default_box_tables_0_f_0(void)
#line 348 "query.m"
{
#line 501 "query.m"
  {
#line 501 "query.m"
    MR_bool query__succeeded;

#line 501 "query.m"
    return (MR_Integer) 0;
#line 501 "query.m"
  }
#line 348 "query.m"
}

#line 347 "query.m"
MR_Word MR_CALL 
query__all_fields_0_f_0(void)
#line 347 "query.m"
{
#line 498 "query.m"
  {
#line 498 "query.m"
    MR_bool query__succeeded;

#line 498 "query.m"
    return (MR_Word) &query_scalar_common_1[3];
#line 498 "query.m"
  }
#line 347 "query.m"
}

#line 346 "query.m"
MR_Word MR_CALL 
query__default_fields_1_f_0(
#line 346 "query.m"
  MR_Word query__Deep_3)
#line 346 "query.m"
{
#line 487 "query.m"
  {
#line 487 "query.m"
    MR_bool query__succeeded;
#line 487 "query.m"
    MR_Word query__Fields_4;
#line 487 "query.m"
    MR_Word query__Time_6;
#line 452 "query.m"
    MR_Integer query__V_13_13;
#line 452 "query.m"
    MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 452 "query.m"
    MR_String query__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 452 "query.m"
    MR_String query__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 452 "query.m"
    MR_String query__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 452 "query.m"
    MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 452 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 452 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 452 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 452 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 452 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 452 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 452 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 452 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 452 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 452 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 452 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 452 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 452 "query.m"
    MR_ArrayPtr query__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 452 "query.m"
    MR_ArrayPtr query__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 452 "query.m"
    MR_ArrayPtr query__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 452 "query.m"
    MR_ArrayPtr query__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 452 "query.m"
    MR_ArrayPtr query__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 452 "query.m"
    MR_ArrayPtr query__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 452 "query.m"
    MR_ArrayPtr query__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 452 "query.m"
    MR_ArrayPtr query__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 452 "query.m"
    MR_Word query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 452 "query.m"
    MR_Word query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 452 "query.m"
    MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 452 "query.m"
    MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 452 "query.m"
    MR_String query__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 0)));
#line 452 "query.m"
    MR_Integer query__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 1)));
#line 452 "query.m"
    MR_Integer query__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 2)));
#line 452 "query.m"
    MR_Integer query__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 3)));
#line 452 "query.m"
    MR_Integer query__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 4)));
#line 452 "query.m"
    MR_Integer query__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 5)));
#line 452 "query.m"
    MR_Integer query__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 6)));
#line 452 "query.m"
    MR_Integer query__V_51_51;
#line 452 "query.m"
    MR_Word query__V_52_52;

#line 452 "query.m"
    query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 7)));
#line 452 "query.m"
    query__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 8)));
#line 452 "query.m"
    query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 9)));
#line 452 "query.m"
    query__succeeded = (query__V_13_13 > (MR_Integer) 10);
#line 15492 "query.c"
    if (query__succeeded)
#line 491 "query.m"
      query__Time_6 = (MR_Integer) 1;
#line 15496 "query.c"
    else
#line 494 "query.m"
      query__Time_6 = (MR_Integer) 0;
#line 496 "query.m"
    {
#line 496 "query.m"
      query__Fields_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 0) = ((MR_Box) (((MR_Integer) 1 | ((((query__Time_6 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 0 << (MR_Integer) 6)))))))));
#line 496 "query.m"
      MR_hl_field(MR_mktag(0), query__Fields_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[0])));
#line 496 "query.m"
    }
#line 487 "query.m"
    return query__Fields_4;
#line 487 "query.m"
  }
#line 346 "query.m"
}

#line 344 "query.m"
MR_Word MR_CALL 
query__default_preferences_1_f_0(
#line 344 "query.m"
  MR_Word query__Deep_3)
#line 344 "query.m"
{
#line 471 "query.m"
  {
#line 471 "query.m"
    MR_bool query__succeeded;
#line 471 "query.m"
    MR_Word query__HeadVar__2_2;
#line 471 "query.m"
    MR_Word query__V_4_4;

#line 473 "query.m"
    {
#line 473 "query.m"
      query__V_4_4 = query__default_fields_1_f_0(query__Deep_3);
    }
#line 472 "query.m"
    {
#line 472 "query.m"
      query__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 0) = ((MR_Box) (query__V_4_4));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 1) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[7])));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 4) = ((MR_Box) ((MR_Integer) 1));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 6) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 2 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[8]));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 8) = ((MR_Box) ((MR_Integer) 1));
#line 472 "query.m"
    }
#line 471 "query.m"
    return query__HeadVar__2_2;
#line 471 "query.m"
  }
#line 344 "query.m"
}

#line 342 "query.m"
MR_Word MR_CALL 
query__solidify_preference_2_f_0(
#line 342 "query.m"
  MR_Word query__Deep_4,
#line 342 "query.m"
  MR_Word query__PrefInd_5)
#line 342 "query.m"
{
#line 462 "query.m"
  {
#line 462 "query.m"
    MR_bool query__succeeded;
#line 462 "query.m"
    MR_Word query__Pref_6;

#line 462 "query.m"
    if ((query__PrefInd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 467 "query.m"
      {
#line 467 "query.m"
        MR_Word query__V_7_7;
#line 468 "query.m"
        MR_Word query__V_10_10;
#line 468 "query.m"
        MR_Word query__V_11_11;
#line 468 "query.m"
        MR_Word query__V_12_12;
#line 468 "query.m"
        MR_Integer query__V_13_13;
#line 468 "query.m"
        MR_Word query__V_14_14;
#line 468 "query.m"
        MR_Word query__V_15_15;
#line 468 "query.m"
        MR_Word query__V_16_16;
#line 468 "query.m"
        MR_Word query__V_17_17;
#line 468 "query.m"
        MR_Word query__V_18_18;
#line 468 "query.m"
        MR_Word query__V_19_19;
#line 468 "query.m"
        MR_Word query__V_20_20;
#line 468 "query.m"
        MR_Word query__V_9_9;

#line 468 "query.m"
        {
#line 468 "query.m"
          query__V_7_7 = query__default_preferences_1_f_0(query__Deep_4);
        }
#line 468 "query.m"
        query__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 0)));
#line 468 "query.m"
        query__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 468 "query.m"
        query__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 468 "query.m"
        query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 2)));
#line 468 "query.m"
        query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 3)));
#line 468 "query.m"
        query__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 4)));
#line 468 "query.m"
        query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 5)));
#line 468 "query.m"
        query__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 468 "query.m"
        query__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 3);
#line 468 "query.m"
        query__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 6)))) >> (MR_Integer) 3)) & (MR_Integer) 3);
#line 468 "query.m"
        query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 7)));
#line 468 "query.m"
        query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_7_7, (MR_Integer) 8)));
#line 468 "query.m"
        {
#line 468 "query.m"
          query__Pref_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 0) = ((MR_Box) (&query_scalar_common_1[3]));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 1) = ((MR_Box) ((query__V_10_10 | ((query__V_11_11 << (MR_Integer) 1)))));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 2) = ((MR_Box) (query__V_12_12));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 3) = ((MR_Box) (query__V_13_13));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 4) = ((MR_Box) (query__V_14_14));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 5) = ((MR_Box) (query__V_15_15));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 6) = ((MR_Box) ((query__V_16_16 | ((((query__V_17_17 << (MR_Integer) 1)) | ((query__V_18_18 << (MR_Integer) 3)))))));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 7) = ((MR_Box) (query__V_19_19));
#line 468 "query.m"
          MR_hl_field(MR_mktag(0), query__Pref_6, 8) = ((MR_Box) (query__V_20_20));
#line 468 "query.m"
        }
#line 467 "query.m"
      }
#line 462 "query.m"
    else
#line 462 "query.m"
      if ((query__PrefInd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "query.m"
        {
#line 465 "query.m"
          return query__Pref_6 = query__default_preferences_1_f_0(query__Deep_4);
        }
#line 462 "query.m"
      else
#line 462 "query.m"
        query__Pref_6 = (MR_Word) MR_body(((MR_Word) query__PrefInd_5), (MR_Integer) 1);
#line 462 "query.m"
    return query__Pref_6;
#line 462 "query.m"
  }
#line 342 "query.m"
}

#line 340 "query.m"
MR_Word MR_CALL 
query__default_command_0_f_0(void)
#line 340 "query.m"
{
#line 458 "query.m"
  {
#line 458 "query.m"
    MR_bool query__succeeded;

#line 458 "query.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 458 "query.m"
  }
#line 340 "query.m"
}

#line 338 "query.m"
MR_Word MR_CALL 
query__should_display_times_1_f_0(
#line 338 "query.m"
  MR_Word query__Deep_3)
#line 338 "query.m"
{
#line 451 "query.m"
  {
#line 451 "query.m"
    MR_bool query__succeeded;
#line 451 "query.m"
    MR_Word query__HeadVar__2_2;
#line 452 "query.m"
    MR_Integer query__V_4_4;
#line 452 "query.m"
    MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 452 "query.m"
    MR_String query__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 452 "query.m"
    MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 452 "query.m"
    MR_String query__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 452 "query.m"
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 452 "query.m"
    MR_ArrayPtr query__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 452 "query.m"
    MR_ArrayPtr query__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 452 "query.m"
    MR_ArrayPtr query__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 452 "query.m"
    MR_ArrayPtr query__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 452 "query.m"
    MR_ArrayPtr query__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 452 "query.m"
    MR_ArrayPtr query__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 452 "query.m"
    MR_ArrayPtr query__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 452 "query.m"
    MR_ArrayPtr query__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 452 "query.m"
    MR_ArrayPtr query__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 452 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 452 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 452 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 452 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 452 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 452 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 452 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 452 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 452 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 452 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 452 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 452 "query.m"
    MR_Word query__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 452 "query.m"
    MR_Word query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 452 "query.m"
    MR_Word query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 452 "query.m"
    MR_Word query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 452 "query.m"
    MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 0)));
#line 452 "query.m"
    MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 1)));
#line 452 "query.m"
    MR_Integer query__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 2)));
#line 452 "query.m"
    MR_Integer query__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 3)));
#line 452 "query.m"
    MR_Integer query__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 4)));
#line 452 "query.m"
    MR_Integer query__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 5)));
#line 452 "query.m"
    MR_Integer query__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 6)));
#line 452 "query.m"
    MR_Integer query__V_42_42;
#line 452 "query.m"
    MR_Word query__V_43_43;

#line 452 "query.m"
    query__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 7)));
#line 452 "query.m"
    query__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 8)));
#line 452 "query.m"
    query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 9)));
#line 452 "query.m"
    query__succeeded = (query__V_4_4 > (MR_Integer) 10);
#line 451 "query.m"
    if (query__succeeded)
#line 453 "query.m"
      query__HeadVar__2_2 = (MR_Integer) 1;
#line 451 "query.m"
    else
#line 455 "query.m"
      query__HeadVar__2_2 = (MR_Integer) 0;
#line 451 "query.m"
    return query__HeadVar__2_2;
#line 451 "query.m"
  }
#line 338 "query.m"
}

#line 68 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_pref_1_f_0(
#line 68 "query.m"
  MR_String query__QueryString_3)
#line 68 "query.m"
{
#line 868 "query.m"
  {
#line 868 "query.m"
    MR_bool query__succeeded;
#line 868 "query.m"
    MR_Word query__MaybePreferences_4;
#line 868 "query.m"
    MR_Word query__Pieces_5;
#line 899 "query.m"
    MR_Word query__Fields_18;
#line 899 "query.m"
    MR_Word query__Box_19;
#line 899 "query.m"
    MR_Word query__Colour_20;
#line 899 "query.m"
    MR_Word query__MaybeAncestorLimit_22;
#line 899 "query.m"
    MR_Integer query__ProcStaticsPerRecTypeLimit_23;
#line 899 "query.m"
    MR_Word query__SummarizeHoCallSites_24;
#line 899 "query.m"
    MR_Word query__Order_25;
#line 899 "query.m"
    MR_Word query__Contour_26;
#line 899 "query.m"
    MR_Word query__Time_27;
#line 899 "query.m"
    MR_Word query__ModuleQual_28;
#line 899 "query.m"
    MR_Word query__InactiveItems_29;
#line 899 "query.m"
    MR_Word query__DeveloperMode_30;
#line 874 "query.m"
    MR_String query__FieldsStr_6;
#line 874 "query.m"
    MR_String query__BoxStr_7;
#line 874 "query.m"
    MR_String query__ColourStr_8;
#line 874 "query.m"
    MR_String query__MaybeAncestorLimitStr_9;
#line 874 "query.m"
    MR_String query__ProcStaticsPerRecTypeLimitStr_10;
#line 874 "query.m"
    MR_String query__SummarizeHoCallSitesStr_11;
#line 874 "query.m"
    MR_String query__OrderStr_12;
#line 874 "query.m"
    MR_String query__ContourStr_13;
#line 874 "query.m"
    MR_String query__TimeStr_14;
#line 874 "query.m"
    MR_String query__ModuleQualStr_15;
#line 874 "query.m"
    MR_String query__InactiveItemsStr_16;
#line 874 "query.m"
    MR_String query__DeveloperModeStr_17;
#line 874 "query.m"
    MR_Word query__V_33_33;
#line 874 "query.m"
    MR_Word query__V_34_34;
#line 874 "query.m"
    MR_Word query__V_35_35;
#line 874 "query.m"
    MR_Word query__V_36_36;
#line 874 "query.m"
    MR_Word query__V_37_37;
#line 874 "query.m"
    MR_Word query__V_38_38;
#line 874 "query.m"
    MR_Word query__V_39_39;
#line 874 "query.m"
    MR_Word query__V_40_40;
#line 874 "query.m"
    MR_Word query__V_41_41;
#line 874 "query.m"
    MR_Word query__V_42_42;
#line 874 "query.m"
    MR_Word query__V_43_43;
#line 874 "query.m"
    MR_Word query__V_44_44;
#line 874 "query.m"
    MR_Word query__Pieces_47;
#line 874 "query.m"
    MR_String query__PortStr_48;
#line 874 "query.m"
    MR_String query__TimeStr_49;
#line 874 "query.m"
    MR_String query__CallSeqsStr_50;
#line 874 "query.m"
    MR_String query__AllocStr_51;
#line 874 "query.m"
    MR_String query__MemoryStr_52;
#line 874 "query.m"
    MR_Word query__Port_53;
#line 874 "query.m"
    MR_Word query__Time_54;
#line 874 "query.m"
    MR_Word query__CallSeqs_55;
#line 874 "query.m"
    MR_Word query__Alloc_56;
#line 874 "query.m"
    MR_Word query__Memory_57;
#line 874 "query.m"
    MR_Char query__V_58_58;
#line 874 "query.m"
    MR_Word query__V_59_59;
#line 874 "query.m"
    MR_Word query__V_60_60;
#line 874 "query.m"
    MR_Word query__V_61_61;
#line 874 "query.m"
    MR_Word query__V_62_62;
#line 874 "query.m"
    MR_Word query__V_63_63;
#line 880 "query.m"
    MR_Integer query__AncestorLimit_21;

#line 869 "query.m"
    {
#line 869 "query.m"
      util__split_3_p_0(query__QueryString_3, (MR_Char) 47, &query__Pieces_5);
    }
#line 871 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
    if (query__succeeded)
#line 871 "query.m"
      {
#line 871 "query.m"
        query__FieldsStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 871 "query.m"
        query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 871 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
        if (query__succeeded)
#line 871 "query.m"
          {
#line 871 "query.m"
            query__BoxStr_7 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 0)));
#line 871 "query.m"
            query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_33_33, (MR_Integer) 1)));
#line 871 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_34_34)) == (MR_mktag((MR_Integer) 1)));
#line 871 "query.m"
            if (query__succeeded)
#line 871 "query.m"
              {
#line 871 "query.m"
                query__ColourStr_8 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 0)));
#line 871 "query.m"
                query__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_34_34, (MR_Integer) 1)));
#line 872 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                if (query__succeeded)
#line 872 "query.m"
                  {
#line 872 "query.m"
                    query__MaybeAncestorLimitStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 0)));
#line 872 "query.m"
                    query__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_35_35, (MR_Integer) 1)));
#line 872 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 872 "query.m"
                    if (query__succeeded)
#line 872 "query.m"
                      {
#line 872 "query.m"
                        query__ProcStaticsPerRecTypeLimitStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 0)));
#line 872 "query.m"
                        query__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_36_36, (MR_Integer) 1)));
#line 873 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                        if (query__succeeded)
#line 873 "query.m"
                          {
#line 873 "query.m"
                            query__SummarizeHoCallSitesStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 0)));
#line 873 "query.m"
                            query__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_37_37, (MR_Integer) 1)));
#line 873 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                            if (query__succeeded)
#line 873 "query.m"
                              {
#line 873 "query.m"
                                query__OrderStr_12 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 0)));
#line 873 "query.m"
                                query__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_38_38, (MR_Integer) 1)));
#line 873 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                                if (query__succeeded)
#line 873 "query.m"
                                  {
#line 873 "query.m"
                                    query__ContourStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 0)));
#line 873 "query.m"
                                    query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_39_39, (MR_Integer) 1)));
#line 873 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 873 "query.m"
                                    if (query__succeeded)
#line 873 "query.m"
                                      {
#line 873 "query.m"
                                        query__TimeStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 0)));
#line 873 "query.m"
                                        query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_40_40, (MR_Integer) 1)));
#line 874 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 874 "query.m"
                                        if (query__succeeded)
#line 874 "query.m"
                                          {
#line 874 "query.m"
                                            query__ModuleQualStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 0)));
#line 874 "query.m"
                                            query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_41_41, (MR_Integer) 1)));
#line 874 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 874 "query.m"
                                            if (query__succeeded)
#line 874 "query.m"
                                              {
#line 874 "query.m"
                                                query__InactiveItemsStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 0)));
#line 874 "query.m"
                                                query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_42_42, (MR_Integer) 1)));
#line 874 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 874 "query.m"
                                                if (query__succeeded)
#line 874 "query.m"
                                                  {
#line 874 "query.m"
                                                    query__DeveloperModeStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 0)));
#line 874 "query.m"
                                                    query__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_43_43, (MR_Integer) 1)));
#line 874 "query.m"
                                                    query__succeeded = (query__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "query.m"
                                                    if (query__succeeded)
#line 874 "query.m"
                                                      {
#line 530 "query.m"
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
#line 874 "query.m"
                                                                            if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                if (query__succeeded)
#line 874 "query.m"
                                                                                  {
#line 985 "query.m"
                                                                                    if ((strcmp(query__TimeStr_49, (MR_String) "_") == 0))
#line 985 "query.m"
                                                                                      {
#line 985 "query.m"
                                                                                        query__Time_54 = (MR_Integer) 0;
#line 985 "query.m"
                                                                                        query__succeeded = MR_TRUE;
#line 985 "query.m"
                                                                                      }
#line 985 "query.m"
                                                                                    else
#line 985 "query.m"
                                                                                      if ((strcmp(query__TimeStr_49, (MR_String) "q") == 0))
#line 986 "query.m"
                                                                                        {
#line 986 "query.m"
                                                                                          query__Time_54 = (MR_Integer) 1;
#line 986 "query.m"
                                                                                          query__succeeded = MR_TRUE;
#line 986 "query.m"
                                                                                        }
#line 985 "query.m"
                                                                                      else
#line 985 "query.m"
                                                                                        if ((strcmp(query__TimeStr_49, (MR_String) "t") == 0))
#line 987 "query.m"
                                                                                          {
#line 987 "query.m"
                                                                                            query__Time_54 = (MR_Integer) 2;
#line 987 "query.m"
                                                                                            query__succeeded = MR_TRUE;
#line 987 "query.m"
                                                                                          }
#line 985 "query.m"
                                                                                        else
#line 985 "query.m"
                                                                                          if ((strcmp(query__TimeStr_49, (MR_String) "qt") == 0))
#line 988 "query.m"
                                                                                            {
#line 988 "query.m"
                                                                                              query__Time_54 = (MR_Integer) 3;
#line 988 "query.m"
                                                                                              query__succeeded = MR_TRUE;
#line 988 "query.m"
                                                                                            }
#line 985 "query.m"
                                                                                          else
#line 985 "query.m"
                                                                                            if ((strcmp(query__TimeStr_49, (MR_String) "tp") == 0))
#line 989 "query.m"
                                                                                              {
#line 989 "query.m"
                                                                                                query__Time_54 = (MR_Integer) 4;
#line 989 "query.m"
                                                                                                query__succeeded = MR_TRUE;
#line 989 "query.m"
                                                                                              }
#line 985 "query.m"
                                                                                            else
#line 985 "query.m"
                                                                                              if ((strcmp(query__TimeStr_49, (MR_String) "qtp") == 0))
#line 990 "query.m"
                                                                                                {
#line 990 "query.m"
                                                                                                  query__Time_54 = (MR_Integer) 5;
#line 990 "query.m"
                                                                                                  query__succeeded = MR_TRUE;
#line 990 "query.m"
                                                                                                }
#line 985 "query.m"
                                                                                              else
#line 985 "query.m"
                                                                                                query__succeeded = MR_FALSE;
#line 874 "query.m"
                                                                                    if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                        if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                            if (query__succeeded)
#line 874 "query.m"
                                                                                              {
#line 1027 "query.m"
                                                                                                if ((strcmp(query__MemoryStr_52, (MR_String) "B") == 0))
#line 1030 "query.m"
                                                                                                  {
#line 1030 "query.m"
                                                                                                    query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[6]);
#line 1030 "query.m"
                                                                                                    query__succeeded = MR_TRUE;
#line 1030 "query.m"
                                                                                                  }
#line 1027 "query.m"
                                                                                                else
#line 1027 "query.m"
                                                                                                  if ((strcmp(query__MemoryStr_52, (MR_String) "W") == 0))
#line 1031 "query.m"
                                                                                                    {
#line 1031 "query.m"
                                                                                                      query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[0]);
#line 1031 "query.m"
                                                                                                      query__succeeded = MR_TRUE;
#line 1031 "query.m"
                                                                                                    }
#line 1027 "query.m"
                                                                                                  else
#line 1027 "query.m"
                                                                                                    if ((strcmp(query__MemoryStr_52, (MR_String) "_") == 0))
#line 1027 "query.m"
                                                                                                      {
#line 1027 "query.m"
                                                                                                        query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1027 "query.m"
                                                                                                        query__succeeded = MR_TRUE;
#line 1027 "query.m"
                                                                                                      }
#line 1027 "query.m"
                                                                                                    else
#line 1027 "query.m"
                                                                                                      if ((strcmp(query__MemoryStr_52, (MR_String) "b") == 0))
#line 1028 "query.m"
                                                                                                        {
#line 1028 "query.m"
                                                                                                          query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[6]);
#line 1028 "query.m"
                                                                                                          query__succeeded = MR_TRUE;
#line 1028 "query.m"
                                                                                                        }
#line 1027 "query.m"
                                                                                                      else
#line 1027 "query.m"
                                                                                                        if ((strcmp(query__MemoryStr_52, (MR_String) "w") == 0))
#line 1029 "query.m"
                                                                                                          {
#line 1029 "query.m"
                                                                                                            query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[0]);
#line 1029 "query.m"
                                                                                                            query__succeeded = MR_TRUE;
#line 1029 "query.m"
                                                                                                          }
#line 1027 "query.m"
                                                                                                        else
#line 1027 "query.m"
                                                                                                          query__succeeded = MR_FALSE;
#line 874 "query.m"
                                                                                                if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                    if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                        if (query__succeeded)
#line 874 "query.m"
                                                                                                          {
#line 878 "query.m"
                                                                                                            {
#line 878 "query.m"
                                                                                                              query__succeeded = mercury__string__to_int_2_p_0(query__MaybeAncestorLimitStr_9, &query__AncestorLimit_21);
                                                                                                            }
#line 880 "query.m"
                                                                                                            if (query__succeeded)
#line 879 "query.m"
                                                                                                              {
#line 879 "query.m"
                                                                                                                {
#line 879 "query.m"
                                                                                                                  query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "query.m"
                                                                                                                  MR_hl_field(MR_mktag(1), query__MaybeAncestorLimit_22, 0) = ((MR_Box) (query__AncestorLimit_21));
#line 879 "query.m"
                                                                                                                }
#line 879 "query.m"
                                                                                                                query__succeeded = MR_TRUE;
#line 879 "query.m"
                                                                                                              }
#line 880 "query.m"
                                                                                                            else
#line 882 "query.m"
                                                                                                              {
#line 880 "query.m"
                                                                                                                query__succeeded = (strcmp(query__MaybeAncestorLimitStr_9, (MR_String) "no") == 0);
#line 882 "query.m"
                                                                                                                if (query__succeeded)
#line 882 "query.m"
                                                                                                                  {
#line 881 "query.m"
                                                                                                                    query__MaybeAncestorLimit_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "query.m"
                                                                                                                    query__succeeded = MR_TRUE;
#line 882 "query.m"
                                                                                                                  }
#line 882 "query.m"
                                                                                                              }
#line 874 "query.m"
                                                                                                            if (query__succeeded)
#line 874 "query.m"
                                                                                                              {
#line 885 "query.m"
                                                                                                                {
#line 885 "query.m"
                                                                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__ProcStaticsPerRecTypeLimitStr_10, &query__ProcStaticsPerRecTypeLimit_23);
                                                                                                                }
#line 874 "query.m"
                                                                                                                if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                                    if (query__succeeded)
#line 874 "query.m"
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
                                                                                                                                                        if ((strcmp(query__CostKindStr_71, (MR_String) "time") == 0))
#line 1088 "query.m"
                                                                                                                                                          {
#line 1088 "query.m"
                                                                                                                                                            query__CostKind_74 = (MR_Integer) 2;
#line 1088 "query.m"
                                                                                                                                                            query__succeeded = MR_TRUE;
#line 1088 "query.m"
                                                                                                                                                          }
#line 1086 "query.m"
                                                                                                                                                        else
#line 1086 "query.m"
                                                                                                                                                          if ((strcmp(query__CostKindStr_71, (MR_String) "calls") == 0))
#line 1086 "query.m"
                                                                                                                                                            {
#line 1086 "query.m"
                                                                                                                                                              query__CostKind_74 = (MR_Integer) 0;
#line 1086 "query.m"
                                                                                                                                                              query__succeeded = MR_TRUE;
#line 1086 "query.m"
                                                                                                                                                            }
#line 1086 "query.m"
                                                                                                                                                          else
#line 1086 "query.m"
                                                                                                                                                            if ((strcmp(query__CostKindStr_71, (MR_String) "redos") == 0))
#line 1087 "query.m"
                                                                                                                                                              {
#line 1087 "query.m"
                                                                                                                                                                query__CostKind_74 = (MR_Integer) 1;
#line 1087 "query.m"
                                                                                                                                                                query__succeeded = MR_TRUE;
#line 1087 "query.m"
                                                                                                                                                              }
#line 1086 "query.m"
                                                                                                                                                            else
#line 1086 "query.m"
                                                                                                                                                              if ((strcmp(query__CostKindStr_71, (MR_String) "words") == 0))
#line 1091 "query.m"
                                                                                                                                                                {
#line 1091 "query.m"
                                                                                                                                                                  query__CostKind_74 = (MR_Integer) 5;
#line 1091 "query.m"
                                                                                                                                                                  query__succeeded = MR_TRUE;
#line 1091 "query.m"
                                                                                                                                                                }
#line 1086 "query.m"
                                                                                                                                                              else
#line 1086 "query.m"
                                                                                                                                                                if ((strcmp(query__CostKindStr_71, (MR_String) "allocs") == 0))
#line 1090 "query.m"
                                                                                                                                                                  {
#line 1090 "query.m"
                                                                                                                                                                    query__CostKind_74 = (MR_Integer) 4;
#line 1090 "query.m"
                                                                                                                                                                    query__succeeded = MR_TRUE;
#line 1090 "query.m"
                                                                                                                                                                  }
#line 1086 "query.m"
                                                                                                                                                                else
#line 1086 "query.m"
                                                                                                                                                                  if ((strcmp(query__CostKindStr_71, (MR_String) "callseqs") == 0))
#line 1089 "query.m"
                                                                                                                                                                    {
#line 1089 "query.m"
                                                                                                                                                                      query__CostKind_74 = (MR_Integer) 3;
#line 1089 "query.m"
                                                                                                                                                                      query__succeeded = MR_TRUE;
#line 1089 "query.m"
                                                                                                                                                                    }
#line 1086 "query.m"
                                                                                                                                                                  else
#line 1086 "query.m"
                                                                                                                                                                    query__succeeded = MR_FALSE;
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
#line 874 "query.m"
                                                                                                                        if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                                            if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                                                if (query__succeeded)
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                                                    if (query__succeeded)
#line 874 "query.m"
                                                                                                                                      {
#line 892 "query.m"
                                                                                                                                        {
#line 892 "query.m"
                                                                                                                                          query__succeeded = query__string_to_inactive_items_2_p_0(query__InactiveItemsStr_16, &query__InactiveItems_29);
                                                                                                                                        }
#line 874 "query.m"
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
#line 874 "query.m"
                                                                                                                                      }
#line 874 "query.m"
                                                                                                                                  }
#line 874 "query.m"
                                                                                                                              }
#line 874 "query.m"
                                                                                                                          }
#line 874 "query.m"
                                                                                                                      }
#line 874 "query.m"
                                                                                                                  }
#line 874 "query.m"
                                                                                                              }
#line 874 "query.m"
                                                                                                          }
#line 874 "query.m"
                                                                                                      }
#line 874 "query.m"
                                                                                                  }
#line 874 "query.m"
                                                                                              }
#line 874 "query.m"
                                                                                          }
#line 874 "query.m"
                                                                                      }
#line 874 "query.m"
                                                                                  }
#line 874 "query.m"
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
#line 874 "query.m"
                                                      }
#line 874 "query.m"
                                                  }
#line 874 "query.m"
                                              }
#line 874 "query.m"
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
#line 871 "query.m"
              }
#line 871 "query.m"
          }
#line 871 "query.m"
      }
#line 899 "query.m"
    if (query__succeeded)
#line 897 "query.m"
      {
#line 897 "query.m"
        MR_Word query__Preferences_31;

#line 895 "query.m"
        {
#line 895 "query.m"
          query__Preferences_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 0) = ((MR_Box) (query__Fields_18));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 1) = ((MR_Box) ((query__Box_19 | ((query__Colour_20 << (MR_Integer) 1)))));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 2) = ((MR_Box) (query__MaybeAncestorLimit_22));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 3) = ((MR_Box) (query__ProcStaticsPerRecTypeLimit_23));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 4) = ((MR_Box) (query__SummarizeHoCallSites_24));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 5) = ((MR_Box) (query__Order_25));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 6) = ((MR_Box) ((query__Contour_26 | ((((query__Time_27 << (MR_Integer) 1)) | ((query__ModuleQual_28 << (MR_Integer) 3)))))));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 7) = ((MR_Box) (query__InactiveItems_29));
#line 895 "query.m"
          MR_hl_field(MR_mktag(0), query__Preferences_31, 8) = ((MR_Box) (query__DeveloperMode_30));
#line 895 "query.m"
        }
#line 898 "query.m"
        {
#line 898 "query.m"
          query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybePreferences_4, 0) = ((MR_Box) (query__Preferences_31));
#line 898 "query.m"
        }
#line 897 "query.m"
      }
#line 899 "query.m"
    else
#line 900 "query.m"
      query__MaybePreferences_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "query.m"
    return query__MaybePreferences_4;
#line 868 "query.m"
  }
#line 68 "query.m"
}

#line 66 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_cmd_1_f_0(
#line 66 "query.m"
  MR_String query__QueryString_3)
#line 66 "query.m"
{
#line 706 "query.m"
  {
#line 706 "query.m"
    MR_bool query__succeeded;
#line 706 "query.m"
    MR_Word query__MaybeCmd_4;
#line 706 "query.m"
    MR_Word query__Pieces_5;
#line 706 "query.m"
    MR_Char query__V_44_44;
#line 720 "query.m"
    MR_Word query__MaybePercent_7;
#line 709 "query.m"
    MR_String query__MaybePercentStr_6;
#line 709 "query.m"
    MR_String query__V_45_45;
#line 709 "query.m"
    MR_Word query__V_46_46;
#line 709 "query.m"
    MR_Word query__V_47_47;
#line 709 "query.m"
    MR_String query__V_272_272;

#line 707 "query.m"
    {
#line 707 "query.m"
      query__V_44_44 = query__pref_separator_char_0_f_0();
    }
#line 707 "query.m"
    {
#line 707 "query.m"
      util__split_3_p_0(query__QueryString_3, query__V_44_44, &query__Pieces_5);
    }
#line 709 "query.m"
    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 709 "query.m"
    if (query__succeeded)
#line 709 "query.m"
      {
#line 709 "query.m"
        query__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 709 "query.m"
        query__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 709 "query.m"
        {
#line 709 "query.m"
          query__V_272_272 = query__cmd_str_root_0_f_0();
        }
#line 709 "query.m"
        query__succeeded = (strcmp(query__V_45_45, query__V_272_272) == 0);
#line 709 "query.m"
        if (query__succeeded)
#line 709 "query.m"
          {
#line 709 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__V_46_46)) == (MR_mktag((MR_Integer) 1)));
#line 709 "query.m"
            if (query__succeeded)
#line 709 "query.m"
              {
#line 709 "query.m"
                query__MaybePercentStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 0)));
#line 709 "query.m"
                query__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_46_46, (MR_Integer) 1)));
#line 709 "query.m"
                query__succeeded = (query__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "query.m"
                if (query__succeeded)
#line 709 "query.m"
                  {
#line 710 "query.m"
                    query__succeeded = (strcmp(query__MaybePercentStr_6, (MR_String) "no") == 0);
#line 712 "query.m"
                    if (query__succeeded)
#line 711 "query.m"
                      {
#line 711 "query.m"
                        query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "query.m"
                        query__succeeded = MR_TRUE;
#line 711 "query.m"
                      }
#line 712 "query.m"
                    else
#line 714 "query.m"
                      {
#line 714 "query.m"
                        MR_Integer query__Percent_8;

#line 712 "query.m"
                        {
#line 712 "query.m"
                          query__succeeded = mercury__string__to_int_2_p_0(query__MaybePercentStr_6, &query__Percent_8);
                        }
#line 714 "query.m"
                        if (query__succeeded)
#line 714 "query.m"
                          {
#line 713 "query.m"
                            {
#line 713 "query.m"
                              query__MaybePercent_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybePercent_7, 0) = ((MR_Box) (query__Percent_8));
#line 713 "query.m"
                            }
#line 713 "query.m"
                            query__succeeded = MR_TRUE;
#line 714 "query.m"
                          }
#line 714 "query.m"
                      }
#line 709 "query.m"
                  }
#line 709 "query.m"
              }
#line 709 "query.m"
          }
#line 709 "query.m"
      }
#line 720 "query.m"
    if (query__succeeded)
#line 718 "query.m"
      {
#line 718 "query.m"
        MR_Word query__Cmd_9;

#line 718 "query.m"
        {
#line 718 "query.m"
          query__Cmd_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 718 "query.m"
          MR_hl_field(MR_mktag(2), query__Cmd_9, 0) = ((MR_Box) (query__MaybePercent_7));
#line 718 "query.m"
        }
#line 719 "query.m"
        {
#line 719 "query.m"
          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 719 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_9));
#line 719 "query.m"
        }
#line 718 "query.m"
      }
#line 720 "query.m"
    else
#line 727 "query.m"
      {
#line 727 "query.m"
        MR_Integer query__CliqueNum_11;
#line 721 "query.m"
        MR_String query__CliqueNumStr_10;
#line 721 "query.m"
        MR_String query__V_48_48;
#line 721 "query.m"
        MR_Word query__V_49_49;
#line 721 "query.m"
        MR_Word query__V_50_50;
#line 721 "query.m"
        MR_String query__V_273_273;

#line 721 "query.m"
        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 721 "query.m"
        if (query__succeeded)
#line 721 "query.m"
          {
#line 721 "query.m"
            query__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 721 "query.m"
            query__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 721 "query.m"
            {
#line 721 "query.m"
              query__V_273_273 = query__cmd_str_clique_0_f_0();
            }
#line 721 "query.m"
            query__succeeded = (strcmp(query__V_48_48, query__V_273_273) == 0);
#line 721 "query.m"
            if (query__succeeded)
#line 721 "query.m"
              {
#line 721 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 721 "query.m"
                if (query__succeeded)
#line 721 "query.m"
                  {
#line 721 "query.m"
                    query__CliqueNumStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 0)));
#line 721 "query.m"
                    query__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_49_49, (MR_Integer) 1)));
#line 721 "query.m"
                    query__succeeded = (query__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 721 "query.m"
                    if (query__succeeded)
#line 722 "query.m"
                      {
#line 722 "query.m"
                        query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_10, &query__CliqueNum_11);
                      }
#line 721 "query.m"
                  }
#line 721 "query.m"
              }
#line 721 "query.m"
          }
#line 727 "query.m"
        if (query__succeeded)
#line 724 "query.m"
          {
#line 724 "query.m"
            MR_Word query__CliquePtr_12 = (MR_Word) query__CliqueNum_11;
#line 724 "query.m"
            MR_Word query__Cmd_118;

#line 725 "query.m"
            {
#line 725 "query.m"
              query__Cmd_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 725 "query.m"
              MR_hl_field(MR_mktag(3), query__Cmd_118, 1) = ((MR_Box) (query__CliquePtr_12));
#line 725 "query.m"
            }
#line 726 "query.m"
            {
#line 726 "query.m"
              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 726 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_118));
#line 726 "query.m"
            }
#line 724 "query.m"
          }
#line 727 "query.m"
        else
#line 734 "query.m"
          {
#line 734 "query.m"
            MR_Integer query__CliqueNum_269;
#line 728 "query.m"
            MR_String query__V_51_51;
#line 728 "query.m"
            MR_Word query__V_52_52;
#line 728 "query.m"
            MR_Word query__V_53_53;
#line 728 "query.m"
            MR_String query__CliqueNumStr_119;
#line 728 "query.m"
            MR_String query__V_274_274;

#line 728 "query.m"
            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 728 "query.m"
            if (query__succeeded)
#line 728 "query.m"
              {
#line 728 "query.m"
                query__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 728 "query.m"
                query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 728 "query.m"
                {
#line 728 "query.m"
                  query__V_274_274 = query__cmd_str_clique_recursive_costs_0_f_0();
                }
#line 728 "query.m"
                query__succeeded = (strcmp(query__V_51_51, query__V_274_274) == 0);
#line 728 "query.m"
                if (query__succeeded)
#line 728 "query.m"
                  {
#line 728 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 728 "query.m"
                    if (query__succeeded)
#line 728 "query.m"
                      {
#line 728 "query.m"
                        query__CliqueNumStr_119 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 0)));
#line 728 "query.m"
                        query__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_52_52, (MR_Integer) 1)));
#line 728 "query.m"
                        query__succeeded = (query__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "query.m"
                        if (query__succeeded)
#line 729 "query.m"
                          {
#line 729 "query.m"
                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_119, &query__CliqueNum_269);
                          }
#line 728 "query.m"
                      }
#line 728 "query.m"
                  }
#line 728 "query.m"
              }
#line 734 "query.m"
            if (query__succeeded)
#line 731 "query.m"
              {
#line 731 "query.m"
                MR_Word query__Cmd_120;
#line 731 "query.m"
                MR_Word query__CliquePtr_121 = (MR_Word) query__CliqueNum_269;

#line 732 "query.m"
                {
#line 732 "query.m"
                  query__Cmd_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 732 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 732 "query.m"
                  MR_hl_field(MR_mktag(3), query__Cmd_120, 1) = ((MR_Box) (query__CliquePtr_121));
#line 732 "query.m"
                }
#line 733 "query.m"
                {
#line 733 "query.m"
                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 733 "query.m"
                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_120));
#line 733 "query.m"
                }
#line 731 "query.m"
              }
#line 734 "query.m"
            else
#line 739 "query.m"
              {
#line 735 "query.m"
                MR_String query__V_54_54;
#line 735 "query.m"
                MR_Word query__V_55_55;
#line 735 "query.m"
                MR_String query__V_275_275;

#line 735 "query.m"
                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 735 "query.m"
                if (query__succeeded)
#line 735 "query.m"
                  {
#line 735 "query.m"
                    query__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 735 "query.m"
                    query__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 735 "query.m"
                    {
#line 735 "query.m"
                      query__V_275_275 = query__cmd_str_recursion_types_frequency_0_f_0();
                    }
#line 735 "query.m"
                    query__succeeded = (strcmp(query__V_54_54, query__V_275_275) == 0);
#line 735 "query.m"
                    if (query__succeeded)
#line 735 "query.m"
                      query__succeeded = (query__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 735 "query.m"
                  }
#line 739 "query.m"
                if (query__succeeded)
#line 737 "query.m"
                  {
#line 738 "query.m"
                    query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[1]);
#line 737 "query.m"
                  }
#line 739 "query.m"
                else
#line 746 "query.m"
                  {
#line 746 "query.m"
                    MR_Integer query__PSI_14;
#line 740 "query.m"
                    MR_String query__PSIStr_13;
#line 740 "query.m"
                    MR_String query__V_56_56;
#line 740 "query.m"
                    MR_Word query__V_57_57;
#line 740 "query.m"
                    MR_Word query__V_58_58;
#line 740 "query.m"
                    MR_String query__V_276_276;

#line 740 "query.m"
                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 740 "query.m"
                    if (query__succeeded)
#line 740 "query.m"
                      {
#line 740 "query.m"
                        query__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 740 "query.m"
                        query__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 740 "query.m"
                        {
#line 740 "query.m"
                          query__V_276_276 = query__cmd_str_proc_0_f_0();
                        }
#line 740 "query.m"
                        query__succeeded = (strcmp(query__V_56_56, query__V_276_276) == 0);
#line 740 "query.m"
                        if (query__succeeded)
#line 740 "query.m"
                          {
#line 740 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 740 "query.m"
                            if (query__succeeded)
#line 740 "query.m"
                              {
#line 740 "query.m"
                                query__PSIStr_13 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 0)));
#line 740 "query.m"
                                query__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_57_57, (MR_Integer) 1)));
#line 740 "query.m"
                                query__succeeded = (query__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "query.m"
                                if (query__succeeded)
#line 741 "query.m"
                                  {
#line 741 "query.m"
                                    query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_13, &query__PSI_14);
                                  }
#line 740 "query.m"
                              }
#line 740 "query.m"
                          }
#line 740 "query.m"
                      }
#line 746 "query.m"
                    if (query__succeeded)
#line 743 "query.m"
                      {
#line 743 "query.m"
                        MR_Word query__PSPtr_15 = (MR_Word) query__PSI_14;
#line 743 "query.m"
                        MR_Word query__Cmd_123;

#line 744 "query.m"
                        {
#line 744 "query.m"
                          query__Cmd_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 744 "query.m"
                          MR_hl_field(MR_mktag(3), query__Cmd_123, 1) = ((MR_Box) (query__PSPtr_15));
#line 744 "query.m"
                        }
#line 745 "query.m"
                        {
#line 745 "query.m"
                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "query.m"
                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_123));
#line 745 "query.m"
                        }
#line 743 "query.m"
                      }
#line 746 "query.m"
                    else
#line 759 "query.m"
                      {
#line 759 "query.m"
                        MR_Word query__GroupCallers_20;
#line 759 "query.m"
                        MR_Integer query__BunchNum_21;
#line 759 "query.m"
                        MR_Integer query__CallersPerBunch_22;
#line 759 "query.m"
                        MR_Word query__Contour_23;
#line 759 "query.m"
                        MR_Integer query__PSI_257;
#line 748 "query.m"
                        MR_String query__GroupCallersStr_16;
#line 748 "query.m"
                        MR_String query__BunchNumStr_17;
#line 748 "query.m"
                        MR_String query__CallersPerBunchStr_18;
#line 748 "query.m"
                        MR_String query__ContourStr_19;
#line 748 "query.m"
                        MR_String query__V_59_59;
#line 748 "query.m"
                        MR_Word query__V_60_60;
#line 748 "query.m"
                        MR_Word query__V_61_61;
#line 748 "query.m"
                        MR_Word query__V_62_62;
#line 748 "query.m"
                        MR_Word query__V_63_63;
#line 748 "query.m"
                        MR_Word query__V_64_64;
#line 748 "query.m"
                        MR_Word query__V_65_65;
#line 748 "query.m"
                        MR_String query__PSIStr_124;
#line 748 "query.m"
                        MR_String query__V_277_277;

#line 747 "query.m"
                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                        if (query__succeeded)
#line 747 "query.m"
                          {
#line 747 "query.m"
                            query__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 747 "query.m"
                            query__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 747 "query.m"
                            {
#line 747 "query.m"
                              query__V_277_277 = query__cmd_str_proc_callers_0_f_0();
                            }
#line 747 "query.m"
                            query__succeeded = (strcmp(query__V_59_59, query__V_277_277) == 0);
#line 748 "query.m"
                            if (query__succeeded)
#line 748 "query.m"
                              {
#line 747 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__V_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                                if (query__succeeded)
#line 747 "query.m"
                                  {
#line 747 "query.m"
                                    query__PSIStr_124 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 0)));
#line 747 "query.m"
                                    query__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_60_60, (MR_Integer) 1)));
#line 747 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                                    if (query__succeeded)
#line 747 "query.m"
                                      {
#line 747 "query.m"
                                        query__GroupCallersStr_16 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 0)));
#line 747 "query.m"
                                        query__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_61_61, (MR_Integer) 1)));
#line 747 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 747 "query.m"
                                        if (query__succeeded)
#line 747 "query.m"
                                          {
#line 747 "query.m"
                                            query__BunchNumStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 0)));
#line 747 "query.m"
                                            query__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_62_62, (MR_Integer) 1)));
#line 748 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_63_63)) == (MR_mktag((MR_Integer) 1)));
#line 748 "query.m"
                                            if (query__succeeded)
#line 748 "query.m"
                                              {
#line 748 "query.m"
                                                query__CallersPerBunchStr_18 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 0)));
#line 748 "query.m"
                                                query__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_63_63, (MR_Integer) 1)));
#line 748 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 748 "query.m"
                                                if (query__succeeded)
#line 748 "query.m"
                                                  {
#line 748 "query.m"
                                                    query__ContourStr_19 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 0)));
#line 748 "query.m"
                                                    query__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_64_64, (MR_Integer) 1)));
#line 748 "query.m"
                                                    query__succeeded = (query__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "query.m"
                                                    if (query__succeeded)
#line 748 "query.m"
                                                      {
#line 749 "query.m"
                                                        {
#line 749 "query.m"
                                                          query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_124, &query__PSI_257);
                                                        }
#line 748 "query.m"
                                                        if (query__succeeded)
#line 748 "query.m"
                                                          {
#line 750 "query.m"
                                                            {
#line 750 "query.m"
                                                              query__succeeded = query__string_to_caller_groups_2_p_0(query__GroupCallersStr_16, &query__GroupCallers_20);
                                                            }
#line 748 "query.m"
                                                            if (query__succeeded)
#line 748 "query.m"
                                                              {
#line 751 "query.m"
                                                                {
#line 751 "query.m"
                                                                  query__succeeded = mercury__string__to_int_2_p_0(query__BunchNumStr_17, &query__BunchNum_21);
                                                                }
#line 748 "query.m"
                                                                if (query__succeeded)
#line 748 "query.m"
                                                                  {
#line 752 "query.m"
                                                                    {
#line 752 "query.m"
                                                                      query__succeeded = mercury__string__to_int_2_p_0(query__CallersPerBunchStr_18, &query__CallersPerBunch_22);
                                                                    }
#line 748 "query.m"
                                                                    if (query__succeeded)
#line 753 "query.m"
                                                                      {
#line 753 "query.m"
                                                                        query__succeeded = query__string_to_contour_exclusion_2_p_0(query__ContourStr_19, &query__Contour_23);
                                                                      }
#line 748 "query.m"
                                                                  }
#line 748 "query.m"
                                                              }
#line 748 "query.m"
                                                          }
#line 748 "query.m"
                                                      }
#line 748 "query.m"
                                                  }
#line 748 "query.m"
                                              }
#line 747 "query.m"
                                          }
#line 747 "query.m"
                                      }
#line 747 "query.m"
                                  }
#line 748 "query.m"
                              }
#line 747 "query.m"
                          }
#line 759 "query.m"
                        if (query__succeeded)
#line 755 "query.m"
                          {
#line 755 "query.m"
                            MR_Word query__Cmd_125;
#line 755 "query.m"
                            MR_Word query__PSPtr_126 = (MR_Word) query__PSI_257;

#line 756 "query.m"
                            {
#line 756 "query.m"
                              query__Cmd_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 1) = ((MR_Box) (query__PSPtr_126));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 2) = ((MR_Box) (query__GroupCallers_20));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 3) = ((MR_Box) (query__BunchNum_21));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 4) = ((MR_Box) (query__CallersPerBunch_22));
#line 756 "query.m"
                              MR_hl_field(MR_mktag(3), query__Cmd_125, 5) = ((MR_Box) (query__Contour_23));
#line 756 "query.m"
                            }
#line 758 "query.m"
                            {
#line 758 "query.m"
                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 758 "query.m"
                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_125));
#line 758 "query.m"
                            }
#line 755 "query.m"
                          }
#line 759 "query.m"
                        else
#line 764 "query.m"
                          {
#line 760 "query.m"
                            MR_String query__V_66_66;
#line 760 "query.m"
                            MR_Word query__V_67_67;
#line 760 "query.m"
                            MR_String query__V_278_278;

#line 760 "query.m"
                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 760 "query.m"
                            if (query__succeeded)
#line 760 "query.m"
                              {
#line 760 "query.m"
                                query__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 760 "query.m"
                                query__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 760 "query.m"
                                {
#line 760 "query.m"
                                  query__V_278_278 = query__cmd_str_program_modules_0_f_0();
                                }
#line 760 "query.m"
                                query__succeeded = (strcmp(query__V_66_66, query__V_278_278) == 0);
#line 760 "query.m"
                                if (query__succeeded)
#line 760 "query.m"
                                  query__succeeded = (query__V_67_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "query.m"
                              }
#line 764 "query.m"
                            if (query__succeeded)
#line 762 "query.m"
                              {
#line 763 "query.m"
                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[2]);
#line 762 "query.m"
                              }
#line 764 "query.m"
                            else
#line 769 "query.m"
                              {
#line 769 "query.m"
                                MR_String query__ModuleName_24;
#line 765 "query.m"
                                MR_String query__V_68_68;
#line 765 "query.m"
                                MR_Word query__V_69_69;
#line 765 "query.m"
                                MR_Word query__V_70_70;
#line 765 "query.m"
                                MR_String query__V_279_279;

#line 765 "query.m"
                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 765 "query.m"
                                if (query__succeeded)
#line 765 "query.m"
                                  {
#line 765 "query.m"
                                    query__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 765 "query.m"
                                    query__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 765 "query.m"
                                    {
#line 765 "query.m"
                                      query__V_279_279 = query__cmd_str_module_0_f_0();
                                    }
#line 765 "query.m"
                                    query__succeeded = (strcmp(query__V_68_68, query__V_279_279) == 0);
#line 765 "query.m"
                                    if (query__succeeded)
#line 765 "query.m"
                                      {
#line 765 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 765 "query.m"
                                        if (query__succeeded)
#line 765 "query.m"
                                          {
#line 765 "query.m"
                                            query__ModuleName_24 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 0)));
#line 765 "query.m"
                                            query__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_69_69, (MR_Integer) 1)));
#line 765 "query.m"
                                            query__succeeded = (query__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "query.m"
                                          }
#line 765 "query.m"
                                      }
#line 765 "query.m"
                                  }
#line 769 "query.m"
                                if (query__succeeded)
#line 767 "query.m"
                                  {
#line 767 "query.m"
                                    MR_Word query__Cmd_128;

#line 767 "query.m"
                                    {
#line 767 "query.m"
                                      query__Cmd_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 767 "query.m"
                                      MR_hl_field(MR_mktag(3), query__Cmd_128, 1) = ((MR_Box) (query__ModuleName_24));
#line 767 "query.m"
                                    }
#line 768 "query.m"
                                    {
#line 768 "query.m"
                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 768 "query.m"
                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_128));
#line 768 "query.m"
                                    }
#line 767 "query.m"
                                  }
#line 769 "query.m"
                                else
#line 774 "query.m"
                                  {
#line 774 "query.m"
                                    MR_String query__ModuleName_237;
#line 770 "query.m"
                                    MR_String query__V_71_71;
#line 770 "query.m"
                                    MR_Word query__V_72_72;
#line 770 "query.m"
                                    MR_Word query__V_73_73;
#line 770 "query.m"
                                    MR_String query__V_280_280;

#line 770 "query.m"
                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 770 "query.m"
                                    if (query__succeeded)
#line 770 "query.m"
                                      {
#line 770 "query.m"
                                        query__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 770 "query.m"
                                        query__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 770 "query.m"
                                        {
#line 770 "query.m"
                                          query__V_280_280 = query__cmd_str_module_getter_setters_0_f_0();
                                        }
#line 770 "query.m"
                                        query__succeeded = (strcmp(query__V_71_71, query__V_280_280) == 0);
#line 770 "query.m"
                                        if (query__succeeded)
#line 770 "query.m"
                                          {
#line 770 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 770 "query.m"
                                            if (query__succeeded)
#line 770 "query.m"
                                              {
#line 770 "query.m"
                                                query__ModuleName_237 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 0)));
#line 770 "query.m"
                                                query__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_72_72, (MR_Integer) 1)));
#line 770 "query.m"
                                                query__succeeded = (query__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "query.m"
                                              }
#line 770 "query.m"
                                          }
#line 770 "query.m"
                                      }
#line 774 "query.m"
                                    if (query__succeeded)
#line 772 "query.m"
                                      {
#line 772 "query.m"
                                        MR_Word query__Cmd_129;

#line 772 "query.m"
                                        {
#line 772 "query.m"
                                          query__Cmd_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 772 "query.m"
                                          MR_hl_field(MR_mktag(3), query__Cmd_129, 1) = ((MR_Box) (query__ModuleName_237));
#line 772 "query.m"
                                        }
#line 773 "query.m"
                                        {
#line 773 "query.m"
                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 773 "query.m"
                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_129));
#line 773 "query.m"
                                        }
#line 772 "query.m"
                                      }
#line 774 "query.m"
                                    else
#line 779 "query.m"
                                      {
#line 779 "query.m"
                                        MR_String query__ModuleName_229;
#line 775 "query.m"
                                        MR_String query__V_74_74;
#line 775 "query.m"
                                        MR_Word query__V_75_75;
#line 775 "query.m"
                                        MR_Word query__V_76_76;
#line 775 "query.m"
                                        MR_String query__V_281_281;

#line 775 "query.m"
                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 775 "query.m"
                                        if (query__succeeded)
#line 775 "query.m"
                                          {
#line 775 "query.m"
                                            query__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 775 "query.m"
                                            query__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 775 "query.m"
                                            {
#line 775 "query.m"
                                              query__V_281_281 = query__cmd_str_module_rep_0_f_0();
                                            }
#line 775 "query.m"
                                            query__succeeded = (strcmp(query__V_74_74, query__V_281_281) == 0);
#line 775 "query.m"
                                            if (query__succeeded)
#line 775 "query.m"
                                              {
#line 775 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 775 "query.m"
                                                if (query__succeeded)
#line 775 "query.m"
                                                  {
#line 775 "query.m"
                                                    query__ModuleName_229 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 0)));
#line 775 "query.m"
                                                    query__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_75_75, (MR_Integer) 1)));
#line 775 "query.m"
                                                    query__succeeded = (query__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "query.m"
                                                  }
#line 775 "query.m"
                                              }
#line 775 "query.m"
                                          }
#line 779 "query.m"
                                        if (query__succeeded)
#line 777 "query.m"
                                          {
#line 777 "query.m"
                                            MR_Word query__Cmd_130;

#line 777 "query.m"
                                            {
#line 777 "query.m"
                                              query__Cmd_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 777 "query.m"
                                              MR_hl_field(MR_mktag(3), query__Cmd_130, 1) = ((MR_Box) (query__ModuleName_229));
#line 777 "query.m"
                                            }
#line 778 "query.m"
                                            {
#line 778 "query.m"
                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 778 "query.m"
                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_130));
#line 778 "query.m"
                                            }
#line 777 "query.m"
                                          }
#line 779 "query.m"
                                        else
#line 789 "query.m"
                                          {
#line 789 "query.m"
                                            MR_Word query__Limit_29;
#line 789 "query.m"
                                            MR_Word query__CostKind_30;
#line 789 "query.m"
                                            MR_Word query__InclDesc_31;
#line 789 "query.m"
                                            MR_Word query__Scope_32;
#line 781 "query.m"
                                            MR_String query__LimitStr_25;
#line 781 "query.m"
                                            MR_String query__CostKindStr_26;
#line 781 "query.m"
                                            MR_String query__InclDescStr_27;
#line 781 "query.m"
                                            MR_String query__ScopeStr_28;
#line 781 "query.m"
                                            MR_String query__V_77_77;
#line 781 "query.m"
                                            MR_Word query__V_78_78;
#line 781 "query.m"
                                            MR_Word query__V_79_79;
#line 781 "query.m"
                                            MR_Word query__V_80_80;
#line 781 "query.m"
                                            MR_Word query__V_81_81;
#line 781 "query.m"
                                            MR_Word query__V_82_82;
#line 781 "query.m"
                                            MR_String query__V_282_282;

#line 780 "query.m"
                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 780 "query.m"
                                            if (query__succeeded)
#line 780 "query.m"
                                              {
#line 780 "query.m"
                                                query__V_77_77 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 780 "query.m"
                                                query__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 780 "query.m"
                                                {
#line 780 "query.m"
                                                  query__V_282_282 = query__cmd_str_top_procs_0_f_0();
                                                }
#line 780 "query.m"
                                                query__succeeded = (strcmp(query__V_77_77, query__V_282_282) == 0);
#line 781 "query.m"
                                                if (query__succeeded)
#line 781 "query.m"
                                                  {
#line 780 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 780 "query.m"
                                                    if (query__succeeded)
#line 780 "query.m"
                                                      {
#line 780 "query.m"
                                                        query__LimitStr_25 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 0)));
#line 780 "query.m"
                                                        query__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_78_78, (MR_Integer) 1)));
#line 780 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 780 "query.m"
                                                        if (query__succeeded)
#line 780 "query.m"
                                                          {
#line 780 "query.m"
                                                            query__CostKindStr_26 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 0)));
#line 780 "query.m"
                                                            query__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_79_79, (MR_Integer) 1)));
#line 780 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 780 "query.m"
                                                            if (query__succeeded)
#line 780 "query.m"
                                                              {
#line 780 "query.m"
                                                                query__InclDescStr_27 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 0)));
#line 780 "query.m"
                                                                query__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_80_80, (MR_Integer) 1)));
#line 781 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 781 "query.m"
                                                                if (query__succeeded)
#line 781 "query.m"
                                                                  {
#line 781 "query.m"
                                                                    query__ScopeStr_28 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 0)));
#line 781 "query.m"
                                                                    query__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_81_81, (MR_Integer) 1)));
#line 781 "query.m"
                                                                    query__succeeded = (query__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "query.m"
                                                                    if (query__succeeded)
#line 781 "query.m"
                                                                      {
#line 782 "query.m"
                                                                        {
#line 782 "query.m"
                                                                          query__succeeded = query__string_to_limit_2_p_0(query__LimitStr_25, &query__Limit_29);
                                                                        }
#line 781 "query.m"
                                                                        if (query__succeeded)
#line 781 "query.m"
                                                                          {
#line 783 "query.m"
                                                                            {
#line 783 "query.m"
                                                                              query__succeeded = query__string_to_cost_kind_2_p_0(query__CostKindStr_26, &query__CostKind_30);
                                                                            }
#line 781 "query.m"
                                                                            if (query__succeeded)
#line 781 "query.m"
                                                                              {
#line 784 "query.m"
                                                                                {
#line 784 "query.m"
                                                                                  query__succeeded = query__string_to_incl_desc_2_p_0(query__InclDescStr_27, &query__InclDesc_31);
                                                                                }
#line 781 "query.m"
                                                                                if (query__succeeded)
#line 785 "query.m"
                                                                                  {
#line 785 "query.m"
                                                                                    query__succeeded = query__string_to_scope_2_p_0(query__ScopeStr_28, &query__Scope_32);
                                                                                  }
#line 781 "query.m"
                                                                              }
#line 781 "query.m"
                                                                          }
#line 781 "query.m"
                                                                      }
#line 781 "query.m"
                                                                  }
#line 780 "query.m"
                                                              }
#line 780 "query.m"
                                                          }
#line 780 "query.m"
                                                      }
#line 781 "query.m"
                                                  }
#line 780 "query.m"
                                              }
#line 789 "query.m"
                                            if (query__succeeded)
#line 787 "query.m"
                                              {
#line 787 "query.m"
                                                MR_Word query__Cmd_131;

#line 787 "query.m"
                                                {
#line 787 "query.m"
                                                  query__Cmd_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 787 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 787 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 1) = ((MR_Box) (query__Limit_29));
#line 787 "query.m"
                                                  MR_hl_field(MR_mktag(3), query__Cmd_131, 2) = ((MR_Box) ((query__CostKind_30 | ((((query__InclDesc_31 << (MR_Integer) 3)) | ((query__Scope_32 << (MR_Integer) 4)))))));
#line 787 "query.m"
                                                }
#line 788 "query.m"
                                                {
#line 788 "query.m"
                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "query.m"
                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_131));
#line 788 "query.m"
                                                }
#line 787 "query.m"
                                              }
#line 789 "query.m"
                                            else
#line 795 "query.m"
                                              {
#line 795 "query.m"
                                                MR_Integer query__PSI_213;
#line 790 "query.m"
                                                MR_String query__V_83_83;
#line 790 "query.m"
                                                MR_Word query__V_84_84;
#line 790 "query.m"
                                                MR_Word query__V_85_85;
#line 790 "query.m"
                                                MR_String query__PSIStr_132;
#line 790 "query.m"
                                                MR_String query__V_283_283;

#line 790 "query.m"
                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 790 "query.m"
                                                if (query__succeeded)
#line 790 "query.m"
                                                  {
#line 790 "query.m"
                                                    query__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 790 "query.m"
                                                    query__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 790 "query.m"
                                                    {
#line 790 "query.m"
                                                      query__V_283_283 = query__cmd_str_static_coverage_0_f_0();
                                                    }
#line 790 "query.m"
                                                    query__succeeded = (strcmp(query__V_83_83, query__V_283_283) == 0);
#line 790 "query.m"
                                                    if (query__succeeded)
#line 790 "query.m"
                                                      {
#line 790 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__V_84_84)) == (MR_mktag((MR_Integer) 1)));
#line 790 "query.m"
                                                        if (query__succeeded)
#line 790 "query.m"
                                                          {
#line 790 "query.m"
                                                            query__PSIStr_132 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 0)));
#line 790 "query.m"
                                                            query__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_84_84, (MR_Integer) 1)));
#line 790 "query.m"
                                                            query__succeeded = (query__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "query.m"
                                                            if (query__succeeded)
#line 791 "query.m"
                                                              {
#line 791 "query.m"
                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_132, &query__PSI_213);
                                                              }
#line 790 "query.m"
                                                          }
#line 790 "query.m"
                                                      }
#line 790 "query.m"
                                                  }
#line 795 "query.m"
                                                if (query__succeeded)
#line 793 "query.m"
                                                  {
#line 793 "query.m"
                                                    MR_Word query__V_86_86;
#line 793 "query.m"
                                                    MR_Word query__PSPtr_133 = (MR_Word) query__PSI_213;

#line 794 "query.m"
                                                    {
#line 794 "query.m"
                                                      query__V_86_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 794 "query.m"
                                                      MR_hl_field(MR_mktag(3), query__V_86_86, 1) = ((MR_Box) (query__PSPtr_133));
#line 794 "query.m"
                                                    }
#line 794 "query.m"
                                                    {
#line 794 "query.m"
                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 794 "query.m"
                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_86_86));
#line 794 "query.m"
                                                    }
#line 793 "query.m"
                                                  }
#line 795 "query.m"
                                                else
#line 801 "query.m"
                                                  {
#line 801 "query.m"
                                                    MR_Integer query__PDI_34;
#line 796 "query.m"
                                                    MR_String query__PDIStr_33;
#line 796 "query.m"
                                                    MR_String query__V_87_87;
#line 796 "query.m"
                                                    MR_Word query__V_88_88;
#line 796 "query.m"
                                                    MR_Word query__V_89_89;
#line 796 "query.m"
                                                    MR_String query__V_284_284;

#line 796 "query.m"
                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 796 "query.m"
                                                    if (query__succeeded)
#line 796 "query.m"
                                                      {
#line 796 "query.m"
                                                        query__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 796 "query.m"
                                                        query__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 796 "query.m"
                                                        {
#line 796 "query.m"
                                                          query__V_284_284 = query__cmd_str_dynamic_coverage_0_f_0();
                                                        }
#line 796 "query.m"
                                                        query__succeeded = (strcmp(query__V_87_87, query__V_284_284) == 0);
#line 796 "query.m"
                                                        if (query__succeeded)
#line 796 "query.m"
                                                          {
#line 796 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__V_88_88)) == (MR_mktag((MR_Integer) 1)));
#line 796 "query.m"
                                                            if (query__succeeded)
#line 796 "query.m"
                                                              {
#line 796 "query.m"
                                                                query__PDIStr_33 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 0)));
#line 796 "query.m"
                                                                query__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_88_88, (MR_Integer) 1)));
#line 796 "query.m"
                                                                query__succeeded = (query__V_89_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "query.m"
                                                                if (query__succeeded)
#line 797 "query.m"
                                                                  {
#line 797 "query.m"
                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_33, &query__PDI_34);
                                                                  }
#line 796 "query.m"
                                                              }
#line 796 "query.m"
                                                          }
#line 796 "query.m"
                                                      }
#line 801 "query.m"
                                                    if (query__succeeded)
#line 799 "query.m"
                                                      {
#line 799 "query.m"
                                                        MR_Word query__PDPtr_35 = (MR_Word) query__PDI_34;
#line 799 "query.m"
                                                        MR_Word query__V_90_90;

#line 800 "query.m"
                                                        {
#line 800 "query.m"
                                                          query__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 800 "query.m"
                                                          MR_hl_field(MR_mktag(3), query__V_90_90, 1) = ((MR_Box) (query__PDPtr_35));
#line 800 "query.m"
                                                        }
#line 800 "query.m"
                                                        {
#line 800 "query.m"
                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 800 "query.m"
                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__V_90_90));
#line 800 "query.m"
                                                        }
#line 799 "query.m"
                                                      }
#line 801 "query.m"
                                                    else
#line 806 "query.m"
                                                      {
#line 802 "query.m"
                                                        MR_String query__V_91_91;
#line 802 "query.m"
                                                        MR_Word query__V_92_92;
#line 802 "query.m"
                                                        MR_String query__V_285_285;

#line 802 "query.m"
                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 802 "query.m"
                                                        if (query__succeeded)
#line 802 "query.m"
                                                          {
#line 802 "query.m"
                                                            query__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 802 "query.m"
                                                            query__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 802 "query.m"
                                                            {
#line 802 "query.m"
                                                              query__V_285_285 = query__cmd_str_menu_0_f_0();
                                                            }
#line 802 "query.m"
                                                            query__succeeded = (strcmp(query__V_91_91, query__V_285_285) == 0);
#line 802 "query.m"
                                                            if (query__succeeded)
#line 802 "query.m"
                                                              query__succeeded = (query__V_92_92 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 802 "query.m"
                                                          }
#line 806 "query.m"
                                                        if (query__succeeded)
#line 804 "query.m"
                                                          {
#line 805 "query.m"
                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[3]);
#line 804 "query.m"
                                                          }
#line 806 "query.m"
                                                        else
#line 813 "query.m"
                                                          {
#line 813 "query.m"
                                                            MR_Integer query__PSI_186;
#line 807 "query.m"
                                                            MR_String query__V_93_93;
#line 807 "query.m"
                                                            MR_Word query__V_94_94;
#line 807 "query.m"
                                                            MR_Word query__V_95_95;
#line 807 "query.m"
                                                            MR_String query__PSIStr_135;
#line 807 "query.m"
                                                            MR_String query__V_286_286;

#line 807 "query.m"
                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 807 "query.m"
                                                            if (query__succeeded)
#line 807 "query.m"
                                                              {
#line 807 "query.m"
                                                                query__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 807 "query.m"
                                                                query__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 807 "query.m"
                                                                {
#line 807 "query.m"
                                                                  query__V_286_286 = query__cmd_str_dump_proc_static_0_f_0();
                                                                }
#line 807 "query.m"
                                                                query__succeeded = (strcmp(query__V_93_93, query__V_286_286) == 0);
#line 807 "query.m"
                                                                if (query__succeeded)
#line 807 "query.m"
                                                                  {
#line 807 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 807 "query.m"
                                                                    if (query__succeeded)
#line 807 "query.m"
                                                                      {
#line 807 "query.m"
                                                                        query__PSIStr_135 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 0)));
#line 807 "query.m"
                                                                        query__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_94_94, (MR_Integer) 1)));
#line 807 "query.m"
                                                                        query__succeeded = (query__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "query.m"
                                                                        if (query__succeeded)
#line 808 "query.m"
                                                                          {
#line 808 "query.m"
                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__PSIStr_135, &query__PSI_186);
                                                                          }
#line 807 "query.m"
                                                                      }
#line 807 "query.m"
                                                                  }
#line 807 "query.m"
                                                              }
#line 813 "query.m"
                                                            if (query__succeeded)
#line 810 "query.m"
                                                              {
#line 810 "query.m"
                                                                MR_Word query__Cmd_136;
#line 810 "query.m"
                                                                MR_Word query__PSPtr_137 = (MR_Word) query__PSI_186;

#line 811 "query.m"
                                                                {
#line 811 "query.m"
                                                                  query__Cmd_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 811 "query.m"
                                                                  MR_hl_field(MR_mktag(3), query__Cmd_136, 1) = ((MR_Box) (query__PSPtr_137));
#line 811 "query.m"
                                                                }
#line 812 "query.m"
                                                                {
#line 812 "query.m"
                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 812 "query.m"
                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_136));
#line 812 "query.m"
                                                                }
#line 810 "query.m"
                                                              }
#line 813 "query.m"
                                                            else
#line 820 "query.m"
                                                              {
#line 820 "query.m"
                                                                MR_Integer query__PDI_179;
#line 814 "query.m"
                                                                MR_String query__V_96_96;
#line 814 "query.m"
                                                                MR_Word query__V_97_97;
#line 814 "query.m"
                                                                MR_Word query__V_98_98;
#line 814 "query.m"
                                                                MR_String query__PDIStr_138;
#line 814 "query.m"
                                                                MR_String query__V_287_287;

#line 814 "query.m"
                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 814 "query.m"
                                                                if (query__succeeded)
#line 814 "query.m"
                                                                  {
#line 814 "query.m"
                                                                    query__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 814 "query.m"
                                                                    query__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 814 "query.m"
                                                                    {
#line 814 "query.m"
                                                                      query__V_287_287 = query__cmd_str_dump_proc_dynamic_0_f_0();
                                                                    }
#line 814 "query.m"
                                                                    query__succeeded = (strcmp(query__V_96_96, query__V_287_287) == 0);
#line 814 "query.m"
                                                                    if (query__succeeded)
#line 814 "query.m"
                                                                      {
#line 814 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_97_97)) == (MR_mktag((MR_Integer) 1)));
#line 814 "query.m"
                                                                        if (query__succeeded)
#line 814 "query.m"
                                                                          {
#line 814 "query.m"
                                                                            query__PDIStr_138 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 0)));
#line 814 "query.m"
                                                                            query__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_97_97, (MR_Integer) 1)));
#line 814 "query.m"
                                                                            query__succeeded = (query__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 814 "query.m"
                                                                            if (query__succeeded)
#line 815 "query.m"
                                                                              {
#line 815 "query.m"
                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__PDIStr_138, &query__PDI_179);
                                                                              }
#line 814 "query.m"
                                                                          }
#line 814 "query.m"
                                                                      }
#line 814 "query.m"
                                                                  }
#line 820 "query.m"
                                                                if (query__succeeded)
#line 817 "query.m"
                                                                  {
#line 817 "query.m"
                                                                    MR_Word query__Cmd_139;
#line 817 "query.m"
                                                                    MR_Word query__PDPtr_140 = (MR_Word) query__PDI_179;

#line 818 "query.m"
                                                                    {
#line 818 "query.m"
                                                                      query__Cmd_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 818 "query.m"
                                                                      MR_hl_field(MR_mktag(3), query__Cmd_139, 1) = ((MR_Box) (query__PDPtr_140));
#line 818 "query.m"
                                                                    }
#line 819 "query.m"
                                                                    {
#line 819 "query.m"
                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 819 "query.m"
                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_139));
#line 819 "query.m"
                                                                    }
#line 817 "query.m"
                                                                  }
#line 820 "query.m"
                                                                else
#line 827 "query.m"
                                                                  {
#line 827 "query.m"
                                                                    MR_Integer query__CSSI_37;
#line 821 "query.m"
                                                                    MR_String query__CSSIStr_36;
#line 821 "query.m"
                                                                    MR_String query__V_99_99;
#line 821 "query.m"
                                                                    MR_Word query__V_100_100;
#line 821 "query.m"
                                                                    MR_Word query__V_101_101;
#line 821 "query.m"
                                                                    MR_String query__V_288_288;

#line 821 "query.m"
                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 821 "query.m"
                                                                    if (query__succeeded)
#line 821 "query.m"
                                                                      {
#line 821 "query.m"
                                                                        query__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 821 "query.m"
                                                                        query__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 821 "query.m"
                                                                        {
#line 821 "query.m"
                                                                          query__V_288_288 = query__cmd_str_dump_call_site_static_0_f_0();
                                                                        }
#line 821 "query.m"
                                                                        query__succeeded = (strcmp(query__V_99_99, query__V_288_288) == 0);
#line 821 "query.m"
                                                                        if (query__succeeded)
#line 821 "query.m"
                                                                          {
#line 821 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_100_100)) == (MR_mktag((MR_Integer) 1)));
#line 821 "query.m"
                                                                            if (query__succeeded)
#line 821 "query.m"
                                                                              {
#line 821 "query.m"
                                                                                query__CSSIStr_36 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 0)));
#line 821 "query.m"
                                                                                query__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_100_100, (MR_Integer) 1)));
#line 821 "query.m"
                                                                                query__succeeded = (query__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 821 "query.m"
                                                                                if (query__succeeded)
#line 822 "query.m"
                                                                                  {
#line 822 "query.m"
                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__CSSIStr_36, &query__CSSI_37);
                                                                                  }
#line 821 "query.m"
                                                                              }
#line 821 "query.m"
                                                                          }
#line 821 "query.m"
                                                                      }
#line 827 "query.m"
                                                                    if (query__succeeded)
#line 824 "query.m"
                                                                      {
#line 824 "query.m"
                                                                        MR_Word query__CSSPtr_38 = (MR_Word) query__CSSI_37;
#line 824 "query.m"
                                                                        MR_Word query__Cmd_141;

#line 825 "query.m"
                                                                        {
#line 825 "query.m"
                                                                          query__Cmd_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 825 "query.m"
                                                                          MR_hl_field(MR_mktag(3), query__Cmd_141, 1) = ((MR_Box) (query__CSSPtr_38));
#line 825 "query.m"
                                                                        }
#line 826 "query.m"
                                                                        {
#line 826 "query.m"
                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "query.m"
                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_141));
#line 826 "query.m"
                                                                        }
#line 824 "query.m"
                                                                      }
#line 827 "query.m"
                                                                    else
#line 834 "query.m"
                                                                      {
#line 834 "query.m"
                                                                        MR_Integer query__CSDI_40;
#line 828 "query.m"
                                                                        MR_String query__CSDIStr_39;
#line 828 "query.m"
                                                                        MR_String query__V_102_102;
#line 828 "query.m"
                                                                        MR_Word query__V_103_103;
#line 828 "query.m"
                                                                        MR_Word query__V_104_104;
#line 828 "query.m"
                                                                        MR_String query__V_289_289;

#line 828 "query.m"
                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 828 "query.m"
                                                                        if (query__succeeded)
#line 828 "query.m"
                                                                          {
#line 828 "query.m"
                                                                            query__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 828 "query.m"
                                                                            query__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 828 "query.m"
                                                                            {
#line 828 "query.m"
                                                                              query__V_289_289 = query__cmd_str_dump_call_site_dynamic_0_f_0();
                                                                            }
#line 828 "query.m"
                                                                            query__succeeded = (strcmp(query__V_102_102, query__V_289_289) == 0);
#line 828 "query.m"
                                                                            if (query__succeeded)
#line 828 "query.m"
                                                                              {
#line 828 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__V_103_103)) == (MR_mktag((MR_Integer) 1)));
#line 828 "query.m"
                                                                                if (query__succeeded)
#line 828 "query.m"
                                                                                  {
#line 828 "query.m"
                                                                                    query__CSDIStr_39 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 0)));
#line 828 "query.m"
                                                                                    query__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_103_103, (MR_Integer) 1)));
#line 828 "query.m"
                                                                                    query__succeeded = (query__V_104_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "query.m"
                                                                                    if (query__succeeded)
#line 829 "query.m"
                                                                                      {
#line 829 "query.m"
                                                                                        query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_39, &query__CSDI_40);
                                                                                      }
#line 828 "query.m"
                                                                                  }
#line 828 "query.m"
                                                                              }
#line 828 "query.m"
                                                                          }
#line 834 "query.m"
                                                                        if (query__succeeded)
#line 831 "query.m"
                                                                          {
#line 831 "query.m"
                                                                            MR_Word query__CSDPtr_41 = (MR_Word) query__CSDI_40;
#line 831 "query.m"
                                                                            MR_Word query__Cmd_142;

#line 832 "query.m"
                                                                            {
#line 832 "query.m"
                                                                              query__Cmd_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 832 "query.m"
                                                                              MR_hl_field(MR_mktag(3), query__Cmd_142, 1) = ((MR_Box) (query__CSDPtr_41));
#line 832 "query.m"
                                                                            }
#line 833 "query.m"
                                                                            {
#line 833 "query.m"
                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 833 "query.m"
                                                                              MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_142));
#line 833 "query.m"
                                                                            }
#line 831 "query.m"
                                                                          }
#line 834 "query.m"
                                                                        else
#line 841 "query.m"
                                                                          {
#line 841 "query.m"
                                                                            MR_Integer query__CliqueNum_161;
#line 835 "query.m"
                                                                            MR_String query__V_105_105;
#line 835 "query.m"
                                                                            MR_Word query__V_106_106;
#line 835 "query.m"
                                                                            MR_Word query__V_107_107;
#line 835 "query.m"
                                                                            MR_String query__CliqueNumStr_143;
#line 835 "query.m"
                                                                            MR_String query__V_290_290;

#line 835 "query.m"
                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 835 "query.m"
                                                                            if (query__succeeded)
#line 835 "query.m"
                                                                              {
#line 835 "query.m"
                                                                                query__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 835 "query.m"
                                                                                query__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 835 "query.m"
                                                                                {
#line 835 "query.m"
                                                                                  query__V_290_290 = query__cmd_str_dump_raw_clique_0_f_0();
                                                                                }
#line 835 "query.m"
                                                                                query__succeeded = (strcmp(query__V_105_105, query__V_290_290) == 0);
#line 835 "query.m"
                                                                                if (query__succeeded)
#line 835 "query.m"
                                                                                  {
#line 835 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__V_106_106)) == (MR_mktag((MR_Integer) 1)));
#line 835 "query.m"
                                                                                    if (query__succeeded)
#line 835 "query.m"
                                                                                      {
#line 835 "query.m"
                                                                                        query__CliqueNumStr_143 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 0)));
#line 835 "query.m"
                                                                                        query__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_106_106, (MR_Integer) 1)));
#line 835 "query.m"
                                                                                        query__succeeded = (query__V_107_107 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 835 "query.m"
                                                                                        if (query__succeeded)
#line 836 "query.m"
                                                                                          {
#line 836 "query.m"
                                                                                            query__succeeded = mercury__string__to_int_2_p_0(query__CliqueNumStr_143, &query__CliqueNum_161);
                                                                                          }
#line 835 "query.m"
                                                                                      }
#line 835 "query.m"
                                                                                  }
#line 835 "query.m"
                                                                              }
#line 841 "query.m"
                                                                            if (query__succeeded)
#line 838 "query.m"
                                                                              {
#line 838 "query.m"
                                                                                MR_Word query__Cmd_144;
#line 838 "query.m"
                                                                                MR_Word query__CliquePtr_145 = (MR_Word) query__CliqueNum_161;

#line 839 "query.m"
                                                                                {
#line 839 "query.m"
                                                                                  query__Cmd_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 839 "query.m"
                                                                                  MR_hl_field(MR_mktag(3), query__Cmd_144, 1) = ((MR_Box) (query__CliquePtr_145));
#line 839 "query.m"
                                                                                }
#line 840 "query.m"
                                                                                {
#line 840 "query.m"
                                                                                  query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 840 "query.m"
                                                                                  MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_144));
#line 840 "query.m"
                                                                                }
#line 838 "query.m"
                                                                              }
#line 841 "query.m"
                                                                            else
#line 848 "query.m"
                                                                              {
#line 848 "query.m"
                                                                                MR_Integer query__CSDI_157;
#line 842 "query.m"
                                                                                MR_String query__V_108_108;
#line 842 "query.m"
                                                                                MR_Word query__V_109_109;
#line 842 "query.m"
                                                                                MR_Word query__V_110_110;
#line 842 "query.m"
                                                                                MR_String query__CSDIStr_146;
#line 842 "query.m"
                                                                                MR_String query__V_291_291;

#line 842 "query.m"
                                                                                query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 842 "query.m"
                                                                                if (query__succeeded)
#line 842 "query.m"
                                                                                  {
#line 842 "query.m"
                                                                                    query__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 842 "query.m"
                                                                                    query__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 842 "query.m"
                                                                                    {
#line 842 "query.m"
                                                                                      query__V_291_291 = query__cmd_str_call_site_dynamic_var_use_0_f_0();
                                                                                    }
#line 842 "query.m"
                                                                                    query__succeeded = (strcmp(query__V_108_108, query__V_291_291) == 0);
#line 842 "query.m"
                                                                                    if (query__succeeded)
#line 842 "query.m"
                                                                                      {
#line 842 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__V_109_109)) == (MR_mktag((MR_Integer) 1)));
#line 842 "query.m"
                                                                                        if (query__succeeded)
#line 842 "query.m"
                                                                                          {
#line 842 "query.m"
                                                                                            query__CSDIStr_146 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 0)));
#line 842 "query.m"
                                                                                            query__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_109_109, (MR_Integer) 1)));
#line 842 "query.m"
                                                                                            query__succeeded = (query__V_110_110 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "query.m"
                                                                                            if (query__succeeded)
#line 843 "query.m"
                                                                                              {
#line 843 "query.m"
                                                                                                query__succeeded = mercury__string__to_int_2_p_0(query__CSDIStr_146, &query__CSDI_157);
                                                                                              }
#line 842 "query.m"
                                                                                          }
#line 842 "query.m"
                                                                                      }
#line 842 "query.m"
                                                                                  }
#line 848 "query.m"
                                                                                if (query__succeeded)
#line 845 "query.m"
                                                                                  {
#line 845 "query.m"
                                                                                    MR_Word query__Cmd_147;
#line 845 "query.m"
                                                                                    MR_Word query__CSDPtr_148 = (MR_Word) query__CSDI_157;

#line 846 "query.m"
                                                                                    {
#line 846 "query.m"
                                                                                      query__Cmd_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 846 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 846 "query.m"
                                                                                      MR_hl_field(MR_mktag(3), query__Cmd_147, 1) = ((MR_Box) (query__CSDPtr_148));
#line 846 "query.m"
                                                                                    }
#line 847 "query.m"
                                                                                    {
#line 847 "query.m"
                                                                                      query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "query.m"
                                                                                      MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_147));
#line 847 "query.m"
                                                                                    }
#line 845 "query.m"
                                                                                  }
#line 848 "query.m"
                                                                                else
#line 854 "query.m"
                                                                                  {
#line 854 "query.m"
                                                                                    MR_Integer query__TimeOut_43;
#line 849 "query.m"
                                                                                    MR_String query__TimeOutStr_42;
#line 849 "query.m"
                                                                                    MR_String query__V_111_111;
#line 849 "query.m"
                                                                                    MR_Word query__V_112_112;
#line 849 "query.m"
                                                                                    MR_Word query__V_113_113;
#line 849 "query.m"
                                                                                    MR_String query__V_292_292;

#line 849 "query.m"
                                                                                    query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 849 "query.m"
                                                                                    if (query__succeeded)
#line 849 "query.m"
                                                                                      {
#line 849 "query.m"
                                                                                        query__V_111_111 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 849 "query.m"
                                                                                        query__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 849 "query.m"
                                                                                        {
#line 849 "query.m"
                                                                                          query__V_292_292 = query__cmd_str_timeout_0_f_0();
                                                                                        }
#line 849 "query.m"
                                                                                        query__succeeded = (strcmp(query__V_111_111, query__V_292_292) == 0);
#line 849 "query.m"
                                                                                        if (query__succeeded)
#line 849 "query.m"
                                                                                          {
#line 849 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__V_112_112)) == (MR_mktag((MR_Integer) 1)));
#line 849 "query.m"
                                                                                            if (query__succeeded)
#line 849 "query.m"
                                                                                              {
#line 849 "query.m"
                                                                                                query__TimeOutStr_42 = ((MR_String) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 0)));
#line 849 "query.m"
                                                                                                query__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_112_112, (MR_Integer) 1)));
#line 849 "query.m"
                                                                                                query__succeeded = (query__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "query.m"
                                                                                                if (query__succeeded)
#line 850 "query.m"
                                                                                                  {
#line 850 "query.m"
                                                                                                    query__succeeded = mercury__string__to_int_2_p_0(query__TimeOutStr_42, &query__TimeOut_43);
                                                                                                  }
#line 849 "query.m"
                                                                                              }
#line 849 "query.m"
                                                                                          }
#line 849 "query.m"
                                                                                      }
#line 854 "query.m"
                                                                                    if (query__succeeded)
#line 852 "query.m"
                                                                                      {
#line 852 "query.m"
                                                                                        MR_Word query__Cmd_149;

#line 852 "query.m"
                                                                                        {
#line 852 "query.m"
                                                                                          query__Cmd_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 852 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__Cmd_149, 0) = ((MR_Box) (query__TimeOut_43));
#line 852 "query.m"
                                                                                        }
#line 853 "query.m"
                                                                                        {
#line 853 "query.m"
                                                                                          query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "query.m"
                                                                                          MR_hl_field(MR_mktag(1), query__MaybeCmd_4, 0) = ((MR_Box) (query__Cmd_149));
#line 853 "query.m"
                                                                                        }
#line 852 "query.m"
                                                                                      }
#line 854 "query.m"
                                                                                    else
#line 859 "query.m"
                                                                                      {
#line 855 "query.m"
                                                                                        MR_String query__V_114_114;
#line 855 "query.m"
                                                                                        MR_Word query__V_115_115;
#line 855 "query.m"
                                                                                        MR_String query__V_293_293;

#line 855 "query.m"
                                                                                        query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 855 "query.m"
                                                                                        if (query__succeeded)
#line 855 "query.m"
                                                                                          {
#line 855 "query.m"
                                                                                            query__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 855 "query.m"
                                                                                            query__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 855 "query.m"
                                                                                            {
#line 855 "query.m"
                                                                                              query__V_293_293 = query__cmd_str_restart_0_f_0();
                                                                                            }
#line 855 "query.m"
                                                                                            query__succeeded = (strcmp(query__V_114_114, query__V_293_293) == 0);
#line 855 "query.m"
                                                                                            if (query__succeeded)
#line 855 "query.m"
                                                                                              query__succeeded = (query__V_115_115 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "query.m"
                                                                                          }
#line 859 "query.m"
                                                                                        if (query__succeeded)
#line 857 "query.m"
                                                                                          {
#line 858 "query.m"
                                                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[4]);
#line 857 "query.m"
                                                                                          }
#line 859 "query.m"
                                                                                        else
#line 864 "query.m"
                                                                                          {
#line 860 "query.m"
                                                                                            MR_String query__V_116_116;
#line 860 "query.m"
                                                                                            MR_Word query__V_117_117;
#line 860 "query.m"
                                                                                            MR_String query__V_294_294;

#line 860 "query.m"
                                                                                            query__succeeded = ((MR_tag((MR_Word) query__Pieces_5)) == (MR_mktag((MR_Integer) 1)));
#line 860 "query.m"
                                                                                            if (query__succeeded)
#line 860 "query.m"
                                                                                              {
#line 860 "query.m"
                                                                                                query__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 0)));
#line 860 "query.m"
                                                                                                query__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__Pieces_5, (MR_Integer) 1)));
#line 860 "query.m"
                                                                                                {
#line 860 "query.m"
                                                                                                  query__V_294_294 = query__cmd_str_quit_0_f_0();
                                                                                                }
#line 860 "query.m"
                                                                                                query__succeeded = (strcmp(query__V_116_116, query__V_294_294) == 0);
#line 860 "query.m"
                                                                                                if (query__succeeded)
#line 860 "query.m"
                                                                                                  query__succeeded = (query__V_117_117 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "query.m"
                                                                                              }
#line 864 "query.m"
                                                                                            if (query__succeeded)
#line 862 "query.m"
                                                                                              {
#line 863 "query.m"
                                                                                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[5]);
#line 862 "query.m"
                                                                                              }
#line 864 "query.m"
                                                                                            else
#line 865 "query.m"
                                                                                              query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "query.m"
                                                                                          }
#line 859 "query.m"
                                                                                      }
#line 854 "query.m"
                                                                                  }
#line 848 "query.m"
                                                                              }
#line 841 "query.m"
                                                                          }
#line 834 "query.m"
                                                                      }
#line 827 "query.m"
                                                                  }
#line 820 "query.m"
                                                              }
#line 813 "query.m"
                                                          }
#line 806 "query.m"
                                                      }
#line 801 "query.m"
                                                  }
#line 795 "query.m"
                                              }
#line 789 "query.m"
                                          }
#line 779 "query.m"
                                      }
#line 774 "query.m"
                                  }
#line 769 "query.m"
                              }
#line 764 "query.m"
                          }
#line 759 "query.m"
                      }
#line 746 "query.m"
                  }
#line 739 "query.m"
              }
#line 734 "query.m"
          }
#line 727 "query.m"
      }
#line 706 "query.m"
    return query__MaybeCmd_4;
#line 706 "query.m"
  }
#line 66 "query.m"
}

#line 64 "query.m"
MR_Word MR_CALL 
query__string_to_maybe_query_1_f_0(
#line 64 "query.m"
  MR_String query__String_3)
#line 64 "query.m"
{
#line 939 "query.m"
  {
#line 939 "query.m"
    MR_bool query__succeeded;
#line 939 "query.m"
    MR_Word query__MaybeDeepQuery_4;
#line 939 "query.m"
    MR_Word query__MaybeCmdStr_5;
#line 939 "query.m"
    MR_Word query__MaybePrefStr_6;
#line 939 "query.m"
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
#line 939 "query.m"
    if (query__succeeded)
#line 929 "query.m"
      {
#line 929 "query.m"
        MR_Word query__MaybeCmd_8;
#line 929 "query.m"
        MR_Word query__MaybePreferences_11;
#line 929 "query.m"
        MR_Word query__V_14_14;

#line 926 "query.m"
        if ((query__MaybeCmdStr_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 925 "query.m"
          query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 926 "query.m"
        else
#line 927 "query.m"
          {
#line 927 "query.m"
            MR_String query__CmdStr_9 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybeCmdStr_5, (MR_Integer) 0)));
#line 927 "query.m"
            MR_Word query__V_12_12;
#line 927 "query.m"
            MR_Word query__MaybeCmd_36;

#line 698 "query.m"
            {
#line 698 "query.m"
              query__MaybeCmd_36 = query__string_to_maybe_cmd_1_f_0(query__CmdStr_9);
            }
#line 701 "query.m"
            if ((query__MaybeCmd_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "query.m"
              query__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 701 "query.m"
            else
#line 700 "query.m"
              query__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybeCmd_36, (MR_Integer) 0)));
#line 928 "query.m"
            {
#line 928 "query.m"
              query__MaybeCmd_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "query.m"
              MR_hl_field(MR_mktag(1), query__MaybeCmd_8, 0) = ((MR_Box) (query__V_12_12));
#line 928 "query.m"
            }
#line 927 "query.m"
          }
#line 933 "query.m"
        if ((query__MaybePrefStr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "query.m"
          query__MaybePreferences_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 933 "query.m"
        else
#line 931 "query.m"
          {
#line 931 "query.m"
            MR_String query__PrefStr_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__MaybePrefStr_6, (MR_Integer) 0)));

#line 932 "query.m"
            {
#line 932 "query.m"
              query__MaybePreferences_11 = query__string_to_maybe_pref_1_f_0(query__PrefStr_10);
            }
#line 931 "query.m"
          }
#line 938 "query.m"
        {
#line 938 "query.m"
          query__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 938 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 0) = ((MR_Box) (query__MaybeCmd_8));
#line 938 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 1) = ((MR_Box) (query__DeepFileName_7));
#line 938 "query.m"
          MR_hl_field(MR_mktag(0), query__V_14_14, 2) = ((MR_Box) (query__MaybePreferences_11));
#line 938 "query.m"
        }
#line 938 "query.m"
        {
#line 938 "query.m"
          query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "query.m"
          MR_hl_field(MR_mktag(1), query__MaybeDeepQuery_4, 0) = ((MR_Box) (query__V_14_14));
#line 938 "query.m"
        }
#line 929 "query.m"
      }
#line 939 "query.m"
    else
#line 940 "query.m"
      query__MaybeDeepQuery_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "query.m"
    return query__MaybeDeepQuery_4;
#line 939 "query.m"
  }
#line 64 "query.m"
}

#line 62 "query.m"
MR_String MR_CALL 
query__query_to_string_1_f_0(
#line 62 "query.m"
  MR_Word query__DeepQuery_3)
#line 62 "query.m"
{
#line 903 "query.m"
  {
#line 903 "query.m"
    MR_bool query__succeeded;
#line 903 "query.m"
    MR_String query__String_4;
#line 903 "query.m"
    MR_Word query__Cmd_5;
#line 903 "query.m"
    MR_String query__DeepFileName_6 = ((MR_String) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 1)));
#line 903 "query.m"
    MR_Word query__MaybePreferences_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 2)));
#line 903 "query.m"
    MR_String query__PreferencesString_9;
#line 903 "query.m"
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__DeepQuery_3, (MR_Integer) 0)));
#line 903 "query.m"
    MR_String query__V_11_11;
#line 903 "query.m"
    MR_String query__V_12_12;
#line 903 "query.m"
    MR_String query__V_13_13;
#line 903 "query.m"
    MR_String query__V_15_15;
#line 903 "query.m"
    MR_String query__V_16_16;
#line 903 "query.m"
    MR_String query__V_17_17;

#line 904 "query.m"
    query__Cmd_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__V_10_10, (MR_Integer) 0)));
#line 908 "query.m"
    if ((query__MaybePreferences_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "query.m"
      query__PreferencesString_9 = (MR_String) "";
#line 908 "query.m"
    else
#line 906 "query.m"
      {
#line 906 "query.m"
        MR_Word query__Preferences_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__MaybePreferences_7, (MR_Integer) 0)));

#line 907 "query.m"
        {
#line 907 "query.m"
          query__PreferencesString_9 = query__preferences_to_string_1_f_0(query__Preferences_8);
        }
#line 906 "query.m"
      }
#line 912 "query.m"
    {
#line 912 "query.m"
      query__V_11_11 = query__cmd_to_string_1_f_0(query__Cmd_5);
    }
#line 913 "query.m"
    {
#line 913 "query.m"
      query__V_13_13 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 915 "query.m"
    {
#line 915 "query.m"
      query__V_17_17 = mercury__string__char_to_string_1_f_0((MR_Char) 38);
    }
#line 915 "query.m"
    {
#line 915 "query.m"
      query__V_16_16 = mercury__string__f_43_43_2_f_0(query__V_17_17, query__DeepFileName_6);
    }
#line 914 "query.m"
    {
#line 914 "query.m"
      query__V_15_15 = mercury__string__f_43_43_2_f_0(query__PreferencesString_9, query__V_16_16);
    }
#line 913 "query.m"
    {
#line 913 "query.m"
      query__V_12_12 = mercury__string__f_43_43_2_f_0(query__V_13_13, query__V_15_15);
    }
#line 912 "query.m"
    {
#line 912 "query.m"
      return query__String_4 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
    }
#line 903 "query.m"
    return query__String_4;
#line 903 "query.m"
  }
#line 62 "query.m"
}

#line 386 "query.m"
static void MR_CALL 
query__try_exec_6_p_0_1(
#line 386 "query.m"
  MR_Box query__closure_arg,
#line 386 "query.m"
  MR_Box * query__wrapper_arg_1,
#line 386 "query.m"
  MR_Box query__wrapper_arg_2,
#line 386 "query.m"
  MR_Box * query__wrapper_arg_3)
#line 386 "query.m"
{
#line 386 "query.m"
  {
#line 386 "query.m"
    MR_Box query__closure = query__closure_arg;
#line 386 "query.m"
    MR_String query__conv0_HTMLStr_10;

#line 386 "query.m"
    {
#line 386 "query.m"
      query__exec_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), query__closure, (MR_Integer) 5))), &query__conv0_HTMLStr_10);
    }
#line 386 "query.m"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HTMLStr_10));
#line 386 "query.m"
  }
#line 386 "query.m"
}

#line 39 "query.m"
void MR_CALL 
query__try_exec_6_p_0(
#line 39 "query.m"
  MR_Word query__Cmd_7,
#line 39 "query.m"
  MR_Word query__Pref_8,
#line 39 "query.m"
  MR_Word query__Deep_9,
#line 39 "query.m"
  MR_String * query__HTML_10)
#line 39 "query.m"
{
#line 385 "query.m"
  {
#line 385 "query.m"
    MR_bool query__succeeded;
#line 385 "query.m"
    MR_Word query__TypeCtorInfo_42_42;
#line 385 "query.m"
    MR_Word query__Result_12;
#line 385 "query.m"
    MR_Word query__V_24_24;

#line 386 "query.m"
    {
#line 386 "query.m"
      query__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 0) = ((MR_Box) (&query_scalar_common_3[0]));
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 1) = ((MR_Box) (query__try_exec_6_p_0_1));
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 3) = ((MR_Box) (query__Cmd_7));
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 4) = ((MR_Box) (query__Pref_8));
#line 386 "query.m"
      MR_hl_field(MR_mktag(0), query__V_24_24, 5) = ((MR_Box) (query__Deep_9));
#line 386 "query.m"
    }
#line 19734 "query.c"
    query__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 386 "query.m"
    {
#line 386 "query.m"
      mercury__exception__try_io_4_p_0(query__TypeCtorInfo_42_42, query__V_24_24, &query__Result_12);
    }
#line 389 "query.m"
    if (((MR_tag((MR_Word) query__Result_12)) == (MR_mktag((MR_Integer) 2))))
#line 390 "query.m"
      {
#line 390 "query.m"
        MR_Word query__Exception_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__Result_12, (MR_Integer) 0)));
#line 390 "query.m"
        MR_String query__Msg_15;
#line 390 "query.m"
        MR_String query__V_47_47;
#line 393 "query.m"
        MR_String query__MsgPrime_14;
#line 391 "query.m"
        MR_Box query__conv1_MsgPrime_14;

#line 391 "query.m"
        {
#line 391 "query.m"
          query__succeeded = mercury__univ__univ_to_type_2_p_0(query__TypeCtorInfo_42_42, query__Exception_13, &query__conv1_MsgPrime_14);
        }
#line 391 "query.m"
        if (query__succeeded)
#line 391 "query.m"
          {
#line 391 "query.m"
            query__MsgPrime_14 = ((MR_String) query__conv1_MsgPrime_14);
#line 391 "query.m"
            query__succeeded = MR_TRUE;
#line 391 "query.m"
          }
#line 393 "query.m"
        if (query__succeeded)
#line 392 "query.m"
          query__Msg_15 = query__MsgPrime_14;
#line 393 "query.m"
        else
#line 395 "query.m"
          {
#line 395 "query.m"
            MR_String query__ErrorMsg_16;
#line 393 "query.m"
            MR_Word query__V_26_26;
#line 393 "query.m"
            MR_Box query__conv2_V_26_26;

#line 393 "query.m"
            {
#line 393 "query.m"
              query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, query__Exception_13, &query__conv2_V_26_26);
            }
#line 393 "query.m"
            if (query__succeeded)
#line 393 "query.m"
              {
#line 393 "query.m"
                query__V_26_26 = ((MR_Word) query__conv2_V_26_26);
#line 393 "query.m"
                query__succeeded = MR_TRUE;
#line 393 "query.m"
              }
#line 393 "query.m"
            if (query__succeeded)
#line 393 "query.m"
              {
#line 393 "query.m"
                query__ErrorMsg_16 = (MR_String) query__V_26_26;
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
                  query__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "internal software error: ", query__ErrorMsg_16);
                }
#line 394 "query.m"
              }
#line 395 "query.m"
            else
#line 397 "query.m"
              {
#line 397 "query.m"
                MR_String query__DomainMsg_17;
#line 395 "query.m"
                MR_Word query__V_28_28;
#line 395 "query.m"
                MR_Box query__conv3_V_28_28;

#line 395 "query.m"
                {
#line 395 "query.m"
                  query__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__math__math__type_ctor_info_domain_error_0, query__Exception_13, &query__conv3_V_28_28);
                }
#line 395 "query.m"
                if (query__succeeded)
#line 395 "query.m"
                  {
#line 395 "query.m"
                    query__V_28_28 = ((MR_Word) query__conv3_V_28_28);
#line 395 "query.m"
                    query__succeeded = MR_TRUE;
#line 395 "query.m"
                  }
#line 395 "query.m"
                if (query__succeeded)
#line 395 "query.m"
                  {
#line 395 "query.m"
                    query__DomainMsg_17 = (MR_String) query__V_28_28;
#line 395 "query.m"
                    query__succeeded = MR_TRUE;
#line 395 "query.m"
                  }
#line 397 "query.m"
                if (query__succeeded)
#line 396 "query.m"
                  {
#line 396 "query.m"
                    {
#line 396 "query.m"
                      query__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "domain error: ", query__DomainMsg_17);
                    }
#line 396 "query.m"
                  }
#line 397 "query.m"
                else
#line 398 "query.m"
                  query__Msg_15 = (MR_String) "unknown exception";
#line 397 "query.m"
              }
#line 395 "query.m"
          }
#line 19877 "query.c"
        {
#line 19879 "query.c"
          query__V_47_47 = mercury__string__f_43_43_2_f_0(query__Msg_15, (MR_String) "</H3>\n");
        }
#line 19882 "query.c"
        {
#line 19884 "query.c"
          *query__HTML_10 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", query__V_47_47);
        }
#line 390 "query.m"
      }
#line 389 "query.m"
    else
#line 388 "query.m"
      *query__HTML_10 = ((MR_String) (MR_hl_field(MR_mktag(1), query__Result_12, (MR_Integer) 0)));
#line 385 "query.m"
  }
#line 39 "query.m"
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
