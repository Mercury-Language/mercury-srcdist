/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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




#line 97 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0;

#line 100 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1;

#line 103 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2;

#line 106 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3];

#line 109 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3];

#line 112 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3];

#line 115 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0;

#line 118 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1;

#line 121 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2];

#line 124 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2];

#line 127 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2];

#line 130 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0;

#line 133 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1;

#line 136 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2;

#line 139 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3;

#line 142 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4];

#line 145 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4];

#line 148 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4];

#line 151 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0;

#line 154 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1;

#line 157 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2;

#line 160 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3];

#line 163 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3];

#line 166 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3];

#line 169 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_0;

#line 172 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_1;

#line 175 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1];

#line 178 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1];

#line 181 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_2;

#line 184 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_3;

#line 187 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 190 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1];

#line 193 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1];

#line 196 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_4;

#line 199 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1];

#line 202 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1];

#line 205 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_5;

#line 208 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1];

#line 211 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1];

#line 214 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_6;

#line 217 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_7;

#line 220 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1];

#line 223 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1];

#line 226 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_8;

#line 229 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5];

#line 232 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5];

#line 235 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_9;

#line 238 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_10;

#line 241 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1];

#line 244 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1];

#line 247 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_11;

#line 250 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1];

#line 253 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1];

#line 256 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_12;

#line 259 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1];

#line 262 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1];

#line 265 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_13;

#line 268 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4];

#line 271 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4];

#line 274 "query.c"
static const MR_DuArgLocn query__query__field_locns_cmd_0_14[4];

#line 277 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_14;

#line 280 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1];

#line 283 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1];

#line 286 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_15;

#line 289 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1];

#line 292 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1];

#line 295 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_16;

#line 298 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1];

#line 301 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1];

#line 304 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_17;

#line 307 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1];

#line 310 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1];

#line 313 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_18;

#line 316 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1];

#line 319 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1];

#line 322 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_19;

#line 325 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1];

#line 328 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1];

#line 331 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_20;

#line 334 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1];

#line 337 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1];

#line 340 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_21;

#line 343 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1];

#line 346 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1];

#line 349 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_cmd_0_22;

#line 352 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5];

#line 355 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1];

#line 358 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1];

#line 361 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_3[16];

#line 364 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_cmd_0[4];

#line 367 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_cmd_0[23];

#line 370 "query.c"
static const MR_Integer query__query__functor_number_map_cmd_0[23];

#line 373 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0;

#line 376 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1;

#line 379 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2];

#line 382 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2];

#line 385 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2];

#line 388 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0;

#line 391 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1;

#line 394 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2];

#line 397 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2];

#line 400 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2];

#line 403 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0;

#line 406 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1;

#line 409 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2;

#line 412 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3;

#line 415 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4;

#line 418 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5;

#line 421 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6];

#line 424 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6];

#line 427 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6];

#line 430 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0;

#line 433 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0;

#line 436 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3];

#line 439 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3];

#line 442 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_deep_query_0_0;

#line 445 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1];

#line 448 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1];

#line 451 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1];

#line 454 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1];

#line 457 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0;

#line 460 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1;

#line 463 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2];

#line 466 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2];

#line 469 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2];

#line 472 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0;

#line 475 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1;

#line 478 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2];

#line 481 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2];

#line 484 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2];

#line 487 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2];

#line 490 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_0;

#line 493 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1];

#line 496 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_1;

#line 499 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1];

#line 502 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_display_limit_0_2;

#line 505 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1];

#line 508 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1];

#line 511 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1];

#line 514 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_display_limit_0[3];

#line 517 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3];

#line 520 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3];

#line 523 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5];

#line 526 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5];

#line 529 "query.c"
static const MR_DuArgLocn query__query__field_locns_fields_0_0[5];

#line 532 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_fields_0_0;

#line 535 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1];

#line 538 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1];

#line 541 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1];

#line 544 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1];

#line 547 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3];

#line 550 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3];

#line 553 "query.c"
static const MR_DuArgLocn query__query__field_locns_inactive_items_0_0[3];

#line 556 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_inactive_items_0_0;

#line 559 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1];

#line 562 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1];

#line 565 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1];

#line 568 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1];

#line 571 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0;

#line 574 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1;

#line 577 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2];

#line 580 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2];

#line 583 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2];

#line 586 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0;

#line 589 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1;

#line 592 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2];

#line 595 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2];

#line 598 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2];

#line 601 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0;

#line 604 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1;

#line 607 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2];

#line 610 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2];

#line 613 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2];

#line 616 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_0;

#line 619 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1];

#line 622 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_1;

#line 625 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1];

#line 628 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_memory_fields_0_2;

#line 631 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1];

#line 634 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1];

#line 637 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1];

#line 640 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_memory_fields_0[3];

#line 643 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3];

#line 646 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3];

#line 649 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0;

#line 652 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1;

#line 655 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2;

#line 658 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3];

#line 661 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3];

#line 664 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3];

#line 667 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_0;

#line 670 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_1;

#line 673 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3];

#line 676 "query.c"
static const MR_DuArgLocn query__query__field_locns_order_criteria_0_2[3];

#line 679 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_order_criteria_0_2;

#line 682 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2];

#line 685 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1];

#line 688 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_order_criteria_0[2];

#line 691 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3];

#line 694 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3];

#line 697 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0;

#line 700 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1;

#line 703 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2];

#line 706 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2];

#line 709 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2];

#line 712 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_0_0[12];

#line 715 "query.c"
static const MR_ConstString query__query__field_names_preferences_0_0[12];

#line 718 "query.c"
static const MR_DuArgLocn query__query__field_locns_preferences_0_0[12];

#line 721 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_0_0;

#line 724 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1];

#line 727 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1];

#line 730 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1];

#line 733 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1];

#line 736 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1];

#line 739 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_0;

#line 742 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_1;

#line 745 "query.c"
static const MR_DuFunctorDesc query__query__du_functor_desc_preferences_indication_0_2;

#line 748 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2];

#line 751 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1];

#line 754 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_indication_0[2];

#line 757 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3];

#line 760 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3];

#line 763 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1];

#line 766 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0;

#line 769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0;

#line 772 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1;

#line 775 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2];

#line 778 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2];

#line 781 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2];

#line 784 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0;

#line 787 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1;

#line 790 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2;

#line 793 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3;

#line 796 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4;

#line 799 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5;

#line 802 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6];

#line 805 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6];

#line 808 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6];

#line 811 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0;

#line 814 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1;

#line 817 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2;

#line 820 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3];

#line 823 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3];

#line 826 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3];

#line 829 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 832 "query.c"
  MR_Box query__wrapper_arg_1,
#line 834 "query.c"
  MR_Box query__wrapper_arg_2);

#line 837 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 840 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 842 "query.c"
  MR_Box query__wrapper_arg_2,
#line 844 "query.c"
  MR_Box query__wrapper_arg_3);

#line 847 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 850 "query.c"
  MR_Box query__wrapper_arg_1,
#line 852 "query.c"
  MR_Box query__wrapper_arg_2);

#line 855 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 858 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 860 "query.c"
  MR_Box query__wrapper_arg_2,
#line 862 "query.c"
  MR_Box query__wrapper_arg_3);

#line 865 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 868 "query.c"
  MR_Box query__wrapper_arg_1,
#line 870 "query.c"
  MR_Box query__wrapper_arg_2);

#line 873 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 876 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 878 "query.c"
  MR_Box query__wrapper_arg_2,
#line 880 "query.c"
  MR_Box query__wrapper_arg_3);

#line 883 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 886 "query.c"
  MR_Box query__wrapper_arg_1,
#line 888 "query.c"
  MR_Box query__wrapper_arg_2);

#line 891 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 894 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 896 "query.c"
  MR_Box query__wrapper_arg_2,
#line 898 "query.c"
  MR_Box query__wrapper_arg_3);

#line 901 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 904 "query.c"
  MR_Box query__wrapper_arg_1,
#line 906 "query.c"
  MR_Box query__wrapper_arg_2);

#line 909 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 912 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 914 "query.c"
  MR_Box query__wrapper_arg_2,
#line 916 "query.c"
  MR_Box query__wrapper_arg_3);

#line 919 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 922 "query.c"
  MR_Box query__wrapper_arg_1,
#line 924 "query.c"
  MR_Box query__wrapper_arg_2);

#line 927 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 930 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 932 "query.c"
  MR_Box query__wrapper_arg_2,
#line 934 "query.c"
  MR_Box query__wrapper_arg_3);

#line 937 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 940 "query.c"
  MR_Box query__wrapper_arg_1,
#line 942 "query.c"
  MR_Box query__wrapper_arg_2);

#line 945 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 948 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 950 "query.c"
  MR_Box query__wrapper_arg_2,
#line 952 "query.c"
  MR_Box query__wrapper_arg_3);

#line 955 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 958 "query.c"
  MR_Box query__wrapper_arg_1,
#line 960 "query.c"
  MR_Box query__wrapper_arg_2);

#line 963 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 966 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 968 "query.c"
  MR_Box query__wrapper_arg_2,
#line 970 "query.c"
  MR_Box query__wrapper_arg_3);

#line 973 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 976 "query.c"
  MR_Box query__wrapper_arg_1,
#line 978 "query.c"
  MR_Box query__wrapper_arg_2);

#line 981 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 984 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 986 "query.c"
  MR_Box query__wrapper_arg_2,
#line 988 "query.c"
  MR_Box query__wrapper_arg_3);

#line 991 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 994 "query.c"
  MR_Box query__wrapper_arg_1,
#line 996 "query.c"
  MR_Box query__wrapper_arg_2);

#line 999 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 1002 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1004 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1006 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1009 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 1012 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1014 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1017 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 1020 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1022 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1024 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1027 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 1030 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1032 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1035 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 1038 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1040 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1042 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1045 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 1048 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1050 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1053 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 1056 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1058 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1060 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1063 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 1066 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1068 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1071 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 1074 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1076 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1078 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1081 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 1084 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1086 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1089 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 1092 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1094 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1096 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1099 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 1102 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1104 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1107 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 1110 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1112 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1114 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1117 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 1120 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1122 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1125 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 1128 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1130 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1132 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1135 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 1138 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1140 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1143 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 1146 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1148 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1150 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1153 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 1156 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1158 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1161 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 1164 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1166 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1168 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1171 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 1174 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1176 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1179 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 1182 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1184 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1186 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1189 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 1192 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1194 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1197 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 1200 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1202 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1204 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1207 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 1210 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1212 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1215 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 1218 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1220 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1222 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1225 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 1228 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1230 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1233 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 1236 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1238 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1240 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1243 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 1246 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1248 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1251 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 1254 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1256 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1258 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1261 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 1264 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1266 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1269 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 1272 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1274 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1276 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1279 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 1282 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1284 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1287 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 1290 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1292 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1294 "query.c"
  MR_Box query__wrapper_arg_3);

#line 1297 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 1300 "query.c"
  MR_Box query__wrapper_arg_1,
#line 1302 "query.c"
  MR_Box query__wrapper_arg_2);

#line 1305 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 1308 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 1310 "query.c"
  MR_Box query__wrapper_arg_2,
#line 1312 "query.c"
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



#include "profile.mh"
#include "profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1763 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

#line 1769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

#line 1775 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

#line 1781 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

#line 1788 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

#line 1795 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1802 "query.c"
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

#line 1823 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

#line 1829 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

#line 1835 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1841 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1847 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1853 "query.c"
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

#line 1874 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

#line 1880 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

#line 1886 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

#line 1892 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

#line 1898 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

#line 1906 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

#line 1914 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1922 "query.c"
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

#line 1943 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

#line 1949 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

#line 1955 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

#line 1961 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

#line 1968 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

#line 1975 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1982 "query.c"
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

#line 2003 "query.c"
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

#line 2018 "query.c"
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

#line 2033 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2038 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

#line 2043 "query.c"
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

#line 2058 "query.c"
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

#line 2073 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2081 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2086 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

#line 2091 "query.c"
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

#line 2106 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2111 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

#line 2116 "query.c"
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

#line 2131 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2136 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

#line 2141 "query.c"
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

#line 2156 "query.c"
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

#line 2171 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2176 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

#line 2181 "query.c"
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

#line 2196 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

#line 2205 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

#line 2214 "query.c"
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

#line 2229 "query.c"
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

#line 2244 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2249 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

#line 2254 "query.c"
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

#line 2269 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2274 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

#line 2279 "query.c"
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

#line 2294 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2299 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

#line 2304 "query.c"
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

#line 2319 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 2327 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

#line 2335 "query.c"
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

#line 2359 "query.c"
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

#line 2374 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2379 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

#line 2384 "query.c"
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

#line 2399 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2404 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

#line 2409 "query.c"
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

#line 2424 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2429 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

#line 2434 "query.c"
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

#line 2449 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2454 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

#line 2459 "query.c"
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

#line 2474 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

#line 2479 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

#line 2484 "query.c"
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

#line 2499 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2504 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

#line 2509 "query.c"
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

#line 2524 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2529 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

#line 2534 "query.c"
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

#line 2549 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2554 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

#line 2559 "query.c"
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

#line 2574 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

#line 2583 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

#line 2588 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

#line 2593 "query.c"
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

#line 2613 "query.c"
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

#line 2637 "query.c"
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

#line 2664 "query.c"
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

#line 2691 "query.c"
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

#line 2712 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

#line 2718 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

#line 2724 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2730 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2736 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2742 "query.c"
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

#line 2763 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

#line 2769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

#line 2775 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2781 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2787 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2793 "query.c"
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

#line 2814 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

#line 2820 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

#line 2826 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

#line 2832 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

#line 2838 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

#line 2844 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

#line 2850 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2860 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2870 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 2880 "query.c"
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

#line 2901 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

#line 2909 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 2917 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

#line 2924 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

#line 2931 "query.c"
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

#line 2946 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2951 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

#line 2960 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2965 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

#line 2970 "query.c"
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

#line 2991 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

#line 2997 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

#line 3003 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3009 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3015 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3021 "query.c"
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

#line 3042 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

#line 3048 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

#line 3054 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

#line 3060 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

#line 3066 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3072 "query.c"
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

#line 3093 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3099 "query.c"
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

#line 3114 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3119 "query.c"
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

#line 3134 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3139 "query.c"
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

#line 3154 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

#line 3159 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

#line 3164 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3169 "query.c"
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

#line 3188 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3195 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 3202 "query.c"
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

#line 3223 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
};

#line 3232 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

#line 3241 "query.c"
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

#line 3270 "query.c"
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

#line 3285 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3290 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

#line 3299 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3304 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

#line 3309 "query.c"
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

#line 3330 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

#line 3337 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

#line 3344 "query.c"
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

#line 3363 "query.c"
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

#line 3378 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3383 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

#line 3392 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3397 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

#line 3402 "query.c"
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

#line 3423 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

#line 3429 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

#line 3435 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3441 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3447 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3453 "query.c"
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

#line 3474 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

#line 3480 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

#line 3486 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3492 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3498 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3504 "query.c"
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

#line 3525 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

#line 3531 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

#line 3537 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

#line 3543 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

#line 3549 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3555 "query.c"
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

#line 3576 "query.c"
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

#line 3591 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3596 "query.c"
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

#line 3611 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3616 "query.c"
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

#line 3631 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3636 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

#line 3641 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

#line 3646 "query.c"
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

#line 3665 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3672 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3679 "query.c"
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

#line 3700 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

#line 3706 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

#line 3712 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

#line 3718 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

#line 3725 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

#line 3732 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3739 "query.c"
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

#line 3760 "query.c"
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

#line 3775 "query.c"
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

#line 3790 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 3797 "query.c"
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

#line 3816 "query.c"
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

#line 3831 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3837 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

#line 3842 "query.c"
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

#line 3856 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3863 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3870 "query.c"
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

#line 3891 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

#line 3897 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

#line 3903 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3909 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3915 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3921 "query.c"
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

#line 3942 "query.c"
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

#line 3958 "query.c"
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

#line 3974 "query.c"
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

#line 4038 "query.c"
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

#line 4053 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4058 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

#line 4067 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4072 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

#line 4077 "query.c"
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

#line 4098 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

#line 4103 "query.c"
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

#line 4118 "query.c"
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

#line 4133 "query.c"
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

#line 4148 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

#line 4154 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4159 "query.c"
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

#line 4173 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4180 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4187 "query.c"
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

#line 4208 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

#line 4213 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4220 "query.c"
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

#line 4241 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

#line 4247 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

#line 4253 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

#line 4259 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

#line 4265 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4271 "query.c"
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

#line 4292 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

#line 4298 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

#line 4304 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

#line 4310 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

#line 4316 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

#line 4322 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

#line 4328 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

#line 4338 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

#line 4348 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 4358 "query.c"
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

#line 4379 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

#line 4385 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

#line 4391 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

#line 4397 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4404 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4411 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4418 "query.c"
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

#line 4439 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 4442 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4444 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4446 "query.c"
{
#line 4448 "query.c"
  {
#line 4450 "query.c"
    MR_bool query__succeeded;

#line 4453 "query.c"
    {
#line 4455 "query.c"
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4458 "query.c"
    return query__succeeded;
#line 4460 "query.c"
  }
#line 4462 "query.c"
}

#line 4465 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 4468 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4470 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4472 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4474 "query.c"
{
#line 4476 "query.c"
  {
#line 4478 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4481 "query.c"
    {
#line 4483 "query.c"
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4486 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4488 "query.c"
  }
#line 4490 "query.c"
}

#line 4493 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 4496 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4498 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4500 "query.c"
{
#line 4502 "query.c"
  {
#line 4504 "query.c"
    MR_bool query__succeeded;

#line 4507 "query.c"
    {
#line 4509 "query.c"
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4512 "query.c"
    return query__succeeded;
#line 4514 "query.c"
  }
#line 4516 "query.c"
}

#line 4519 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 4522 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4524 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4526 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4528 "query.c"
{
#line 4530 "query.c"
  {
#line 4532 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4535 "query.c"
    {
#line 4537 "query.c"
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4540 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4542 "query.c"
  }
#line 4544 "query.c"
}

#line 4547 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 4550 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4552 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4554 "query.c"
{
#line 4556 "query.c"
  {
#line 4558 "query.c"
    MR_bool query__succeeded;

#line 4561 "query.c"
    {
#line 4563 "query.c"
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4566 "query.c"
    return query__succeeded;
#line 4568 "query.c"
  }
#line 4570 "query.c"
}

#line 4573 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 4576 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4578 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4580 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4582 "query.c"
{
#line 4584 "query.c"
  {
#line 4586 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4589 "query.c"
    {
#line 4591 "query.c"
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4594 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4596 "query.c"
  }
#line 4598 "query.c"
}

#line 4601 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 4604 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4606 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4608 "query.c"
{
#line 4610 "query.c"
  {
#line 4612 "query.c"
    MR_bool query__succeeded;

#line 4615 "query.c"
    {
#line 4617 "query.c"
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4620 "query.c"
    return query__succeeded;
#line 4622 "query.c"
  }
#line 4624 "query.c"
}

#line 4627 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 4630 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4632 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4634 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4636 "query.c"
{
#line 4638 "query.c"
  {
#line 4640 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4643 "query.c"
    {
#line 4645 "query.c"
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4648 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4650 "query.c"
  }
#line 4652 "query.c"
}

#line 4655 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 4658 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4660 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4662 "query.c"
{
#line 4664 "query.c"
  {
#line 4666 "query.c"
    MR_bool query__succeeded;

#line 4669 "query.c"
    {
#line 4671 "query.c"
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4674 "query.c"
    return query__succeeded;
#line 4676 "query.c"
  }
#line 4678 "query.c"
}

#line 4681 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 4684 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4686 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4688 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4690 "query.c"
{
#line 4692 "query.c"
  {
#line 4694 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4697 "query.c"
    {
#line 4699 "query.c"
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4702 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4704 "query.c"
  }
#line 4706 "query.c"
}

#line 4709 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 4712 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4714 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4716 "query.c"
{
#line 4718 "query.c"
  {
#line 4720 "query.c"
    MR_bool query__succeeded;

#line 4723 "query.c"
    {
#line 4725 "query.c"
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4728 "query.c"
    return query__succeeded;
#line 4730 "query.c"
  }
#line 4732 "query.c"
}

#line 4735 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 4738 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4740 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4742 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4744 "query.c"
{
#line 4746 "query.c"
  {
#line 4748 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4751 "query.c"
    {
#line 4753 "query.c"
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4756 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4758 "query.c"
  }
#line 4760 "query.c"
}

#line 4763 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 4766 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4768 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4770 "query.c"
{
#line 4772 "query.c"
  {
#line 4774 "query.c"
    MR_bool query__succeeded;

#line 4777 "query.c"
    {
#line 4779 "query.c"
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4782 "query.c"
    return query__succeeded;
#line 4784 "query.c"
  }
#line 4786 "query.c"
}

#line 4789 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 4792 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4794 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4796 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4798 "query.c"
{
#line 4800 "query.c"
  {
#line 4802 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4805 "query.c"
    {
#line 4807 "query.c"
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4810 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4812 "query.c"
  }
#line 4814 "query.c"
}

#line 4817 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 4820 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4822 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4824 "query.c"
{
#line 4826 "query.c"
  {
#line 4828 "query.c"
    MR_bool query__succeeded;

#line 4831 "query.c"
    {
#line 4833 "query.c"
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4836 "query.c"
    return query__succeeded;
#line 4838 "query.c"
  }
#line 4840 "query.c"
}

#line 4843 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 4846 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4848 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4850 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4852 "query.c"
{
#line 4854 "query.c"
  {
#line 4856 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4859 "query.c"
    {
#line 4861 "query.c"
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4864 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4866 "query.c"
  }
#line 4868 "query.c"
}

#line 4871 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 4874 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4876 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4878 "query.c"
{
#line 4880 "query.c"
  {
#line 4882 "query.c"
    MR_bool query__succeeded;

#line 4885 "query.c"
    {
#line 4887 "query.c"
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4890 "query.c"
    return query__succeeded;
#line 4892 "query.c"
  }
#line 4894 "query.c"
}

#line 4897 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 4900 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4902 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4904 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4906 "query.c"
{
#line 4908 "query.c"
  {
#line 4910 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4913 "query.c"
    {
#line 4915 "query.c"
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4918 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4920 "query.c"
  }
#line 4922 "query.c"
}

#line 4925 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 4928 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4930 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4932 "query.c"
{
#line 4934 "query.c"
  {
#line 4936 "query.c"
    MR_bool query__succeeded;

#line 4939 "query.c"
    {
#line 4941 "query.c"
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4944 "query.c"
    return query__succeeded;
#line 4946 "query.c"
  }
#line 4948 "query.c"
}

#line 4951 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 4954 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4956 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4958 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4960 "query.c"
{
#line 4962 "query.c"
  {
#line 4964 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4967 "query.c"
    {
#line 4969 "query.c"
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4972 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4974 "query.c"
  }
#line 4976 "query.c"
}

#line 4979 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 4982 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4984 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4986 "query.c"
{
#line 4988 "query.c"
  {
#line 4990 "query.c"
    MR_bool query__succeeded;

#line 4993 "query.c"
    {
#line 4995 "query.c"
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4998 "query.c"
    return query__succeeded;
#line 5000 "query.c"
  }
#line 5002 "query.c"
}

#line 5005 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 5008 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5010 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5012 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5014 "query.c"
{
#line 5016 "query.c"
  {
#line 5018 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5021 "query.c"
    {
#line 5023 "query.c"
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5026 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5028 "query.c"
  }
#line 5030 "query.c"
}

#line 5033 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 5036 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5038 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5040 "query.c"
{
#line 5042 "query.c"
  {
#line 5044 "query.c"
    MR_bool query__succeeded;

#line 5047 "query.c"
    {
#line 5049 "query.c"
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5052 "query.c"
    return query__succeeded;
#line 5054 "query.c"
  }
#line 5056 "query.c"
}

#line 5059 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 5062 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5064 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5066 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5068 "query.c"
{
#line 5070 "query.c"
  {
#line 5072 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5075 "query.c"
    {
#line 5077 "query.c"
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5080 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5082 "query.c"
  }
#line 5084 "query.c"
}

#line 5087 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 5090 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5092 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5094 "query.c"
{
#line 5096 "query.c"
  {
#line 5098 "query.c"
    MR_bool query__succeeded;

#line 5101 "query.c"
    {
#line 5103 "query.c"
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5106 "query.c"
    return query__succeeded;
#line 5108 "query.c"
  }
#line 5110 "query.c"
}

#line 5113 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 5116 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5118 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5120 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5122 "query.c"
{
#line 5124 "query.c"
  {
#line 5126 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5129 "query.c"
    {
#line 5131 "query.c"
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5134 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5136 "query.c"
  }
#line 5138 "query.c"
}

#line 5141 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 5144 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5146 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5148 "query.c"
{
#line 5150 "query.c"
  {
#line 5152 "query.c"
    MR_bool query__succeeded;

#line 5155 "query.c"
    {
#line 5157 "query.c"
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5160 "query.c"
    return query__succeeded;
#line 5162 "query.c"
  }
#line 5164 "query.c"
}

#line 5167 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 5170 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5172 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5174 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5176 "query.c"
{
#line 5178 "query.c"
  {
#line 5180 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5183 "query.c"
    {
#line 5185 "query.c"
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5188 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5190 "query.c"
  }
#line 5192 "query.c"
}

#line 5195 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 5198 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5200 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5202 "query.c"
{
#line 5204 "query.c"
  {
#line 5206 "query.c"
    MR_bool query__succeeded;

#line 5209 "query.c"
    {
#line 5211 "query.c"
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5214 "query.c"
    return query__succeeded;
#line 5216 "query.c"
  }
#line 5218 "query.c"
}

#line 5221 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 5224 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5226 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5228 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5230 "query.c"
{
#line 5232 "query.c"
  {
#line 5234 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5237 "query.c"
    {
#line 5239 "query.c"
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5242 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5244 "query.c"
  }
#line 5246 "query.c"
}

#line 5249 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 5252 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5254 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5256 "query.c"
{
#line 5258 "query.c"
  {
#line 5260 "query.c"
    MR_bool query__succeeded;

#line 5263 "query.c"
    {
#line 5265 "query.c"
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5268 "query.c"
    return query__succeeded;
#line 5270 "query.c"
  }
#line 5272 "query.c"
}

#line 5275 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 5278 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5280 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5282 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5284 "query.c"
{
#line 5286 "query.c"
  {
#line 5288 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5291 "query.c"
    {
#line 5293 "query.c"
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5296 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5298 "query.c"
  }
#line 5300 "query.c"
}

#line 5303 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 5306 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5308 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5310 "query.c"
{
#line 5312 "query.c"
  {
#line 5314 "query.c"
    MR_bool query__succeeded;

#line 5317 "query.c"
    {
#line 5319 "query.c"
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5322 "query.c"
    return query__succeeded;
#line 5324 "query.c"
  }
#line 5326 "query.c"
}

#line 5329 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 5332 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5334 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5336 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5338 "query.c"
{
#line 5340 "query.c"
  {
#line 5342 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5345 "query.c"
    {
#line 5347 "query.c"
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5350 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5352 "query.c"
  }
#line 5354 "query.c"
}

#line 5357 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 5360 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5362 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5364 "query.c"
{
#line 5366 "query.c"
  {
#line 5368 "query.c"
    MR_bool query__succeeded;

#line 5371 "query.c"
    {
#line 5373 "query.c"
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5376 "query.c"
    return query__succeeded;
#line 5378 "query.c"
  }
#line 5380 "query.c"
}

#line 5383 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 5386 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5388 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5390 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5392 "query.c"
{
#line 5394 "query.c"
  {
#line 5396 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5399 "query.c"
    {
#line 5401 "query.c"
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5404 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5406 "query.c"
  }
#line 5408 "query.c"
}

#line 5411 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 5414 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5416 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5418 "query.c"
{
#line 5420 "query.c"
  {
#line 5422 "query.c"
    MR_bool query__succeeded;

#line 5425 "query.c"
    {
#line 5427 "query.c"
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5430 "query.c"
    return query__succeeded;
#line 5432 "query.c"
  }
#line 5434 "query.c"
}

#line 5437 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 5440 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5442 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5444 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5446 "query.c"
{
#line 5448 "query.c"
  {
#line 5450 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5453 "query.c"
    {
#line 5455 "query.c"
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5458 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5460 "query.c"
  }
#line 5462 "query.c"
}

#line 5465 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 5468 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5470 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5472 "query.c"
{
#line 5474 "query.c"
  {
#line 5476 "query.c"
    MR_bool query__succeeded;

#line 5479 "query.c"
    {
#line 5481 "query.c"
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5484 "query.c"
    return query__succeeded;
#line 5486 "query.c"
  }
#line 5488 "query.c"
}

#line 5491 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 5494 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5496 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5498 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5500 "query.c"
{
#line 5502 "query.c"
  {
#line 5504 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5507 "query.c"
    {
#line 5509 "query.c"
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5512 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5514 "query.c"
  }
#line 5516 "query.c"
}

#line 5519 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 5522 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5524 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5526 "query.c"
{
#line 5528 "query.c"
  {
#line 5530 "query.c"
    MR_bool query__succeeded;

#line 5533 "query.c"
    {
#line 5535 "query.c"
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5538 "query.c"
    return query__succeeded;
#line 5540 "query.c"
  }
#line 5542 "query.c"
}

#line 5545 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 5548 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5550 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5552 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5554 "query.c"
{
#line 5556 "query.c"
  {
#line 5558 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5561 "query.c"
    {
#line 5563 "query.c"
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5566 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5568 "query.c"
  }
#line 5570 "query.c"
}

#line 5573 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 5576 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5578 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5580 "query.c"
{
#line 5582 "query.c"
  {
#line 5584 "query.c"
    MR_bool query__succeeded;

#line 5587 "query.c"
    {
#line 5589 "query.c"
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5592 "query.c"
    return query__succeeded;
#line 5594 "query.c"
  }
#line 5596 "query.c"
}

#line 5599 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 5602 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5604 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5606 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5608 "query.c"
{
#line 5610 "query.c"
  {
#line 5612 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5615 "query.c"
    {
#line 5617 "query.c"
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5620 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5622 "query.c"
  }
#line 5624 "query.c"
}

#line 5627 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 5630 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5632 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5634 "query.c"
{
#line 5636 "query.c"
  {
#line 5638 "query.c"
    MR_bool query__succeeded;

#line 5641 "query.c"
    {
#line 5643 "query.c"
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5646 "query.c"
    return query__succeeded;
#line 5648 "query.c"
  }
#line 5650 "query.c"
}

#line 5653 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 5656 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5658 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5660 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5662 "query.c"
{
#line 5664 "query.c"
  {
#line 5666 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5669 "query.c"
    {
#line 5671 "query.c"
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5674 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5676 "query.c"
  }
#line 5678 "query.c"
}

#line 5681 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 5684 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5686 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5688 "query.c"
{
#line 5690 "query.c"
  {
#line 5692 "query.c"
    MR_bool query__succeeded;

#line 5695 "query.c"
    {
#line 5697 "query.c"
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5700 "query.c"
    return query__succeeded;
#line 5702 "query.c"
  }
#line 5704 "query.c"
}

#line 5707 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 5710 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5712 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5714 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5716 "query.c"
{
#line 5718 "query.c"
  {
#line 5720 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5723 "query.c"
    {
#line 5725 "query.c"
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5728 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5730 "query.c"
  }
#line 5732 "query.c"
}

#line 5735 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 5738 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5740 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5742 "query.c"
{
#line 5744 "query.c"
  {
#line 5746 "query.c"
    MR_bool query__succeeded;

#line 5749 "query.c"
    {
#line 5751 "query.c"
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5754 "query.c"
    return query__succeeded;
#line 5756 "query.c"
  }
#line 5758 "query.c"
}

#line 5761 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 5764 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5766 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5768 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5770 "query.c"
{
#line 5772 "query.c"
  {
#line 5774 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5777 "query.c"
    {
#line 5779 "query.c"
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5782 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5784 "query.c"
  }
#line 5786 "query.c"
}

#line 5789 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 5792 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5794 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5796 "query.c"
{
#line 5798 "query.c"
  {
#line 5800 "query.c"
    MR_bool query__succeeded;

#line 5803 "query.c"
    {
#line 5805 "query.c"
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5808 "query.c"
    return query__succeeded;
#line 5810 "query.c"
  }
#line 5812 "query.c"
}

#line 5815 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 5818 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5820 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5822 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5824 "query.c"
{
#line 5826 "query.c"
  {
#line 5828 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5831 "query.c"
    {
#line 5833 "query.c"
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5836 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5838 "query.c"
  }
#line 5840 "query.c"
}

#line 5843 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 5846 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5848 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5850 "query.c"
{
#line 5852 "query.c"
  {
#line 5854 "query.c"
    MR_bool query__succeeded;

#line 5857 "query.c"
    {
#line 5859 "query.c"
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5862 "query.c"
    return query__succeeded;
#line 5864 "query.c"
  }
#line 5866 "query.c"
}

#line 5869 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 5872 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5874 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5876 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5878 "query.c"
{
#line 5880 "query.c"
  {
#line 5882 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5885 "query.c"
    {
#line 5887 "query.c"
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5890 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5892 "query.c"
  }
#line 5894 "query.c"
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
#line 6191 "query.c"
  {
#line 6193 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6196 "query.c"
    return query__succeeded;
#line 6198 "query.c"
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
#line 6244 "query.c"
  {
#line 6246 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6249 "query.c"
    return query__succeeded;
#line 6251 "query.c"
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
#line 6297 "query.c"
  {
#line 6299 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6302 "query.c"
    return query__succeeded;
#line 6304 "query.c"
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
#line 6333 "query.c"
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

#line 6391 "query.c"
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
#line 6426 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
    else
#line 237 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
        else
#line 237 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
          else
#line 6444 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
      else
#line 237 "query.m"
        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
          else
#line 237 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "query.m"
              *query__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "query.m"
            else
#line 6462 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "query.m"
        else
#line 237 "query.m"
          {
#line 237 "query.m"
            MR_Word query__V_13_13 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);

#line 237 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6473 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
            else
#line 237 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6479 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "query.m"
              else
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
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
      else
#line 237 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
        else
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
#line 6575 "query.c"
                {
#line 6577 "query.c"
                  return query__succeeded = query____Unify____preferences_0_0(query__V_3_3, query__V_4_4);
                }
#line 237 "query.m"
              }
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
#line 6615 "query.c"
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
#line 6677 "query.c"
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
#line 6701 "query.c"
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
#line 6725 "query.c"
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
#line 6745 "query.c"
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
#line 6765 "query.c"
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
#line 6789 "query.c"
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
#line 6809 "query.c"
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
#line 6833 "query.c"
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
#line 6857 "query.c"
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
#line 6881 "query.c"
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
#line 6901 "query.c"
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

#line 7033 "query.c"
        {
#line 7035 "query.c"
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
#line 189 "query.m"
        if (query__succeeded)
#line 189 "query.m"
          {
#line 7042 "query.c"
            query__succeeded = (query__V_4_4 == query__V_16_16);
#line 189 "query.m"
            if (query__succeeded)
#line 189 "query.m"
              {
#line 7048 "query.c"
                query__succeeded = (query__V_5_5 == query__V_17_17);
#line 189 "query.m"
                if (query__succeeded)
#line 189 "query.m"
                  {
#line 7054 "query.c"
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
#line 7056 "query.c"
                    {
#line 7058 "query.c"
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
#line 189 "query.m"
                    if (query__succeeded)
#line 189 "query.m"
                      {
#line 7065 "query.c"
                        query__succeeded = (query__V_7_7 == query__V_19_19);
#line 189 "query.m"
                        if (query__succeeded)
#line 189 "query.m"
                          {
#line 7071 "query.c"
                            query__succeeded = (query__V_8_8 == query__V_20_20);
#line 189 "query.m"
                            if (query__succeeded)
#line 189 "query.m"
                              {
#line 7077 "query.c"
                                {
#line 7079 "query.c"
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
#line 189 "query.m"
                                if (query__succeeded)
#line 189 "query.m"
                                  {
#line 7086 "query.c"
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
#line 189 "query.m"
                                    if (query__succeeded)
#line 189 "query.m"
                                      {
#line 7092 "query.c"
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
#line 189 "query.m"
                                        if (query__succeeded)
#line 189 "query.m"
                                          {
#line 7098 "query.c"
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
#line 189 "query.m"
                                            if (query__succeeded)
#line 189 "query.m"
                                              {
#line 7104 "query.c"
                                                {
#line 7106 "query.c"
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
#line 189 "query.m"
                                                if (query__succeeded)
#line 7111 "query.c"
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
#line 7183 "query.c"
  {
#line 7185 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7188 "query.c"
    return query__succeeded;
#line 7190 "query.c"
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
#line 7219 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
    else
#line 290 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
        else
#line 290 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 290 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
          else
#line 7237 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
      else
#line 290 "query.m"
        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 290 "query.m"
          if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "query.m"
            *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
          else
#line 290 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 290 "query.m"
              *query__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "query.m"
            else
#line 7255 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 290 "query.m"
        else
#line 290 "query.m"
          {
#line 290 "query.m"
            MR_Word query__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 290 "query.m"
            MR_Word query__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 7);

#line 290 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7270 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
            else
#line 290 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7276 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 290 "query.m"
              else
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
#line 7300 "query.c"
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
#line 7324 "query.c"
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
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 290 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
        else
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
#line 7444 "query.c"
                query__succeeded = (query__V_7_7 == query__V_10_10);
#line 290 "query.m"
                if (query__succeeded)
#line 290 "query.m"
                  {
#line 7450 "query.c"
                    query__succeeded = (query__V_8_8 == query__V_11_11);
#line 290 "query.m"
                    if (query__succeeded)
#line 7454 "query.c"
                      query__succeeded = (query__V_9_9 == query__V_12_12);
#line 290 "query.m"
                  }
#line 290 "query.m"
              }
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
#line 7510 "query.c"
  {
#line 7512 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7515 "query.c"
    return query__succeeded;
#line 7517 "query.c"
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
#line 7546 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "query.m"
    else
#line 264 "query.m"
      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "query.m"
        if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 264 "query.m"
          *query__HeadVar__1_1 = (MR_Integer) 0;
#line 264 "query.m"
        else
#line 264 "query.m"
          if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7560 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
          else
#line 7564 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
      else
#line 264 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7577 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
            else
#line 264 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
              else
#line 7603 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 264 "query.m"
          }
#line 264 "query.m"
        else
#line 264 "query.m"
          {
#line 264 "query.m"
            MR_Word query__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 264 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7616 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
            else
#line 264 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7622 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 264 "query.m"
              else
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
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 264 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 7709 "query.c"
                query__succeeded = (query__V_5_5 == query__V_6_6);
#line 264 "query.m"
              }
#line 264 "query.m"
          }
#line 264 "query.m"
        else
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
#line 7732 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 264 "query.m"
              }
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
#line 7786 "query.c"
  {
#line 7788 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7791 "query.c"
    return query__succeeded;
#line 7793 "query.c"
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
#line 7839 "query.c"
  {
#line 7841 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7844 "query.c"
    return query__succeeded;
#line 7846 "query.c"
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
#line 7892 "query.c"
  {
#line 7894 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7897 "query.c"
    return query__succeeded;
#line 7899 "query.c"
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
#line 7928 "query.c"
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
#line 7958 "query.c"
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
#line 7982 "query.c"
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

#line 8058 "query.c"
        query__succeeded = (query__V_3_3 == query__V_6_6);
#line 321 "query.m"
        if (query__succeeded)
#line 321 "query.m"
          {
#line 8064 "query.c"
            query__succeeded = (query__V_4_4 == query__V_7_7);
#line 321 "query.m"
            if (query__succeeded)
#line 8068 "query.c"
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
#line 8105 "query.c"
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
#line 8143 "query.c"
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
#line 8167 "query.c"
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
#line 8191 "query.c"
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
#line 8215 "query.c"
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

#line 8294 "query.c"
        query__succeeded = (query__V_3_3 == query__V_8_8);
#line 269 "query.m"
        if (query__succeeded)
#line 269 "query.m"
          {
#line 8300 "query.c"
            query__succeeded = (query__V_4_4 == query__V_9_9);
#line 269 "query.m"
            if (query__succeeded)
#line 269 "query.m"
              {
#line 8306 "query.c"
                query__succeeded = (query__V_5_5 == query__V_10_10);
#line 269 "query.m"
                if (query__succeeded)
#line 269 "query.m"
                  {
#line 8312 "query.c"
                    query__succeeded = (query__V_6_6 == query__V_11_11);
#line 269 "query.m"
                    if (query__succeeded)
#line 8316 "query.c"
                      {
#line 8318 "query.c"
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
#line 8360 "query.c"
      *query__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "query.m"
    else
#line 176 "query.m"
      if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 176 "query.m"
        {
#line 176 "query.m"
          MR_Integer query__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "query.m"
          MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
          if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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
#line 8389 "query.c"
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
          else
#line 176 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8412 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
            else
#line 8416 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
        }
#line 176 "query.m"
      else
#line 176 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_37_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8431 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
            else
#line 176 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
              else
#line 8453 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 1;
#line 176 "query.m"
          }
#line 176 "query.m"
        else
#line 176 "query.m"
          {
#line 176 "query.m"
            MR_Float query__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(2), query__HeadVar__2_2, (MR_Integer) 0)));

#line 176 "query.m"
            if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8466 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
            else
#line 176 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8472 "query.c"
                *query__HeadVar__1_1 = (MR_Integer) 2;
#line 176 "query.m"
              else
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
      if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 8546 "query.c"
              query__succeeded = (query__V_3_3 == query__V_5_5);
#line 176 "query.m"
              if (query__succeeded)
#line 8550 "query.c"
                query__succeeded = (query__V_4_4 == query__V_6_6);
#line 176 "query.m"
            }
#line 176 "query.m"
        }
#line 176 "query.m"
      else
#line 176 "query.m"
        if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 8575 "query.c"
                query__succeeded = (query__V_7_7 == query__V_8_8);
#line 176 "query.m"
              }
#line 176 "query.m"
          }
#line 176 "query.m"
        else
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
#line 8598 "query.c"
                query__succeeded = (query__V_9_9 == query__V_10_10);
#line 176 "query.m"
              }
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
#line 8652 "query.c"
  {
#line 8654 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8657 "query.c"
    return query__succeeded;
#line 8659 "query.c"
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
#line 8705 "query.c"
  {
#line 8707 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8710 "query.c"
    return query__succeeded;
#line 8712 "query.c"
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
#line 8741 "query.c"
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
#line 8767 "query.c"
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
#line 8787 "query.c"
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

#line 8860 "query.c"
        {
#line 8862 "query.c"
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
#line 47 "query.m"
        if (query__succeeded)
#line 47 "query.m"
          {
#line 8869 "query.c"
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
#line 47 "query.m"
            if (query__succeeded)
#line 47 "query.m"
              {
#line 8875 "query.c"
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
#line 8877 "query.c"
                {
#line 8879 "query.c"
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
#line 8936 "query.c"
  {
#line 8938 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8941 "query.c"
    return query__succeeded;
#line 8943 "query.c"
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
#line 8989 "query.c"
  {
#line 8991 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8994 "query.c"
    return query__succeeded;
#line 8996 "query.c"
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
#line 9042 "query.c"
  {
#line 9044 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9047 "query.c"
    return query__succeeded;
#line 9049 "query.c"
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
#line 9078 "query.c"
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
#line 9103 "query.c"
          *query__HeadVar__1_1 = (MR_Integer) 1;
#line 73 "query.m"
        else
#line 73 "query.m"
          {
#line 73 "query.m"
            query__succeeded = (query__V_4_4 > query__V_5_5);
#line 73 "query.m"
            if (query__succeeded)
#line 9113 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 73 "query.m"
            else
#line 73 "query.m"
              {
#line 73 "query.m"
                MR_Word query__V_6_6;

#line 73 "query.m"
                if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 73 "query.m"
                  {
#line 73 "query.m"
                    query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                    query__succeeded = MR_TRUE;
#line 73 "query.m"
                  }
#line 73 "query.m"
                else
#line 73 "query.m"
                  if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 73 "query.m"
                    {
#line 73 "query.m"
                      query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                      query__succeeded = MR_TRUE;
#line 73 "query.m"
                    }
#line 73 "query.m"
                  else
#line 73 "query.m"
                    if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "query.m"
                      {
#line 73 "query.m"
                        query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                        query__succeeded = MR_TRUE;
#line 73 "query.m"
                      }
#line 73 "query.m"
                    else
#line 73 "query.m"
                      if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 73 "query.m"
                        {
#line 73 "query.m"
                          query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                          query__succeeded = MR_TRUE;
#line 73 "query.m"
                        }
#line 73 "query.m"
                      else
#line 73 "query.m"
                        if ((query__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 73 "query.m"
                          {
#line 73 "query.m"
                            query__V_6_6 = (MR_Integer) 0;
#line 73 "query.m"
                            query__succeeded = MR_TRUE;
#line 73 "query.m"
                          }
#line 73 "query.m"
                        else
#line 73 "query.m"
                          if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
#line 9201 "query.c"
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
                          else
#line 73 "query.m"
                            if (((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
                            else
#line 73 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
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
                              else
#line 73 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
                                else
#line 73 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
                                  else
#line 73 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
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
                                    else
#line 73 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
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
                                      else
#line 73 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
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
                                        else
#line 73 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
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
                                          else
#line 73 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
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
                                            else
#line 73 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
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
                                              else
#line 73 "query.m"
                                                if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
                                                else
#line 73 "query.m"
                                                  if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
                                                  else
#line 73 "query.m"
                                                    if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
                                                    else
#line 73 "query.m"
                                                      if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
                                                      else
#line 73 "query.m"
                                                        if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 9772 "query.c"
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
#line 9796 "query.c"
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
#line 9816 "query.c"
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
#line 9836 "query.c"
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
                                                        else
#line 73 "query.m"
                                                          if (((((MR_tag((MR_Word) query__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
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
                                                          else
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
#line 9952 "query.c"
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
#line 9976 "query.c"
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
#line 10000 "query.c"
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
    if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 10074 "query.c"
      *query__HeadVar__2_2 = (MR_Integer) 3;
#line 73 "query.m"
    else
#line 73 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 10080 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 10;
#line 73 "query.m"
      else
#line 73 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10086 "query.c"
          *query__HeadVar__2_2 = (MR_Integer) 0;
#line 73 "query.m"
        else
#line 73 "query.m"
          if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 10092 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 7;
#line 73 "query.m"
          else
#line 73 "query.m"
            if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 10098 "query.c"
              *query__HeadVar__2_2 = (MR_Integer) 1;
#line 73 "query.m"
            else
#line 73 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10104 "query.c"
                *query__HeadVar__2_2 = (MR_Integer) 4;
#line 73 "query.m"
              else
#line 73 "query.m"
                if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10110 "query.c"
                  *query__HeadVar__2_2 = (MR_Integer) 2;
#line 73 "query.m"
                else
#line 73 "query.m"
                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10116 "query.c"
                    *query__HeadVar__2_2 = (MR_Integer) 22;
#line 73 "query.m"
                  else
#line 73 "query.m"
                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10122 "query.c"
                      *query__HeadVar__2_2 = (MR_Integer) 5;
#line 73 "query.m"
                    else
#line 73 "query.m"
                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10128 "query.c"
                        *query__HeadVar__2_2 = (MR_Integer) 6;
#line 73 "query.m"
                      else
#line 73 "query.m"
                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10134 "query.c"
                          *query__HeadVar__2_2 = (MR_Integer) 20;
#line 73 "query.m"
                        else
#line 73 "query.m"
                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10140 "query.c"
                            *query__HeadVar__2_2 = (MR_Integer) 19;
#line 73 "query.m"
                          else
#line 73 "query.m"
                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 10146 "query.c"
                              *query__HeadVar__2_2 = (MR_Integer) 21;
#line 73 "query.m"
                            else
#line 73 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10152 "query.c"
                                *query__HeadVar__2_2 = (MR_Integer) 18;
#line 73 "query.m"
                              else
#line 73 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10158 "query.c"
                                  *query__HeadVar__2_2 = (MR_Integer) 17;
#line 73 "query.m"
                                else
#line 73 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10164 "query.c"
                                    *query__HeadVar__2_2 = (MR_Integer) 16;
#line 73 "query.m"
                                  else
#line 73 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10170 "query.c"
                                      *query__HeadVar__2_2 = (MR_Integer) 11;
#line 73 "query.m"
                                    else
#line 73 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10176 "query.c"
                                        *query__HeadVar__2_2 = (MR_Integer) 12;
#line 73 "query.m"
                                      else
#line 73 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10182 "query.c"
                                          *query__HeadVar__2_2 = (MR_Integer) 13;
#line 73 "query.m"
                                        else
#line 73 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10188 "query.c"
                                            *query__HeadVar__2_2 = (MR_Integer) 8;
#line 73 "query.m"
                                          else
#line 73 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10194 "query.c"
                                              *query__HeadVar__2_2 = (MR_Integer) 9;
#line 73 "query.m"
                                            else
#line 73 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10200 "query.c"
                                                *query__HeadVar__2_2 = (MR_Integer) 15;
#line 73 "query.m"
                                              else
#line 10204 "query.c"
                                                *query__HeadVar__2_2 = (MR_Integer) 14;
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
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
      else
#line 73 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
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
        else
#line 73 "query.m"
          if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          else
#line 73 "query.m"
            if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
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
            else
#line 73 "query.m"
              if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
              else
#line 73 "query.m"
                if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 10331 "query.c"
                        query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
#line 10333 "query.c"
                        {
#line 10335 "query.c"
                          return query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_76_76, ((MR_Box) (query__V_11_11)), ((MR_Box) (query__V_12_12)));
                        }
#line 73 "query.m"
                      }
#line 73 "query.m"
                  }
#line 73 "query.m"
                else
#line 73 "query.m"
                  if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 10361 "query.c"
                          query__succeeded = (query__V_7_7 == query__V_8_8);
#line 73 "query.m"
                        }
#line 73 "query.m"
                    }
#line 73 "query.m"
                  else
#line 73 "query.m"
                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
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
#line 10390 "query.c"
                            query__V_78_78 = (MR_Integer) query__V_61_61;
#line 10392 "query.c"
                            query__V_79_79 = (MR_Integer) query__V_62_62;
#line 10394 "query.c"
                            query__succeeded = (query__V_78_78 == query__V_79_79);
#line 73 "query.m"
                          }
#line 73 "query.m"
                      }
#line 73 "query.m"
                    else
#line 73 "query.m"
                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 10423 "query.c"
                              query__V_80_80 = (MR_Integer) query__V_13_13;
#line 10425 "query.c"
                              query__V_81_81 = (MR_Integer) query__V_14_14;
#line 10427 "query.c"
                              query__succeeded = (query__V_80_80 == query__V_81_81);
#line 73 "query.m"
                            }
#line 73 "query.m"
                        }
#line 73 "query.m"
                      else
#line 73 "query.m"
                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 10456 "query.c"
                                query__V_82_82 = (MR_Integer) query__V_15_15;
#line 10458 "query.c"
                                query__V_83_83 = (MR_Integer) query__V_16_16;
#line 10460 "query.c"
                                query__succeeded = (query__V_82_82 == query__V_83_83);
#line 73 "query.m"
                              }
#line 73 "query.m"
                          }
#line 73 "query.m"
                        else
#line 73 "query.m"
                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
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
#line 10489 "query.c"
                                  query__V_84_84 = (MR_Integer) query__V_57_57;
#line 10491 "query.c"
                                  query__V_85_85 = (MR_Integer) query__V_58_58;
#line 10493 "query.c"
                                  query__succeeded = (query__V_84_84 == query__V_85_85);
#line 73 "query.m"
                                }
#line 73 "query.m"
                            }
#line 73 "query.m"
                          else
#line 73 "query.m"
                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
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
#line 10522 "query.c"
                                    query__V_86_86 = (MR_Integer) query__V_55_55;
#line 10524 "query.c"
                                    query__V_87_87 = (MR_Integer) query__V_56_56;
#line 10526 "query.c"
                                    query__succeeded = (query__V_86_86 == query__V_87_87);
#line 73 "query.m"
                                  }
#line 73 "query.m"
                              }
#line 73 "query.m"
                            else
#line 73 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
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
#line 10555 "query.c"
                                      query__V_88_88 = (MR_Integer) query__V_59_59;
#line 10557 "query.c"
                                      query__V_89_89 = (MR_Integer) query__V_60_60;
#line 10559 "query.c"
                                      query__succeeded = (query__V_88_88 == query__V_89_89);
#line 73 "query.m"
                                    }
#line 73 "query.m"
                                }
#line 73 "query.m"
                              else
#line 73 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
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
#line 10588 "query.c"
                                        query__V_90_90 = (MR_Integer) query__V_53_53;
#line 10590 "query.c"
                                        query__V_91_91 = (MR_Integer) query__V_54_54;
#line 10592 "query.c"
                                        query__succeeded = (query__V_90_90 == query__V_91_91);
#line 73 "query.m"
                                      }
#line 73 "query.m"
                                  }
#line 73 "query.m"
                                else
#line 73 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
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
#line 10621 "query.c"
                                          query__V_92_92 = (MR_Integer) query__V_51_51;
#line 10623 "query.c"
                                          query__V_93_93 = (MR_Integer) query__V_52_52;
#line 10625 "query.c"
                                          query__succeeded = (query__V_92_92 == query__V_93_93);
#line 73 "query.m"
                                        }
#line 73 "query.m"
                                    }
#line 73 "query.m"
                                  else
#line 73 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
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
#line 10654 "query.c"
                                            query__V_94_94 = (MR_Integer) query__V_49_49;
#line 10656 "query.c"
                                            query__V_95_95 = (MR_Integer) query__V_50_50;
#line 10658 "query.c"
                                            query__succeeded = (query__V_94_94 == query__V_95_95);
#line 73 "query.m"
                                          }
#line 73 "query.m"
                                      }
#line 73 "query.m"
                                    else
#line 73 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
#line 10683 "query.c"
                                              query__succeeded = (strcmp(query__V_33_33, query__V_34_34) == 0);
#line 73 "query.m"
                                            }
#line 73 "query.m"
                                        }
#line 73 "query.m"
                                      else
#line 73 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
#line 10708 "query.c"
                                                query__succeeded = (strcmp(query__V_35_35, query__V_36_36) == 0);
#line 73 "query.m"
                                              }
#line 73 "query.m"
                                          }
#line 73 "query.m"
                                        else
#line 73 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
#line 10733 "query.c"
                                                  query__succeeded = (strcmp(query__V_37_37, query__V_38_38) == 0);
#line 73 "query.m"
                                                }
#line 73 "query.m"
                                            }
#line 73 "query.m"
                                          else
#line 73 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 10762 "query.c"
                                                    query__V_96_96 = (MR_Integer) query__V_19_19;
#line 10764 "query.c"
                                                    query__V_97_97 = (MR_Integer) query__V_20_20;
#line 10766 "query.c"
                                                    query__succeeded = (query__V_96_96 == query__V_97_97);
#line 73 "query.m"
                                                  }
#line 73 "query.m"
                                              }
#line 73 "query.m"
                                            else
#line 73 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 10819 "query.c"
                                                      query__succeeded = (query__V_22_22 == query__V_27_27);
#line 73 "query.m"
                                                      if (query__succeeded)
#line 73 "query.m"
                                                        {
#line 10825 "query.c"
                                                          query__succeeded = (query__V_23_23 == query__V_28_28);
#line 73 "query.m"
                                                          if (query__succeeded)
#line 73 "query.m"
                                                            {
#line 10831 "query.c"
                                                              query__succeeded = (query__V_24_24 == query__V_29_29);
#line 73 "query.m"
                                                              if (query__succeeded)
#line 73 "query.m"
                                                                {
#line 10837 "query.c"
                                                                  query__succeeded = (query__V_25_25 == query__V_30_30);
#line 73 "query.m"
                                                                  if (query__succeeded)
#line 73 "query.m"
                                                                    {
#line 10843 "query.c"
                                                                      query__V_98_98 = (MR_Integer) query__V_21_21;
#line 10845 "query.c"
                                                                      query__V_99_99 = (MR_Integer) query__V_26_26;
#line 10847 "query.c"
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
                                              else
#line 73 "query.m"
                                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
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
#line 10884 "query.c"
                                                        query__V_100_100 = (MR_Integer) query__V_47_47;
#line 10886 "query.c"
                                                        query__V_101_101 = (MR_Integer) query__V_48_48;
#line 10888 "query.c"
                                                        query__succeeded = (query__V_100_100 == query__V_101_101);
#line 73 "query.m"
                                                      }
#line 73 "query.m"
                                                  }
#line 73 "query.m"
                                                else
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
#line 10929 "query.c"
                                                        {
#line 10931 "query.c"
                                                          query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                                                        }
#line 73 "query.m"
                                                        if (query__succeeded)
#line 73 "query.m"
                                                          {
#line 10938 "query.c"
                                                            query__succeeded = (query__V_40_40 == query__V_44_44);
#line 73 "query.m"
                                                            if (query__succeeded)
#line 73 "query.m"
                                                              {
#line 10944 "query.c"
                                                                query__succeeded = (query__V_41_41 == query__V_45_45);
#line 73 "query.m"
                                                                if (query__succeeded)
#line 10948 "query.c"
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
#line 11006 "query.c"
  {
#line 11008 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11011 "query.c"
    return query__succeeded;
#line 11013 "query.c"
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
#line 11059 "query.c"
  {
#line 11061 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11064 "query.c"
    return query__succeeded;
#line 11066 "query.c"
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
#line 11112 "query.c"
  {
#line 11114 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11117 "query.c"
    return query__succeeded;
#line 11119 "query.c"
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
#line 11165 "query.c"
  {
#line 11167 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11170 "query.c"
    return query__succeeded;
#line 11172 "query.c"
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
        *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[9];
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
          *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[10];
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
            *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[11];
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
              *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[12];
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
                *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[13];
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
                  *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[14];
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
                    *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[15];
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
                      *query__HeadVar__2_2 = (MR_Word) &query_scalar_common_2[16];
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
          return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(query__V_57_57, query__V_56_56);
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
          MR_String query__V_33_33;

#line 1110 "query.m"
          {
#line 1110 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Threshold_14, &query__V_33_33);
          }
#line 1110 "query.m"
          {
#line 1110 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "p", query__V_33_33);
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
          MR_String query__V_24_24;

#line 1112 "query.m"
          {
#line 1112 "query.m"
            mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &query_scalar_common_2[1], (MR_Integer) 4, query__Value_19, &query__V_24_24);
          }
#line 1112 "query.m"
          {
#line 1112 "query.m"
            return query__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "v", query__V_24_24);
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
#line 13424 "query.c"
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
      return query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_273_273, query__V_272_272);
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
    if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 548 "query.m"
      {
#line 548 "query.m"
        return query__CmdStr_4 = query__cmd_str_menu_0_f_0();
      }
#line 537 "query.m"
    else
#line 537 "query.m"
      if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 594 "query.m"
        {
#line 594 "query.m"
          return query__CmdStr_4 = query__cmd_str_program_modules_0_f_0();
        }
#line 537 "query.m"
      else
#line 537 "query.m"
        if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "query.m"
          {
#line 538 "query.m"
            return query__CmdStr_4 = query__cmd_str_quit_0_f_0();
          }
#line 537 "query.m"
        else
#line 537 "query.m"
          if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 573 "query.m"
            {
#line 573 "query.m"
              return query__CmdStr_4 = query__cmd_str_recursion_types_frequency_0_f_0();
            }
#line 537 "query.m"
          else
#line 537 "query.m"
            if ((query__Cmd_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 541 "query.m"
              {
#line 541 "query.m"
                return query__CmdStr_4 = query__cmd_str_restart_0_f_0();
              }
#line 537 "query.m"
            else
#line 537 "query.m"
              if (((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 2))))
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
#line 13753 "query.c"
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
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_426_426, query__V_425_425);
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
#line 13813 "query.c"
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
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_404_404, query__V_403_403);
                      }
#line 552 "query.m"
                    }
#line 550 "query.m"
                }
#line 537 "query.m"
              else
#line 537 "query.m"
                if (((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 13877 "query.c"
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
                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_360_360, query__V_359_359);
                    }
#line 543 "query.m"
                  }
#line 537 "query.m"
                else
#line 537 "query.m"
                  if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 15))))
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
#line 13941 "query.c"
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
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_798_798, query__V_797_797);
                      }
#line 657 "query.m"
                    }
#line 537 "query.m"
                  else
#line 537 "query.m"
                    if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 14007 "query.c"
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
                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_776_776, query__V_775_775);
                        }
#line 567 "query.m"
                      }
#line 537 "query.m"
                    else
#line 537 "query.m"
                      if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 14073 "query.c"
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
                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_754_754, query__V_753_753);
                          }
#line 567 "query.m"
                        }
#line 537 "query.m"
                      else
#line 537 "query.m"
                        if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
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
#line 14137 "query.c"
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
                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_732_732, query__V_731_731);
                            }
#line 646 "query.m"
                          }
#line 537 "query.m"
                        else
#line 537 "query.m"
                          if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
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
#line 14201 "query.c"
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
                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_710_710, query__V_709_709);
                              }
#line 641 "query.m"
                            }
#line 537 "query.m"
                          else
#line 537 "query.m"
                            if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
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
#line 14265 "query.c"
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
                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_688_688, query__V_687_687);
                                }
#line 652 "query.m"
                              }
#line 537 "query.m"
                            else
#line 537 "query.m"
                              if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
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
#line 14329 "query.c"
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
                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_666_666, query__V_665_665);
                                  }
#line 636 "query.m"
                                }
#line 537 "query.m"
                              else
#line 537 "query.m"
                                if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
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
#line 14393 "query.c"
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
                                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_644_644, query__V_643_643);
                                    }
#line 631 "query.m"
                                  }
#line 537 "query.m"
                                else
#line 537 "query.m"
                                  if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
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
#line 14457 "query.c"
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
                                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_622_622, query__V_621_621);
                                      }
#line 626 "query.m"
                                    }
#line 537 "query.m"
                                  else
#line 537 "query.m"
                                    if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
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
#line 14519 "query.c"
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
                                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_600_600, query__V_599_599);
                                        }
#line 596 "query.m"
                                      }
#line 537 "query.m"
                                    else
#line 537 "query.m"
                                      if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
#line 14581 "query.c"
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
                                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_578_578, query__V_577_577);
                                          }
#line 600 "query.m"
                                        }
#line 537 "query.m"
                                      else
#line 537 "query.m"
                                        if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
#line 14643 "query.c"
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
                                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_556_556, query__V_555_555);
                                            }
#line 605 "query.m"
                                          }
#line 537 "query.m"
                                        else
#line 537 "query.m"
                                          if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 14707 "query.c"
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
                                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_534_534, query__V_533_533);
                                              }
#line 575 "query.m"
                                            }
#line 537 "query.m"
                                          else
#line 537 "query.m"
                                            if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 14853 "query.c"
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
                                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_512_512, query__V_511_511);
                                                }
#line 581 "query.m"
                                              }
#line 537 "query.m"
                                            else
#line 537 "query.m"
                                              if (((((MR_tag((MR_Word) query__Cmd_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__Cmd_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
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
#line 14997 "query.c"
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
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_382_382, query__V_381_381);
                                                  }
#line 621 "query.m"
                                                }
#line 537 "query.m"
                                              else
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
#line 15136 "query.c"
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
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_338_338, query__V_337_337);
                                                  }
#line 609 "query.m"
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

#line 15316 "query.c"

		;}
#undef MR_PROC_LABEL
	 query__CallTableTipVar_10  = (MR_Box) CallTableTipVar;
	 query__Status_11  = status;
#line 438 "query.m"
}
#line 438 "query.m"
    if ((query__Status_11 == (MR_Integer) 1))
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
    else
#line 438 "query.m"
      if ((query__Status_11 == (MR_Integer) 0))
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

#line 15365 "query.c"

		;}
#undef MR_PROC_LABEL
#line 438 "query.m"
}
#line 438 "query.m"
        }
#line 438 "query.m"
      else
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

#line 15394 "query.c"

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
#line 450 "query.m"
    MR_Integer query__V_13_13;
#line 450 "query.m"
    MR_Word query__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 450 "query.m"
    MR_String query__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 450 "query.m"
    MR_String query__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 450 "query.m"
    MR_String query__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Word query__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 450 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 450 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 450 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 450 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 450 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 450 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 450 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 450 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 450 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 450 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 450 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 450 "query.m"
    MR_ArrayPtr query__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 450 "query.m"
    MR_ArrayPtr query__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 450 "query.m"
    MR_ArrayPtr query__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 450 "query.m"
    MR_ArrayPtr query__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 450 "query.m"
    MR_ArrayPtr query__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 450 "query.m"
    MR_ArrayPtr query__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 450 "query.m"
    MR_ArrayPtr query__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 450 "query.m"
    MR_ArrayPtr query__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 450 "query.m"
    MR_ArrayPtr query__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 450 "query.m"
    MR_Word query__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 450 "query.m"
    MR_Word query__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 450 "query.m"
    MR_Word query__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 450 "query.m"
    MR_Word query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 450 "query.m"
    MR_String query__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 0)));
#line 450 "query.m"
    MR_Integer query__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 1)));
#line 450 "query.m"
    MR_Integer query__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 2)));
#line 450 "query.m"
    MR_Integer query__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Integer query__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 4)));
#line 450 "query.m"
    MR_Integer query__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 5)));
#line 450 "query.m"
    MR_Integer query__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 6)));
#line 450 "query.m"
    MR_Integer query__V_51_51;
#line 450 "query.m"
    MR_Word query__V_52_52;

#line 450 "query.m"
    query__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 7)));
#line 450 "query.m"
    query__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 8)));
#line 450 "query.m"
    query__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_15_15, (MR_Integer) 9)));
#line 450 "query.m"
    query__succeeded = (query__V_13_13 > (MR_Integer) 10);
#line 15825 "query.c"
    if (query__succeeded)
#line 489 "query.m"
      query__Time_6 = (MR_Integer) 1;
#line 15829 "query.c"
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
    if ((query__PrefInd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
    else
#line 460 "query.m"
      if ((query__PrefInd_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "query.m"
        {
#line 463 "query.m"
          return query__Pref_6 = query__default_preferences_1_f_0(query__Deep_4);
        }
#line 460 "query.m"
      else
#line 460 "query.m"
        query__Pref_6 = (MR_Word) MR_body(((MR_Word) query__PrefInd_5), (MR_Integer) 1);
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
#line 449 "query.m"
  {
#line 449 "query.m"
    MR_bool query__succeeded;
#line 449 "query.m"
    MR_Word query__HeadVar__2_2;
#line 450 "query.m"
    MR_Integer query__V_4_4;
#line 450 "query.m"
    MR_Word query__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 0)));
#line 450 "query.m"
    MR_String query__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 1)));
#line 450 "query.m"
    MR_String query__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 2)));
#line 450 "query.m"
    MR_String query__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Word query__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 4)));
#line 450 "query.m"
    MR_ArrayPtr query__V_11_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 5)));
#line 450 "query.m"
    MR_ArrayPtr query__V_12_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 6)));
#line 450 "query.m"
    MR_ArrayPtr query__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 7)));
#line 450 "query.m"
    MR_ArrayPtr query__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 8)));
#line 450 "query.m"
    MR_ArrayPtr query__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 9)));
#line 450 "query.m"
    MR_ArrayPtr query__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 10)));
#line 450 "query.m"
    MR_ArrayPtr query__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 11)));
#line 450 "query.m"
    MR_ArrayPtr query__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 12)));
#line 450 "query.m"
    MR_ArrayPtr query__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 13)));
#line 450 "query.m"
    MR_ArrayPtr query__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 14)));
#line 450 "query.m"
    MR_ArrayPtr query__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 15)));
#line 450 "query.m"
    MR_ArrayPtr query__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 16)));
#line 450 "query.m"
    MR_ArrayPtr query__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 17)));
#line 450 "query.m"
    MR_ArrayPtr query__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 18)));
#line 450 "query.m"
    MR_ArrayPtr query__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 19)));
#line 450 "query.m"
    MR_ArrayPtr query__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 20)));
#line 450 "query.m"
    MR_ArrayPtr query__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 21)));
#line 450 "query.m"
    MR_ArrayPtr query__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 22)));
#line 450 "query.m"
    MR_ArrayPtr query__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 23)));
#line 450 "query.m"
    MR_ArrayPtr query__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 24)));
#line 450 "query.m"
    MR_Word query__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 25)));
#line 450 "query.m"
    MR_Word query__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 26)));
#line 450 "query.m"
    MR_Word query__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 27)));
#line 450 "query.m"
    MR_Word query__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__Deep_3, (MR_Integer) 28)));
#line 450 "query.m"
    MR_String query__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 0)));
#line 450 "query.m"
    MR_Integer query__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 1)));
#line 450 "query.m"
    MR_Integer query__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 2)));
#line 450 "query.m"
    MR_Integer query__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 3)));
#line 450 "query.m"
    MR_Integer query__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 4)));
#line 450 "query.m"
    MR_Integer query__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 5)));
#line 450 "query.m"
    MR_Integer query__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 6)));
#line 450 "query.m"
    MR_Integer query__V_42_42;
#line 450 "query.m"
    MR_Word query__V_43_43;

#line 450 "query.m"
    query__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 7)));
#line 450 "query.m"
    query__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 8)));
#line 450 "query.m"
    query__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), query__V_6_6, (MR_Integer) 9)));
#line 450 "query.m"
    query__succeeded = (query__V_4_4 > (MR_Integer) 10);
#line 449 "query.m"
    if (query__succeeded)
#line 451 "query.m"
      query__HeadVar__2_2 = (MR_Integer) 1;
#line 449 "query.m"
    else
#line 453 "query.m"
      query__HeadVar__2_2 = (MR_Integer) 0;
#line 449 "query.m"
    return query__HeadVar__2_2;
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
                                                                                                if ((strcmp(query__MemoryStr_52, (MR_String) "B") == 0))
#line 1030 "query.m"
                                                                                                  {
#line 1030 "query.m"
                                                                                                    query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(2), &query_scalar_common_2[7]);
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
                                                                                                          query__Memory_57 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[7]);
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
      return query__String_4 = mercury__string__f_43_43_2_f_0(query__V_11_11, query__V_12_12);
    }
#line 901 "query.m"
    return query__String_4;
#line 901 "query.m"
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
#line 20063 "query.c"
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
