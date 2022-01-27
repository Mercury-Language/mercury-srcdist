/*
** Automatically generated from `report.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module report. */
/* :- implementation. */

/*
INIT mercury__report__init
ENDINIT
*/

#include "report.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 81 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4];

#line 84 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4];

#line 87 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_ancestor_desc_0_0;

#line 90 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1];

#line 93 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1];

#line 96 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1];

#line 99 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1];

#line 102 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0;

#line 105 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_desc_0_0[10];

#line 108 "report.c"
static const MR_ConstString report__report__field_names_call_site_desc_0_0[10];

#line 111 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_desc_0_0;

#line 114 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1];

#line 117 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1];

#line 120 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1];

#line 123 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1];

#line 126 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 129 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4];

#line 132 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4];

#line 135 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_dump_info_0_0;

#line 138 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1];

#line 141 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1];

#line 144 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1];

#line 147 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1];

#line 150 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0;

#line 153 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2];

#line 156 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2];

#line 159 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0;

#line 162 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1];

#line 165 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1];

#line 168 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1];

#line 171 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1];

#line 174 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0;

#line 177 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 180 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 183 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3];

#line 186 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3];

#line 189 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_perf_0_0;

#line 192 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1];

#line 195 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1];

#line 198 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1];

#line 201 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1];

#line 204 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 207 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6];

#line 210 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6];

#line 213 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_static_dump_info_0_0;

#line 216 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1];

#line 219 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1];

#line 222 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1];

#line 225 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1];

#line 228 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2];

#line 231 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2];

#line 234 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_callers_counts_0_0;

#line 237 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1];

#line 240 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1];

#line 243 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1];

#line 246 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1];

#line 249 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0;

#line 252 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 255 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 258 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3];

#line 261 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3];

#line 264 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_call_site_report_0_0;

#line 267 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1];

#line 270 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1];

#line 273 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1];

#line 276 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1];

#line 279 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0;

#line 282 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3];

#line 285 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3];

#line 288 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_desc_0_0;

#line 291 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1];

#line 294 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1];

#line 297 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1];

#line 300 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1];

#line 303 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 306 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3];

#line 309 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3];

#line 312 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_dump_info_0_0;

#line 315 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1];

#line 318 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1];

#line 321 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1];

#line 324 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1];

#line 327 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0;

#line 330 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2];

#line 333 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2];

#line 336 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_dynamic_report_0_0;

#line 339 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1];

#line 342 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1];

#line 345 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1];

#line 348 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1];

#line 351 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0;

#line 354 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3];

#line 357 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3];

#line 360 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_report_0_0;

#line 363 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1];

#line 366 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1];

#line 369 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1];

#line 372 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1];

#line 375 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3];

#line 378 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3];

#line 381 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_recursion_report_0_0;

#line 384 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1];

#line 387 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1];

#line 390 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1];

#line 393 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1];

#line 396 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 399 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 402 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0;

#line 405 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3];

#line 408 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3];

#line 411 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_report_0_0;

#line 414 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1];

#line 417 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1];

#line 420 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1];

#line 423 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1];

#line 426 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1];

#line 429 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0;

#line 432 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1];

#line 435 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_0;

#line 438 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0;

#line 441 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1];

#line 444 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_1;

#line 447 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0;

#line 450 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1];

#line 453 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_2;

#line 456 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0;

#line 459 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1];

#line 462 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_3;

#line 465 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0;

#line 468 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1];

#line 471 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_4;

#line 474 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0;

#line 477 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1];

#line 480 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_5;

#line 483 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0;

#line 486 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1];

#line 489 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_6;

#line 492 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0;

#line 495 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1];

#line 498 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_7;

#line 501 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0;

#line 504 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1];

#line 507 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_8;

#line 510 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0;

#line 513 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1];

#line 516 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_9;

#line 519 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0;

#line 522 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1];

#line 525 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_10;

#line 528 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0;

#line 531 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1];

#line 534 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_11;

#line 537 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0;

#line 540 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1];

#line 543 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_12;

#line 546 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0;

#line 549 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1];

#line 552 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_13;

#line 555 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 558 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1];

#line 561 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_14;

#line 564 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0;

#line 567 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1];

#line 570 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_15;

#line 573 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 576 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1];

#line 579 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_16;

#line 582 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0;

#line 585 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1];

#line 588 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_17;

#line 591 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0;

#line 594 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1];

#line 597 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_18;

#line 600 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1];

#line 603 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1];

#line 606 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1];

#line 609 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_3[16];

#line 612 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_deep_report_0[4];

#line 615 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_deep_report_0[19];

#line 618 "report.c"
static const MR_Integer report__report__functor_number_map_deep_report_0[19];

#line 621 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1];

#line 624 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0;

#line 627 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0;

#line 630 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1;

#line 633 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2];

#line 636 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2];

#line 639 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2];

#line 642 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 645 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 648 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 651 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 654 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 657 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 660 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3];

#line 663 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3];

#line 666 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_0;

#line 669 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1];

#line 672 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1];

#line 675 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_1;

#line 678 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1];

#line 681 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1];

#line 684 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_2;

#line 687 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1];

#line 690 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1];

#line 693 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1];

#line 696 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_gs_field_info_2[3];

#line 699 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3];

#line 702 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3];

#line 705 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_inheritable_perf_0_0[13];

#line 708 "report.c"
static const MR_ConstString report__report__field_names_inheritable_perf_0_0[13];

#line 711 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_inheritable_perf_0_0;

#line 714 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1];

#line 717 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1];

#line 720 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1];

#line 723 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1];

#line 726 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0;

#line 729 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1;

#line 732 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2];

#line 735 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2];

#line 738 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2];

#line 741 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_menu_report_0_0[10];

#line 744 "report.c"
static const MR_ConstString report__report__field_names_menu_report_0_0[10];

#line 747 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_menu_report_0_0;

#line 750 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1];

#line 753 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1];

#line 756 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1];

#line 759 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1];

#line 762 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1];

#line 765 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0;

#line 768 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2];

#line 771 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2];

#line 774 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_active_0_0;

#line 777 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1];

#line 780 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1];

#line 783 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1];

#line 786 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1];

#line 789 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2];

#line 792 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2];

#line 795 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_getter_setters_report_0_0;

#line 798 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1];

#line 801 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1];

#line 804 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1];

#line 807 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1];

#line 810 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0;

#line 813 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1;

#line 816 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2];

#line 819 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2];

#line 822 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2];

#line 825 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2];

#line 828 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2];

#line 831 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_rep_report_0_0;

#line 834 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1];

#line 837 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1];

#line 840 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1];

#line 843 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1];

#line 846 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 849 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 852 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3];

#line 855 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3];

#line 858 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_report_0_0;

#line 861 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1];

#line 864 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1];

#line 867 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1];

#line 870 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1];

#line 873 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2];

#line 876 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2];

#line 879 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_normal_callee_id_0_0;

#line 882 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1];

#line 885 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1];

#line 888 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1];

#line 891 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1];

#line 894 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0;

#line 897 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_perf_row_data_1_0[9];

#line 900 "report.c"
static const MR_ConstString report__report__field_names_perf_row_data_1_0[9];

#line 903 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_perf_row_data_1_0;

#line 906 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1];

#line 909 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1];

#line 912 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1];

#line 915 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1];

#line 918 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2];

#line 921 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2];

#line 924 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_active_0_0;

#line 927 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1];

#line 930 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1];

#line 933 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1];

#line 936 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1];

#line 939 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 942 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1];

#line 945 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1];

#line 948 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_0;

#line 951 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1];

#line 954 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1];

#line 957 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_1;

#line 960 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 963 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 966 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1];

#line 969 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1];

#line 972 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_2;

#line 975 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1];

#line 978 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1];

#line 981 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_3;

#line 984 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1];

#line 987 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1];

#line 990 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1];

#line 993 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1];

#line 996 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_0[4];

#line 999 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4];

#line 1002 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4];

#line 1005 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 1008 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6];

#line 1011 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6];

#line 1014 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_report_0_0;

#line 1017 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1];

#line 1020 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1];

#line 1023 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1];

#line 1026 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1];

#line 1029 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6];

#line 1032 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6];

#line 1035 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_desc_0_0;

#line 1038 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1];

#line 1041 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1];

#line 1044 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1];

#line 1047 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1];

#line 1050 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

#line 1053 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1056 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1059 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_dynamic_dump_info_0_0[8];

#line 1062 "report.c"
static const MR_ConstString report__report__field_names_proc_dynamic_dump_info_0_0[8];

#line 1065 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_dynamic_dump_info_0_0;

#line 1068 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1];

#line 1071 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1];

#line 1074 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1];

#line 1077 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1];

#line 1080 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0;

#line 1083 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1;

#line 1086 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2];

#line 1089 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2];

#line 1092 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2];

#line 1095 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0;

#line 1098 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0;

#line 1101 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3];

#line 1104 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3];

#line 1107 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_report_0_0;

#line 1110 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1];

#line 1113 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1];

#line 1116 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1];

#line 1119 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1];

#line 1122 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_static_dump_info_0_0[8];

#line 1125 "report.c"
static const MR_ConstString report__report__field_names_proc_static_dump_info_0_0[8];

#line 1128 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_static_dump_info_0_0;

#line 1131 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1];

#line 1134 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1];

#line 1137 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1];

#line 1140 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1];

#line 1143 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 1146 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

#line 1149 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3];

#line 1152 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3];

#line 1155 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_procrep_coverage_info_0_0;

#line 1158 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1];

#line 1161 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1];

#line 1164 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1];

#line 1167 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1];

#line 1170 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1];

#line 1173 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1176 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1179 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0;

#line 1182 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5];

#line 1185 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5];

#line 1188 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_level_report_0_0;

#line 1191 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1];

#line 1194 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1];

#line 1197 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1];

#line 1200 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1];

#line 1203 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_0;

#line 1206 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 1209 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5];

#line 1212 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5];

#line 1215 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_1;

#line 1218 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2];

#line 1221 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2];

#line 1224 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_2;

#line 1227 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1];

#line 1230 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1];

#line 1233 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_3;

#line 1236 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0;

#line 1239 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1];

#line 1242 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1];

#line 1245 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_4;

#line 1248 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0;

#line 1251 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1];

#line 1254 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1];

#line 1257 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_5;

#line 1260 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1];

#line 1263 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1];

#line 1266 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1];

#line 1269 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3];

#line 1272 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_0[4];

#line 1275 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6];

#line 1278 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6];

#line 1281 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 1284 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0;

#line 1287 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4];

#line 1290 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4];

#line 1293 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_freq_data_0_0;

#line 1296 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1];

#line 1299 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1];

#line 1302 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1];

#line 1305 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1];

#line 1308 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0;

#line 1311 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3];

#line 1314 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3];

#line 1317 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_proc_freq_data_0_0;

#line 1320 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1];

#line 1323 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1];

#line 1326 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1];

#line 1329 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1];

#line 1332 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_0;

#line 1335 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_1;

#line 1338 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_2;

#line 1341 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1];

#line 1344 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1];

#line 1347 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_3;

#line 1350 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 1353 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1];

#line 1356 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1];

#line 1359 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_4;

#line 1362 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1];

#line 1365 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1];

#line 1368 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_5;

#line 1371 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_6;

#line 1374 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4];

#line 1377 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1];

#line 1380 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1];

#line 1383 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1];

#line 1386 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_simple_0[4];

#line 1389 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7];

#line 1392 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7];

#line 1395 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1];

#line 1398 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0;

#line 1401 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4];

#line 1404 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4];

#line 1407 "report.c"
static const MR_DuArgLocn report__report__field_locns_report_ordering_0_0[4];

#line 1410 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_report_ordering_0_0;

#line 1413 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1];

#line 1416 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1];

#line 1419 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1];

#line 1422 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1];

#line 1425 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2];

#line 1428 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2];

#line 1431 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_top_procs_report_0_0;

#line 1434 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1];

#line 1437 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1];

#line 1440 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1];

#line 1443 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1];

#line 1446 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2];

#line 1449 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2];

#line 1452 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_var_use_and_name_0_0;

#line 1455 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1];

#line 1458 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1];

#line 1461 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1];

#line 1464 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1];

#line 1467 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 1470 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1472 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1475 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 1478 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1480 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1482 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1485 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 1488 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1490 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1493 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 1496 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1498 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1500 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1503 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 1506 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1508 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1511 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 1514 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1516 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1518 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1521 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 1524 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1526 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1529 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 1532 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1534 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1536 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1539 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 1542 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1544 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1547 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 1550 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1552 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1554 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1557 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 1560 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1562 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1565 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 1568 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1570 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1572 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1575 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 1578 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1580 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1583 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 1586 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1588 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1590 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1593 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 1596 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1598 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1601 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 1604 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1606 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1608 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1611 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 1614 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1616 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1619 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 1622 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1624 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1626 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1629 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 1632 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1634 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1637 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 1640 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1642 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1644 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1647 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 1650 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1652 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1655 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 1658 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1660 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1662 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1665 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 1668 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1670 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1673 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 1676 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1678 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1680 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1683 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 1686 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1688 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1691 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 1694 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1696 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1698 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1701 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 1704 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1706 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1709 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 1712 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1714 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1716 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1719 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 1722 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1724 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1727 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 1730 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1732 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1734 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1737 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 1740 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1742 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1745 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 1748 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1750 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1752 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1755 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 1758 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1760 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1763 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 1766 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1768 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1770 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1773 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 1776 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1778 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1781 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 1784 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1786 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1788 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1791 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 1794 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1796 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1798 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1801 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 1804 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1806 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1808 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1810 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1813 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 1816 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1818 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1821 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 1824 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1826 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1828 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1831 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 1834 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1836 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1838 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1840 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1843 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 1846 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1848 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1850 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 1852 "report.c"
  MR_Box report__wrapper_arg_4,
#line 1854 "report.c"
  MR_Box report__wrapper_arg_5);

#line 1857 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 1860 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1862 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1865 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 1868 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1870 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1872 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1875 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 1878 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1880 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1882 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1885 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 1888 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1890 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1892 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1894 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1897 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 1900 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1902 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1905 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 1908 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1910 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1912 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1915 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 1918 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1920 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1923 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 1926 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1928 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1930 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1933 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 1936 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1938 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1941 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 1944 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1946 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1948 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1951 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 1954 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1956 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1959 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 1962 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1964 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1966 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1969 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 1972 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1974 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1977 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 1980 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1982 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1984 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1987 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 1990 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1992 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1995 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 1998 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2000 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2002 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2005 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 2008 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2010 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2013 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 2016 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2018 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2020 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2023 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 2026 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2028 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2031 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 2034 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2036 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2038 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2041 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 2044 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2046 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2049 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 2052 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2054 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2056 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2059 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 2062 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2064 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2067 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 2070 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2072 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2074 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2077 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 2080 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2082 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2085 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 2088 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2090 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2092 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2095 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 2098 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2100 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2102 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2105 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 2108 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2110 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 2112 "report.c"
  MR_Box report__wrapper_arg_3,
#line 2114 "report.c"
  MR_Box report__wrapper_arg_4);

#line 2117 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 2120 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2122 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2125 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 2128 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2130 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2132 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2135 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 2138 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2140 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2143 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 2146 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2148 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2150 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2153 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 2156 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2158 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2161 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 2164 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2166 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2168 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2171 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 2174 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2176 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2179 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 2182 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2184 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2186 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2189 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 2192 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2194 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2197 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 2200 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2202 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2204 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2207 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 2210 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2212 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2215 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 2218 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2220 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2222 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2225 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 2228 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2230 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2233 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 2236 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2238 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2240 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2243 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 2246 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2248 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2251 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 2254 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2256 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2258 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2261 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 2264 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2266 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2269 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 2272 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2274 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2276 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2279 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 2282 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2284 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2287 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 2290 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2292 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2294 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2297 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 2300 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2302 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2305 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 2308 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2310 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2312 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2315 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 2318 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2320 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2323 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 2326 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2328 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2330 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2333 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 2336 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2338 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2341 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 2344 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2346 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2348 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2351 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 2354 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2356 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2359 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 2362 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2364 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2366 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2369 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 2372 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2374 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2377 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 2380 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2382 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2384 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2387 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 2390 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2392 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2395 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 2398 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2400 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2402 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2405 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 2408 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2410 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2413 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 2416 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2418 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2420 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2423 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 2426 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2428 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2431 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 2434 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2436 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2438 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2441 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 2444 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2446 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2449 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 2452 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2454 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2456 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2459 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 2462 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2464 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2467 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 2470 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2472 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2474 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2477 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 2480 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2482 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2485 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 2488 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2490 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2492 "report.c"
  MR_Box report__wrapper_arg_3);


static /* final */ const MR_Box report_scalar_common_1[38][2];

static /* final */ const MR_Box report_scalar_common_2[23][3];

static /* final */ const MR_Box report_scalar_common_3[1][4];




static /* final */ const MR_Box report_scalar_common_1[38][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_desc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_var_use_and_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_info_1)),
    ((MR_Box) (&report__report__type_ctor_info_normal_callee_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_kind_and_callee_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_desc_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_call_site_report_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_dynamic_report_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_ancestor_desc_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_active_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[18]))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&report__report__type_ctor_info_inheritable_perf_0))
  },
  /* row 21 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[21]))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[1]))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&report_scalar_common_1[26]))
  },
  /* row 28 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_callers_counts_0))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_perf_0))
  },
  /* row 30 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 31 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row 32 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_module_active_0))
  },
  /* row 33 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report_scalar_common_1[32]))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 35 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0))
  },
  /* row 36 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&report_scalar_common_1[17]))
  },
  /* row 37 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box report_scalar_common_2[23][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_menu_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_clique_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_clique_recursion_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_types_frequency_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_program_modules_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_module_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_module_getter_setters_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_module_rep_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_top_procs_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_proc_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_procrep_coverage_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_proc_callers_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_proc_static_dump_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_proc_dynamic_dump_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_static_dump_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_dynamic_dump_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_clique_dump_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_dynamic_var_use_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&report_scalar_common_1[4])),
    ((MR_Box) (&report_scalar_common_1[17]))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&report_scalar_common_2[18]))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&report_scalar_common_2[19]))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_proc_freq_data_0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_freq_data_0))
  },
};

static /* final */ const MR_Box report_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};



#include "profile.mh"
#include "profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 2870 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_call_site_desc_0
};

#line 2878 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4] = {
  (MR_String) "ad_caller_clique_ptr",
  (MR_String) "ad_callee_clique_ptr",
  (MR_String) "ad_callee_pdesc",
  (MR_String) "ad_call_site_desc"
};

#line 2886 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_ancestor_desc_0_0 = {
  (MR_String) "ancestor_desc",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_ancestor_desc_0_0,
  report__report__field_names_ancestor_desc_0_0,
  NULL,
  NULL
};

#line 2901 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2906 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_ancestor_desc_0_0
  }
};

#line 2915 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2920 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1] = {
  (MR_Integer) 0
};

#line 2925 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_ancestor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____ancestor_desc_0_0_10001)),
  ((MR_Box) (report____Compare____ancestor_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "ancestor_desc",
  {
    report__report__du_name_ordered_ancestor_desc_0
  },
  {
    report__report__du_ptag_ordered_ancestor_desc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_ancestor_desc_0
};

#line 2946 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2954 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_desc_0_0[10] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0
};

#line 2968 "report.c"
static const MR_ConstString report__report__field_names_call_site_desc_0_0[10] = {
  (MR_String) "csdesc_css_ptr",
  (MR_String) "csdesc_container",
  (MR_String) "csdesc_file_name",
  (MR_String) "csdesc_line_number",
  (MR_String) "csdesc_caller_module_name",
  (MR_String) "csdesc_caller_uq_refined_name",
  (MR_String) "csdesc_caller_q_refined_name",
  (MR_String) "csdesc_slot_number",
  (MR_String) "csdesc_goal_path",
  (MR_String) "csdesc_maybe_callee"
};

#line 2982 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_desc_0_0 = {
  (MR_String) "call_site_desc",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_call_site_desc_0_0,
  report__report__field_names_call_site_desc_0_0,
  NULL,
  NULL
};

#line 2997 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3002 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_desc_0_0
  }
};

#line 3011 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3016 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1] = {
  (MR_Integer) 0
};

#line 3021 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_desc_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_desc",
  {
    report__report__du_name_ordered_call_site_desc_0
  },
  {
    report__report__du_ptag_ordered_call_site_desc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_desc_0
};

#line 3042 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

#line 3050 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 3058 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4] = {
  (MR_String) "csddi_csdptr",
  (MR_String) "csddi_caller_pdptr",
  (MR_String) "csddi_callee_pdptr",
  (MR_String) "csddi_own_perf"
};

#line 3066 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_dump_info_0_0 = {
  (MR_String) "call_site_dynamic_dump_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_call_site_dynamic_dump_info_0_0,
  report__report__field_names_call_site_dynamic_dump_info_0_0,
  NULL,
  NULL
};

#line 3081 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3086 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0
  }
};

#line 3095 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3100 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3105 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_dynamic_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_dynamic_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_dynamic_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_dynamic_dump_info",
  {
    report__report__du_name_ordered_call_site_dynamic_dump_info_0
  },
  {
    report__report__du_ptag_ordered_call_site_dynamic_dump_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_dynamic_dump_info_0
};

#line 3126 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_var_use_and_name_0
  }
};

#line 3134 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_var_use_and_name_0
};

#line 3140 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_String) "csdvui_total_cost",
  (MR_String) "csdvui_var_uses"
};

#line 3146 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0 = {
  (MR_String) "call_site_dynamic_var_use_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_call_site_dynamic_var_use_info_0_0,
  report__report__field_names_call_site_dynamic_var_use_info_0_0,
  NULL,
  NULL
};

#line 3161 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3166 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0
  }
};

#line 3175 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3180 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1] = {
  (MR_Integer) 0
};

#line 3185 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_dynamic_var_use_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_dynamic_var_use_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_dynamic_var_use_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_dynamic_var_use_info",
  {
    report__report__du_name_ordered_call_site_dynamic_var_use_info_0
  },
  {
    report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_dynamic_var_use_info_0
};

#line 3206 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_info_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_normal_callee_id_0
  }
};

#line 3214 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3222 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
  }
};

#line 3230 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 3237 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3] = {
  (MR_String) "csf_kind",
  (MR_String) "csf_summary_perf",
  (MR_String) "csf_sub_callees"
};

#line 3244 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_perf_0_0 = {
  (MR_String) "call_site_perf",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_call_site_perf_0_0,
  report__report__field_names_call_site_perf_0_0,
  NULL,
  NULL
};

#line 3259 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3264 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_perf_0_0
  }
};

#line 3273 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3278 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1] = {
  (MR_Integer) 0
};

#line 3283 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_perf_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_perf_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_perf",
  {
    report__report__du_name_ordered_call_site_perf_0
  },
  {
    report__report__du_ptag_ordered_call_site_perf_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_perf_0
};

#line 3304 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 3312 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
};

#line 3322 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6] = {
  (MR_String) "cssdi_cssptr",
  (MR_String) "cssdi_containing_psptr",
  (MR_String) "cssdi_slot_number",
  (MR_String) "cssdi_line_number",
  (MR_String) "cssdi_goal_path",
  (MR_String) "cssdi_callee"
};

#line 3332 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_static_dump_info_0_0 = {
  (MR_String) "call_site_static_dump_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_call_site_static_dump_info_0_0,
  report__report__field_names_call_site_static_dump_info_0_0,
  NULL,
  NULL
};

#line 3347 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3352 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_static_dump_info_0_0
  }
};

#line 3361 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3366 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3371 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_static_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_static_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_static_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_static_dump_info",
  {
    report__report__du_name_ordered_call_site_static_dump_info_0
  },
  {
    report__report__du_ptag_ordered_call_site_static_dump_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_static_dump_info_0
};

#line 3392 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3398 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2] = {
  (MR_String) "cc_static",
  (MR_String) "cc_dynamic"
};

#line 3404 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_callers_counts_0_0 = {
  (MR_String) "callers_counts",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_callers_counts_0_0,
  report__report__field_names_callers_counts_0_0,
  NULL,
  NULL
};

#line 3419 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3424 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_callers_counts_0_0
  }
};

#line 3433 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3438 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1] = {
  (MR_Integer) 0
};

#line 3443 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_callers_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____callers_counts_0_0_10001)),
  ((MR_Box) (report____Compare____callers_counts_0_0_10001)),
  (MR_String) "report",
  (MR_String) "callers_counts",
  {
    report__report__du_name_ordered_callers_counts_0
  },
  {
    report__report__du_ptag_ordered_callers_counts_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_callers_counts_0
};

#line 3464 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3472 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

#line 3480 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
  }
};

#line 3488 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 3495 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3] = {
  (MR_String) "ccsr_call_site_summary",
  (MR_String) "ccsr_kind_and_callee",
  (MR_String) "ccsr_callee_perfs"
};

#line 3502 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_call_site_report_0_0 = {
  (MR_String) "clique_call_site_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_call_site_report_0_0,
  report__report__field_names_clique_call_site_report_0_0,
  NULL,
  NULL
};

#line 3517 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3522 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_call_site_report_0_0
  }
};

#line 3531 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3536 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1] = {
  (MR_Integer) 0
};

#line 3541 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_call_site_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_call_site_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_call_site_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_call_site_report",
  {
    report__report__du_name_ordered_clique_call_site_report_0
  },
  {
    report__report__du_ptag_ordered_clique_call_site_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_call_site_report_0
};

#line 3562 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3570 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_proc_desc_0
};

#line 3577 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3] = {
  (MR_String) "cdesc_clique_ptr",
  (MR_String) "cdesc_entry_member",
  (MR_String) "cdesc_other_members"
};

#line 3584 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_desc_0_0 = {
  (MR_String) "clique_desc",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_desc_0_0,
  report__report__field_names_clique_desc_0_0,
  NULL,
  NULL
};

#line 3599 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3604 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_desc_0_0
  }
};

#line 3613 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3618 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1] = {
  (MR_Integer) 0
};

#line 3623 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_desc_0_0_10001)),
  ((MR_Box) (report____Compare____clique_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_desc",
  {
    report__report__du_name_ordered_clique_desc_0
  },
  {
    report__report__du_ptag_ordered_clique_desc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_desc_0
};

#line 3644 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 3652 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 3659 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3] = {
  (MR_String) "cdi_clique_desc",
  (MR_String) "cdi_caller_csd_ptr",
  (MR_String) "cdi_member_pdptrs"
};

#line 3666 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_dump_info_0_0 = {
  (MR_String) "clique_dump_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_dump_info_0_0,
  report__report__field_names_clique_dump_info_0_0,
  NULL,
  NULL
};

#line 3681 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3686 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_dump_info_0_0
  }
};

#line 3695 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3700 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3705 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____clique_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_dump_info",
  {
    report__report__du_name_ordered_clique_dump_info_0
  },
  {
    report__report__du_ptag_ordered_clique_dump_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_dump_info_0
};

#line 3726 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_call_site_report_0
  }
};

#line 3734 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0
};

#line 3740 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2] = {
  (MR_String) "cpdr_proc_summary",
  (MR_String) "cpdr_call_sites"
};

#line 3746 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_dynamic_report_0_0 = {
  (MR_String) "clique_proc_dynamic_report",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_proc_dynamic_report_0_0,
  report__report__field_names_clique_proc_dynamic_report_0_0,
  NULL,
  NULL
};

#line 3761 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3766 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_dynamic_report_0_0
  }
};

#line 3775 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3780 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1] = {
  (MR_Integer) 0
};

#line 3785 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_proc_dynamic_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_proc_dynamic_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_proc_dynamic_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_proc_dynamic_report",
  {
    report__report__du_name_ordered_clique_proc_dynamic_report_0
  },
  {
    report__report__du_ptag_ordered_clique_proc_dynamic_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_proc_dynamic_report_0
};

#line 3806 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0
  }
};

#line 3814 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0
};

#line 3821 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3] = {
  (MR_String) "cpr_proc_summary",
  (MR_String) "cpr_first_proc_dynamic",
  (MR_String) "cpr_other_proc_dynamics"
};

#line 3828 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_report_0_0 = {
  (MR_String) "clique_proc_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_proc_report_0_0,
  report__report__field_names_clique_proc_report_0_0,
  NULL,
  NULL
};

#line 3843 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3848 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_report_0_0
  }
};

#line 3857 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3862 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 3867 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_proc_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_proc_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_proc_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_proc_report",
  {
    report__report__du_name_ordered_clique_proc_report_0
  },
  {
    report__report__du_ptag_ordered_clique_proc_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_proc_report_0
};

#line 3888 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3895 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3] = {
  (MR_String) "crr_clique_ptr",
  (MR_String) "crr_recursion_type",
  (MR_String) "crr_num_procs"
};

#line 3902 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_recursion_report_0_0 = {
  (MR_String) "clique_recursion_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_recursion_report_0_0,
  report__report__field_names_clique_recursion_report_0_0,
  NULL,
  NULL
};

#line 3917 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3922 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_recursion_report_0_0
  }
};

#line 3931 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3936 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1] = {
  (MR_Integer) 0
};

#line 3941 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_recursion_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_recursion_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_recursion_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_recursion_report",
  {
    report__report__du_name_ordered_clique_recursion_report_0
  },
  {
    report__report__du_ptag_ordered_clique_recursion_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_recursion_report_0
};

#line 3962 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_ancestor_desc_0
  }
};

#line 3970 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0
  }
};

#line 3978 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_report_0
  }
};

#line 3986 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_report_0
};

#line 3993 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3] = {
  (MR_String) "cr_clique_ptr",
  (MR_String) "cr_ancestor_call_sites",
  (MR_String) "cr_clique_procs"
};

#line 4000 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_report_0_0 = {
  (MR_String) "clique_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_clique_report_0_0,
  report__report__field_names_clique_report_0_0,
  NULL,
  NULL
};

#line 4015 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4020 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_report_0_0
  }
};

#line 4029 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4034 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1] = {
  (MR_Integer) 0
};

#line 4039 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_report",
  {
    report__report__du_name_ordered_clique_report_0
  },
  {
    report__report__du_ptag_ordered_clique_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_report_0
};

#line 4060 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1] = {
  (MR_Integer) 0
};

#line 4065 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0 = {
  (MR_String) "data_struct_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4072 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_data_struct_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____data_struct_name_0_0_10001)),
  ((MR_Box) (report____Compare____data_struct_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "data_struct_name",
  {
    &report__report__notag_functor_desc_data_struct_name_0
  },
  {
    &report__report__notag_functor_desc_data_struct_name_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_data_struct_name_0
};

#line 4093 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_message_report_0
};

#line 4098 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_0 = {
  (MR_String) "report_message",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_deep_report_0_0,
  NULL,
  NULL,
  NULL
};

#line 4113 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_menu_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4122 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0
};

#line 4127 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_1 = {
  (MR_String) "report_menu",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  report__report__field_types_deep_report_0_1,
  NULL,
  NULL,
  NULL
};

#line 4142 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4151 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0
};

#line 4156 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_2 = {
  (MR_String) "report_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  report__report__field_types_deep_report_0_2,
  NULL,
  NULL,
  NULL
};

#line 4171 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_recursion_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4180 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0
};

#line 4185 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_3 = {
  (MR_String) "report_clique_recursion_costs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  report__report__field_types_deep_report_0_3,
  NULL,
  NULL,
  NULL
};

#line 4200 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_types_frequency_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4209 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0
};

#line 4214 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_4 = {
  (MR_String) "report_recursion_types_frequency",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__field_types_deep_report_0_4,
  NULL,
  NULL,
  NULL
};

#line 4229 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_program_modules_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4238 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0
};

#line 4243 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_5 = {
  (MR_String) "report_program_modules",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  report__report__field_types_deep_report_0_5,
  NULL,
  NULL,
  NULL
};

#line 4258 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4267 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0
};

#line 4272 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_6 = {
  (MR_String) "report_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  report__report__field_types_deep_report_0_6,
  NULL,
  NULL,
  NULL
};

#line 4287 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_getter_setters_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4296 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0
};

#line 4301 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_7 = {
  (MR_String) "report_module_getter_setters",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  report__report__field_types_deep_report_0_7,
  NULL,
  NULL,
  NULL
};

#line 4316 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_rep_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4325 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0
};

#line 4330 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_8 = {
  (MR_String) "report_module_rep",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  report__report__field_types_deep_report_0_8,
  NULL,
  NULL,
  NULL
};

#line 4345 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_top_procs_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4354 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0
};

#line 4359 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_9 = {
  (MR_String) "report_top_procs",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  report__report__field_types_deep_report_0_9,
  NULL,
  NULL,
  NULL
};

#line 4374 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4383 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0
};

#line 4388 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_10 = {
  (MR_String) "report_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  report__report__field_types_deep_report_0_10,
  NULL,
  NULL,
  NULL
};

#line 4403 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_procrep_coverage_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4412 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0
};

#line 4417 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_11 = {
  (MR_String) "report_procrep_coverage",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  report__report__field_types_deep_report_0_11,
  NULL,
  NULL,
  NULL
};

#line 4432 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_callers_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4441 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0
};

#line 4446 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_12 = {
  (MR_String) "report_proc_callers",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  report__report__field_types_deep_report_0_12,
  NULL,
  NULL,
  NULL
};

#line 4461 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4470 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4475 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_13 = {
  (MR_String) "report_proc_static_dump",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  report__report__field_types_deep_report_0_13,
  NULL,
  NULL,
  NULL
};

#line 4490 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4499 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4504 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_14 = {
  (MR_String) "report_proc_dynamic_dump",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 14,
  report__report__field_types_deep_report_0_14,
  NULL,
  NULL,
  NULL
};

#line 4519 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4528 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4533 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_15 = {
  (MR_String) "report_call_site_static_dump",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 15,
  report__report__field_types_deep_report_0_15,
  NULL,
  NULL,
  NULL
};

#line 4548 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4557 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4562 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_16 = {
  (MR_String) "report_call_site_dynamic_dump",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 16,
  report__report__field_types_deep_report_0_16,
  NULL,
  NULL,
  NULL
};

#line 4577 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4586 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0
};

#line 4591 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_17 = {
  (MR_String) "report_clique_dump",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 17,
  report__report__field_types_deep_report_0_17,
  NULL,
  NULL,
  NULL
};

#line 4606 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_var_use_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4615 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0
};

#line 4620 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_18 = {
  (MR_String) "report_call_site_dynamic_var_use",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 18,
  report__report__field_types_deep_report_0_18,
  NULL,
  NULL,
  NULL
};

#line 4635 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1] = {
  &report__report__du_functor_desc_deep_report_0_0
};

#line 4640 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1] = {
  &report__report__du_functor_desc_deep_report_0_1
};

#line 4645 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1] = {
  &report__report__du_functor_desc_deep_report_0_2
};

#line 4650 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_3[16] = {
  &report__report__du_functor_desc_deep_report_0_3,
  &report__report__du_functor_desc_deep_report_0_4,
  &report__report__du_functor_desc_deep_report_0_5,
  &report__report__du_functor_desc_deep_report_0_6,
  &report__report__du_functor_desc_deep_report_0_7,
  &report__report__du_functor_desc_deep_report_0_8,
  &report__report__du_functor_desc_deep_report_0_9,
  &report__report__du_functor_desc_deep_report_0_10,
  &report__report__du_functor_desc_deep_report_0_11,
  &report__report__du_functor_desc_deep_report_0_12,
  &report__report__du_functor_desc_deep_report_0_13,
  &report__report__du_functor_desc_deep_report_0_14,
  &report__report__du_functor_desc_deep_report_0_15,
  &report__report__du_functor_desc_deep_report_0_16,
  &report__report__du_functor_desc_deep_report_0_17,
  &report__report__du_functor_desc_deep_report_0_18
};

#line 4670 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_deep_report_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_deep_report_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_deep_report_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_deep_report_0_2
  },
  {
    (MR_Integer) 16,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    report__report__du_stag_ordered_deep_report_0_3
  }
};

#line 4694 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_deep_report_0[19] = {
  &report__report__du_functor_desc_deep_report_0_16,
  &report__report__du_functor_desc_deep_report_0_18,
  &report__report__du_functor_desc_deep_report_0_15,
  &report__report__du_functor_desc_deep_report_0_2,
  &report__report__du_functor_desc_deep_report_0_17,
  &report__report__du_functor_desc_deep_report_0_3,
  &report__report__du_functor_desc_deep_report_0_1,
  &report__report__du_functor_desc_deep_report_0_0,
  &report__report__du_functor_desc_deep_report_0_6,
  &report__report__du_functor_desc_deep_report_0_7,
  &report__report__du_functor_desc_deep_report_0_8,
  &report__report__du_functor_desc_deep_report_0_10,
  &report__report__du_functor_desc_deep_report_0_12,
  &report__report__du_functor_desc_deep_report_0_14,
  &report__report__du_functor_desc_deep_report_0_13,
  &report__report__du_functor_desc_deep_report_0_11,
  &report__report__du_functor_desc_deep_report_0_5,
  &report__report__du_functor_desc_deep_report_0_4,
  &report__report__du_functor_desc_deep_report_0_9
};

#line 4717 "report.c"
static const MR_Integer report__report__functor_number_map_deep_report_0[19] = {
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 17,
  (MR_Integer) 16,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 18,
  (MR_Integer) 11,
  (MR_Integer) 15,
  (MR_Integer) 12,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 4740 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_deep_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____deep_report_0_0_10001)),
  ((MR_Box) (report____Compare____deep_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "deep_report",
  {
    report__report__du_name_ordered_deep_report_0
  },
  {
    report__report__du_ptag_ordered_deep_report_0
  },
  (MR_Integer) 19,
  (MR_Integer) 4,
  report__report__functor_number_map_deep_report_0
};

#line 4761 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1] = {
  (MR_Integer) 0
};

#line 4766 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0 = {
  (MR_String) "field_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4773 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_field_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____field_name_0_0_10001)),
  ((MR_Box) (report____Compare____field_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "field_name",
  {
    &report__report__notag_functor_desc_field_name_0
  },
  {
    &report__report__notag_functor_desc_field_name_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_field_name_0
};

#line 4794 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0 = {
  (MR_String) "getter",
  (MR_Integer) 0
};

#line 4800 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1 = {
  (MR_String) "setter",
  (MR_Integer) 1
};

#line 4806 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4812 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4818 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4824 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_getter_or_setter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____getter_or_setter_0_0_10001)),
  ((MR_Box) (report____Compare____getter_or_setter_0_0_10001)),
  (MR_String) "report",
  (MR_String) "getter_or_setter",
  {
    report__report__enum_name_ordered_getter_or_setter_0
  },
  {
    report__report__enum_value_ordered_getter_or_setter_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_getter_or_setter_0
};

#line 4845 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 4854 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  }
};

#line 4863 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_ds_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (report____Unify____gs_ds_map_1_0_10001)),
  ((MR_Box) (report____Compare____gs_ds_map_1_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_ds_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4884 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 4892 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4901 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4910 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4919 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_ds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_ds_map_0_0_10001)),
  ((MR_Box) (report____Compare____gs_ds_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_ds_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4940 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 4947 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3] = {
  (MR_String) "gsf_both_getter",
  (MR_String) "gsf_both_setter",
  (MR_String) "gsf_both_summary"
};

#line 4954 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_0 = {
  (MR_String) "gs_field_both",
  (MR_Integer) 3,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_gs_field_info_2_0,
  report__report__field_names_gs_field_info_2_0,
  NULL,
  NULL
};

#line 4969 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4974 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1] = {
  (MR_String) "gsf_getter"
};

#line 4979 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_1 = {
  (MR_String) "gs_field_getter",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  report__report__field_types_gs_field_info_2_1,
  report__report__field_names_gs_field_info_2_1,
  NULL,
  NULL
};

#line 4994 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4999 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1] = {
  (MR_String) "gsf_setter"
};

#line 5004 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_2 = {
  (MR_String) "gs_field_setter",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  report__report__field_types_gs_field_info_2_2,
  report__report__field_names_gs_field_info_2_2,
  NULL,
  NULL
};

#line 5019 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1] = {
  &report__report__du_functor_desc_gs_field_info_2_0
};

#line 5024 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1] = {
  &report__report__du_functor_desc_gs_field_info_2_1
};

#line 5029 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1] = {
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5034 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_gs_field_info_2[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_gs_field_info_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_gs_field_info_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_gs_field_info_2_2
  }
};

#line 5053 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3] = {
  &report__report__du_functor_desc_gs_field_info_2_0,
  &report__report__du_functor_desc_gs_field_info_2_1,
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5060 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 5067 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____gs_field_info_2_0_10001)),
  ((MR_Box) (report____Compare____gs_field_info_2_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_info",
  {
    report__report__du_name_ordered_gs_field_info_2
  },
  {
    report__report__du_ptag_ordered_gs_field_info_2
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  report__report__functor_number_map_gs_field_info_2
};

#line 5088 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_field_info_0_0_10001)),
  ((MR_Box) (report____Compare____gs_field_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5109 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (report____Unify____gs_field_map_1_0_10001)),
  ((MR_Box) (report____Compare____gs_field_map_1_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5130 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_field_map_0_0_10001)),
  ((MR_Box) (report____Compare____gs_field_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5151 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_inheritable_perf_0_0[13] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_time_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_memory_0
};

#line 5168 "report.c"
static const MR_ConstString report__report__field_names_inheritable_perf_0_0[13] = {
  (MR_String) "perf_row_ticks",
  (MR_String) "perf_row_time",
  (MR_String) "perf_row_time_percent",
  (MR_String) "perf_row_time_percall",
  (MR_String) "perf_row_callseqs",
  (MR_String) "perf_row_callseqs_percent",
  (MR_String) "perf_row_callseqs_percall",
  (MR_String) "perf_row_allocs",
  (MR_String) "perf_row_allocs_percent",
  (MR_String) "perf_row_allocs_percall",
  (MR_String) "perf_row_mem",
  (MR_String) "perf_row_mem_percent",
  (MR_String) "perf_row_mem_percall"
};

#line 5185 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_inheritable_perf_0_0 = {
  (MR_String) "inheritable_perf",
  (MR_Integer) 13,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_inheritable_perf_0_0,
  report__report__field_names_inheritable_perf_0_0,
  NULL,
  NULL
};

#line 5200 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5205 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_inheritable_perf_0_0
  }
};

#line 5214 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5219 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1] = {
  (MR_Integer) 0
};

#line 5224 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_inheritable_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____inheritable_perf_0_0_10001)),
  ((MR_Box) (report____Compare____inheritable_perf_0_0_10001)),
  (MR_String) "report",
  (MR_String) "inheritable_perf",
  {
    report__report__du_name_ordered_inheritable_perf_0
  },
  {
    report__report__du_ptag_ordered_inheritable_perf_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_inheritable_perf_0
};

#line 5245 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0 = {
  (MR_String) "do_not_have_module_rep",
  (MR_Integer) 0
};

#line 5251 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1 = {
  (MR_String) "have_module_rep",
  (MR_Integer) 1
};

#line 5257 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5263 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5269 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5275 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_maybe_have_module_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____maybe_have_module_rep_0_0_10001)),
  ((MR_Box) (report____Compare____maybe_have_module_rep_0_0_10001)),
  (MR_String) "report",
  (MR_String) "maybe_have_module_rep",
  {
    report__report__enum_name_ordered_maybe_have_module_rep_0
  },
  {
    report__report__enum_value_ordered_maybe_have_module_rep_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_maybe_have_module_rep_0
};

#line 5296 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_menu_report_0_0[10] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 5310 "report.c"
static const MR_ConstString report__report__field_names_menu_report_0_0[10] = {
  (MR_String) "menu_program_name",
  (MR_String) "menu_quanta_per_sec",
  (MR_String) "menu_user_quanta",
  (MR_String) "menu_inst_quanta",
  (MR_String) "menu_num_callseqs",
  (MR_String) "menu_num_csd",
  (MR_String) "menu_num_css",
  (MR_String) "menu_num_pd",
  (MR_String) "menu_num_ps",
  (MR_String) "menu_num_clique"
};

#line 5324 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_menu_report_0_0 = {
  (MR_String) "menu_report",
  (MR_Integer) 10,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_menu_report_0_0,
  report__report__field_names_menu_report_0_0,
  NULL,
  NULL
};

#line 5339 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5344 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_menu_report_0_0
  }
};

#line 5353 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5358 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1] = {
  (MR_Integer) 0
};

#line 5363 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_menu_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____menu_report_0_0_10001)),
  ((MR_Box) (report____Compare____menu_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "menu_report",
  {
    report__report__du_name_ordered_menu_report_0
  },
  {
    report__report__du_ptag_ordered_menu_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_menu_report_0
};

#line 5384 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1] = {
  (MR_Integer) 0
};

#line 5389 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0 = {
  (MR_String) "message_report",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 5396 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_message_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____message_report_0_0_10001)),
  ((MR_Box) (report____Compare____message_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "message_report",
  {
    &report__report__notag_functor_desc_message_report_0
  },
  {
    &report__report__notag_functor_desc_message_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_message_report_0
};

#line 5417 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_is_active_0
};

#line 5423 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2] = {
  (MR_String) "ma_module_name",
  (MR_String) "ma_is_active"
};

#line 5429 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_active_0_0 = {
  (MR_String) "module_active",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_module_active_0_0,
  report__report__field_names_module_active_0_0,
  NULL,
  NULL
};

#line 5444 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5449 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_active_0_0
  }
};

#line 5458 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5463 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1] = {
  (MR_Integer) 0
};

#line 5468 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_active_0_0_10001)),
  ((MR_Box) (report____Compare____module_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_active",
  {
    report__report__du_name_ordered_module_active_0
  },
  {
    report__report__du_ptag_ordered_module_active_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_active_0
};

#line 5489 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
};

#line 5495 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2] = {
  (MR_String) "mgsr_module_name",
  (MR_String) "mgsr_procs"
};

#line 5501 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_getter_setters_report_0_0 = {
  (MR_String) "module_getter_setters_report",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_module_getter_setters_report_0_0,
  report__report__field_names_module_getter_setters_report_0_0,
  NULL,
  NULL
};

#line 5516 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5521 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_getter_setters_report_0_0
  }
};

#line 5530 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5535 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1] = {
  (MR_Integer) 0
};

#line 5540 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_getter_setters_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_getter_setters_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_getter_setters_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_getter_setters_report",
  {
    report__report__du_name_ordered_module_getter_setters_report_0
  },
  {
    report__report__du_ptag_ordered_module_getter_setters_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_getter_setters_report_0
};

#line 5561 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0 = {
  (MR_String) "module_is_active",
  (MR_Integer) 0
};

#line 5567 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1 = {
  (MR_String) "module_is_not_active",
  (MR_Integer) 1
};

#line 5573 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5579 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5585 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5591 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____module_is_active_0_0_10001)),
  ((MR_Box) (report____Compare____module_is_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_is_active",
  {
    report__report__enum_name_ordered_module_is_active_0
  },
  {
    report__report__enum_value_ordered_module_is_active_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_module_is_active_0
};

#line 5612 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5618 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2] = {
  (MR_String) "mrr_module_name",
  (MR_String) "mrr_report"
};

#line 5624 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_rep_report_0_0 = {
  (MR_String) "module_rep_report",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_module_rep_report_0_0,
  report__report__field_names_module_rep_report_0_0,
  NULL,
  NULL
};

#line 5639 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5644 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_rep_report_0_0
  }
};

#line 5653 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5658 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1] = {
  (MR_Integer) 0
};

#line 5663 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_rep_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_rep_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_rep_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_rep_report",
  {
    report__report__du_name_ordered_module_rep_report_0
  },
  {
    report__report__du_ptag_ordered_module_rep_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_rep_report_0
};

#line 5684 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

#line 5692 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
  }
};

#line 5700 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_maybe_have_module_rep_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
};

#line 5707 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3] = {
  (MR_String) "mr_module_name",
  (MR_String) "mr_have_module_rep",
  (MR_String) "mr_procs"
};

#line 5714 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_report_0_0 = {
  (MR_String) "module_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_module_report_0_0,
  report__report__field_names_module_report_0_0,
  NULL,
  NULL
};

#line 5729 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5734 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_report_0_0
  }
};

#line 5743 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5748 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1] = {
  (MR_Integer) 0
};

#line 5753 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_report",
  {
    report__report__du_name_ordered_module_report_0
  },
  {
    report__report__du_ptag_ordered_module_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_report_0
};

#line 5774 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5780 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2] = {
  (MR_String) "nci_callee_desc",
  (MR_String) "nci_type_subst"
};

#line 5786 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_normal_callee_id_0_0 = {
  (MR_String) "normal_callee_id",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_normal_callee_id_0_0,
  report__report__field_names_normal_callee_id_0_0,
  NULL,
  NULL
};

#line 5801 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5806 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_normal_callee_id_0_0
  }
};

#line 5815 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5820 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1] = {
  (MR_Integer) 0
};

#line 5825 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_normal_callee_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____normal_callee_id_0_0_10001)),
  ((MR_Box) (report____Compare____normal_callee_id_0_0_10001)),
  (MR_String) "report",
  (MR_String) "normal_callee_id",
  {
    report__report__du_name_ordered_normal_callee_id_0
  },
  {
    report__report__du_ptag_ordered_normal_callee_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_normal_callee_id_0
};

#line 5846 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_inheritable_perf_0
  }
};

#line 5854 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_perf_row_data_1_0[9] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_inheritable_perf_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0
};

#line 5867 "report.c"
static const MR_ConstString report__report__field_names_perf_row_data_1_0[9] = {
  (MR_String) "perf_row_subject",
  (MR_String) "perf_row_calls",
  (MR_String) "perf_row_exits",
  (MR_String) "perf_row_fails",
  (MR_String) "perf_row_redos",
  (MR_String) "perf_row_excps",
  (MR_String) "perf_row_bytes_per_word",
  (MR_String) "perf_row_self",
  (MR_String) "perf_row_maybe_total"
};

#line 5880 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_perf_row_data_1_0 = {
  (MR_String) "perf_row_data",
  (MR_Integer) 9,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_perf_row_data_1_0,
  report__report__field_names_perf_row_data_1_0,
  NULL,
  NULL
};

#line 5895 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5900 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_perf_row_data_1_0
  }
};

#line 5909 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5914 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1] = {
  (MR_Integer) 0
};

#line 5919 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_perf_row_data_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____perf_row_data_1_0_10001)),
  ((MR_Box) (report____Compare____perf_row_data_1_0_10001)),
  (MR_String) "report",
  (MR_String) "perf_row_data",
  {
    report__report__du_name_ordered_perf_row_data_1
  },
  {
    report__report__du_ptag_ordered_perf_row_data_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_perf_row_data_1
};

#line 5940 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_is_active_0
};

#line 5946 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2] = {
  (MR_String) "pa_proc_desc",
  (MR_String) "pa_is_active"
};

#line 5952 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_active_0_0 = {
  (MR_String) "proc_active",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_active_0_0,
  report__report__field_names_proc_active_0_0,
  NULL,
  NULL
};

#line 5967 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5972 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_active_0_0
  }
};

#line 5981 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5986 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1] = {
  (MR_Integer) 0
};

#line 5991 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_active_0_0_10001)),
  ((MR_Box) (report____Compare____proc_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_active",
  {
    report__report__du_name_ordered_proc_active_0
  },
  {
    report__report__du_ptag_ordered_proc_active_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_active_0
};

#line 6012 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
  }
};

#line 6020 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 6025 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1] = {
  (MR_String) "pc_caller_call_sites"
};

#line 6030 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_0 = {
  (MR_String) "proc_caller_call_sites",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_callers_0_0,
  report__report__field_names_proc_callers_0_0,
  NULL,
  NULL
};

#line 6045 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 6050 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1] = {
  (MR_String) "pc_caller_procedures"
};

#line 6055 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_1 = {
  (MR_String) "proc_caller_procedures",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  report__report__field_types_proc_callers_0_1,
  report__report__field_names_proc_callers_0_1,
  NULL,
  NULL
};

#line 6070 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6078 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0
  }
};

#line 6086 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0
};

#line 6091 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1] = {
  (MR_String) "pc_caller_modules"
};

#line 6096 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_2 = {
  (MR_String) "proc_caller_modules",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  report__report__field_types_proc_callers_0_2,
  report__report__field_names_proc_callers_0_2,
  NULL,
  NULL
};

#line 6111 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 6116 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1] = {
  (MR_String) "pc_caller_cliques"
};

#line 6121 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_3 = {
  (MR_String) "proc_caller_cliques",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  report__report__field_types_proc_callers_0_3,
  report__report__field_names_proc_callers_0_3,
  NULL,
  NULL
};

#line 6136 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_0_0
};

#line 6141 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1] = {
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6146 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1] = {
  &report__report__du_functor_desc_proc_callers_0_2
};

#line 6151 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1] = {
  &report__report__du_functor_desc_proc_callers_0_3
};

#line 6156 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_0_3
  }
};

#line 6180 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4] = {
  &report__report__du_functor_desc_proc_callers_0_0,
  &report__report__du_functor_desc_proc_callers_0_3,
  &report__report__du_functor_desc_proc_callers_0_2,
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6188 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 6196 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_callers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_callers_0_0_10001)),
  ((MR_Box) (report____Compare____proc_callers_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_callers",
  {
    report__report__du_name_ordered_proc_callers_0
  },
  {
    report__report__du_ptag_ordered_proc_callers_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_callers_0
};

#line 6217 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6225 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_callers_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 6235 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6] = {
  (MR_String) "pc_proc_desc",
  (MR_String) "pc_callers",
  (MR_String) "pc_batch_number",
  (MR_String) "pc_callers_per_batch",
  (MR_String) "pc_contour_exclusion",
  (MR_String) "pc_contour_warn_message"
};

#line 6245 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_report_0_0 = {
  (MR_String) "proc_callers_report",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_callers_report_0_0,
  report__report__field_names_proc_callers_report_0_0,
  NULL,
  NULL
};

#line 6260 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6265 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_report_0_0
  }
};

#line 6274 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6279 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1] = {
  (MR_Integer) 0
};

#line 6284 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_callers_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_callers_report_0_0_10001)),
  ((MR_Box) (report____Compare____proc_callers_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_callers_report",
  {
    report__report__du_name_ordered_proc_callers_report_0
  },
  {
    report__report__du_ptag_ordered_proc_callers_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_callers_report_0
};

#line 6305 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 6315 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6] = {
  (MR_String) "pdesc_ps_ptr",
  (MR_String) "pdesc_file_name",
  (MR_String) "pdesc_line_number",
  (MR_String) "pdesc_module_name",
  (MR_String) "pdesc_uq_refined_name",
  (MR_String) "pdesc_q_refined_name"
};

#line 6325 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_desc_0_0 = {
  (MR_String) "proc_desc",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_desc_0_0,
  report__report__field_names_proc_desc_0_0,
  NULL,
  NULL
};

#line 6340 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6345 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_desc_0_0
  }
};

#line 6354 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6359 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1] = {
  (MR_Integer) 0
};

#line 6364 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_desc_0_0_10001)),
  ((MR_Box) (report____Compare____proc_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_desc",
  {
    report__report__du_name_ordered_proc_desc_0
  },
  {
    report__report__du_ptag_ordered_proc_desc_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_desc_0
};

#line 6385 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 6393 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 6401 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__list__ti_list_1coverage__type_ctor_info_coverage_point_0
  }
};

#line 6409 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_dynamic_dump_info_0_0[8] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0
};

#line 6421 "report.c"
static const MR_ConstString report__report__field_names_proc_dynamic_dump_info_0_0[8] = {
  (MR_String) "pddi_pdptr",
  (MR_String) "pddi_psptr",
  (MR_String) "pddi_ps_raw_name",
  (MR_String) "pddi_ps_module_name",
  (MR_String) "pddi_ps_uq_refined_name",
  (MR_String) "pddi_ps_q_refined_name",
  (MR_String) "pddi_call_sites",
  (MR_String) "pddi_coverage_points"
};

#line 6433 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_dynamic_dump_info_0_0 = {
  (MR_String) "proc_dynamic_dump_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_dynamic_dump_info_0_0,
  report__report__field_names_proc_dynamic_dump_info_0_0,
  NULL,
  NULL
};

#line 6448 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6453 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_dynamic_dump_info_0_0
  }
};

#line 6462 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6467 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6472 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_dynamic_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_dynamic_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____proc_dynamic_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_dynamic_dump_info",
  {
    report__report__du_name_ordered_proc_dynamic_dump_info_0
  },
  {
    report__report__du_ptag_ordered_proc_dynamic_dump_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_dynamic_dump_info_0
};

#line 6493 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0 = {
  (MR_String) "proc_is_active",
  (MR_Integer) 0
};

#line 6499 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1 = {
  (MR_String) "proc_is_not_active",
  (MR_Integer) 1
};

#line 6505 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6511 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6517 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 6523 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____proc_is_active_0_0_10001)),
  ((MR_Box) (report____Compare____proc_is_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_is_active",
  {
    report__report__enum_name_ordered_proc_is_active_0
  },
  {
    report__report__enum_value_ordered_proc_is_active_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_is_active_0
};

#line 6544 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_callers_counts_0
  }
};

#line 6552 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_perf_0
  }
};

#line 6560 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_call_site_perf_0
};

#line 6567 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3] = {
  (MR_String) "proc_callers_summary",
  (MR_String) "proc_summary",
  (MR_String) "proc_call_site_summaries"
};

#line 6574 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_report_0_0 = {
  (MR_String) "proc_report",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_report_0_0,
  report__report__field_names_proc_report_0_0,
  NULL,
  NULL
};

#line 6589 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6594 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_report_0_0
  }
};

#line 6603 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6608 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 6613 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_report_0_0_10001)),
  ((MR_Box) (report____Compare____proc_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_report",
  {
    report__report__du_name_ordered_proc_report_0
  },
  {
    report__report__du_ptag_ordered_proc_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_report_0
};

#line 6634 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_static_dump_info_0_0[8] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 6646 "report.c"
static const MR_ConstString report__report__field_names_proc_static_dump_info_0_0[8] = {
  (MR_String) "psdi_psptr",
  (MR_String) "psdi_raw_name",
  (MR_String) "psdi_uq_refined_name",
  (MR_String) "psdi_q_refined_name",
  (MR_String) "psdi_filename",
  (MR_String) "psdi_linenumber",
  (MR_String) "psdi_num_call_sites",
  (MR_String) "psdi_num_coverage_points"
};

#line 6658 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_static_dump_info_0_0 = {
  (MR_String) "proc_static_dump_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_proc_static_dump_info_0_0,
  report__report__field_names_proc_static_dump_info_0_0,
  NULL,
  NULL
};

#line 6673 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6678 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_static_dump_info_0_0
  }
};

#line 6687 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6692 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6697 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_static_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_static_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____proc_static_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_static_dump_info",
  {
    report__report__du_name_ordered_proc_static_dump_info_0
  },
  {
    report__report__du_ptag_ordered_proc_static_dump_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_static_dump_info_0
};

#line 6718 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 6726 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 6734 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 6741 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3] = {
  (MR_String) "prci_proc",
  (MR_String) "prci_proc_rep",
  (MR_String) "prci_coverage_array"
};

#line 6748 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_procrep_coverage_info_0_0 = {
  (MR_String) "procrep_coverage_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_procrep_coverage_info_0_0,
  report__report__field_names_procrep_coverage_info_0_0,
  NULL,
  NULL
};

#line 6763 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6768 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_procrep_coverage_info_0_0
  }
};

#line 6777 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6782 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1] = {
  (MR_Integer) 0
};

#line 6787 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_procrep_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____procrep_coverage_info_0_0_10001)),
  ((MR_Box) (report____Compare____procrep_coverage_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "procrep_coverage_info",
  {
    report__report__du_name_ordered_procrep_coverage_info_0
  },
  {
    report__report__du_ptag_ordered_procrep_coverage_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_procrep_coverage_info_0
};

#line 6808 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1] = {
  (MR_Integer) 0
};

#line 6813 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

#line 6821 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0
  }
};

#line 6829 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0 = {
  (MR_String) "program_modules_report",
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0,
  (MR_String) "program_modules"
};

#line 6836 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_program_modules_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____program_modules_report_0_0_10001)),
  ((MR_Box) (report____Compare____program_modules_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "program_modules_report",
  {
    &report__report__notag_functor_desc_program_modules_report_0
  },
  {
    &report__report__notag_functor_desc_program_modules_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_program_modules_report_0
};

#line 6857 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 6866 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5] = {
  (MR_String) "rlr_level",
  (MR_String) "rlr_calls",
  (MR_String) "rlr_prob",
  (MR_String) "rlr_non_rec_calls_cost",
  (MR_String) "rlr_rec_calls_ex_chld_cost"
};

#line 6875 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_level_report_0_0 = {
  (MR_String) "recursion_level_report",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_recursion_level_report_0_0,
  report__report__field_names_recursion_level_report_0_0,
  NULL,
  NULL
};

#line 6890 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6895 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_level_report_0_0
  }
};

#line 6904 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6909 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1] = {
  (MR_Integer) 0
};

#line 6914 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_level_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_level_report_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_level_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_level_report",
  {
    report__report__du_name_ordered_recursion_level_report_0
  },
  {
    report__report__du_ptag_ordered_recursion_level_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_level_report_0
};

#line 6935 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_0 = {
  (MR_String) "rt_not_recursive",
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

#line 6950 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 6960 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

#line 6969 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5] = {
  (MR_String) "rts_base",
  (MR_String) "rts_recursive",
  (MR_String) "rts_avg_max_depth",
  (MR_String) "rts_avg_rec_cost",
  (MR_String) "rts_any_rec_cost"
};

#line 6978 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_1 = {
  (MR_String) "rt_single",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  report__report__field_types_recursion_type_0_1,
  report__report__field_names_recursion_type_0_1,
  NULL,
  NULL
};

#line 6993 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0
};

#line 6999 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2] = {
  (MR_String) "rtdsc_base",
  (MR_String) "rtdsc_recursive"
};

#line 7005 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_2 = {
  (MR_String) "rt_divide_and_conquer",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  report__report__field_types_recursion_type_0_2,
  report__report__field_names_recursion_type_0_2,
  NULL,
  NULL
};

#line 7020 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7025 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1] = {
  (MR_String) "rtml_num_procs"
};

#line 7030 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_3 = {
  (MR_String) "rt_mutual_recursion",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  report__report__field_types_recursion_type_0_3,
  report__report__field_names_recursion_type_0_3,
  NULL,
  NULL
};

#line 7045 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_level_report_0
  }
};

#line 7053 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_recursion_level_report_0
};

#line 7058 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1] = {
  (MR_String) "rto_all_levels"
};

#line 7063 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_4 = {
  (MR_String) "rt_other",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__field_types_recursion_type_0_4,
  report__report__field_names_recursion_type_0_4,
  NULL,
  NULL
};

#line 7078 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 7086 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 7091 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1] = {
  (MR_String) "rte_errors"
};

#line 7096 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_5 = {
  (MR_String) "rt_errors",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  report__report__field_types_recursion_type_0_5,
  report__report__field_names_recursion_type_0_5,
  NULL,
  NULL
};

#line 7111 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_0_0
};

#line 7116 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7121 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_0_2
};

#line 7126 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3] = {
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_5
};

#line 7133 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    report__report__du_stag_ordered_recursion_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    report__report__du_stag_ordered_recursion_type_0_3
  }
};

#line 7157 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6] = {
  &report__report__du_functor_desc_recursion_type_0_2,
  &report__report__du_functor_desc_recursion_type_0_5,
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_0,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7167 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 7177 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type",
  {
    report__report__du_name_ordered_recursion_type_0
  },
  {
    report__report__du_ptag_ordered_recursion_type_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_0
};

#line 7198 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 7206 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_proc_freq_data_0
  }
};

#line 7215 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0
};

#line 7223 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4] = {
  (MR_String) "rtfd_freq",
  (MR_String) "rtfd_percent",
  (MR_String) "rtfd_maybe_summary",
  (MR_String) "rtfd_entry_procs"
};

#line 7231 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_freq_data_0_0 = {
  (MR_String) "recursion_type_freq_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_recursion_type_freq_data_0_0,
  report__report__field_names_recursion_type_freq_data_0_0,
  NULL,
  NULL
};

#line 7246 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7251 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_freq_data_0_0
  }
};

#line 7260 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7265 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7270 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_freq_data_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_freq_data_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_freq_data",
  {
    report__report__du_name_ordered_recursion_type_freq_data_0
  },
  {
    report__report__du_ptag_ordered_recursion_type_freq_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_freq_data_0
};

#line 7291 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_freq_data_0
  }
};

#line 7300 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_histogram_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____recursion_type_histogram_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_histogram_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_histogram",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 7321 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7328 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3] = {
  (MR_String) "rtpfd_freq",
  (MR_String) "rtpfd_percent",
  (MR_String) "rtpfd_summary"
};

#line 7335 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_proc_freq_data_0_0 = {
  (MR_String) "recursion_type_proc_freq_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_recursion_type_proc_freq_data_0_0,
  report__report__field_names_recursion_type_proc_freq_data_0_0,
  NULL,
  NULL
};

#line 7350 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7355 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0
  }
};

#line 7364 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7369 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7374 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_proc_freq_data_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_proc_freq_data_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_proc_freq_data",
  {
    report__report__du_name_ordered_recursion_type_proc_freq_data_0
  },
  {
    report__report__du_ptag_ordered_recursion_type_proc_freq_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_proc_freq_data_0
};

#line 7395 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____recursion_type_proc_map_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_proc_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_proc_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 7416 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_0 = {
  (MR_String) "rts_not_recursive",
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

#line 7431 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_1 = {
  (MR_String) "rts_single",
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

#line 7446 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_2 = {
  (MR_String) "rts_divide_and_conquer",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 7461 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7466 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1] = {
  (MR_String) "rtsmr_num_procs"
};

#line 7471 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_3 = {
  (MR_String) "rts_mutual_recursion",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  report__report__field_types_recursion_type_simple_0_3,
  report__report__field_names_recursion_type_simple_0_3,
  NULL,
  NULL
};

#line 7486 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 7494 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1] = {
  (MR_PseudoTypeInfo) &report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 7499 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1] = {
  (MR_String) "rtso_levels"
};

#line 7504 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_4 = {
  (MR_String) "rts_other",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 4,
  report__report__field_types_recursion_type_simple_0_4,
  report__report__field_names_recursion_type_simple_0_4,
  NULL,
  NULL
};

#line 7519 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 7524 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1] = {
  (MR_String) "rtse_error"
};

#line 7529 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_5 = {
  (MR_String) "rts_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 5,
  report__report__field_types_recursion_type_simple_0_5,
  report__report__field_names_recursion_type_simple_0_5,
  NULL,
  NULL
};

#line 7544 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_6 = {
  (MR_String) "rts_total_error_instances",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 7559 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4] = {
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7567 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_3
};

#line 7572 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_4
};

#line 7577 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_5
};

#line 7582 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_simple_0[4] = {
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    report__report__du_stag_ordered_recursion_type_simple_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_simple_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_simple_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_simple_0_3
  }
};

#line 7606 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7] = {
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_5,
  &report__report__du_functor_desc_recursion_type_simple_0_3,
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_4,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7617 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6
};

#line 7628 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_simple_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_simple_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_simple_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_simple",
  {
    report__report__du_name_ordered_recursion_type_simple_0
  },
  {
    report__report__du_ptag_ordered_recursion_type_simple_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_simple_0
};

#line 7649 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1] = {
  (MR_Integer) 0
};

#line 7654 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0 = {
  (MR_String) "recursion_types_frequency_report",
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0,
  (MR_String) "rtfr_histogram"
};

#line 7661 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_types_frequency_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____recursion_types_frequency_report_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_types_frequency_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_types_frequency_report",
  {
    &report__report__notag_functor_desc_recursion_types_frequency_report_0
  },
  {
    &report__report__notag_functor_desc_recursion_types_frequency_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_types_frequency_report_0
};

#line 7682 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 7690 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4] = {
  (MR_String) "display_limit",
  (MR_String) "cost_kind",
  (MR_String) "incl_desc",
  (MR_String) "scope"
};

#line 7698 "report.c"
static const MR_DuArgLocn report__report__field_locns_report_ordering_0_0[4] = {
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

#line 7722 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_report_ordering_0_0 = {
  (MR_String) "report_ordering",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_report_ordering_0_0,
  report__report__field_names_report_ordering_0_0,
  report__report__field_locns_report_ordering_0_0,
  NULL
};

#line 7737 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7742 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_report_ordering_0_0
  }
};

#line 7751 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7756 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1] = {
  (MR_Integer) 0
};

#line 7761 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_report_ordering_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____report_ordering_0_0_10001)),
  ((MR_Box) (report____Compare____report_ordering_0_0_10001)),
  (MR_String) "report",
  (MR_String) "report_ordering",
  {
    report__report__du_name_ordered_report_ordering_0
  },
  {
    report__report__du_ptag_ordered_report_ordering_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_report_ordering_0
};

#line 7782 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_report_ordering_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7788 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2] = {
  (MR_String) "tp_ordering",
  (MR_String) "tp_top_procs"
};

#line 7794 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_top_procs_report_0_0 = {
  (MR_String) "top_procs_report",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_top_procs_report_0_0,
  report__report__field_names_top_procs_report_0_0,
  NULL,
  NULL
};

#line 7809 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7814 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_top_procs_report_0_0
  }
};

#line 7823 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7828 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1] = {
  (MR_Integer) 0
};

#line 7833 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_top_procs_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____top_procs_report_0_0_10001)),
  ((MR_Box) (report____Compare____top_procs_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "top_procs_report",
  {
    report__report__du_name_ordered_top_procs_report_0
  },
  {
    report__report__du_ptag_ordered_top_procs_report_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_top_procs_report_0
};

#line 7854 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
};

#line 7860 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2] = {
  (MR_String) "vun_var_name",
  (MR_String) "vun_use"
};

#line 7866 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_var_use_and_name_0_0 = {
  (MR_String) "var_use_and_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  report__report__field_types_var_use_and_name_0_0,
  report__report__field_names_var_use_and_name_0_0,
  NULL,
  NULL
};

#line 7881 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7886 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_var_use_and_name_0_0
  }
};

#line 7895 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7900 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1] = {
  (MR_Integer) 0
};

#line 7905 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_var_use_and_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____var_use_and_name_0_0_10001)),
  ((MR_Box) (report____Compare____var_use_and_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "var_use_and_name",
  {
    report__report__du_name_ordered_var_use_and_name_0
  },
  {
    report__report__du_ptag_ordered_var_use_and_name_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_var_use_and_name_0
};

#line 7926 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 7929 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7931 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7933 "report.c"
{
#line 7935 "report.c"
  {
#line 7937 "report.c"
    MR_bool report__succeeded;

#line 7940 "report.c"
    {
#line 7942 "report.c"
      report__succeeded = report____Unify____ancestor_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7945 "report.c"
    return report__succeeded;
#line 7947 "report.c"
  }
#line 7949 "report.c"
}

#line 7952 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 7955 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7957 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7959 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7961 "report.c"
{
#line 7963 "report.c"
  {
#line 7965 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7968 "report.c"
    {
#line 7970 "report.c"
      report____Compare____ancestor_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7973 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7975 "report.c"
  }
#line 7977 "report.c"
}

#line 7980 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 7983 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7985 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7987 "report.c"
{
#line 7989 "report.c"
  {
#line 7991 "report.c"
    MR_bool report__succeeded;

#line 7994 "report.c"
    {
#line 7996 "report.c"
      report__succeeded = report____Unify____call_site_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7999 "report.c"
    return report__succeeded;
#line 8001 "report.c"
  }
#line 8003 "report.c"
}

#line 8006 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 8009 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8011 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8013 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8015 "report.c"
{
#line 8017 "report.c"
  {
#line 8019 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8022 "report.c"
    {
#line 8024 "report.c"
      report____Compare____call_site_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8027 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8029 "report.c"
  }
#line 8031 "report.c"
}

#line 8034 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 8037 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8039 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8041 "report.c"
{
#line 8043 "report.c"
  {
#line 8045 "report.c"
    MR_bool report__succeeded;

#line 8048 "report.c"
    {
#line 8050 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8053 "report.c"
    return report__succeeded;
#line 8055 "report.c"
  }
#line 8057 "report.c"
}

#line 8060 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 8063 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8065 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8067 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8069 "report.c"
{
#line 8071 "report.c"
  {
#line 8073 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8076 "report.c"
    {
#line 8078 "report.c"
      report____Compare____call_site_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8081 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8083 "report.c"
  }
#line 8085 "report.c"
}

#line 8088 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 8091 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8093 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8095 "report.c"
{
#line 8097 "report.c"
  {
#line 8099 "report.c"
    MR_bool report__succeeded;

#line 8102 "report.c"
    {
#line 8104 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_var_use_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8107 "report.c"
    return report__succeeded;
#line 8109 "report.c"
  }
#line 8111 "report.c"
}

#line 8114 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 8117 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8119 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8121 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8123 "report.c"
{
#line 8125 "report.c"
  {
#line 8127 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8130 "report.c"
    {
#line 8132 "report.c"
      report____Compare____call_site_dynamic_var_use_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8135 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8137 "report.c"
  }
#line 8139 "report.c"
}

#line 8142 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 8145 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8147 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8149 "report.c"
{
#line 8151 "report.c"
  {
#line 8153 "report.c"
    MR_bool report__succeeded;

#line 8156 "report.c"
    {
#line 8158 "report.c"
      report__succeeded = report____Unify____call_site_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8161 "report.c"
    return report__succeeded;
#line 8163 "report.c"
  }
#line 8165 "report.c"
}

#line 8168 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 8171 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8173 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8175 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8177 "report.c"
{
#line 8179 "report.c"
  {
#line 8181 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8184 "report.c"
    {
#line 8186 "report.c"
      report____Compare____call_site_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8189 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8191 "report.c"
  }
#line 8193 "report.c"
}

#line 8196 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 8199 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8201 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8203 "report.c"
{
#line 8205 "report.c"
  {
#line 8207 "report.c"
    MR_bool report__succeeded;

#line 8210 "report.c"
    {
#line 8212 "report.c"
      report__succeeded = report____Unify____call_site_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8215 "report.c"
    return report__succeeded;
#line 8217 "report.c"
  }
#line 8219 "report.c"
}

#line 8222 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 8225 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8227 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8229 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8231 "report.c"
{
#line 8233 "report.c"
  {
#line 8235 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8238 "report.c"
    {
#line 8240 "report.c"
      report____Compare____call_site_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8243 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8245 "report.c"
  }
#line 8247 "report.c"
}

#line 8250 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 8253 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8255 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8257 "report.c"
{
#line 8259 "report.c"
  {
#line 8261 "report.c"
    MR_bool report__succeeded;

#line 8264 "report.c"
    {
#line 8266 "report.c"
      report__succeeded = report____Unify____callers_counts_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8269 "report.c"
    return report__succeeded;
#line 8271 "report.c"
  }
#line 8273 "report.c"
}

#line 8276 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 8279 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8281 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8283 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8285 "report.c"
{
#line 8287 "report.c"
  {
#line 8289 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8292 "report.c"
    {
#line 8294 "report.c"
      report____Compare____callers_counts_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8297 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8299 "report.c"
  }
#line 8301 "report.c"
}

#line 8304 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 8307 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8309 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8311 "report.c"
{
#line 8313 "report.c"
  {
#line 8315 "report.c"
    MR_bool report__succeeded;

#line 8318 "report.c"
    {
#line 8320 "report.c"
      report__succeeded = report____Unify____clique_call_site_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8323 "report.c"
    return report__succeeded;
#line 8325 "report.c"
  }
#line 8327 "report.c"
}

#line 8330 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 8333 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8335 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8337 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8339 "report.c"
{
#line 8341 "report.c"
  {
#line 8343 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8346 "report.c"
    {
#line 8348 "report.c"
      report____Compare____clique_call_site_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8351 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8353 "report.c"
  }
#line 8355 "report.c"
}

#line 8358 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 8361 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8363 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8365 "report.c"
{
#line 8367 "report.c"
  {
#line 8369 "report.c"
    MR_bool report__succeeded;

#line 8372 "report.c"
    {
#line 8374 "report.c"
      report__succeeded = report____Unify____clique_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8377 "report.c"
    return report__succeeded;
#line 8379 "report.c"
  }
#line 8381 "report.c"
}

#line 8384 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 8387 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8389 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8391 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8393 "report.c"
{
#line 8395 "report.c"
  {
#line 8397 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8400 "report.c"
    {
#line 8402 "report.c"
      report____Compare____clique_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8405 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8407 "report.c"
  }
#line 8409 "report.c"
}

#line 8412 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 8415 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8417 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8419 "report.c"
{
#line 8421 "report.c"
  {
#line 8423 "report.c"
    MR_bool report__succeeded;

#line 8426 "report.c"
    {
#line 8428 "report.c"
      report__succeeded = report____Unify____clique_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8431 "report.c"
    return report__succeeded;
#line 8433 "report.c"
  }
#line 8435 "report.c"
}

#line 8438 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 8441 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8443 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8445 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8447 "report.c"
{
#line 8449 "report.c"
  {
#line 8451 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8454 "report.c"
    {
#line 8456 "report.c"
      report____Compare____clique_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8459 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8461 "report.c"
  }
#line 8463 "report.c"
}

#line 8466 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 8469 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8471 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8473 "report.c"
{
#line 8475 "report.c"
  {
#line 8477 "report.c"
    MR_bool report__succeeded;

#line 8480 "report.c"
    {
#line 8482 "report.c"
      report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8485 "report.c"
    return report__succeeded;
#line 8487 "report.c"
  }
#line 8489 "report.c"
}

#line 8492 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 8495 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8497 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8499 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8501 "report.c"
{
#line 8503 "report.c"
  {
#line 8505 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8508 "report.c"
    {
#line 8510 "report.c"
      report____Compare____clique_proc_dynamic_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8513 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8515 "report.c"
  }
#line 8517 "report.c"
}

#line 8520 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 8523 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8525 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8527 "report.c"
{
#line 8529 "report.c"
  {
#line 8531 "report.c"
    MR_bool report__succeeded;

#line 8534 "report.c"
    {
#line 8536 "report.c"
      report__succeeded = report____Unify____clique_proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8539 "report.c"
    return report__succeeded;
#line 8541 "report.c"
  }
#line 8543 "report.c"
}

#line 8546 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 8549 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8551 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8553 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8555 "report.c"
{
#line 8557 "report.c"
  {
#line 8559 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8562 "report.c"
    {
#line 8564 "report.c"
      report____Compare____clique_proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8567 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8569 "report.c"
  }
#line 8571 "report.c"
}

#line 8574 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 8577 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8579 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8581 "report.c"
{
#line 8583 "report.c"
  {
#line 8585 "report.c"
    MR_bool report__succeeded;

#line 8588 "report.c"
    {
#line 8590 "report.c"
      report__succeeded = report____Unify____clique_recursion_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8593 "report.c"
    return report__succeeded;
#line 8595 "report.c"
  }
#line 8597 "report.c"
}

#line 8600 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 8603 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8605 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8607 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8609 "report.c"
{
#line 8611 "report.c"
  {
#line 8613 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8616 "report.c"
    {
#line 8618 "report.c"
      report____Compare____clique_recursion_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8621 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8623 "report.c"
  }
#line 8625 "report.c"
}

#line 8628 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 8631 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8633 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8635 "report.c"
{
#line 8637 "report.c"
  {
#line 8639 "report.c"
    MR_bool report__succeeded;

#line 8642 "report.c"
    {
#line 8644 "report.c"
      report__succeeded = report____Unify____clique_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8647 "report.c"
    return report__succeeded;
#line 8649 "report.c"
  }
#line 8651 "report.c"
}

#line 8654 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 8657 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8659 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8661 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8663 "report.c"
{
#line 8665 "report.c"
  {
#line 8667 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8670 "report.c"
    {
#line 8672 "report.c"
      report____Compare____clique_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8675 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8677 "report.c"
  }
#line 8679 "report.c"
}

#line 8682 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 8685 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8687 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8689 "report.c"
{
#line 8691 "report.c"
  {
#line 8693 "report.c"
    MR_bool report__succeeded;

#line 8696 "report.c"
    {
#line 8698 "report.c"
      report__succeeded = report____Unify____data_struct_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8701 "report.c"
    return report__succeeded;
#line 8703 "report.c"
  }
#line 8705 "report.c"
}

#line 8708 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 8711 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8713 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8715 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8717 "report.c"
{
#line 8719 "report.c"
  {
#line 8721 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8724 "report.c"
    {
#line 8726 "report.c"
      report____Compare____data_struct_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8729 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8731 "report.c"
  }
#line 8733 "report.c"
}

#line 8736 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 8739 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8741 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8743 "report.c"
{
#line 8745 "report.c"
  {
#line 8747 "report.c"
    MR_bool report__succeeded;

#line 8750 "report.c"
    {
#line 8752 "report.c"
      report__succeeded = report____Unify____deep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8755 "report.c"
    return report__succeeded;
#line 8757 "report.c"
  }
#line 8759 "report.c"
}

#line 8762 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 8765 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8767 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8769 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8771 "report.c"
{
#line 8773 "report.c"
  {
#line 8775 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8778 "report.c"
    {
#line 8780 "report.c"
      report____Compare____deep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8783 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8785 "report.c"
  }
#line 8787 "report.c"
}

#line 8790 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 8793 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8795 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8797 "report.c"
{
#line 8799 "report.c"
  {
#line 8801 "report.c"
    MR_bool report__succeeded;

#line 8804 "report.c"
    {
#line 8806 "report.c"
      report__succeeded = report____Unify____field_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8809 "report.c"
    return report__succeeded;
#line 8811 "report.c"
  }
#line 8813 "report.c"
}

#line 8816 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 8819 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8821 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8823 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8825 "report.c"
{
#line 8827 "report.c"
  {
#line 8829 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8832 "report.c"
    {
#line 8834 "report.c"
      report____Compare____field_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8837 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8839 "report.c"
  }
#line 8841 "report.c"
}

#line 8844 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 8847 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8849 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8851 "report.c"
{
#line 8853 "report.c"
  {
#line 8855 "report.c"
    MR_bool report__succeeded;

#line 8858 "report.c"
    {
#line 8860 "report.c"
      report__succeeded = report____Unify____getter_or_setter_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8863 "report.c"
    return report__succeeded;
#line 8865 "report.c"
  }
#line 8867 "report.c"
}

#line 8870 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 8873 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8875 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8877 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8879 "report.c"
{
#line 8881 "report.c"
  {
#line 8883 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8886 "report.c"
    {
#line 8888 "report.c"
      report____Compare____getter_or_setter_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8891 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8893 "report.c"
  }
#line 8895 "report.c"
}

#line 8898 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 8901 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8903 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8905 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8907 "report.c"
{
#line 8909 "report.c"
  {
#line 8911 "report.c"
    MR_bool report__succeeded;

#line 8914 "report.c"
    {
#line 8916 "report.c"
      report__succeeded = report____Unify____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8919 "report.c"
    return report__succeeded;
#line 8921 "report.c"
  }
#line 8923 "report.c"
}

#line 8926 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 8929 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8931 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 8933 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8935 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8937 "report.c"
{
#line 8939 "report.c"
  {
#line 8941 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8944 "report.c"
    {
#line 8946 "report.c"
      report____Compare____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8949 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8951 "report.c"
  }
#line 8953 "report.c"
}

#line 8956 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 8959 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8961 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8963 "report.c"
{
#line 8965 "report.c"
  {
#line 8967 "report.c"
    MR_bool report__succeeded;

#line 8970 "report.c"
    {
#line 8972 "report.c"
      report__succeeded = report____Unify____gs_ds_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8975 "report.c"
    return report__succeeded;
#line 8977 "report.c"
  }
#line 8979 "report.c"
}

#line 8982 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 8985 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8987 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8989 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8991 "report.c"
{
#line 8993 "report.c"
  {
#line 8995 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8998 "report.c"
    {
#line 9000 "report.c"
      report____Compare____gs_ds_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9003 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9005 "report.c"
  }
#line 9007 "report.c"
}

#line 9010 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 9013 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9015 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9017 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9019 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9021 "report.c"
{
#line 9023 "report.c"
  {
#line 9025 "report.c"
    MR_bool report__succeeded;

#line 9028 "report.c"
    {
#line 9030 "report.c"
      report__succeeded = report____Unify____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9033 "report.c"
    return report__succeeded;
#line 9035 "report.c"
  }
#line 9037 "report.c"
}

#line 9040 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 9043 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9045 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9047 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 9049 "report.c"
  MR_Box report__wrapper_arg_4,
#line 9051 "report.c"
  MR_Box report__wrapper_arg_5)
#line 9053 "report.c"
{
#line 9055 "report.c"
  {
#line 9057 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9060 "report.c"
    {
#line 9062 "report.c"
      report____Compare____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_4), ((MR_Word) report__wrapper_arg_5));
    }
#line 9065 "report.c"
    *report__wrapper_arg_3 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9067 "report.c"
  }
#line 9069 "report.c"
}

#line 9072 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 9075 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9077 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9079 "report.c"
{
#line 9081 "report.c"
  {
#line 9083 "report.c"
    MR_bool report__succeeded;

#line 9086 "report.c"
    {
#line 9088 "report.c"
      report__succeeded = report____Unify____gs_field_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9091 "report.c"
    return report__succeeded;
#line 9093 "report.c"
  }
#line 9095 "report.c"
}

#line 9098 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 9101 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9103 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9105 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9107 "report.c"
{
#line 9109 "report.c"
  {
#line 9111 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9114 "report.c"
    {
#line 9116 "report.c"
      report____Compare____gs_field_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9119 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9121 "report.c"
  }
#line 9123 "report.c"
}

#line 9126 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 9129 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9131 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9133 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9135 "report.c"
{
#line 9137 "report.c"
  {
#line 9139 "report.c"
    MR_bool report__succeeded;

#line 9142 "report.c"
    {
#line 9144 "report.c"
      report__succeeded = report____Unify____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9147 "report.c"
    return report__succeeded;
#line 9149 "report.c"
  }
#line 9151 "report.c"
}

#line 9154 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 9157 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9159 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9161 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9163 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9165 "report.c"
{
#line 9167 "report.c"
  {
#line 9169 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9172 "report.c"
    {
#line 9174 "report.c"
      report____Compare____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9177 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9179 "report.c"
  }
#line 9181 "report.c"
}

#line 9184 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 9187 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9189 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9191 "report.c"
{
#line 9193 "report.c"
  {
#line 9195 "report.c"
    MR_bool report__succeeded;

#line 9198 "report.c"
    {
#line 9200 "report.c"
      report__succeeded = report____Unify____gs_field_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9203 "report.c"
    return report__succeeded;
#line 9205 "report.c"
  }
#line 9207 "report.c"
}

#line 9210 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 9213 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9215 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9217 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9219 "report.c"
{
#line 9221 "report.c"
  {
#line 9223 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9226 "report.c"
    {
#line 9228 "report.c"
      report____Compare____gs_field_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9231 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9233 "report.c"
  }
#line 9235 "report.c"
}

#line 9238 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 9241 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9243 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9245 "report.c"
{
#line 9247 "report.c"
  {
#line 9249 "report.c"
    MR_bool report__succeeded;

#line 9252 "report.c"
    {
#line 9254 "report.c"
      report__succeeded = report____Unify____inheritable_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9257 "report.c"
    return report__succeeded;
#line 9259 "report.c"
  }
#line 9261 "report.c"
}

#line 9264 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 9267 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9269 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9271 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9273 "report.c"
{
#line 9275 "report.c"
  {
#line 9277 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9280 "report.c"
    {
#line 9282 "report.c"
      report____Compare____inheritable_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9285 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9287 "report.c"
  }
#line 9289 "report.c"
}

#line 9292 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 9295 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9297 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9299 "report.c"
{
#line 9301 "report.c"
  {
#line 9303 "report.c"
    MR_bool report__succeeded;

#line 9306 "report.c"
    {
#line 9308 "report.c"
      report__succeeded = report____Unify____maybe_have_module_rep_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9311 "report.c"
    return report__succeeded;
#line 9313 "report.c"
  }
#line 9315 "report.c"
}

#line 9318 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 9321 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9323 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9325 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9327 "report.c"
{
#line 9329 "report.c"
  {
#line 9331 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9334 "report.c"
    {
#line 9336 "report.c"
      report____Compare____maybe_have_module_rep_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9339 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9341 "report.c"
  }
#line 9343 "report.c"
}

#line 9346 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 9349 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9351 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9353 "report.c"
{
#line 9355 "report.c"
  {
#line 9357 "report.c"
    MR_bool report__succeeded;

#line 9360 "report.c"
    {
#line 9362 "report.c"
      report__succeeded = report____Unify____menu_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9365 "report.c"
    return report__succeeded;
#line 9367 "report.c"
  }
#line 9369 "report.c"
}

#line 9372 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 9375 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9377 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9379 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9381 "report.c"
{
#line 9383 "report.c"
  {
#line 9385 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9388 "report.c"
    {
#line 9390 "report.c"
      report____Compare____menu_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9393 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9395 "report.c"
  }
#line 9397 "report.c"
}

#line 9400 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 9403 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9405 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9407 "report.c"
{
#line 9409 "report.c"
  {
#line 9411 "report.c"
    MR_bool report__succeeded;

#line 9414 "report.c"
    {
#line 9416 "report.c"
      report__succeeded = report____Unify____message_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9419 "report.c"
    return report__succeeded;
#line 9421 "report.c"
  }
#line 9423 "report.c"
}

#line 9426 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 9429 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9431 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9433 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9435 "report.c"
{
#line 9437 "report.c"
  {
#line 9439 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9442 "report.c"
    {
#line 9444 "report.c"
      report____Compare____message_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9447 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9449 "report.c"
  }
#line 9451 "report.c"
}

#line 9454 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 9457 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9459 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9461 "report.c"
{
#line 9463 "report.c"
  {
#line 9465 "report.c"
    MR_bool report__succeeded;

#line 9468 "report.c"
    {
#line 9470 "report.c"
      report__succeeded = report____Unify____module_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9473 "report.c"
    return report__succeeded;
#line 9475 "report.c"
  }
#line 9477 "report.c"
}

#line 9480 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 9483 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9485 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9487 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9489 "report.c"
{
#line 9491 "report.c"
  {
#line 9493 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9496 "report.c"
    {
#line 9498 "report.c"
      report____Compare____module_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9501 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9503 "report.c"
  }
#line 9505 "report.c"
}

#line 9508 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 9511 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9513 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9515 "report.c"
{
#line 9517 "report.c"
  {
#line 9519 "report.c"
    MR_bool report__succeeded;

#line 9522 "report.c"
    {
#line 9524 "report.c"
      report__succeeded = report____Unify____module_getter_setters_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9527 "report.c"
    return report__succeeded;
#line 9529 "report.c"
  }
#line 9531 "report.c"
}

#line 9534 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 9537 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9539 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9541 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9543 "report.c"
{
#line 9545 "report.c"
  {
#line 9547 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9550 "report.c"
    {
#line 9552 "report.c"
      report____Compare____module_getter_setters_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9555 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9557 "report.c"
  }
#line 9559 "report.c"
}

#line 9562 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 9565 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9567 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9569 "report.c"
{
#line 9571 "report.c"
  {
#line 9573 "report.c"
    MR_bool report__succeeded;

#line 9576 "report.c"
    {
#line 9578 "report.c"
      report__succeeded = report____Unify____module_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9581 "report.c"
    return report__succeeded;
#line 9583 "report.c"
  }
#line 9585 "report.c"
}

#line 9588 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 9591 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9593 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9595 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9597 "report.c"
{
#line 9599 "report.c"
  {
#line 9601 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9604 "report.c"
    {
#line 9606 "report.c"
      report____Compare____module_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9609 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9611 "report.c"
  }
#line 9613 "report.c"
}

#line 9616 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 9619 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9621 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9623 "report.c"
{
#line 9625 "report.c"
  {
#line 9627 "report.c"
    MR_bool report__succeeded;

#line 9630 "report.c"
    {
#line 9632 "report.c"
      report__succeeded = report____Unify____module_rep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9635 "report.c"
    return report__succeeded;
#line 9637 "report.c"
  }
#line 9639 "report.c"
}

#line 9642 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 9645 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9647 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9649 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9651 "report.c"
{
#line 9653 "report.c"
  {
#line 9655 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9658 "report.c"
    {
#line 9660 "report.c"
      report____Compare____module_rep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9663 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9665 "report.c"
  }
#line 9667 "report.c"
}

#line 9670 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 9673 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9675 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9677 "report.c"
{
#line 9679 "report.c"
  {
#line 9681 "report.c"
    MR_bool report__succeeded;

#line 9684 "report.c"
    {
#line 9686 "report.c"
      report__succeeded = report____Unify____module_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9689 "report.c"
    return report__succeeded;
#line 9691 "report.c"
  }
#line 9693 "report.c"
}

#line 9696 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 9699 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9701 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9703 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9705 "report.c"
{
#line 9707 "report.c"
  {
#line 9709 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9712 "report.c"
    {
#line 9714 "report.c"
      report____Compare____module_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9717 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9719 "report.c"
  }
#line 9721 "report.c"
}

#line 9724 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 9727 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9729 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9731 "report.c"
{
#line 9733 "report.c"
  {
#line 9735 "report.c"
    MR_bool report__succeeded;

#line 9738 "report.c"
    {
#line 9740 "report.c"
      report__succeeded = report____Unify____normal_callee_id_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9743 "report.c"
    return report__succeeded;
#line 9745 "report.c"
  }
#line 9747 "report.c"
}

#line 9750 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 9753 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9755 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9757 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9759 "report.c"
{
#line 9761 "report.c"
  {
#line 9763 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9766 "report.c"
    {
#line 9768 "report.c"
      report____Compare____normal_callee_id_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9771 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9773 "report.c"
  }
#line 9775 "report.c"
}

#line 9778 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 9781 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9783 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9785 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9787 "report.c"
{
#line 9789 "report.c"
  {
#line 9791 "report.c"
    MR_bool report__succeeded;

#line 9794 "report.c"
    {
#line 9796 "report.c"
      report__succeeded = report____Unify____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9799 "report.c"
    return report__succeeded;
#line 9801 "report.c"
  }
#line 9803 "report.c"
}

#line 9806 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 9809 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9811 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9813 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9815 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9817 "report.c"
{
#line 9819 "report.c"
  {
#line 9821 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9824 "report.c"
    {
#line 9826 "report.c"
      report____Compare____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9829 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9831 "report.c"
  }
#line 9833 "report.c"
}

#line 9836 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 9839 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9841 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9843 "report.c"
{
#line 9845 "report.c"
  {
#line 9847 "report.c"
    MR_bool report__succeeded;

#line 9850 "report.c"
    {
#line 9852 "report.c"
      report__succeeded = report____Unify____proc_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9855 "report.c"
    return report__succeeded;
#line 9857 "report.c"
  }
#line 9859 "report.c"
}

#line 9862 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 9865 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9867 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9869 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9871 "report.c"
{
#line 9873 "report.c"
  {
#line 9875 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9878 "report.c"
    {
#line 9880 "report.c"
      report____Compare____proc_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9883 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9885 "report.c"
  }
#line 9887 "report.c"
}

#line 9890 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 9893 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9895 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9897 "report.c"
{
#line 9899 "report.c"
  {
#line 9901 "report.c"
    MR_bool report__succeeded;

#line 9904 "report.c"
    {
#line 9906 "report.c"
      report__succeeded = report____Unify____proc_callers_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9909 "report.c"
    return report__succeeded;
#line 9911 "report.c"
  }
#line 9913 "report.c"
}

#line 9916 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 9919 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9921 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9923 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9925 "report.c"
{
#line 9927 "report.c"
  {
#line 9929 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9932 "report.c"
    {
#line 9934 "report.c"
      report____Compare____proc_callers_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9937 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9939 "report.c"
  }
#line 9941 "report.c"
}

#line 9944 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 9947 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9949 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9951 "report.c"
{
#line 9953 "report.c"
  {
#line 9955 "report.c"
    MR_bool report__succeeded;

#line 9958 "report.c"
    {
#line 9960 "report.c"
      report__succeeded = report____Unify____proc_callers_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9963 "report.c"
    return report__succeeded;
#line 9965 "report.c"
  }
#line 9967 "report.c"
}

#line 9970 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 9973 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9975 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9977 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9979 "report.c"
{
#line 9981 "report.c"
  {
#line 9983 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9986 "report.c"
    {
#line 9988 "report.c"
      report____Compare____proc_callers_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9991 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9993 "report.c"
  }
#line 9995 "report.c"
}

#line 9998 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 10001 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10003 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10005 "report.c"
{
#line 10007 "report.c"
  {
#line 10009 "report.c"
    MR_bool report__succeeded;

#line 10012 "report.c"
    {
#line 10014 "report.c"
      report__succeeded = report____Unify____proc_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10017 "report.c"
    return report__succeeded;
#line 10019 "report.c"
  }
#line 10021 "report.c"
}

#line 10024 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 10027 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10029 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10031 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10033 "report.c"
{
#line 10035 "report.c"
  {
#line 10037 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10040 "report.c"
    {
#line 10042 "report.c"
      report____Compare____proc_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10045 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10047 "report.c"
  }
#line 10049 "report.c"
}

#line 10052 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 10055 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10057 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10059 "report.c"
{
#line 10061 "report.c"
  {
#line 10063 "report.c"
    MR_bool report__succeeded;

#line 10066 "report.c"
    {
#line 10068 "report.c"
      report__succeeded = report____Unify____proc_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10071 "report.c"
    return report__succeeded;
#line 10073 "report.c"
  }
#line 10075 "report.c"
}

#line 10078 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 10081 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10083 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10085 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10087 "report.c"
{
#line 10089 "report.c"
  {
#line 10091 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10094 "report.c"
    {
#line 10096 "report.c"
      report____Compare____proc_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10099 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10101 "report.c"
  }
#line 10103 "report.c"
}

#line 10106 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 10109 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10111 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10113 "report.c"
{
#line 10115 "report.c"
  {
#line 10117 "report.c"
    MR_bool report__succeeded;

#line 10120 "report.c"
    {
#line 10122 "report.c"
      report__succeeded = report____Unify____proc_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10125 "report.c"
    return report__succeeded;
#line 10127 "report.c"
  }
#line 10129 "report.c"
}

#line 10132 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 10135 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10137 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10139 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10141 "report.c"
{
#line 10143 "report.c"
  {
#line 10145 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10148 "report.c"
    {
#line 10150 "report.c"
      report____Compare____proc_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10153 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10155 "report.c"
  }
#line 10157 "report.c"
}

#line 10160 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 10163 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10165 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10167 "report.c"
{
#line 10169 "report.c"
  {
#line 10171 "report.c"
    MR_bool report__succeeded;

#line 10174 "report.c"
    {
#line 10176 "report.c"
      report__succeeded = report____Unify____proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10179 "report.c"
    return report__succeeded;
#line 10181 "report.c"
  }
#line 10183 "report.c"
}

#line 10186 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 10189 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10191 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10193 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10195 "report.c"
{
#line 10197 "report.c"
  {
#line 10199 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10202 "report.c"
    {
#line 10204 "report.c"
      report____Compare____proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10207 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10209 "report.c"
  }
#line 10211 "report.c"
}

#line 10214 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 10217 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10219 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10221 "report.c"
{
#line 10223 "report.c"
  {
#line 10225 "report.c"
    MR_bool report__succeeded;

#line 10228 "report.c"
    {
#line 10230 "report.c"
      report__succeeded = report____Unify____proc_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10233 "report.c"
    return report__succeeded;
#line 10235 "report.c"
  }
#line 10237 "report.c"
}

#line 10240 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 10243 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10245 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10247 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10249 "report.c"
{
#line 10251 "report.c"
  {
#line 10253 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10256 "report.c"
    {
#line 10258 "report.c"
      report____Compare____proc_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10261 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10263 "report.c"
  }
#line 10265 "report.c"
}

#line 10268 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 10271 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10273 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10275 "report.c"
{
#line 10277 "report.c"
  {
#line 10279 "report.c"
    MR_bool report__succeeded;

#line 10282 "report.c"
    {
#line 10284 "report.c"
      report__succeeded = report____Unify____procrep_coverage_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10287 "report.c"
    return report__succeeded;
#line 10289 "report.c"
  }
#line 10291 "report.c"
}

#line 10294 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 10297 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10299 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10301 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10303 "report.c"
{
#line 10305 "report.c"
  {
#line 10307 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10310 "report.c"
    {
#line 10312 "report.c"
      report____Compare____procrep_coverage_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10315 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10317 "report.c"
  }
#line 10319 "report.c"
}

#line 10322 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 10325 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10327 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10329 "report.c"
{
#line 10331 "report.c"
  {
#line 10333 "report.c"
    MR_bool report__succeeded;

#line 10336 "report.c"
    {
#line 10338 "report.c"
      report__succeeded = report____Unify____program_modules_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10341 "report.c"
    return report__succeeded;
#line 10343 "report.c"
  }
#line 10345 "report.c"
}

#line 10348 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 10351 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10353 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10355 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10357 "report.c"
{
#line 10359 "report.c"
  {
#line 10361 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10364 "report.c"
    {
#line 10366 "report.c"
      report____Compare____program_modules_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10369 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10371 "report.c"
  }
#line 10373 "report.c"
}

#line 10376 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 10379 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10381 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10383 "report.c"
{
#line 10385 "report.c"
  {
#line 10387 "report.c"
    MR_bool report__succeeded;

#line 10390 "report.c"
    {
#line 10392 "report.c"
      report__succeeded = report____Unify____recursion_level_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10395 "report.c"
    return report__succeeded;
#line 10397 "report.c"
  }
#line 10399 "report.c"
}

#line 10402 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 10405 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10407 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10409 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10411 "report.c"
{
#line 10413 "report.c"
  {
#line 10415 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10418 "report.c"
    {
#line 10420 "report.c"
      report____Compare____recursion_level_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10423 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10425 "report.c"
  }
#line 10427 "report.c"
}

#line 10430 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 10433 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10435 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10437 "report.c"
{
#line 10439 "report.c"
  {
#line 10441 "report.c"
    MR_bool report__succeeded;

#line 10444 "report.c"
    {
#line 10446 "report.c"
      report__succeeded = report____Unify____recursion_type_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10449 "report.c"
    return report__succeeded;
#line 10451 "report.c"
  }
#line 10453 "report.c"
}

#line 10456 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 10459 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10461 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10463 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10465 "report.c"
{
#line 10467 "report.c"
  {
#line 10469 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10472 "report.c"
    {
#line 10474 "report.c"
      report____Compare____recursion_type_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10477 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10479 "report.c"
  }
#line 10481 "report.c"
}

#line 10484 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 10487 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10489 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10491 "report.c"
{
#line 10493 "report.c"
  {
#line 10495 "report.c"
    MR_bool report__succeeded;

#line 10498 "report.c"
    {
#line 10500 "report.c"
      report__succeeded = report____Unify____recursion_type_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10503 "report.c"
    return report__succeeded;
#line 10505 "report.c"
  }
#line 10507 "report.c"
}

#line 10510 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 10513 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10515 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10517 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10519 "report.c"
{
#line 10521 "report.c"
  {
#line 10523 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10526 "report.c"
    {
#line 10528 "report.c"
      report____Compare____recursion_type_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10531 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10533 "report.c"
  }
#line 10535 "report.c"
}

#line 10538 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 10541 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10543 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10545 "report.c"
{
#line 10547 "report.c"
  {
#line 10549 "report.c"
    MR_bool report__succeeded;

#line 10552 "report.c"
    {
#line 10554 "report.c"
      report__succeeded = report____Unify____recursion_type_histogram_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10557 "report.c"
    return report__succeeded;
#line 10559 "report.c"
  }
#line 10561 "report.c"
}

#line 10564 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 10567 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10569 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10571 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10573 "report.c"
{
#line 10575 "report.c"
  {
#line 10577 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10580 "report.c"
    {
#line 10582 "report.c"
      report____Compare____recursion_type_histogram_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10585 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10587 "report.c"
  }
#line 10589 "report.c"
}

#line 10592 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 10595 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10597 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10599 "report.c"
{
#line 10601 "report.c"
  {
#line 10603 "report.c"
    MR_bool report__succeeded;

#line 10606 "report.c"
    {
#line 10608 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10611 "report.c"
    return report__succeeded;
#line 10613 "report.c"
  }
#line 10615 "report.c"
}

#line 10618 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 10621 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10623 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10625 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10627 "report.c"
{
#line 10629 "report.c"
  {
#line 10631 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10634 "report.c"
    {
#line 10636 "report.c"
      report____Compare____recursion_type_proc_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10639 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10641 "report.c"
  }
#line 10643 "report.c"
}

#line 10646 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 10649 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10651 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10653 "report.c"
{
#line 10655 "report.c"
  {
#line 10657 "report.c"
    MR_bool report__succeeded;

#line 10660 "report.c"
    {
#line 10662 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10665 "report.c"
    return report__succeeded;
#line 10667 "report.c"
  }
#line 10669 "report.c"
}

#line 10672 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 10675 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10677 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10679 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10681 "report.c"
{
#line 10683 "report.c"
  {
#line 10685 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10688 "report.c"
    {
#line 10690 "report.c"
      report____Compare____recursion_type_proc_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10693 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10695 "report.c"
  }
#line 10697 "report.c"
}

#line 10700 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 10703 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10705 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10707 "report.c"
{
#line 10709 "report.c"
  {
#line 10711 "report.c"
    MR_bool report__succeeded;

#line 10714 "report.c"
    {
#line 10716 "report.c"
      report__succeeded = report____Unify____recursion_type_simple_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10719 "report.c"
    return report__succeeded;
#line 10721 "report.c"
  }
#line 10723 "report.c"
}

#line 10726 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 10729 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10731 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10733 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10735 "report.c"
{
#line 10737 "report.c"
  {
#line 10739 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10742 "report.c"
    {
#line 10744 "report.c"
      report____Compare____recursion_type_simple_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10747 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10749 "report.c"
  }
#line 10751 "report.c"
}

#line 10754 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 10757 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10759 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10761 "report.c"
{
#line 10763 "report.c"
  {
#line 10765 "report.c"
    MR_bool report__succeeded;

#line 10768 "report.c"
    {
#line 10770 "report.c"
      report__succeeded = report____Unify____recursion_types_frequency_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10773 "report.c"
    return report__succeeded;
#line 10775 "report.c"
  }
#line 10777 "report.c"
}

#line 10780 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 10783 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10785 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10787 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10789 "report.c"
{
#line 10791 "report.c"
  {
#line 10793 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10796 "report.c"
    {
#line 10798 "report.c"
      report____Compare____recursion_types_frequency_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10801 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10803 "report.c"
  }
#line 10805 "report.c"
}

#line 10808 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 10811 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10813 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10815 "report.c"
{
#line 10817 "report.c"
  {
#line 10819 "report.c"
    MR_bool report__succeeded;

#line 10822 "report.c"
    {
#line 10824 "report.c"
      report__succeeded = report____Unify____report_ordering_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10827 "report.c"
    return report__succeeded;
#line 10829 "report.c"
  }
#line 10831 "report.c"
}

#line 10834 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 10837 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10839 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10841 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10843 "report.c"
{
#line 10845 "report.c"
  {
#line 10847 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10850 "report.c"
    {
#line 10852 "report.c"
      report____Compare____report_ordering_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10855 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10857 "report.c"
  }
#line 10859 "report.c"
}

#line 10862 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 10865 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10867 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10869 "report.c"
{
#line 10871 "report.c"
  {
#line 10873 "report.c"
    MR_bool report__succeeded;

#line 10876 "report.c"
    {
#line 10878 "report.c"
      report__succeeded = report____Unify____top_procs_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10881 "report.c"
    return report__succeeded;
#line 10883 "report.c"
  }
#line 10885 "report.c"
}

#line 10888 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 10891 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10893 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10895 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10897 "report.c"
{
#line 10899 "report.c"
  {
#line 10901 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10904 "report.c"
    {
#line 10906 "report.c"
      report____Compare____top_procs_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10909 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10911 "report.c"
  }
#line 10913 "report.c"
}

#line 10916 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 10919 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10921 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10923 "report.c"
{
#line 10925 "report.c"
  {
#line 10927 "report.c"
    MR_bool report__succeeded;

#line 10930 "report.c"
    {
#line 10932 "report.c"
      report__succeeded = report____Unify____var_use_and_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10935 "report.c"
    return report__succeeded;
#line 10937 "report.c"
  }
#line 10939 "report.c"
}

#line 10942 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 10945 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10947 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10949 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10951 "report.c"
{
#line 10953 "report.c"
  {
#line 10955 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10958 "report.c"
    {
#line 10960 "report.c"
      report____Compare____var_use_and_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10963 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10965 "report.c"
  }
#line 10967 "report.c"
}

#line 549 "report.m"
void MR_CALL 
report____Compare____var_use_and_name_0_0(
#line 549 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 549 "report.m"
  MR_Word report__HeadVar__2_2,
#line 549 "report.m"
  MR_Word report__HeadVar__3_3)
#line 549 "report.m"
{
#line 549 "report.m"
  {
#line 549 "report.m"
    MR_bool report__succeeded;
#line 549 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 549 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 549 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 549 "report.m"
    if (report__succeeded)
#line 10994 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 549 "report.m"
    else
#line 549 "report.m"
      {
#line 549 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 549 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 549 "report.m"
        MR_Word report__V_8_8;

#line 549 "report.m"
        {
#line 549 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 11016 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 549 "report.m"
        report__succeeded = !(report__succeeded);
#line 549 "report.m"
        if (report__succeeded)
#line 549 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 549 "report.m"
        else
#line 549 "report.m"
          {
#line 549 "report.m"
            var_use_analysis____Compare____var_use_info_0_0(report__HeadVar__1_1, report__V_5_5, report__V_7_7);
#line 549 "report.m"
            return;
          }
#line 549 "report.m"
      }
#line 549 "report.m"
  }
#line 549 "report.m"
}

#line 549 "report.m"
MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0(
#line 549 "report.m"
  MR_Word report__HeadVar__1_1,
#line 549 "report.m"
  MR_Word report__HeadVar__2_2)
#line 549 "report.m"
{
#line 549 "report.m"
  {
#line 549 "report.m"
    MR_bool report__succeeded;
#line 549 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 549 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 549 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 549 "report.m"
    if (report__succeeded)
#line 549 "report.m"
      report__succeeded = MR_TRUE;
#line 549 "report.m"
    else
#line 549 "report.m"
      {
#line 549 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 549 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 549 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 11077 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 549 "report.m"
        if (report__succeeded)
#line 11081 "report.c"
          {
#line 11083 "report.c"
            return report__succeeded = var_use_analysis____Unify____var_use_info_0_0(report__V_4_4, report__V_6_6);
          }
#line 549 "report.m"
      }
#line 549 "report.m"
    return report__succeeded;
#line 549 "report.m"
  }
#line 549 "report.m"
}

#line 381 "report.m"
void MR_CALL 
report____Compare____top_procs_report_0_0(
#line 381 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 381 "report.m"
  MR_Word report__HeadVar__2_2,
#line 381 "report.m"
  MR_Word report__HeadVar__3_3)
#line 381 "report.m"
{
#line 381 "report.m"
  {
#line 381 "report.m"
    MR_bool report__succeeded;
#line 381 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 381 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 381 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 381 "report.m"
    if (report__succeeded)
#line 11119 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 381 "report.m"
    else
#line 381 "report.m"
      {
#line 381 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 381 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 381 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 381 "report.m"
        MR_Word report__V_8_8;

#line 381 "report.m"
        {
#line 381 "report.m"
          report____Compare____report_ordering_0_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 11141 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 381 "report.m"
        report__succeeded = !(report__succeeded);
#line 381 "report.m"
        if (report__succeeded)
#line 381 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 381 "report.m"
        else
#line 381 "report.m"
          {
#line 381 "report.m"
            {
#line 381 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[5], report__HeadVar__1_1, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_7_7)));
#line 381 "report.m"
              return;
            }
#line 381 "report.m"
          }
#line 381 "report.m"
      }
#line 381 "report.m"
  }
#line 381 "report.m"
}

#line 381 "report.m"
MR_bool MR_CALL 
report____Unify____top_procs_report_0_0(
#line 381 "report.m"
  MR_Word report__HeadVar__1_1,
#line 381 "report.m"
  MR_Word report__HeadVar__2_2)
#line 381 "report.m"
{
#line 381 "report.m"
  {
#line 381 "report.m"
    MR_bool report__succeeded;
#line 381 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 381 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 381 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 381 "report.m"
    if (report__succeeded)
#line 381 "report.m"
      report__succeeded = MR_TRUE;
#line 381 "report.m"
    else
#line 381 "report.m"
      {
#line 381 "report.m"
        MR_Word report__TypeInfo_9_9;
#line 381 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 381 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 381 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 11208 "report.c"
        {
#line 11210 "report.c"
          report__succeeded = report____Unify____report_ordering_0_0(report__V_3_3, report__V_5_5);
        }
#line 381 "report.m"
        if (report__succeeded)
#line 381 "report.m"
          {
#line 11217 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[5];
#line 11219 "report.c"
            {
#line 11221 "report.c"
              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_9_9, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_6_6)));
            }
#line 381 "report.m"
          }
#line 381 "report.m"
      }
#line 381 "report.m"
    return report__succeeded;
#line 381 "report.m"
  }
#line 381 "report.m"
}

#line 617 "report.m"
void MR_CALL 
report____Compare____report_ordering_0_0(
#line 617 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 617 "report.m"
  MR_Word report__HeadVar__2_2,
#line 617 "report.m"
  MR_Word report__HeadVar__3_3)
#line 617 "report.m"
{
#line 617 "report.m"
  {
#line 617 "report.m"
    MR_bool report__succeeded;
#line 617 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__2_2;
#line 617 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__3_3;

#line 617 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 617 "report.m"
    if (report__succeeded)
#line 11259 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 617 "report.m"
    else
#line 617 "report.m"
      {
#line 617 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 617 "report.m"
        MR_Word report__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 617 "report.m"
        MR_Word report__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 617 "report.m"
        MR_Word report__V_9_9 = ((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 617 "report.m"
        MR_Word report__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_12_12;

#line 617 "report.m"
        {
#line 617 "report.m"
          query____Compare____display_limit_0_0(&report__V_12_12, report__V_4_4, report__V_8_8);
        }
#line 11289 "report.c"
        report__succeeded = (report__V_12_12 == (MR_Integer) 0);
#line 617 "report.m"
        report__succeeded = !(report__succeeded);
#line 617 "report.m"
        if (report__succeeded)
#line 617 "report.m"
          *report__HeadVar__1_1 = report__V_12_12;
#line 617 "report.m"
        else
#line 617 "report.m"
          {
#line 617 "report.m"
            MR_Word report__V_13_13;
#line 617 "report.m"
            MR_Integer report__V_21_21 = (MR_Integer) report__V_5_5;
#line 617 "report.m"
            MR_Integer report__V_22_22 = (MR_Integer) report__V_9_9;

#line 617 "report.m"
            {
#line 617 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_13_13, report__V_21_21, report__V_22_22);
            }
#line 11313 "report.c"
            report__succeeded = (report__V_13_13 == (MR_Integer) 0);
#line 617 "report.m"
            report__succeeded = !(report__succeeded);
#line 617 "report.m"
            if (report__succeeded)
#line 617 "report.m"
              *report__HeadVar__1_1 = report__V_13_13;
#line 617 "report.m"
            else
#line 617 "report.m"
              {
#line 617 "report.m"
                MR_Word report__V_14_14;
#line 617 "report.m"
                MR_Integer report__V_23_23 = (MR_Integer) report__V_6_6;
#line 617 "report.m"
                MR_Integer report__V_24_24 = (MR_Integer) report__V_10_10;

#line 617 "report.m"
                {
#line 617 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_14_14, report__V_23_23, report__V_24_24);
                }
#line 11337 "report.c"
                report__succeeded = (report__V_14_14 == (MR_Integer) 0);
#line 617 "report.m"
                report__succeeded = !(report__succeeded);
#line 617 "report.m"
                if (report__succeeded)
#line 617 "report.m"
                  *report__HeadVar__1_1 = report__V_14_14;
#line 617 "report.m"
                else
#line 617 "report.m"
                  {
#line 617 "report.m"
                    MR_Integer report__V_25_25 = (MR_Integer) report__V_7_7;
#line 617 "report.m"
                    MR_Integer report__V_26_26 = (MR_Integer) report__V_11_11;

#line 617 "report.m"
                    {
#line 617 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_25_25, report__V_26_26);
#line 617 "report.m"
                      return;
                    }
#line 617 "report.m"
                  }
#line 617 "report.m"
              }
#line 617 "report.m"
          }
#line 617 "report.m"
      }
#line 617 "report.m"
  }
#line 617 "report.m"
}

#line 617 "report.m"
MR_bool MR_CALL 
report____Unify____report_ordering_0_0(
#line 617 "report.m"
  MR_Word report__HeadVar__1_1,
#line 617 "report.m"
  MR_Word report__HeadVar__2_2)
#line 617 "report.m"
{
#line 617 "report.m"
  {
#line 617 "report.m"
    MR_bool report__succeeded;
#line 617 "report.m"
    MR_Integer report__CastX_11 = (MR_Integer) report__HeadVar__1_1;
#line 617 "report.m"
    MR_Integer report__CastY_12 = (MR_Integer) report__HeadVar__2_2;

#line 617 "report.m"
    report__succeeded = (report__CastX_11 == report__CastY_12);
#line 617 "report.m"
    if (report__succeeded)
#line 617 "report.m"
      report__succeeded = MR_TRUE;
#line 617 "report.m"
    else
#line 617 "report.m"
      {
#line 617 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 617 "report.m"
        MR_Word report__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 617 "report.m"
        MR_Word report__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 617 "report.m"
        MR_Word report__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 7);
#line 617 "report.m"
        MR_Word report__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 617 "report.m"
        MR_Word report__V_10_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 11419 "report.c"
        {
#line 11421 "report.c"
          report__succeeded = query____Unify____display_limit_0_0(report__V_3_3, report__V_7_7);
        }
#line 617 "report.m"
        if (report__succeeded)
#line 617 "report.m"
          {
#line 11428 "report.c"
            report__succeeded = (report__V_4_4 == report__V_8_8);
#line 617 "report.m"
            if (report__succeeded)
#line 617 "report.m"
              {
#line 11434 "report.c"
                report__succeeded = (report__V_5_5 == report__V_9_9);
#line 617 "report.m"
                if (report__succeeded)
#line 11438 "report.c"
                  report__succeeded = (report__V_6_6 == report__V_10_10);
#line 617 "report.m"
              }
#line 617 "report.m"
          }
#line 617 "report.m"
      }
#line 617 "report.m"
    return report__succeeded;
#line 617 "report.m"
  }
#line 617 "report.m"
}

#line 272 "report.m"
void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0(
#line 272 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 272 "report.m"
  MR_Word report__HeadVar__2_2,
#line 272 "report.m"
  MR_Word report__HeadVar__3_3)
#line 272 "report.m"
{
#line 272 "report.m"
  {
#line 272 "report.m"
    MR_bool report__succeeded;
#line 272 "report.m"
    MR_Integer report__CastX_6 = (MR_Integer) report__HeadVar__2_2;
#line 272 "report.m"
    MR_Integer report__CastY_7 = (MR_Integer) report__HeadVar__3_3;

#line 272 "report.m"
    report__succeeded = (report__CastX_6 == report__CastY_7);
#line 272 "report.m"
    if (report__succeeded)
#line 11477 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 272 "report.m"
    else
#line 272 "report.m"
      {
#line 272 "report.m"
        MR_Word report__V_4_4 = (MR_Word) report__HeadVar__2_2;
#line 272 "report.m"
        MR_Word report__V_5_5 = (MR_Word) report__HeadVar__3_3;

#line 272 "report.m"
        {
#line 272 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[22], report__HeadVar__1_1, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_5_5)));
#line 272 "report.m"
          return;
        }
#line 272 "report.m"
      }
#line 272 "report.m"
  }
#line 272 "report.m"
}

#line 272 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0(
#line 272 "report.m"
  MR_Word report__HeadVar__1_1,
#line 272 "report.m"
  MR_Word report__HeadVar__2_2)
#line 272 "report.m"
{
#line 272 "report.m"
  {
#line 272 "report.m"
    MR_bool report__succeeded;
#line 272 "report.m"
    MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 272 "report.m"
    MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 272 "report.m"
    report__succeeded = (report__CastX_5 == report__CastY_6);
#line 272 "report.m"
    if (report__succeeded)
#line 272 "report.m"
      report__succeeded = MR_TRUE;
#line 272 "report.m"
    else
#line 272 "report.m"
      {
#line 272 "report.m"
        MR_Word report__V_3_3 = (MR_Word) report__HeadVar__1_1;
#line 272 "report.m"
        MR_Word report__V_4_4 = (MR_Word) report__HeadVar__2_2;

#line 11535 "report.c"
        {
#line 11537 "report.c"
          return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_2[22], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_4_4)));
        }
#line 272 "report.m"
      }
#line 272 "report.m"
    return report__succeeded;
#line 272 "report.m"
  }
#line 272 "report.m"
}

#line 280 "report.m"
void MR_CALL 
report____Compare____recursion_type_simple_0_0(
#line 280 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 280 "report.m"
  MR_Word report__HeadVar__2_2,
#line 280 "report.m"
  MR_Word report__HeadVar__3_3)
#line 280 "report.m"
{
#line 280 "report.m"
  {
#line 280 "report.m"
    MR_bool report__succeeded;
#line 280 "report.m"
    MR_Integer report__CastX_46 = (MR_Integer) report__HeadVar__2_2;
#line 280 "report.m"
    MR_Integer report__CastY_47 = (MR_Integer) report__HeadVar__3_3;

#line 280 "report.m"
    report__succeeded = (report__CastX_46 == report__CastY_47);
#line 280 "report.m"
    if (report__succeeded)
#line 11573 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "report.m"
    else
#line 280 "report.m"
      if ((report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
          *report__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "report.m"
        else
#line 280 "report.m"
          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
            *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
          else
#line 280 "report.m"
            if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
            else
#line 280 "report.m"
              if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
              else
#line 280 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11605 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11611 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 11615 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 280 "report.m"
        if ((report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
          else
#line 280 "report.m"
            if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
              *report__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "report.m"
            else
#line 280 "report.m"
              if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
              else
#line 280 "report.m"
                if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11647 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11653 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 11657 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
        else
#line 280 "report.m"
          if ((report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
            if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
            else
#line 280 "report.m"
              if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
              else
#line 280 "report.m"
                if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
                  *report__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11689 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11695 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                      else
#line 11699 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
          else
#line 280 "report.m"
            if ((report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
              if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
              else
#line 280 "report.m"
                if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
                      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11731 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11737 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 11741 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
            else
#line 280 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 280 "report.m"
                {
#line 280 "report.m"
                  MR_String report__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "report.m"
                  if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 11754 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11760 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11766 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11772 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 280 "report.m"
                            {
#line 280 "report.m"
                              MR_String report__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)));

#line 280 "report.m"
                              {
#line 280 "report.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_51_51, report__V_41_41);
#line 280 "report.m"
                                return;
                              }
#line 280 "report.m"
                            }
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11796 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                            else
#line 11800 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                }
#line 280 "report.m"
              else
#line 280 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 280 "report.m"
                  {
#line 280 "report.m"
                    MR_Integer report__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 11815 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11821 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11827 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11833 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11839 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                            else
#line 280 "report.m"
                              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 280 "report.m"
                                {
#line 280 "report.m"
                                  MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 0)));

#line 280 "report.m"
                                  {
#line 280 "report.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_52_52, report__V_17_17);
#line 280 "report.m"
                                    return;
                                  }
#line 280 "report.m"
                                }
#line 280 "report.m"
                              else
#line 11861 "report.c"
                                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  }
#line 280 "report.m"
                else
#line 280 "report.m"
                  {
#line 280 "report.m"
                    MR_Word report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));

#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 11874 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11880 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11886 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11892 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11898 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                            else
#line 280 "report.m"
                              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11904 "report.c"
                                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                              else
#line 280 "report.m"
                                {
#line 280 "report.m"
                                  MR_Word report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 0)));

#line 280 "report.m"
                                  {
#line 280 "report.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[37], report__HeadVar__1_1, ((MR_Box) (report__V_53_53)), ((MR_Box) (report__V_29_29)));
#line 280 "report.m"
                                    return;
                                  }
#line 280 "report.m"
                                }
#line 280 "report.m"
                  }
#line 280 "report.m"
  }
#line 280 "report.m"
}

#line 280 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0(
#line 280 "report.m"
  MR_Word report__HeadVar__1_1,
#line 280 "report.m"
  MR_Word report__HeadVar__2_2)
#line 280 "report.m"
{
#line 280 "report.m"
  {
#line 280 "report.m"
    MR_bool report__succeeded;
#line 280 "report.m"
    MR_Integer report__CastX_17 = (MR_Integer) report__HeadVar__1_1;
#line 280 "report.m"
    MR_Integer report__CastY_18 = (MR_Integer) report__HeadVar__2_2;

#line 280 "report.m"
    report__succeeded = (report__CastX_17 == report__CastY_18);
#line 280 "report.m"
    if (report__succeeded)
#line 280 "report.m"
      report__succeeded = MR_TRUE;
#line 280 "report.m"
    else
#line 280 "report.m"
      if ((report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 280 "report.m"
        {
#line 280 "report.m"
          MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 280 "report.m"
          MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 280 "report.m"
          report__succeeded = (report__CastY_8 == report__CastX_7);
#line 280 "report.m"
        }
#line 280 "report.m"
      else
#line 280 "report.m"
        if ((report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "report.m"
          {
#line 280 "report.m"
            MR_Integer report__CastX_3 = (MR_Integer) report__HeadVar__1_1;
#line 280 "report.m"
            MR_Integer report__CastY_4 = (MR_Integer) report__HeadVar__2_2;

#line 280 "report.m"
            report__succeeded = (report__CastY_4 == report__CastX_3);
#line 280 "report.m"
          }
#line 280 "report.m"
        else
#line 280 "report.m"
          if ((report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 280 "report.m"
            {
#line 280 "report.m"
              MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 280 "report.m"
              MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 280 "report.m"
              report__succeeded = (report__CastY_6 == report__CastX_5);
#line 280 "report.m"
            }
#line 280 "report.m"
          else
#line 280 "report.m"
            if ((report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 280 "report.m"
              {
#line 280 "report.m"
                MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__1_1;
#line 280 "report.m"
                MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__2_2;

#line 280 "report.m"
                report__succeeded = (report__CastY_16 == report__CastX_15);
#line 280 "report.m"
              }
#line 280 "report.m"
            else
#line 280 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 280 "report.m"
                {
#line 280 "report.m"
                  MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "report.m"
                  MR_String report__V_14_14;

#line 280 "report.m"
                  report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 280 "report.m"
                  if (report__succeeded)
#line 280 "report.m"
                    {
#line 280 "report.m"
                      report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)));
#line 12032 "report.c"
                      report__succeeded = (strcmp(report__V_13_13, report__V_14_14) == 0);
#line 280 "report.m"
                    }
#line 280 "report.m"
                }
#line 280 "report.m"
              else
#line 280 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 280 "report.m"
                  {
#line 280 "report.m"
                    MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "report.m"
                    MR_Integer report__V_10_10;

#line 280 "report.m"
                    report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 280 "report.m"
                    if (report__succeeded)
#line 280 "report.m"
                      {
#line 280 "report.m"
                        report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));
#line 12057 "report.c"
                        report__succeeded = (report__V_9_9 == report__V_10_10);
#line 280 "report.m"
                      }
#line 280 "report.m"
                  }
#line 280 "report.m"
                else
#line 280 "report.m"
                  {
#line 280 "report.m"
                    MR_Word report__TypeInfo_19_19;
#line 280 "report.m"
                    MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "report.m"
                    MR_Word report__V_12_12;

#line 280 "report.m"
                    report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 280 "report.m"
                    if (report__succeeded)
#line 280 "report.m"
                      {
#line 280 "report.m"
                        report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));
#line 12082 "report.c"
                        report__TypeInfo_19_19 = (MR_Word) &report_scalar_common_1[37];
#line 12084 "report.c"
                        {
#line 12086 "report.c"
                          return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_19_19, ((MR_Box) (report__V_11_11)), ((MR_Box) (report__V_12_12)));
                        }
#line 280 "report.m"
                      }
#line 280 "report.m"
                  }
#line 280 "report.m"
    return report__succeeded;
#line 280 "report.m"
  }
#line 280 "report.m"
}

#line 303 "report.m"
void MR_CALL 
report____Compare____recursion_type_proc_map_0_0(
#line 303 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 303 "report.m"
  MR_Word report__HeadVar__2_2,
#line 303 "report.m"
  MR_Word report__HeadVar__3_3)
#line 303 "report.m"
{
#line 303 "report.m"
  {
#line 303 "report.m"
    MR_bool report__succeeded;
#line 303 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 303 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 303 "report.m"
    {
#line 303 "report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[21], report__HeadVar__1_1, ((MR_Box) (report__Cast_HeadVar1_4)), ((MR_Box) (report__Cast_HeadVar2_5)));
#line 303 "report.m"
      return;
    }
#line 303 "report.m"
  }
#line 303 "report.m"
}

#line 303 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0(
#line 303 "report.m"
  MR_Word report__HeadVar__1_1,
#line 303 "report.m"
  MR_Word report__HeadVar__2_2)
#line 303 "report.m"
{
#line 303 "report.m"
  {
#line 303 "report.m"
    MR_bool report__succeeded;
#line 303 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 303 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 303 "report.m"
    {
#line 303 "report.m"
      return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_2[21], ((MR_Box) (report__Cast_HeadVar1_3)), ((MR_Box) (report__Cast_HeadVar2_4)));
    }
#line 303 "report.m"
    return report__succeeded;
#line 303 "report.m"
  }
#line 303 "report.m"
}

#line 306 "report.m"
void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0(
#line 306 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 306 "report.m"
  MR_Word report__HeadVar__2_2,
#line 306 "report.m"
  MR_Word report__HeadVar__3_3)
#line 306 "report.m"
{
#line 306 "report.m"
  {
#line 306 "report.m"
    MR_bool report__succeeded;
#line 306 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 306 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 306 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 306 "report.m"
    if (report__succeeded)
#line 12186 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 306 "report.m"
    else
#line 306 "report.m"
      {
#line 306 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 306 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 306 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 306 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 306 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 306 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 306 "report.m"
        MR_Word report__V_10_10;

#line 306 "report.m"
        {
#line 306 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_10_10, report__V_4_4, report__V_7_7);
        }
#line 12212 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 306 "report.m"
        report__succeeded = !(report__succeeded);
#line 306 "report.m"
        if (report__succeeded)
#line 306 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 306 "report.m"
        else
#line 306 "report.m"
          {
#line 306 "report.m"
            MR_Word report__V_11_11;

#line 306 "report.m"
            {
#line 306 "report.m"
              measurement_units____Compare____percent_0_0(&report__V_11_11, report__V_5_5, report__V_8_8);
            }
#line 12232 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 306 "report.m"
            report__succeeded = !(report__succeeded);
#line 306 "report.m"
            if (report__succeeded)
#line 306 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 306 "report.m"
            else
#line 306 "report.m"
              {
#line 306 "report.m"
                {
#line 306 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[4], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 306 "report.m"
                  return;
                }
#line 306 "report.m"
              }
#line 306 "report.m"
          }
#line 306 "report.m"
      }
#line 306 "report.m"
  }
#line 306 "report.m"
}

#line 306 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0(
#line 306 "report.m"
  MR_Word report__HeadVar__1_1,
#line 306 "report.m"
  MR_Word report__HeadVar__2_2)
#line 306 "report.m"
{
#line 306 "report.m"
  {
#line 306 "report.m"
    MR_bool report__succeeded;
#line 306 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 306 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 306 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 306 "report.m"
    if (report__succeeded)
#line 306 "report.m"
      report__succeeded = MR_TRUE;
#line 306 "report.m"
    else
#line 306 "report.m"
      {
#line 306 "report.m"
        MR_Word report__TypeCtorInfo_12_12;
#line 306 "report.m"
        MR_Integer report__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 306 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 306 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 306 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 306 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 12305 "report.c"
        report__succeeded = (report__V_3_3 == report__V_6_6);
#line 306 "report.m"
        if (report__succeeded)
#line 306 "report.m"
          {
#line 12311 "report.c"
            {
#line 12313 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_7_7);
            }
#line 306 "report.m"
            if (report__succeeded)
#line 306 "report.m"
              {
#line 12320 "report.c"
                report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 12322 "report.c"
                {
#line 12324 "report.c"
                  return report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_5_5, report__V_8_8);
                }
#line 306 "report.m"
              }
#line 306 "report.m"
          }
#line 306 "report.m"
      }
#line 306 "report.m"
    return report__succeeded;
#line 306 "report.m"
  }
#line 306 "report.m"
}

#line 277 "report.m"
void MR_CALL 
report____Compare____recursion_type_histogram_0_0(
#line 277 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 277 "report.m"
  MR_Word report__HeadVar__2_2,
#line 277 "report.m"
  MR_Word report__HeadVar__3_3)
#line 277 "report.m"
{
#line 277 "report.m"
  {
#line 277 "report.m"
    MR_bool report__succeeded;
#line 277 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 277 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 277 "report.m"
    {
#line 277 "report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[22], report__HeadVar__1_1, ((MR_Box) (report__Cast_HeadVar1_4)), ((MR_Box) (report__Cast_HeadVar2_5)));
#line 277 "report.m"
      return;
    }
#line 277 "report.m"
  }
#line 277 "report.m"
}

#line 277 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0(
#line 277 "report.m"
  MR_Word report__HeadVar__1_1,
#line 277 "report.m"
  MR_Word report__HeadVar__2_2)
#line 277 "report.m"
{
#line 277 "report.m"
  {
#line 277 "report.m"
    MR_bool report__succeeded;
#line 277 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 277 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 277 "report.m"
    {
#line 277 "report.m"
      return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_2[22], ((MR_Box) (report__Cast_HeadVar1_3)), ((MR_Box) (report__Cast_HeadVar2_4)));
    }
#line 277 "report.m"
    return report__succeeded;
#line 277 "report.m"
  }
#line 277 "report.m"
}

#line 295 "report.m"
void MR_CALL 
report____Compare____recursion_type_freq_data_0_0(
#line 295 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 295 "report.m"
  MR_Word report__HeadVar__2_2,
#line 295 "report.m"
  MR_Word report__HeadVar__3_3)
#line 295 "report.m"
{
#line 295 "report.m"
  {
#line 295 "report.m"
    MR_bool report__succeeded;
#line 295 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__2_2;
#line 295 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__3_3;

#line 295 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 295 "report.m"
    if (report__succeeded)
#line 12426 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 295 "report.m"
    else
#line 295 "report.m"
      {
#line 295 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 295 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 295 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 295 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 295 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 295 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 295 "report.m"
        MR_Word report__V_12_12;

#line 295 "report.m"
        {
#line 295 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_12_12, report__V_4_4, report__V_8_8);
        }
#line 12456 "report.c"
        report__succeeded = (report__V_12_12 == (MR_Integer) 0);
#line 295 "report.m"
        report__succeeded = !(report__succeeded);
#line 295 "report.m"
        if (report__succeeded)
#line 295 "report.m"
          *report__HeadVar__1_1 = report__V_12_12;
#line 295 "report.m"
        else
#line 295 "report.m"
          {
#line 295 "report.m"
            MR_Word report__V_13_13;

#line 295 "report.m"
            {
#line 295 "report.m"
              measurement_units____Compare____percent_0_0(&report__V_13_13, report__V_5_5, report__V_9_9);
            }
#line 12476 "report.c"
            report__succeeded = (report__V_13_13 == (MR_Integer) 0);
#line 295 "report.m"
            report__succeeded = !(report__succeeded);
#line 295 "report.m"
            if (report__succeeded)
#line 295 "report.m"
              *report__HeadVar__1_1 = report__V_13_13;
#line 295 "report.m"
            else
#line 295 "report.m"
              {
#line 295 "report.m"
                MR_Word report__V_14_14;

#line 295 "report.m"
                {
#line 295 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[36], &report__V_14_14, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_10_10)));
                }
#line 12496 "report.c"
                report__succeeded = (report__V_14_14 == (MR_Integer) 0);
#line 295 "report.m"
                report__succeeded = !(report__succeeded);
#line 295 "report.m"
                if (report__succeeded)
#line 295 "report.m"
                  *report__HeadVar__1_1 = report__V_14_14;
#line 295 "report.m"
                else
#line 295 "report.m"
                  {
#line 295 "report.m"
                    {
#line 295 "report.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[21], report__HeadVar__1_1, ((MR_Box) (report__V_7_7)), ((MR_Box) (report__V_11_11)));
#line 295 "report.m"
                      return;
                    }
#line 295 "report.m"
                  }
#line 295 "report.m"
              }
#line 295 "report.m"
          }
#line 295 "report.m"
      }
#line 295 "report.m"
  }
#line 295 "report.m"
}

#line 295 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0(
#line 295 "report.m"
  MR_Word report__HeadVar__1_1,
#line 295 "report.m"
  MR_Word report__HeadVar__2_2)
#line 295 "report.m"
{
#line 295 "report.m"
  {
#line 295 "report.m"
    MR_bool report__succeeded;
#line 295 "report.m"
    MR_Integer report__CastX_11 = (MR_Integer) report__HeadVar__1_1;
#line 295 "report.m"
    MR_Integer report__CastY_12 = (MR_Integer) report__HeadVar__2_2;

#line 295 "report.m"
    report__succeeded = (report__CastX_11 == report__CastY_12);
#line 295 "report.m"
    if (report__succeeded)
#line 295 "report.m"
      report__succeeded = MR_TRUE;
#line 295 "report.m"
    else
#line 295 "report.m"
      {
#line 295 "report.m"
        MR_Word report__TypeInfo_14_14;
#line 295 "report.m"
        MR_Word report__TypeInfo_15_15;
#line 295 "report.m"
        MR_Integer report__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 295 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 295 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 295 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 295 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 295 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 295 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));

#line 12577 "report.c"
        report__succeeded = (report__V_3_3 == report__V_7_7);
#line 295 "report.m"
        if (report__succeeded)
#line 295 "report.m"
          {
#line 12583 "report.c"
            {
#line 12585 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_8_8);
            }
#line 295 "report.m"
            if (report__succeeded)
#line 295 "report.m"
              {
#line 12592 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[36];
#line 12594 "report.c"
                {
#line 12596 "report.c"
                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_14_14, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_9_9)));
                }
#line 295 "report.m"
                if (report__succeeded)
#line 295 "report.m"
                  {
#line 12603 "report.c"
                    report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_2[21];
#line 12605 "report.c"
                    {
#line 12607 "report.c"
                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_15_15, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_10_10)));
                    }
#line 295 "report.m"
                  }
#line 295 "report.m"
              }
#line 295 "report.m"
          }
#line 295 "report.m"
      }
#line 295 "report.m"
    return report__succeeded;
#line 295 "report.m"
  }
#line 295 "report.m"
}

#line 222 "report.m"
void MR_CALL 
report____Compare____recursion_type_0_0(
#line 222 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 222 "report.m"
  MR_Word report__HeadVar__2_2,
#line 222 "report.m"
  MR_Word report__HeadVar__3_3)
#line 222 "report.m"
{
#line 222 "report.m"
  {
#line 222 "report.m"
    MR_bool report__succeeded;
#line 222 "report.m"
    MR_Integer report__CastX_129 = (MR_Integer) report__HeadVar__2_2;
#line 222 "report.m"
    MR_Integer report__CastY_130 = (MR_Integer) report__HeadVar__3_3;

#line 222 "report.m"
    report__succeeded = (report__CastX_129 == report__CastY_130);
#line 222 "report.m"
    if (report__succeeded)
#line 12649 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 222 "report.m"
    else
#line 222 "report.m"
      if ((report__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "report.m"
          *report__HeadVar__1_1 = (MR_Integer) 0;
#line 222 "report.m"
        else
#line 222 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12663 "report.c"
            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
          else
#line 222 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12669 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12675 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12681 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                else
#line 12685 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
      else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 222 "report.m"
          {
#line 222 "report.m"
            MR_Word report__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "report.m"
            MR_Word report__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));

#line 222 "report.m"
            if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12700 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 222 "report.m"
                {
#line 222 "report.m"
                  MR_Word report__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 0)));
#line 222 "report.m"
                  MR_Word report__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 1)));
#line 222 "report.m"
                  MR_Word report__V_71_71;

#line 222 "report.m"
                  {
#line 222 "report.m"
                    report____Compare____recursion_level_report_0_0(&report__V_71_71, report__V_142_142, report__V_69_69);
                  }
#line 12720 "report.c"
                  report__succeeded = (report__V_71_71 == (MR_Integer) 0);
#line 222 "report.m"
                  report__succeeded = !(report__succeeded);
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    *report__HeadVar__1_1 = report__V_71_71;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    {
#line 222 "report.m"
                      report____Compare____recursion_level_report_0_0(report__HeadVar__1_1, report__V_141_141, report__V_70_70);
#line 222 "report.m"
                      return;
                    }
#line 222 "report.m"
                }
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12743 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12749 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12755 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 12759 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
          }
#line 222 "report.m"
        else
#line 222 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 222 "report.m"
            {
#line 222 "report.m"
              MR_Word report__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 4)));
#line 222 "report.m"
              MR_Float report__V_147_147 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 3)));
#line 222 "report.m"
              MR_Float report__V_148_148 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 2)));
#line 222 "report.m"
              MR_Word report__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "report.m"
              MR_Word report__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));

#line 222 "report.m"
              if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12782 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12788 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 222 "report.m"
                    {
#line 222 "report.m"
                      MR_Word report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 0)));
#line 222 "report.m"
                      MR_Word report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 1)));
#line 222 "report.m"
                      MR_Float report__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 2)));
#line 222 "report.m"
                      MR_Float report__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 3)));
#line 222 "report.m"
                      MR_Word report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 4)));
#line 222 "report.m"
                      MR_Word report__V_29_29;

#line 222 "report.m"
                      {
#line 222 "report.m"
                        report____Compare____recursion_level_report_0_0(&report__V_29_29, report__V_150_150, report__V_24_24);
                      }
#line 12814 "report.c"
                      report__succeeded = (report__V_29_29 == (MR_Integer) 0);
#line 222 "report.m"
                      report__succeeded = !(report__succeeded);
#line 222 "report.m"
                      if (report__succeeded)
#line 222 "report.m"
                        *report__HeadVar__1_1 = report__V_29_29;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        {
#line 222 "report.m"
                          MR_Word report__V_30_30;

#line 222 "report.m"
                          {
#line 222 "report.m"
                            report____Compare____recursion_level_report_0_0(&report__V_30_30, report__V_149_149, report__V_25_25);
                          }
#line 12834 "report.c"
                          report__succeeded = (report__V_30_30 == (MR_Integer) 0);
#line 222 "report.m"
                          report__succeeded = !(report__succeeded);
#line 222 "report.m"
                          if (report__succeeded)
#line 222 "report.m"
                            *report__HeadVar__1_1 = report__V_30_30;
#line 222 "report.m"
                          else
#line 222 "report.m"
                            {
#line 222 "report.m"
                              MR_Word report__V_31_31;

#line 222 "report.m"
                              {
#line 222 "report.m"
                                mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_31_31, report__V_148_148, report__V_26_26);
                              }
#line 12854 "report.c"
                              report__succeeded = (report__V_31_31 == (MR_Integer) 0);
#line 222 "report.m"
                              report__succeeded = !(report__succeeded);
#line 222 "report.m"
                              if (report__succeeded)
#line 222 "report.m"
                                *report__HeadVar__1_1 = report__V_31_31;
#line 222 "report.m"
                              else
#line 222 "report.m"
                                {
#line 222 "report.m"
                                  MR_Word report__V_32_32;

#line 222 "report.m"
                                  {
#line 222 "report.m"
                                    mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_32_32, report__V_147_147, report__V_27_27);
                                  }
#line 12874 "report.c"
                                  report__succeeded = (report__V_32_32 == (MR_Integer) 0);
#line 222 "report.m"
                                  report__succeeded = !(report__succeeded);
#line 222 "report.m"
                                  if (report__succeeded)
#line 222 "report.m"
                                    *report__HeadVar__1_1 = report__V_32_32;
#line 222 "report.m"
                                  else
#line 222 "report.m"
                                    {
#line 222 "report.m"
                                      {
#line 222 "report.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_3[0], report__HeadVar__1_1, ((MR_Box) (report__V_146_146)), ((MR_Box) (report__V_28_28)));
#line 222 "report.m"
                                        return;
                                      }
#line 222 "report.m"
                                    }
#line 222 "report.m"
                                }
#line 222 "report.m"
                            }
#line 222 "report.m"
                        }
#line 222 "report.m"
                    }
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12907 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12913 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                      else
#line 12917 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
            }
#line 222 "report.m"
          else
#line 222 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 222 "report.m"
              {
#line 222 "report.m"
                MR_Word report__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));

#line 222 "report.m"
                if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12932 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12938 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12944 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 222 "report.m"
                        {
#line 222 "report.m"
                          MR_Word report__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));

#line 222 "report.m"
                          {
#line 222 "report.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[34], report__HeadVar__1_1, ((MR_Box) (report__V_143_143)), ((MR_Box) (report__V_128_128)));
#line 222 "report.m"
                            return;
                          }
#line 222 "report.m"
                        }
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12968 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                        else
#line 12972 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
              }
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 222 "report.m"
                {
#line 222 "report.m"
                  MR_Integer report__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));

#line 222 "report.m"
                  if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12987 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12993 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12999 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13005 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                        else
#line 222 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 222 "report.m"
                            {
#line 222 "report.m"
                              MR_Integer report__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));

#line 222 "report.m"
                              {
#line 222 "report.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_144_144, report__V_92_92);
#line 222 "report.m"
                                return;
                              }
#line 222 "report.m"
                            }
#line 222 "report.m"
                          else
#line 13027 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                }
#line 222 "report.m"
              else
#line 222 "report.m"
                {
#line 222 "report.m"
                  MR_Word report__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));

#line 222 "report.m"
                  if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 13040 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 13046 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13052 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13058 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                        else
#line 222 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 13064 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                          else
#line 222 "report.m"
                            {
#line 222 "report.m"
                              MR_Word report__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));

#line 222 "report.m"
                              {
#line 222 "report.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[35], report__HeadVar__1_1, ((MR_Box) (report__V_145_145)), ((MR_Box) (report__V_110_110)));
#line 222 "report.m"
                                return;
                              }
#line 222 "report.m"
                            }
#line 222 "report.m"
                }
#line 222 "report.m"
  }
#line 222 "report.m"
}

#line 222 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_type_0_0(
#line 222 "report.m"
  MR_Word report__HeadVar__1_1,
#line 222 "report.m"
  MR_Word report__HeadVar__2_2)
#line 222 "report.m"
{
#line 222 "report.m"
  {
#line 222 "report.m"
    MR_bool report__succeeded;
#line 222 "report.m"
    MR_Integer report__CastX_25 = (MR_Integer) report__HeadVar__1_1;
#line 222 "report.m"
    MR_Integer report__CastY_26 = (MR_Integer) report__HeadVar__2_2;

#line 222 "report.m"
    report__succeeded = (report__CastX_25 == report__CastY_26);
#line 222 "report.m"
    if (report__succeeded)
#line 222 "report.m"
      report__succeeded = MR_TRUE;
#line 222 "report.m"
    else
#line 222 "report.m"
      if ((report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "report.m"
        {
#line 222 "report.m"
          MR_Integer report__CastX_3 = (MR_Integer) report__HeadVar__1_1;
#line 222 "report.m"
          MR_Integer report__CastY_4 = (MR_Integer) report__HeadVar__2_2;

#line 222 "report.m"
          report__succeeded = (report__CastY_4 == report__CastX_3);
#line 222 "report.m"
        }
#line 222 "report.m"
      else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 222 "report.m"
          {
#line 222 "report.m"
            MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "report.m"
            MR_Word report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "report.m"
            MR_Word report__V_17_17;
#line 222 "report.m"
            MR_Word report__V_18_18;

#line 222 "report.m"
            report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 222 "report.m"
            if (report__succeeded)
#line 222 "report.m"
              {
#line 222 "report.m"
                report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "report.m"
                report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 1)));
#line 13153 "report.c"
                {
#line 13155 "report.c"
                  report__succeeded = report____Unify____recursion_level_report_0_0(report__V_15_15, report__V_17_17);
                }
#line 222 "report.m"
                if (report__succeeded)
#line 13160 "report.c"
                  {
#line 13162 "report.c"
                    return report__succeeded = report____Unify____recursion_level_report_0_0(report__V_16_16, report__V_18_18);
                  }
#line 222 "report.m"
              }
#line 222 "report.m"
          }
#line 222 "report.m"
        else
#line 222 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 222 "report.m"
            {
#line 222 "report.m"
              MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "report.m"
              MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "report.m"
              MR_Float report__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 2)));
#line 222 "report.m"
              MR_Float report__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 3)));
#line 222 "report.m"
              MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 4)));
#line 222 "report.m"
              MR_Word report__V_10_10;
#line 222 "report.m"
              MR_Word report__V_11_11;
#line 222 "report.m"
              MR_Float report__V_12_12;
#line 222 "report.m"
              MR_Float report__V_13_13;
#line 222 "report.m"
              MR_Word report__V_14_14;

#line 222 "report.m"
              report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 222 "report.m"
              if (report__succeeded)
#line 222 "report.m"
                {
#line 222 "report.m"
                  report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "report.m"
                  report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "report.m"
                  report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 2)));
#line 222 "report.m"
                  report__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 3)));
#line 222 "report.m"
                  report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 4)));
#line 13212 "report.c"
                  {
#line 13214 "report.c"
                    report__succeeded = report____Unify____recursion_level_report_0_0(report__V_5_5, report__V_10_10);
                  }
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    {
#line 13221 "report.c"
                      {
#line 13223 "report.c"
                        report__succeeded = report____Unify____recursion_level_report_0_0(report__V_6_6, report__V_11_11);
                      }
#line 222 "report.m"
                      if (report__succeeded)
#line 222 "report.m"
                        {
#line 13230 "report.c"
                          report__succeeded = (report__V_7_7 == report__V_12_12);
#line 222 "report.m"
                          if (report__succeeded)
#line 222 "report.m"
                            {
#line 13236 "report.c"
                              report__succeeded = (report__V_8_8 == report__V_13_13);
#line 222 "report.m"
                              if (report__succeeded)
#line 13240 "report.c"
                                {
#line 13242 "report.c"
                                  return report__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) report__V_9_9, (MR_Word) report__V_14_14);
                                }
#line 222 "report.m"
                            }
#line 222 "report.m"
                        }
#line 222 "report.m"
                    }
#line 222 "report.m"
                }
#line 222 "report.m"
            }
#line 222 "report.m"
          else
#line 222 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 222 "report.m"
              {
#line 222 "report.m"
                MR_Word report__TypeInfo_27_27;
#line 222 "report.m"
                MR_Word report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "report.m"
                MR_Word report__V_24_24;

#line 222 "report.m"
                report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 222 "report.m"
                if (report__succeeded)
#line 222 "report.m"
                  {
#line 222 "report.m"
                    report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 13276 "report.c"
                    report__TypeInfo_27_27 = (MR_Word) &report_scalar_common_1[34];
#line 13278 "report.c"
                    {
#line 13280 "report.c"
                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_27_27, ((MR_Box) (report__V_23_23)), ((MR_Box) (report__V_24_24)));
                    }
#line 222 "report.m"
                  }
#line 222 "report.m"
              }
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 222 "report.m"
                {
#line 222 "report.m"
                  MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "report.m"
                  MR_Integer report__V_20_20;

#line 222 "report.m"
                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    {
#line 222 "report.m"
                      report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 13306 "report.c"
                      report__succeeded = (report__V_19_19 == report__V_20_20);
#line 222 "report.m"
                    }
#line 222 "report.m"
                }
#line 222 "report.m"
              else
#line 222 "report.m"
                {
#line 222 "report.m"
                  MR_Word report__TypeInfo_28_28;
#line 222 "report.m"
                  MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "report.m"
                  MR_Word report__V_22_22;

#line 222 "report.m"
                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    {
#line 222 "report.m"
                      report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 13331 "report.c"
                      report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[35];
#line 13333 "report.c"
                      {
#line 13335 "report.c"
                        return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_28_28, ((MR_Box) (report__V_21_21)), ((MR_Box) (report__V_22_22)));
                      }
#line 222 "report.m"
                    }
#line 222 "report.m"
                }
#line 222 "report.m"
    return report__succeeded;
#line 222 "report.m"
  }
#line 222 "report.m"
}

#line 263 "report.m"
void MR_CALL 
report____Compare____recursion_level_report_0_0(
#line 263 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 263 "report.m"
  MR_Word report__HeadVar__2_2,
#line 263 "report.m"
  MR_Word report__HeadVar__3_3)
#line 263 "report.m"
{
#line 263 "report.m"
  {
#line 263 "report.m"
    MR_bool report__succeeded;
#line 263 "report.m"
    MR_Integer report__CastX_18 = (MR_Integer) report__HeadVar__2_2;
#line 263 "report.m"
    MR_Integer report__CastY_19 = (MR_Integer) report__HeadVar__3_3;

#line 263 "report.m"
    report__succeeded = (report__CastX_18 == report__CastY_19);
#line 263 "report.m"
    if (report__succeeded)
#line 13373 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "report.m"
    else
#line 263 "report.m"
      {
#line 263 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "report.m"
        MR_Float report__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 263 "report.m"
        MR_Float report__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 263 "report.m"
        MR_Float report__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 263 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "report.m"
        MR_Float report__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 263 "report.m"
        MR_Float report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 263 "report.m"
        MR_Float report__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 263 "report.m"
        MR_Word report__V_14_14;

#line 263 "report.m"
        {
#line 263 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_14_14, report__V_4_4, report__V_9_9);
        }
#line 13407 "report.c"
        report__succeeded = (report__V_14_14 == (MR_Integer) 0);
#line 263 "report.m"
        report__succeeded = !(report__succeeded);
#line 263 "report.m"
        if (report__succeeded)
#line 263 "report.m"
          *report__HeadVar__1_1 = report__V_14_14;
#line 263 "report.m"
        else
#line 263 "report.m"
          {
#line 263 "report.m"
            MR_Word report__V_15_15;

#line 263 "report.m"
            {
#line 263 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_15_15, report__V_5_5, report__V_10_10);
            }
#line 13427 "report.c"
            report__succeeded = (report__V_15_15 == (MR_Integer) 0);
#line 263 "report.m"
            report__succeeded = !(report__succeeded);
#line 263 "report.m"
            if (report__succeeded)
#line 263 "report.m"
              *report__HeadVar__1_1 = report__V_15_15;
#line 263 "report.m"
            else
#line 263 "report.m"
              {
#line 263 "report.m"
                MR_Word report__V_16_16;

#line 263 "report.m"
                {
#line 263 "report.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_16_16, report__V_6_6, report__V_11_11);
                }
#line 13447 "report.c"
                report__succeeded = (report__V_16_16 == (MR_Integer) 0);
#line 263 "report.m"
                report__succeeded = !(report__succeeded);
#line 263 "report.m"
                if (report__succeeded)
#line 263 "report.m"
                  *report__HeadVar__1_1 = report__V_16_16;
#line 263 "report.m"
                else
#line 263 "report.m"
                  {
#line 263 "report.m"
                    MR_Word report__V_17_17;

#line 263 "report.m"
                    {
#line 263 "report.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_17_17, report__V_7_7, report__V_12_12);
                    }
#line 13467 "report.c"
                    report__succeeded = (report__V_17_17 == (MR_Integer) 0);
#line 263 "report.m"
                    report__succeeded = !(report__succeeded);
#line 263 "report.m"
                    if (report__succeeded)
#line 263 "report.m"
                      *report__HeadVar__1_1 = report__V_17_17;
#line 263 "report.m"
                    else
#line 263 "report.m"
                      {
#line 263 "report.m"
                        mercury__private_builtin__builtin_compare_float_3_p_0(report__HeadVar__1_1, report__V_8_8, report__V_13_13);
#line 263 "report.m"
                        return;
                      }
#line 263 "report.m"
                  }
#line 263 "report.m"
              }
#line 263 "report.m"
          }
#line 263 "report.m"
      }
#line 263 "report.m"
  }
#line 263 "report.m"
}

#line 263 "report.m"
MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0(
#line 263 "report.m"
  MR_Word report__HeadVar__1_1,
#line 263 "report.m"
  MR_Word report__HeadVar__2_2)
#line 263 "report.m"
{
#line 263 "report.m"
  {
#line 263 "report.m"
    MR_bool report__succeeded;
#line 263 "report.m"
    MR_Integer report__CastX_13 = (MR_Integer) report__HeadVar__1_1;
#line 263 "report.m"
    MR_Integer report__CastY_14 = (MR_Integer) report__HeadVar__2_2;

#line 263 "report.m"
    report__succeeded = (report__CastX_13 == report__CastY_14);
#line 263 "report.m"
    if (report__succeeded)
#line 263 "report.m"
      report__succeeded = MR_TRUE;
#line 263 "report.m"
    else
#line 263 "report.m"
      {
#line 263 "report.m"
        MR_Integer report__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "report.m"
        MR_Float report__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 263 "report.m"
        MR_Float report__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 263 "report.m"
        MR_Float report__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 263 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "report.m"
        MR_Float report__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 263 "report.m"
        MR_Float report__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 263 "report.m"
        MR_Float report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));

#line 13546 "report.c"
        report__succeeded = (report__V_3_3 == report__V_8_8);
#line 263 "report.m"
        if (report__succeeded)
#line 263 "report.m"
          {
#line 13552 "report.c"
            report__succeeded = (report__V_4_4 == report__V_9_9);
#line 263 "report.m"
            if (report__succeeded)
#line 263 "report.m"
              {
#line 13558 "report.c"
                report__succeeded = (report__V_5_5 == report__V_10_10);
#line 263 "report.m"
                if (report__succeeded)
#line 263 "report.m"
                  {
#line 13564 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_11_11);
#line 263 "report.m"
                    if (report__succeeded)
#line 13568 "report.c"
                      report__succeeded = (report__V_7_7 == report__V_12_12);
#line 263 "report.m"
                  }
#line 263 "report.m"
              }
#line 263 "report.m"
          }
#line 263 "report.m"
      }
#line 263 "report.m"
    return report__succeeded;
#line 263 "report.m"
  }
#line 263 "report.m"
}

#line 313 "report.m"
void MR_CALL 
report____Compare____program_modules_report_0_0(
#line 313 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 313 "report.m"
  MR_Word report__HeadVar__2_2,
#line 313 "report.m"
  MR_Word report__HeadVar__3_3)
#line 313 "report.m"
{
#line 313 "report.m"
  {
#line 313 "report.m"
    MR_bool report__succeeded;
#line 313 "report.m"
    MR_Integer report__CastX_6 = (MR_Integer) report__HeadVar__2_2;
#line 313 "report.m"
    MR_Integer report__CastY_7 = (MR_Integer) report__HeadVar__3_3;

#line 313 "report.m"
    report__succeeded = (report__CastX_6 == report__CastY_7);
#line 313 "report.m"
    if (report__succeeded)
#line 13609 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 313 "report.m"
    else
#line 313 "report.m"
      {
#line 313 "report.m"
        MR_Word report__V_4_4 = (MR_Word) report__HeadVar__2_2;
#line 313 "report.m"
        MR_Word report__V_5_5 = (MR_Word) report__HeadVar__3_3;

#line 313 "report.m"
        {
#line 313 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[33], report__HeadVar__1_1, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_5_5)));
#line 313 "report.m"
          return;
        }
#line 313 "report.m"
      }
#line 313 "report.m"
  }
#line 313 "report.m"
}

#line 313 "report.m"
MR_bool MR_CALL 
report____Unify____program_modules_report_0_0(
#line 313 "report.m"
  MR_Word report__HeadVar__1_1,
#line 313 "report.m"
  MR_Word report__HeadVar__2_2)
#line 313 "report.m"
{
#line 313 "report.m"
  {
#line 313 "report.m"
    MR_bool report__succeeded;
#line 313 "report.m"
    MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 313 "report.m"
    MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 313 "report.m"
    report__succeeded = (report__CastX_5 == report__CastY_6);
#line 313 "report.m"
    if (report__succeeded)
#line 313 "report.m"
      report__succeeded = MR_TRUE;
#line 313 "report.m"
    else
#line 313 "report.m"
      {
#line 313 "report.m"
        MR_Word report__V_3_3 = (MR_Word) report__HeadVar__1_1;
#line 313 "report.m"
        MR_Word report__V_4_4 = (MR_Word) report__HeadVar__2_2;

#line 13667 "report.c"
        {
#line 13669 "report.c"
          return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_1[33], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_4_4)));
        }
#line 313 "report.m"
      }
#line 313 "report.m"
    return report__succeeded;
#line 313 "report.m"
  }
#line 313 "report.m"
}

#line 441 "report.m"
void MR_CALL 
report____Compare____procrep_coverage_info_0_0(
#line 441 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 441 "report.m"
  MR_Word report__HeadVar__2_2,
#line 441 "report.m"
  MR_Word report__HeadVar__3_3)
#line 441 "report.m"
{
#line 441 "report.m"
  {
#line 441 "report.m"
    MR_bool report__succeeded;
#line 441 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 441 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 441 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 441 "report.m"
    if (report__succeeded)
#line 13705 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 441 "report.m"
    else
#line 441 "report.m"
      {
#line 441 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 441 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 441 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 441 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 441 "report.m"
        MR_Word report__V_10_10;
#line 441 "report.m"
        MR_Integer report__V_17_17 = (MR_Integer) report__V_4_4;
#line 441 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_7_7;

#line 441 "report.m"
        {
#line 441 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_10_10, report__V_17_17, report__V_18_18);
        }
#line 13735 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 441 "report.m"
        report__succeeded = !(report__succeeded);
#line 441 "report.m"
        if (report__succeeded)
#line 441 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 441 "report.m"
        else
#line 441 "report.m"
          {
#line 441 "report.m"
            MR_Word report__V_11_11;

#line 441 "report.m"
            {
#line 441 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[30], &report__V_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
            }
#line 13755 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 441 "report.m"
            report__succeeded = !(report__succeeded);
#line 441 "report.m"
            if (report__succeeded)
#line 441 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 441 "report.m"
            else
#line 441 "report.m"
              {
#line 441 "report.m"
                {
#line 441 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[31], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 441 "report.m"
                  return;
                }
#line 441 "report.m"
              }
#line 441 "report.m"
          }
#line 441 "report.m"
      }
#line 441 "report.m"
  }
#line 441 "report.m"
}

#line 441 "report.m"
MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0(
#line 441 "report.m"
  MR_Word report__HeadVar__1_1,
#line 441 "report.m"
  MR_Word report__HeadVar__2_2)
#line 441 "report.m"
{
#line 441 "report.m"
  {
#line 441 "report.m"
    MR_bool report__succeeded;
#line 441 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 441 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 441 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 441 "report.m"
    if (report__succeeded)
#line 441 "report.m"
      report__succeeded = MR_TRUE;
#line 441 "report.m"
    else
#line 441 "report.m"
      {
#line 441 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 441 "report.m"
        MR_Word report__TypeInfo_13_13;
#line 441 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 441 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 441 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 441 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 441 "report.m"
        MR_Integer report__V_14_14 = (MR_Integer) report__V_3_3;
#line 441 "report.m"
        MR_Integer report__V_15_15 = (MR_Integer) report__V_6_6;

#line 13834 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 441 "report.m"
        if (report__succeeded)
#line 441 "report.m"
          {
#line 13840 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[30];
#line 13842 "report.c"
            {
#line 13844 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 441 "report.m"
            if (report__succeeded)
#line 441 "report.m"
              {
#line 13851 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[31];
#line 13853 "report.c"
                {
#line 13855 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 441 "report.m"
              }
#line 441 "report.m"
          }
#line 441 "report.m"
      }
#line 441 "report.m"
    return report__succeeded;
#line 441 "report.m"
  }
#line 441 "report.m"
}

#line 492 "report.m"
void MR_CALL 
report____Compare____proc_static_dump_info_0_0(
#line 492 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 492 "report.m"
  MR_Word report__HeadVar__2_2,
#line 492 "report.m"
  MR_Word report__HeadVar__3_3)
#line 492 "report.m"
{
#line 492 "report.m"
  {
#line 492 "report.m"
    MR_bool report__succeeded;
#line 492 "report.m"
    MR_Integer report__CastX_27 = (MR_Integer) report__HeadVar__2_2;
#line 492 "report.m"
    MR_Integer report__CastY_28 = (MR_Integer) report__HeadVar__3_3;

#line 492 "report.m"
    report__succeeded = (report__CastX_27 == report__CastY_28);
#line 492 "report.m"
    if (report__succeeded)
#line 13895 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 492 "report.m"
    else
#line 492 "report.m"
      {
#line 492 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 492 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 492 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 492 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 492 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 492 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 492 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 492 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 492 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 492 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 492 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 492 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 492 "report.m"
        MR_String report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 492 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 492 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 492 "report.m"
        MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 492 "report.m"
        MR_Word report__V_20_20;
#line 492 "report.m"
        MR_Integer report__V_37_37 = (MR_Integer) report__V_4_4;
#line 492 "report.m"
        MR_Integer report__V_38_38 = (MR_Integer) report__V_12_12;

#line 492 "report.m"
        {
#line 492 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_20_20, report__V_37_37, report__V_38_38);
        }
#line 13945 "report.c"
        report__succeeded = (report__V_20_20 == (MR_Integer) 0);
#line 492 "report.m"
        report__succeeded = !(report__succeeded);
#line 492 "report.m"
        if (report__succeeded)
#line 492 "report.m"
          *report__HeadVar__1_1 = report__V_20_20;
#line 492 "report.m"
        else
#line 492 "report.m"
          {
#line 492 "report.m"
            MR_Word report__V_21_21;

#line 492 "report.m"
            {
#line 492 "report.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_21_21, report__V_5_5, report__V_13_13);
            }
#line 13965 "report.c"
            report__succeeded = (report__V_21_21 == (MR_Integer) 0);
#line 492 "report.m"
            report__succeeded = !(report__succeeded);
#line 492 "report.m"
            if (report__succeeded)
#line 492 "report.m"
              *report__HeadVar__1_1 = report__V_21_21;
#line 492 "report.m"
            else
#line 492 "report.m"
              {
#line 492 "report.m"
                MR_Word report__V_22_22;

#line 492 "report.m"
                {
#line 492 "report.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_22_22, report__V_6_6, report__V_14_14);
                }
#line 13985 "report.c"
                report__succeeded = (report__V_22_22 == (MR_Integer) 0);
#line 492 "report.m"
                report__succeeded = !(report__succeeded);
#line 492 "report.m"
                if (report__succeeded)
#line 492 "report.m"
                  *report__HeadVar__1_1 = report__V_22_22;
#line 492 "report.m"
                else
#line 492 "report.m"
                  {
#line 492 "report.m"
                    MR_Word report__V_23_23;

#line 492 "report.m"
                    {
#line 492 "report.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_23_23, report__V_7_7, report__V_15_15);
                    }
#line 14005 "report.c"
                    report__succeeded = (report__V_23_23 == (MR_Integer) 0);
#line 492 "report.m"
                    report__succeeded = !(report__succeeded);
#line 492 "report.m"
                    if (report__succeeded)
#line 492 "report.m"
                      *report__HeadVar__1_1 = report__V_23_23;
#line 492 "report.m"
                    else
#line 492 "report.m"
                      {
#line 492 "report.m"
                        MR_Word report__V_24_24;

#line 492 "report.m"
                        {
#line 492 "report.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_24_24, report__V_8_8, report__V_16_16);
                        }
#line 14025 "report.c"
                        report__succeeded = (report__V_24_24 == (MR_Integer) 0);
#line 492 "report.m"
                        report__succeeded = !(report__succeeded);
#line 492 "report.m"
                        if (report__succeeded)
#line 492 "report.m"
                          *report__HeadVar__1_1 = report__V_24_24;
#line 492 "report.m"
                        else
#line 492 "report.m"
                          {
#line 492 "report.m"
                            MR_Word report__V_25_25;

#line 492 "report.m"
                            {
#line 492 "report.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_25_25, report__V_9_9, report__V_17_17);
                            }
#line 14045 "report.c"
                            report__succeeded = (report__V_25_25 == (MR_Integer) 0);
#line 492 "report.m"
                            report__succeeded = !(report__succeeded);
#line 492 "report.m"
                            if (report__succeeded)
#line 492 "report.m"
                              *report__HeadVar__1_1 = report__V_25_25;
#line 492 "report.m"
                            else
#line 492 "report.m"
                              {
#line 492 "report.m"
                                MR_Word report__V_26_26;

#line 492 "report.m"
                                {
#line 492 "report.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_26_26, report__V_10_10, report__V_18_18);
                                }
#line 14065 "report.c"
                                report__succeeded = (report__V_26_26 == (MR_Integer) 0);
#line 492 "report.m"
                                report__succeeded = !(report__succeeded);
#line 492 "report.m"
                                if (report__succeeded)
#line 492 "report.m"
                                  *report__HeadVar__1_1 = report__V_26_26;
#line 492 "report.m"
                                else
#line 492 "report.m"
                                  {
#line 492 "report.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_11_11, report__V_19_19);
#line 492 "report.m"
                                    return;
                                  }
#line 492 "report.m"
                              }
#line 492 "report.m"
                          }
#line 492 "report.m"
                      }
#line 492 "report.m"
                  }
#line 492 "report.m"
              }
#line 492 "report.m"
          }
#line 492 "report.m"
      }
#line 492 "report.m"
  }
#line 492 "report.m"
}

#line 492 "report.m"
MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0(
#line 492 "report.m"
  MR_Word report__HeadVar__1_1,
#line 492 "report.m"
  MR_Word report__HeadVar__2_2)
#line 492 "report.m"
{
#line 492 "report.m"
  {
#line 492 "report.m"
    MR_bool report__succeeded;
#line 492 "report.m"
    MR_Integer report__CastX_19 = (MR_Integer) report__HeadVar__1_1;
#line 492 "report.m"
    MR_Integer report__CastY_20 = (MR_Integer) report__HeadVar__2_2;

#line 492 "report.m"
    report__succeeded = (report__CastX_19 == report__CastY_20);
#line 492 "report.m"
    if (report__succeeded)
#line 492 "report.m"
      report__succeeded = MR_TRUE;
#line 492 "report.m"
    else
#line 492 "report.m"
      {
#line 492 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 492 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 492 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 492 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 492 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 492 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 492 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 492 "report.m"
        MR_String report__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 492 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 492 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 492 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 492 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 492 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 492 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 492 "report.m"
        MR_Integer report__V_22_22 = (MR_Integer) report__V_3_3;
#line 492 "report.m"
        MR_Integer report__V_23_23 = (MR_Integer) report__V_11_11;

#line 14166 "report.c"
        report__succeeded = (report__V_22_22 == report__V_23_23);
#line 492 "report.m"
        if (report__succeeded)
#line 492 "report.m"
          {
#line 14172 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_12_12) == 0);
#line 492 "report.m"
            if (report__succeeded)
#line 492 "report.m"
              {
#line 14178 "report.c"
                report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 492 "report.m"
                if (report__succeeded)
#line 492 "report.m"
                  {
#line 14184 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 492 "report.m"
                    if (report__succeeded)
#line 492 "report.m"
                      {
#line 14190 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 492 "report.m"
                        if (report__succeeded)
#line 492 "report.m"
                          {
#line 14196 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_16_16);
#line 492 "report.m"
                            if (report__succeeded)
#line 492 "report.m"
                              {
#line 14202 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_17_17);
#line 492 "report.m"
                                if (report__succeeded)
#line 14206 "report.c"
                                  report__succeeded = (report__V_10_10 == report__V_18_18);
#line 492 "report.m"
                              }
#line 492 "report.m"
                          }
#line 492 "report.m"
                      }
#line 492 "report.m"
                  }
#line 492 "report.m"
              }
#line 492 "report.m"
          }
#line 492 "report.m"
      }
#line 492 "report.m"
    return report__succeeded;
#line 492 "report.m"
  }
#line 492 "report.m"
}

#line 391 "report.m"
void MR_CALL 
report____Compare____proc_report_0_0(
#line 391 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 391 "report.m"
  MR_Word report__HeadVar__2_2,
#line 391 "report.m"
  MR_Word report__HeadVar__3_3)
#line 391 "report.m"
{
#line 391 "report.m"
  {
#line 391 "report.m"
    MR_bool report__succeeded;
#line 391 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 391 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 391 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 391 "report.m"
    if (report__succeeded)
#line 14253 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 391 "report.m"
    else
#line 391 "report.m"
      {
#line 391 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 391 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 391 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 391 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 391 "report.m"
        MR_Word report__V_10_10;

#line 391 "report.m"
        {
#line 391 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[28], &report__V_10_10, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
        }
#line 14279 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 391 "report.m"
        report__succeeded = !(report__succeeded);
#line 391 "report.m"
        if (report__succeeded)
#line 391 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 391 "report.m"
        else
#line 391 "report.m"
          {
#line 391 "report.m"
            MR_Word report__V_11_11;

#line 391 "report.m"
            {
#line 391 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[4], &report__V_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
            }
#line 14299 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 391 "report.m"
            report__succeeded = !(report__succeeded);
#line 391 "report.m"
            if (report__succeeded)
#line 391 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 391 "report.m"
            else
#line 391 "report.m"
              {
#line 391 "report.m"
                {
#line 391 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[29], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 391 "report.m"
                  return;
                }
#line 391 "report.m"
              }
#line 391 "report.m"
          }
#line 391 "report.m"
      }
#line 391 "report.m"
  }
#line 391 "report.m"
}

#line 391 "report.m"
MR_bool MR_CALL 
report____Unify____proc_report_0_0(
#line 391 "report.m"
  MR_Word report__HeadVar__1_1,
#line 391 "report.m"
  MR_Word report__HeadVar__2_2)
#line 391 "report.m"
{
#line 391 "report.m"
  {
#line 391 "report.m"
    MR_bool report__succeeded;
#line 391 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 391 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 391 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 391 "report.m"
    if (report__succeeded)
#line 391 "report.m"
      report__succeeded = MR_TRUE;
#line 391 "report.m"
    else
#line 391 "report.m"
      {
#line 391 "report.m"
        MR_Word report__TypeCtorInfo_12_12;
#line 391 "report.m"
        MR_Word report__TypeInfo_13_13;
#line 391 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 391 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 391 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 391 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 14374 "report.c"
        {
#line 14376 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_callers_counts_0, report__V_3_3, report__V_6_6);
        }
#line 391 "report.m"
        if (report__succeeded)
#line 391 "report.m"
          {
#line 14383 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 14385 "report.c"
            {
#line 14387 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 391 "report.m"
            if (report__succeeded)
#line 391 "report.m"
              {
#line 14394 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[29];
#line 14396 "report.c"
                {
#line 14398 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 391 "report.m"
              }
#line 391 "report.m"
          }
#line 391 "report.m"
      }
#line 391 "report.m"
    return report__succeeded;
#line 391 "report.m"
  }
#line 391 "report.m"
}

#line 643 "report.m"
void MR_CALL 
report____Compare____proc_is_active_0_0(
#line 643 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 643 "report.m"
  MR_Word report__HeadVar__2_2,
#line 643 "report.m"
  MR_Word report__HeadVar__3_3)
#line 643 "report.m"
{
#line 643 "report.m"
  {
#line 643 "report.m"
    MR_bool report__succeeded;
#line 643 "report.m"
    MR_Integer report__Cast_HeadVar1_4 = (MR_Integer) report__HeadVar__2_2;
#line 643 "report.m"
    MR_Integer report__Cast_HeadVar2_5 = (MR_Integer) report__HeadVar__3_3;

#line 643 "report.m"
    {
#line 643 "report.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 643 "report.m"
      return;
    }
#line 643 "report.m"
  }
#line 643 "report.m"
}

#line 643 "report.m"
MR_bool MR_CALL 
report____Unify____proc_is_active_0_0(
#line 643 "report.m"
  MR_Word report__HeadVar__2_1,
#line 643 "report.m"
  MR_Word report__HeadVar__2_2)
#line 643 "report.m"
{
#line 14455 "report.c"
  {
#line 14457 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 14460 "report.c"
    return report__succeeded;
#line 14462 "report.c"
  }
#line 643 "report.m"
}

#line 506 "report.m"
void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0(
#line 506 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 506 "report.m"
  MR_Word report__HeadVar__2_2,
#line 506 "report.m"
  MR_Word report__HeadVar__3_3)
#line 506 "report.m"
{
#line 506 "report.m"
  {
#line 506 "report.m"
    MR_bool report__succeeded;
#line 506 "report.m"
    MR_Integer report__CastX_27 = (MR_Integer) report__HeadVar__2_2;
#line 506 "report.m"
    MR_Integer report__CastY_28 = (MR_Integer) report__HeadVar__3_3;

#line 506 "report.m"
    report__succeeded = (report__CastX_27 == report__CastY_28);
#line 506 "report.m"
    if (report__succeeded)
#line 14491 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 506 "report.m"
    else
#line 506 "report.m"
      {
#line 506 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 506 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 506 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 506 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 506 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 506 "report.m"
        MR_String report__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 506 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 506 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 506 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 506 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 506 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 506 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 506 "report.m"
        MR_String report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 506 "report.m"
        MR_String report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 506 "report.m"
        MR_Word report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 506 "report.m"
        MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 506 "report.m"
        MR_Word report__V_20_20;
#line 506 "report.m"
        MR_Integer report__V_37_37 = (MR_Integer) report__V_4_4;
#line 506 "report.m"
        MR_Integer report__V_38_38 = (MR_Integer) report__V_12_12;

#line 506 "report.m"
        {
#line 506 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_20_20, report__V_37_37, report__V_38_38);
        }
#line 14541 "report.c"
        report__succeeded = (report__V_20_20 == (MR_Integer) 0);
#line 506 "report.m"
        report__succeeded = !(report__succeeded);
#line 506 "report.m"
        if (report__succeeded)
#line 506 "report.m"
          *report__HeadVar__1_1 = report__V_20_20;
#line 506 "report.m"
        else
#line 506 "report.m"
          {
#line 506 "report.m"
            MR_Word report__V_21_21;
#line 506 "report.m"
            MR_Integer report__V_39_39 = (MR_Integer) report__V_5_5;
#line 506 "report.m"
            MR_Integer report__V_40_40 = (MR_Integer) report__V_13_13;

#line 506 "report.m"
            {
#line 506 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_21_21, report__V_39_39, report__V_40_40);
            }
#line 14565 "report.c"
            report__succeeded = (report__V_21_21 == (MR_Integer) 0);
#line 506 "report.m"
            report__succeeded = !(report__succeeded);
#line 506 "report.m"
            if (report__succeeded)
#line 506 "report.m"
              *report__HeadVar__1_1 = report__V_21_21;
#line 506 "report.m"
            else
#line 506 "report.m"
              {
#line 506 "report.m"
                MR_Word report__V_22_22;

#line 506 "report.m"
                {
#line 506 "report.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_22_22, report__V_6_6, report__V_14_14);
                }
#line 14585 "report.c"
                report__succeeded = (report__V_22_22 == (MR_Integer) 0);
#line 506 "report.m"
                report__succeeded = !(report__succeeded);
#line 506 "report.m"
                if (report__succeeded)
#line 506 "report.m"
                  *report__HeadVar__1_1 = report__V_22_22;
#line 506 "report.m"
                else
#line 506 "report.m"
                  {
#line 506 "report.m"
                    MR_Word report__V_23_23;

#line 506 "report.m"
                    {
#line 506 "report.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_23_23, report__V_7_7, report__V_15_15);
                    }
#line 14605 "report.c"
                    report__succeeded = (report__V_23_23 == (MR_Integer) 0);
#line 506 "report.m"
                    report__succeeded = !(report__succeeded);
#line 506 "report.m"
                    if (report__succeeded)
#line 506 "report.m"
                      *report__HeadVar__1_1 = report__V_23_23;
#line 506 "report.m"
                    else
#line 506 "report.m"
                      {
#line 506 "report.m"
                        MR_Word report__V_24_24;

#line 506 "report.m"
                        {
#line 506 "report.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_24_24, report__V_8_8, report__V_16_16);
                        }
#line 14625 "report.c"
                        report__succeeded = (report__V_24_24 == (MR_Integer) 0);
#line 506 "report.m"
                        report__succeeded = !(report__succeeded);
#line 506 "report.m"
                        if (report__succeeded)
#line 506 "report.m"
                          *report__HeadVar__1_1 = report__V_24_24;
#line 506 "report.m"
                        else
#line 506 "report.m"
                          {
#line 506 "report.m"
                            MR_Word report__V_25_25;

#line 506 "report.m"
                            {
#line 506 "report.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_25_25, report__V_9_9, report__V_17_17);
                            }
#line 14645 "report.c"
                            report__succeeded = (report__V_25_25 == (MR_Integer) 0);
#line 506 "report.m"
                            report__succeeded = !(report__succeeded);
#line 506 "report.m"
                            if (report__succeeded)
#line 506 "report.m"
                              *report__HeadVar__1_1 = report__V_25_25;
#line 506 "report.m"
                            else
#line 506 "report.m"
                              {
#line 506 "report.m"
                                MR_Word report__V_26_26;

#line 506 "report.m"
                                {
#line 506 "report.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[25], &report__V_26_26, ((MR_Box) (report__V_10_10)), ((MR_Box) (report__V_18_18)));
                                }
#line 14665 "report.c"
                                report__succeeded = (report__V_26_26 == (MR_Integer) 0);
#line 506 "report.m"
                                report__succeeded = !(report__succeeded);
#line 506 "report.m"
                                if (report__succeeded)
#line 506 "report.m"
                                  *report__HeadVar__1_1 = report__V_26_26;
#line 506 "report.m"
                                else
#line 506 "report.m"
                                  {
#line 506 "report.m"
                                    {
#line 506 "report.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[27], report__HeadVar__1_1, ((MR_Box) (report__V_11_11)), ((MR_Box) (report__V_19_19)));
#line 506 "report.m"
                                      return;
                                    }
#line 506 "report.m"
                                  }
#line 506 "report.m"
                              }
#line 506 "report.m"
                          }
#line 506 "report.m"
                      }
#line 506 "report.m"
                  }
#line 506 "report.m"
              }
#line 506 "report.m"
          }
#line 506 "report.m"
      }
#line 506 "report.m"
  }
#line 506 "report.m"
}

#line 506 "report.m"
MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0(
#line 506 "report.m"
  MR_Word report__HeadVar__1_1,
#line 506 "report.m"
  MR_Word report__HeadVar__2_2)
#line 506 "report.m"
{
#line 506 "report.m"
  {
#line 506 "report.m"
    MR_bool report__succeeded;
#line 506 "report.m"
    MR_Integer report__CastX_19 = (MR_Integer) report__HeadVar__1_1;
#line 506 "report.m"
    MR_Integer report__CastY_20 = (MR_Integer) report__HeadVar__2_2;

#line 506 "report.m"
    report__succeeded = (report__CastX_19 == report__CastY_20);
#line 506 "report.m"
    if (report__succeeded)
#line 506 "report.m"
      report__succeeded = MR_TRUE;
#line 506 "report.m"
    else
#line 506 "report.m"
      {
#line 506 "report.m"
        MR_Word report__TypeInfo_23_23;
#line 506 "report.m"
        MR_Word report__TypeInfo_24_24;
#line 506 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 506 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 506 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 506 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 506 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 506 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 506 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 506 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 506 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 506 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 506 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 506 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 506 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 506 "report.m"
        MR_String report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 506 "report.m"
        MR_Word report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 506 "report.m"
        MR_Word report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 506 "report.m"
        MR_Integer report__V_25_25;
#line 506 "report.m"
        MR_Integer report__V_26_26;
#line 506 "report.m"
        MR_Integer report__V_27_27;
#line 506 "report.m"
        MR_Integer report__V_28_28;

#line 14778 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 506 "report.m"
        if (report__succeeded)
#line 506 "report.m"
          {
#line 14784 "report.c"
            report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 506 "report.m"
            if (report__succeeded)
#line 506 "report.m"
              {
#line 14790 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 506 "report.m"
                if (report__succeeded)
#line 506 "report.m"
                  {
#line 14796 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_16_16) == 0);
#line 506 "report.m"
                    if (report__succeeded)
#line 506 "report.m"
                      {
#line 14802 "report.c"
                        report__V_25_25 = (MR_Integer) report__V_3_3;
#line 14804 "report.c"
                        report__V_26_26 = (MR_Integer) report__V_11_11;
#line 14806 "report.c"
                        report__succeeded = (report__V_25_25 == report__V_26_26);
#line 506 "report.m"
                        if (report__succeeded)
#line 506 "report.m"
                          {
#line 14812 "report.c"
                            report__V_27_27 = (MR_Integer) report__V_4_4;
#line 14814 "report.c"
                            report__V_28_28 = (MR_Integer) report__V_12_12;
#line 14816 "report.c"
                            report__succeeded = (report__V_27_27 == report__V_28_28);
#line 506 "report.m"
                            if (report__succeeded)
#line 506 "report.m"
                              {
#line 14822 "report.c"
                                report__TypeInfo_23_23 = (MR_Word) &report_scalar_common_1[25];
#line 14824 "report.c"
                                {
#line 14826 "report.c"
                                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_23_23, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_17_17)));
                                }
#line 506 "report.m"
                                if (report__succeeded)
#line 506 "report.m"
                                  {
#line 14833 "report.c"
                                    report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[27];
#line 14835 "report.c"
                                    {
#line 14837 "report.c"
                                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_24_24, ((MR_Box) (report__V_10_10)), ((MR_Box) (report__V_18_18)));
                                    }
#line 506 "report.m"
                                  }
#line 506 "report.m"
                              }
#line 506 "report.m"
                          }
#line 506 "report.m"
                      }
#line 506 "report.m"
                  }
#line 506 "report.m"
              }
#line 506 "report.m"
          }
#line 506 "report.m"
      }
#line 506 "report.m"
    return report__succeeded;
#line 506 "report.m"
  }
#line 506 "report.m"
}

#line 650 "report.m"
void MR_CALL 
report____Compare____proc_desc_0_0(
#line 650 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 650 "report.m"
  MR_Word report__HeadVar__2_2,
#line 650 "report.m"
  MR_Word report__HeadVar__3_3)
#line 650 "report.m"
{
#line 650 "report.m"
  {
#line 650 "report.m"
    MR_bool report__succeeded;
#line 650 "report.m"
    MR_Integer report__CastX_21 = (MR_Integer) report__HeadVar__2_2;
#line 650 "report.m"
    MR_Integer report__CastY_22 = (MR_Integer) report__HeadVar__3_3;

#line 650 "report.m"
    report__succeeded = (report__CastX_21 == report__CastY_22);
#line 650 "report.m"
    if (report__succeeded)
#line 14887 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 650 "report.m"
    else
#line 650 "report.m"
      {
#line 650 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 650 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 650 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 650 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 650 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 650 "report.m"
        MR_String report__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 650 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 650 "report.m"
        MR_String report__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 650 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 650 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 650 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 650 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 650 "report.m"
        MR_Word report__V_16_16;
#line 650 "report.m"
        MR_Integer report__V_29_29 = (MR_Integer) report__V_4_4;
#line 650 "report.m"
        MR_Integer report__V_30_30 = (MR_Integer) report__V_10_10;

#line 650 "report.m"
        {
#line 650 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_16_16, report__V_29_29, report__V_30_30);
        }
#line 14929 "report.c"
        report__succeeded = (report__V_16_16 == (MR_Integer) 0);
#line 650 "report.m"
        report__succeeded = !(report__succeeded);
#line 650 "report.m"
        if (report__succeeded)
#line 650 "report.m"
          *report__HeadVar__1_1 = report__V_16_16;
#line 650 "report.m"
        else
#line 650 "report.m"
          {
#line 650 "report.m"
            MR_Word report__V_17_17;

#line 650 "report.m"
            {
#line 650 "report.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_17_17, report__V_5_5, report__V_11_11);
            }
#line 14949 "report.c"
            report__succeeded = (report__V_17_17 == (MR_Integer) 0);
#line 650 "report.m"
            report__succeeded = !(report__succeeded);
#line 650 "report.m"
            if (report__succeeded)
#line 650 "report.m"
              *report__HeadVar__1_1 = report__V_17_17;
#line 650 "report.m"
            else
#line 650 "report.m"
              {
#line 650 "report.m"
                MR_Word report__V_18_18;

#line 650 "report.m"
                {
#line 650 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_18_18, report__V_6_6, report__V_12_12);
                }
#line 14969 "report.c"
                report__succeeded = (report__V_18_18 == (MR_Integer) 0);
#line 650 "report.m"
                report__succeeded = !(report__succeeded);
#line 650 "report.m"
                if (report__succeeded)
#line 650 "report.m"
                  *report__HeadVar__1_1 = report__V_18_18;
#line 650 "report.m"
                else
#line 650 "report.m"
                  {
#line 650 "report.m"
                    MR_Word report__V_19_19;

#line 650 "report.m"
                    {
#line 650 "report.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_19_19, report__V_7_7, report__V_13_13);
                    }
#line 14989 "report.c"
                    report__succeeded = (report__V_19_19 == (MR_Integer) 0);
#line 650 "report.m"
                    report__succeeded = !(report__succeeded);
#line 650 "report.m"
                    if (report__succeeded)
#line 650 "report.m"
                      *report__HeadVar__1_1 = report__V_19_19;
#line 650 "report.m"
                    else
#line 650 "report.m"
                      {
#line 650 "report.m"
                        MR_Word report__V_20_20;

#line 650 "report.m"
                        {
#line 650 "report.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_20_20, report__V_8_8, report__V_14_14);
                        }
#line 15009 "report.c"
                        report__succeeded = (report__V_20_20 == (MR_Integer) 0);
#line 650 "report.m"
                        report__succeeded = !(report__succeeded);
#line 650 "report.m"
                        if (report__succeeded)
#line 650 "report.m"
                          *report__HeadVar__1_1 = report__V_20_20;
#line 650 "report.m"
                        else
#line 650 "report.m"
                          {
#line 650 "report.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_9_9, report__V_15_15);
#line 650 "report.m"
                            return;
                          }
#line 650 "report.m"
                      }
#line 650 "report.m"
                  }
#line 650 "report.m"
              }
#line 650 "report.m"
          }
#line 650 "report.m"
      }
#line 650 "report.m"
  }
#line 650 "report.m"
}

#line 650 "report.m"
MR_bool MR_CALL 
report____Unify____proc_desc_0_0(
#line 650 "report.m"
  MR_Word report__HeadVar__1_1,
#line 650 "report.m"
  MR_Word report__HeadVar__2_2)
#line 650 "report.m"
{
#line 650 "report.m"
  {
#line 650 "report.m"
    MR_bool report__succeeded;
#line 650 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__1_1;
#line 650 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__2_2;

#line 650 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 650 "report.m"
    if (report__succeeded)
#line 650 "report.m"
      report__succeeded = MR_TRUE;
#line 650 "report.m"
    else
#line 650 "report.m"
      {
#line 650 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 650 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 650 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 650 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 650 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 650 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 650 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 650 "report.m"
        MR_String report__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 650 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 650 "report.m"
        MR_String report__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 650 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 650 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 650 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_3_3;
#line 650 "report.m"
        MR_Integer report__V_19_19 = (MR_Integer) report__V_9_9;

#line 15098 "report.c"
        report__succeeded = (report__V_18_18 == report__V_19_19);
#line 650 "report.m"
        if (report__succeeded)
#line 650 "report.m"
          {
#line 15104 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_10_10) == 0);
#line 650 "report.m"
            if (report__succeeded)
#line 650 "report.m"
              {
#line 15110 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 650 "report.m"
                if (report__succeeded)
#line 650 "report.m"
                  {
#line 15116 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_12_12) == 0);
#line 650 "report.m"
                    if (report__succeeded)
#line 650 "report.m"
                      {
#line 15122 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_13_13) == 0);
#line 650 "report.m"
                        if (report__succeeded)
#line 15126 "report.c"
                          report__succeeded = (strcmp(report__V_8_8, report__V_14_14) == 0);
#line 650 "report.m"
                      }
#line 650 "report.m"
                  }
#line 650 "report.m"
              }
#line 650 "report.m"
          }
#line 650 "report.m"
      }
#line 650 "report.m"
    return report__succeeded;
#line 650 "report.m"
  }
#line 650 "report.m"
}

#line 448 "report.m"
void MR_CALL 
report____Compare____proc_callers_report_0_0(
#line 448 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 448 "report.m"
  MR_Word report__HeadVar__2_2,
#line 448 "report.m"
  MR_Word report__HeadVar__3_3)
#line 448 "report.m"
{
#line 448 "report.m"
  {
#line 448 "report.m"
    MR_bool report__succeeded;
#line 448 "report.m"
    MR_Integer report__CastX_21 = (MR_Integer) report__HeadVar__2_2;
#line 448 "report.m"
    MR_Integer report__CastY_22 = (MR_Integer) report__HeadVar__3_3;

#line 448 "report.m"
    report__succeeded = (report__CastX_21 == report__CastY_22);
#line 448 "report.m"
    if (report__succeeded)
#line 15169 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 448 "report.m"
    else
#line 448 "report.m"
      {
#line 448 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 448 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 448 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 448 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 448 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 448 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 448 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 448 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 448 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 448 "report.m"
        MR_Integer report__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 448 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 448 "report.m"
        MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 448 "report.m"
        MR_Word report__V_16_16;

#line 448 "report.m"
        {
#line 448 "report.m"
          report____Compare____proc_desc_0_0(&report__V_16_16, report__V_4_4, report__V_10_10);
        }
#line 15207 "report.c"
        report__succeeded = (report__V_16_16 == (MR_Integer) 0);
#line 448 "report.m"
        report__succeeded = !(report__succeeded);
#line 448 "report.m"
        if (report__succeeded)
#line 448 "report.m"
          *report__HeadVar__1_1 = report__V_16_16;
#line 448 "report.m"
        else
#line 448 "report.m"
          {
#line 448 "report.m"
            MR_Word report__V_17_17;

#line 448 "report.m"
            {
#line 448 "report.m"
              report____Compare____proc_callers_0_0(&report__V_17_17, report__V_5_5, report__V_11_11);
            }
#line 15227 "report.c"
            report__succeeded = (report__V_17_17 == (MR_Integer) 0);
#line 448 "report.m"
            report__succeeded = !(report__succeeded);
#line 448 "report.m"
            if (report__succeeded)
#line 448 "report.m"
              *report__HeadVar__1_1 = report__V_17_17;
#line 448 "report.m"
            else
#line 448 "report.m"
              {
#line 448 "report.m"
                MR_Word report__V_18_18;

#line 448 "report.m"
                {
#line 448 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_18_18, report__V_6_6, report__V_12_12);
                }
#line 15247 "report.c"
                report__succeeded = (report__V_18_18 == (MR_Integer) 0);
#line 448 "report.m"
                report__succeeded = !(report__succeeded);
#line 448 "report.m"
                if (report__succeeded)
#line 448 "report.m"
                  *report__HeadVar__1_1 = report__V_18_18;
#line 448 "report.m"
                else
#line 448 "report.m"
                  {
#line 448 "report.m"
                    MR_Word report__V_19_19;

#line 448 "report.m"
                    {
#line 448 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_19_19, report__V_7_7, report__V_13_13);
                    }
#line 15267 "report.c"
                    report__succeeded = (report__V_19_19 == (MR_Integer) 0);
#line 448 "report.m"
                    report__succeeded = !(report__succeeded);
#line 448 "report.m"
                    if (report__succeeded)
#line 448 "report.m"
                      *report__HeadVar__1_1 = report__V_19_19;
#line 448 "report.m"
                    else
#line 448 "report.m"
                      {
#line 448 "report.m"
                        MR_Word report__V_20_20;
#line 448 "report.m"
                        MR_Integer report__V_29_29 = (MR_Integer) report__V_8_8;
#line 448 "report.m"
                        MR_Integer report__V_30_30 = (MR_Integer) report__V_14_14;

#line 448 "report.m"
                        {
#line 448 "report.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_20_20, report__V_29_29, report__V_30_30);
                        }
#line 15291 "report.c"
                        report__succeeded = (report__V_20_20 == (MR_Integer) 0);
#line 448 "report.m"
                        report__succeeded = !(report__succeeded);
#line 448 "report.m"
                        if (report__succeeded)
#line 448 "report.m"
                          *report__HeadVar__1_1 = report__V_20_20;
#line 448 "report.m"
                        else
#line 448 "report.m"
                          {
#line 448 "report.m"
                            {
#line 448 "report.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[24], report__HeadVar__1_1, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_15_15)));
#line 448 "report.m"
                              return;
                            }
#line 448 "report.m"
                          }
#line 448 "report.m"
                      }
#line 448 "report.m"
                  }
#line 448 "report.m"
              }
#line 448 "report.m"
          }
#line 448 "report.m"
      }
#line 448 "report.m"
  }
#line 448 "report.m"
}

#line 448 "report.m"
MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0(
#line 448 "report.m"
  MR_Word report__HeadVar__1_1,
#line 448 "report.m"
  MR_Word report__HeadVar__2_2)
#line 448 "report.m"
{
#line 448 "report.m"
  {
#line 448 "report.m"
    MR_bool report__succeeded;
#line 448 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__1_1;
#line 448 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__2_2;

#line 448 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 448 "report.m"
    if (report__succeeded)
#line 448 "report.m"
      report__succeeded = MR_TRUE;
#line 448 "report.m"
    else
#line 448 "report.m"
      {
#line 448 "report.m"
        MR_Word report__TypeInfo_17_17;
#line 448 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 448 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 448 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 448 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 448 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 448 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 448 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 448 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 448 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 448 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 448 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 448 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));

#line 15382 "report.c"
        {
#line 15384 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_9_9);
        }
#line 448 "report.m"
        if (report__succeeded)
#line 448 "report.m"
          {
#line 15391 "report.c"
            {
#line 15393 "report.c"
              report__succeeded = report____Unify____proc_callers_0_0(report__V_4_4, report__V_10_10);
            }
#line 448 "report.m"
            if (report__succeeded)
#line 448 "report.m"
              {
#line 15400 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 448 "report.m"
                if (report__succeeded)
#line 448 "report.m"
                  {
#line 15406 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_12_12);
#line 448 "report.m"
                    if (report__succeeded)
#line 448 "report.m"
                      {
#line 15412 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_13_13);
#line 448 "report.m"
                        if (report__succeeded)
#line 448 "report.m"
                          {
#line 15418 "report.c"
                            report__TypeInfo_17_17 = (MR_Word) &report_scalar_common_1[24];
#line 15420 "report.c"
                            {
#line 15422 "report.c"
                              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_17_17, ((MR_Box) (report__V_8_8)), ((MR_Box) (report__V_14_14)));
                            }
#line 448 "report.m"
                          }
#line 448 "report.m"
                      }
#line 448 "report.m"
                  }
#line 448 "report.m"
              }
#line 448 "report.m"
          }
#line 448 "report.m"
      }
#line 448 "report.m"
    return report__succeeded;
#line 448 "report.m"
  }
#line 448 "report.m"
}

#line 474 "report.m"
void MR_CALL 
report____Compare____proc_callers_0_0(
#line 474 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 474 "report.m"
  MR_Word report__HeadVar__2_2,
#line 474 "report.m"
  MR_Word report__HeadVar__3_3)
#line 474 "report.m"
{
#line 474 "report.m"
  {
#line 474 "report.m"
    MR_bool report__succeeded;
#line 474 "report.m"
    MR_Integer report__CastX_36 = (MR_Integer) report__HeadVar__2_2;
#line 474 "report.m"
    MR_Integer report__CastY_37 = (MR_Integer) report__HeadVar__3_3;

#line 474 "report.m"
    report__succeeded = (report__CastX_36 == report__CastY_37);
#line 474 "report.m"
    if (report__succeeded)
#line 15468 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 474 "report.m"
    else
#line 474 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 474 "report.m"
        {
#line 474 "report.m"
          MR_Word report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));

#line 474 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 474 "report.m"
            {
#line 474 "report.m"
              MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));

#line 474 "report.m"
              {
#line 474 "report.m"
                mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[23], report__HeadVar__1_1, ((MR_Box) (report__V_42_42)), ((MR_Box) (report__V_5_5)));
#line 474 "report.m"
                return;
              }
#line 474 "report.m"
            }
#line 474 "report.m"
          else
#line 474 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15499 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
            else
#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15505 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
              else
#line 15509 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
        }
#line 474 "report.m"
      else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 474 "report.m"
          {
#line 474 "report.m"
            MR_Word report__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)));

#line 474 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 15524 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
            else
#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 474 "report.m"
                {
#line 474 "report.m"
                  MR_Word report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)));

#line 474 "report.m"
                  {
#line 474 "report.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[9], report__HeadVar__1_1, ((MR_Box) (report__V_43_43)), ((MR_Box) (report__V_35_35)));
#line 474 "report.m"
                    return;
                  }
#line 474 "report.m"
                }
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15548 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
                else
#line 15552 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
          }
#line 474 "report.m"
        else
#line 474 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 474 "report.m"
            {
#line 474 "report.m"
              MR_Word report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));

#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 15567 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15573 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
                else
#line 474 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 474 "report.m"
                    {
#line 474 "report.m"
                      MR_Word report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 0)));

#line 474 "report.m"
                      {
#line 474 "report.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[22], report__HeadVar__1_1, ((MR_Box) (report__V_44_44)), ((MR_Box) (report__V_25_25)));
#line 474 "report.m"
                        return;
                      }
#line 474 "report.m"
                    }
#line 474 "report.m"
                  else
#line 15595 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
            }
#line 474 "report.m"
          else
#line 474 "report.m"
            {
#line 474 "report.m"
              MR_Word report__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));

#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 15608 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15614 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
                else
#line 474 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15620 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
                  else
#line 474 "report.m"
                    {
#line 474 "report.m"
                      MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 0)));

#line 474 "report.m"
                      {
#line 474 "report.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[5], report__HeadVar__1_1, ((MR_Box) (report__V_45_45)), ((MR_Box) (report__V_15_15)));
#line 474 "report.m"
                        return;
                      }
#line 474 "report.m"
                    }
#line 474 "report.m"
            }
#line 474 "report.m"
  }
#line 474 "report.m"
}

#line 474 "report.m"
MR_bool MR_CALL 
report____Unify____proc_callers_0_0(
#line 474 "report.m"
  MR_Word report__HeadVar__1_1,
#line 474 "report.m"
  MR_Word report__HeadVar__2_2)
#line 474 "report.m"
{
#line 474 "report.m"
  {
#line 474 "report.m"
    MR_bool report__succeeded;
#line 474 "report.m"
    MR_Integer report__CastX_11 = (MR_Integer) report__HeadVar__1_1;
#line 474 "report.m"
    MR_Integer report__CastY_12 = (MR_Integer) report__HeadVar__2_2;

#line 474 "report.m"
    report__succeeded = (report__CastX_11 == report__CastY_12);
#line 474 "report.m"
    if (report__succeeded)
#line 474 "report.m"
      report__succeeded = MR_TRUE;
#line 474 "report.m"
    else
#line 474 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 474 "report.m"
        {
#line 474 "report.m"
          MR_Word report__TypeInfo_13_13;
#line 474 "report.m"
          MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "report.m"
          MR_Word report__V_4_4;

#line 474 "report.m"
          report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 474 "report.m"
          if (report__succeeded)
#line 474 "report.m"
            {
#line 474 "report.m"
              report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 15690 "report.c"
              report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[23];
#line 15692 "report.c"
              {
#line 15694 "report.c"
                return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_4_4)));
              }
#line 474 "report.m"
            }
#line 474 "report.m"
        }
#line 474 "report.m"
      else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 474 "report.m"
          {
#line 474 "report.m"
            MR_Word report__TypeInfo_14_14;
#line 474 "report.m"
            MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "report.m"
            MR_Word report__V_10_10;

#line 474 "report.m"
            report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 474 "report.m"
            if (report__succeeded)
#line 474 "report.m"
              {
#line 474 "report.m"
                report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)));
#line 15722 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[9];
#line 15724 "report.c"
                {
#line 15726 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_14_14, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_10_10)));
                }
#line 474 "report.m"
              }
#line 474 "report.m"
          }
#line 474 "report.m"
        else
#line 474 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 474 "report.m"
            {
#line 474 "report.m"
              MR_Word report__TypeInfo_15_15;
#line 474 "report.m"
              MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "report.m"
              MR_Word report__V_8_8;

#line 474 "report.m"
              report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 474 "report.m"
              if (report__succeeded)
#line 474 "report.m"
                {
#line 474 "report.m"
                  report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));
#line 15754 "report.c"
                  report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_1[22];
#line 15756 "report.c"
                  {
#line 15758 "report.c"
                    return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_15_15, ((MR_Box) (report__V_7_7)), ((MR_Box) (report__V_8_8)));
                  }
#line 474 "report.m"
                }
#line 474 "report.m"
            }
#line 474 "report.m"
          else
#line 474 "report.m"
            {
#line 474 "report.m"
              MR_Word report__TypeInfo_16_16;
#line 474 "report.m"
              MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 0)));
#line 474 "report.m"
              MR_Word report__V_6_6;

#line 474 "report.m"
              report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 474 "report.m"
              if (report__succeeded)
#line 474 "report.m"
                {
#line 474 "report.m"
                  report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));
#line 15784 "report.c"
                  report__TypeInfo_16_16 = (MR_Word) &report_scalar_common_1[5];
#line 15786 "report.c"
                  {
#line 15788 "report.c"
                    return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_16_16, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_6_6)));
                  }
#line 474 "report.m"
                }
#line 474 "report.m"
            }
#line 474 "report.m"
    return report__succeeded;
#line 474 "report.m"
  }
#line 474 "report.m"
}

#line 637 "report.m"
void MR_CALL 
report____Compare____proc_active_0_0(
#line 637 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 637 "report.m"
  MR_Word report__HeadVar__2_2,
#line 637 "report.m"
  MR_Word report__HeadVar__3_3)
#line 637 "report.m"
{
#line 637 "report.m"
  {
#line 637 "report.m"
    MR_bool report__succeeded;
#line 637 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 637 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 637 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 637 "report.m"
    if (report__succeeded)
#line 15826 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 637 "report.m"
    else
#line 637 "report.m"
      {
#line 637 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 637 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 637 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 637 "report.m"
        MR_Word report__V_8_8;

#line 637 "report.m"
        {
#line 637 "report.m"
          report____Compare____proc_desc_0_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 15848 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 637 "report.m"
        report__succeeded = !(report__succeeded);
#line 637 "report.m"
        if (report__succeeded)
#line 637 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 637 "report.m"
        else
#line 637 "report.m"
          {
#line 637 "report.m"
            MR_Integer report__V_13_13 = (MR_Integer) report__V_5_5;
#line 637 "report.m"
            MR_Integer report__V_14_14 = (MR_Integer) report__V_7_7;

#line 637 "report.m"
            {
#line 637 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_13_13, report__V_14_14);
#line 637 "report.m"
              return;
            }
#line 637 "report.m"
          }
#line 637 "report.m"
      }
#line 637 "report.m"
  }
#line 637 "report.m"
}

#line 637 "report.m"
MR_bool MR_CALL 
report____Unify____proc_active_0_0(
#line 637 "report.m"
  MR_Word report__HeadVar__1_1,
#line 637 "report.m"
  MR_Word report__HeadVar__2_2)
#line 637 "report.m"
{
#line 637 "report.m"
  {
#line 637 "report.m"
    MR_bool report__succeeded;
#line 637 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 637 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 637 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 637 "report.m"
    if (report__succeeded)
#line 637 "report.m"
      report__succeeded = MR_TRUE;
#line 637 "report.m"
    else
#line 637 "report.m"
      {
#line 637 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 637 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 637 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 15918 "report.c"
        {
#line 15920 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 637 "report.m"
        if (report__succeeded)
#line 15925 "report.c"
          report__succeeded = (report__V_4_4 == report__V_6_6);
#line 637 "report.m"
      }
#line 637 "report.m"
    return report__succeeded;
#line 637 "report.m"
  }
#line 637 "report.m"
}

#line 562 "report.m"
void MR_CALL 
report____Compare____perf_row_data_1_0(
#line 562 "report.m"
  MR_Word report__TypeInfo_for_T_32,
#line 562 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 562 "report.m"
  MR_Word report__HeadVar__2_2,
#line 562 "report.m"
  MR_Word report__HeadVar__3_3)
#line 562 "report.m"
{
#line 562 "report.m"
  {
#line 562 "report.m"
    MR_bool report__succeeded;
#line 562 "report.m"
    MR_Integer report__CastX_30 = (MR_Integer) report__HeadVar__2_2;
#line 562 "report.m"
    MR_Integer report__CastY_31 = (MR_Integer) report__HeadVar__3_3;

#line 562 "report.m"
    report__succeeded = (report__CastX_30 == report__CastY_31);
#line 562 "report.m"
    if (report__succeeded)
#line 15962 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 562 "report.m"
    else
#line 562 "report.m"
      {
#line 562 "report.m"
        MR_Box report__V_4_4 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0));
#line 562 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 562 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 562 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 562 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 562 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 562 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 562 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 562 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 562 "report.m"
        MR_Box report__V_13_13 = (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0));
#line 562 "report.m"
        MR_Integer report__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 562 "report.m"
        MR_Integer report__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 562 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 562 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 562 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 562 "report.m"
        MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 562 "report.m"
        MR_Word report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 562 "report.m"
        MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 8)));
#line 562 "report.m"
        MR_Word report__V_22_22;

#line 562 "report.m"
        {
#line 562 "report.m"
          mercury__builtin__compare_3_p_0(report__TypeInfo_for_T_32, &report__V_22_22, report__V_4_4, report__V_13_13);
        }
#line 16012 "report.c"
        report__succeeded = (report__V_22_22 == (MR_Integer) 0);
#line 562 "report.m"
        report__succeeded = !(report__succeeded);
#line 562 "report.m"
        if (report__succeeded)
#line 562 "report.m"
          *report__HeadVar__1_1 = report__V_22_22;
#line 562 "report.m"
        else
#line 562 "report.m"
          {
#line 562 "report.m"
            MR_Word report__V_23_23;

#line 562 "report.m"
            {
#line 562 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_23_23, report__V_5_5, report__V_14_14);
            }
#line 16032 "report.c"
            report__succeeded = (report__V_23_23 == (MR_Integer) 0);
#line 562 "report.m"
            report__succeeded = !(report__succeeded);
#line 562 "report.m"
            if (report__succeeded)
#line 562 "report.m"
              *report__HeadVar__1_1 = report__V_23_23;
#line 562 "report.m"
            else
#line 562 "report.m"
              {
#line 562 "report.m"
                MR_Word report__V_24_24;

#line 562 "report.m"
                {
#line 562 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_24_24, report__V_6_6, report__V_15_15);
                }
#line 16052 "report.c"
                report__succeeded = (report__V_24_24 == (MR_Integer) 0);
#line 562 "report.m"
                report__succeeded = !(report__succeeded);
#line 562 "report.m"
                if (report__succeeded)
#line 562 "report.m"
                  *report__HeadVar__1_1 = report__V_24_24;
#line 562 "report.m"
                else
#line 562 "report.m"
                  {
#line 562 "report.m"
                    MR_Word report__V_25_25;

#line 562 "report.m"
                    {
#line 562 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_25_25, report__V_7_7, report__V_16_16);
                    }
#line 16072 "report.c"
                    report__succeeded = (report__V_25_25 == (MR_Integer) 0);
#line 562 "report.m"
                    report__succeeded = !(report__succeeded);
#line 562 "report.m"
                    if (report__succeeded)
#line 562 "report.m"
                      *report__HeadVar__1_1 = report__V_25_25;
#line 562 "report.m"
                    else
#line 562 "report.m"
                      {
#line 562 "report.m"
                        MR_Word report__V_26_26;

#line 562 "report.m"
                        {
#line 562 "report.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_26_26, report__V_8_8, report__V_17_17);
                        }
#line 16092 "report.c"
                        report__succeeded = (report__V_26_26 == (MR_Integer) 0);
#line 562 "report.m"
                        report__succeeded = !(report__succeeded);
#line 562 "report.m"
                        if (report__succeeded)
#line 562 "report.m"
                          *report__HeadVar__1_1 = report__V_26_26;
#line 562 "report.m"
                        else
#line 562 "report.m"
                          {
#line 562 "report.m"
                            MR_Word report__V_27_27;

#line 562 "report.m"
                            {
#line 562 "report.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_27_27, report__V_9_9, report__V_18_18);
                            }
#line 16112 "report.c"
                            report__succeeded = (report__V_27_27 == (MR_Integer) 0);
#line 562 "report.m"
                            report__succeeded = !(report__succeeded);
#line 562 "report.m"
                            if (report__succeeded)
#line 562 "report.m"
                              *report__HeadVar__1_1 = report__V_27_27;
#line 562 "report.m"
                            else
#line 562 "report.m"
                              {
#line 562 "report.m"
                                MR_Word report__V_28_28;

#line 562 "report.m"
                                {
#line 562 "report.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_28_28, report__V_10_10, report__V_19_19);
                                }
#line 16132 "report.c"
                                report__succeeded = (report__V_28_28 == (MR_Integer) 0);
#line 562 "report.m"
                                report__succeeded = !(report__succeeded);
#line 562 "report.m"
                                if (report__succeeded)
#line 562 "report.m"
                                  *report__HeadVar__1_1 = report__V_28_28;
#line 562 "report.m"
                                else
#line 562 "report.m"
                                  {
#line 562 "report.m"
                                    MR_Word report__V_29_29;

#line 562 "report.m"
                                    {
#line 562 "report.m"
                                      report____Compare____inheritable_perf_0_0(&report__V_29_29, report__V_11_11, report__V_20_20);
                                    }
#line 16152 "report.c"
                                    report__succeeded = (report__V_29_29 == (MR_Integer) 0);
#line 562 "report.m"
                                    report__succeeded = !(report__succeeded);
#line 562 "report.m"
                                    if (report__succeeded)
#line 562 "report.m"
                                      *report__HeadVar__1_1 = report__V_29_29;
#line 562 "report.m"
                                    else
#line 562 "report.m"
                                      {
#line 562 "report.m"
                                        {
#line 562 "report.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[20], report__HeadVar__1_1, ((MR_Box) (report__V_12_12)), ((MR_Box) (report__V_21_21)));
#line 562 "report.m"
                                          return;
                                        }
#line 562 "report.m"
                                      }
#line 562 "report.m"
                                  }
#line 562 "report.m"
                              }
#line 562 "report.m"
                          }
#line 562 "report.m"
                      }
#line 562 "report.m"
                  }
#line 562 "report.m"
              }
#line 562 "report.m"
          }
#line 562 "report.m"
      }
#line 562 "report.m"
  }
#line 562 "report.m"
}

#line 562 "report.m"
MR_bool MR_CALL 
report____Unify____perf_row_data_1_0(
#line 562 "report.m"
  MR_Word report__TypeInfo_for_T_23,
#line 562 "report.m"
  MR_Word report__HeadVar__1_1,
#line 562 "report.m"
  MR_Word report__HeadVar__2_2)
#line 562 "report.m"
{
#line 562 "report.m"
  {
#line 562 "report.m"
    MR_bool report__succeeded;
#line 562 "report.m"
    MR_Integer report__CastX_21 = (MR_Integer) report__HeadVar__1_1;
#line 562 "report.m"
    MR_Integer report__CastY_22 = (MR_Integer) report__HeadVar__2_2;

#line 562 "report.m"
    report__succeeded = (report__CastX_21 == report__CastY_22);
#line 562 "report.m"
    if (report__succeeded)
#line 562 "report.m"
      report__succeeded = MR_TRUE;
#line 562 "report.m"
    else
#line 562 "report.m"
      {
#line 562 "report.m"
        MR_Word report__TypeInfo_24_24;
#line 562 "report.m"
        MR_Box report__V_3_3 = (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0));
#line 562 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 562 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 562 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 562 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 562 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 562 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 562 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 562 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 8)));
#line 562 "report.m"
        MR_Box report__V_12_12 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0));
#line 562 "report.m"
        MR_Integer report__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 562 "report.m"
        MR_Integer report__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 562 "report.m"
        MR_Integer report__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 562 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 562 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 562 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 562 "report.m"
        MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 562 "report.m"
        MR_Word report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));

#line 16263 "report.c"
        {
#line 16265 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_T_23, report__V_3_3, report__V_12_12);
        }
#line 562 "report.m"
        if (report__succeeded)
#line 562 "report.m"
          {
#line 16272 "report.c"
            report__succeeded = (report__V_4_4 == report__V_13_13);
#line 562 "report.m"
            if (report__succeeded)
#line 562 "report.m"
              {
#line 16278 "report.c"
                report__succeeded = (report__V_5_5 == report__V_14_14);
#line 562 "report.m"
                if (report__succeeded)
#line 562 "report.m"
                  {
#line 16284 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_15_15);
#line 562 "report.m"
                    if (report__succeeded)
#line 562 "report.m"
                      {
#line 16290 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_16_16);
#line 562 "report.m"
                        if (report__succeeded)
#line 562 "report.m"
                          {
#line 16296 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_17_17);
#line 562 "report.m"
                            if (report__succeeded)
#line 562 "report.m"
                              {
#line 16302 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_18_18);
#line 562 "report.m"
                                if (report__succeeded)
#line 562 "report.m"
                                  {
#line 16308 "report.c"
                                    {
#line 16310 "report.c"
                                      report__succeeded = report____Unify____inheritable_perf_0_0(report__V_10_10, report__V_19_19);
                                    }
#line 562 "report.m"
                                    if (report__succeeded)
#line 562 "report.m"
                                      {
#line 16317 "report.c"
                                        report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[20];
#line 16319 "report.c"
                                        {
#line 16321 "report.c"
                                          return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_24_24, ((MR_Box) (report__V_11_11)), ((MR_Box) (report__V_20_20)));
                                        }
#line 562 "report.m"
                                      }
#line 562 "report.m"
                                  }
#line 562 "report.m"
                              }
#line 562 "report.m"
                          }
#line 562 "report.m"
                      }
#line 562 "report.m"
                  }
#line 562 "report.m"
              }
#line 562 "report.m"
          }
#line 562 "report.m"
      }
#line 562 "report.m"
    return report__succeeded;
#line 562 "report.m"
  }
#line 562 "report.m"
}

#line 435 "report.m"
void MR_CALL 
report____Compare____normal_callee_id_0_0(
#line 435 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 435 "report.m"
  MR_Word report__HeadVar__2_2,
#line 435 "report.m"
  MR_Word report__HeadVar__3_3)
#line 435 "report.m"
{
#line 435 "report.m"
  {
#line 435 "report.m"
    MR_bool report__succeeded;
#line 435 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 435 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 435 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 435 "report.m"
    if (report__succeeded)
#line 16373 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 435 "report.m"
    else
#line 435 "report.m"
      {
#line 435 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 435 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 435 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 435 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 435 "report.m"
        MR_Word report__V_8_8;

#line 435 "report.m"
        {
#line 435 "report.m"
          report____Compare____proc_desc_0_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 16395 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 435 "report.m"
        report__succeeded = !(report__succeeded);
#line 435 "report.m"
        if (report__succeeded)
#line 435 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 435 "report.m"
        else
#line 435 "report.m"
          {
#line 435 "report.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_5_5, report__V_7_7);
#line 435 "report.m"
            return;
          }
#line 435 "report.m"
      }
#line 435 "report.m"
  }
#line 435 "report.m"
}

#line 435 "report.m"
MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0(
#line 435 "report.m"
  MR_Word report__HeadVar__1_1,
#line 435 "report.m"
  MR_Word report__HeadVar__2_2)
#line 435 "report.m"
{
#line 435 "report.m"
  {
#line 435 "report.m"
    MR_bool report__succeeded;
#line 435 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 435 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 435 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 435 "report.m"
    if (report__succeeded)
#line 435 "report.m"
      report__succeeded = MR_TRUE;
#line 435 "report.m"
    else
#line 435 "report.m"
      {
#line 435 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 435 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 435 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 16456 "report.c"
        {
#line 16458 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 435 "report.m"
        if (report__succeeded)
#line 16463 "report.c"
          report__succeeded = (strcmp(report__V_4_4, report__V_6_6) == 0);
#line 435 "report.m"
      }
#line 435 "report.m"
    return report__succeeded;
#line 435 "report.m"
  }
#line 435 "report.m"
}

#line 320 "report.m"
void MR_CALL 
report____Compare____module_report_0_0(
#line 320 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 320 "report.m"
  MR_Word report__HeadVar__2_2,
#line 320 "report.m"
  MR_Word report__HeadVar__3_3)
#line 320 "report.m"
{
#line 320 "report.m"
  {
#line 320 "report.m"
    MR_bool report__succeeded;
#line 320 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 320 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 320 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 320 "report.m"
    if (report__succeeded)
#line 16498 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 320 "report.m"
    else
#line 320 "report.m"
      {
#line 320 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 320 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 320 "report.m"
        MR_Word report__V_10_10;

#line 320 "report.m"
        {
#line 320 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_10_10, report__V_4_4, report__V_7_7);
        }
#line 16524 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 320 "report.m"
        report__succeeded = !(report__succeeded);
#line 320 "report.m"
        if (report__succeeded)
#line 320 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 320 "report.m"
        else
#line 320 "report.m"
          {
#line 320 "report.m"
            MR_Word report__V_11_11;
#line 320 "report.m"
            MR_Integer report__V_17_17 = (MR_Integer) report__V_5_5;
#line 320 "report.m"
            MR_Integer report__V_18_18 = (MR_Integer) report__V_8_8;

#line 320 "report.m"
            {
#line 320 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_11_11, report__V_17_17, report__V_18_18);
            }
#line 16548 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 320 "report.m"
            report__succeeded = !(report__succeeded);
#line 320 "report.m"
            if (report__succeeded)
#line 320 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 320 "report.m"
            else
#line 320 "report.m"
              {
#line 320 "report.m"
                {
#line 320 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[19], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 320 "report.m"
                  return;
                }
#line 320 "report.m"
              }
#line 320 "report.m"
          }
#line 320 "report.m"
      }
#line 320 "report.m"
  }
#line 320 "report.m"
}

#line 320 "report.m"
MR_bool MR_CALL 
report____Unify____module_report_0_0(
#line 320 "report.m"
  MR_Word report__HeadVar__1_1,
#line 320 "report.m"
  MR_Word report__HeadVar__2_2)
#line 320 "report.m"
{
#line 320 "report.m"
  {
#line 320 "report.m"
    MR_bool report__succeeded;
#line 320 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 320 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 320 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 320 "report.m"
    if (report__succeeded)
#line 320 "report.m"
      report__succeeded = MR_TRUE;
#line 320 "report.m"
    else
#line 320 "report.m"
      {
#line 320 "report.m"
        MR_Word report__TypeInfo_11_11;
#line 320 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 320 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 16621 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_6_6) == 0);
#line 320 "report.m"
        if (report__succeeded)
#line 320 "report.m"
          {
#line 16627 "report.c"
            report__succeeded = (report__V_4_4 == report__V_7_7);
#line 320 "report.m"
            if (report__succeeded)
#line 320 "report.m"
              {
#line 16633 "report.c"
                report__TypeInfo_11_11 = (MR_Word) &report_scalar_common_1[19];
#line 16635 "report.c"
                {
#line 16637 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 320 "report.m"
              }
#line 320 "report.m"
          }
#line 320 "report.m"
      }
#line 320 "report.m"
    return report__succeeded;
#line 320 "report.m"
  }
#line 320 "report.m"
}

#line 374 "report.m"
void MR_CALL 
report____Compare____module_rep_report_0_0(
#line 374 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 374 "report.m"
  MR_Word report__HeadVar__2_2,
#line 374 "report.m"
  MR_Word report__HeadVar__3_3)
#line 374 "report.m"
{
#line 374 "report.m"
  {
#line 374 "report.m"
    MR_bool report__succeeded;
#line 374 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 374 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 374 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 374 "report.m"
    if (report__succeeded)
#line 16677 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 374 "report.m"
    else
#line 374 "report.m"
      {
#line 374 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 374 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 374 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 374 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 374 "report.m"
        MR_Word report__V_8_8;

#line 374 "report.m"
        {
#line 374 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 16699 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 374 "report.m"
        report__succeeded = !(report__succeeded);
#line 374 "report.m"
        if (report__succeeded)
#line 374 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 374 "report.m"
        else
#line 374 "report.m"
          {
#line 374 "report.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_5_5, report__V_7_7);
#line 374 "report.m"
            return;
          }
#line 374 "report.m"
      }
#line 374 "report.m"
  }
#line 374 "report.m"
}

#line 374 "report.m"
MR_bool MR_CALL 
report____Unify____module_rep_report_0_0(
#line 374 "report.m"
  MR_Word report__HeadVar__1_1,
#line 374 "report.m"
  MR_Word report__HeadVar__2_2)
#line 374 "report.m"
{
#line 374 "report.m"
  {
#line 374 "report.m"
    MR_bool report__succeeded;
#line 374 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 374 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 374 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 374 "report.m"
    if (report__succeeded)
#line 374 "report.m"
      report__succeeded = MR_TRUE;
#line 374 "report.m"
    else
#line 374 "report.m"
      {
#line 374 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 374 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 374 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 374 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 16760 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 374 "report.m"
        if (report__succeeded)
#line 16764 "report.c"
          report__succeeded = (strcmp(report__V_4_4, report__V_6_6) == 0);
#line 374 "report.m"
      }
#line 374 "report.m"
    return report__succeeded;
#line 374 "report.m"
  }
#line 374 "report.m"
}

#line 633 "report.m"
void MR_CALL 
report____Compare____module_is_active_0_0(
#line 633 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 633 "report.m"
  MR_Word report__HeadVar__2_2,
#line 633 "report.m"
  MR_Word report__HeadVar__3_3)
#line 633 "report.m"
{
#line 633 "report.m"
  {
#line 633 "report.m"
    MR_bool report__succeeded;
#line 633 "report.m"
    MR_Integer report__Cast_HeadVar1_4 = (MR_Integer) report__HeadVar__2_2;
#line 633 "report.m"
    MR_Integer report__Cast_HeadVar2_5 = (MR_Integer) report__HeadVar__3_3;

#line 633 "report.m"
    {
#line 633 "report.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 633 "report.m"
      return;
    }
#line 633 "report.m"
  }
#line 633 "report.m"
}

#line 633 "report.m"
MR_bool MR_CALL 
report____Unify____module_is_active_0_0(
#line 633 "report.m"
  MR_Word report__HeadVar__2_1,
#line 633 "report.m"
  MR_Word report__HeadVar__2_2)
#line 633 "report.m"
{
#line 16816 "report.c"
  {
#line 16818 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 16821 "report.c"
    return report__succeeded;
#line 16823 "report.c"
  }
#line 633 "report.m"
}

#line 366 "report.m"
void MR_CALL 
report____Compare____module_getter_setters_report_0_0(
#line 366 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 366 "report.m"
  MR_Word report__HeadVar__2_2,
#line 366 "report.m"
  MR_Word report__HeadVar__3_3)
#line 366 "report.m"
{
#line 366 "report.m"
  {
#line 366 "report.m"
    MR_bool report__succeeded;
#line 366 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 366 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 366 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 366 "report.m"
    if (report__succeeded)
#line 16852 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 366 "report.m"
    else
#line 366 "report.m"
      {
#line 366 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 366 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 366 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 366 "report.m"
        MR_Word report__V_8_8;

#line 366 "report.m"
        {
#line 366 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 16874 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 366 "report.m"
        report__succeeded = !(report__succeeded);
#line 366 "report.m"
        if (report__succeeded)
#line 366 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 366 "report.m"
        else
#line 366 "report.m"
          {
#line 366 "report.m"
            {
#line 366 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[20], report__HeadVar__1_1, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_7_7)));
#line 366 "report.m"
              return;
            }
#line 366 "report.m"
          }
#line 366 "report.m"
      }
#line 366 "report.m"
  }
#line 366 "report.m"
}

#line 366 "report.m"
MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0(
#line 366 "report.m"
  MR_Word report__HeadVar__1_1,
#line 366 "report.m"
  MR_Word report__HeadVar__2_2)
#line 366 "report.m"
{
#line 366 "report.m"
  {
#line 366 "report.m"
    MR_bool report__succeeded;
#line 366 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 366 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 366 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 366 "report.m"
    if (report__succeeded)
#line 366 "report.m"
      report__succeeded = MR_TRUE;
#line 366 "report.m"
    else
#line 366 "report.m"
      {
#line 366 "report.m"
        MR_Word report__TypeInfo_9_9;
#line 366 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 366 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 16941 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 366 "report.m"
        if (report__succeeded)
#line 366 "report.m"
          {
#line 16947 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_2[20];
#line 16949 "report.c"
            {
#line 16951 "report.c"
              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_9_9, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_6_6)));
            }
#line 366 "report.m"
          }
#line 366 "report.m"
      }
#line 366 "report.m"
    return report__succeeded;
#line 366 "report.m"
  }
#line 366 "report.m"
}

#line 627 "report.m"
void MR_CALL 
report____Compare____module_active_0_0(
#line 627 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 627 "report.m"
  MR_Word report__HeadVar__2_2,
#line 627 "report.m"
  MR_Word report__HeadVar__3_3)
#line 627 "report.m"
{
#line 627 "report.m"
  {
#line 627 "report.m"
    MR_bool report__succeeded;
#line 627 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 627 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 627 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 627 "report.m"
    if (report__succeeded)
#line 16989 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 627 "report.m"
    else
#line 627 "report.m"
      {
#line 627 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 627 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 627 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 627 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 627 "report.m"
        MR_Word report__V_8_8;

#line 627 "report.m"
        {
#line 627 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 17011 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 627 "report.m"
        report__succeeded = !(report__succeeded);
#line 627 "report.m"
        if (report__succeeded)
#line 627 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 627 "report.m"
        else
#line 627 "report.m"
          {
#line 627 "report.m"
            MR_Integer report__V_13_13 = (MR_Integer) report__V_5_5;
#line 627 "report.m"
            MR_Integer report__V_14_14 = (MR_Integer) report__V_7_7;

#line 627 "report.m"
            {
#line 627 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_13_13, report__V_14_14);
#line 627 "report.m"
              return;
            }
#line 627 "report.m"
          }
#line 627 "report.m"
      }
#line 627 "report.m"
  }
#line 627 "report.m"
}

#line 627 "report.m"
MR_bool MR_CALL 
report____Unify____module_active_0_0(
#line 627 "report.m"
  MR_Word report__HeadVar__1_1,
#line 627 "report.m"
  MR_Word report__HeadVar__2_2)
#line 627 "report.m"
{
#line 627 "report.m"
  {
#line 627 "report.m"
    MR_bool report__succeeded;
#line 627 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 627 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 627 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 627 "report.m"
    if (report__succeeded)
#line 627 "report.m"
      report__succeeded = MR_TRUE;
#line 627 "report.m"
    else
#line 627 "report.m"
      {
#line 627 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 627 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 627 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 627 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 17081 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 627 "report.m"
        if (report__succeeded)
#line 17085 "report.c"
          report__succeeded = (report__V_4_4 == report__V_6_6);
#line 627 "report.m"
      }
#line 627 "report.m"
    return report__succeeded;
#line 627 "report.m"
  }
#line 627 "report.m"
}

#line 102 "report.m"
void MR_CALL 
report____Compare____message_report_0_0(
#line 102 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 102 "report.m"
  MR_Word report__HeadVar__2_2,
#line 102 "report.m"
  MR_Word report__HeadVar__3_3)
#line 102 "report.m"
{
#line 102 "report.m"
  {
#line 102 "report.m"
    MR_bool report__succeeded;
#line 102 "report.m"
    MR_Integer report__CastX_6 = (MR_Integer) report__HeadVar__2_2;
#line 102 "report.m"
    MR_Integer report__CastY_7 = (MR_Integer) report__HeadVar__3_3;

#line 102 "report.m"
    report__succeeded = (report__CastX_6 == report__CastY_7);
#line 102 "report.m"
    if (report__succeeded)
#line 17120 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "report.m"
    else
#line 102 "report.m"
      {
#line 102 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;
#line 102 "report.m"
        MR_String report__V_5_5 = (MR_String) report__HeadVar__3_3;

#line 102 "report.m"
        {
#line 102 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_4_4, report__V_5_5);
#line 102 "report.m"
          return;
        }
#line 102 "report.m"
      }
#line 102 "report.m"
  }
#line 102 "report.m"
}

#line 102 "report.m"
MR_bool MR_CALL 
report____Unify____message_report_0_0(
#line 102 "report.m"
  MR_Word report__HeadVar__1_1,
#line 102 "report.m"
  MR_Word report__HeadVar__2_2)
#line 102 "report.m"
{
#line 102 "report.m"
  {
#line 102 "report.m"
    MR_bool report__succeeded;
#line 102 "report.m"
    MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 102 "report.m"
    MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 102 "report.m"
    report__succeeded = (report__CastX_5 == report__CastY_6);
#line 102 "report.m"
    if (report__succeeded)
#line 102 "report.m"
      report__succeeded = MR_TRUE;
#line 102 "report.m"
    else
#line 102 "report.m"
      {
#line 102 "report.m"
        MR_String report__V_3_3 = (MR_String) report__HeadVar__1_1;
#line 102 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;

#line 17178 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_4_4) == 0);
#line 102 "report.m"
      }
#line 102 "report.m"
    return report__succeeded;
#line 102 "report.m"
  }
#line 102 "report.m"
}

#line 110 "report.m"
void MR_CALL 
report____Compare____menu_report_0_0(
#line 110 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 110 "report.m"
  MR_Word report__HeadVar__2_2,
#line 110 "report.m"
  MR_Word report__HeadVar__3_3)
#line 110 "report.m"
{
#line 110 "report.m"
  {
#line 110 "report.m"
    MR_bool report__succeeded;
#line 110 "report.m"
    MR_Integer report__CastX_33 = (MR_Integer) report__HeadVar__2_2;
#line 110 "report.m"
    MR_Integer report__CastY_34 = (MR_Integer) report__HeadVar__3_3;

#line 110 "report.m"
    report__succeeded = (report__CastX_33 == report__CastY_34);
#line 110 "report.m"
    if (report__succeeded)
#line 17213 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "report.m"
    else
#line 110 "report.m"
      {
#line 110 "report.m"
        MR_String report__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 110 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 110 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 110 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 110 "report.m"
        MR_Integer report__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));
#line 110 "report.m"
        MR_String report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "report.m"
        MR_Integer report__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 110 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 110 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 110 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 110 "report.m"
        MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 110 "report.m"
        MR_Integer report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 110 "report.m"
        MR_Integer report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 110 "report.m"
        MR_Integer report__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 8)));
#line 110 "report.m"
        MR_Integer report__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 9)));
#line 110 "report.m"
        MR_Word report__V_24_24;

#line 110 "report.m"
        {
#line 110 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_24_24, report__V_4_4, report__V_14_14);
        }
#line 17267 "report.c"
        report__succeeded = (report__V_24_24 == (MR_Integer) 0);
#line 110 "report.m"
        report__succeeded = !(report__succeeded);
#line 110 "report.m"
        if (report__succeeded)
#line 110 "report.m"
          *report__HeadVar__1_1 = report__V_24_24;
#line 110 "report.m"
        else
#line 110 "report.m"
          {
#line 110 "report.m"
            MR_Word report__V_25_25;

#line 110 "report.m"
            {
#line 110 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_25_25, report__V_5_5, report__V_15_15);
            }
#line 17287 "report.c"
            report__succeeded = (report__V_25_25 == (MR_Integer) 0);
#line 110 "report.m"
            report__succeeded = !(report__succeeded);
#line 110 "report.m"
            if (report__succeeded)
#line 110 "report.m"
              *report__HeadVar__1_1 = report__V_25_25;
#line 110 "report.m"
            else
#line 110 "report.m"
              {
#line 110 "report.m"
                MR_Word report__V_26_26;

#line 110 "report.m"
                {
#line 110 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_26_26, report__V_6_6, report__V_16_16);
                }
#line 17307 "report.c"
                report__succeeded = (report__V_26_26 == (MR_Integer) 0);
#line 110 "report.m"
                report__succeeded = !(report__succeeded);
#line 110 "report.m"
                if (report__succeeded)
#line 110 "report.m"
                  *report__HeadVar__1_1 = report__V_26_26;
#line 110 "report.m"
                else
#line 110 "report.m"
                  {
#line 110 "report.m"
                    MR_Word report__V_27_27;

#line 110 "report.m"
                    {
#line 110 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_27_27, report__V_7_7, report__V_17_17);
                    }
#line 17327 "report.c"
                    report__succeeded = (report__V_27_27 == (MR_Integer) 0);
#line 110 "report.m"
                    report__succeeded = !(report__succeeded);
#line 110 "report.m"
                    if (report__succeeded)
#line 110 "report.m"
                      *report__HeadVar__1_1 = report__V_27_27;
#line 110 "report.m"
                    else
#line 110 "report.m"
                      {
#line 110 "report.m"
                        MR_Word report__V_28_28;

#line 110 "report.m"
                        {
#line 110 "report.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_28_28, report__V_8_8, report__V_18_18);
                        }
#line 17347 "report.c"
                        report__succeeded = (report__V_28_28 == (MR_Integer) 0);
#line 110 "report.m"
                        report__succeeded = !(report__succeeded);
#line 110 "report.m"
                        if (report__succeeded)
#line 110 "report.m"
                          *report__HeadVar__1_1 = report__V_28_28;
#line 110 "report.m"
                        else
#line 110 "report.m"
                          {
#line 110 "report.m"
                            MR_Word report__V_29_29;

#line 110 "report.m"
                            {
#line 110 "report.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_29_29, report__V_9_9, report__V_19_19);
                            }
#line 17367 "report.c"
                            report__succeeded = (report__V_29_29 == (MR_Integer) 0);
#line 110 "report.m"
                            report__succeeded = !(report__succeeded);
#line 110 "report.m"
                            if (report__succeeded)
#line 110 "report.m"
                              *report__HeadVar__1_1 = report__V_29_29;
#line 110 "report.m"
                            else
#line 110 "report.m"
                              {
#line 110 "report.m"
                                MR_Word report__V_30_30;

#line 110 "report.m"
                                {
#line 110 "report.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_30_30, report__V_10_10, report__V_20_20);
                                }
#line 17387 "report.c"
                                report__succeeded = (report__V_30_30 == (MR_Integer) 0);
#line 110 "report.m"
                                report__succeeded = !(report__succeeded);
#line 110 "report.m"
                                if (report__succeeded)
#line 110 "report.m"
                                  *report__HeadVar__1_1 = report__V_30_30;
#line 110 "report.m"
                                else
#line 110 "report.m"
                                  {
#line 110 "report.m"
                                    MR_Word report__V_31_31;

#line 110 "report.m"
                                    {
#line 110 "report.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_31_31, report__V_11_11, report__V_21_21);
                                    }
#line 17407 "report.c"
                                    report__succeeded = (report__V_31_31 == (MR_Integer) 0);
#line 110 "report.m"
                                    report__succeeded = !(report__succeeded);
#line 110 "report.m"
                                    if (report__succeeded)
#line 110 "report.m"
                                      *report__HeadVar__1_1 = report__V_31_31;
#line 110 "report.m"
                                    else
#line 110 "report.m"
                                      {
#line 110 "report.m"
                                        MR_Word report__V_32_32;

#line 110 "report.m"
                                        {
#line 110 "report.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_32_32, report__V_12_12, report__V_22_22);
                                        }
#line 17427 "report.c"
                                        report__succeeded = (report__V_32_32 == (MR_Integer) 0);
#line 110 "report.m"
                                        report__succeeded = !(report__succeeded);
#line 110 "report.m"
                                        if (report__succeeded)
#line 110 "report.m"
                                          *report__HeadVar__1_1 = report__V_32_32;
#line 110 "report.m"
                                        else
#line 110 "report.m"
                                          {
#line 110 "report.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_13_13, report__V_23_23);
#line 110 "report.m"
                                            return;
                                          }
#line 110 "report.m"
                                      }
#line 110 "report.m"
                                  }
#line 110 "report.m"
                              }
#line 110 "report.m"
                          }
#line 110 "report.m"
                      }
#line 110 "report.m"
                  }
#line 110 "report.m"
              }
#line 110 "report.m"
          }
#line 110 "report.m"
      }
#line 110 "report.m"
  }
#line 110 "report.m"
}

#line 110 "report.m"
MR_bool MR_CALL 
report____Unify____menu_report_0_0(
#line 110 "report.m"
  MR_Word report__HeadVar__1_1,
#line 110 "report.m"
  MR_Word report__HeadVar__2_2)
#line 110 "report.m"
{
#line 110 "report.m"
  {
#line 110 "report.m"
    MR_bool report__succeeded;
#line 110 "report.m"
    MR_Integer report__CastX_23 = (MR_Integer) report__HeadVar__1_1;
#line 110 "report.m"
    MR_Integer report__CastY_24 = (MR_Integer) report__HeadVar__2_2;

#line 110 "report.m"
    report__succeeded = (report__CastX_23 == report__CastY_24);
#line 110 "report.m"
    if (report__succeeded)
#line 110 "report.m"
      report__succeeded = MR_TRUE;
#line 110 "report.m"
    else
#line 110 "report.m"
      {
#line 110 "report.m"
        MR_String report__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 110 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 110 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 110 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 110 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 110 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 110 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 110 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 8)));
#line 110 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 9)));
#line 110 "report.m"
        MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 110 "report.m"
        MR_Integer report__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 110 "report.m"
        MR_Integer report__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 110 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 110 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 110 "report.m"
        MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 110 "report.m"
        MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 110 "report.m"
        MR_Integer report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 110 "report.m"
        MR_Integer report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 110 "report.m"
        MR_Integer report__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));

#line 17536 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_13_13) == 0);
#line 110 "report.m"
        if (report__succeeded)
#line 110 "report.m"
          {
#line 17542 "report.c"
            report__succeeded = (report__V_4_4 == report__V_14_14);
#line 110 "report.m"
            if (report__succeeded)
#line 110 "report.m"
              {
#line 17548 "report.c"
                report__succeeded = (report__V_5_5 == report__V_15_15);
#line 110 "report.m"
                if (report__succeeded)
#line 110 "report.m"
                  {
#line 17554 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_16_16);
#line 110 "report.m"
                    if (report__succeeded)
#line 110 "report.m"
                      {
#line 17560 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_17_17);
#line 110 "report.m"
                        if (report__succeeded)
#line 110 "report.m"
                          {
#line 17566 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_18_18);
#line 110 "report.m"
                            if (report__succeeded)
#line 110 "report.m"
                              {
#line 17572 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_19_19);
#line 110 "report.m"
                                if (report__succeeded)
#line 110 "report.m"
                                  {
#line 17578 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_20_20);
#line 110 "report.m"
                                    if (report__succeeded)
#line 110 "report.m"
                                      {
#line 17584 "report.c"
                                        report__succeeded = (report__V_11_11 == report__V_21_21);
#line 110 "report.m"
                                        if (report__succeeded)
#line 17588 "report.c"
                                          report__succeeded = (report__V_12_12 == report__V_22_22);
#line 110 "report.m"
                                      }
#line 110 "report.m"
                                  }
#line 110 "report.m"
                              }
#line 110 "report.m"
                          }
#line 110 "report.m"
                      }
#line 110 "report.m"
                  }
#line 110 "report.m"
              }
#line 110 "report.m"
          }
#line 110 "report.m"
      }
#line 110 "report.m"
    return report__succeeded;
#line 110 "report.m"
  }
#line 110 "report.m"
}

#line 329 "report.m"
void MR_CALL 
report____Compare____maybe_have_module_rep_0_0(
#line 329 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 329 "report.m"
  MR_Word report__HeadVar__2_2,
#line 329 "report.m"
  MR_Word report__HeadVar__3_3)
#line 329 "report.m"
{
#line 329 "report.m"
  {
#line 329 "report.m"
    MR_bool report__succeeded;
#line 329 "report.m"
    MR_Integer report__Cast_HeadVar1_4 = (MR_Integer) report__HeadVar__2_2;
#line 329 "report.m"
    MR_Integer report__Cast_HeadVar2_5 = (MR_Integer) report__HeadVar__3_3;

#line 329 "report.m"
    {
#line 329 "report.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 329 "report.m"
      return;
    }
#line 329 "report.m"
  }
#line 329 "report.m"
}

#line 329 "report.m"
MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0(
#line 329 "report.m"
  MR_Word report__HeadVar__2_1,
#line 329 "report.m"
  MR_Word report__HeadVar__2_2)
#line 329 "report.m"
{
#line 17656 "report.c"
  {
#line 17658 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 17661 "report.c"
    return report__succeeded;
#line 17663 "report.c"
  }
#line 329 "report.m"
}

#line 579 "report.m"
void MR_CALL 
report____Compare____inheritable_perf_0_0(
#line 579 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 579 "report.m"
  MR_Word report__HeadVar__2_2,
#line 579 "report.m"
  MR_Word report__HeadVar__3_3)
#line 579 "report.m"
{
#line 579 "report.m"
  {
#line 579 "report.m"
    MR_bool report__succeeded;
#line 579 "report.m"
    MR_Integer report__CastX_42 = (MR_Integer) report__HeadVar__2_2;
#line 579 "report.m"
    MR_Integer report__CastY_43 = (MR_Integer) report__HeadVar__3_3;

#line 579 "report.m"
    report__succeeded = (report__CastX_42 == report__CastY_43);
#line 579 "report.m"
    if (report__succeeded)
#line 17692 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 579 "report.m"
    else
#line 579 "report.m"
      {
#line 579 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 579 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 579 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 579 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 579 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 579 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 579 "report.m"
        MR_Float report__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 579 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 579 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 579 "report.m"
        MR_Float report__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));
#line 579 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 10)));
#line 579 "report.m"
        MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 11)));
#line 579 "report.m"
        MR_Word report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 12)));
#line 579 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 579 "report.m"
        MR_Word report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 579 "report.m"
        MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 579 "report.m"
        MR_Word report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 579 "report.m"
        MR_Integer report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 579 "report.m"
        MR_Word report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 579 "report.m"
        MR_Float report__V_23_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 579 "report.m"
        MR_Integer report__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 579 "report.m"
        MR_Word report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 8)));
#line 579 "report.m"
        MR_Float report__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 9)));
#line 579 "report.m"
        MR_Word report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 10)));
#line 579 "report.m"
        MR_Word report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 11)));
#line 579 "report.m"
        MR_Word report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 12)));
#line 579 "report.m"
        MR_Word report__V_30_30;

#line 579 "report.m"
        {
#line 579 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_30_30, report__V_4_4, report__V_17_17);
        }
#line 17758 "report.c"
        report__succeeded = (report__V_30_30 == (MR_Integer) 0);
#line 579 "report.m"
        report__succeeded = !(report__succeeded);
#line 579 "report.m"
        if (report__succeeded)
#line 579 "report.m"
          *report__HeadVar__1_1 = report__V_30_30;
#line 579 "report.m"
        else
#line 579 "report.m"
          {
#line 579 "report.m"
            MR_Word report__V_31_31;

#line 579 "report.m"
            {
#line 579 "report.m"
              measurement_units____Compare____time_0_0(&report__V_31_31, report__V_5_5, report__V_18_18);
            }
#line 17778 "report.c"
            report__succeeded = (report__V_31_31 == (MR_Integer) 0);
#line 579 "report.m"
            report__succeeded = !(report__succeeded);
#line 579 "report.m"
            if (report__succeeded)
#line 579 "report.m"
              *report__HeadVar__1_1 = report__V_31_31;
#line 579 "report.m"
            else
#line 579 "report.m"
              {
#line 579 "report.m"
                MR_Word report__V_32_32;

#line 579 "report.m"
                {
#line 579 "report.m"
                  measurement_units____Compare____percent_0_0(&report__V_32_32, report__V_6_6, report__V_19_19);
                }
#line 17798 "report.c"
                report__succeeded = (report__V_32_32 == (MR_Integer) 0);
#line 579 "report.m"
                report__succeeded = !(report__succeeded);
#line 579 "report.m"
                if (report__succeeded)
#line 579 "report.m"
                  *report__HeadVar__1_1 = report__V_32_32;
#line 579 "report.m"
                else
#line 579 "report.m"
                  {
#line 579 "report.m"
                    MR_Word report__V_33_33;

#line 579 "report.m"
                    {
#line 579 "report.m"
                      measurement_units____Compare____time_0_0(&report__V_33_33, report__V_7_7, report__V_20_20);
                    }
#line 17818 "report.c"
                    report__succeeded = (report__V_33_33 == (MR_Integer) 0);
#line 579 "report.m"
                    report__succeeded = !(report__succeeded);
#line 579 "report.m"
                    if (report__succeeded)
#line 579 "report.m"
                      *report__HeadVar__1_1 = report__V_33_33;
#line 579 "report.m"
                    else
#line 579 "report.m"
                      {
#line 579 "report.m"
                        MR_Word report__V_34_34;

#line 579 "report.m"
                        {
#line 579 "report.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_34_34, report__V_8_8, report__V_21_21);
                        }
#line 17838 "report.c"
                        report__succeeded = (report__V_34_34 == (MR_Integer) 0);
#line 579 "report.m"
                        report__succeeded = !(report__succeeded);
#line 579 "report.m"
                        if (report__succeeded)
#line 579 "report.m"
                          *report__HeadVar__1_1 = report__V_34_34;
#line 579 "report.m"
                        else
#line 579 "report.m"
                          {
#line 579 "report.m"
                            MR_Word report__V_35_35;

#line 579 "report.m"
                            {
#line 579 "report.m"
                              measurement_units____Compare____percent_0_0(&report__V_35_35, report__V_9_9, report__V_22_22);
                            }
#line 17858 "report.c"
                            report__succeeded = (report__V_35_35 == (MR_Integer) 0);
#line 579 "report.m"
                            report__succeeded = !(report__succeeded);
#line 579 "report.m"
                            if (report__succeeded)
#line 579 "report.m"
                              *report__HeadVar__1_1 = report__V_35_35;
#line 579 "report.m"
                            else
#line 579 "report.m"
                              {
#line 579 "report.m"
                                MR_Word report__V_36_36;

#line 579 "report.m"
                                {
#line 579 "report.m"
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_36_36, report__V_10_10, report__V_23_23);
                                }
#line 17878 "report.c"
                                report__succeeded = (report__V_36_36 == (MR_Integer) 0);
#line 579 "report.m"
                                report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                if (report__succeeded)
#line 579 "report.m"
                                  *report__HeadVar__1_1 = report__V_36_36;
#line 579 "report.m"
                                else
#line 579 "report.m"
                                  {
#line 579 "report.m"
                                    MR_Word report__V_37_37;

#line 579 "report.m"
                                    {
#line 579 "report.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_37_37, report__V_11_11, report__V_24_24);
                                    }
#line 17898 "report.c"
                                    report__succeeded = (report__V_37_37 == (MR_Integer) 0);
#line 579 "report.m"
                                    report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                    if (report__succeeded)
#line 579 "report.m"
                                      *report__HeadVar__1_1 = report__V_37_37;
#line 579 "report.m"
                                    else
#line 579 "report.m"
                                      {
#line 579 "report.m"
                                        MR_Word report__V_38_38;

#line 579 "report.m"
                                        {
#line 579 "report.m"
                                          measurement_units____Compare____percent_0_0(&report__V_38_38, report__V_12_12, report__V_25_25);
                                        }
#line 17918 "report.c"
                                        report__succeeded = (report__V_38_38 == (MR_Integer) 0);
#line 579 "report.m"
                                        report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                        if (report__succeeded)
#line 579 "report.m"
                                          *report__HeadVar__1_1 = report__V_38_38;
#line 579 "report.m"
                                        else
#line 579 "report.m"
                                          {
#line 579 "report.m"
                                            MR_Word report__V_39_39;

#line 579 "report.m"
                                            {
#line 579 "report.m"
                                              mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_39_39, report__V_13_13, report__V_26_26);
                                            }
#line 17938 "report.c"
                                            report__succeeded = (report__V_39_39 == (MR_Integer) 0);
#line 579 "report.m"
                                            report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                            if (report__succeeded)
#line 579 "report.m"
                                              *report__HeadVar__1_1 = report__V_39_39;
#line 579 "report.m"
                                            else
#line 579 "report.m"
                                              {
#line 579 "report.m"
                                                MR_Word report__V_40_40;

#line 579 "report.m"
                                                {
#line 579 "report.m"
                                                  measurement_units____Compare____memory_0_0(&report__V_40_40, report__V_14_14, report__V_27_27);
                                                }
#line 17958 "report.c"
                                                report__succeeded = (report__V_40_40 == (MR_Integer) 0);
#line 579 "report.m"
                                                report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                                if (report__succeeded)
#line 579 "report.m"
                                                  *report__HeadVar__1_1 = report__V_40_40;
#line 579 "report.m"
                                                else
#line 579 "report.m"
                                                  {
#line 579 "report.m"
                                                    MR_Word report__V_41_41;

#line 579 "report.m"
                                                    {
#line 579 "report.m"
                                                      measurement_units____Compare____percent_0_0(&report__V_41_41, report__V_15_15, report__V_28_28);
                                                    }
#line 17978 "report.c"
                                                    report__succeeded = (report__V_41_41 == (MR_Integer) 0);
#line 579 "report.m"
                                                    report__succeeded = !(report__succeeded);
#line 579 "report.m"
                                                    if (report__succeeded)
#line 579 "report.m"
                                                      *report__HeadVar__1_1 = report__V_41_41;
#line 579 "report.m"
                                                    else
#line 579 "report.m"
                                                      {
#line 579 "report.m"
                                                        measurement_units____Compare____memory_0_0(report__HeadVar__1_1, report__V_16_16, report__V_29_29);
#line 579 "report.m"
                                                        return;
                                                      }
#line 579 "report.m"
                                                  }
#line 579 "report.m"
                                              }
#line 579 "report.m"
                                          }
#line 579 "report.m"
                                      }
#line 579 "report.m"
                                  }
#line 579 "report.m"
                              }
#line 579 "report.m"
                          }
#line 579 "report.m"
                      }
#line 579 "report.m"
                  }
#line 579 "report.m"
              }
#line 579 "report.m"
          }
#line 579 "report.m"
      }
#line 579 "report.m"
  }
#line 579 "report.m"
}

#line 579 "report.m"
MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0(
#line 579 "report.m"
  MR_Word report__HeadVar__1_1,
#line 579 "report.m"
  MR_Word report__HeadVar__2_2)
#line 579 "report.m"
{
#line 579 "report.m"
  {
#line 579 "report.m"
    MR_bool report__succeeded;
#line 579 "report.m"
    MR_Integer report__CastX_29 = (MR_Integer) report__HeadVar__1_1;
#line 579 "report.m"
    MR_Integer report__CastY_30 = (MR_Integer) report__HeadVar__2_2;

#line 579 "report.m"
    report__succeeded = (report__CastX_29 == report__CastY_30);
#line 579 "report.m"
    if (report__succeeded)
#line 579 "report.m"
      report__succeeded = MR_TRUE;
#line 579 "report.m"
    else
#line 579 "report.m"
      {
#line 579 "report.m"
        MR_Integer report__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 579 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 579 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 579 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 579 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 579 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 579 "report.m"
        MR_Float report__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 579 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 579 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 8)));
#line 579 "report.m"
        MR_Float report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 9)));
#line 579 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 10)));
#line 579 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 11)));
#line 579 "report.m"
        MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 12)));
#line 579 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 579 "report.m"
        MR_Word report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 579 "report.m"
        MR_Word report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 579 "report.m"
        MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 579 "report.m"
        MR_Integer report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 579 "report.m"
        MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 579 "report.m"
        MR_Float report__V_22_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 579 "report.m"
        MR_Integer report__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 579 "report.m"
        MR_Word report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 579 "report.m"
        MR_Float report__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));
#line 579 "report.m"
        MR_Word report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 10)));
#line 579 "report.m"
        MR_Word report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 11)));
#line 579 "report.m"
        MR_Word report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 12)));

#line 18105 "report.c"
        report__succeeded = (report__V_3_3 == report__V_16_16);
#line 579 "report.m"
        if (report__succeeded)
#line 579 "report.m"
          {
#line 18111 "report.c"
            {
#line 18113 "report.c"
              report__succeeded = measurement_units____Unify____time_0_0(report__V_4_4, report__V_17_17);
            }
#line 579 "report.m"
            if (report__succeeded)
#line 579 "report.m"
              {
#line 18120 "report.c"
                {
#line 18122 "report.c"
                  report__succeeded = measurement_units____Unify____percent_0_0(report__V_5_5, report__V_18_18);
                }
#line 579 "report.m"
                if (report__succeeded)
#line 579 "report.m"
                  {
#line 18129 "report.c"
                    {
#line 18131 "report.c"
                      report__succeeded = measurement_units____Unify____time_0_0(report__V_6_6, report__V_19_19);
                    }
#line 579 "report.m"
                    if (report__succeeded)
#line 579 "report.m"
                      {
#line 18138 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_20_20);
#line 579 "report.m"
                        if (report__succeeded)
#line 579 "report.m"
                          {
#line 18144 "report.c"
                            {
#line 18146 "report.c"
                              report__succeeded = measurement_units____Unify____percent_0_0(report__V_8_8, report__V_21_21);
                            }
#line 579 "report.m"
                            if (report__succeeded)
#line 579 "report.m"
                              {
#line 18153 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_22_22);
#line 579 "report.m"
                                if (report__succeeded)
#line 579 "report.m"
                                  {
#line 18159 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_23_23);
#line 579 "report.m"
                                    if (report__succeeded)
#line 579 "report.m"
                                      {
#line 18165 "report.c"
                                        {
#line 18167 "report.c"
                                          report__succeeded = measurement_units____Unify____percent_0_0(report__V_11_11, report__V_24_24);
                                        }
#line 579 "report.m"
                                        if (report__succeeded)
#line 579 "report.m"
                                          {
#line 18174 "report.c"
                                            report__succeeded = (report__V_12_12 == report__V_25_25);
#line 579 "report.m"
                                            if (report__succeeded)
#line 579 "report.m"
                                              {
#line 18180 "report.c"
                                                {
#line 18182 "report.c"
                                                  report__succeeded = measurement_units____Unify____memory_0_0(report__V_13_13, report__V_26_26);
                                                }
#line 579 "report.m"
                                                if (report__succeeded)
#line 579 "report.m"
                                                  {
#line 18189 "report.c"
                                                    {
#line 18191 "report.c"
                                                      report__succeeded = measurement_units____Unify____percent_0_0(report__V_14_14, report__V_27_27);
                                                    }
#line 579 "report.m"
                                                    if (report__succeeded)
#line 18196 "report.c"
                                                      {
#line 18198 "report.c"
                                                        return report__succeeded = measurement_units____Unify____memory_0_0(report__V_15_15, report__V_28_28);
                                                      }
#line 579 "report.m"
                                                  }
#line 579 "report.m"
                                              }
#line 579 "report.m"
                                          }
#line 579 "report.m"
                                      }
#line 579 "report.m"
                                  }
#line 579 "report.m"
                              }
#line 579 "report.m"
                          }
#line 579 "report.m"
                      }
#line 579 "report.m"
                  }
#line 579 "report.m"
              }
#line 579 "report.m"
          }
#line 579 "report.m"
      }
#line 579 "report.m"
    return report__succeeded;
#line 579 "report.m"
  }
#line 579 "report.m"
}

#line 356 "report.m"
void MR_CALL 
report____Compare____gs_field_map_1_0(
#line 356 "report.m"
  MR_Word report__TypeInfo_for_T_6,
#line 356 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 356 "report.m"
  MR_Word report__HeadVar__2_2,
#line 356 "report.m"
  MR_Word report__HeadVar__3_3)
#line 356 "report.m"
{
#line 356 "report.m"
  {
#line 356 "report.m"
    MR_bool report__succeeded;
#line 356 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 356 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 356 "report.m"
    {
#line 356 "report.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &report__report__type_ctor_info_field_name_0, report__TypeInfo_for_T_6, report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 356 "report.m"
      return;
    }
#line 356 "report.m"
  }
#line 356 "report.m"
}

#line 356 "report.m"
MR_bool MR_CALL 
report____Unify____gs_field_map_1_0(
#line 356 "report.m"
  MR_Word report__TypeInfo_for_T_5,
#line 356 "report.m"
  MR_Word report__HeadVar__1_1,
#line 356 "report.m"
  MR_Word report__HeadVar__2_2)
#line 356 "report.m"
{
#line 356 "report.m"
  {
#line 356 "report.m"
    MR_bool report__succeeded;
#line 356 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 356 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 356 "report.m"
    {
#line 356 "report.m"
      return report__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &report__report__type_ctor_info_field_name_0, report__TypeInfo_for_T_5, report__Cast_HeadVar1_3, report__Cast_HeadVar2_4);
    }
#line 356 "report.m"
    return report__succeeded;
#line 356 "report.m"
  }
#line 356 "report.m"
}

#line 363 "report.m"
void MR_CALL 
report____Compare____gs_field_map_0_0(
#line 363 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 363 "report.m"
  MR_Word report__HeadVar__2_2,
#line 363 "report.m"
  MR_Word report__HeadVar__3_3)
#line 363 "report.m"
{
#line 363 "report.m"
  {
#line 363 "report.m"
    MR_bool report__succeeded;
#line 363 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 363 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 363 "report.m"
    {
#line 363 "report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[19], report__HeadVar__1_1, ((MR_Box) (report__Cast_HeadVar1_4)), ((MR_Box) (report__Cast_HeadVar2_5)));
#line 363 "report.m"
      return;
    }
#line 363 "report.m"
  }
#line 363 "report.m"
}

#line 363 "report.m"
MR_bool MR_CALL 
report____Unify____gs_field_map_0_0(
#line 363 "report.m"
  MR_Word report__HeadVar__1_1,
#line 363 "report.m"
  MR_Word report__HeadVar__2_2)
#line 363 "report.m"
{
#line 363 "report.m"
  {
#line 363 "report.m"
    MR_bool report__succeeded;
#line 363 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 363 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 363 "report.m"
    {
#line 363 "report.m"
      return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_2[19], ((MR_Box) (report__Cast_HeadVar1_3)), ((MR_Box) (report__Cast_HeadVar2_4)));
    }
#line 363 "report.m"
    return report__succeeded;
#line 363 "report.m"
  }
#line 363 "report.m"
}

#line 343 "report.m"
void MR_CALL 
report____Compare____gs_field_info_2_0(
#line 343 "report.m"
  MR_Word report__TypeInfo_for_I_38,
#line 343 "report.m"
  MR_Word report__TypeInfo_for_S_39,
#line 343 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 343 "report.m"
  MR_Word report__HeadVar__2_2,
#line 343 "report.m"
  MR_Word report__HeadVar__3_3)
#line 343 "report.m"
{
#line 343 "report.m"
  {
#line 343 "report.m"
    MR_bool report__succeeded;
#line 343 "report.m"
    MR_Integer report__CastX_36 = (MR_Integer) report__HeadVar__2_2;
#line 343 "report.m"
    MR_Integer report__CastY_37 = (MR_Integer) report__HeadVar__3_3;

#line 343 "report.m"
    report__succeeded = (report__CastX_36 == report__CastY_37);
#line 343 "report.m"
    if (report__succeeded)
#line 18388 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 343 "report.m"
    else
#line 343 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 343 "report.m"
        {
#line 343 "report.m"
          MR_Box report__V_40_40 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2));
#line 343 "report.m"
          MR_Box report__V_41_41 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1));
#line 343 "report.m"
          MR_Box report__V_42_42 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0));

#line 343 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 343 "report.m"
            {
#line 343 "report.m"
              MR_Box report__V_7_7 = (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0));
#line 343 "report.m"
              MR_Box report__V_8_8 = (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1));
#line 343 "report.m"
              MR_Box report__V_9_9 = (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2));
#line 343 "report.m"
              MR_Word report__V_10_10;

#line 343 "report.m"
              {
#line 343 "report.m"
                mercury__builtin__compare_3_p_0(report__TypeInfo_for_I_38, &report__V_10_10, report__V_42_42, report__V_7_7);
              }
#line 18421 "report.c"
              report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 343 "report.m"
              report__succeeded = !(report__succeeded);
#line 343 "report.m"
              if (report__succeeded)
#line 343 "report.m"
                *report__HeadVar__1_1 = report__V_10_10;
#line 343 "report.m"
              else
#line 343 "report.m"
                {
#line 343 "report.m"
                  MR_Word report__V_11_11;

#line 343 "report.m"
                  {
#line 343 "report.m"
                    mercury__builtin__compare_3_p_0(report__TypeInfo_for_I_38, &report__V_11_11, report__V_41_41, report__V_8_8);
                  }
#line 18441 "report.c"
                  report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 343 "report.m"
                  report__succeeded = !(report__succeeded);
#line 343 "report.m"
                  if (report__succeeded)
#line 343 "report.m"
                    *report__HeadVar__1_1 = report__V_11_11;
#line 343 "report.m"
                  else
#line 343 "report.m"
                    {
#line 343 "report.m"
                      mercury__builtin__compare_3_p_0(report__TypeInfo_for_S_39, report__HeadVar__1_1, report__V_40_40, report__V_9_9);
#line 343 "report.m"
                      return;
                    }
#line 343 "report.m"
                }
#line 343 "report.m"
            }
#line 343 "report.m"
          else
#line 343 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 18466 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
            else
#line 18470 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
        }
#line 343 "report.m"
      else
#line 343 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 343 "report.m"
          {
#line 343 "report.m"
            MR_Box report__V_43_43 = (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0));

#line 343 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 18485 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
            else
#line 343 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 343 "report.m"
                {
#line 343 "report.m"
                  MR_Box report__V_25_25 = (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 0));

#line 343 "report.m"
                  {
#line 343 "report.m"
                    mercury__builtin__compare_3_p_0(report__TypeInfo_for_I_38, report__HeadVar__1_1, report__V_43_43, report__V_25_25);
#line 343 "report.m"
                    return;
                  }
#line 343 "report.m"
                }
#line 343 "report.m"
              else
#line 18507 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
          }
#line 343 "report.m"
        else
#line 343 "report.m"
          {
#line 343 "report.m"
            MR_Box report__V_44_44 = (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0));

#line 343 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 18520 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
            else
#line 343 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 18526 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
              else
#line 343 "report.m"
                {
#line 343 "report.m"
                  MR_Box report__V_35_35 = (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 0));

#line 343 "report.m"
                  {
#line 343 "report.m"
                    mercury__builtin__compare_3_p_0(report__TypeInfo_for_I_38, report__HeadVar__1_1, report__V_44_44, report__V_35_35);
#line 343 "report.m"
                    return;
                  }
#line 343 "report.m"
                }
#line 343 "report.m"
          }
#line 343 "report.m"
  }
#line 343 "report.m"
}

#line 343 "report.m"
MR_bool MR_CALL 
report____Unify____gs_field_info_2_0(
#line 343 "report.m"
  MR_Word report__TypeInfo_for_I_15,
#line 343 "report.m"
  MR_Word report__TypeInfo_for_S_16,
#line 343 "report.m"
  MR_Word report__HeadVar__1_1,
#line 343 "report.m"
  MR_Word report__HeadVar__2_2)
#line 343 "report.m"
{
#line 343 "report.m"
  {
#line 343 "report.m"
    MR_bool report__succeeded;
#line 343 "report.m"
    MR_Integer report__CastX_13 = (MR_Integer) report__HeadVar__1_1;
#line 343 "report.m"
    MR_Integer report__CastY_14 = (MR_Integer) report__HeadVar__2_2;

#line 343 "report.m"
    report__succeeded = (report__CastX_13 == report__CastY_14);
#line 343 "report.m"
    if (report__succeeded)
#line 343 "report.m"
      report__succeeded = MR_TRUE;
#line 343 "report.m"
    else
#line 343 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 343 "report.m"
        {
#line 343 "report.m"
          MR_Box report__V_3_3 = (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0));
#line 343 "report.m"
          MR_Box report__V_4_4 = (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1));
#line 343 "report.m"
          MR_Box report__V_5_5 = (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2));
#line 343 "report.m"
          MR_Box report__V_6_6;
#line 343 "report.m"
          MR_Box report__V_7_7;
#line 343 "report.m"
          MR_Box report__V_8_8;

#line 343 "report.m"
          report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 343 "report.m"
          if (report__succeeded)
#line 343 "report.m"
            {
#line 343 "report.m"
              report__V_6_6 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0));
#line 343 "report.m"
              report__V_7_7 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1));
#line 343 "report.m"
              report__V_8_8 = (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2));
#line 18610 "report.c"
              {
#line 18612 "report.c"
                report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_3_3, report__V_6_6);
              }
#line 343 "report.m"
              if (report__succeeded)
#line 343 "report.m"
                {
#line 18619 "report.c"
                  {
#line 18621 "report.c"
                    report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_4_4, report__V_7_7);
                  }
#line 343 "report.m"
                  if (report__succeeded)
#line 18626 "report.c"
                    {
#line 18628 "report.c"
                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_S_16, report__V_5_5, report__V_8_8);
                    }
#line 343 "report.m"
                }
#line 343 "report.m"
            }
#line 343 "report.m"
        }
#line 343 "report.m"
      else
#line 343 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 343 "report.m"
          {
#line 343 "report.m"
            MR_Box report__V_9_9 = (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 0));
#line 343 "report.m"
            MR_Box report__V_10_10;

#line 343 "report.m"
            report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 343 "report.m"
            if (report__succeeded)
#line 343 "report.m"
              {
#line 343 "report.m"
                report__V_10_10 = (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0));
#line 18656 "report.c"
                {
#line 18658 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_9_9, report__V_10_10);
                }
#line 343 "report.m"
              }
#line 343 "report.m"
          }
#line 343 "report.m"
        else
#line 343 "report.m"
          {
#line 343 "report.m"
            MR_Box report__V_11_11 = (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 0));
#line 343 "report.m"
            MR_Box report__V_12_12;

#line 343 "report.m"
            report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 343 "report.m"
            if (report__succeeded)
#line 343 "report.m"
              {
#line 343 "report.m"
                report__V_12_12 = (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0));
#line 18682 "report.c"
                {
#line 18684 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_11_11, report__V_12_12);
                }
#line 343 "report.m"
              }
#line 343 "report.m"
          }
#line 343 "report.m"
    return report__succeeded;
#line 343 "report.m"
  }
#line 343 "report.m"
}

#line 359 "report.m"
void MR_CALL 
report____Compare____gs_field_info_0_0(
#line 359 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 359 "report.m"
  MR_Word report__HeadVar__2_2,
#line 359 "report.m"
  MR_Word report__HeadVar__3_3)
#line 359 "report.m"
{
#line 359 "report.m"
  {
#line 359 "report.m"
    MR_bool report__succeeded;
#line 359 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 359 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 359 "report.m"
    {
#line 359 "report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[18], report__HeadVar__1_1, ((MR_Box) (report__Cast_HeadVar1_4)), ((MR_Box) (report__Cast_HeadVar2_5)));
#line 359 "report.m"
      return;
    }
#line 359 "report.m"
  }
#line 359 "report.m"
}

#line 359 "report.m"
MR_bool MR_CALL 
report____Unify____gs_field_info_0_0(
#line 359 "report.m"
  MR_Word report__HeadVar__1_1,
#line 359 "report.m"
  MR_Word report__HeadVar__2_2)
#line 359 "report.m"
{
#line 359 "report.m"
  {
#line 359 "report.m"
    MR_bool report__succeeded;
#line 359 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 359 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 359 "report.m"
    {
#line 359 "report.m"
      return report__succeeded = report____Unify____gs_field_info_2_0((MR_Word) &report_scalar_common_1[4], (MR_Word) &report_scalar_common_1[17], report__Cast_HeadVar1_3, report__Cast_HeadVar2_4);
    }
#line 359 "report.m"
    return report__succeeded;
#line 359 "report.m"
  }
#line 359 "report.m"
}

#line 357 "report.m"
void MR_CALL 
report____Compare____gs_ds_map_1_0(
#line 357 "report.m"
  MR_Word report__TypeInfo_for_T_6,
#line 357 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 357 "report.m"
  MR_Word report__HeadVar__2_2,
#line 357 "report.m"
  MR_Word report__HeadVar__3_3)
#line 357 "report.m"
{
#line 357 "report.m"
  {
#line 357 "report.m"
    MR_bool report__succeeded;
#line 357 "report.m"
    MR_Word report__TypeInfo_10_10;
#line 357 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 357 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 18784 "report.c"
    {
#line 18786 "report.c"
      report__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18788 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18790 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18792 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 2) = ((MR_Box) (report__TypeInfo_for_T_6));
#line 18794 "report.c"
    }
#line 357 "report.m"
    {
#line 357 "report.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, report__TypeInfo_10_10, report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 357 "report.m"
      return;
    }
#line 357 "report.m"
  }
#line 357 "report.m"
}

#line 357 "report.m"
MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0(
#line 357 "report.m"
  MR_Word report__TypeInfo_for_T_5,
#line 357 "report.m"
  MR_Word report__HeadVar__1_1,
#line 357 "report.m"
  MR_Word report__HeadVar__2_2)
#line 357 "report.m"
{
#line 357 "report.m"
  {
#line 357 "report.m"
    MR_bool report__succeeded;
#line 357 "report.m"
    MR_Word report__TypeInfo_9_9;
#line 357 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 357 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 18830 "report.c"
    {
#line 18832 "report.c"
      report__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18834 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18836 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18838 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 2) = ((MR_Box) (report__TypeInfo_for_T_5));
#line 18840 "report.c"
    }
#line 357 "report.m"
    {
#line 357 "report.m"
      return report__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, report__TypeInfo_9_9, report__Cast_HeadVar1_3, report__Cast_HeadVar2_4);
    }
#line 357 "report.m"
    return report__succeeded;
#line 357 "report.m"
  }
#line 357 "report.m"
}

#line 364 "report.m"
void MR_CALL 
report____Compare____gs_ds_map_0_0(
#line 364 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 364 "report.m"
  MR_Word report__HeadVar__2_2,
#line 364 "report.m"
  MR_Word report__HeadVar__3_3)
#line 364 "report.m"
{
#line 364 "report.m"
  {
#line 364 "report.m"
    MR_bool report__succeeded;
#line 364 "report.m"
    MR_Word report__Cast_HeadVar1_4 = report__HeadVar__2_2;
#line 364 "report.m"
    MR_Word report__Cast_HeadVar2_5 = report__HeadVar__3_3;

#line 364 "report.m"
    {
#line 364 "report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_2[20], report__HeadVar__1_1, ((MR_Box) (report__Cast_HeadVar1_4)), ((MR_Box) (report__Cast_HeadVar2_5)));
#line 364 "report.m"
      return;
    }
#line 364 "report.m"
  }
#line 364 "report.m"
}

#line 364 "report.m"
MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0(
#line 364 "report.m"
  MR_Word report__HeadVar__1_1,
#line 364 "report.m"
  MR_Word report__HeadVar__2_2)
#line 364 "report.m"
{
#line 364 "report.m"
  {
#line 364 "report.m"
    MR_bool report__succeeded;
#line 364 "report.m"
    MR_Word report__Cast_HeadVar1_3 = report__HeadVar__1_1;
#line 364 "report.m"
    MR_Word report__Cast_HeadVar2_4 = report__HeadVar__2_2;

#line 364 "report.m"
    {
#line 364 "report.m"
      return report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_2[20], ((MR_Box) (report__Cast_HeadVar1_3)), ((MR_Box) (report__Cast_HeadVar2_4)));
    }
#line 364 "report.m"
    return report__succeeded;
#line 364 "report.m"
  }
#line 364 "report.m"
}

#line 339 "report.m"
void MR_CALL 
report____Compare____getter_or_setter_0_0(
#line 339 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 339 "report.m"
  MR_Word report__HeadVar__2_2,
#line 339 "report.m"
  MR_Word report__HeadVar__3_3)
#line 339 "report.m"
{
#line 339 "report.m"
  {
#line 339 "report.m"
    MR_bool report__succeeded;
#line 339 "report.m"
    MR_Integer report__Cast_HeadVar1_4 = (MR_Integer) report__HeadVar__2_2;
#line 339 "report.m"
    MR_Integer report__Cast_HeadVar2_5 = (MR_Integer) report__HeadVar__3_3;

#line 339 "report.m"
    {
#line 339 "report.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__Cast_HeadVar1_4, report__Cast_HeadVar2_5);
#line 339 "report.m"
      return;
    }
#line 339 "report.m"
  }
#line 339 "report.m"
}

#line 339 "report.m"
MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0(
#line 339 "report.m"
  MR_Word report__HeadVar__2_1,
#line 339 "report.m"
  MR_Word report__HeadVar__2_2)
#line 339 "report.m"
{
#line 18957 "report.c"
  {
#line 18959 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 18962 "report.c"
    return report__succeeded;
#line 18964 "report.c"
  }
#line 339 "report.m"
}

#line 336 "report.m"
void MR_CALL 
report____Compare____field_name_0_0(
#line 336 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 336 "report.m"
  MR_Word report__HeadVar__2_2,
#line 336 "report.m"
  MR_Word report__HeadVar__3_3)
#line 336 "report.m"
{
#line 336 "report.m"
  {
#line 336 "report.m"
    MR_bool report__succeeded;
#line 336 "report.m"
    MR_Integer report__CastX_6 = (MR_Integer) report__HeadVar__2_2;
#line 336 "report.m"
    MR_Integer report__CastY_7 = (MR_Integer) report__HeadVar__3_3;

#line 336 "report.m"
    report__succeeded = (report__CastX_6 == report__CastY_7);
#line 336 "report.m"
    if (report__succeeded)
#line 18993 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 336 "report.m"
    else
#line 336 "report.m"
      {
#line 336 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;
#line 336 "report.m"
        MR_String report__V_5_5 = (MR_String) report__HeadVar__3_3;

#line 336 "report.m"
        {
#line 336 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_4_4, report__V_5_5);
#line 336 "report.m"
          return;
        }
#line 336 "report.m"
      }
#line 336 "report.m"
  }
#line 336 "report.m"
}

#line 336 "report.m"
MR_bool MR_CALL 
report____Unify____field_name_0_0(
#line 336 "report.m"
  MR_Word report__HeadVar__1_1,
#line 336 "report.m"
  MR_Word report__HeadVar__2_2)
#line 336 "report.m"
{
#line 336 "report.m"
  {
#line 336 "report.m"
    MR_bool report__succeeded;
#line 336 "report.m"
    MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 336 "report.m"
    MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 336 "report.m"
    report__succeeded = (report__CastX_5 == report__CastY_6);
#line 336 "report.m"
    if (report__succeeded)
#line 336 "report.m"
      report__succeeded = MR_TRUE;
#line 336 "report.m"
    else
#line 336 "report.m"
      {
#line 336 "report.m"
        MR_String report__V_3_3 = (MR_String) report__HeadVar__1_1;
#line 336 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;

#line 19051 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_4_4) == 0);
#line 336 "report.m"
      }
#line 336 "report.m"
    return report__succeeded;
#line 336 "report.m"
  }
#line 336 "report.m"
}

#line 43 "report.m"
void MR_CALL 
report____Compare____deep_report_0_0(
#line 43 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 43 "report.m"
  MR_Word report__HeadVar__2_2,
#line 43 "report.m"
  MR_Word report__HeadVar__3_3)
#line 43 "report.m"
{
#line 43 "report.m"
  {
#line 43 "report.m"
    MR_bool report__succeeded;
#line 43 "report.m"
    MR_Integer report__CastX_45 = (MR_Integer) report__HeadVar__2_2;
#line 43 "report.m"
    MR_Integer report__CastY_46 = (MR_Integer) report__HeadVar__3_3;

#line 43 "report.m"
    report__succeeded = (report__CastX_45 == report__CastY_46);
#line 43 "report.m"
    if (report__succeeded)
#line 19086 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "report.m"
    else
#line 43 "report.m"
      {
#line 43 "report.m"
        MR_Integer report__V_4_4;
#line 43 "report.m"
        MR_Integer report__V_5_5;

#line 43 "report.m"
        {
#line 43 "report.m"
          report____Index____deep_report_0_0(report__HeadVar__2_2, &report__V_4_4);
        }
#line 43 "report.m"
        {
#line 43 "report.m"
          report____Index____deep_report_0_0(report__HeadVar__3_3, &report__V_5_5);
        }
#line 43 "report.m"
        report__succeeded = (report__V_4_4 < report__V_5_5);
#line 43 "report.m"
        if (report__succeeded)
#line 19111 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "report.m"
        else
#line 43 "report.m"
          {
#line 43 "report.m"
            report__succeeded = (report__V_4_4 > report__V_5_5);
#line 43 "report.m"
            if (report__succeeded)
#line 19121 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "report.m"
            else
#line 43 "report.m"
              {
#line 43 "report.m"
                MR_Word report__V_6_6;

#line 43 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 43 "report.m"
                  {
#line 43 "report.m"
                    MR_Word report__TypeInfo_49_49;
#line 43 "report.m"
                    MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "report.m"
                    MR_Word report__V_12_12;

#line 43 "report.m"
                    report__succeeded = ((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 43 "report.m"
                    if (report__succeeded)
#line 43 "report.m"
                      {
#line 43 "report.m"
                        report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__3_3, (MR_Integer) 0)));
#line 19149 "report.c"
                        report__TypeInfo_49_49 = (MR_Word) &report_scalar_common_2[1];
#line 43 "report.m"
                        {
#line 43 "report.m"
                          mercury__builtin__compare_3_p_0(report__TypeInfo_49_49, &report__V_6_6, ((MR_Box) (report__V_11_11)), ((MR_Box) (report__V_12_12)));
                        }
#line 43 "report.m"
                        report__succeeded = MR_TRUE;
#line 43 "report.m"
                      }
#line 43 "report.m"
                  }
#line 43 "report.m"
                else
#line 43 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 43 "report.m"
                    {
#line 43 "report.m"
                      MR_Word report__TypeInfo_48_48;
#line 43 "report.m"
                      MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "report.m"
                      MR_Word report__V_10_10;

#line 43 "report.m"
                      report__succeeded = ((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 43 "report.m"
                      if (report__succeeded)
#line 43 "report.m"
                        {
#line 43 "report.m"
                          report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__3_3, (MR_Integer) 0)));
#line 19183 "report.c"
                          report__TypeInfo_48_48 = (MR_Word) &report_scalar_common_2[0];
#line 43 "report.m"
                          {
#line 43 "report.m"
                            mercury__builtin__compare_3_p_0(report__TypeInfo_48_48, &report__V_6_6, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_10_10)));
                          }
#line 43 "report.m"
                          report__succeeded = MR_TRUE;
#line 43 "report.m"
                        }
#line 43 "report.m"
                    }
#line 43 "report.m"
                  else
#line 43 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 43 "report.m"
                      {
#line 43 "report.m"
                        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 43 "report.m"
                        MR_Word report__V_8_8;
#line 43 "report.m"
                        MR_String report__V_66_66;
#line 43 "report.m"
                        MR_String report__V_67_67;

#line 43 "report.m"
                        report__succeeded = ((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 43 "report.m"
                        if (report__succeeded)
#line 43 "report.m"
                          {
#line 43 "report.m"
                            report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 43 "report.m"
                            report__V_66_66 = (MR_String) report__V_7_7;
#line 43 "report.m"
                            report__V_67_67 = (MR_String) report__V_8_8;
#line 43 "report.m"
                            {
#line 43 "report.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_6_6, report__V_66_66, report__V_67_67);
                            }
#line 43 "report.m"
                            report__succeeded = MR_TRUE;
#line 43 "report.m"
                          }
#line 43 "report.m"
                      }
#line 43 "report.m"
                    else
#line 43 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 43 "report.m"
                        {
#line 43 "report.m"
                          MR_Word report__TypeInfo_63_63;
#line 43 "report.m"
                          MR_Word report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                          MR_Word report__V_40_40;

#line 43 "report.m"
                          report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 43 "report.m"
                          if (report__succeeded)
#line 43 "report.m"
                            {
#line 43 "report.m"
                              report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19255 "report.c"
                              report__TypeInfo_63_63 = (MR_Word) &report_scalar_common_2[15];
#line 43 "report.m"
                              {
#line 43 "report.m"
                                mercury__builtin__compare_3_p_0(report__TypeInfo_63_63, &report__V_6_6, ((MR_Box) (report__V_39_39)), ((MR_Box) (report__V_40_40)));
                              }
#line 43 "report.m"
                              report__succeeded = MR_TRUE;
#line 43 "report.m"
                            }
#line 43 "report.m"
                        }
#line 43 "report.m"
                      else
#line 43 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 43 "report.m"
                          {
#line 43 "report.m"
                            MR_Word report__TypeInfo_65_65;
#line 43 "report.m"
                            MR_Word report__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                            MR_Word report__V_44_44;

#line 43 "report.m"
                            report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 43 "report.m"
                            if (report__succeeded)
#line 43 "report.m"
                              {
#line 43 "report.m"
                                report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19289 "report.c"
                                report__TypeInfo_65_65 = (MR_Word) &report_scalar_common_2[17];
#line 43 "report.m"
                                {
#line 43 "report.m"
                                  mercury__builtin__compare_3_p_0(report__TypeInfo_65_65, &report__V_6_6, ((MR_Box) (report__V_43_43)), ((MR_Box) (report__V_44_44)));
                                }
#line 43 "report.m"
                                report__succeeded = MR_TRUE;
#line 43 "report.m"
                              }
#line 43 "report.m"
                          }
#line 43 "report.m"
                        else
#line 43 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 43 "report.m"
                            {
#line 43 "report.m"
                              MR_Word report__TypeInfo_62_62;
#line 43 "report.m"
                              MR_Word report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                              MR_Word report__V_38_38;

#line 43 "report.m"
                              report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 43 "report.m"
                              if (report__succeeded)
#line 43 "report.m"
                                {
#line 43 "report.m"
                                  report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19323 "report.c"
                                  report__TypeInfo_62_62 = (MR_Word) &report_scalar_common_2[14];
#line 43 "report.m"
                                  {
#line 43 "report.m"
                                    mercury__builtin__compare_3_p_0(report__TypeInfo_62_62, &report__V_6_6, ((MR_Box) (report__V_37_37)), ((MR_Box) (report__V_38_38)));
                                  }
#line 43 "report.m"
                                  report__succeeded = MR_TRUE;
#line 43 "report.m"
                                }
#line 43 "report.m"
                            }
#line 43 "report.m"
                          else
#line 43 "report.m"
                            if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 43 "report.m"
                              {
#line 43 "report.m"
                                MR_Word report__TypeInfo_64_64;
#line 43 "report.m"
                                MR_Word report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                MR_Word report__V_42_42;

#line 43 "report.m"
                                report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 43 "report.m"
                                if (report__succeeded)
#line 43 "report.m"
                                  {
#line 43 "report.m"
                                    report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19357 "report.c"
                                    report__TypeInfo_64_64 = (MR_Word) &report_scalar_common_2[16];
#line 43 "report.m"
                                    {
#line 43 "report.m"
                                      mercury__builtin__compare_3_p_0(report__TypeInfo_64_64, &report__V_6_6, ((MR_Box) (report__V_41_41)), ((MR_Box) (report__V_42_42)));
                                    }
#line 43 "report.m"
                                    report__succeeded = MR_TRUE;
#line 43 "report.m"
                                  }
#line 43 "report.m"
                              }
#line 43 "report.m"
                            else
#line 43 "report.m"
                              if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 43 "report.m"
                                {
#line 43 "report.m"
                                  MR_Word report__TypeInfo_50_50;
#line 43 "report.m"
                                  MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                  MR_Word report__V_14_14;

#line 43 "report.m"
                                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 43 "report.m"
                                  if (report__succeeded)
#line 43 "report.m"
                                    {
#line 43 "report.m"
                                      report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19391 "report.c"
                                      report__TypeInfo_50_50 = (MR_Word) &report_scalar_common_2[2];
#line 43 "report.m"
                                      {
#line 43 "report.m"
                                        mercury__builtin__compare_3_p_0(report__TypeInfo_50_50, &report__V_6_6, ((MR_Box) (report__V_13_13)), ((MR_Box) (report__V_14_14)));
                                      }
#line 43 "report.m"
                                      report__succeeded = MR_TRUE;
#line 43 "report.m"
                                    }
#line 43 "report.m"
                                }
#line 43 "report.m"
                              else
#line 43 "report.m"
                                if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 43 "report.m"
                                  {
#line 43 "report.m"
                                    MR_Word report__TypeInfo_53_53;
#line 43 "report.m"
                                    MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                    MR_Word report__V_20_20;

#line 43 "report.m"
                                    report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 43 "report.m"
                                    if (report__succeeded)
#line 43 "report.m"
                                      {
#line 43 "report.m"
                                        report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19425 "report.c"
                                        report__TypeInfo_53_53 = (MR_Word) &report_scalar_common_2[5];
#line 43 "report.m"
                                        {
#line 43 "report.m"
                                          mercury__builtin__compare_3_p_0(report__TypeInfo_53_53, &report__V_6_6, ((MR_Box) (report__V_19_19)), ((MR_Box) (report__V_20_20)));
                                        }
#line 43 "report.m"
                                        report__succeeded = MR_TRUE;
#line 43 "report.m"
                                      }
#line 43 "report.m"
                                  }
#line 43 "report.m"
                                else
#line 43 "report.m"
                                  if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 43 "report.m"
                                    {
#line 43 "report.m"
                                      MR_Word report__TypeInfo_54_54;
#line 43 "report.m"
                                      MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                      MR_Word report__V_22_22;

#line 43 "report.m"
                                      report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 43 "report.m"
                                      if (report__succeeded)
#line 43 "report.m"
                                        {
#line 43 "report.m"
                                          report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19459 "report.c"
                                          report__TypeInfo_54_54 = (MR_Word) &report_scalar_common_2[6];
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            mercury__builtin__compare_3_p_0(report__TypeInfo_54_54, &report__V_6_6, ((MR_Box) (report__V_21_21)), ((MR_Box) (report__V_22_22)));
                                          }
#line 43 "report.m"
                                          report__succeeded = MR_TRUE;
#line 43 "report.m"
                                        }
#line 43 "report.m"
                                    }
#line 43 "report.m"
                                  else
#line 43 "report.m"
                                    if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 43 "report.m"
                                      {
#line 43 "report.m"
                                        MR_Word report__TypeInfo_55_55;
#line 43 "report.m"
                                        MR_Word report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                        MR_Word report__V_24_24;

#line 43 "report.m"
                                        report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 43 "report.m"
                                        if (report__succeeded)
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19493 "report.c"
                                            report__TypeInfo_55_55 = (MR_Word) &report_scalar_common_2[7];
#line 43 "report.m"
                                            {
#line 43 "report.m"
                                              mercury__builtin__compare_3_p_0(report__TypeInfo_55_55, &report__V_6_6, ((MR_Box) (report__V_23_23)), ((MR_Box) (report__V_24_24)));
                                            }
#line 43 "report.m"
                                            report__succeeded = MR_TRUE;
#line 43 "report.m"
                                          }
#line 43 "report.m"
                                      }
#line 43 "report.m"
                                    else
#line 43 "report.m"
                                      if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 43 "report.m"
                                        {
#line 43 "report.m"
                                          MR_Word report__TypeInfo_57_57;
#line 43 "report.m"
                                          MR_Word report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                          MR_Word report__V_28_28;

#line 43 "report.m"
                                          report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 43 "report.m"
                                          if (report__succeeded)
#line 43 "report.m"
                                            {
#line 43 "report.m"
                                              report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19527 "report.c"
                                              report__TypeInfo_57_57 = (MR_Word) &report_scalar_common_2[9];
#line 43 "report.m"
                                              {
#line 43 "report.m"
                                                mercury__builtin__compare_3_p_0(report__TypeInfo_57_57, &report__V_6_6, ((MR_Box) (report__V_27_27)), ((MR_Box) (report__V_28_28)));
                                              }
#line 43 "report.m"
                                              report__succeeded = MR_TRUE;
#line 43 "report.m"
                                            }
#line 43 "report.m"
                                        }
#line 43 "report.m"
                                      else
#line 43 "report.m"
                                        if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            MR_Word report__TypeInfo_59_59;
#line 43 "report.m"
                                            MR_Word report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                            MR_Word report__V_32_32;

#line 43 "report.m"
                                            report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 43 "report.m"
                                            if (report__succeeded)
#line 43 "report.m"
                                              {
#line 43 "report.m"
                                                report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19561 "report.c"
                                                report__TypeInfo_59_59 = (MR_Word) &report_scalar_common_2[11];
#line 43 "report.m"
                                                {
#line 43 "report.m"
                                                  mercury__builtin__compare_3_p_0(report__TypeInfo_59_59, &report__V_6_6, ((MR_Box) (report__V_31_31)), ((MR_Box) (report__V_32_32)));
                                                }
#line 43 "report.m"
                                                report__succeeded = MR_TRUE;
#line 43 "report.m"
                                              }
#line 43 "report.m"
                                          }
#line 43 "report.m"
                                        else
#line 43 "report.m"
                                          if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 43 "report.m"
                                            {
#line 43 "report.m"
                                              MR_Word report__TypeInfo_61_61;
#line 43 "report.m"
                                              MR_Word report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                              MR_Word report__V_36_36;

#line 43 "report.m"
                                              report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 43 "report.m"
                                              if (report__succeeded)
#line 43 "report.m"
                                                {
#line 43 "report.m"
                                                  report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19595 "report.c"
                                                  report__TypeInfo_61_61 = (MR_Word) &report_scalar_common_2[13];
#line 43 "report.m"
                                                  {
#line 43 "report.m"
                                                    mercury__builtin__compare_3_p_0(report__TypeInfo_61_61, &report__V_6_6, ((MR_Box) (report__V_35_35)), ((MR_Box) (report__V_36_36)));
                                                  }
#line 43 "report.m"
                                                  report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                }
#line 43 "report.m"
                                            }
#line 43 "report.m"
                                          else
#line 43 "report.m"
                                            if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 43 "report.m"
                                              {
#line 43 "report.m"
                                                MR_Word report__TypeInfo_60_60;
#line 43 "report.m"
                                                MR_Word report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                                MR_Word report__V_34_34;

#line 43 "report.m"
                                                report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 43 "report.m"
                                                if (report__succeeded)
#line 43 "report.m"
                                                  {
#line 43 "report.m"
                                                    report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19629 "report.c"
                                                    report__TypeInfo_60_60 = (MR_Word) &report_scalar_common_2[12];
#line 43 "report.m"
                                                    {
#line 43 "report.m"
                                                      mercury__builtin__compare_3_p_0(report__TypeInfo_60_60, &report__V_6_6, ((MR_Box) (report__V_33_33)), ((MR_Box) (report__V_34_34)));
                                                    }
#line 43 "report.m"
                                                    report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                  }
#line 43 "report.m"
                                              }
#line 43 "report.m"
                                            else
#line 43 "report.m"
                                              if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 43 "report.m"
                                                {
#line 43 "report.m"
                                                  MR_Word report__TypeInfo_58_58;
#line 43 "report.m"
                                                  MR_Word report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                                  MR_Word report__V_30_30;

#line 43 "report.m"
                                                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 43 "report.m"
                                                  if (report__succeeded)
#line 43 "report.m"
                                                    {
#line 43 "report.m"
                                                      report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19663 "report.c"
                                                      report__TypeInfo_58_58 = (MR_Word) &report_scalar_common_2[10];
#line 43 "report.m"
                                                      {
#line 43 "report.m"
                                                        mercury__builtin__compare_3_p_0(report__TypeInfo_58_58, &report__V_6_6, ((MR_Box) (report__V_29_29)), ((MR_Box) (report__V_30_30)));
                                                      }
#line 43 "report.m"
                                                      report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                    }
#line 43 "report.m"
                                                }
#line 43 "report.m"
                                              else
#line 43 "report.m"
                                                if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 43 "report.m"
                                                  {
#line 43 "report.m"
                                                    MR_Word report__TypeInfo_52_52;
#line 43 "report.m"
                                                    MR_Word report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                                    MR_Word report__V_18_18;

#line 43 "report.m"
                                                    report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 43 "report.m"
                                                    if (report__succeeded)
#line 43 "report.m"
                                                      {
#line 43 "report.m"
                                                        report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19697 "report.c"
                                                        report__TypeInfo_52_52 = (MR_Word) &report_scalar_common_2[4];
#line 43 "report.m"
                                                        {
#line 43 "report.m"
                                                          mercury__builtin__compare_3_p_0(report__TypeInfo_52_52, &report__V_6_6, ((MR_Box) (report__V_17_17)), ((MR_Box) (report__V_18_18)));
                                                        }
#line 43 "report.m"
                                                        report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                      }
#line 43 "report.m"
                                                  }
#line 43 "report.m"
                                                else
#line 43 "report.m"
                                                  if (((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 43 "report.m"
                                                    {
#line 43 "report.m"
                                                      MR_Word report__TypeInfo_51_51;
#line 43 "report.m"
                                                      MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                                      MR_Word report__V_16_16;

#line 43 "report.m"
                                                      report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 43 "report.m"
                                                      if (report__succeeded)
#line 43 "report.m"
                                                        {
#line 43 "report.m"
                                                          report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19731 "report.c"
                                                          report__TypeInfo_51_51 = (MR_Word) &report_scalar_common_2[3];
#line 43 "report.m"
                                                          {
#line 43 "report.m"
                                                            mercury__builtin__compare_3_p_0(report__TypeInfo_51_51, &report__V_6_6, ((MR_Box) (report__V_15_15)), ((MR_Box) (report__V_16_16)));
                                                          }
#line 43 "report.m"
                                                          report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                        }
#line 43 "report.m"
                                                    }
#line 43 "report.m"
                                                  else
#line 43 "report.m"
                                                    {
#line 43 "report.m"
                                                      MR_Word report__TypeInfo_56_56;
#line 43 "report.m"
                                                      MR_Word report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 43 "report.m"
                                                      MR_Word report__V_26_26;

#line 43 "report.m"
                                                      report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 43 "report.m"
                                                      if (report__succeeded)
#line 43 "report.m"
                                                        {
#line 43 "report.m"
                                                          report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 1)));
#line 19763 "report.c"
                                                          report__TypeInfo_56_56 = (MR_Word) &report_scalar_common_2[8];
#line 43 "report.m"
                                                          {
#line 43 "report.m"
                                                            mercury__builtin__compare_3_p_0(report__TypeInfo_56_56, &report__V_6_6, ((MR_Box) (report__V_25_25)), ((MR_Box) (report__V_26_26)));
                                                          }
#line 43 "report.m"
                                                          report__succeeded = MR_TRUE;
#line 43 "report.m"
                                                        }
#line 43 "report.m"
                                                    }
#line 43 "report.m"
                if (report__succeeded)
#line 43 "report.m"
                  *report__HeadVar__1_1 = report__V_6_6;
#line 43 "report.m"
                else
#line 43 "report.m"
                  {
#line 43 "report.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 43 "report.m"
                    return;
                  }
#line 43 "report.m"
              }
#line 43 "report.m"
          }
#line 43 "report.m"
      }
#line 43 "report.m"
  }
#line 43 "report.m"
}

#line 43 "report.m"
void MR_CALL 
report____Index____deep_report_0_0(
#line 43 "report.m"
  MR_Word report__HeadVar__1_1,
#line 43 "report.m"
  MR_Integer * report__HeadVar__2_2)
#line 43 "report.m"
{
#line 43 "report.m"
  {
#line 43 "report.m"
    MR_bool report__succeeded;

#line 43 "report.m"
    if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 19816 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 2;
#line 43 "report.m"
    else
#line 43 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 19822 "report.c"
        *report__HeadVar__2_2 = (MR_Integer) 1;
#line 43 "report.m"
      else
#line 43 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 19828 "report.c"
          *report__HeadVar__2_2 = (MR_Integer) 0;
#line 43 "report.m"
        else
#line 43 "report.m"
          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 19834 "report.c"
            *report__HeadVar__2_2 = (MR_Integer) 16;
#line 43 "report.m"
          else
#line 43 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 19840 "report.c"
              *report__HeadVar__2_2 = (MR_Integer) 18;
#line 43 "report.m"
            else
#line 43 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 19846 "report.c"
                *report__HeadVar__2_2 = (MR_Integer) 15;
#line 43 "report.m"
              else
#line 43 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 19852 "report.c"
                  *report__HeadVar__2_2 = (MR_Integer) 17;
#line 43 "report.m"
                else
#line 43 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 19858 "report.c"
                    *report__HeadVar__2_2 = (MR_Integer) 3;
#line 43 "report.m"
                  else
#line 43 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 19864 "report.c"
                      *report__HeadVar__2_2 = (MR_Integer) 6;
#line 43 "report.m"
                    else
#line 43 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 19870 "report.c"
                        *report__HeadVar__2_2 = (MR_Integer) 7;
#line 43 "report.m"
                      else
#line 43 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 19876 "report.c"
                          *report__HeadVar__2_2 = (MR_Integer) 8;
#line 43 "report.m"
                        else
#line 43 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 19882 "report.c"
                            *report__HeadVar__2_2 = (MR_Integer) 10;
#line 43 "report.m"
                          else
#line 43 "report.m"
                            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 19888 "report.c"
                              *report__HeadVar__2_2 = (MR_Integer) 12;
#line 43 "report.m"
                            else
#line 43 "report.m"
                              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 19894 "report.c"
                                *report__HeadVar__2_2 = (MR_Integer) 14;
#line 43 "report.m"
                              else
#line 43 "report.m"
                                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 19900 "report.c"
                                  *report__HeadVar__2_2 = (MR_Integer) 13;
#line 43 "report.m"
                                else
#line 43 "report.m"
                                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 19906 "report.c"
                                    *report__HeadVar__2_2 = (MR_Integer) 11;
#line 43 "report.m"
                                  else
#line 43 "report.m"
                                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 19912 "report.c"
                                      *report__HeadVar__2_2 = (MR_Integer) 5;
#line 43 "report.m"
                                    else
#line 43 "report.m"
                                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 19918 "report.c"
                                        *report__HeadVar__2_2 = (MR_Integer) 4;
#line 43 "report.m"
                                      else
#line 19922 "report.c"
                                        *report__HeadVar__2_2 = (MR_Integer) 9;
#line 43 "report.m"
  }
#line 43 "report.m"
}

#line 43 "report.m"
MR_bool MR_CALL 
report____Unify____deep_report_0_0(
#line 43 "report.m"
  MR_Word report__HeadVar__1_1,
#line 43 "report.m"
  MR_Word report__HeadVar__2_2)
#line 43 "report.m"
{
#line 43 "report.m"
  {
#line 43 "report.m"
    MR_bool report__succeeded;
#line 43 "report.m"
    MR_Integer report__CastX_41 = (MR_Integer) report__HeadVar__1_1;
#line 43 "report.m"
    MR_Integer report__CastY_42 = (MR_Integer) report__HeadVar__2_2;

#line 43 "report.m"
    report__succeeded = (report__CastX_41 == report__CastY_42);
#line 43 "report.m"
    if (report__succeeded)
#line 43 "report.m"
      report__succeeded = MR_TRUE;
#line 43 "report.m"
    else
#line 43 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 43 "report.m"
        {
#line 43 "report.m"
          MR_Word report__TypeInfo_46_46;
#line 43 "report.m"
          MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "report.m"
          MR_Word report__V_8_8;

#line 43 "report.m"
          report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 43 "report.m"
          if (report__succeeded)
#line 43 "report.m"
            {
#line 43 "report.m"
              report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), report__HeadVar__2_2, (MR_Integer) 0)));
#line 19974 "report.c"
              report__TypeInfo_46_46 = (MR_Word) &report_scalar_common_2[1];
#line 19976 "report.c"
              {
#line 19978 "report.c"
                return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_46_46, ((MR_Box) (report__V_7_7)), ((MR_Box) (report__V_8_8)));
              }
#line 43 "report.m"
            }
#line 43 "report.m"
        }
#line 43 "report.m"
      else
#line 43 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 43 "report.m"
          {
#line 43 "report.m"
            MR_Word report__TypeInfo_49_49;
#line 43 "report.m"
            MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "report.m"
            MR_Word report__V_6_6;

#line 43 "report.m"
            report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 43 "report.m"
            if (report__succeeded)
#line 43 "report.m"
              {
#line 43 "report.m"
                report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), report__HeadVar__2_2, (MR_Integer) 0)));
#line 20006 "report.c"
                report__TypeInfo_49_49 = (MR_Word) &report_scalar_common_2[0];
#line 20008 "report.c"
                {
#line 20010 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_49_49, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_6_6)));
                }
#line 43 "report.m"
              }
#line 43 "report.m"
          }
#line 43 "report.m"
        else
#line 43 "report.m"
          if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 43 "report.m"
            {
#line 43 "report.m"
              MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 43 "report.m"
              MR_Word report__V_4_4;
#line 102 "report.m"
              MR_Integer report__CastX_63;
#line 102 "report.m"
              MR_Integer report__CastY_64;

#line 43 "report.m"
              report__succeeded = ((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 43 "report.m"
              if (report__succeeded)
#line 43 "report.m"
                {
#line 43 "report.m"
                  report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "report.m"
                  report__CastX_63 = (MR_Integer) report__V_3_3;
#line 102 "report.m"
                  report__CastY_64 = (MR_Integer) report__V_4_4;
#line 102 "report.m"
                  report__succeeded = (report__CastX_63 == report__CastY_64);
#line 102 "report.m"
                  if (report__succeeded)
#line 102 "report.m"
                    report__succeeded = MR_TRUE;
#line 102 "report.m"
                  else
#line 102 "report.m"
                    {
#line 102 "report.m"
                      MR_String report__V_61_61 = (MR_String) report__V_3_3;
#line 102 "report.m"
                      MR_String report__V_62_62 = (MR_String) report__V_4_4;

#line 20059 "report.c"
                      report__succeeded = (strcmp(report__V_61_61, report__V_62_62) == 0);
#line 102 "report.m"
                    }
#line 43 "report.m"
                }
#line 43 "report.m"
            }
#line 43 "report.m"
          else
#line 43 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 43 "report.m"
              {
#line 43 "report.m"
                MR_Word report__TypeInfo_43_43;
#line 43 "report.m"
                MR_Word report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                MR_Word report__V_36_36;

#line 43 "report.m"
                report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 43 "report.m"
                if (report__succeeded)
#line 43 "report.m"
                  {
#line 43 "report.m"
                    report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20088 "report.c"
                    report__TypeInfo_43_43 = (MR_Word) &report_scalar_common_2[15];
#line 20090 "report.c"
                    {
#line 20092 "report.c"
                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_43_43, ((MR_Box) (report__V_35_35)), ((MR_Box) (report__V_36_36)));
                    }
#line 43 "report.m"
                  }
#line 43 "report.m"
              }
#line 43 "report.m"
            else
#line 43 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 43 "report.m"
                {
#line 43 "report.m"
                  MR_Word report__TypeInfo_44_44;
#line 43 "report.m"
                  MR_Word report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                  MR_Word report__V_40_40;

#line 43 "report.m"
                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 43 "report.m"
                  if (report__succeeded)
#line 43 "report.m"
                    {
#line 43 "report.m"
                      report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20120 "report.c"
                      report__TypeInfo_44_44 = (MR_Word) &report_scalar_common_2[17];
#line 20122 "report.c"
                      {
#line 20124 "report.c"
                        return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_44_44, ((MR_Box) (report__V_39_39)), ((MR_Box) (report__V_40_40)));
                      }
#line 43 "report.m"
                    }
#line 43 "report.m"
                }
#line 43 "report.m"
              else
#line 43 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 43 "report.m"
                  {
#line 43 "report.m"
                    MR_Word report__TypeInfo_45_45;
#line 43 "report.m"
                    MR_Word report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                    MR_Word report__V_34_34;

#line 43 "report.m"
                    report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 43 "report.m"
                    if (report__succeeded)
#line 43 "report.m"
                      {
#line 43 "report.m"
                        report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20152 "report.c"
                        report__TypeInfo_45_45 = (MR_Word) &report_scalar_common_2[14];
#line 20154 "report.c"
                        {
#line 20156 "report.c"
                          return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_45_45, ((MR_Box) (report__V_33_33)), ((MR_Box) (report__V_34_34)));
                        }
#line 43 "report.m"
                      }
#line 43 "report.m"
                  }
#line 43 "report.m"
                else
#line 43 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 43 "report.m"
                    {
#line 43 "report.m"
                      MR_Word report__TypeInfo_47_47;
#line 43 "report.m"
                      MR_Word report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                      MR_Word report__V_38_38;

#line 43 "report.m"
                      report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 43 "report.m"
                      if (report__succeeded)
#line 43 "report.m"
                        {
#line 43 "report.m"
                          report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20184 "report.c"
                          report__TypeInfo_47_47 = (MR_Word) &report_scalar_common_2[16];
#line 20186 "report.c"
                          {
#line 20188 "report.c"
                            return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_47_47, ((MR_Box) (report__V_37_37)), ((MR_Box) (report__V_38_38)));
                          }
#line 43 "report.m"
                        }
#line 43 "report.m"
                    }
#line 43 "report.m"
                  else
#line 43 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 43 "report.m"
                      {
#line 43 "report.m"
                        MR_Word report__TypeInfo_48_48;
#line 43 "report.m"
                        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                        MR_Word report__V_10_10;

#line 43 "report.m"
                        report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 43 "report.m"
                        if (report__succeeded)
#line 43 "report.m"
                          {
#line 43 "report.m"
                            report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20216 "report.c"
                            report__TypeInfo_48_48 = (MR_Word) &report_scalar_common_2[2];
#line 20218 "report.c"
                            {
#line 20220 "report.c"
                              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_48_48, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_10_10)));
                            }
#line 43 "report.m"
                          }
#line 43 "report.m"
                      }
#line 43 "report.m"
                    else
#line 43 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 43 "report.m"
                        {
#line 43 "report.m"
                          MR_Word report__TypeInfo_50_50;
#line 43 "report.m"
                          MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                          MR_Word report__V_16_16;

#line 43 "report.m"
                          report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 43 "report.m"
                          if (report__succeeded)
#line 43 "report.m"
                            {
#line 43 "report.m"
                              report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20248 "report.c"
                              report__TypeInfo_50_50 = (MR_Word) &report_scalar_common_2[5];
#line 20250 "report.c"
                              {
#line 20252 "report.c"
                                return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_50_50, ((MR_Box) (report__V_15_15)), ((MR_Box) (report__V_16_16)));
                              }
#line 43 "report.m"
                            }
#line 43 "report.m"
                        }
#line 43 "report.m"
                      else
#line 43 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 43 "report.m"
                          {
#line 43 "report.m"
                            MR_Word report__TypeInfo_51_51;
#line 43 "report.m"
                            MR_Word report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                            MR_Word report__V_18_18;

#line 43 "report.m"
                            report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 43 "report.m"
                            if (report__succeeded)
#line 43 "report.m"
                              {
#line 43 "report.m"
                                report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20280 "report.c"
                                report__TypeInfo_51_51 = (MR_Word) &report_scalar_common_2[6];
#line 20282 "report.c"
                                {
#line 20284 "report.c"
                                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_51_51, ((MR_Box) (report__V_17_17)), ((MR_Box) (report__V_18_18)));
                                }
#line 43 "report.m"
                              }
#line 43 "report.m"
                          }
#line 43 "report.m"
                        else
#line 43 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 43 "report.m"
                            {
#line 43 "report.m"
                              MR_Word report__TypeInfo_52_52;
#line 43 "report.m"
                              MR_Word report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                              MR_Word report__V_20_20;

#line 43 "report.m"
                              report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 43 "report.m"
                              if (report__succeeded)
#line 43 "report.m"
                                {
#line 43 "report.m"
                                  report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20312 "report.c"
                                  report__TypeInfo_52_52 = (MR_Word) &report_scalar_common_2[7];
#line 20314 "report.c"
                                  {
#line 20316 "report.c"
                                    return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_52_52, ((MR_Box) (report__V_19_19)), ((MR_Box) (report__V_20_20)));
                                  }
#line 43 "report.m"
                                }
#line 43 "report.m"
                            }
#line 43 "report.m"
                          else
#line 43 "report.m"
                            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 43 "report.m"
                              {
#line 43 "report.m"
                                MR_Word report__TypeInfo_53_53;
#line 43 "report.m"
                                MR_Word report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                MR_Word report__V_24_24;

#line 43 "report.m"
                                report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 43 "report.m"
                                if (report__succeeded)
#line 43 "report.m"
                                  {
#line 43 "report.m"
                                    report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20344 "report.c"
                                    report__TypeInfo_53_53 = (MR_Word) &report_scalar_common_2[9];
#line 20346 "report.c"
                                    {
#line 20348 "report.c"
                                      return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_53_53, ((MR_Box) (report__V_23_23)), ((MR_Box) (report__V_24_24)));
                                    }
#line 43 "report.m"
                                  }
#line 43 "report.m"
                              }
#line 43 "report.m"
                            else
#line 43 "report.m"
                              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 43 "report.m"
                                {
#line 43 "report.m"
                                  MR_Word report__TypeInfo_54_54;
#line 43 "report.m"
                                  MR_Word report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                  MR_Word report__V_28_28;

#line 43 "report.m"
                                  report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 43 "report.m"
                                  if (report__succeeded)
#line 43 "report.m"
                                    {
#line 43 "report.m"
                                      report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20376 "report.c"
                                      report__TypeInfo_54_54 = (MR_Word) &report_scalar_common_2[11];
#line 20378 "report.c"
                                      {
#line 20380 "report.c"
                                        return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_54_54, ((MR_Box) (report__V_27_27)), ((MR_Box) (report__V_28_28)));
                                      }
#line 43 "report.m"
                                    }
#line 43 "report.m"
                                }
#line 43 "report.m"
                              else
#line 43 "report.m"
                                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 43 "report.m"
                                  {
#line 43 "report.m"
                                    MR_Word report__TypeInfo_55_55;
#line 43 "report.m"
                                    MR_Word report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                    MR_Word report__V_32_32;

#line 43 "report.m"
                                    report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 43 "report.m"
                                    if (report__succeeded)
#line 43 "report.m"
                                      {
#line 43 "report.m"
                                        report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20408 "report.c"
                                        report__TypeInfo_55_55 = (MR_Word) &report_scalar_common_2[13];
#line 20410 "report.c"
                                        {
#line 20412 "report.c"
                                          return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_55_55, ((MR_Box) (report__V_31_31)), ((MR_Box) (report__V_32_32)));
                                        }
#line 43 "report.m"
                                      }
#line 43 "report.m"
                                  }
#line 43 "report.m"
                                else
#line 43 "report.m"
                                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 43 "report.m"
                                    {
#line 43 "report.m"
                                      MR_Word report__TypeInfo_56_56;
#line 43 "report.m"
                                      MR_Word report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                      MR_Word report__V_30_30;

#line 43 "report.m"
                                      report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 43 "report.m"
                                      if (report__succeeded)
#line 43 "report.m"
                                        {
#line 43 "report.m"
                                          report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20440 "report.c"
                                          report__TypeInfo_56_56 = (MR_Word) &report_scalar_common_2[12];
#line 20442 "report.c"
                                          {
#line 20444 "report.c"
                                            return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_56_56, ((MR_Box) (report__V_29_29)), ((MR_Box) (report__V_30_30)));
                                          }
#line 43 "report.m"
                                        }
#line 43 "report.m"
                                    }
#line 43 "report.m"
                                  else
#line 43 "report.m"
                                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 43 "report.m"
                                      {
#line 43 "report.m"
                                        MR_Word report__TypeInfo_57_57;
#line 43 "report.m"
                                        MR_Word report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                        MR_Word report__V_26_26;

#line 43 "report.m"
                                        report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 43 "report.m"
                                        if (report__succeeded)
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20472 "report.c"
                                            report__TypeInfo_57_57 = (MR_Word) &report_scalar_common_2[10];
#line 20474 "report.c"
                                            {
#line 20476 "report.c"
                                              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_57_57, ((MR_Box) (report__V_25_25)), ((MR_Box) (report__V_26_26)));
                                            }
#line 43 "report.m"
                                          }
#line 43 "report.m"
                                      }
#line 43 "report.m"
                                    else
#line 43 "report.m"
                                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 43 "report.m"
                                        {
#line 43 "report.m"
                                          MR_Word report__TypeInfo_58_58;
#line 43 "report.m"
                                          MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                          MR_Word report__V_14_14;

#line 43 "report.m"
                                          report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 43 "report.m"
                                          if (report__succeeded)
#line 43 "report.m"
                                            {
#line 43 "report.m"
                                              report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20504 "report.c"
                                              report__TypeInfo_58_58 = (MR_Word) &report_scalar_common_2[4];
#line 20506 "report.c"
                                              {
#line 20508 "report.c"
                                                return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_58_58, ((MR_Box) (report__V_13_13)), ((MR_Box) (report__V_14_14)));
                                              }
#line 43 "report.m"
                                            }
#line 43 "report.m"
                                        }
#line 43 "report.m"
                                      else
#line 43 "report.m"
                                        if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            MR_Word report__TypeInfo_59_59;
#line 43 "report.m"
                                            MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                            MR_Word report__V_12_12;

#line 43 "report.m"
                                            report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 43 "report.m"
                                            if (report__succeeded)
#line 43 "report.m"
                                              {
#line 43 "report.m"
                                                report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20536 "report.c"
                                                report__TypeInfo_59_59 = (MR_Word) &report_scalar_common_2[3];
#line 20538 "report.c"
                                                {
#line 20540 "report.c"
                                                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_59_59, ((MR_Box) (report__V_11_11)), ((MR_Box) (report__V_12_12)));
                                                }
#line 43 "report.m"
                                              }
#line 43 "report.m"
                                          }
#line 43 "report.m"
                                        else
#line 43 "report.m"
                                          {
#line 43 "report.m"
                                            MR_Word report__TypeInfo_60_60;
#line 43 "report.m"
                                            MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 1)));
#line 43 "report.m"
                                            MR_Word report__V_22_22;

#line 43 "report.m"
                                            report__succeeded = ((((MR_tag((MR_Word) report__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 43 "report.m"
                                            if (report__succeeded)
#line 43 "report.m"
                                              {
#line 43 "report.m"
                                                report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__2_2, (MR_Integer) 1)));
#line 20566 "report.c"
                                                report__TypeInfo_60_60 = (MR_Word) &report_scalar_common_2[8];
#line 20568 "report.c"
                                                {
#line 20570 "report.c"
                                                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_60_60, ((MR_Box) (report__V_21_21)), ((MR_Box) (report__V_22_22)));
                                                }
#line 43 "report.m"
                                              }
#line 43 "report.m"
                                          }
#line 43 "report.m"
    return report__succeeded;
#line 43 "report.m"
  }
#line 43 "report.m"
}

#line 333 "report.m"
void MR_CALL 
report____Compare____data_struct_name_0_0(
#line 333 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 333 "report.m"
  MR_Word report__HeadVar__2_2,
#line 333 "report.m"
  MR_Word report__HeadVar__3_3)
#line 333 "report.m"
{
#line 333 "report.m"
  {
#line 333 "report.m"
    MR_bool report__succeeded;
#line 333 "report.m"
    MR_Integer report__CastX_6 = (MR_Integer) report__HeadVar__2_2;
#line 333 "report.m"
    MR_Integer report__CastY_7 = (MR_Integer) report__HeadVar__3_3;

#line 333 "report.m"
    report__succeeded = (report__CastX_6 == report__CastY_7);
#line 333 "report.m"
    if (report__succeeded)
#line 20608 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 333 "report.m"
    else
#line 333 "report.m"
      {
#line 333 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;
#line 333 "report.m"
        MR_String report__V_5_5 = (MR_String) report__HeadVar__3_3;

#line 333 "report.m"
        {
#line 333 "report.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(report__HeadVar__1_1, report__V_4_4, report__V_5_5);
#line 333 "report.m"
          return;
        }
#line 333 "report.m"
      }
#line 333 "report.m"
  }
#line 333 "report.m"
}

#line 333 "report.m"
MR_bool MR_CALL 
report____Unify____data_struct_name_0_0(
#line 333 "report.m"
  MR_Word report__HeadVar__1_1,
#line 333 "report.m"
  MR_Word report__HeadVar__2_2)
#line 333 "report.m"
{
#line 333 "report.m"
  {
#line 333 "report.m"
    MR_bool report__succeeded;
#line 333 "report.m"
    MR_Integer report__CastX_5 = (MR_Integer) report__HeadVar__1_1;
#line 333 "report.m"
    MR_Integer report__CastY_6 = (MR_Integer) report__HeadVar__2_2;

#line 333 "report.m"
    report__succeeded = (report__CastX_5 == report__CastY_6);
#line 333 "report.m"
    if (report__succeeded)
#line 333 "report.m"
      report__succeeded = MR_TRUE;
#line 333 "report.m"
    else
#line 333 "report.m"
      {
#line 333 "report.m"
        MR_String report__V_3_3 = (MR_String) report__HeadVar__1_1;
#line 333 "report.m"
        MR_String report__V_4_4 = (MR_String) report__HeadVar__2_2;

#line 20666 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_4_4) == 0);
#line 333 "report.m"
      }
#line 333 "report.m"
    return report__succeeded;
#line 333 "report.m"
  }
#line 333 "report.m"
}

#line 129 "report.m"
void MR_CALL 
report____Compare____clique_report_0_0(
#line 129 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 129 "report.m"
  MR_Word report__HeadVar__2_2,
#line 129 "report.m"
  MR_Word report__HeadVar__3_3)
#line 129 "report.m"
{
#line 129 "report.m"
  {
#line 129 "report.m"
    MR_bool report__succeeded;
#line 129 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 129 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 129 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 129 "report.m"
    if (report__succeeded)
#line 20701 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "report.m"
    else
#line 129 "report.m"
      {
#line 129 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 129 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 129 "report.m"
        MR_Word report__V_10_10;
#line 129 "report.m"
        MR_Integer report__V_17_17 = (MR_Integer) report__V_4_4;
#line 129 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_7_7;

#line 129 "report.m"
        {
#line 129 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_10_10, report__V_17_17, report__V_18_18);
        }
#line 20731 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 129 "report.m"
        report__succeeded = !(report__succeeded);
#line 129 "report.m"
        if (report__succeeded)
#line 129 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 129 "report.m"
        else
#line 129 "report.m"
          {
#line 129 "report.m"
            MR_Word report__V_11_11;

#line 129 "report.m"
            {
#line 129 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[15], &report__V_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
            }
#line 20751 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 129 "report.m"
            report__succeeded = !(report__succeeded);
#line 129 "report.m"
            if (report__succeeded)
#line 129 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 129 "report.m"
            else
#line 129 "report.m"
              {
#line 129 "report.m"
                {
#line 129 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[16], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 129 "report.m"
                  return;
                }
#line 129 "report.m"
              }
#line 129 "report.m"
          }
#line 129 "report.m"
      }
#line 129 "report.m"
  }
#line 129 "report.m"
}

#line 129 "report.m"
MR_bool MR_CALL 
report____Unify____clique_report_0_0(
#line 129 "report.m"
  MR_Word report__HeadVar__1_1,
#line 129 "report.m"
  MR_Word report__HeadVar__2_2)
#line 129 "report.m"
{
#line 129 "report.m"
  {
#line 129 "report.m"
    MR_bool report__succeeded;
#line 129 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 129 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 129 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 129 "report.m"
    if (report__succeeded)
#line 129 "report.m"
      report__succeeded = MR_TRUE;
#line 129 "report.m"
    else
#line 129 "report.m"
      {
#line 129 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 129 "report.m"
        MR_Word report__TypeInfo_13_13;
#line 129 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 129 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 129 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 129 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 129 "report.m"
        MR_Integer report__V_14_14 = (MR_Integer) report__V_3_3;
#line 129 "report.m"
        MR_Integer report__V_15_15 = (MR_Integer) report__V_6_6;

#line 20830 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 129 "report.m"
        if (report__succeeded)
#line 129 "report.m"
          {
#line 20836 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[15];
#line 20838 "report.c"
            {
#line 20840 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 129 "report.m"
            if (report__succeeded)
#line 129 "report.m"
              {
#line 20847 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[16];
#line 20849 "report.c"
                {
#line 20851 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 129 "report.m"
              }
#line 129 "report.m"
          }
#line 129 "report.m"
      }
#line 129 "report.m"
    return report__succeeded;
#line 129 "report.m"
  }
#line 129 "report.m"
}

#line 210 "report.m"
void MR_CALL 
report____Compare____clique_recursion_report_0_0(
#line 210 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 210 "report.m"
  MR_Word report__HeadVar__2_2,
#line 210 "report.m"
  MR_Word report__HeadVar__3_3)
#line 210 "report.m"
{
#line 210 "report.m"
  {
#line 210 "report.m"
    MR_bool report__succeeded;
#line 210 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 210 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 210 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 210 "report.m"
    if (report__succeeded)
#line 20891 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "report.m"
    else
#line 210 "report.m"
      {
#line 210 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 210 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 210 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 210 "report.m"
        MR_Integer report__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 210 "report.m"
        MR_Word report__V_10_10;
#line 210 "report.m"
        MR_Integer report__V_17_17 = (MR_Integer) report__V_4_4;
#line 210 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_7_7;

#line 210 "report.m"
        {
#line 210 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_10_10, report__V_17_17, report__V_18_18);
        }
#line 20921 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 210 "report.m"
        report__succeeded = !(report__succeeded);
#line 210 "report.m"
        if (report__succeeded)
#line 210 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 210 "report.m"
        else
#line 210 "report.m"
          {
#line 210 "report.m"
            MR_Word report__V_11_11;

#line 210 "report.m"
            {
#line 210 "report.m"
              report____Compare____recursion_type_0_0(&report__V_11_11, report__V_5_5, report__V_8_8);
            }
#line 20941 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 210 "report.m"
            report__succeeded = !(report__succeeded);
#line 210 "report.m"
            if (report__succeeded)
#line 210 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 210 "report.m"
            else
#line 210 "report.m"
              {
#line 210 "report.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_6_6, report__V_9_9);
#line 210 "report.m"
                return;
              }
#line 210 "report.m"
          }
#line 210 "report.m"
      }
#line 210 "report.m"
  }
#line 210 "report.m"
}

#line 210 "report.m"
MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0(
#line 210 "report.m"
  MR_Word report__HeadVar__1_1,
#line 210 "report.m"
  MR_Word report__HeadVar__2_2)
#line 210 "report.m"
{
#line 210 "report.m"
  {
#line 210 "report.m"
    MR_bool report__succeeded;
#line 210 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 210 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 210 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 210 "report.m"
    if (report__succeeded)
#line 210 "report.m"
      report__succeeded = MR_TRUE;
#line 210 "report.m"
    else
#line 210 "report.m"
      {
#line 210 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 210 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "report.m"
        MR_Integer report__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 210 "report.m"
        MR_Integer report__V_12_12 = (MR_Integer) report__V_3_3;
#line 210 "report.m"
        MR_Integer report__V_13_13 = (MR_Integer) report__V_6_6;

#line 21012 "report.c"
        report__succeeded = (report__V_12_12 == report__V_13_13);
#line 210 "report.m"
        if (report__succeeded)
#line 210 "report.m"
          {
#line 21018 "report.c"
            {
#line 21020 "report.c"
              report__succeeded = report____Unify____recursion_type_0_0(report__V_4_4, report__V_7_7);
            }
#line 210 "report.m"
            if (report__succeeded)
#line 21025 "report.c"
              report__succeeded = (report__V_5_5 == report__V_8_8);
#line 210 "report.m"
          }
#line 210 "report.m"
      }
#line 210 "report.m"
    return report__succeeded;
#line 210 "report.m"
  }
#line 210 "report.m"
}

#line 148 "report.m"
void MR_CALL 
report____Compare____clique_proc_report_0_0(
#line 148 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 148 "report.m"
  MR_Word report__HeadVar__2_2,
#line 148 "report.m"
  MR_Word report__HeadVar__3_3)
#line 148 "report.m"
{
#line 148 "report.m"
  {
#line 148 "report.m"
    MR_bool report__succeeded;
#line 148 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 148 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 148 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 148 "report.m"
    if (report__succeeded)
#line 21062 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "report.m"
    else
#line 148 "report.m"
      {
#line 148 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 148 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "report.m"
        MR_Word report__V_10_10;

#line 148 "report.m"
        {
#line 148 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[4], &report__V_10_10, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
        }
#line 21088 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 148 "report.m"
        report__succeeded = !(report__succeeded);
#line 148 "report.m"
        if (report__succeeded)
#line 148 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 148 "report.m"
        else
#line 148 "report.m"
          {
#line 148 "report.m"
            MR_Word report__V_11_11;

#line 148 "report.m"
            {
#line 148 "report.m"
              report____Compare____clique_proc_dynamic_report_0_0(&report__V_11_11, report__V_5_5, report__V_8_8);
            }
#line 21108 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 148 "report.m"
            report__succeeded = !(report__succeeded);
#line 148 "report.m"
            if (report__succeeded)
#line 148 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 148 "report.m"
            else
#line 148 "report.m"
              {
#line 148 "report.m"
                {
#line 148 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[13], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 148 "report.m"
                  return;
                }
#line 148 "report.m"
              }
#line 148 "report.m"
          }
#line 148 "report.m"
      }
#line 148 "report.m"
  }
#line 148 "report.m"
}

#line 148 "report.m"
MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0(
#line 148 "report.m"
  MR_Word report__HeadVar__1_1,
#line 148 "report.m"
  MR_Word report__HeadVar__2_2)
#line 148 "report.m"
{
#line 148 "report.m"
  {
#line 148 "report.m"
    MR_bool report__succeeded;
#line 148 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 148 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 148 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 148 "report.m"
    if (report__succeeded)
#line 148 "report.m"
      report__succeeded = MR_TRUE;
#line 148 "report.m"
    else
#line 148 "report.m"
      {
#line 148 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 148 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 21181 "report.c"
        {
#line 21183 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_6_6);
        }
#line 148 "report.m"
        if (report__succeeded)
#line 148 "report.m"
          {
#line 21190 "report.c"
            {
#line 21192 "report.c"
              report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(report__V_4_4, report__V_7_7);
            }
#line 148 "report.m"
            if (report__succeeded)
#line 148 "report.m"
              {
#line 21199 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[13];
#line 21201 "report.c"
                {
#line 21203 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 148 "report.m"
              }
#line 148 "report.m"
          }
#line 148 "report.m"
      }
#line 148 "report.m"
    return report__succeeded;
#line 148 "report.m"
  }
#line 148 "report.m"
}

#line 181 "report.m"
void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0(
#line 181 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 181 "report.m"
  MR_Word report__HeadVar__2_2,
#line 181 "report.m"
  MR_Word report__HeadVar__3_3)
#line 181 "report.m"
{
#line 181 "report.m"
  {
#line 181 "report.m"
    MR_bool report__succeeded;
#line 181 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 181 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 181 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 181 "report.m"
    if (report__succeeded)
#line 21243 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 181 "report.m"
    else
#line 181 "report.m"
      {
#line 181 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 181 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 181 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 181 "report.m"
        MR_Word report__V_8_8;

#line 181 "report.m"
        {
#line 181 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[4], &report__V_8_8, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_6_6)));
        }
#line 21265 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 181 "report.m"
        report__succeeded = !(report__succeeded);
#line 181 "report.m"
        if (report__succeeded)
#line 181 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 181 "report.m"
        else
#line 181 "report.m"
          {
#line 181 "report.m"
            {
#line 181 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[12], report__HeadVar__1_1, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_7_7)));
#line 181 "report.m"
              return;
            }
#line 181 "report.m"
          }
#line 181 "report.m"
      }
#line 181 "report.m"
  }
#line 181 "report.m"
}

#line 181 "report.m"
MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0(
#line 181 "report.m"
  MR_Word report__HeadVar__1_1,
#line 181 "report.m"
  MR_Word report__HeadVar__2_2)
#line 181 "report.m"
{
#line 181 "report.m"
  {
#line 181 "report.m"
    MR_bool report__succeeded;
#line 181 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 181 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 181 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 181 "report.m"
    if (report__succeeded)
#line 181 "report.m"
      report__succeeded = MR_TRUE;
#line 181 "report.m"
    else
#line 181 "report.m"
      {
#line 181 "report.m"
        MR_Word report__TypeInfo_10_10;
#line 181 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 181 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 181 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 181 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 21332 "report.c"
        {
#line 21334 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_5_5);
        }
#line 181 "report.m"
        if (report__succeeded)
#line 181 "report.m"
          {
#line 21341 "report.c"
            report__TypeInfo_10_10 = (MR_Word) &report_scalar_common_1[12];
#line 21343 "report.c"
            {
#line 21345 "report.c"
              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_10_10, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_6_6)));
            }
#line 181 "report.m"
          }
#line 181 "report.m"
      }
#line 181 "report.m"
    return report__succeeded;
#line 181 "report.m"
  }
#line 181 "report.m"
}

#line 536 "report.m"
void MR_CALL 
report____Compare____clique_dump_info_0_0(
#line 536 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 536 "report.m"
  MR_Word report__HeadVar__2_2,
#line 536 "report.m"
  MR_Word report__HeadVar__3_3)
#line 536 "report.m"
{
#line 536 "report.m"
  {
#line 536 "report.m"
    MR_bool report__succeeded;
#line 536 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 536 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 536 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 536 "report.m"
    if (report__succeeded)
#line 21383 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 536 "report.m"
    else
#line 536 "report.m"
      {
#line 536 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 536 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 536 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 536 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 536 "report.m"
        MR_Word report__V_10_10;

#line 536 "report.m"
        {
#line 536 "report.m"
          report____Compare____clique_desc_0_0(&report__V_10_10, report__V_4_4, report__V_7_7);
        }
#line 21409 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 536 "report.m"
        report__succeeded = !(report__succeeded);
#line 536 "report.m"
        if (report__succeeded)
#line 536 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 536 "report.m"
        else
#line 536 "report.m"
          {
#line 536 "report.m"
            MR_Word report__V_11_11;
#line 536 "report.m"
            MR_Integer report__V_17_17 = (MR_Integer) report__V_5_5;
#line 536 "report.m"
            MR_Integer report__V_18_18 = (MR_Integer) report__V_8_8;

#line 536 "report.m"
            {
#line 536 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_11_11, report__V_17_17, report__V_18_18);
            }
#line 21433 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 536 "report.m"
            report__succeeded = !(report__succeeded);
#line 536 "report.m"
            if (report__succeeded)
#line 536 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 536 "report.m"
            else
#line 536 "report.m"
              {
#line 536 "report.m"
                {
#line 536 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[11], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 536 "report.m"
                  return;
                }
#line 536 "report.m"
              }
#line 536 "report.m"
          }
#line 536 "report.m"
      }
#line 536 "report.m"
  }
#line 536 "report.m"
}

#line 536 "report.m"
MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0(
#line 536 "report.m"
  MR_Word report__HeadVar__1_1,
#line 536 "report.m"
  MR_Word report__HeadVar__2_2)
#line 536 "report.m"
{
#line 536 "report.m"
  {
#line 536 "report.m"
    MR_bool report__succeeded;
#line 536 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 536 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 536 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 536 "report.m"
    if (report__succeeded)
#line 536 "report.m"
      report__succeeded = MR_TRUE;
#line 536 "report.m"
    else
#line 536 "report.m"
      {
#line 536 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 536 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 536 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 536 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 536 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 536 "report.m"
        MR_Integer report__V_13_13;
#line 536 "report.m"
        MR_Integer report__V_14_14;

#line 21510 "report.c"
        {
#line 21512 "report.c"
          report__succeeded = report____Unify____clique_desc_0_0(report__V_3_3, report__V_6_6);
        }
#line 536 "report.m"
        if (report__succeeded)
#line 536 "report.m"
          {
#line 21519 "report.c"
            report__V_13_13 = (MR_Integer) report__V_4_4;
#line 21521 "report.c"
            report__V_14_14 = (MR_Integer) report__V_7_7;
#line 21523 "report.c"
            report__succeeded = (report__V_13_13 == report__V_14_14);
#line 536 "report.m"
            if (report__succeeded)
#line 536 "report.m"
              {
#line 21529 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[11];
#line 21531 "report.c"
                {
#line 21533 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 536 "report.m"
              }
#line 536 "report.m"
          }
#line 536 "report.m"
      }
#line 536 "report.m"
    return report__succeeded;
#line 536 "report.m"
  }
#line 536 "report.m"
}

#line 693 "report.m"
void MR_CALL 
report____Compare____clique_desc_0_0(
#line 693 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 693 "report.m"
  MR_Word report__HeadVar__2_2,
#line 693 "report.m"
  MR_Word report__HeadVar__3_3)
#line 693 "report.m"
{
#line 693 "report.m"
  {
#line 693 "report.m"
    MR_bool report__succeeded;
#line 693 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 693 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 693 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 693 "report.m"
    if (report__succeeded)
#line 21573 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 693 "report.m"
    else
#line 693 "report.m"
      {
#line 693 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 693 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 693 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 693 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 693 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 693 "report.m"
        MR_Word report__V_10_10;
#line 693 "report.m"
        MR_Integer report__V_17_17 = (MR_Integer) report__V_4_4;
#line 693 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_7_7;

#line 693 "report.m"
        {
#line 693 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_10_10, report__V_17_17, report__V_18_18);
        }
#line 21603 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 693 "report.m"
        report__succeeded = !(report__succeeded);
#line 693 "report.m"
        if (report__succeeded)
#line 693 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 693 "report.m"
        else
#line 693 "report.m"
          {
#line 693 "report.m"
            MR_Word report__V_11_11;

#line 693 "report.m"
            {
#line 693 "report.m"
              report____Compare____proc_desc_0_0(&report__V_11_11, report__V_5_5, report__V_8_8);
            }
#line 21623 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 693 "report.m"
            report__succeeded = !(report__succeeded);
#line 693 "report.m"
            if (report__succeeded)
#line 693 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 693 "report.m"
            else
#line 693 "report.m"
              {
#line 693 "report.m"
                {
#line 693 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[10], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 693 "report.m"
                  return;
                }
#line 693 "report.m"
              }
#line 693 "report.m"
          }
#line 693 "report.m"
      }
#line 693 "report.m"
  }
#line 693 "report.m"
}

#line 693 "report.m"
MR_bool MR_CALL 
report____Unify____clique_desc_0_0(
#line 693 "report.m"
  MR_Word report__HeadVar__1_1,
#line 693 "report.m"
  MR_Word report__HeadVar__2_2)
#line 693 "report.m"
{
#line 693 "report.m"
  {
#line 693 "report.m"
    MR_bool report__succeeded;
#line 693 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 693 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 693 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 693 "report.m"
    if (report__succeeded)
#line 693 "report.m"
      report__succeeded = MR_TRUE;
#line 693 "report.m"
    else
#line 693 "report.m"
      {
#line 693 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 693 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 693 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 693 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 693 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 693 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 693 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 693 "report.m"
        MR_Integer report__V_13_13 = (MR_Integer) report__V_3_3;
#line 693 "report.m"
        MR_Integer report__V_14_14 = (MR_Integer) report__V_6_6;

#line 21700 "report.c"
        report__succeeded = (report__V_13_13 == report__V_14_14);
#line 693 "report.m"
        if (report__succeeded)
#line 693 "report.m"
          {
#line 21706 "report.c"
            {
#line 21708 "report.c"
              report__succeeded = report____Unify____proc_desc_0_0(report__V_4_4, report__V_7_7);
            }
#line 693 "report.m"
            if (report__succeeded)
#line 693 "report.m"
              {
#line 21715 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[10];
#line 21717 "report.c"
                {
#line 21719 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 693 "report.m"
              }
#line 693 "report.m"
          }
#line 693 "report.m"
      }
#line 693 "report.m"
    return report__succeeded;
#line 693 "report.m"
  }
#line 693 "report.m"
}

#line 192 "report.m"
void MR_CALL 
report____Compare____clique_call_site_report_0_0(
#line 192 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 192 "report.m"
  MR_Word report__HeadVar__2_2,
#line 192 "report.m"
  MR_Word report__HeadVar__3_3)
#line 192 "report.m"
{
#line 192 "report.m"
  {
#line 192 "report.m"
    MR_bool report__succeeded;
#line 192 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 192 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 192 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 192 "report.m"
    if (report__succeeded)
#line 21759 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 192 "report.m"
    else
#line 192 "report.m"
      {
#line 192 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 192 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 192 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 192 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 192 "report.m"
        MR_Word report__V_10_10;

#line 192 "report.m"
        {
#line 192 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[1], &report__V_10_10, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
        }
#line 21785 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 192 "report.m"
        report__succeeded = !(report__succeeded);
#line 192 "report.m"
        if (report__succeeded)
#line 192 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 192 "report.m"
        else
#line 192 "report.m"
          {
#line 192 "report.m"
            MR_Word report__V_11_11;

#line 192 "report.m"
            {
#line 192 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[7], &report__V_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
            }
#line 21805 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 192 "report.m"
            report__succeeded = !(report__succeeded);
#line 192 "report.m"
            if (report__succeeded)
#line 192 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 192 "report.m"
            else
#line 192 "report.m"
              {
#line 192 "report.m"
                {
#line 192 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[9], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 192 "report.m"
                  return;
                }
#line 192 "report.m"
              }
#line 192 "report.m"
          }
#line 192 "report.m"
      }
#line 192 "report.m"
  }
#line 192 "report.m"
}

#line 192 "report.m"
MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0(
#line 192 "report.m"
  MR_Word report__HeadVar__1_1,
#line 192 "report.m"
  MR_Word report__HeadVar__2_2)
#line 192 "report.m"
{
#line 192 "report.m"
  {
#line 192 "report.m"
    MR_bool report__succeeded;
#line 192 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 192 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 192 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 192 "report.m"
    if (report__succeeded)
#line 192 "report.m"
      report__succeeded = MR_TRUE;
#line 192 "report.m"
    else
#line 192 "report.m"
      {
#line 192 "report.m"
        MR_Word report__TypeInfo_12_12;
#line 192 "report.m"
        MR_Word report__TypeInfo_13_13;
#line 192 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 192 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 21880 "report.c"
        {
#line 21882 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, report__V_3_3, report__V_6_6);
        }
#line 192 "report.m"
        if (report__succeeded)
#line 192 "report.m"
          {
#line 21889 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[7];
#line 21891 "report.c"
            {
#line 21893 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 192 "report.m"
            if (report__succeeded)
#line 192 "report.m"
              {
#line 21900 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[9];
#line 21902 "report.c"
                {
#line 21904 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 192 "report.m"
              }
#line 192 "report.m"
          }
#line 192 "report.m"
      }
#line 192 "report.m"
    return report__succeeded;
#line 192 "report.m"
  }
#line 192 "report.m"
}

#line 404 "report.m"
void MR_CALL 
report____Compare____callers_counts_0_0(
#line 404 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 404 "report.m"
  MR_Word report__HeadVar__2_2,
#line 404 "report.m"
  MR_Word report__HeadVar__3_3)
#line 404 "report.m"
{
#line 404 "report.m"
  {
#line 404 "report.m"
    MR_bool report__succeeded;
#line 404 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 404 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 404 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 404 "report.m"
    if (report__succeeded)
#line 21944 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 404 "report.m"
    else
#line 404 "report.m"
      {
#line 404 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 404 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 404 "report.m"
        MR_Word report__V_8_8;

#line 404 "report.m"
        {
#line 404 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 21966 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 404 "report.m"
        report__succeeded = !(report__succeeded);
#line 404 "report.m"
        if (report__succeeded)
#line 404 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 404 "report.m"
        else
#line 404 "report.m"
          {
#line 404 "report.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(report__HeadVar__1_1, report__V_5_5, report__V_7_7);
#line 404 "report.m"
            return;
          }
#line 404 "report.m"
      }
#line 404 "report.m"
  }
#line 404 "report.m"
}

#line 404 "report.m"
MR_bool MR_CALL 
report____Unify____callers_counts_0_0(
#line 404 "report.m"
  MR_Word report__HeadVar__1_1,
#line 404 "report.m"
  MR_Word report__HeadVar__2_2)
#line 404 "report.m"
{
#line 404 "report.m"
  {
#line 404 "report.m"
    MR_bool report__succeeded;
#line 404 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 404 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 404 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 404 "report.m"
    if (report__succeeded)
#line 404 "report.m"
      report__succeeded = MR_TRUE;
#line 404 "report.m"
    else
#line 404 "report.m"
      {
#line 404 "report.m"
        MR_Integer report__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "report.m"
        MR_Integer report__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 22027 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 404 "report.m"
        if (report__succeeded)
#line 22031 "report.c"
          report__succeeded = (report__V_4_4 == report__V_6_6);
#line 404 "report.m"
      }
#line 404 "report.m"
    return report__succeeded;
#line 404 "report.m"
  }
#line 404 "report.m"
}

#line 518 "report.m"
void MR_CALL 
report____Compare____call_site_static_dump_info_0_0(
#line 518 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 518 "report.m"
  MR_Word report__HeadVar__2_2,
#line 518 "report.m"
  MR_Word report__HeadVar__3_3)
#line 518 "report.m"
{
#line 518 "report.m"
  {
#line 518 "report.m"
    MR_bool report__succeeded;
#line 518 "report.m"
    MR_Integer report__CastX_21 = (MR_Integer) report__HeadVar__2_2;
#line 518 "report.m"
    MR_Integer report__CastY_22 = (MR_Integer) report__HeadVar__3_3;

#line 518 "report.m"
    report__succeeded = (report__CastX_21 == report__CastY_22);
#line 518 "report.m"
    if (report__succeeded)
#line 22066 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 518 "report.m"
    else
#line 518 "report.m"
      {
#line 518 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 518 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 518 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 518 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 518 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 518 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 518 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 518 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 518 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 518 "report.m"
        MR_Integer report__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 518 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 518 "report.m"
        MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 518 "report.m"
        MR_Word report__V_16_16;
#line 518 "report.m"
        MR_Integer report__V_29_29 = (MR_Integer) report__V_4_4;
#line 518 "report.m"
        MR_Integer report__V_30_30 = (MR_Integer) report__V_10_10;

#line 518 "report.m"
        {
#line 518 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_16_16, report__V_29_29, report__V_30_30);
        }
#line 22108 "report.c"
        report__succeeded = (report__V_16_16 == (MR_Integer) 0);
#line 518 "report.m"
        report__succeeded = !(report__succeeded);
#line 518 "report.m"
        if (report__succeeded)
#line 518 "report.m"
          *report__HeadVar__1_1 = report__V_16_16;
#line 518 "report.m"
        else
#line 518 "report.m"
          {
#line 518 "report.m"
            MR_Word report__V_17_17;
#line 518 "report.m"
            MR_Integer report__V_31_31 = (MR_Integer) report__V_5_5;
#line 518 "report.m"
            MR_Integer report__V_32_32 = (MR_Integer) report__V_11_11;

#line 518 "report.m"
            {
#line 518 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_17_17, report__V_31_31, report__V_32_32);
            }
#line 22132 "report.c"
            report__succeeded = (report__V_17_17 == (MR_Integer) 0);
#line 518 "report.m"
            report__succeeded = !(report__succeeded);
#line 518 "report.m"
            if (report__succeeded)
#line 518 "report.m"
              *report__HeadVar__1_1 = report__V_17_17;
#line 518 "report.m"
            else
#line 518 "report.m"
              {
#line 518 "report.m"
                MR_Word report__V_18_18;

#line 518 "report.m"
                {
#line 518 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_18_18, report__V_6_6, report__V_12_12);
                }
#line 22152 "report.c"
                report__succeeded = (report__V_18_18 == (MR_Integer) 0);
#line 518 "report.m"
                report__succeeded = !(report__succeeded);
#line 518 "report.m"
                if (report__succeeded)
#line 518 "report.m"
                  *report__HeadVar__1_1 = report__V_18_18;
#line 518 "report.m"
                else
#line 518 "report.m"
                  {
#line 518 "report.m"
                    MR_Word report__V_19_19;

#line 518 "report.m"
                    {
#line 518 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_19_19, report__V_7_7, report__V_13_13);
                    }
#line 22172 "report.c"
                    report__succeeded = (report__V_19_19 == (MR_Integer) 0);
#line 518 "report.m"
                    report__succeeded = !(report__succeeded);
#line 518 "report.m"
                    if (report__succeeded)
#line 518 "report.m"
                      *report__HeadVar__1_1 = report__V_19_19;
#line 518 "report.m"
                    else
#line 518 "report.m"
                      {
#line 518 "report.m"
                        MR_Word report__V_20_20;

#line 518 "report.m"
                        {
#line 518 "report.m"
                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&report__V_20_20, report__V_8_8, report__V_14_14);
                        }
#line 22192 "report.c"
                        report__succeeded = (report__V_20_20 == (MR_Integer) 0);
#line 518 "report.m"
                        report__succeeded = !(report__succeeded);
#line 518 "report.m"
                        if (report__succeeded)
#line 518 "report.m"
                          *report__HeadVar__1_1 = report__V_20_20;
#line 518 "report.m"
                        else
#line 518 "report.m"
                          {
#line 518 "report.m"
                            {
#line 518 "report.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[6], report__HeadVar__1_1, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_15_15)));
#line 518 "report.m"
                              return;
                            }
#line 518 "report.m"
                          }
#line 518 "report.m"
                      }
#line 518 "report.m"
                  }
#line 518 "report.m"
              }
#line 518 "report.m"
          }
#line 518 "report.m"
      }
#line 518 "report.m"
  }
#line 518 "report.m"
}

#line 518 "report.m"
MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0(
#line 518 "report.m"
  MR_Word report__HeadVar__1_1,
#line 518 "report.m"
  MR_Word report__HeadVar__2_2)
#line 518 "report.m"
{
#line 518 "report.m"
  {
#line 518 "report.m"
    MR_bool report__succeeded;
#line 518 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__1_1;
#line 518 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__2_2;

#line 518 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 518 "report.m"
    if (report__succeeded)
#line 518 "report.m"
      report__succeeded = MR_TRUE;
#line 518 "report.m"
    else
#line 518 "report.m"
      {
#line 518 "report.m"
        MR_Word report__TypeInfo_20_20;
#line 518 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "report.m"
        MR_Integer report__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 518 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 518 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 518 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 518 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 518 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 518 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 518 "report.m"
        MR_Integer report__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 518 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 518 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 518 "report.m"
        MR_Integer report__V_21_21;
#line 518 "report.m"
        MR_Integer report__V_22_22;
#line 518 "report.m"
        MR_Integer report__V_23_23;
#line 518 "report.m"
        MR_Integer report__V_24_24;

#line 22291 "report.c"
        report__succeeded = (report__V_5_5 == report__V_11_11);
#line 518 "report.m"
        if (report__succeeded)
#line 518 "report.m"
          {
#line 22297 "report.c"
            report__succeeded = (report__V_6_6 == report__V_12_12);
#line 518 "report.m"
            if (report__succeeded)
#line 518 "report.m"
              {
#line 22303 "report.c"
                report__V_21_21 = (MR_Integer) report__V_3_3;
#line 22305 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22307 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 518 "report.m"
                if (report__succeeded)
#line 518 "report.m"
                  {
#line 22313 "report.c"
                    report__V_23_23 = (MR_Integer) report__V_4_4;
#line 22315 "report.c"
                    report__V_24_24 = (MR_Integer) report__V_10_10;
#line 22317 "report.c"
                    report__succeeded = (report__V_23_23 == report__V_24_24);
#line 518 "report.m"
                    if (report__succeeded)
#line 518 "report.m"
                      {
#line 22323 "report.c"
                        {
#line 22325 "report.c"
                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_7_7, report__V_13_13);
                        }
#line 518 "report.m"
                        if (report__succeeded)
#line 518 "report.m"
                          {
#line 22332 "report.c"
                            report__TypeInfo_20_20 = (MR_Word) &report_scalar_common_1[6];
#line 22334 "report.c"
                            {
#line 22336 "report.c"
                              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_20_20, ((MR_Box) (report__V_8_8)), ((MR_Box) (report__V_14_14)));
                            }
#line 518 "report.m"
                          }
#line 518 "report.m"
                      }
#line 518 "report.m"
                  }
#line 518 "report.m"
              }
#line 518 "report.m"
          }
#line 518 "report.m"
      }
#line 518 "report.m"
    return report__succeeded;
#line 518 "report.m"
  }
#line 518 "report.m"
}

#line 410 "report.m"
void MR_CALL 
report____Compare____call_site_perf_0_0(
#line 410 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 410 "report.m"
  MR_Word report__HeadVar__2_2,
#line 410 "report.m"
  MR_Word report__HeadVar__3_3)
#line 410 "report.m"
{
#line 410 "report.m"
  {
#line 410 "report.m"
    MR_bool report__succeeded;
#line 410 "report.m"
    MR_Integer report__CastX_12 = (MR_Integer) report__HeadVar__2_2;
#line 410 "report.m"
    MR_Integer report__CastY_13 = (MR_Integer) report__HeadVar__3_3;

#line 410 "report.m"
    report__succeeded = (report__CastX_12 == report__CastY_13);
#line 410 "report.m"
    if (report__succeeded)
#line 22382 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 410 "report.m"
    else
#line 410 "report.m"
      {
#line 410 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 410 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 410 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 410 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 410 "report.m"
        MR_Word report__V_10_10;

#line 410 "report.m"
        {
#line 410 "report.m"
          mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[3], &report__V_10_10, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
        }
#line 22408 "report.c"
        report__succeeded = (report__V_10_10 == (MR_Integer) 0);
#line 410 "report.m"
        report__succeeded = !(report__succeeded);
#line 410 "report.m"
        if (report__succeeded)
#line 410 "report.m"
          *report__HeadVar__1_1 = report__V_10_10;
#line 410 "report.m"
        else
#line 410 "report.m"
          {
#line 410 "report.m"
            MR_Word report__V_11_11;

#line 410 "report.m"
            {
#line 410 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[1], &report__V_11_11, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
            }
#line 22428 "report.c"
            report__succeeded = (report__V_11_11 == (MR_Integer) 0);
#line 410 "report.m"
            report__succeeded = !(report__succeeded);
#line 410 "report.m"
            if (report__succeeded)
#line 410 "report.m"
              *report__HeadVar__1_1 = report__V_11_11;
#line 410 "report.m"
            else
#line 410 "report.m"
              {
#line 410 "report.m"
                {
#line 410 "report.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[5], report__HeadVar__1_1, ((MR_Box) (report__V_6_6)), ((MR_Box) (report__V_9_9)));
#line 410 "report.m"
                  return;
                }
#line 410 "report.m"
              }
#line 410 "report.m"
          }
#line 410 "report.m"
      }
#line 410 "report.m"
  }
#line 410 "report.m"
}

#line 410 "report.m"
MR_bool MR_CALL 
report____Unify____call_site_perf_0_0(
#line 410 "report.m"
  MR_Word report__HeadVar__1_1,
#line 410 "report.m"
  MR_Word report__HeadVar__2_2)
#line 410 "report.m"
{
#line 410 "report.m"
  {
#line 410 "report.m"
    MR_bool report__succeeded;
#line 410 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__1_1;
#line 410 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__2_2;

#line 410 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 410 "report.m"
    if (report__succeeded)
#line 410 "report.m"
      report__succeeded = MR_TRUE;
#line 410 "report.m"
    else
#line 410 "report.m"
      {
#line 410 "report.m"
        MR_Word report__TypeCtorInfo_12_12;
#line 410 "report.m"
        MR_Word report__TypeInfo_13_13;
#line 410 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 410 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));

#line 22503 "report.c"
        {
#line 22505 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_1[3], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_6_6)));
        }
#line 410 "report.m"
        if (report__succeeded)
#line 410 "report.m"
          {
#line 22512 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22514 "report.c"
            {
#line 22516 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 410 "report.m"
            if (report__succeeded)
#line 410 "report.m"
              {
#line 22523 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[5];
#line 22525 "report.c"
                {
#line 22527 "report.c"
                  return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_13_13, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_8_8)));
                }
#line 410 "report.m"
              }
#line 410 "report.m"
          }
#line 410 "report.m"
      }
#line 410 "report.m"
    return report__succeeded;
#line 410 "report.m"
  }
#line 410 "report.m"
}

#line 543 "report.m"
void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0(
#line 543 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 543 "report.m"
  MR_Word report__HeadVar__2_2,
#line 543 "report.m"
  MR_Word report__HeadVar__3_3)
#line 543 "report.m"
{
#line 543 "report.m"
  {
#line 543 "report.m"
    MR_bool report__succeeded;
#line 543 "report.m"
    MR_Integer report__CastX_9 = (MR_Integer) report__HeadVar__2_2;
#line 543 "report.m"
    MR_Integer report__CastY_10 = (MR_Integer) report__HeadVar__3_3;

#line 543 "report.m"
    report__succeeded = (report__CastX_9 == report__CastY_10);
#line 543 "report.m"
    if (report__succeeded)
#line 22567 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 543 "report.m"
    else
#line 543 "report.m"
      {
#line 543 "report.m"
        MR_Float report__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 543 "report.m"
        MR_Float report__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 543 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 543 "report.m"
        MR_Word report__V_8_8;

#line 543 "report.m"
        {
#line 543 "report.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&report__V_8_8, report__V_4_4, report__V_6_6);
        }
#line 22589 "report.c"
        report__succeeded = (report__V_8_8 == (MR_Integer) 0);
#line 543 "report.m"
        report__succeeded = !(report__succeeded);
#line 543 "report.m"
        if (report__succeeded)
#line 543 "report.m"
          *report__HeadVar__1_1 = report__V_8_8;
#line 543 "report.m"
        else
#line 543 "report.m"
          {
#line 543 "report.m"
            {
#line 543 "report.m"
              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[2], report__HeadVar__1_1, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_7_7)));
#line 543 "report.m"
              return;
            }
#line 543 "report.m"
          }
#line 543 "report.m"
      }
#line 543 "report.m"
  }
#line 543 "report.m"
}

#line 543 "report.m"
MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0(
#line 543 "report.m"
  MR_Word report__HeadVar__1_1,
#line 543 "report.m"
  MR_Word report__HeadVar__2_2)
#line 543 "report.m"
{
#line 543 "report.m"
  {
#line 543 "report.m"
    MR_bool report__succeeded;
#line 543 "report.m"
    MR_Integer report__CastX_7 = (MR_Integer) report__HeadVar__1_1;
#line 543 "report.m"
    MR_Integer report__CastY_8 = (MR_Integer) report__HeadVar__2_2;

#line 543 "report.m"
    report__succeeded = (report__CastX_7 == report__CastY_8);
#line 543 "report.m"
    if (report__succeeded)
#line 543 "report.m"
      report__succeeded = MR_TRUE;
#line 543 "report.m"
    else
#line 543 "report.m"
      {
#line 543 "report.m"
        MR_Word report__TypeInfo_9_9;
#line 543 "report.m"
        MR_Float report__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 543 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "report.m"
        MR_Float report__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 543 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));

#line 22656 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 543 "report.m"
        if (report__succeeded)
#line 543 "report.m"
          {
#line 22662 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[2];
#line 22664 "report.c"
            {
#line 22666 "report.c"
              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_9_9, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_6_6)));
            }
#line 543 "report.m"
          }
#line 543 "report.m"
      }
#line 543 "report.m"
    return report__succeeded;
#line 543 "report.m"
  }
#line 543 "report.m"
}

#line 528 "report.m"
void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0(
#line 528 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 528 "report.m"
  MR_Word report__HeadVar__2_2,
#line 528 "report.m"
  MR_Word report__HeadVar__3_3)
#line 528 "report.m"
{
#line 528 "report.m"
  {
#line 528 "report.m"
    MR_bool report__succeeded;
#line 528 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__2_2;
#line 528 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__3_3;

#line 528 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 528 "report.m"
    if (report__succeeded)
#line 22704 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 528 "report.m"
    else
#line 528 "report.m"
      {
#line 528 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 528 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 528 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 528 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 528 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 528 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 528 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 528 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 528 "report.m"
        MR_Word report__V_12_12;
#line 528 "report.m"
        MR_Integer report__V_21_21 = (MR_Integer) report__V_4_4;
#line 528 "report.m"
        MR_Integer report__V_22_22 = (MR_Integer) report__V_8_8;

#line 528 "report.m"
        {
#line 528 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_12_12, report__V_21_21, report__V_22_22);
        }
#line 22738 "report.c"
        report__succeeded = (report__V_12_12 == (MR_Integer) 0);
#line 528 "report.m"
        report__succeeded = !(report__succeeded);
#line 528 "report.m"
        if (report__succeeded)
#line 528 "report.m"
          *report__HeadVar__1_1 = report__V_12_12;
#line 528 "report.m"
        else
#line 528 "report.m"
          {
#line 528 "report.m"
            MR_Word report__V_13_13;
#line 528 "report.m"
            MR_Integer report__V_23_23 = (MR_Integer) report__V_5_5;
#line 528 "report.m"
            MR_Integer report__V_24_24 = (MR_Integer) report__V_9_9;

#line 528 "report.m"
            {
#line 528 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_13_13, report__V_23_23, report__V_24_24);
            }
#line 22762 "report.c"
            report__succeeded = (report__V_13_13 == (MR_Integer) 0);
#line 528 "report.m"
            report__succeeded = !(report__succeeded);
#line 528 "report.m"
            if (report__succeeded)
#line 528 "report.m"
              *report__HeadVar__1_1 = report__V_13_13;
#line 528 "report.m"
            else
#line 528 "report.m"
              {
#line 528 "report.m"
                MR_Word report__V_14_14;
#line 528 "report.m"
                MR_Integer report__V_25_25 = (MR_Integer) report__V_6_6;
#line 528 "report.m"
                MR_Integer report__V_26_26 = (MR_Integer) report__V_10_10;

#line 528 "report.m"
                {
#line 528 "report.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_14_14, report__V_25_25, report__V_26_26);
                }
#line 22786 "report.c"
                report__succeeded = (report__V_14_14 == (MR_Integer) 0);
#line 528 "report.m"
                report__succeeded = !(report__succeeded);
#line 528 "report.m"
                if (report__succeeded)
#line 528 "report.m"
                  *report__HeadVar__1_1 = report__V_14_14;
#line 528 "report.m"
                else
#line 528 "report.m"
                  {
#line 528 "report.m"
                    {
#line 528 "report.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[1], report__HeadVar__1_1, ((MR_Box) (report__V_7_7)), ((MR_Box) (report__V_11_11)));
#line 528 "report.m"
                      return;
                    }
#line 528 "report.m"
                  }
#line 528 "report.m"
              }
#line 528 "report.m"
          }
#line 528 "report.m"
      }
#line 528 "report.m"
  }
#line 528 "report.m"
}

#line 528 "report.m"
MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0(
#line 528 "report.m"
  MR_Word report__HeadVar__1_1,
#line 528 "report.m"
  MR_Word report__HeadVar__2_2)
#line 528 "report.m"
{
#line 528 "report.m"
  {
#line 528 "report.m"
    MR_bool report__succeeded;
#line 528 "report.m"
    MR_Integer report__CastX_11 = (MR_Integer) report__HeadVar__1_1;
#line 528 "report.m"
    MR_Integer report__CastY_12 = (MR_Integer) report__HeadVar__2_2;

#line 528 "report.m"
    report__succeeded = (report__CastX_11 == report__CastY_12);
#line 528 "report.m"
    if (report__succeeded)
#line 528 "report.m"
      report__succeeded = MR_TRUE;
#line 528 "report.m"
    else
#line 528 "report.m"
      {
#line 528 "report.m"
        MR_Word report__TypeCtorInfo_16_16;
#line 528 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 528 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 528 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 528 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 528 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 528 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 528 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 528 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 528 "report.m"
        MR_Integer report__V_17_17 = (MR_Integer) report__V_3_3;
#line 528 "report.m"
        MR_Integer report__V_18_18 = (MR_Integer) report__V_7_7;
#line 528 "report.m"
        MR_Integer report__V_19_19;
#line 528 "report.m"
        MR_Integer report__V_20_20;
#line 528 "report.m"
        MR_Integer report__V_21_21;
#line 528 "report.m"
        MR_Integer report__V_22_22;

#line 22877 "report.c"
        report__succeeded = (report__V_17_17 == report__V_18_18);
#line 528 "report.m"
        if (report__succeeded)
#line 528 "report.m"
          {
#line 22883 "report.c"
            report__V_19_19 = (MR_Integer) report__V_4_4;
#line 22885 "report.c"
            report__V_20_20 = (MR_Integer) report__V_8_8;
#line 22887 "report.c"
            report__succeeded = (report__V_19_19 == report__V_20_20);
#line 528 "report.m"
            if (report__succeeded)
#line 528 "report.m"
              {
#line 22893 "report.c"
                report__V_21_21 = (MR_Integer) report__V_5_5;
#line 22895 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22897 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 528 "report.m"
                if (report__succeeded)
#line 528 "report.m"
                  {
#line 22903 "report.c"
                    report__TypeCtorInfo_16_16 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22905 "report.c"
                    {
#line 22907 "report.c"
                      return report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_16_16, report__V_6_6, report__V_10_10);
                    }
#line 528 "report.m"
                  }
#line 528 "report.m"
              }
#line 528 "report.m"
          }
#line 528 "report.m"
      }
#line 528 "report.m"
    return report__succeeded;
#line 528 "report.m"
  }
#line 528 "report.m"
}

#line 663 "report.m"
void MR_CALL 
report____Compare____call_site_desc_0_0(
#line 663 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 663 "report.m"
  MR_Word report__HeadVar__2_2,
#line 663 "report.m"
  MR_Word report__HeadVar__3_3)
#line 663 "report.m"
{
#line 663 "report.m"
  {
#line 663 "report.m"
    MR_bool report__succeeded;
#line 663 "report.m"
    MR_Integer report__CastX_33 = (MR_Integer) report__HeadVar__2_2;
#line 663 "report.m"
    MR_Integer report__CastY_34 = (MR_Integer) report__HeadVar__3_3;

#line 663 "report.m"
    report__succeeded = (report__CastX_33 == report__CastY_34);
#line 663 "report.m"
    if (report__succeeded)
#line 22949 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 663 "report.m"
    else
#line 663 "report.m"
      {
#line 663 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 663 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "report.m"
        MR_String report__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 663 "report.m"
        MR_Integer report__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 663 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 663 "report.m"
        MR_String report__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 663 "report.m"
        MR_String report__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 663 "report.m"
        MR_Integer report__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 663 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 663 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));
#line 663 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 663 "report.m"
        MR_Word report__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 663 "report.m"
        MR_String report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 663 "report.m"
        MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 663 "report.m"
        MR_String report__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 4)));
#line 663 "report.m"
        MR_String report__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 5)));
#line 663 "report.m"
        MR_String report__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 6)));
#line 663 "report.m"
        MR_Integer report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 7)));
#line 663 "report.m"
        MR_Word report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 8)));
#line 663 "report.m"
        MR_Word report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 9)));
#line 663 "report.m"
        MR_Word report__V_24_24;
#line 663 "report.m"
        MR_Integer report__V_45_45 = (MR_Integer) report__V_4_4;
#line 663 "report.m"
        MR_Integer report__V_46_46 = (MR_Integer) report__V_14_14;

#line 663 "report.m"
        {
#line 663 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_24_24, report__V_45_45, report__V_46_46);
        }
#line 23007 "report.c"
        report__succeeded = (report__V_24_24 == (MR_Integer) 0);
#line 663 "report.m"
        report__succeeded = !(report__succeeded);
#line 663 "report.m"
        if (report__succeeded)
#line 663 "report.m"
          *report__HeadVar__1_1 = report__V_24_24;
#line 663 "report.m"
        else
#line 663 "report.m"
          {
#line 663 "report.m"
            MR_Word report__V_25_25;
#line 663 "report.m"
            MR_Integer report__V_47_47 = (MR_Integer) report__V_5_5;
#line 663 "report.m"
            MR_Integer report__V_48_48 = (MR_Integer) report__V_15_15;

#line 663 "report.m"
            {
#line 663 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_25_25, report__V_47_47, report__V_48_48);
            }
#line 23031 "report.c"
            report__succeeded = (report__V_25_25 == (MR_Integer) 0);
#line 663 "report.m"
            report__succeeded = !(report__succeeded);
#line 663 "report.m"
            if (report__succeeded)
#line 663 "report.m"
              *report__HeadVar__1_1 = report__V_25_25;
#line 663 "report.m"
            else
#line 663 "report.m"
              {
#line 663 "report.m"
                MR_Word report__V_26_26;

#line 663 "report.m"
                {
#line 663 "report.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_26_26, report__V_6_6, report__V_16_16);
                }
#line 23051 "report.c"
                report__succeeded = (report__V_26_26 == (MR_Integer) 0);
#line 663 "report.m"
                report__succeeded = !(report__succeeded);
#line 663 "report.m"
                if (report__succeeded)
#line 663 "report.m"
                  *report__HeadVar__1_1 = report__V_26_26;
#line 663 "report.m"
                else
#line 663 "report.m"
                  {
#line 663 "report.m"
                    MR_Word report__V_27_27;

#line 663 "report.m"
                    {
#line 663 "report.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_27_27, report__V_7_7, report__V_17_17);
                    }
#line 23071 "report.c"
                    report__succeeded = (report__V_27_27 == (MR_Integer) 0);
#line 663 "report.m"
                    report__succeeded = !(report__succeeded);
#line 663 "report.m"
                    if (report__succeeded)
#line 663 "report.m"
                      *report__HeadVar__1_1 = report__V_27_27;
#line 663 "report.m"
                    else
#line 663 "report.m"
                      {
#line 663 "report.m"
                        MR_Word report__V_28_28;

#line 663 "report.m"
                        {
#line 663 "report.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_28_28, report__V_8_8, report__V_18_18);
                        }
#line 23091 "report.c"
                        report__succeeded = (report__V_28_28 == (MR_Integer) 0);
#line 663 "report.m"
                        report__succeeded = !(report__succeeded);
#line 663 "report.m"
                        if (report__succeeded)
#line 663 "report.m"
                          *report__HeadVar__1_1 = report__V_28_28;
#line 663 "report.m"
                        else
#line 663 "report.m"
                          {
#line 663 "report.m"
                            MR_Word report__V_29_29;

#line 663 "report.m"
                            {
#line 663 "report.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_29_29, report__V_9_9, report__V_19_19);
                            }
#line 23111 "report.c"
                            report__succeeded = (report__V_29_29 == (MR_Integer) 0);
#line 663 "report.m"
                            report__succeeded = !(report__succeeded);
#line 663 "report.m"
                            if (report__succeeded)
#line 663 "report.m"
                              *report__HeadVar__1_1 = report__V_29_29;
#line 663 "report.m"
                            else
#line 663 "report.m"
                              {
#line 663 "report.m"
                                MR_Word report__V_30_30;

#line 663 "report.m"
                                {
#line 663 "report.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(&report__V_30_30, report__V_10_10, report__V_20_20);
                                }
#line 23131 "report.c"
                                report__succeeded = (report__V_30_30 == (MR_Integer) 0);
#line 663 "report.m"
                                report__succeeded = !(report__succeeded);
#line 663 "report.m"
                                if (report__succeeded)
#line 663 "report.m"
                                  *report__HeadVar__1_1 = report__V_30_30;
#line 663 "report.m"
                                else
#line 663 "report.m"
                                  {
#line 663 "report.m"
                                    MR_Word report__V_31_31;

#line 663 "report.m"
                                    {
#line 663 "report.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_31_31, report__V_11_11, report__V_21_21);
                                    }
#line 23151 "report.c"
                                    report__succeeded = (report__V_31_31 == (MR_Integer) 0);
#line 663 "report.m"
                                    report__succeeded = !(report__succeeded);
#line 663 "report.m"
                                    if (report__succeeded)
#line 663 "report.m"
                                      *report__HeadVar__1_1 = report__V_31_31;
#line 663 "report.m"
                                    else
#line 663 "report.m"
                                      {
#line 663 "report.m"
                                        MR_Word report__V_32_32;

#line 663 "report.m"
                                        {
#line 663 "report.m"
                                          mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&report__V_32_32, report__V_12_12, report__V_22_22);
                                        }
#line 23171 "report.c"
                                        report__succeeded = (report__V_32_32 == (MR_Integer) 0);
#line 663 "report.m"
                                        report__succeeded = !(report__succeeded);
#line 663 "report.m"
                                        if (report__succeeded)
#line 663 "report.m"
                                          *report__HeadVar__1_1 = report__V_32_32;
#line 663 "report.m"
                                        else
#line 663 "report.m"
                                          {
#line 663 "report.m"
                                            {
#line 663 "report.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &report_scalar_common_1[0], report__HeadVar__1_1, ((MR_Box) (report__V_13_13)), ((MR_Box) (report__V_23_23)));
#line 663 "report.m"
                                              return;
                                            }
#line 663 "report.m"
                                          }
#line 663 "report.m"
                                      }
#line 663 "report.m"
                                  }
#line 663 "report.m"
                              }
#line 663 "report.m"
                          }
#line 663 "report.m"
                      }
#line 663 "report.m"
                  }
#line 663 "report.m"
              }
#line 663 "report.m"
          }
#line 663 "report.m"
      }
#line 663 "report.m"
  }
#line 663 "report.m"
}

#line 663 "report.m"
MR_bool MR_CALL 
report____Unify____call_site_desc_0_0(
#line 663 "report.m"
  MR_Word report__HeadVar__1_1,
#line 663 "report.m"
  MR_Word report__HeadVar__2_2)
#line 663 "report.m"
{
#line 663 "report.m"
  {
#line 663 "report.m"
    MR_bool report__succeeded;
#line 663 "report.m"
    MR_Integer report__CastX_23 = (MR_Integer) report__HeadVar__1_1;
#line 663 "report.m"
    MR_Integer report__CastY_24 = (MR_Integer) report__HeadVar__2_2;

#line 663 "report.m"
    report__succeeded = (report__CastX_23 == report__CastY_24);
#line 663 "report.m"
    if (report__succeeded)
#line 663 "report.m"
      report__succeeded = MR_TRUE;
#line 663 "report.m"
    else
#line 663 "report.m"
      {
#line 663 "report.m"
        MR_Word report__TypeInfo_28_28;
#line 663 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 663 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "report.m"
        MR_String report__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 663 "report.m"
        MR_Integer report__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 663 "report.m"
        MR_String report__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 4)));
#line 663 "report.m"
        MR_String report__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 5)));
#line 663 "report.m"
        MR_String report__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 6)));
#line 663 "report.m"
        MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 7)));
#line 663 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 8)));
#line 663 "report.m"
        MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 9)));
#line 663 "report.m"
        MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 663 "report.m"
        MR_Word report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 663 "report.m"
        MR_String report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 663 "report.m"
        MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 663 "report.m"
        MR_String report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 4)));
#line 663 "report.m"
        MR_String report__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 5)));
#line 663 "report.m"
        MR_String report__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 6)));
#line 663 "report.m"
        MR_Integer report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 7)));
#line 663 "report.m"
        MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 8)));
#line 663 "report.m"
        MR_Word report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 9)));
#line 663 "report.m"
        MR_Integer report__V_29_29;
#line 663 "report.m"
        MR_Integer report__V_30_30;
#line 663 "report.m"
        MR_Integer report__V_31_31;
#line 663 "report.m"
        MR_Integer report__V_32_32;

#line 23294 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_15_15) == 0);
#line 663 "report.m"
        if (report__succeeded)
#line 663 "report.m"
          {
#line 23300 "report.c"
            report__succeeded = (report__V_6_6 == report__V_16_16);
#line 663 "report.m"
            if (report__succeeded)
#line 663 "report.m"
              {
#line 23306 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_17_17) == 0);
#line 663 "report.m"
                if (report__succeeded)
#line 663 "report.m"
                  {
#line 23312 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_18_18) == 0);
#line 663 "report.m"
                    if (report__succeeded)
#line 663 "report.m"
                      {
#line 23318 "report.c"
                        report__succeeded = (strcmp(report__V_9_9, report__V_19_19) == 0);
#line 663 "report.m"
                        if (report__succeeded)
#line 663 "report.m"
                          {
#line 23324 "report.c"
                            report__succeeded = (report__V_10_10 == report__V_20_20);
#line 663 "report.m"
                            if (report__succeeded)
#line 663 "report.m"
                              {
#line 23330 "report.c"
                                report__V_29_29 = (MR_Integer) report__V_3_3;
#line 23332 "report.c"
                                report__V_30_30 = (MR_Integer) report__V_13_13;
#line 23334 "report.c"
                                report__succeeded = (report__V_29_29 == report__V_30_30);
#line 663 "report.m"
                                if (report__succeeded)
#line 663 "report.m"
                                  {
#line 23340 "report.c"
                                    report__V_31_31 = (MR_Integer) report__V_4_4;
#line 23342 "report.c"
                                    report__V_32_32 = (MR_Integer) report__V_14_14;
#line 23344 "report.c"
                                    report__succeeded = (report__V_31_31 == report__V_32_32);
#line 663 "report.m"
                                    if (report__succeeded)
#line 663 "report.m"
                                      {
#line 23350 "report.c"
                                        {
#line 23352 "report.c"
                                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_11_11, report__V_21_21);
                                        }
#line 663 "report.m"
                                        if (report__succeeded)
#line 663 "report.m"
                                          {
#line 23359 "report.c"
                                            report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[0];
#line 23361 "report.c"
                                            {
#line 23363 "report.c"
                                              return report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_28_28, ((MR_Box) (report__V_12_12)), ((MR_Box) (report__V_22_22)));
                                            }
#line 663 "report.m"
                                          }
#line 663 "report.m"
                                      }
#line 663 "report.m"
                                  }
#line 663 "report.m"
                              }
#line 663 "report.m"
                          }
#line 663 "report.m"
                      }
#line 663 "report.m"
                  }
#line 663 "report.m"
              }
#line 663 "report.m"
          }
#line 663 "report.m"
      }
#line 663 "report.m"
    return report__succeeded;
#line 663 "report.m"
  }
#line 663 "report.m"
}

#line 677 "report.m"
void MR_CALL 
report____Compare____ancestor_desc_0_0(
#line 677 "report.m"
  MR_Word * report__HeadVar__1_1,
#line 677 "report.m"
  MR_Word report__HeadVar__2_2,
#line 677 "report.m"
  MR_Word report__HeadVar__3_3)
#line 677 "report.m"
{
#line 677 "report.m"
  {
#line 677 "report.m"
    MR_bool report__succeeded;
#line 677 "report.m"
    MR_Integer report__CastX_15 = (MR_Integer) report__HeadVar__2_2;
#line 677 "report.m"
    MR_Integer report__CastY_16 = (MR_Integer) report__HeadVar__3_3;

#line 677 "report.m"
    report__succeeded = (report__CastX_15 == report__CastY_16);
#line 677 "report.m"
    if (report__succeeded)
#line 23417 "report.c"
      *report__HeadVar__1_1 = (MR_Integer) 0;
#line 677 "report.m"
    else
#line 677 "report.m"
      {
#line 677 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 677 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 677 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 677 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 0)));
#line 677 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 1)));
#line 677 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 2)));
#line 677 "report.m"
        MR_Word report__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__3_3, (MR_Integer) 3)));
#line 677 "report.m"
        MR_Word report__V_12_12;
#line 677 "report.m"
        MR_Integer report__V_21_21 = (MR_Integer) report__V_4_4;
#line 677 "report.m"
        MR_Integer report__V_22_22 = (MR_Integer) report__V_8_8;

#line 677 "report.m"
        {
#line 677 "report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_12_12, report__V_21_21, report__V_22_22);
        }
#line 23451 "report.c"
        report__succeeded = (report__V_12_12 == (MR_Integer) 0);
#line 677 "report.m"
        report__succeeded = !(report__succeeded);
#line 677 "report.m"
        if (report__succeeded)
#line 677 "report.m"
          *report__HeadVar__1_1 = report__V_12_12;
#line 677 "report.m"
        else
#line 677 "report.m"
          {
#line 677 "report.m"
            MR_Word report__V_13_13;
#line 677 "report.m"
            MR_Integer report__V_23_23 = (MR_Integer) report__V_5_5;
#line 677 "report.m"
            MR_Integer report__V_24_24 = (MR_Integer) report__V_9_9;

#line 677 "report.m"
            {
#line 677 "report.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&report__V_13_13, report__V_23_23, report__V_24_24);
            }
#line 23475 "report.c"
            report__succeeded = (report__V_13_13 == (MR_Integer) 0);
#line 677 "report.m"
            report__succeeded = !(report__succeeded);
#line 677 "report.m"
            if (report__succeeded)
#line 677 "report.m"
              *report__HeadVar__1_1 = report__V_13_13;
#line 677 "report.m"
            else
#line 677 "report.m"
              {
#line 677 "report.m"
                MR_Word report__V_14_14;

#line 677 "report.m"
                {
#line 677 "report.m"
                  report____Compare____proc_desc_0_0(&report__V_14_14, report__V_6_6, report__V_10_10);
                }
#line 23495 "report.c"
                report__succeeded = (report__V_14_14 == (MR_Integer) 0);
#line 677 "report.m"
                report__succeeded = !(report__succeeded);
#line 677 "report.m"
                if (report__succeeded)
#line 677 "report.m"
                  *report__HeadVar__1_1 = report__V_14_14;
#line 677 "report.m"
                else
#line 677 "report.m"
                  {
#line 677 "report.m"
                    report____Compare____call_site_desc_0_0(report__HeadVar__1_1, report__V_7_7, report__V_11_11);
#line 677 "report.m"
                    return;
                  }
#line 677 "report.m"
              }
#line 677 "report.m"
          }
#line 677 "report.m"
      }
#line 677 "report.m"
  }
#line 677 "report.m"
}

#line 677 "report.m"
MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0(
#line 677 "report.m"
  MR_Word report__HeadVar__1_1,
#line 677 "report.m"
  MR_Word report__HeadVar__2_2)
#line 677 "report.m"
{
#line 677 "report.m"
  {
#line 677 "report.m"
    MR_bool report__succeeded;
#line 677 "report.m"
    MR_Integer report__CastX_11 = (MR_Integer) report__HeadVar__1_1;
#line 677 "report.m"
    MR_Integer report__CastY_12 = (MR_Integer) report__HeadVar__2_2;

#line 677 "report.m"
    report__succeeded = (report__CastX_11 == report__CastY_12);
#line 677 "report.m"
    if (report__succeeded)
#line 677 "report.m"
      report__succeeded = MR_TRUE;
#line 677 "report.m"
    else
#line 677 "report.m"
      {
#line 677 "report.m"
        MR_Word report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 0)));
#line 677 "report.m"
        MR_Word report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 1)));
#line 677 "report.m"
        MR_Word report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 2)));
#line 677 "report.m"
        MR_Word report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__1_1, (MR_Integer) 3)));
#line 677 "report.m"
        MR_Word report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 0)));
#line 677 "report.m"
        MR_Word report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 1)));
#line 677 "report.m"
        MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 2)));
#line 677 "report.m"
        MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__HeadVar__2_2, (MR_Integer) 3)));
#line 677 "report.m"
        MR_Integer report__V_15_15 = (MR_Integer) report__V_3_3;
#line 677 "report.m"
        MR_Integer report__V_16_16 = (MR_Integer) report__V_7_7;
#line 677 "report.m"
        MR_Integer report__V_17_17;
#line 677 "report.m"
        MR_Integer report__V_18_18;

#line 23576 "report.c"
        report__succeeded = (report__V_15_15 == report__V_16_16);
#line 677 "report.m"
        if (report__succeeded)
#line 677 "report.m"
          {
#line 23582 "report.c"
            report__V_17_17 = (MR_Integer) report__V_4_4;
#line 23584 "report.c"
            report__V_18_18 = (MR_Integer) report__V_8_8;
#line 23586 "report.c"
            report__succeeded = (report__V_17_17 == report__V_18_18);
#line 677 "report.m"
            if (report__succeeded)
#line 677 "report.m"
              {
#line 23592 "report.c"
                {
#line 23594 "report.c"
                  report__succeeded = report____Unify____proc_desc_0_0(report__V_5_5, report__V_9_9);
                }
#line 677 "report.m"
                if (report__succeeded)
#line 23599 "report.c"
                  {
#line 23601 "report.c"
                    return report__succeeded = report____Unify____call_site_desc_0_0(report__V_6_6, report__V_10_10);
                  }
#line 677 "report.m"
              }
#line 677 "report.m"
          }
#line 677 "report.m"
      }
#line 677 "report.m"
    return report__succeeded;
#line 677 "report.m"
  }
#line 677 "report.m"
}

#line 713 "report.m"
void MR_CALL 
report__add_call_site_report_to_map_3_p_0(
#line 713 "report.m"
  MR_Word report__CallSite_4,
#line 713 "report.m"
  MR_Word report__STATE_VARIABLE_Map_0_7,
#line 713 "report.m"
  MR_Word * report__STATE_VARIABLE_Map_8)
#line 713 "report.m"
{
#line 729 "report.m"
  {
#line 729 "report.m"
    MR_bool report__succeeded;
#line 729 "report.m"
    MR_Word report__GoalPath_6;
#line 729 "report.m"
    MR_Word report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__CallSite_4, (MR_Integer) 0)));
#line 729 "report.m"
    MR_Word report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 0)));
#line 730 "report.m"
    MR_Word report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__CallSite_4, (MR_Integer) 1)));
#line 730 "report.m"
    MR_Word report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__CallSite_4, (MR_Integer) 2)));
#line 730 "report.m"
    MR_Integer report__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 1)));
#line 730 "report.m"
    MR_Integer report__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 2)));
#line 730 "report.m"
    MR_Integer report__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 3)));
#line 730 "report.m"
    MR_Integer report__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 4)));
#line 730 "report.m"
    MR_Integer report__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 5)));
#line 730 "report.m"
    MR_Integer report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 6)));
#line 730 "report.m"
    MR_Word report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 7)));
#line 730 "report.m"
    MR_Word report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_9_9, (MR_Integer) 8)));
#line 730 "report.m"
    MR_Word report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 0)));
#line 730 "report.m"
    MR_Word report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 1)));
#line 730 "report.m"
    MR_String report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 2)));
#line 730 "report.m"
    MR_Integer report__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 3)));
#line 730 "report.m"
    MR_String report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 4)));
#line 730 "report.m"
    MR_String report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 5)));
#line 730 "report.m"
    MR_String report__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 6)));
#line 730 "report.m"
    MR_Integer report__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 7)));
#line 730 "report.m"
    MR_Word report__V_30_30;

#line 730 "report.m"
    report__GoalPath_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 8)));
#line 730 "report.m"
    report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__V_10_10, (MR_Integer) 9)));
#line 732 "report.m"
    {
#line 732 "report.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, ((MR_Box) (report__GoalPath_6)), ((MR_Box) (report__CallSite_4)), report__STATE_VARIABLE_Map_0_7, report__STATE_VARIABLE_Map_8);
#line 732 "report.m"
      return;
    }
#line 729 "report.m"
  }
#line 713 "report.m"
}

#line 705 "report.m"
void MR_CALL 
report__proc_label_from_proc_desc_3_p_0(
#line 705 "report.m"
  MR_Word report__Deep_4,
#line 705 "report.m"
  MR_Word report__ProcDesc_5,
#line 705 "report.m"
  MR_Word * report__ProcLabel_6)
#line 705 "report.m"
{
#line 724 "report.m"
  {
#line 724 "report.m"
    MR_bool report__succeeded;
#line 724 "report.m"
    MR_Word report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 0)));
#line 724 "report.m"
    MR_Word report__ProcStatic_8;
#line 725 "report.m"
    MR_String report__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 1)));
#line 725 "report.m"
    MR_Integer report__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 2)));
#line 725 "report.m"
    MR_String report__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 3)));
#line 725 "report.m"
    MR_String report__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 4)));
#line 725 "report.m"
    MR_String report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcDesc_5, (MR_Integer) 5)));
#line 727 "report.m"
    MR_String report__V_14_14;
#line 727 "report.m"
    MR_String report__V_15_15;
#line 727 "report.m"
    MR_String report__V_16_16;
#line 727 "report.m"
    MR_String report__V_17_17;
#line 727 "report.m"
    MR_String report__V_18_18;
#line 727 "report.m"
    MR_Integer report__V_19_19;
#line 727 "report.m"
    MR_Word report__V_20_20;
#line 727 "report.m"
    MR_ArrayPtr report__V_21_21;
#line 727 "report.m"
    MR_ArrayPtr report__V_22_22;
#line 727 "report.m"
    MR_Word report__V_23_23;
#line 727 "report.m"
    MR_Word report__V_24_24;

#line 726 "report.m"
    {
#line 726 "report.m"
      profile__deep_lookup_proc_statics_3_p_0(report__Deep_4, report__PSPtr_7, &report__ProcStatic_8);
    }
#line 727 "report.m"
    *report__ProcLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 0)));
#line 727 "report.m"
    report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 1)));
#line 727 "report.m"
    report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 2)));
#line 727 "report.m"
    report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 3)));
#line 727 "report.m"
    report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 4)));
#line 727 "report.m"
    report__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 5)));
#line 727 "report.m"
    report__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 6)));
#line 727 "report.m"
    report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 7)));
#line 727 "report.m"
    report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 8)));
#line 727 "report.m"
    report__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 9)));
#line 727 "report.m"
    report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 10)));
#line 727 "report.m"
    report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), report__ProcStatic_8, (MR_Integer) 11)));
#line 724 "report.m"
  }
#line 705 "report.m"
}

void mercury__report__init(void)
{
}

void mercury__report__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&report__report__type_ctor_info_ancestor_desc_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_call_site_desc_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_call_site_dynamic_dump_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_call_site_dynamic_var_use_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_call_site_perf_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_call_site_static_dump_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_callers_counts_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_call_site_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_desc_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_dump_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_proc_dynamic_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_proc_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_recursion_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_clique_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_data_struct_name_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_deep_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_field_name_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_getter_or_setter_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_ds_map_1);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_ds_map_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_field_info_2);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_field_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_field_map_1);
	MR_register_type_ctor_info(&report__report__type_ctor_info_gs_field_map_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_inheritable_perf_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_maybe_have_module_rep_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_menu_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_message_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_module_active_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_module_getter_setters_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_module_is_active_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_module_rep_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_module_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_normal_callee_id_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_perf_row_data_1);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_active_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_callers_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_callers_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_desc_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_dynamic_dump_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_is_active_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_proc_static_dump_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_procrep_coverage_info_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_program_modules_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_level_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_freq_data_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_histogram_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_proc_freq_data_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_proc_map_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_type_simple_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_recursion_types_frequency_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_report_ordering_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_top_procs_report_0);
	MR_register_type_ctor_info(&report__report__type_ctor_info_var_use_and_name_0);
}

void mercury__report__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module report. */
