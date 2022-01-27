/*
** Automatically generated from `query.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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

static /* final */ const MR_Box query_scalar_common_2[17][1];

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



#line 1769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_0 = {
  (MR_String) "no_alloc",
  (MR_Integer) 0
};

#line 1775 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_1 = {
  (MR_String) "alloc",
  (MR_Integer) 1
};

#line 1781 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_alloc_fields_0_2 = {
  (MR_String) "alloc_and_percall",
  (MR_Integer) 2
};

#line 1787 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_0,
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2
};

#line 1794 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_alloc_fields_0[3] = {
  &query__query__enum_functor_desc_alloc_fields_0_1,
  &query__query__enum_functor_desc_alloc_fields_0_2,
  &query__query__enum_functor_desc_alloc_fields_0_0
};

#line 1801 "query.c"
static const MR_Integer query__query__functor_number_map_alloc_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1808 "query.c"
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

#line 1829 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_0 = {
  (MR_String) "box_tables",
  (MR_Integer) 0
};

#line 1835 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_box_tables_0_1 = {
  (MR_String) "do_not_box_tables",
  (MR_Integer) 1
};

#line 1841 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1847 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_box_tables_0[2] = {
  &query__query__enum_functor_desc_box_tables_0_0,
  &query__query__enum_functor_desc_box_tables_0_1
};

#line 1853 "query.c"
static const MR_Integer query__query__functor_number_map_box_tables_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1859 "query.c"
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

#line 1880 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_0 = {
  (MR_String) "group_by_call_site",
  (MR_Integer) 0
};

#line 1886 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_1 = {
  (MR_String) "group_by_proc",
  (MR_Integer) 1
};

#line 1892 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_2 = {
  (MR_String) "group_by_module",
  (MR_Integer) 2
};

#line 1898 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_caller_groups_0_3 = {
  (MR_String) "group_by_clique",
  (MR_Integer) 3
};

#line 1904 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_1,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_3
};

#line 1912 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_caller_groups_0[4] = {
  &query__query__enum_functor_desc_caller_groups_0_0,
  &query__query__enum_functor_desc_caller_groups_0_3,
  &query__query__enum_functor_desc_caller_groups_0_2,
  &query__query__enum_functor_desc_caller_groups_0_1
};

#line 1920 "query.c"
static const MR_Integer query__query__functor_number_map_caller_groups_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1928 "query.c"
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

#line 1949 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_0 = {
  (MR_String) "no_callseqs",
  (MR_Integer) 0
};

#line 1955 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_1 = {
  (MR_String) "callseqs",
  (MR_Integer) 1
};

#line 1961 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_callseqs_fields_0_2 = {
  (MR_String) "callseqs_and_percall",
  (MR_Integer) 2
};

#line 1967 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_0,
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2
};

#line 1974 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_callseqs_fields_0[3] = {
  &query__query__enum_functor_desc_callseqs_fields_0_1,
  &query__query__enum_functor_desc_callseqs_fields_0_2,
  &query__query__enum_functor_desc_callseqs_fields_0_0
};

#line 1981 "query.c"
static const MR_Integer query__query__functor_number_map_callseqs_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1988 "query.c"
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

#line 2009 "query.c"
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

#line 2024 "query.c"
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

#line 2039 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2044 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_2[1] = {
  (MR_String) "cmd_timeout_minutes"
};

#line 2049 "query.c"
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

#line 2064 "query.c"
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

#line 2079 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2087 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_4[1] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

#line 2092 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_4[1] = {
  (MR_String) "cmd_root_maybe_action"
};

#line 2097 "query.c"
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

#line 2112 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_5[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2117 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_5[1] = {
  (MR_String) "cmd_clique_clique_id"
};

#line 2122 "query.c"
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

#line 2137 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_6[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2142 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_6[1] = {
  (MR_String) "cmd_crc_clique_id"
};

#line 2147 "query.c"
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

#line 2162 "query.c"
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

#line 2177 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_8[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2182 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_8[1] = {
  (MR_String) "cmd_proc_proc_id"
};

#line 2187 "query.c"
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

#line 2202 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_9[5] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_caller_groups_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0
};

#line 2211 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_9[5] = {
  (MR_String) "cmd_pc_proc_id",
  (MR_String) "cmd_pc_called_groups",
  (MR_String) "cmd_pc_bunch_number",
  (MR_String) "cmd_pc_callers_per_bunch",
  (MR_String) "cmd_pc_contour_exclusion"
};

#line 2220 "query.c"
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

#line 2235 "query.c"
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

#line 2250 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2255 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_11[1] = {
  (MR_String) "cmd_module_module_name"
};

#line 2260 "query.c"
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

#line 2275 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2280 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_12[1] = {
  (MR_String) "cmd_mgs_module_name"
};

#line 2285 "query.c"
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

#line 2300 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2305 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_13[1] = {
  (MR_String) "cmd_mr_module_name"
};

#line 2310 "query.c"
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

#line 2325 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_14[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 2333 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_14[4] = {
  (MR_String) "cmd_tp_display_limit",
  (MR_String) "cmd_tp_sort_cost_kind",
  (MR_String) "cmd_tp_incl_desc",
  (MR_String) "cmd_tp_scope"
};

#line 2341 "query.c"
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

#line 2365 "query.c"
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

#line 2380 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_15[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2385 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_15[1] = {
  (MR_String) "cmd_static_coverage_ps"
};

#line 2390 "query.c"
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

#line 2405 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_16[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2410 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_16[1] = {
  (MR_String) "cmd_dynamic_coverage_pd"
};

#line 2415 "query.c"
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

#line 2430 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_17[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
};

#line 2435 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_17[1] = {
  (MR_String) "cmd_dps_id"
};

#line 2440 "query.c"
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

#line 2455 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_18[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 2460 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_18[1] = {
  (MR_String) "cmd_dpd_id"
};

#line 2465 "query.c"
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

#line 2480 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_19[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
};

#line 2485 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_19[1] = {
  (MR_String) "cmd_dcss_id"
};

#line 2490 "query.c"
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

#line 2505 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_20[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2510 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_20[1] = {
  (MR_String) "cmd_dcsd_id"
};

#line 2515 "query.c"
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

#line 2530 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_21[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 2535 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_21[1] = {
  (MR_String) "cmd_dcl_id"
};

#line 2540 "query.c"
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

#line 2555 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_cmd_0_22[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 2560 "query.c"
static const MR_ConstString query__query__field_names_cmd_0_22[1] = {
  (MR_String) "cmd_csdvu_id"
};

#line 2565 "query.c"
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

#line 2580 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_0[5] = {
  &query__query__du_functor_desc_cmd_0_0,
  &query__query__du_functor_desc_cmd_0_1,
  &query__query__du_functor_desc_cmd_0_3,
  &query__query__du_functor_desc_cmd_0_7,
  &query__query__du_functor_desc_cmd_0_10
};

#line 2589 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_1[1] = {
  &query__query__du_functor_desc_cmd_0_2
};

#line 2594 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_cmd_0_2[1] = {
  &query__query__du_functor_desc_cmd_0_4
};

#line 2599 "query.c"
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

#line 2619 "query.c"
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

#line 2643 "query.c"
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

#line 2670 "query.c"
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

#line 2697 "query.c"
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

#line 2718 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_0 = {
  (MR_String) "colour_column_groups",
  (MR_Integer) 0
};

#line 2724 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_colour_column_groups_0_1 = {
  (MR_String) "do_not_colour_column_groups",
  (MR_Integer) 1
};

#line 2730 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2736 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_colour_column_groups_0[2] = {
  &query__query__enum_functor_desc_colour_column_groups_0_0,
  &query__query__enum_functor_desc_colour_column_groups_0_1
};

#line 2742 "query.c"
static const MR_Integer query__query__functor_number_map_colour_column_groups_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2748 "query.c"
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

#line 2769 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_0 = {
  (MR_String) "apply_contour_exclusion",
  (MR_Integer) 0
};

#line 2775 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_contour_exclusion_0_1 = {
  (MR_String) "do_not_apply_contour_exclusion",
  (MR_Integer) 1
};

#line 2781 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2787 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_contour_exclusion_0[2] = {
  &query__query__enum_functor_desc_contour_exclusion_0_0,
  &query__query__enum_functor_desc_contour_exclusion_0_1
};

#line 2793 "query.c"
static const MR_Integer query__query__functor_number_map_contour_exclusion_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2799 "query.c"
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

#line 2820 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_0 = {
  (MR_String) "cost_calls",
  (MR_Integer) 0
};

#line 2826 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_1 = {
  (MR_String) "cost_redos",
  (MR_Integer) 1
};

#line 2832 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_2 = {
  (MR_String) "cost_time",
  (MR_Integer) 2
};

#line 2838 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_3 = {
  (MR_String) "cost_callseqs",
  (MR_Integer) 3
};

#line 2844 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_4 = {
  (MR_String) "cost_allocs",
  (MR_Integer) 4
};

#line 2850 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_cost_kind_0_5 = {
  (MR_String) "cost_words",
  (MR_Integer) 5
};

#line 2856 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2866 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_cost_kind_0[6] = {
  &query__query__enum_functor_desc_cost_kind_0_4,
  &query__query__enum_functor_desc_cost_kind_0_0,
  &query__query__enum_functor_desc_cost_kind_0_3,
  &query__query__enum_functor_desc_cost_kind_0_1,
  &query__query__enum_functor_desc_cost_kind_0_2,
  &query__query__enum_functor_desc_cost_kind_0_5
};

#line 2876 "query.c"
static const MR_Integer query__query__functor_number_map_cost_kind_0[6] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 5
};

#line 2886 "query.c"
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

#line 2907 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_cmd_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_cmd_0
  }
};

#line 2915 "query.c"
static const MR_FA_TypeInfo_Struct1 query__maybe__ti_maybe_1query__type_ctor_info_preferences_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &query__query__type_ctor_info_preferences_0
  }
};

#line 2923 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_deep_query_0_0[3] = {
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &query__maybe__ti_maybe_1query__type_ctor_info_preferences_0
};

#line 2930 "query.c"
static const MR_ConstString query__query__field_names_deep_query_0_0[3] = {
  (MR_String) "maybe_cmd",
  (MR_String) "deep_file_name",
  (MR_String) "maybe_prefs"
};

#line 2937 "query.c"
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

#line 2952 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_deep_query_0_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2957 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_deep_query_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_deep_query_0_0
  }
};

#line 2966 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_deep_query_0[1] = {
  &query__query__du_functor_desc_deep_query_0_0
};

#line 2971 "query.c"
static const MR_Integer query__query__functor_number_map_deep_query_0[1] = {
  (MR_Integer) 0
};

#line 2976 "query.c"
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

#line 2997 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_0 = {
  (MR_String) "descendants_meaningful",
  (MR_Integer) 0
};

#line 3003 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_descendants_meaningful_0_1 = {
  (MR_String) "descendants_not_meaningful",
  (MR_Integer) 1
};

#line 3009 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3015 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_descendants_meaningful_0[2] = {
  &query__query__enum_functor_desc_descendants_meaningful_0_0,
  &query__query__enum_functor_desc_descendants_meaningful_0_1
};

#line 3021 "query.c"
static const MR_Integer query__query__functor_number_map_descendants_meaningful_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3027 "query.c"
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

#line 3048 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_0 = {
  (MR_String) "developer_options_visible",
  (MR_Integer) 0
};

#line 3054 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_developer_mode_0_1 = {
  (MR_String) "developer_options_invisible",
  (MR_Integer) 1
};

#line 3060 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_0,
  &query__query__enum_functor_desc_developer_mode_0_1
};

#line 3066 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_developer_mode_0[2] = {
  &query__query__enum_functor_desc_developer_mode_0_1,
  &query__query__enum_functor_desc_developer_mode_0_0
};

#line 3072 "query.c"
static const MR_Integer query__query__functor_number_map_developer_mode_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3078 "query.c"
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

#line 3099 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3105 "query.c"
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

#line 3120 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3125 "query.c"
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

#line 3140 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_display_limit_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 3145 "query.c"
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

#line 3160 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_0[1] = {
  &query__query__du_functor_desc_display_limit_0_0
};

#line 3165 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_1[1] = {
  &query__query__du_functor_desc_display_limit_0_1
};

#line 3170 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_display_limit_0_2[1] = {
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3175 "query.c"
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

#line 3194 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_display_limit_0[3] = {
  &query__query__du_functor_desc_display_limit_0_0,
  &query__query__du_functor_desc_display_limit_0_1,
  &query__query__du_functor_desc_display_limit_0_2
};

#line 3201 "query.c"
static const MR_Integer query__query__functor_number_map_display_limit_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 3208 "query.c"
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

#line 3229 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_fields_0_0[5] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_port_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_time_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_callseqs_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_alloc_fields_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_memory_fields_0
};

#line 3238 "query.c"
static const MR_ConstString query__query__field_names_fields_0_0[5] = {
  (MR_String) "port_fields",
  (MR_String) "time_fields",
  (MR_String) "callseqs_fields",
  (MR_String) "alloc_fields",
  (MR_String) "memory_fields"
};

#line 3247 "query.c"
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

#line 3276 "query.c"
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

#line 3291 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_fields_0_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3296 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_fields_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_fields_0_0
  }
};

#line 3305 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_fields_0[1] = {
  &query__query__du_functor_desc_fields_0_0
};

#line 3310 "query.c"
static const MR_Integer query__query__functor_number_map_fields_0[1] = {
  (MR_Integer) 0
};

#line 3315 "query.c"
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

#line 3336 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_inactive_items_0_0[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_inactive_status_0
};

#line 3343 "query.c"
static const MR_ConstString query__query__field_names_inactive_items_0_0[3] = {
  (MR_String) "inactive_call_sites",
  (MR_String) "inactive_procs",
  (MR_String) "inactive_modules"
};

#line 3350 "query.c"
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

#line 3369 "query.c"
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

#line 3384 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_inactive_items_0_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3389 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_inactive_items_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_inactive_items_0_0
  }
};

#line 3398 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_inactive_items_0[1] = {
  &query__query__du_functor_desc_inactive_items_0_0
};

#line 3403 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_items_0[1] = {
  (MR_Integer) 0
};

#line 3408 "query.c"
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

#line 3429 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_0 = {
  (MR_String) "inactive_hide",
  (MR_Integer) 0
};

#line 3435 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_inactive_status_0_1 = {
  (MR_String) "inactive_show",
  (MR_Integer) 1
};

#line 3441 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3447 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_inactive_status_0[2] = {
  &query__query__enum_functor_desc_inactive_status_0_0,
  &query__query__enum_functor_desc_inactive_status_0_1
};

#line 3453 "query.c"
static const MR_Integer query__query__functor_number_map_inactive_status_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3459 "query.c"
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

#line 3480 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_0 = {
  (MR_String) "self",
  (MR_Integer) 0
};

#line 3486 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_include_descendants_0_1 = {
  (MR_String) "self_and_desc",
  (MR_Integer) 1
};

#line 3492 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3498 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_include_descendants_0[2] = {
  &query__query__enum_functor_desc_include_descendants_0_0,
  &query__query__enum_functor_desc_include_descendants_0_1
};

#line 3504 "query.c"
static const MR_Integer query__query__functor_number_map_include_descendants_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3510 "query.c"
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

#line 3531 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_0 = {
  (MR_String) "per_call",
  (MR_Integer) 0
};

#line 3537 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_measurement_scope_0_1 = {
  (MR_String) "overall",
  (MR_Integer) 1
};

#line 3543 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_0,
  &query__query__enum_functor_desc_measurement_scope_0_1
};

#line 3549 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_measurement_scope_0[2] = {
  &query__query__enum_functor_desc_measurement_scope_0_1,
  &query__query__enum_functor_desc_measurement_scope_0_0
};

#line 3555 "query.c"
static const MR_Integer query__query__functor_number_map_measurement_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3561 "query.c"
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

#line 3582 "query.c"
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

#line 3597 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_1[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3602 "query.c"
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

#line 3617 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_memory_fields_0_2[1] = {
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_units_0
};

#line 3622 "query.c"
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

#line 3637 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_0[1] = {
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3642 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_1[1] = {
  &query__query__du_functor_desc_memory_fields_0_1
};

#line 3647 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_memory_fields_0_2[1] = {
  &query__query__du_functor_desc_memory_fields_0_2
};

#line 3652 "query.c"
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

#line 3671 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_memory_fields_0[3] = {
  &query__query__du_functor_desc_memory_fields_0_1,
  &query__query__du_functor_desc_memory_fields_0_2,
  &query__query__du_functor_desc_memory_fields_0_0
};

#line 3678 "query.c"
static const MR_Integer query__query__functor_number_map_memory_fields_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3685 "query.c"
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

#line 3706 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_0 = {
  (MR_String) "module_qual_always",
  (MR_Integer) 0
};

#line 3712 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_1 = {
  (MR_String) "module_qual_when_diff",
  (MR_Integer) 1
};

#line 3718 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_module_qual_0_2 = {
  (MR_String) "module_qual_never",
  (MR_Integer) 2
};

#line 3724 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_1,
  &query__query__enum_functor_desc_module_qual_0_2
};

#line 3731 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_module_qual_0[3] = {
  &query__query__enum_functor_desc_module_qual_0_0,
  &query__query__enum_functor_desc_module_qual_0_2,
  &query__query__enum_functor_desc_module_qual_0_1
};

#line 3738 "query.c"
static const MR_Integer query__query__functor_number_map_module_qual_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3745 "query.c"
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

#line 3766 "query.c"
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

#line 3781 "query.c"
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

#line 3796 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_order_criteria_0_2[3] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 3803 "query.c"
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

#line 3822 "query.c"
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

#line 3837 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_0[2] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3843 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_order_criteria_0_1[1] = {
  &query__query__du_functor_desc_order_criteria_0_2
};

#line 3848 "query.c"
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

#line 3862 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_order_criteria_0[3] = {
  &query__query__du_functor_desc_order_criteria_0_0,
  &query__query__du_functor_desc_order_criteria_0_2,
  &query__query__du_functor_desc_order_criteria_0_1
};

#line 3869 "query.c"
static const MR_Integer query__query__functor_number_map_order_criteria_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3876 "query.c"
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

#line 3897 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_0 = {
  (MR_String) "no_port",
  (MR_Integer) 0
};

#line 3903 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_port_fields_0_1 = {
  (MR_String) "port",
  (MR_Integer) 1
};

#line 3909 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3915 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_port_fields_0[2] = {
  &query__query__enum_functor_desc_port_fields_0_0,
  &query__query__enum_functor_desc_port_fields_0_1
};

#line 3921 "query.c"
static const MR_Integer query__query__functor_number_map_port_fields_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3927 "query.c"
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

#line 3948 "query.c"
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

#line 3964 "query.c"
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

#line 3980 "query.c"
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

#line 4044 "query.c"
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

#line 4059 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_0_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4064 "query.c"
static const MR_DuPtagLayout query__query__du_ptag_ordered_preferences_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    query__query__du_stag_ordered_preferences_0_0
  }
};

#line 4073 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_0[1] = {
  &query__query__du_functor_desc_preferences_0_0
};

#line 4078 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_0[1] = {
  (MR_Integer) 0
};

#line 4083 "query.c"
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

#line 4104 "query.c"
static const MR_PseudoTypeInfo query__query__field_types_preferences_indication_0_0[1] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_0
};

#line 4109 "query.c"
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

#line 4124 "query.c"
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

#line 4139 "query.c"
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

#line 4154 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_0[2] = {
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_2
};

#line 4160 "query.c"
static const MR_DuFunctorDescPtr query__query__du_stag_ordered_preferences_indication_0_1[1] = {
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4165 "query.c"
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

#line 4179 "query.c"
static const MR_DuFunctorDescPtr query__query__du_name_ordered_preferences_indication_0[3] = {
  &query__query__du_functor_desc_preferences_indication_0_2,
  &query__query__du_functor_desc_preferences_indication_0_1,
  &query__query__du_functor_desc_preferences_indication_0_0
};

#line 4186 "query.c"
static const MR_Integer query__query__functor_number_map_preferences_indication_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4193 "query.c"
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

#line 4214 "query.c"
static const MR_Integer query__query__functor_number_map_resp_0[1] = {
  (MR_Integer) 0
};

#line 4219 "query.c"
static const MR_NotagFunctorDesc query__query__notag_functor_desc_resp_0 = {
  (MR_String) "html",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4226 "query.c"
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

#line 4247 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_0 = {
  (MR_String) "summarize_ho_call_sites",
  (MR_Integer) 0
};

#line 4253 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_summarize_ho_call_sites_0_1 = {
  (MR_String) "do_not_summarize_ho_call_sites",
  (MR_Integer) 1
};

#line 4259 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1
};

#line 4265 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_summarize_ho_call_sites_0[2] = {
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_1,
  &query__query__enum_functor_desc_summarize_ho_call_sites_0_0
};

#line 4271 "query.c"
static const MR_Integer query__query__functor_number_map_summarize_ho_call_sites_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4277 "query.c"
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

#line 4298 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_0 = {
  (MR_String) "no_time",
  (MR_Integer) 0
};

#line 4304 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_1 = {
  (MR_String) "ticks",
  (MR_Integer) 1
};

#line 4310 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_2 = {
  (MR_String) "time",
  (MR_Integer) 2
};

#line 4316 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_3 = {
  (MR_String) "ticks_and_time",
  (MR_Integer) 3
};

#line 4322 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_4 = {
  (MR_String) "time_and_percall",
  (MR_Integer) 4
};

#line 4328 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_fields_0_5 = {
  (MR_String) "ticks_and_time_and_percall",
  (MR_Integer) 5
};

#line 4334 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_4,
  &query__query__enum_functor_desc_time_fields_0_5
};

#line 4344 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_fields_0[6] = {
  &query__query__enum_functor_desc_time_fields_0_0,
  &query__query__enum_functor_desc_time_fields_0_1,
  &query__query__enum_functor_desc_time_fields_0_3,
  &query__query__enum_functor_desc_time_fields_0_5,
  &query__query__enum_functor_desc_time_fields_0_2,
  &query__query__enum_functor_desc_time_fields_0_4
};

#line 4354 "query.c"
static const MR_Integer query__query__functor_number_map_time_fields_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3
};

#line 4364 "query.c"
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

#line 4385 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_0 = {
  (MR_String) "no_scale",
  (MR_Integer) 0
};

#line 4391 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_1 = {
  (MR_String) "scale_by_millions",
  (MR_Integer) 1
};

#line 4397 "query.c"
static const MR_EnumFunctorDesc query__query__enum_functor_desc_time_format_0_2 = {
  (MR_String) "scale_by_thousands",
  (MR_Integer) 2
};

#line 4403 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_value_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4410 "query.c"
static const MR_EnumFunctorDescPtr query__query__enum_name_ordered_time_format_0[3] = {
  &query__query__enum_functor_desc_time_format_0_0,
  &query__query__enum_functor_desc_time_format_0_1,
  &query__query__enum_functor_desc_time_format_0_2
};

#line 4417 "query.c"
static const MR_Integer query__query__functor_number_map_time_format_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4424 "query.c"
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

#line 4445 "query.c"
static MR_bool MR_CALL 
query____Unify____alloc_fields_0_0_10001(
#line 4448 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4450 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4452 "query.c"
{
#line 4454 "query.c"
  {
#line 4456 "query.c"
    MR_bool query__succeeded;

#line 4459 "query.c"
    {
#line 4461 "query.c"
      query__succeeded = query____Unify____alloc_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4464 "query.c"
    return query__succeeded;
#line 4466 "query.c"
  }
#line 4468 "query.c"
}

#line 4471 "query.c"
static void MR_CALL 
query____Compare____alloc_fields_0_0_10001(
#line 4474 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4476 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4478 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4480 "query.c"
{
#line 4482 "query.c"
  {
#line 4484 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4487 "query.c"
    {
#line 4489 "query.c"
      query____Compare____alloc_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4492 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4494 "query.c"
  }
#line 4496 "query.c"
}

#line 4499 "query.c"
static MR_bool MR_CALL 
query____Unify____box_tables_0_0_10001(
#line 4502 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4504 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4506 "query.c"
{
#line 4508 "query.c"
  {
#line 4510 "query.c"
    MR_bool query__succeeded;

#line 4513 "query.c"
    {
#line 4515 "query.c"
      query__succeeded = query____Unify____box_tables_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4518 "query.c"
    return query__succeeded;
#line 4520 "query.c"
  }
#line 4522 "query.c"
}

#line 4525 "query.c"
static void MR_CALL 
query____Compare____box_tables_0_0_10001(
#line 4528 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4530 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4532 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4534 "query.c"
{
#line 4536 "query.c"
  {
#line 4538 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4541 "query.c"
    {
#line 4543 "query.c"
      query____Compare____box_tables_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4546 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4548 "query.c"
  }
#line 4550 "query.c"
}

#line 4553 "query.c"
static MR_bool MR_CALL 
query____Unify____caller_groups_0_0_10001(
#line 4556 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4558 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4560 "query.c"
{
#line 4562 "query.c"
  {
#line 4564 "query.c"
    MR_bool query__succeeded;

#line 4567 "query.c"
    {
#line 4569 "query.c"
      query__succeeded = query____Unify____caller_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4572 "query.c"
    return query__succeeded;
#line 4574 "query.c"
  }
#line 4576 "query.c"
}

#line 4579 "query.c"
static void MR_CALL 
query____Compare____caller_groups_0_0_10001(
#line 4582 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4584 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4586 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4588 "query.c"
{
#line 4590 "query.c"
  {
#line 4592 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4595 "query.c"
    {
#line 4597 "query.c"
      query____Compare____caller_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4600 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4602 "query.c"
  }
#line 4604 "query.c"
}

#line 4607 "query.c"
static MR_bool MR_CALL 
query____Unify____callseqs_fields_0_0_10001(
#line 4610 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4612 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4614 "query.c"
{
#line 4616 "query.c"
  {
#line 4618 "query.c"
    MR_bool query__succeeded;

#line 4621 "query.c"
    {
#line 4623 "query.c"
      query__succeeded = query____Unify____callseqs_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4626 "query.c"
    return query__succeeded;
#line 4628 "query.c"
  }
#line 4630 "query.c"
}

#line 4633 "query.c"
static void MR_CALL 
query____Compare____callseqs_fields_0_0_10001(
#line 4636 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4638 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4640 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4642 "query.c"
{
#line 4644 "query.c"
  {
#line 4646 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4649 "query.c"
    {
#line 4651 "query.c"
      query____Compare____callseqs_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4654 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4656 "query.c"
  }
#line 4658 "query.c"
}

#line 4661 "query.c"
static MR_bool MR_CALL 
query____Unify____cmd_0_0_10001(
#line 4664 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4666 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4668 "query.c"
{
#line 4670 "query.c"
  {
#line 4672 "query.c"
    MR_bool query__succeeded;

#line 4675 "query.c"
    {
#line 4677 "query.c"
      query__succeeded = query____Unify____cmd_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4680 "query.c"
    return query__succeeded;
#line 4682 "query.c"
  }
#line 4684 "query.c"
}

#line 4687 "query.c"
static void MR_CALL 
query____Compare____cmd_0_0_10001(
#line 4690 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4692 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4694 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4696 "query.c"
{
#line 4698 "query.c"
  {
#line 4700 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4703 "query.c"
    {
#line 4705 "query.c"
      query____Compare____cmd_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4708 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4710 "query.c"
  }
#line 4712 "query.c"
}

#line 4715 "query.c"
static MR_bool MR_CALL 
query____Unify____colour_column_groups_0_0_10001(
#line 4718 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4720 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4722 "query.c"
{
#line 4724 "query.c"
  {
#line 4726 "query.c"
    MR_bool query__succeeded;

#line 4729 "query.c"
    {
#line 4731 "query.c"
      query__succeeded = query____Unify____colour_column_groups_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4734 "query.c"
    return query__succeeded;
#line 4736 "query.c"
  }
#line 4738 "query.c"
}

#line 4741 "query.c"
static void MR_CALL 
query____Compare____colour_column_groups_0_0_10001(
#line 4744 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4746 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4748 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4750 "query.c"
{
#line 4752 "query.c"
  {
#line 4754 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4757 "query.c"
    {
#line 4759 "query.c"
      query____Compare____colour_column_groups_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4762 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4764 "query.c"
  }
#line 4766 "query.c"
}

#line 4769 "query.c"
static MR_bool MR_CALL 
query____Unify____contour_exclusion_0_0_10001(
#line 4772 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4774 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4776 "query.c"
{
#line 4778 "query.c"
  {
#line 4780 "query.c"
    MR_bool query__succeeded;

#line 4783 "query.c"
    {
#line 4785 "query.c"
      query__succeeded = query____Unify____contour_exclusion_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4788 "query.c"
    return query__succeeded;
#line 4790 "query.c"
  }
#line 4792 "query.c"
}

#line 4795 "query.c"
static void MR_CALL 
query____Compare____contour_exclusion_0_0_10001(
#line 4798 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4800 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4802 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4804 "query.c"
{
#line 4806 "query.c"
  {
#line 4808 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4811 "query.c"
    {
#line 4813 "query.c"
      query____Compare____contour_exclusion_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4816 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4818 "query.c"
  }
#line 4820 "query.c"
}

#line 4823 "query.c"
static MR_bool MR_CALL 
query____Unify____cost_kind_0_0_10001(
#line 4826 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4828 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4830 "query.c"
{
#line 4832 "query.c"
  {
#line 4834 "query.c"
    MR_bool query__succeeded;

#line 4837 "query.c"
    {
#line 4839 "query.c"
      query__succeeded = query____Unify____cost_kind_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4842 "query.c"
    return query__succeeded;
#line 4844 "query.c"
  }
#line 4846 "query.c"
}

#line 4849 "query.c"
static void MR_CALL 
query____Compare____cost_kind_0_0_10001(
#line 4852 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4854 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4856 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4858 "query.c"
{
#line 4860 "query.c"
  {
#line 4862 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4865 "query.c"
    {
#line 4867 "query.c"
      query____Compare____cost_kind_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4870 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4872 "query.c"
  }
#line 4874 "query.c"
}

#line 4877 "query.c"
static MR_bool MR_CALL 
query____Unify____deep_query_0_0_10001(
#line 4880 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4882 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4884 "query.c"
{
#line 4886 "query.c"
  {
#line 4888 "query.c"
    MR_bool query__succeeded;

#line 4891 "query.c"
    {
#line 4893 "query.c"
      query__succeeded = query____Unify____deep_query_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4896 "query.c"
    return query__succeeded;
#line 4898 "query.c"
  }
#line 4900 "query.c"
}

#line 4903 "query.c"
static void MR_CALL 
query____Compare____deep_query_0_0_10001(
#line 4906 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4908 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4910 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4912 "query.c"
{
#line 4914 "query.c"
  {
#line 4916 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4919 "query.c"
    {
#line 4921 "query.c"
      query____Compare____deep_query_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4924 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4926 "query.c"
  }
#line 4928 "query.c"
}

#line 4931 "query.c"
static MR_bool MR_CALL 
query____Unify____descendants_meaningful_0_0_10001(
#line 4934 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4936 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4938 "query.c"
{
#line 4940 "query.c"
  {
#line 4942 "query.c"
    MR_bool query__succeeded;

#line 4945 "query.c"
    {
#line 4947 "query.c"
      query__succeeded = query____Unify____descendants_meaningful_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 4950 "query.c"
    return query__succeeded;
#line 4952 "query.c"
  }
#line 4954 "query.c"
}

#line 4957 "query.c"
static void MR_CALL 
query____Compare____descendants_meaningful_0_0_10001(
#line 4960 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 4962 "query.c"
  MR_Box query__wrapper_arg_2,
#line 4964 "query.c"
  MR_Box query__wrapper_arg_3)
#line 4966 "query.c"
{
#line 4968 "query.c"
  {
#line 4970 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 4973 "query.c"
    {
#line 4975 "query.c"
      query____Compare____descendants_meaningful_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 4978 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 4980 "query.c"
  }
#line 4982 "query.c"
}

#line 4985 "query.c"
static MR_bool MR_CALL 
query____Unify____developer_mode_0_0_10001(
#line 4988 "query.c"
  MR_Box query__wrapper_arg_1,
#line 4990 "query.c"
  MR_Box query__wrapper_arg_2)
#line 4992 "query.c"
{
#line 4994 "query.c"
  {
#line 4996 "query.c"
    MR_bool query__succeeded;

#line 4999 "query.c"
    {
#line 5001 "query.c"
      query__succeeded = query____Unify____developer_mode_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5004 "query.c"
    return query__succeeded;
#line 5006 "query.c"
  }
#line 5008 "query.c"
}

#line 5011 "query.c"
static void MR_CALL 
query____Compare____developer_mode_0_0_10001(
#line 5014 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5016 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5018 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5020 "query.c"
{
#line 5022 "query.c"
  {
#line 5024 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5027 "query.c"
    {
#line 5029 "query.c"
      query____Compare____developer_mode_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5032 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5034 "query.c"
  }
#line 5036 "query.c"
}

#line 5039 "query.c"
static MR_bool MR_CALL 
query____Unify____display_limit_0_0_10001(
#line 5042 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5044 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5046 "query.c"
{
#line 5048 "query.c"
  {
#line 5050 "query.c"
    MR_bool query__succeeded;

#line 5053 "query.c"
    {
#line 5055 "query.c"
      query__succeeded = query____Unify____display_limit_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5058 "query.c"
    return query__succeeded;
#line 5060 "query.c"
  }
#line 5062 "query.c"
}

#line 5065 "query.c"
static void MR_CALL 
query____Compare____display_limit_0_0_10001(
#line 5068 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5070 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5072 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5074 "query.c"
{
#line 5076 "query.c"
  {
#line 5078 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5081 "query.c"
    {
#line 5083 "query.c"
      query____Compare____display_limit_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5086 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5088 "query.c"
  }
#line 5090 "query.c"
}

#line 5093 "query.c"
static MR_bool MR_CALL 
query____Unify____fields_0_0_10001(
#line 5096 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5098 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5100 "query.c"
{
#line 5102 "query.c"
  {
#line 5104 "query.c"
    MR_bool query__succeeded;

#line 5107 "query.c"
    {
#line 5109 "query.c"
      query__succeeded = query____Unify____fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5112 "query.c"
    return query__succeeded;
#line 5114 "query.c"
  }
#line 5116 "query.c"
}

#line 5119 "query.c"
static void MR_CALL 
query____Compare____fields_0_0_10001(
#line 5122 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5124 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5126 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5128 "query.c"
{
#line 5130 "query.c"
  {
#line 5132 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5135 "query.c"
    {
#line 5137 "query.c"
      query____Compare____fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5140 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5142 "query.c"
  }
#line 5144 "query.c"
}

#line 5147 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_items_0_0_10001(
#line 5150 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5152 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5154 "query.c"
{
#line 5156 "query.c"
  {
#line 5158 "query.c"
    MR_bool query__succeeded;

#line 5161 "query.c"
    {
#line 5163 "query.c"
      query__succeeded = query____Unify____inactive_items_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5166 "query.c"
    return query__succeeded;
#line 5168 "query.c"
  }
#line 5170 "query.c"
}

#line 5173 "query.c"
static void MR_CALL 
query____Compare____inactive_items_0_0_10001(
#line 5176 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5178 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5180 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5182 "query.c"
{
#line 5184 "query.c"
  {
#line 5186 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5189 "query.c"
    {
#line 5191 "query.c"
      query____Compare____inactive_items_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5194 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5196 "query.c"
  }
#line 5198 "query.c"
}

#line 5201 "query.c"
static MR_bool MR_CALL 
query____Unify____inactive_status_0_0_10001(
#line 5204 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5206 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5208 "query.c"
{
#line 5210 "query.c"
  {
#line 5212 "query.c"
    MR_bool query__succeeded;

#line 5215 "query.c"
    {
#line 5217 "query.c"
      query__succeeded = query____Unify____inactive_status_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5220 "query.c"
    return query__succeeded;
#line 5222 "query.c"
  }
#line 5224 "query.c"
}

#line 5227 "query.c"
static void MR_CALL 
query____Compare____inactive_status_0_0_10001(
#line 5230 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5232 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5234 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5236 "query.c"
{
#line 5238 "query.c"
  {
#line 5240 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5243 "query.c"
    {
#line 5245 "query.c"
      query____Compare____inactive_status_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5248 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5250 "query.c"
  }
#line 5252 "query.c"
}

#line 5255 "query.c"
static MR_bool MR_CALL 
query____Unify____include_descendants_0_0_10001(
#line 5258 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5260 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5262 "query.c"
{
#line 5264 "query.c"
  {
#line 5266 "query.c"
    MR_bool query__succeeded;

#line 5269 "query.c"
    {
#line 5271 "query.c"
      query__succeeded = query____Unify____include_descendants_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5274 "query.c"
    return query__succeeded;
#line 5276 "query.c"
  }
#line 5278 "query.c"
}

#line 5281 "query.c"
static void MR_CALL 
query____Compare____include_descendants_0_0_10001(
#line 5284 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5286 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5288 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5290 "query.c"
{
#line 5292 "query.c"
  {
#line 5294 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5297 "query.c"
    {
#line 5299 "query.c"
      query____Compare____include_descendants_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5302 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5304 "query.c"
  }
#line 5306 "query.c"
}

#line 5309 "query.c"
static MR_bool MR_CALL 
query____Unify____measurement_scope_0_0_10001(
#line 5312 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5314 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5316 "query.c"
{
#line 5318 "query.c"
  {
#line 5320 "query.c"
    MR_bool query__succeeded;

#line 5323 "query.c"
    {
#line 5325 "query.c"
      query__succeeded = query____Unify____measurement_scope_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5328 "query.c"
    return query__succeeded;
#line 5330 "query.c"
  }
#line 5332 "query.c"
}

#line 5335 "query.c"
static void MR_CALL 
query____Compare____measurement_scope_0_0_10001(
#line 5338 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5340 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5342 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5344 "query.c"
{
#line 5346 "query.c"
  {
#line 5348 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5351 "query.c"
    {
#line 5353 "query.c"
      query____Compare____measurement_scope_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5356 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5358 "query.c"
  }
#line 5360 "query.c"
}

#line 5363 "query.c"
static MR_bool MR_CALL 
query____Unify____memory_fields_0_0_10001(
#line 5366 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5368 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5370 "query.c"
{
#line 5372 "query.c"
  {
#line 5374 "query.c"
    MR_bool query__succeeded;

#line 5377 "query.c"
    {
#line 5379 "query.c"
      query__succeeded = query____Unify____memory_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5382 "query.c"
    return query__succeeded;
#line 5384 "query.c"
  }
#line 5386 "query.c"
}

#line 5389 "query.c"
static void MR_CALL 
query____Compare____memory_fields_0_0_10001(
#line 5392 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5394 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5396 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5398 "query.c"
{
#line 5400 "query.c"
  {
#line 5402 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5405 "query.c"
    {
#line 5407 "query.c"
      query____Compare____memory_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5410 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5412 "query.c"
  }
#line 5414 "query.c"
}

#line 5417 "query.c"
static MR_bool MR_CALL 
query____Unify____module_qual_0_0_10001(
#line 5420 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5422 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5424 "query.c"
{
#line 5426 "query.c"
  {
#line 5428 "query.c"
    MR_bool query__succeeded;

#line 5431 "query.c"
    {
#line 5433 "query.c"
      query__succeeded = query____Unify____module_qual_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5436 "query.c"
    return query__succeeded;
#line 5438 "query.c"
  }
#line 5440 "query.c"
}

#line 5443 "query.c"
static void MR_CALL 
query____Compare____module_qual_0_0_10001(
#line 5446 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5448 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5450 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5452 "query.c"
{
#line 5454 "query.c"
  {
#line 5456 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5459 "query.c"
    {
#line 5461 "query.c"
      query____Compare____module_qual_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5464 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5466 "query.c"
  }
#line 5468 "query.c"
}

#line 5471 "query.c"
static MR_bool MR_CALL 
query____Unify____order_criteria_0_0_10001(
#line 5474 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5476 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5478 "query.c"
{
#line 5480 "query.c"
  {
#line 5482 "query.c"
    MR_bool query__succeeded;

#line 5485 "query.c"
    {
#line 5487 "query.c"
      query__succeeded = query____Unify____order_criteria_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5490 "query.c"
    return query__succeeded;
#line 5492 "query.c"
  }
#line 5494 "query.c"
}

#line 5497 "query.c"
static void MR_CALL 
query____Compare____order_criteria_0_0_10001(
#line 5500 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5502 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5504 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5506 "query.c"
{
#line 5508 "query.c"
  {
#line 5510 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5513 "query.c"
    {
#line 5515 "query.c"
      query____Compare____order_criteria_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5518 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5520 "query.c"
  }
#line 5522 "query.c"
}

#line 5525 "query.c"
static MR_bool MR_CALL 
query____Unify____port_fields_0_0_10001(
#line 5528 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5530 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5532 "query.c"
{
#line 5534 "query.c"
  {
#line 5536 "query.c"
    MR_bool query__succeeded;

#line 5539 "query.c"
    {
#line 5541 "query.c"
      query__succeeded = query____Unify____port_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5544 "query.c"
    return query__succeeded;
#line 5546 "query.c"
  }
#line 5548 "query.c"
}

#line 5551 "query.c"
static void MR_CALL 
query____Compare____port_fields_0_0_10001(
#line 5554 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5556 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5558 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5560 "query.c"
{
#line 5562 "query.c"
  {
#line 5564 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5567 "query.c"
    {
#line 5569 "query.c"
      query____Compare____port_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5572 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5574 "query.c"
  }
#line 5576 "query.c"
}

#line 5579 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_0_0_10001(
#line 5582 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5584 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5586 "query.c"
{
#line 5588 "query.c"
  {
#line 5590 "query.c"
    MR_bool query__succeeded;

#line 5593 "query.c"
    {
#line 5595 "query.c"
      query__succeeded = query____Unify____preferences_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5598 "query.c"
    return query__succeeded;
#line 5600 "query.c"
  }
#line 5602 "query.c"
}

#line 5605 "query.c"
static void MR_CALL 
query____Compare____preferences_0_0_10001(
#line 5608 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5610 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5612 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5614 "query.c"
{
#line 5616 "query.c"
  {
#line 5618 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5621 "query.c"
    {
#line 5623 "query.c"
      query____Compare____preferences_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5626 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5628 "query.c"
  }
#line 5630 "query.c"
}

#line 5633 "query.c"
static MR_bool MR_CALL 
query____Unify____preferences_indication_0_0_10001(
#line 5636 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5638 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5640 "query.c"
{
#line 5642 "query.c"
  {
#line 5644 "query.c"
    MR_bool query__succeeded;

#line 5647 "query.c"
    {
#line 5649 "query.c"
      query__succeeded = query____Unify____preferences_indication_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5652 "query.c"
    return query__succeeded;
#line 5654 "query.c"
  }
#line 5656 "query.c"
}

#line 5659 "query.c"
static void MR_CALL 
query____Compare____preferences_indication_0_0_10001(
#line 5662 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5664 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5666 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5668 "query.c"
{
#line 5670 "query.c"
  {
#line 5672 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5675 "query.c"
    {
#line 5677 "query.c"
      query____Compare____preferences_indication_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5680 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5682 "query.c"
  }
#line 5684 "query.c"
}

#line 5687 "query.c"
static MR_bool MR_CALL 
query____Unify____resp_0_0_10001(
#line 5690 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5692 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5694 "query.c"
{
#line 5696 "query.c"
  {
#line 5698 "query.c"
    MR_bool query__succeeded;

#line 5701 "query.c"
    {
#line 5703 "query.c"
      query__succeeded = query____Unify____resp_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5706 "query.c"
    return query__succeeded;
#line 5708 "query.c"
  }
#line 5710 "query.c"
}

#line 5713 "query.c"
static void MR_CALL 
query____Compare____resp_0_0_10001(
#line 5716 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5718 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5720 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5722 "query.c"
{
#line 5724 "query.c"
  {
#line 5726 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5729 "query.c"
    {
#line 5731 "query.c"
      query____Compare____resp_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5734 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5736 "query.c"
  }
#line 5738 "query.c"
}

#line 5741 "query.c"
static MR_bool MR_CALL 
query____Unify____summarize_ho_call_sites_0_0_10001(
#line 5744 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5746 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5748 "query.c"
{
#line 5750 "query.c"
  {
#line 5752 "query.c"
    MR_bool query__succeeded;

#line 5755 "query.c"
    {
#line 5757 "query.c"
      query__succeeded = query____Unify____summarize_ho_call_sites_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5760 "query.c"
    return query__succeeded;
#line 5762 "query.c"
  }
#line 5764 "query.c"
}

#line 5767 "query.c"
static void MR_CALL 
query____Compare____summarize_ho_call_sites_0_0_10001(
#line 5770 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5772 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5774 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5776 "query.c"
{
#line 5778 "query.c"
  {
#line 5780 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5783 "query.c"
    {
#line 5785 "query.c"
      query____Compare____summarize_ho_call_sites_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5788 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5790 "query.c"
  }
#line 5792 "query.c"
}

#line 5795 "query.c"
static MR_bool MR_CALL 
query____Unify____time_fields_0_0_10001(
#line 5798 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5800 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5802 "query.c"
{
#line 5804 "query.c"
  {
#line 5806 "query.c"
    MR_bool query__succeeded;

#line 5809 "query.c"
    {
#line 5811 "query.c"
      query__succeeded = query____Unify____time_fields_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5814 "query.c"
    return query__succeeded;
#line 5816 "query.c"
  }
#line 5818 "query.c"
}

#line 5821 "query.c"
static void MR_CALL 
query____Compare____time_fields_0_0_10001(
#line 5824 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5826 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5828 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5830 "query.c"
{
#line 5832 "query.c"
  {
#line 5834 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5837 "query.c"
    {
#line 5839 "query.c"
      query____Compare____time_fields_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5842 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5844 "query.c"
  }
#line 5846 "query.c"
}

#line 5849 "query.c"
static MR_bool MR_CALL 
query____Unify____time_format_0_0_10001(
#line 5852 "query.c"
  MR_Box query__wrapper_arg_1,
#line 5854 "query.c"
  MR_Box query__wrapper_arg_2)
#line 5856 "query.c"
{
#line 5858 "query.c"
  {
#line 5860 "query.c"
    MR_bool query__succeeded;

#line 5863 "query.c"
    {
#line 5865 "query.c"
      query__succeeded = query____Unify____time_format_0_0(((MR_Word) query__wrapper_arg_1), ((MR_Word) query__wrapper_arg_2));
    }
#line 5868 "query.c"
    return query__succeeded;
#line 5870 "query.c"
  }
#line 5872 "query.c"
}

#line 5875 "query.c"
static void MR_CALL 
query____Compare____time_format_0_0_10001(
#line 5878 "query.c"
  MR_Box * query__wrapper_arg_1,
#line 5880 "query.c"
  MR_Box query__wrapper_arg_2,
#line 5882 "query.c"
  MR_Box query__wrapper_arg_3)
#line 5884 "query.c"
{
#line 5886 "query.c"
  {
#line 5888 "query.c"
    MR_Word query__conv0_HeadVar__1_1;

#line 5891 "query.c"
    {
#line 5893 "query.c"
      query____Compare____time_format_0_0(&query__conv0_HeadVar__1_1, ((MR_Word) query__wrapper_arg_2), ((MR_Word) query__wrapper_arg_3));
    }
#line 5896 "query.c"
    *query__wrapper_arg_1 = ((MR_Box) (query__conv0_HeadVar__1_1));
#line 5898 "query.c"
  }
#line 5900 "query.c"
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
#line 6197 "query.c"
  {
#line 6199 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6202 "query.c"
    return query__succeeded;
#line 6204 "query.c"
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
#line 6250 "query.c"
  {
#line 6252 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6255 "query.c"
    return query__succeeded;
#line 6257 "query.c"
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
#line 6303 "query.c"
  {
#line 6305 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 6308 "query.c"
    return query__succeeded;
#line 6310 "query.c"
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
#line 6339 "query.c"
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

#line 6397 "query.c"
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
#line 6432 "query.c"
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
#line 6450 "query.c"
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
#line 6468 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 239 "query.m"
        else
#line 239 "query.m"
          {
#line 239 "query.m"
            MR_Word query__V_13_13 = (MR_Word) MR_body(((MR_Word) query__HeadVar__2_2), (MR_Integer) 1);

#line 239 "query.m"
            if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6479 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 239 "query.m"
            else
#line 239 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6485 "query.c"
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
#line 6581 "query.c"
                {
#line 6583 "query.c"
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
#line 6621 "query.c"
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
#line 6683 "query.c"
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
#line 6707 "query.c"
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
#line 6731 "query.c"
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
#line 6751 "query.c"
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
#line 6771 "query.c"
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
#line 6795 "query.c"
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
#line 6815 "query.c"
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
#line 6839 "query.c"
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
#line 6863 "query.c"
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
#line 6887 "query.c"
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
#line 6907 "query.c"
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

#line 7039 "query.c"
        {
#line 7041 "query.c"
          query__succeeded = query____Unify____fields_0_0(query__V_3_3, query__V_15_15);
        }
#line 191 "query.m"
        if (query__succeeded)
#line 191 "query.m"
          {
#line 7048 "query.c"
            query__succeeded = (query__V_4_4 == query__V_16_16);
#line 191 "query.m"
            if (query__succeeded)
#line 191 "query.m"
              {
#line 7054 "query.c"
                query__succeeded = (query__V_5_5 == query__V_17_17);
#line 191 "query.m"
                if (query__succeeded)
#line 191 "query.m"
                  {
#line 7060 "query.c"
                    query__TypeInfo_29_29 = (MR_Word) &query_scalar_common_1[0];
#line 7062 "query.c"
                    {
#line 7064 "query.c"
                      query__succeeded = mercury__builtin__unify_2_p_0(query__TypeInfo_29_29, ((MR_Box) (query__V_6_6)), ((MR_Box) (query__V_18_18)));
                    }
#line 191 "query.m"
                    if (query__succeeded)
#line 191 "query.m"
                      {
#line 7071 "query.c"
                        query__succeeded = (query__V_7_7 == query__V_19_19);
#line 191 "query.m"
                        if (query__succeeded)
#line 191 "query.m"
                          {
#line 7077 "query.c"
                            query__succeeded = (query__V_8_8 == query__V_20_20);
#line 191 "query.m"
                            if (query__succeeded)
#line 191 "query.m"
                              {
#line 7083 "query.c"
                                {
#line 7085 "query.c"
                                  query__succeeded = query____Unify____order_criteria_0_0(query__V_9_9, query__V_21_21);
                                }
#line 191 "query.m"
                                if (query__succeeded)
#line 191 "query.m"
                                  {
#line 7092 "query.c"
                                    query__succeeded = (query__V_10_10 == query__V_22_22);
#line 191 "query.m"
                                    if (query__succeeded)
#line 191 "query.m"
                                      {
#line 7098 "query.c"
                                        query__succeeded = (query__V_11_11 == query__V_23_23);
#line 191 "query.m"
                                        if (query__succeeded)
#line 191 "query.m"
                                          {
#line 7104 "query.c"
                                            query__succeeded = (query__V_12_12 == query__V_24_24);
#line 191 "query.m"
                                            if (query__succeeded)
#line 191 "query.m"
                                              {
#line 7110 "query.c"
                                                {
#line 7112 "query.c"
                                                  query__succeeded = query____Unify____inactive_items_0_0(query__V_13_13, query__V_25_25);
                                                }
#line 191 "query.m"
                                                if (query__succeeded)
#line 7117 "query.c"
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
#line 7189 "query.c"
  {
#line 7191 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7194 "query.c"
    return query__succeeded;
#line 7196 "query.c"
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
#line 7225 "query.c"
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
#line 7243 "query.c"
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
#line 7261 "query.c"
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
#line 7276 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 292 "query.m"
            else
#line 292 "query.m"
              if ((query__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7282 "query.c"
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
#line 7306 "query.c"
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
#line 7330 "query.c"
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
#line 7450 "query.c"
                query__succeeded = (query__V_7_7 == query__V_10_10);
#line 292 "query.m"
                if (query__succeeded)
#line 292 "query.m"
                  {
#line 7456 "query.c"
                    query__succeeded = (query__V_8_8 == query__V_11_11);
#line 292 "query.m"
                    if (query__succeeded)
#line 7460 "query.c"
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
#line 7516 "query.c"
  {
#line 7518 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7521 "query.c"
    return query__succeeded;
#line 7523 "query.c"
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
#line 7552 "query.c"
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
#line 7566 "query.c"
            *query__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "query.m"
          else
#line 7570 "query.c"
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
#line 7583 "query.c"
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
#line 7609 "query.c"
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
#line 7622 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "query.m"
            else
#line 266 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7628 "query.c"
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
#line 7715 "query.c"
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
#line 7738 "query.c"
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
#line 7792 "query.c"
  {
#line 7794 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7797 "query.c"
    return query__succeeded;
#line 7799 "query.c"
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
#line 7845 "query.c"
  {
#line 7847 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7850 "query.c"
    return query__succeeded;
#line 7852 "query.c"
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
#line 7898 "query.c"
  {
#line 7900 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 7903 "query.c"
    return query__succeeded;
#line 7905 "query.c"
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
#line 7934 "query.c"
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
#line 7964 "query.c"
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
#line 7988 "query.c"
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

#line 8064 "query.c"
        query__succeeded = (query__V_3_3 == query__V_6_6);
#line 323 "query.m"
        if (query__succeeded)
#line 323 "query.m"
          {
#line 8070 "query.c"
            query__succeeded = (query__V_4_4 == query__V_7_7);
#line 323 "query.m"
            if (query__succeeded)
#line 8074 "query.c"
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
#line 8111 "query.c"
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
#line 8149 "query.c"
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
#line 8173 "query.c"
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
#line 8197 "query.c"
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
#line 8221 "query.c"
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

#line 8300 "query.c"
        query__succeeded = (query__V_3_3 == query__V_8_8);
#line 271 "query.m"
        if (query__succeeded)
#line 271 "query.m"
          {
#line 8306 "query.c"
            query__succeeded = (query__V_4_4 == query__V_9_9);
#line 271 "query.m"
            if (query__succeeded)
#line 271 "query.m"
              {
#line 8312 "query.c"
                query__succeeded = (query__V_5_5 == query__V_10_10);
#line 271 "query.m"
                if (query__succeeded)
#line 271 "query.m"
                  {
#line 8318 "query.c"
                    query__succeeded = (query__V_6_6 == query__V_11_11);
#line 271 "query.m"
                    if (query__succeeded)
#line 8322 "query.c"
                      {
#line 8324 "query.c"
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
#line 8366 "query.c"
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
#line 8395 "query.c"
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
#line 8418 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 1;
#line 178 "query.m"
            else
#line 8422 "query.c"
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
#line 8437 "query.c"
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
#line 8459 "query.c"
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
#line 8472 "query.c"
              *query__HeadVar__1_1 = (MR_Integer) 2;
#line 178 "query.m"
            else
#line 178 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8478 "query.c"
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
#line 8552 "query.c"
              query__succeeded = (query__V_3_3 == query__V_5_5);
#line 178 "query.m"
              if (query__succeeded)
#line 8556 "query.c"
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
#line 8581 "query.c"
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
#line 8604 "query.c"
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
#line 8658 "query.c"
  {
#line 8660 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8663 "query.c"
    return query__succeeded;
#line 8665 "query.c"
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
#line 8711 "query.c"
  {
#line 8713 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8716 "query.c"
    return query__succeeded;
#line 8718 "query.c"
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
#line 8747 "query.c"
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
#line 8773 "query.c"
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
#line 8793 "query.c"
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

#line 8866 "query.c"
        {
#line 8868 "query.c"
          query__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &query_scalar_common_1[1], ((MR_Box) (query__V_3_3)), ((MR_Box) (query__V_6_6)));
        }
#line 49 "query.m"
        if (query__succeeded)
#line 49 "query.m"
          {
#line 8875 "query.c"
            query__succeeded = (strcmp(query__V_4_4, query__V_7_7) == 0);
#line 49 "query.m"
            if (query__succeeded)
#line 49 "query.m"
              {
#line 8881 "query.c"
                query__TypeInfo_12_12 = (MR_Word) &query_scalar_common_1[2];
#line 8883 "query.c"
                {
#line 8885 "query.c"
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
#line 8942 "query.c"
  {
#line 8944 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 8947 "query.c"
    return query__succeeded;
#line 8949 "query.c"
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
#line 8995 "query.c"
  {
#line 8997 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9000 "query.c"
    return query__succeeded;
#line 9002 "query.c"
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
#line 9048 "query.c"
  {
#line 9050 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 9053 "query.c"
    return query__succeeded;
#line 9055 "query.c"
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
#line 9084 "query.c"
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
#line 9109 "query.c"
          *query__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "query.m"
        else
#line 75 "query.m"
          {
#line 75 "query.m"
            query__succeeded = (query__V_4_4 > query__V_5_5);
#line 75 "query.m"
            if (query__succeeded)
#line 9119 "query.c"
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
#line 9207 "query.c"
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
#line 9778 "query.c"
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
#line 9802 "query.c"
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
#line 9822 "query.c"
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
#line 9842 "query.c"
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
#line 9958 "query.c"
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
#line 9982 "query.c"
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
#line 10006 "query.c"
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
#line 10080 "query.c"
      *query__HeadVar__2_2 = (MR_Integer) 3;
#line 75 "query.m"
    else
#line 75 "query.m"
      if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 10086 "query.c"
        *query__HeadVar__2_2 = (MR_Integer) 10;
#line 75 "query.m"
      else
#line 75 "query.m"
        if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10092 "query.c"
          *query__HeadVar__2_2 = (MR_Integer) 0;
#line 75 "query.m"
        else
#line 75 "query.m"
          if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 10098 "query.c"
            *query__HeadVar__2_2 = (MR_Integer) 7;
#line 75 "query.m"
          else
#line 75 "query.m"
            if ((query__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 10104 "query.c"
              *query__HeadVar__2_2 = (MR_Integer) 1;
#line 75 "query.m"
            else
#line 75 "query.m"
              if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10110 "query.c"
                *query__HeadVar__2_2 = (MR_Integer) 4;
#line 75 "query.m"
              else
#line 75 "query.m"
                if (((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10116 "query.c"
                  *query__HeadVar__2_2 = (MR_Integer) 2;
#line 75 "query.m"
                else
#line 75 "query.m"
                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10122 "query.c"
                    *query__HeadVar__2_2 = (MR_Integer) 22;
#line 75 "query.m"
                  else
#line 75 "query.m"
                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10128 "query.c"
                      *query__HeadVar__2_2 = (MR_Integer) 5;
#line 75 "query.m"
                    else
#line 75 "query.m"
                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10134 "query.c"
                        *query__HeadVar__2_2 = (MR_Integer) 6;
#line 75 "query.m"
                      else
#line 75 "query.m"
                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10140 "query.c"
                          *query__HeadVar__2_2 = (MR_Integer) 20;
#line 75 "query.m"
                        else
#line 75 "query.m"
                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10146 "query.c"
                            *query__HeadVar__2_2 = (MR_Integer) 19;
#line 75 "query.m"
                          else
#line 75 "query.m"
                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 10152 "query.c"
                              *query__HeadVar__2_2 = (MR_Integer) 21;
#line 75 "query.m"
                            else
#line 75 "query.m"
                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10158 "query.c"
                                *query__HeadVar__2_2 = (MR_Integer) 18;
#line 75 "query.m"
                              else
#line 75 "query.m"
                                if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10164 "query.c"
                                  *query__HeadVar__2_2 = (MR_Integer) 17;
#line 75 "query.m"
                                else
#line 75 "query.m"
                                  if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10170 "query.c"
                                    *query__HeadVar__2_2 = (MR_Integer) 16;
#line 75 "query.m"
                                  else
#line 75 "query.m"
                                    if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10176 "query.c"
                                      *query__HeadVar__2_2 = (MR_Integer) 11;
#line 75 "query.m"
                                    else
#line 75 "query.m"
                                      if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10182 "query.c"
                                        *query__HeadVar__2_2 = (MR_Integer) 12;
#line 75 "query.m"
                                      else
#line 75 "query.m"
                                        if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10188 "query.c"
                                          *query__HeadVar__2_2 = (MR_Integer) 13;
#line 75 "query.m"
                                        else
#line 75 "query.m"
                                          if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10194 "query.c"
                                            *query__HeadVar__2_2 = (MR_Integer) 8;
#line 75 "query.m"
                                          else
#line 75 "query.m"
                                            if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10200 "query.c"
                                              *query__HeadVar__2_2 = (MR_Integer) 9;
#line 75 "query.m"
                                            else
#line 75 "query.m"
                                              if (((((MR_tag((MR_Word) query__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), query__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10206 "query.c"
                                                *query__HeadVar__2_2 = (MR_Integer) 15;
#line 75 "query.m"
                                              else
#line 10210 "query.c"
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
#line 10337 "query.c"
                        query__TypeInfo_76_76 = (MR_Word) &query_scalar_common_1[0];
#line 10339 "query.c"
                        {
#line 10341 "query.c"
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
#line 10367 "query.c"
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
#line 10396 "query.c"
                            query__V_78_78 = (MR_Integer) query__V_61_61;
#line 10398 "query.c"
                            query__V_79_79 = (MR_Integer) query__V_62_62;
#line 10400 "query.c"
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
#line 10429 "query.c"
                              query__V_80_80 = (MR_Integer) query__V_13_13;
#line 10431 "query.c"
                              query__V_81_81 = (MR_Integer) query__V_14_14;
#line 10433 "query.c"
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
#line 10462 "query.c"
                                query__V_82_82 = (MR_Integer) query__V_15_15;
#line 10464 "query.c"
                                query__V_83_83 = (MR_Integer) query__V_16_16;
#line 10466 "query.c"
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
#line 10495 "query.c"
                                  query__V_84_84 = (MR_Integer) query__V_57_57;
#line 10497 "query.c"
                                  query__V_85_85 = (MR_Integer) query__V_58_58;
#line 10499 "query.c"
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
#line 10528 "query.c"
                                    query__V_86_86 = (MR_Integer) query__V_55_55;
#line 10530 "query.c"
                                    query__V_87_87 = (MR_Integer) query__V_56_56;
#line 10532 "query.c"
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
#line 10561 "query.c"
                                      query__V_88_88 = (MR_Integer) query__V_59_59;
#line 10563 "query.c"
                                      query__V_89_89 = (MR_Integer) query__V_60_60;
#line 10565 "query.c"
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
#line 10594 "query.c"
                                        query__V_90_90 = (MR_Integer) query__V_53_53;
#line 10596 "query.c"
                                        query__V_91_91 = (MR_Integer) query__V_54_54;
#line 10598 "query.c"
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
#line 10627 "query.c"
                                          query__V_92_92 = (MR_Integer) query__V_51_51;
#line 10629 "query.c"
                                          query__V_93_93 = (MR_Integer) query__V_52_52;
#line 10631 "query.c"
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
#line 10660 "query.c"
                                            query__V_94_94 = (MR_Integer) query__V_49_49;
#line 10662 "query.c"
                                            query__V_95_95 = (MR_Integer) query__V_50_50;
#line 10664 "query.c"
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
#line 10689 "query.c"
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
#line 10714 "query.c"
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
#line 10739 "query.c"
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
#line 10768 "query.c"
                                                    query__V_96_96 = (MR_Integer) query__V_19_19;
#line 10770 "query.c"
                                                    query__V_97_97 = (MR_Integer) query__V_20_20;
#line 10772 "query.c"
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
#line 10825 "query.c"
                                                      query__succeeded = (query__V_22_22 == query__V_27_27);
#line 75 "query.m"
                                                      if (query__succeeded)
#line 75 "query.m"
                                                        {
#line 10831 "query.c"
                                                          query__succeeded = (query__V_23_23 == query__V_28_28);
#line 75 "query.m"
                                                          if (query__succeeded)
#line 75 "query.m"
                                                            {
#line 10837 "query.c"
                                                              query__succeeded = (query__V_24_24 == query__V_29_29);
#line 75 "query.m"
                                                              if (query__succeeded)
#line 75 "query.m"
                                                                {
#line 10843 "query.c"
                                                                  query__succeeded = (query__V_25_25 == query__V_30_30);
#line 75 "query.m"
                                                                  if (query__succeeded)
#line 75 "query.m"
                                                                    {
#line 10849 "query.c"
                                                                      query__V_98_98 = (MR_Integer) query__V_21_21;
#line 10851 "query.c"
                                                                      query__V_99_99 = (MR_Integer) query__V_26_26;
#line 10853 "query.c"
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
#line 10890 "query.c"
                                                        query__V_100_100 = (MR_Integer) query__V_47_47;
#line 10892 "query.c"
                                                        query__V_101_101 = (MR_Integer) query__V_48_48;
#line 10894 "query.c"
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
#line 10935 "query.c"
                                                        {
#line 10937 "query.c"
                                                          query__succeeded = query____Unify____display_limit_0_0(query__V_39_39, query__V_43_43);
                                                        }
#line 75 "query.m"
                                                        if (query__succeeded)
#line 75 "query.m"
                                                          {
#line 10944 "query.c"
                                                            query__succeeded = (query__V_40_40 == query__V_44_44);
#line 75 "query.m"
                                                            if (query__succeeded)
#line 75 "query.m"
                                                              {
#line 10950 "query.c"
                                                                query__succeeded = (query__V_41_41 == query__V_45_45);
#line 75 "query.m"
                                                                if (query__succeeded)
#line 10954 "query.c"
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
#line 11012 "query.c"
  {
#line 11014 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11017 "query.c"
    return query__succeeded;
#line 11019 "query.c"
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
#line 11065 "query.c"
  {
#line 11067 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11070 "query.c"
    return query__succeeded;
#line 11072 "query.c"
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
#line 11118 "query.c"
  {
#line 11120 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11123 "query.c"
    return query__succeeded;
#line 11125 "query.c"
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
#line 11171 "query.c"
  {
#line 11173 "query.c"
    MR_bool query__succeeded = (query__HeadVar__2_1 == query__HeadVar__2_2);

#line 11176 "query.c"
    return query__succeeded;
#line 11178 "query.c"
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
    MR_String query__V_98_98;
#line 668 "query.m"
    MR_Word query__V_104_104;
#line 668 "query.m"
    MR_String query__V_105_105;
#line 668 "query.m"
    MR_String query__V_112_112;
#line 668 "query.m"
    MR_String query__V_113_113;
#line 668 "query.m"
    MR_String query__V_120_120;
#line 668 "query.m"
    MR_String query__V_121_121;
#line 668 "query.m"
    MR_String query__V_128_128;
#line 668 "query.m"
    MR_String query__V_129_129;
#line 668 "query.m"
    MR_String query__V_136_136;
#line 668 "query.m"
    MR_String query__V_137_137;
#line 668 "query.m"
    MR_String query__V_144_144;
#line 668 "query.m"
    MR_String query__V_145_145;
#line 668 "query.m"
    MR_String query__V_152_152;
#line 668 "query.m"
    MR_String query__V_153_153;
#line 668 "query.m"
    MR_String query__V_160_160;
#line 668 "query.m"
    MR_String query__V_161_161;
#line 668 "query.m"
    MR_String query__V_168_168;
#line 668 "query.m"
    MR_String query__V_169_169;
#line 668 "query.m"
    MR_String query__V_176_176;
#line 668 "query.m"
    MR_String query__V_177_177;
#line 668 "query.m"
    MR_String query__V_184_184;
#line 668 "query.m"
    MR_String query__V_185_185;
#line 668 "query.m"
    MR_String query__V_192_192;
#line 668 "query.m"
    MR_String query__V_193_193;
#line 668 "query.m"
    MR_String query__V_200_200;
#line 668 "query.m"
    MR_String query__V_201_201;
#line 668 "query.m"
    MR_String query__V_208_208;
#line 668 "query.m"
    MR_String query__V_209_209;
#line 668 "query.m"
    MR_String query__V_216_216;
#line 668 "query.m"
    MR_String query__V_217_217;
#line 668 "query.m"
    MR_String query__V_224_224;
#line 668 "query.m"
    MR_String query__V_225_225;
#line 668 "query.m"
    MR_String query__V_232_232;
#line 668 "query.m"
    MR_String query__V_233_233;
#line 668 "query.m"
    MR_String query__V_240_240;
#line 668 "query.m"
    MR_String query__V_241_241;
#line 668 "query.m"
    MR_String query__V_248_248;
#line 668 "query.m"
    MR_String query__V_249_249;
#line 668 "query.m"
    MR_String query__V_256_256;
#line 668 "query.m"
    MR_String query__V_257_257;
#line 668 "query.m"
    MR_String query__V_264_264;
#line 668 "query.m"
    MR_String query__V_265_265;
#line 668 "query.m"
    MR_String query__V_272_272;
#line 668 "query.m"
    MR_String query__V_273_273;

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

#line 675 "query.m"
        {
#line 675 "query.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__AncestorLimit_17, &query__MaybeAncestorLimitStr_18);
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
#line 13430 "query.c"
    query__V_104_104 = (MR_Word) &query_scalar_common_2[1];
#line 692 "query.m"
    {
#line 692 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_90_90, &query__V_98_98);
    }
#line 692 "query.m"
    {
#line 692 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_87_87, &query__V_105_105);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_112_112 = mercury__string__f_43_43_2_f_0(query__V_105_105, query__V_98_98);
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_84_84, &query__V_113_113);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_120_120 = mercury__string__f_43_43_2_f_0(query__V_113_113, query__V_112_112);
    }
#line 691 "query.m"
    {
#line 691 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_81_81, &query__V_121_121);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_128_128 = mercury__string__f_43_43_2_f_0(query__V_121_121, query__V_120_120);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_78_78, &query__V_129_129);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_136_136 = mercury__string__f_43_43_2_f_0(query__V_129_129, query__V_128_128);
    }
#line 690 "query.m"
    {
#line 690 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_75_75, &query__V_137_137);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_144_144 = mercury__string__f_43_43_2_f_0(query__V_137_137, query__V_136_136);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_72_72, &query__V_145_145);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_152_152 = mercury__string__f_43_43_2_f_0(query__V_145_145, query__V_144_144);
    }
#line 689 "query.m"
    {
#line 689 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_69_69, &query__V_153_153);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_160_160 = mercury__string__f_43_43_2_f_0(query__V_153_153, query__V_152_152);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_66_66, &query__V_161_161);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_168_168 = mercury__string__f_43_43_2_f_0(query__V_161_161, query__V_160_160);
    }
#line 688 "query.m"
    {
#line 688 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_63_63, &query__V_169_169);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_176_176 = mercury__string__f_43_43_2_f_0(query__V_169_169, query__V_168_168);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_60_60, &query__V_177_177);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_184_184 = mercury__string__f_43_43_2_f_0(query__V_177_177, query__V_176_176);
    }
#line 687 "query.m"
    {
#line 687 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_57_57, &query__V_185_185);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_192_192 = mercury__string__f_43_43_2_f_0(query__V_185_185, query__V_184_184);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_54_54, &query__V_193_193);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_200_200 = mercury__string__f_43_43_2_f_0(query__V_193_193, query__V_192_192);
    }
#line 686 "query.m"
    {
#line 686 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_51_51, &query__V_201_201);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_208_208 = mercury__string__f_43_43_2_f_0(query__V_201_201, query__V_200_200);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_104_104, query__ProcStaticsPerRecTypeLimit_9, &query__V_209_209);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_216_216 = mercury__string__f_43_43_2_f_0(query__V_209_209, query__V_208_208);
    }
#line 685 "query.m"
    {
#line 685 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_46_46, &query__V_217_217);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_224_224 = mercury__string__f_43_43_2_f_0(query__V_217_217, query__V_216_216);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__MaybeAncestorLimitStr_18, &query__V_225_225);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_232_232 = mercury__string__f_43_43_2_f_0(query__V_225_225, query__V_224_224);
    }
#line 684 "query.m"
    {
#line 684 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_41_41, &query__V_233_233);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_240_240 = mercury__string__f_43_43_2_f_0(query__V_233_233, query__V_232_232);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_38_38, &query__V_241_241);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_248_248 = mercury__string__f_43_43_2_f_0(query__V_241_241, query__V_240_240);
    }
#line 683 "query.m"
    {
#line 683 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_35_35, &query__V_249_249);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_256_256 = mercury__string__f_43_43_2_f_0(query__V_249_249, query__V_248_248);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_32_32, &query__V_257_257);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_264_264 = mercury__string__f_43_43_2_f_0(query__V_257_257, query__V_256_256);
    }
#line 682 "query.m"
    {
#line 682 "query.m"
      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_104_104, query__V_29_29, &query__V_265_265);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      query__V_272_272 = mercury__string__f_43_43_2_f_0(query__V_265_265, query__V_264_264);
    }
#line 681 "query.m"
    {
#line 681 "query.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_104_104, query__V_26_26, &query__V_273_273);
    }
#line 680 "query.m"
    {
#line 680 "query.m"
      return query__PrefStr_4 = mercury__string__f_43_43_2_f_0(query__V_273_273, query__V_272_272);
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
                      MR_String query__V_411_411;
#line 558 "query.m"
                      MR_Word query__V_417_417;
#line 558 "query.m"
                      MR_String query__V_418_418;
#line 558 "query.m"
                      MR_String query__V_425_425;
#line 558 "query.m"
                      MR_String query__V_426_426;

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
#line 13759 "query.c"
                      query__V_417_417 = (MR_Word) &query_scalar_common_2[1];
#line 560 "query.m"
                      {
#line 560 "query.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, (MR_String) "no", &query__V_411_411);
                      }
#line 560 "query.m"
                      {
#line 560 "query.m"
                        mercury__string__format__format_char_component_nowidth_3_p_0(query__V_417_417, query__V_224_224, &query__V_418_418);
                      }
#line 559 "query.m"
                      {
#line 559 "query.m"
                        query__V_425_425 = mercury__string__f_43_43_2_f_0(query__V_418_418, query__V_411_411);
                      }
#line 560 "query.m"
                      {
#line 560 "query.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_417_417, query__V_221_221, &query__V_426_426);
                      }
#line 559 "query.m"
                      {
#line 559 "query.m"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_426_426, query__V_425_425);
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
                      MR_String query__V_389_389;
#line 554 "query.m"
                      MR_Word query__V_395_395;
#line 554 "query.m"
                      MR_String query__V_396_396;
#line 554 "query.m"
                      MR_String query__V_403_403;
#line 554 "query.m"
                      MR_String query__V_404_404;

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
#line 13819 "query.c"
                      query__V_395_395 = (MR_Word) &query_scalar_common_2[1];
#line 556 "query.m"
                      {
#line 556 "query.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_395_395, query__Percent_7, &query__V_389_389);
                      }
#line 556 "query.m"
                      {
#line 556 "query.m"
                        mercury__string__format__format_char_component_nowidth_3_p_0(query__V_395_395, query__V_235_235, &query__V_396_396);
                      }
#line 555 "query.m"
                      {
#line 555 "query.m"
                        query__V_403_403 = mercury__string__f_43_43_2_f_0(query__V_396_396, query__V_389_389);
                      }
#line 556 "query.m"
                      {
#line 556 "query.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_395_395, query__V_232_232, &query__V_404_404);
                      }
#line 555 "query.m"
                      {
#line 555 "query.m"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_404_404, query__V_403_403);
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
                    MR_String query__V_345_345;
#line 545 "query.m"
                    MR_Word query__V_351_351;
#line 545 "query.m"
                    MR_String query__V_352_352;
#line 545 "query.m"
                    MR_String query__V_359_359;
#line 545 "query.m"
                    MR_String query__V_360_360;

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
#line 13883 "query.c"
                    query__V_351_351 = (MR_Word) &query_scalar_common_2[1];
#line 547 "query.m"
                    {
#line 547 "query.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_351_351, query__Minutes_5, &query__V_345_345);
                    }
#line 547 "query.m"
                    {
#line 547 "query.m"
                      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_351_351, query__V_245_245, &query__V_352_352);
                    }
#line 546 "query.m"
                    {
#line 546 "query.m"
                      query__V_359_359 = mercury__string__f_43_43_2_f_0(query__V_352_352, query__V_345_345);
                    }
#line 547 "query.m"
                    {
#line 547 "query.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_351_351, query__V_242_242, &query__V_360_360);
                    }
#line 546 "query.m"
                    {
#line 546 "query.m"
                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_360_360, query__V_359_359);
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
                      MR_String query__V_783_783;
#line 659 "query.m"
                      MR_Word query__V_789_789;
#line 659 "query.m"
                      MR_String query__V_790_790;
#line 659 "query.m"
                      MR_String query__V_797_797;
#line 659 "query.m"
                      MR_String query__V_798_798;

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
#line 13947 "query.c"
                      query__V_789_789 = (MR_Word) &query_scalar_common_2[1];
#line 663 "query.m"
                      {
#line 663 "query.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_789_789, query__CSDI_262, &query__V_783_783);
                      }
#line 662 "query.m"
                      {
#line 662 "query.m"
                        mercury__string__format__format_char_component_nowidth_3_p_0(query__V_789_789, query__V_40_40, &query__V_790_790);
                      }
#line 661 "query.m"
                      {
#line 661 "query.m"
                        query__V_797_797 = mercury__string__f_43_43_2_f_0(query__V_790_790, query__V_783_783);
                      }
#line 662 "query.m"
                      {
#line 662 "query.m"
                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_789_789, query__V_37_37, &query__V_798_798);
                      }
#line 661 "query.m"
                      {
#line 661 "query.m"
                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_798_798, query__V_797_797);
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
                        MR_String query__V_761_761;
#line 569 "query.m"
                        MR_Word query__V_767_767;
#line 569 "query.m"
                        MR_String query__V_768_768;
#line 569 "query.m"
                        MR_String query__V_775_775;
#line 569 "query.m"
                        MR_String query__V_776_776;

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
#line 14013 "query.c"
                        query__V_767_767 = (MR_Word) &query_scalar_common_2[1];
#line 572 "query.m"
                        {
#line 572 "query.m"
                          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_767_767, query__CliqueNum_10, &query__V_761_761);
                        }
#line 572 "query.m"
                        {
#line 572 "query.m"
                          mercury__string__format__format_char_component_nowidth_3_p_0(query__V_767_767, query__V_214_214, &query__V_768_768);
                        }
#line 571 "query.m"
                        {
#line 571 "query.m"
                          query__V_775_775 = mercury__string__f_43_43_2_f_0(query__V_768_768, query__V_761_761);
                        }
#line 572 "query.m"
                        {
#line 572 "query.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_767_767, query__Name_9, &query__V_776_776);
                        }
#line 571 "query.m"
                        {
#line 571 "query.m"
                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_776_776, query__V_775_775);
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
                          MR_String query__V_739_739;
#line 569 "query.m"
                          MR_Word query__V_745_745;
#line 569 "query.m"
                          MR_String query__V_746_746;
#line 569 "query.m"
                          MR_String query__V_753_753;
#line 569 "query.m"
                          MR_String query__V_754_754;

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
#line 14079 "query.c"
                          query__V_745_745 = (MR_Word) &query_scalar_common_2[1];
#line 572 "query.m"
                          {
#line 572 "query.m"
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_745_745, query__CliqueNum_265, &query__V_739_739);
                          }
#line 572 "query.m"
                          {
#line 572 "query.m"
                            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_745_745, query__V_271_271, &query__V_746_746);
                          }
#line 571 "query.m"
                          {
#line 571 "query.m"
                            query__V_753_753 = mercury__string__f_43_43_2_f_0(query__V_746_746, query__V_739_739);
                          }
#line 572 "query.m"
                          {
#line 572 "query.m"
                            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_745_745, query__Name_264, &query__V_754_754);
                          }
#line 571 "query.m"
                          {
#line 571 "query.m"
                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_754_754, query__V_753_753);
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
                            MR_String query__V_717_717;
#line 648 "query.m"
                            MR_Word query__V_723_723;
#line 648 "query.m"
                            MR_String query__V_724_724;
#line 648 "query.m"
                            MR_String query__V_731_731;
#line 648 "query.m"
                            MR_String query__V_732_732;

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
#line 14143 "query.c"
                            query__V_723_723 = (MR_Word) &query_scalar_common_2[1];
#line 652 "query.m"
                            {
#line 652 "query.m"
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_723_723, query__CSDI_33, &query__V_717_717);
                            }
#line 651 "query.m"
                            {
#line 651 "query.m"
                              mercury__string__format__format_char_component_nowidth_3_p_0(query__V_723_723, query__V_60_60, &query__V_724_724);
                            }
#line 650 "query.m"
                            {
#line 650 "query.m"
                              query__V_731_731 = mercury__string__f_43_43_2_f_0(query__V_724_724, query__V_717_717);
                            }
#line 651 "query.m"
                            {
#line 651 "query.m"
                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_723_723, query__V_57_57, &query__V_732_732);
                            }
#line 650 "query.m"
                            {
#line 650 "query.m"
                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_732_732, query__V_731_731);
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
                              MR_String query__V_695_695;
#line 643 "query.m"
                              MR_Word query__V_701_701;
#line 643 "query.m"
                              MR_String query__V_702_702;
#line 643 "query.m"
                              MR_String query__V_709_709;
#line 643 "query.m"
                              MR_String query__V_710_710;

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
#line 14207 "query.c"
                              query__V_701_701 = (MR_Word) &query_scalar_common_2[1];
#line 646 "query.m"
                              {
#line 646 "query.m"
                                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_701_701, query__CSSI_31, &query__V_695_695);
                              }
#line 646 "query.m"
                              {
#line 646 "query.m"
                                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_701_701, query__V_70_70, &query__V_702_702);
                              }
#line 645 "query.m"
                              {
#line 645 "query.m"
                                query__V_709_709 = mercury__string__f_43_43_2_f_0(query__V_702_702, query__V_695_695);
                              }
#line 646 "query.m"
                              {
#line 646 "query.m"
                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_701_701, query__V_67_67, &query__V_710_710);
                              }
#line 645 "query.m"
                              {
#line 645 "query.m"
                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_710_710, query__V_709_709);
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
                                MR_String query__V_673_673;
#line 654 "query.m"
                                MR_Word query__V_679_679;
#line 654 "query.m"
                                MR_String query__V_680_680;
#line 654 "query.m"
                                MR_String query__V_687_687;
#line 654 "query.m"
                                MR_String query__V_688_688;

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
#line 14271 "query.c"
                                query__V_679_679 = (MR_Word) &query_scalar_common_2[1];
#line 657 "query.m"
                                {
#line 657 "query.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_679_679, query__CliqueNum_260, &query__V_673_673);
                                }
#line 657 "query.m"
                                {
#line 657 "query.m"
                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_679_679, query__V_50_50, &query__V_680_680);
                                }
#line 656 "query.m"
                                {
#line 656 "query.m"
                                  query__V_687_687 = mercury__string__f_43_43_2_f_0(query__V_680_680, query__V_673_673);
                                }
#line 657 "query.m"
                                {
#line 657 "query.m"
                                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_679_679, query__V_47_47, &query__V_688_688);
                                }
#line 656 "query.m"
                                {
#line 656 "query.m"
                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_688_688, query__V_687_687);
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
                                  MR_String query__V_651_651;
#line 638 "query.m"
                                  MR_Word query__V_657_657;
#line 638 "query.m"
                                  MR_String query__V_658_658;
#line 638 "query.m"
                                  MR_String query__V_665_665;
#line 638 "query.m"
                                  MR_String query__V_666_666;

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
#line 14335 "query.c"
                                  query__V_657_657 = (MR_Word) &query_scalar_common_2[1];
#line 641 "query.m"
                                  {
#line 641 "query.m"
                                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_657_657, query__PDI_258, &query__V_651_651);
                                  }
#line 641 "query.m"
                                  {
#line 641 "query.m"
                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_657_657, query__V_80_80, &query__V_658_658);
                                  }
#line 640 "query.m"
                                  {
#line 640 "query.m"
                                    query__V_665_665 = mercury__string__f_43_43_2_f_0(query__V_658_658, query__V_651_651);
                                  }
#line 641 "query.m"
                                  {
#line 641 "query.m"
                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_657_657, query__V_77_77, &query__V_666_666);
                                  }
#line 640 "query.m"
                                  {
#line 640 "query.m"
                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_666_666, query__V_665_665);
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
                                    MR_String query__V_629_629;
#line 633 "query.m"
                                    MR_Word query__V_635_635;
#line 633 "query.m"
                                    MR_String query__V_636_636;
#line 633 "query.m"
                                    MR_String query__V_643_643;
#line 633 "query.m"
                                    MR_String query__V_644_644;

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
#line 14399 "query.c"
                                    query__V_635_635 = (MR_Word) &query_scalar_common_2[1];
#line 636 "query.m"
                                    {
#line 636 "query.m"
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_635_635, query__PSI_256, &query__V_629_629);
                                    }
#line 636 "query.m"
                                    {
#line 636 "query.m"
                                      mercury__string__format__format_char_component_nowidth_3_p_0(query__V_635_635, query__V_90_90, &query__V_636_636);
                                    }
#line 635 "query.m"
                                    {
#line 635 "query.m"
                                      query__V_643_643 = mercury__string__f_43_43_2_f_0(query__V_636_636, query__V_629_629);
                                    }
#line 636 "query.m"
                                    {
#line 636 "query.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_635_635, query__V_87_87, &query__V_644_644);
                                    }
#line 635 "query.m"
                                    {
#line 635 "query.m"
                                      return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_644_644, query__V_643_643);
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
                                      MR_String query__V_607_607;
#line 628 "query.m"
                                      MR_Word query__V_613_613;
#line 628 "query.m"
                                      MR_String query__V_614_614;
#line 628 "query.m"
                                      MR_String query__V_621_621;
#line 628 "query.m"
                                      MR_String query__V_622_622;

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
#line 14463 "query.c"
                                      query__V_613_613 = (MR_Word) &query_scalar_common_2[1];
#line 631 "query.m"
                                      {
#line 631 "query.m"
                                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_613_613, query__PDI_29, &query__V_607_607);
                                      }
#line 631 "query.m"
                                      {
#line 631 "query.m"
                                        mercury__string__format__format_char_component_nowidth_3_p_0(query__V_613_613, query__V_100_100, &query__V_614_614);
                                      }
#line 630 "query.m"
                                      {
#line 630 "query.m"
                                        query__V_621_621 = mercury__string__f_43_43_2_f_0(query__V_614_614, query__V_607_607);
                                      }
#line 631 "query.m"
                                      {
#line 631 "query.m"
                                        mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_613_613, query__V_97_97, &query__V_622_622);
                                      }
#line 630 "query.m"
                                      {
#line 630 "query.m"
                                        return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_622_622, query__V_621_621);
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
                                        MR_String query__V_585_585;
#line 598 "query.m"
                                        MR_Word query__V_591_591;
#line 598 "query.m"
                                        MR_String query__V_592_592;
#line 598 "query.m"
                                        MR_String query__V_599_599;
#line 598 "query.m"
                                        MR_String query__V_600_600;

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
#line 14525 "query.c"
                                        query__V_591_591 = (MR_Word) &query_scalar_common_2[1];
#line 600 "query.m"
                                        {
#line 600 "query.m"
                                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__ModuleName_19, &query__V_585_585);
                                        }
#line 600 "query.m"
                                        {
#line 600 "query.m"
                                          mercury__string__format__format_char_component_nowidth_3_p_0(query__V_591_591, query__V_165_165, &query__V_592_592);
                                        }
#line 599 "query.m"
                                        {
#line 599 "query.m"
                                          query__V_599_599 = mercury__string__f_43_43_2_f_0(query__V_592_592, query__V_585_585);
                                        }
#line 600 "query.m"
                                        {
#line 600 "query.m"
                                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_591_591, query__V_162_162, &query__V_600_600);
                                        }
#line 599 "query.m"
                                        {
#line 599 "query.m"
                                          return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_600_600, query__V_599_599);
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
                                          MR_String query__V_563_563;
#line 602 "query.m"
                                          MR_Word query__V_569_569;
#line 602 "query.m"
                                          MR_String query__V_570_570;
#line 602 "query.m"
                                          MR_String query__V_577_577;
#line 602 "query.m"
                                          MR_String query__V_578_578;

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
#line 14587 "query.c"
                                          query__V_569_569 = (MR_Word) &query_scalar_common_2[1];
#line 605 "query.m"
                                          {
#line 605 "query.m"
                                            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__ModuleName_251, &query__V_563_563);
                                          }
#line 604 "query.m"
                                          {
#line 604 "query.m"
                                            mercury__string__format__format_char_component_nowidth_3_p_0(query__V_569_569, query__V_155_155, &query__V_570_570);
                                          }
#line 603 "query.m"
                                          {
#line 603 "query.m"
                                            query__V_577_577 = mercury__string__f_43_43_2_f_0(query__V_570_570, query__V_563_563);
                                          }
#line 604 "query.m"
                                          {
#line 604 "query.m"
                                            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_569_569, query__V_152_152, &query__V_578_578);
                                          }
#line 603 "query.m"
                                          {
#line 603 "query.m"
                                            return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_578_578, query__V_577_577);
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
                                            MR_String query__V_541_541;
#line 607 "query.m"
                                            MR_Word query__V_547_547;
#line 607 "query.m"
                                            MR_String query__V_548_548;
#line 607 "query.m"
                                            MR_String query__V_555_555;
#line 607 "query.m"
                                            MR_String query__V_556_556;

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
#line 14649 "query.c"
                                            query__V_547_547 = (MR_Word) &query_scalar_common_2[1];
#line 609 "query.m"
                                            {
#line 609 "query.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__ModuleName_252, &query__V_541_541);
                                            }
#line 609 "query.m"
                                            {
#line 609 "query.m"
                                              mercury__string__format__format_char_component_nowidth_3_p_0(query__V_547_547, query__V_145_145, &query__V_548_548);
                                            }
#line 608 "query.m"
                                            {
#line 608 "query.m"
                                              query__V_555_555 = mercury__string__f_43_43_2_f_0(query__V_548_548, query__V_541_541);
                                            }
#line 609 "query.m"
                                            {
#line 609 "query.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_547_547, query__V_142_142, &query__V_556_556);
                                            }
#line 608 "query.m"
                                            {
#line 608 "query.m"
                                              return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_556_556, query__V_555_555);
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
                                              MR_String query__V_519_519;
#line 577 "query.m"
                                              MR_Word query__V_525_525;
#line 577 "query.m"
                                              MR_String query__V_526_526;
#line 577 "query.m"
                                              MR_String query__V_533_533;
#line 577 "query.m"
                                              MR_String query__V_534_534;

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
#line 14713 "query.c"
                                              query__V_525_525 = (MR_Word) &query_scalar_common_2[1];
#line 580 "query.m"
                                              {
#line 580 "query.m"
                                                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_525_525, query__PSI_12, &query__V_519_519);
                                              }
#line 580 "query.m"
                                              {
#line 580 "query.m"
                                                mercury__string__format__format_char_component_nowidth_3_p_0(query__V_525_525, query__V_205_205, &query__V_526_526);
                                              }
#line 579 "query.m"
                                              {
#line 579 "query.m"
                                                query__V_533_533 = mercury__string__f_43_43_2_f_0(query__V_526_526, query__V_519_519);
                                              }
#line 580 "query.m"
                                              {
#line 580 "query.m"
                                                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_525_525, query__V_202_202, &query__V_534_534);
                                              }
#line 579 "query.m"
                                              {
#line 579 "query.m"
                                                return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_534_534, query__V_533_533);
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
                                                MR_String query__V_433_433;
#line 583 "query.m"
                                                MR_Word query__V_439_439;
#line 583 "query.m"
                                                MR_String query__V_440_440;
#line 583 "query.m"
                                                MR_String query__V_447_447;
#line 583 "query.m"
                                                MR_String query__V_448_448;
#line 583 "query.m"
                                                MR_String query__V_455_455;
#line 583 "query.m"
                                                MR_String query__V_456_456;
#line 583 "query.m"
                                                MR_String query__V_463_463;
#line 583 "query.m"
                                                MR_String query__V_464_464;
#line 583 "query.m"
                                                MR_String query__V_471_471;
#line 583 "query.m"
                                                MR_String query__V_472_472;
#line 583 "query.m"
                                                MR_String query__V_479_479;
#line 583 "query.m"
                                                MR_String query__V_480_480;
#line 583 "query.m"
                                                MR_String query__V_487_487;
#line 583 "query.m"
                                                MR_String query__V_488_488;
#line 583 "query.m"
                                                MR_String query__V_495_495;
#line 583 "query.m"
                                                MR_String query__V_496_496;
#line 583 "query.m"
                                                MR_String query__V_503_503;
#line 583 "query.m"
                                                MR_String query__V_504_504;
#line 583 "query.m"
                                                MR_String query__V_511_511;
#line 583 "query.m"
                                                MR_String query__V_512_512;

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
#line 14859 "query.c"
                                                query__V_439_439 = (MR_Word) &query_scalar_common_2[1];
#line 593 "query.m"
                                                {
#line 593 "query.m"
                                                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__ContourStr_18, &query__V_433_433);
                                                }
#line 593 "query.m"
                                                {
#line 593 "query.m"
                                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_195_195, &query__V_440_440);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_447_447 = mercury__string__f_43_43_2_f_0(query__V_440_440, query__V_433_433);
                                                }
#line 592 "query.m"
                                                {
#line 592 "query.m"
                                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__CallersPerBunch_15, &query__V_448_448);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_455_455 = mercury__string__f_43_43_2_f_0(query__V_448_448, query__V_447_447);
                                                }
#line 592 "query.m"
                                                {
#line 592 "query.m"
                                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_190_190, &query__V_456_456);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_463_463 = mercury__string__f_43_43_2_f_0(query__V_456_456, query__V_455_455);
                                                }
#line 591 "query.m"
                                                {
#line 591 "query.m"
                                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__BunchNum_14, &query__V_464_464);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_471_471 = mercury__string__f_43_43_2_f_0(query__V_464_464, query__V_463_463);
                                                }
#line 591 "query.m"
                                                {
#line 591 "query.m"
                                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_185_185, &query__V_472_472);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_479_479 = mercury__string__f_43_43_2_f_0(query__V_472_472, query__V_471_471);
                                                }
#line 590 "query.m"
                                                {
#line 590 "query.m"
                                                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__GroupCallersStr_17, &query__V_480_480);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_487_487 = mercury__string__f_43_43_2_f_0(query__V_480_480, query__V_479_479);
                                                }
#line 590 "query.m"
                                                {
#line 590 "query.m"
                                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_180_180, &query__V_488_488);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_495_495 = mercury__string__f_43_43_2_f_0(query__V_488_488, query__V_487_487);
                                                }
#line 589 "query.m"
                                                {
#line 589 "query.m"
                                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_439_439, query__PSI_250, &query__V_496_496);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_503_503 = mercury__string__f_43_43_2_f_0(query__V_496_496, query__V_495_495);
                                                }
#line 589 "query.m"
                                                {
#line 589 "query.m"
                                                  mercury__string__format__format_char_component_nowidth_3_p_0(query__V_439_439, query__V_175_175, &query__V_504_504);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  query__V_511_511 = mercury__string__f_43_43_2_f_0(query__V_504_504, query__V_503_503);
                                                }
#line 588 "query.m"
                                                {
#line 588 "query.m"
                                                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_439_439, query__V_172_172, &query__V_512_512);
                                                }
#line 587 "query.m"
                                                {
#line 587 "query.m"
                                                  return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_512_512, query__V_511_511);
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
                                                  MR_String query__V_367_367;
#line 623 "query.m"
                                                  MR_Word query__V_373_373;
#line 623 "query.m"
                                                  MR_String query__V_374_374;
#line 623 "query.m"
                                                  MR_String query__V_381_381;
#line 623 "query.m"
                                                  MR_String query__V_382_382;

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
#line 15003 "query.c"
                                                  query__V_373_373 = (MR_Word) &query_scalar_common_2[1];
#line 626 "query.m"
                                                  {
#line 626 "query.m"
                                                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(query__V_373_373, query__PSI_254, &query__V_367_367);
                                                  }
#line 626 "query.m"
                                                  {
#line 626 "query.m"
                                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_373_373, query__V_110_110, &query__V_374_374);
                                                  }
#line 625 "query.m"
                                                  {
#line 625 "query.m"
                                                    query__V_381_381 = mercury__string__f_43_43_2_f_0(query__V_374_374, query__V_367_367);
                                                  }
#line 626 "query.m"
                                                  {
#line 626 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_373_373, query__V_107_107, &query__V_382_382);
                                                  }
#line 625 "query.m"
                                                  {
#line 625 "query.m"
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_382_382, query__V_381_381);
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
                                                  MR_String query__V_275_275;
#line 611 "query.m"
                                                  MR_Word query__V_281_281;
#line 611 "query.m"
                                                  MR_String query__V_282_282;
#line 611 "query.m"
                                                  MR_String query__V_289_289;
#line 611 "query.m"
                                                  MR_String query__V_290_290;
#line 611 "query.m"
                                                  MR_String query__V_297_297;
#line 611 "query.m"
                                                  MR_String query__V_298_298;
#line 611 "query.m"
                                                  MR_String query__V_305_305;
#line 611 "query.m"
                                                  MR_String query__V_306_306;
#line 611 "query.m"
                                                  MR_String query__V_313_313;
#line 611 "query.m"
                                                  MR_String query__V_314_314;
#line 611 "query.m"
                                                  MR_String query__V_321_321;
#line 611 "query.m"
                                                  MR_String query__V_322_322;
#line 611 "query.m"
                                                  MR_String query__V_329_329;
#line 611 "query.m"
                                                  MR_String query__V_330_330;
#line 611 "query.m"
                                                  MR_String query__V_337_337;
#line 611 "query.m"
                                                  MR_String query__V_338_338;

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
#line 15142 "query.c"
                                                  query__V_281_281 = (MR_Word) &query_scalar_common_2[1];
#line 621 "query.m"
                                                  {
#line 621 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__ScopeStr_27, &query__V_275_275);
                                                  }
#line 621 "query.m"
                                                  {
#line 621 "query.m"
                                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_135_135, &query__V_282_282);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_289_289 = mercury__string__f_43_43_2_f_0(query__V_282_282, query__V_275_275);
                                                  }
#line 620 "query.m"
                                                  {
#line 620 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__InclDescStr_26, &query__V_290_290);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_297_297 = mercury__string__f_43_43_2_f_0(query__V_290_290, query__V_289_289);
                                                  }
#line 620 "query.m"
                                                  {
#line 620 "query.m"
                                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_130_130, &query__V_298_298);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_305_305 = mercury__string__f_43_43_2_f_0(query__V_298_298, query__V_297_297);
                                                  }
#line 619 "query.m"
                                                  {
#line 619 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__CostKindStr_25, &query__V_306_306);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_313_313 = mercury__string__f_43_43_2_f_0(query__V_306_306, query__V_305_305);
                                                  }
#line 619 "query.m"
                                                  {
#line 619 "query.m"
                                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_125_125, &query__V_314_314);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_321_321 = mercury__string__f_43_43_2_f_0(query__V_314_314, query__V_313_313);
                                                  }
#line 618 "query.m"
                                                  {
#line 618 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__LimitStr_24, &query__V_322_322);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_329_329 = mercury__string__f_43_43_2_f_0(query__V_322_322, query__V_321_321);
                                                  }
#line 618 "query.m"
                                                  {
#line 618 "query.m"
                                                    mercury__string__format__format_char_component_nowidth_3_p_0(query__V_281_281, query__V_120_120, &query__V_330_330);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    query__V_337_337 = mercury__string__f_43_43_2_f_0(query__V_330_330, query__V_329_329);
                                                  }
#line 617 "query.m"
                                                  {
#line 617 "query.m"
                                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0(query__V_281_281, query__V_117_117, &query__V_338_338);
                                                  }
#line 616 "query.m"
                                                  {
#line 616 "query.m"
                                                    return query__CmdStr_4 = mercury__string__f_43_43_2_f_0(query__V_338_338, query__V_337_337);
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

#line 15322 "query.c"

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

#line 15371 "query.c"

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

#line 15400 "query.c"

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
    return (MR_Word) &query_scalar_common_2[9];
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
    return (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[8]);
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
#line 15831 "query.c"
    if (query__succeeded)
#line 491 "query.m"
      query__Time_6 = (MR_Integer) 1;
#line 15835 "query.c"
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
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &query_scalar_common_2[8])));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 20));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 4) = ((MR_Box) ((MR_Integer) 1));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 6) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 2 << (MR_Integer) 1)) | (((MR_Integer) 1 << (MR_Integer) 3)))))));
#line 472 "query.m"
      MR_hl_field(MR_mktag(0), query__HeadVar__2_2, 7) = ((MR_Box) (&query_scalar_common_2[9]));
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
                    query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[2]);
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
                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[3]);
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
                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[4]);
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
                                                                                            query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[5]);
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
                                                                                                query__MaybeCmd_4 = (MR_Word) MR_mkword(MR_mktag(1), &query_scalar_common_2[6]);
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
#line 20073 "query.c"
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
#line 390 "query.m"
        MR_String query__V_54_54;
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
#line 412 "query.m"
        {
#line 412 "query.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &query_scalar_common_2[1], query__Msg_15, &query__V_47_47);
        }
#line 411 "query.m"
        {
#line 411 "query.m"
          query__V_54_54 = mercury__string__f_43_43_2_f_0(query__V_47_47, (MR_String) "</H3>\n");
        }
#line 411 "query.m"
        {
#line 411 "query.m"
          *query__HTML_10 = mercury__string__f_43_43_2_f_0((MR_String) "<H3>AN EXCEPTION HAS OCCURRED: ", query__V_54_54);
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
