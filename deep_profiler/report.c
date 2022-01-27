/*
** Automatically generated from `report.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 84 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4];

#line 87 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4];

#line 90 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_ancestor_desc_0_0;

#line 93 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1];

#line 96 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1];

#line 99 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1];

#line 102 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1];

#line 105 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0;

#line 108 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_desc_0_0[10];

#line 111 "report.c"
static const MR_ConstString report__report__field_names_call_site_desc_0_0[10];

#line 114 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_desc_0_0;

#line 117 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1];

#line 120 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1];

#line 123 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1];

#line 126 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1];

#line 129 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 132 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4];

#line 135 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4];

#line 138 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_dump_info_0_0;

#line 141 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1];

#line 144 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1];

#line 147 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1];

#line 150 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1];

#line 153 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0;

#line 156 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2];

#line 159 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2];

#line 162 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0;

#line 165 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1];

#line 168 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1];

#line 171 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1];

#line 174 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1];

#line 177 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0;

#line 180 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 183 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 186 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3];

#line 189 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3];

#line 192 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_perf_0_0;

#line 195 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1];

#line 198 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1];

#line 201 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1];

#line 204 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1];

#line 207 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 210 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6];

#line 213 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6];

#line 216 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_static_dump_info_0_0;

#line 219 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1];

#line 222 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1];

#line 225 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1];

#line 228 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1];

#line 231 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2];

#line 234 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2];

#line 237 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_callers_counts_0_0;

#line 240 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1];

#line 243 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1];

#line 246 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1];

#line 249 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1];

#line 252 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0;

#line 255 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 258 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 261 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3];

#line 264 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3];

#line 267 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_call_site_report_0_0;

#line 270 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1];

#line 273 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1];

#line 276 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1];

#line 279 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1];

#line 282 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0;

#line 285 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3];

#line 288 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3];

#line 291 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_desc_0_0;

#line 294 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1];

#line 297 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1];

#line 300 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1];

#line 303 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1];

#line 306 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 309 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3];

#line 312 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3];

#line 315 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_dump_info_0_0;

#line 318 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1];

#line 321 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1];

#line 324 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1];

#line 327 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1];

#line 330 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0;

#line 333 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2];

#line 336 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2];

#line 339 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_dynamic_report_0_0;

#line 342 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1];

#line 345 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1];

#line 348 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1];

#line 351 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1];

#line 354 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0;

#line 357 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3];

#line 360 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3];

#line 363 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_report_0_0;

#line 366 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1];

#line 369 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1];

#line 372 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1];

#line 375 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1];

#line 378 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3];

#line 381 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3];

#line 384 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_recursion_report_0_0;

#line 387 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1];

#line 390 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1];

#line 393 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1];

#line 396 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1];

#line 399 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 402 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 405 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0;

#line 408 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3];

#line 411 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3];

#line 414 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_report_0_0;

#line 417 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1];

#line 420 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1];

#line 423 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1];

#line 426 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1];

#line 429 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1];

#line 432 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0;

#line 435 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1];

#line 438 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_0;

#line 441 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0;

#line 444 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1];

#line 447 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_1;

#line 450 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0;

#line 453 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1];

#line 456 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_2;

#line 459 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0;

#line 462 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1];

#line 465 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_3;

#line 468 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0;

#line 471 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1];

#line 474 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_4;

#line 477 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0;

#line 480 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1];

#line 483 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_5;

#line 486 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0;

#line 489 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1];

#line 492 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_6;

#line 495 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0;

#line 498 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1];

#line 501 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_7;

#line 504 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0;

#line 507 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1];

#line 510 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_8;

#line 513 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0;

#line 516 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1];

#line 519 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_9;

#line 522 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0;

#line 525 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1];

#line 528 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_10;

#line 531 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0;

#line 534 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1];

#line 537 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_11;

#line 540 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0;

#line 543 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1];

#line 546 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_12;

#line 549 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0;

#line 552 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1];

#line 555 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_13;

#line 558 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 561 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1];

#line 564 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_14;

#line 567 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0;

#line 570 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1];

#line 573 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_15;

#line 576 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 579 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1];

#line 582 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_16;

#line 585 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0;

#line 588 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1];

#line 591 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_17;

#line 594 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0;

#line 597 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1];

#line 600 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_18;

#line 603 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1];

#line 606 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1];

#line 609 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1];

#line 612 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_3[16];

#line 615 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_deep_report_0[4];

#line 618 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_deep_report_0[19];

#line 621 "report.c"
static const MR_Integer report__report__functor_number_map_deep_report_0[19];

#line 624 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1];

#line 627 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0;

#line 630 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0;

#line 633 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1;

#line 636 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2];

#line 639 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2];

#line 642 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2];

#line 645 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 648 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 651 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 654 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 657 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 660 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 663 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3];

#line 666 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3];

#line 669 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_0;

#line 672 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1];

#line 675 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1];

#line 678 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_1;

#line 681 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1];

#line 684 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1];

#line 687 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_2;

#line 690 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1];

#line 693 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1];

#line 696 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1];

#line 699 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_gs_field_info_2[3];

#line 702 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3];

#line 705 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3];

#line 708 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_inheritable_perf_0_0[13];

#line 711 "report.c"
static const MR_ConstString report__report__field_names_inheritable_perf_0_0[13];

#line 714 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_inheritable_perf_0_0;

#line 717 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1];

#line 720 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1];

#line 723 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1];

#line 726 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1];

#line 729 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0;

#line 732 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1;

#line 735 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2];

#line 738 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2];

#line 741 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2];

#line 744 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_menu_report_0_0[10];

#line 747 "report.c"
static const MR_ConstString report__report__field_names_menu_report_0_0[10];

#line 750 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_menu_report_0_0;

#line 753 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1];

#line 756 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1];

#line 759 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1];

#line 762 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1];

#line 765 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1];

#line 768 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0;

#line 771 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2];

#line 774 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2];

#line 777 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_active_0_0;

#line 780 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1];

#line 783 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1];

#line 786 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1];

#line 789 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1];

#line 792 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2];

#line 795 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2];

#line 798 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_getter_setters_report_0_0;

#line 801 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1];

#line 804 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1];

#line 807 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1];

#line 810 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1];

#line 813 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0;

#line 816 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1;

#line 819 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2];

#line 822 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2];

#line 825 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2];

#line 828 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2];

#line 831 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2];

#line 834 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_rep_report_0_0;

#line 837 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1];

#line 840 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1];

#line 843 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1];

#line 846 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1];

#line 849 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 852 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 855 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3];

#line 858 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3];

#line 861 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_report_0_0;

#line 864 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1];

#line 867 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1];

#line 870 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1];

#line 873 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1];

#line 876 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2];

#line 879 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2];

#line 882 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_normal_callee_id_0_0;

#line 885 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1];

#line 888 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1];

#line 891 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1];

#line 894 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1];

#line 897 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0;

#line 900 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_perf_row_data_1_0[9];

#line 903 "report.c"
static const MR_ConstString report__report__field_names_perf_row_data_1_0[9];

#line 906 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_perf_row_data_1_0;

#line 909 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1];

#line 912 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1];

#line 915 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1];

#line 918 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1];

#line 921 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2];

#line 924 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2];

#line 927 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_active_0_0;

#line 930 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1];

#line 933 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1];

#line 936 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1];

#line 939 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1];

#line 942 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 945 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1];

#line 948 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1];

#line 951 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_0;

#line 954 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1];

#line 957 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1];

#line 960 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_1;

#line 963 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 966 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 969 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1];

#line 972 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1];

#line 975 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_2;

#line 978 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1];

#line 981 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1];

#line 984 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_3;

#line 987 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1];

#line 990 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1];

#line 993 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1];

#line 996 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1];

#line 999 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_0[4];

#line 1002 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4];

#line 1005 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4];

#line 1008 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 1011 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6];

#line 1014 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6];

#line 1017 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_report_0_0;

#line 1020 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1];

#line 1023 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1];

#line 1026 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1];

#line 1029 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1];

#line 1032 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6];

#line 1035 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6];

#line 1038 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_desc_0_0;

#line 1041 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1];

#line 1044 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1];

#line 1047 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1];

#line 1050 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1];

#line 1053 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

#line 1056 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1059 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1062 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_dynamic_dump_info_0_0[8];

#line 1065 "report.c"
static const MR_ConstString report__report__field_names_proc_dynamic_dump_info_0_0[8];

#line 1068 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_dynamic_dump_info_0_0;

#line 1071 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1];

#line 1074 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1];

#line 1077 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1];

#line 1080 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1];

#line 1083 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0;

#line 1086 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1;

#line 1089 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2];

#line 1092 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2];

#line 1095 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2];

#line 1098 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0;

#line 1101 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0;

#line 1104 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3];

#line 1107 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3];

#line 1110 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_report_0_0;

#line 1113 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1];

#line 1116 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1];

#line 1119 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1];

#line 1122 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1];

#line 1125 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_static_dump_info_0_0[8];

#line 1128 "report.c"
static const MR_ConstString report__report__field_names_proc_static_dump_info_0_0[8];

#line 1131 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_static_dump_info_0_0;

#line 1134 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1];

#line 1137 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1];

#line 1140 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1];

#line 1143 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1];

#line 1146 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 1149 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

#line 1152 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3];

#line 1155 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3];

#line 1158 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_procrep_coverage_info_0_0;

#line 1161 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1];

#line 1164 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1];

#line 1167 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1];

#line 1170 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1];

#line 1173 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1];

#line 1176 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1179 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1182 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0;

#line 1185 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5];

#line 1188 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5];

#line 1191 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_level_report_0_0;

#line 1194 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1];

#line 1197 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1];

#line 1200 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1];

#line 1203 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1];

#line 1206 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_0;

#line 1209 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 1212 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5];

#line 1215 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5];

#line 1218 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_1;

#line 1221 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2];

#line 1224 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2];

#line 1227 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_2;

#line 1230 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1];

#line 1233 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1];

#line 1236 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_3;

#line 1239 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0;

#line 1242 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1];

#line 1245 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1];

#line 1248 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_4;

#line 1251 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0;

#line 1254 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1];

#line 1257 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1];

#line 1260 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_5;

#line 1263 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1];

#line 1266 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1];

#line 1269 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1];

#line 1272 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3];

#line 1275 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_0[4];

#line 1278 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6];

#line 1281 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6];

#line 1284 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 1287 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0;

#line 1290 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4];

#line 1293 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4];

#line 1296 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_freq_data_0_0;

#line 1299 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1];

#line 1302 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1];

#line 1305 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1];

#line 1308 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1];

#line 1311 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0;

#line 1314 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3];

#line 1317 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3];

#line 1320 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_proc_freq_data_0_0;

#line 1323 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1];

#line 1326 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1];

#line 1329 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1];

#line 1332 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1];

#line 1335 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_0;

#line 1338 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_1;

#line 1341 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_2;

#line 1344 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1];

#line 1347 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1];

#line 1350 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_3;

#line 1353 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 1356 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1];

#line 1359 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1];

#line 1362 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_4;

#line 1365 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1];

#line 1368 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1];

#line 1371 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_5;

#line 1374 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_6;

#line 1377 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4];

#line 1380 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1];

#line 1383 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1];

#line 1386 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1];

#line 1389 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_simple_0[4];

#line 1392 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7];

#line 1395 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7];

#line 1398 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1];

#line 1401 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0;

#line 1404 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4];

#line 1407 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4];

#line 1410 "report.c"
static const MR_DuArgLocn report__report__field_locns_report_ordering_0_0[4];

#line 1413 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_report_ordering_0_0;

#line 1416 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1];

#line 1419 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1];

#line 1422 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1];

#line 1425 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1];

#line 1428 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2];

#line 1431 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2];

#line 1434 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_top_procs_report_0_0;

#line 1437 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1];

#line 1440 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1];

#line 1443 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1];

#line 1446 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1];

#line 1449 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2];

#line 1452 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2];

#line 1455 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_var_use_and_name_0_0;

#line 1458 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1];

#line 1461 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1];

#line 1464 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1];

#line 1467 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1];

#line 1470 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 1473 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1475 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1478 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 1481 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1483 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1485 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1488 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 1491 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1493 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1496 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 1499 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1501 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1503 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1506 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 1509 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1511 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1514 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 1517 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1519 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1521 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1524 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 1527 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1529 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1532 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 1535 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1537 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1539 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1542 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 1545 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1547 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1550 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 1553 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1555 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1557 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1560 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 1563 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1565 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1568 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 1571 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1573 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1575 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1578 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 1581 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1583 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1586 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 1589 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1591 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1593 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1596 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 1599 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1601 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1604 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 1607 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1609 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1611 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1614 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 1617 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1619 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1622 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 1625 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1627 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1629 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1632 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 1635 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1637 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1640 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 1643 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1645 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1647 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1650 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 1653 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1655 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1658 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 1661 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1663 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1665 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1668 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 1671 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1673 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1676 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 1679 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1681 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1683 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1686 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 1689 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1691 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1694 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 1697 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1699 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1701 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1704 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 1707 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1709 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1712 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 1715 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1717 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1719 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1722 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 1725 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1727 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1730 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 1733 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1735 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1737 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1740 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 1743 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1745 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1748 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 1751 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1753 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1755 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1758 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 1761 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1763 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1766 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 1769 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1771 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1773 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1776 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 1779 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1781 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1784 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 1787 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1789 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1791 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1794 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 1797 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1799 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1801 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1804 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 1807 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1809 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1811 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1813 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1816 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 1819 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1821 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1824 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 1827 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1829 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1831 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1834 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 1837 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1839 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1841 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1843 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1846 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 1849 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1851 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1853 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 1855 "report.c"
  MR_Box report__wrapper_arg_4,
#line 1857 "report.c"
  MR_Box report__wrapper_arg_5);

#line 1860 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 1863 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1865 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1868 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 1871 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1873 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1875 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1878 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 1881 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1883 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1885 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1888 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 1891 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1893 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1895 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1897 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1900 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 1903 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1905 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1908 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 1911 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1913 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1915 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1918 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 1921 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1923 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1926 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 1929 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1931 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1933 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1936 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 1939 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1941 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1944 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 1947 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1949 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1951 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1954 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 1957 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1959 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1962 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 1965 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1967 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1969 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1972 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 1975 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1977 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1980 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 1983 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1985 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1987 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1990 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 1993 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1995 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1998 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 2001 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2003 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2005 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2008 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 2011 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2013 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2016 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 2019 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2021 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2023 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2026 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 2029 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2031 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2034 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 2037 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2039 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2041 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2044 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 2047 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2049 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2052 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 2055 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2057 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2059 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2062 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 2065 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2067 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2070 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 2073 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2075 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2077 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2080 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 2083 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2085 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2088 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 2091 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2093 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2095 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2098 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 2101 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2103 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2105 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2108 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 2111 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2113 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 2115 "report.c"
  MR_Box report__wrapper_arg_3,
#line 2117 "report.c"
  MR_Box report__wrapper_arg_4);

#line 2120 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 2123 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2125 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2128 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 2131 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2133 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2135 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2138 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 2141 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2143 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2146 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 2149 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2151 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2153 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2156 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 2159 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2161 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2164 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 2167 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2169 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2171 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2174 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 2177 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2179 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2182 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 2185 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2187 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2189 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2192 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 2195 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2197 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2200 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 2203 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2205 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2207 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2210 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 2213 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2215 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2218 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 2221 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2223 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2225 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2228 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 2231 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2233 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2236 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 2239 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2241 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2243 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2246 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 2249 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2251 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2254 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 2257 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2259 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2261 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2264 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 2267 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2269 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2272 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 2275 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2277 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2279 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2282 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 2285 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2287 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2290 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 2293 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2295 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2297 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2300 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 2303 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2305 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2308 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 2311 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2313 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2315 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2318 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 2321 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2323 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2326 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 2329 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2331 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2333 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2336 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 2339 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2341 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2344 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 2347 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2349 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2351 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2354 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 2357 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2359 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2362 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 2365 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2367 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2369 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2372 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 2375 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2377 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2380 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 2383 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2385 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2387 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2390 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 2393 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2395 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2398 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 2401 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2403 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2405 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2408 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 2411 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2413 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2416 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 2419 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2421 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2423 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2426 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 2429 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2431 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2434 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 2437 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2439 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2441 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2444 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 2447 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2449 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2452 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 2455 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2457 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2459 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2462 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 2465 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2467 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2470 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 2473 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2475 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2477 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2480 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 2483 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2485 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2488 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 2491 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2493 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2495 "report.c"
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



#line 2873 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_call_site_desc_0
};

#line 2881 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4] = {
  (MR_String) "ad_caller_clique_ptr",
  (MR_String) "ad_callee_clique_ptr",
  (MR_String) "ad_callee_pdesc",
  (MR_String) "ad_call_site_desc"
};

#line 2889 "report.c"
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

#line 2904 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2909 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_ancestor_desc_0_0
  }
};

#line 2918 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2923 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1] = {
  (MR_Integer) 0
};

#line 2928 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_ancestor_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____ancestor_desc_0_0_10001)),
  ((MR_Box) (report____Compare____ancestor_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "ancestor_desc",
  {     report__report__du_name_ordered_ancestor_desc_0 },
  {     report__report__du_ptag_ordered_ancestor_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_ancestor_desc_0
};

#line 2945 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2953 "report.c"
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

#line 2967 "report.c"
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

#line 2981 "report.c"
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

#line 2996 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3001 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_desc_0_0
  }
};

#line 3010 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3015 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1] = {
  (MR_Integer) 0
};

#line 3020 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_desc_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_desc",
  {     report__report__du_name_ordered_call_site_desc_0 },
  {     report__report__du_ptag_ordered_call_site_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_desc_0
};

#line 3037 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

#line 3045 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 3053 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4] = {
  (MR_String) "csddi_csdptr",
  (MR_String) "csddi_caller_pdptr",
  (MR_String) "csddi_callee_pdptr",
  (MR_String) "csddi_own_perf"
};

#line 3061 "report.c"
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

#line 3076 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3081 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0
  }
};

#line 3090 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3095 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3100 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_dynamic_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_dynamic_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_dynamic_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_dynamic_dump_info",
  {     report__report__du_name_ordered_call_site_dynamic_dump_info_0 },
  {     report__report__du_ptag_ordered_call_site_dynamic_dump_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_dynamic_dump_info_0
};

#line 3117 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_var_use_and_name_0
  }
};

#line 3125 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_var_use_and_name_0
};

#line 3131 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_String) "csdvui_total_cost",
  (MR_String) "csdvui_var_uses"
};

#line 3137 "report.c"
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

#line 3152 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3157 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0
  }
};

#line 3166 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3171 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1] = {
  (MR_Integer) 0
};

#line 3176 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_dynamic_var_use_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_dynamic_var_use_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_dynamic_var_use_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_dynamic_var_use_info",
  {     report__report__du_name_ordered_call_site_dynamic_var_use_info_0 },
  {     report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_dynamic_var_use_info_0
};

#line 3193 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_info_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_normal_callee_id_0
  }
};

#line 3201 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3209 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
  }
};

#line 3217 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 3224 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3] = {
  (MR_String) "csf_kind",
  (MR_String) "csf_summary_perf",
  (MR_String) "csf_sub_callees"
};

#line 3231 "report.c"
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

#line 3246 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3251 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_perf_0_0
  }
};

#line 3260 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3265 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1] = {
  (MR_Integer) 0
};

#line 3270 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_perf_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_perf_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_perf",
  {     report__report__du_name_ordered_call_site_perf_0 },
  {     report__report__du_ptag_ordered_call_site_perf_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_perf_0
};

#line 3287 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 3295 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
};

#line 3305 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6] = {
  (MR_String) "cssdi_cssptr",
  (MR_String) "cssdi_containing_psptr",
  (MR_String) "cssdi_slot_number",
  (MR_String) "cssdi_line_number",
  (MR_String) "cssdi_goal_path",
  (MR_String) "cssdi_callee"
};

#line 3315 "report.c"
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

#line 3330 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3335 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_static_dump_info_0_0
  }
};

#line 3344 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3349 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3354 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_call_site_static_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____call_site_static_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____call_site_static_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "call_site_static_dump_info",
  {     report__report__du_name_ordered_call_site_static_dump_info_0 },
  {     report__report__du_ptag_ordered_call_site_static_dump_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_call_site_static_dump_info_0
};

#line 3371 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3377 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2] = {
  (MR_String) "cc_static",
  (MR_String) "cc_dynamic"
};

#line 3383 "report.c"
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

#line 3398 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3403 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_callers_counts_0_0
  }
};

#line 3412 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3417 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1] = {
  (MR_Integer) 0
};

#line 3422 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_callers_counts_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____callers_counts_0_0_10001)),
  ((MR_Box) (report____Compare____callers_counts_0_0_10001)),
  (MR_String) "report",
  (MR_String) "callers_counts",
  {     report__report__du_name_ordered_callers_counts_0 },
  {     report__report__du_ptag_ordered_callers_counts_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_callers_counts_0
};

#line 3439 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3447 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

#line 3455 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
  }
};

#line 3463 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 3470 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3] = {
  (MR_String) "ccsr_call_site_summary",
  (MR_String) "ccsr_kind_and_callee",
  (MR_String) "ccsr_callee_perfs"
};

#line 3477 "report.c"
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

#line 3492 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3497 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_call_site_report_0_0
  }
};

#line 3506 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3511 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1] = {
  (MR_Integer) 0
};

#line 3516 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_call_site_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_call_site_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_call_site_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_call_site_report",
  {     report__report__du_name_ordered_clique_call_site_report_0 },
  {     report__report__du_ptag_ordered_clique_call_site_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_call_site_report_0
};

#line 3533 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3541 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_proc_desc_0
};

#line 3548 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3] = {
  (MR_String) "cdesc_clique_ptr",
  (MR_String) "cdesc_entry_member",
  (MR_String) "cdesc_other_members"
};

#line 3555 "report.c"
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

#line 3570 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3575 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_desc_0_0
  }
};

#line 3584 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3589 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1] = {
  (MR_Integer) 0
};

#line 3594 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_desc_0_0_10001)),
  ((MR_Box) (report____Compare____clique_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_desc",
  {     report__report__du_name_ordered_clique_desc_0 },
  {     report__report__du_ptag_ordered_clique_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_desc_0
};

#line 3611 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 3619 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 3626 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3] = {
  (MR_String) "cdi_clique_desc",
  (MR_String) "cdi_caller_csd_ptr",
  (MR_String) "cdi_member_pdptrs"
};

#line 3633 "report.c"
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

#line 3648 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3653 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_dump_info_0_0
  }
};

#line 3662 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3667 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3672 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____clique_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_dump_info",
  {     report__report__du_name_ordered_clique_dump_info_0 },
  {     report__report__du_ptag_ordered_clique_dump_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_dump_info_0
};

#line 3689 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_call_site_report_0
  }
};

#line 3697 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0
};

#line 3703 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2] = {
  (MR_String) "cpdr_proc_summary",
  (MR_String) "cpdr_call_sites"
};

#line 3709 "report.c"
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

#line 3724 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3729 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_dynamic_report_0_0
  }
};

#line 3738 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3743 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1] = {
  (MR_Integer) 0
};

#line 3748 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_proc_dynamic_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_proc_dynamic_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_proc_dynamic_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_proc_dynamic_report",
  {     report__report__du_name_ordered_clique_proc_dynamic_report_0 },
  {     report__report__du_ptag_ordered_clique_proc_dynamic_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_proc_dynamic_report_0
};

#line 3765 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0
  }
};

#line 3773 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0
};

#line 3780 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3] = {
  (MR_String) "cpr_proc_summary",
  (MR_String) "cpr_first_proc_dynamic",
  (MR_String) "cpr_other_proc_dynamics"
};

#line 3787 "report.c"
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

#line 3802 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3807 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_report_0_0
  }
};

#line 3816 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3821 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 3826 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_proc_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_proc_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_proc_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_proc_report",
  {     report__report__du_name_ordered_clique_proc_report_0 },
  {     report__report__du_ptag_ordered_clique_proc_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_proc_report_0
};

#line 3843 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3850 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3] = {
  (MR_String) "crr_clique_ptr",
  (MR_String) "crr_recursion_type",
  (MR_String) "crr_num_procs"
};

#line 3857 "report.c"
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

#line 3872 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3877 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_recursion_report_0_0
  }
};

#line 3886 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3891 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1] = {
  (MR_Integer) 0
};

#line 3896 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_recursion_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_recursion_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_recursion_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_recursion_report",
  {     report__report__du_name_ordered_clique_recursion_report_0 },
  {     report__report__du_ptag_ordered_clique_recursion_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_recursion_report_0
};

#line 3913 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_ancestor_desc_0
  }
};

#line 3921 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0
  }
};

#line 3929 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_report_0
  }
};

#line 3937 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_report_0
};

#line 3944 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3] = {
  (MR_String) "cr_clique_ptr",
  (MR_String) "cr_ancestor_call_sites",
  (MR_String) "cr_clique_procs"
};

#line 3951 "report.c"
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

#line 3966 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 3971 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_report_0_0
  }
};

#line 3980 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 3985 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1] = {
  (MR_Integer) 0
};

#line 3990 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_clique_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____clique_report_0_0_10001)),
  ((MR_Box) (report____Compare____clique_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "clique_report",
  {     report__report__du_name_ordered_clique_report_0 },
  {     report__report__du_ptag_ordered_clique_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_clique_report_0
};

#line 4007 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1] = {
  (MR_Integer) 0
};

#line 4012 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0 = {
  (MR_String) "data_struct_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4019 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_data_struct_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____data_struct_name_0_0_10001)),
  ((MR_Box) (report____Compare____data_struct_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "data_struct_name",
  {     &report__report__notag_functor_desc_data_struct_name_0 },
  {     &report__report__notag_functor_desc_data_struct_name_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_data_struct_name_0
};

#line 4036 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_message_report_0
};

#line 4041 "report.c"
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

#line 4056 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_menu_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4065 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0
};

#line 4070 "report.c"
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

#line 4085 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4094 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0
};

#line 4099 "report.c"
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

#line 4114 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_recursion_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4123 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0
};

#line 4128 "report.c"
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

#line 4143 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_types_frequency_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4152 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0
};

#line 4157 "report.c"
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

#line 4172 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_program_modules_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4181 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0
};

#line 4186 "report.c"
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

#line 4201 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4210 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0
};

#line 4215 "report.c"
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

#line 4230 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_getter_setters_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4239 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0
};

#line 4244 "report.c"
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

#line 4259 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_rep_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4268 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0
};

#line 4273 "report.c"
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

#line 4288 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_top_procs_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4297 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0
};

#line 4302 "report.c"
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

#line 4317 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4326 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0
};

#line 4331 "report.c"
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

#line 4346 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_procrep_coverage_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4355 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0
};

#line 4360 "report.c"
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

#line 4375 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_callers_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4384 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0
};

#line 4389 "report.c"
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

#line 4404 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4413 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4418 "report.c"
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

#line 4433 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4442 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4447 "report.c"
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

#line 4462 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4471 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4476 "report.c"
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

#line 4491 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4500 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4505 "report.c"
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

#line 4520 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4529 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0
};

#line 4534 "report.c"
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

#line 4549 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_var_use_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4558 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0
};

#line 4563 "report.c"
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

#line 4578 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1] = {
  &report__report__du_functor_desc_deep_report_0_0
};

#line 4583 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1] = {
  &report__report__du_functor_desc_deep_report_0_1
};

#line 4588 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1] = {
  &report__report__du_functor_desc_deep_report_0_2
};

#line 4593 "report.c"
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

#line 4613 "report.c"
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

#line 4637 "report.c"
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

#line 4660 "report.c"
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

#line 4683 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_deep_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____deep_report_0_0_10001)),
  ((MR_Box) (report____Compare____deep_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "deep_report",
  {     report__report__du_name_ordered_deep_report_0 },
  {     report__report__du_ptag_ordered_deep_report_0 },
  (MR_Integer) 19,
  (MR_Integer) 4,
  report__report__functor_number_map_deep_report_0
};

#line 4700 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1] = {
  (MR_Integer) 0
};

#line 4705 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0 = {
  (MR_String) "field_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4712 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_field_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____field_name_0_0_10001)),
  ((MR_Box) (report____Compare____field_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "field_name",
  {     &report__report__notag_functor_desc_field_name_0 },
  {     &report__report__notag_functor_desc_field_name_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_field_name_0
};

#line 4729 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0 = {
  (MR_String) "getter",
  (MR_Integer) 0
};

#line 4735 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1 = {
  (MR_String) "setter",
  (MR_Integer) 1
};

#line 4741 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4747 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4753 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4759 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_getter_or_setter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____getter_or_setter_0_0_10001)),
  ((MR_Box) (report____Compare____getter_or_setter_0_0_10001)),
  (MR_String) "report",
  (MR_String) "getter_or_setter",
  {     report__report__enum_name_ordered_getter_or_setter_0 },
  {     report__report__enum_value_ordered_getter_or_setter_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_getter_or_setter_0
};

#line 4776 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 4785 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  }
};

#line 4794 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_ds_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (report____Unify____gs_ds_map_1_0_10001)),
  ((MR_Box) (report____Compare____gs_ds_map_1_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_ds_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4811 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 4819 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4828 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4837 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4846 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_ds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_ds_map_0_0_10001)),
  ((MR_Box) (report____Compare____gs_ds_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_ds_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 4863 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 4870 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3] = {
  (MR_String) "gsf_both_getter",
  (MR_String) "gsf_both_setter",
  (MR_String) "gsf_both_summary"
};

#line 4877 "report.c"
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

#line 4892 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4897 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1] = {
  (MR_String) "gsf_getter"
};

#line 4902 "report.c"
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

#line 4917 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4922 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1] = {
  (MR_String) "gsf_setter"
};

#line 4927 "report.c"
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

#line 4942 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1] = {
  &report__report__du_functor_desc_gs_field_info_2_0
};

#line 4947 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1] = {
  &report__report__du_functor_desc_gs_field_info_2_1
};

#line 4952 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1] = {
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 4957 "report.c"
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

#line 4976 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3] = {
  &report__report__du_functor_desc_gs_field_info_2_0,
  &report__report__du_functor_desc_gs_field_info_2_1,
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 4983 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 4990 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_info_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____gs_field_info_2_0_10001)),
  ((MR_Box) (report____Compare____gs_field_info_2_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_info",
  {     report__report__du_name_ordered_gs_field_info_2 },
  {     report__report__du_ptag_ordered_gs_field_info_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  report__report__functor_number_map_gs_field_info_2
};

#line 5007 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_field_info_0_0_10001)),
  ((MR_Box) (report____Compare____gs_field_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5024 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (report____Unify____gs_field_map_1_0_10001)),
  ((MR_Box) (report____Compare____gs_field_map_1_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5041 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_gs_field_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____gs_field_map_0_0_10001)),
  ((MR_Box) (report____Compare____gs_field_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "gs_field_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 5058 "report.c"
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

#line 5075 "report.c"
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

#line 5092 "report.c"
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

#line 5107 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5112 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_inheritable_perf_0_0
  }
};

#line 5121 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5126 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1] = {
  (MR_Integer) 0
};

#line 5131 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_inheritable_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____inheritable_perf_0_0_10001)),
  ((MR_Box) (report____Compare____inheritable_perf_0_0_10001)),
  (MR_String) "report",
  (MR_String) "inheritable_perf",
  {     report__report__du_name_ordered_inheritable_perf_0 },
  {     report__report__du_ptag_ordered_inheritable_perf_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_inheritable_perf_0
};

#line 5148 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0 = {
  (MR_String) "do_not_have_module_rep",
  (MR_Integer) 0
};

#line 5154 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1 = {
  (MR_String) "have_module_rep",
  (MR_Integer) 1
};

#line 5160 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5166 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5172 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5178 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_maybe_have_module_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____maybe_have_module_rep_0_0_10001)),
  ((MR_Box) (report____Compare____maybe_have_module_rep_0_0_10001)),
  (MR_String) "report",
  (MR_String) "maybe_have_module_rep",
  {     report__report__enum_name_ordered_maybe_have_module_rep_0 },
  {     report__report__enum_value_ordered_maybe_have_module_rep_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_maybe_have_module_rep_0
};

#line 5195 "report.c"
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

#line 5209 "report.c"
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

#line 5223 "report.c"
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

#line 5238 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5243 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_menu_report_0_0
  }
};

#line 5252 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5257 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1] = {
  (MR_Integer) 0
};

#line 5262 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_menu_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____menu_report_0_0_10001)),
  ((MR_Box) (report____Compare____menu_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "menu_report",
  {     report__report__du_name_ordered_menu_report_0 },
  {     report__report__du_ptag_ordered_menu_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_menu_report_0
};

#line 5279 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1] = {
  (MR_Integer) 0
};

#line 5284 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0 = {
  (MR_String) "message_report",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 5291 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_message_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____message_report_0_0_10001)),
  ((MR_Box) (report____Compare____message_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "message_report",
  {     &report__report__notag_functor_desc_message_report_0 },
  {     &report__report__notag_functor_desc_message_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_message_report_0
};

#line 5308 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_is_active_0
};

#line 5314 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2] = {
  (MR_String) "ma_module_name",
  (MR_String) "ma_is_active"
};

#line 5320 "report.c"
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

#line 5335 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5340 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_active_0_0
  }
};

#line 5349 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5354 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1] = {
  (MR_Integer) 0
};

#line 5359 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_active_0_0_10001)),
  ((MR_Box) (report____Compare____module_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_active",
  {     report__report__du_name_ordered_module_active_0 },
  {     report__report__du_ptag_ordered_module_active_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_active_0
};

#line 5376 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
};

#line 5382 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2] = {
  (MR_String) "mgsr_module_name",
  (MR_String) "mgsr_procs"
};

#line 5388 "report.c"
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

#line 5403 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5408 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_getter_setters_report_0_0
  }
};

#line 5417 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5422 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1] = {
  (MR_Integer) 0
};

#line 5427 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_getter_setters_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_getter_setters_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_getter_setters_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_getter_setters_report",
  {     report__report__du_name_ordered_module_getter_setters_report_0 },
  {     report__report__du_ptag_ordered_module_getter_setters_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_getter_setters_report_0
};

#line 5444 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0 = {
  (MR_String) "module_is_active",
  (MR_Integer) 0
};

#line 5450 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1 = {
  (MR_String) "module_is_not_active",
  (MR_Integer) 1
};

#line 5456 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5462 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5468 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5474 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____module_is_active_0_0_10001)),
  ((MR_Box) (report____Compare____module_is_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_is_active",
  {     report__report__enum_name_ordered_module_is_active_0 },
  {     report__report__enum_value_ordered_module_is_active_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_module_is_active_0
};

#line 5491 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5497 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2] = {
  (MR_String) "mrr_module_name",
  (MR_String) "mrr_report"
};

#line 5503 "report.c"
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

#line 5518 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5523 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_rep_report_0_0
  }
};

#line 5532 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5537 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1] = {
  (MR_Integer) 0
};

#line 5542 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_rep_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_rep_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_rep_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_rep_report",
  {     report__report__du_name_ordered_module_rep_report_0 },
  {     report__report__du_ptag_ordered_module_rep_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_rep_report_0
};

#line 5559 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

#line 5567 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
  }
};

#line 5575 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_maybe_have_module_rep_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
};

#line 5582 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3] = {
  (MR_String) "mr_module_name",
  (MR_String) "mr_have_module_rep",
  (MR_String) "mr_procs"
};

#line 5589 "report.c"
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

#line 5604 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5609 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_report_0_0
  }
};

#line 5618 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5623 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1] = {
  (MR_Integer) 0
};

#line 5628 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_module_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____module_report_0_0_10001)),
  ((MR_Box) (report____Compare____module_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "module_report",
  {     report__report__du_name_ordered_module_report_0 },
  {     report__report__du_ptag_ordered_module_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_module_report_0
};

#line 5645 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5651 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2] = {
  (MR_String) "nci_callee_desc",
  (MR_String) "nci_type_subst"
};

#line 5657 "report.c"
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

#line 5672 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5677 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_normal_callee_id_0_0
  }
};

#line 5686 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5691 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1] = {
  (MR_Integer) 0
};

#line 5696 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_normal_callee_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____normal_callee_id_0_0_10001)),
  ((MR_Box) (report____Compare____normal_callee_id_0_0_10001)),
  (MR_String) "report",
  (MR_String) "normal_callee_id",
  {     report__report__du_name_ordered_normal_callee_id_0 },
  {     report__report__du_ptag_ordered_normal_callee_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_normal_callee_id_0
};

#line 5713 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_inheritable_perf_0
  }
};

#line 5721 "report.c"
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

#line 5734 "report.c"
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

#line 5747 "report.c"
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

#line 5762 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5767 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_perf_row_data_1_0
  }
};

#line 5776 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5781 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1] = {
  (MR_Integer) 0
};

#line 5786 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_perf_row_data_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____perf_row_data_1_0_10001)),
  ((MR_Box) (report____Compare____perf_row_data_1_0_10001)),
  (MR_String) "report",
  (MR_String) "perf_row_data",
  {     report__report__du_name_ordered_perf_row_data_1 },
  {     report__report__du_ptag_ordered_perf_row_data_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_perf_row_data_1
};

#line 5803 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_is_active_0
};

#line 5809 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2] = {
  (MR_String) "pa_proc_desc",
  (MR_String) "pa_is_active"
};

#line 5815 "report.c"
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

#line 5830 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5835 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_active_0_0
  }
};

#line 5844 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5849 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1] = {
  (MR_Integer) 0
};

#line 5854 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_active_0_0_10001)),
  ((MR_Box) (report____Compare____proc_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_active",
  {     report__report__du_name_ordered_proc_active_0 },
  {     report__report__du_ptag_ordered_proc_active_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_active_0
};

#line 5871 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
  }
};

#line 5879 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 5884 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1] = {
  (MR_String) "pc_caller_call_sites"
};

#line 5889 "report.c"
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

#line 5904 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 5909 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1] = {
  (MR_String) "pc_caller_procedures"
};

#line 5914 "report.c"
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

#line 5929 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 5937 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0
  }
};

#line 5945 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0
};

#line 5950 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1] = {
  (MR_String) "pc_caller_modules"
};

#line 5955 "report.c"
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

#line 5970 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 5975 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1] = {
  (MR_String) "pc_caller_cliques"
};

#line 5980 "report.c"
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

#line 5995 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_0_0
};

#line 6000 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1] = {
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6005 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1] = {
  &report__report__du_functor_desc_proc_callers_0_2
};

#line 6010 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1] = {
  &report__report__du_functor_desc_proc_callers_0_3
};

#line 6015 "report.c"
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

#line 6039 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4] = {
  &report__report__du_functor_desc_proc_callers_0_0,
  &report__report__du_functor_desc_proc_callers_0_3,
  &report__report__du_functor_desc_proc_callers_0_2,
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6047 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 6055 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_callers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_callers_0_0_10001)),
  ((MR_Box) (report____Compare____proc_callers_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_callers",
  {     report__report__du_name_ordered_proc_callers_0 },
  {     report__report__du_ptag_ordered_proc_callers_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_callers_0
};

#line 6072 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6080 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_callers_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 6090 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6] = {
  (MR_String) "pc_proc_desc",
  (MR_String) "pc_callers",
  (MR_String) "pc_batch_number",
  (MR_String) "pc_callers_per_batch",
  (MR_String) "pc_contour_exclusion",
  (MR_String) "pc_contour_warn_message"
};

#line 6100 "report.c"
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

#line 6115 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6120 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_report_0_0
  }
};

#line 6129 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6134 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1] = {
  (MR_Integer) 0
};

#line 6139 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_callers_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_callers_report_0_0_10001)),
  ((MR_Box) (report____Compare____proc_callers_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_callers_report",
  {     report__report__du_name_ordered_proc_callers_report_0 },
  {     report__report__du_ptag_ordered_proc_callers_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_callers_report_0
};

#line 6156 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 6166 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6] = {
  (MR_String) "pdesc_ps_ptr",
  (MR_String) "pdesc_file_name",
  (MR_String) "pdesc_line_number",
  (MR_String) "pdesc_module_name",
  (MR_String) "pdesc_uq_refined_name",
  (MR_String) "pdesc_q_refined_name"
};

#line 6176 "report.c"
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

#line 6191 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6196 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_desc_0_0
  }
};

#line 6205 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6210 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1] = {
  (MR_Integer) 0
};

#line 6215 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_desc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_desc_0_0_10001)),
  ((MR_Box) (report____Compare____proc_desc_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_desc",
  {     report__report__du_name_ordered_proc_desc_0 },
  {     report__report__du_ptag_ordered_proc_desc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_desc_0
};

#line 6232 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 6240 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 6248 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__list__ti_list_1coverage__type_ctor_info_coverage_point_0
  }
};

#line 6256 "report.c"
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

#line 6268 "report.c"
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

#line 6280 "report.c"
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

#line 6295 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6300 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_dynamic_dump_info_0_0
  }
};

#line 6309 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6314 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6319 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_dynamic_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_dynamic_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____proc_dynamic_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_dynamic_dump_info",
  {     report__report__du_name_ordered_proc_dynamic_dump_info_0 },
  {     report__report__du_ptag_ordered_proc_dynamic_dump_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_dynamic_dump_info_0
};

#line 6336 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0 = {
  (MR_String) "proc_is_active",
  (MR_Integer) 0
};

#line 6342 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1 = {
  (MR_String) "proc_is_not_active",
  (MR_Integer) 1
};

#line 6348 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6354 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6360 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 6366 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (report____Unify____proc_is_active_0_0_10001)),
  ((MR_Box) (report____Compare____proc_is_active_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_is_active",
  {     report__report__enum_name_ordered_proc_is_active_0 },
  {     report__report__enum_value_ordered_proc_is_active_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_is_active_0
};

#line 6383 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_callers_counts_0
  }
};

#line 6391 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_perf_0
  }
};

#line 6399 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_call_site_perf_0
};

#line 6406 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3] = {
  (MR_String) "proc_callers_summary",
  (MR_String) "proc_summary",
  (MR_String) "proc_call_site_summaries"
};

#line 6413 "report.c"
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

#line 6428 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6433 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_report_0_0
  }
};

#line 6442 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6447 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 6452 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_report_0_0_10001)),
  ((MR_Box) (report____Compare____proc_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_report",
  {     report__report__du_name_ordered_proc_report_0 },
  {     report__report__du_ptag_ordered_proc_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_report_0
};

#line 6469 "report.c"
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

#line 6481 "report.c"
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

#line 6493 "report.c"
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

#line 6508 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6513 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_static_dump_info_0_0
  }
};

#line 6522 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6527 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6532 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_proc_static_dump_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____proc_static_dump_info_0_0_10001)),
  ((MR_Box) (report____Compare____proc_static_dump_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "proc_static_dump_info",
  {     report__report__du_name_ordered_proc_static_dump_info_0 },
  {     report__report__du_ptag_ordered_proc_static_dump_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_proc_static_dump_info_0
};

#line 6549 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 6557 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 6565 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 6572 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3] = {
  (MR_String) "prci_proc",
  (MR_String) "prci_proc_rep",
  (MR_String) "prci_coverage_array"
};

#line 6579 "report.c"
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

#line 6594 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6599 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_procrep_coverage_info_0_0
  }
};

#line 6608 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6613 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1] = {
  (MR_Integer) 0
};

#line 6618 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_procrep_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____procrep_coverage_info_0_0_10001)),
  ((MR_Box) (report____Compare____procrep_coverage_info_0_0_10001)),
  (MR_String) "report",
  (MR_String) "procrep_coverage_info",
  {     report__report__du_name_ordered_procrep_coverage_info_0 },
  {     report__report__du_ptag_ordered_procrep_coverage_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_procrep_coverage_info_0
};

#line 6635 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1] = {
  (MR_Integer) 0
};

#line 6640 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

#line 6648 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0
  }
};

#line 6656 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0 = {
  (MR_String) "program_modules_report",
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0,
  (MR_String) "program_modules"
};

#line 6663 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_program_modules_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____program_modules_report_0_0_10001)),
  ((MR_Box) (report____Compare____program_modules_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "program_modules_report",
  {     &report__report__notag_functor_desc_program_modules_report_0 },
  {     &report__report__notag_functor_desc_program_modules_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_program_modules_report_0
};

#line 6680 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 6689 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5] = {
  (MR_String) "rlr_level",
  (MR_String) "rlr_calls",
  (MR_String) "rlr_prob",
  (MR_String) "rlr_non_rec_calls_cost",
  (MR_String) "rlr_rec_calls_ex_chld_cost"
};

#line 6698 "report.c"
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

#line 6713 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6718 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_level_report_0_0
  }
};

#line 6727 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6732 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1] = {
  (MR_Integer) 0
};

#line 6737 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_level_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_level_report_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_level_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_level_report",
  {     report__report__du_name_ordered_recursion_level_report_0 },
  {     report__report__du_ptag_ordered_recursion_level_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_level_report_0
};

#line 6754 "report.c"
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

#line 6769 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 6779 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

#line 6788 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5] = {
  (MR_String) "rts_base",
  (MR_String) "rts_recursive",
  (MR_String) "rts_avg_max_depth",
  (MR_String) "rts_avg_rec_cost",
  (MR_String) "rts_any_rec_cost"
};

#line 6797 "report.c"
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

#line 6812 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0
};

#line 6818 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2] = {
  (MR_String) "rtdsc_base",
  (MR_String) "rtdsc_recursive"
};

#line 6824 "report.c"
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

#line 6839 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 6844 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1] = {
  (MR_String) "rtml_num_procs"
};

#line 6849 "report.c"
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

#line 6864 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_level_report_0
  }
};

#line 6872 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_recursion_level_report_0
};

#line 6877 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1] = {
  (MR_String) "rto_all_levels"
};

#line 6882 "report.c"
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

#line 6897 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6905 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 6910 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1] = {
  (MR_String) "rte_errors"
};

#line 6915 "report.c"
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

#line 6930 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_0_0
};

#line 6935 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 6940 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_0_2
};

#line 6945 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3] = {
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_5
};

#line 6952 "report.c"
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

#line 6976 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6] = {
  &report__report__du_functor_desc_recursion_type_0_2,
  &report__report__du_functor_desc_recursion_type_0_5,
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_0,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 6986 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 6996 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type",
  {     report__report__du_name_ordered_recursion_type_0 },
  {     report__report__du_ptag_ordered_recursion_type_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_0
};

#line 7013 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 7021 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_proc_freq_data_0
  }
};

#line 7030 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0
};

#line 7038 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4] = {
  (MR_String) "rtfd_freq",
  (MR_String) "rtfd_percent",
  (MR_String) "rtfd_maybe_summary",
  (MR_String) "rtfd_entry_procs"
};

#line 7046 "report.c"
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

#line 7061 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7066 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_freq_data_0_0
  }
};

#line 7075 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7080 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7085 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_freq_data_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_freq_data_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_freq_data",
  {     report__report__du_name_ordered_recursion_type_freq_data_0 },
  {     report__report__du_ptag_ordered_recursion_type_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_freq_data_0
};

#line 7102 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_freq_data_0
  }
};

#line 7111 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_histogram_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____recursion_type_histogram_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_histogram_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_histogram",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 7128 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7135 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3] = {
  (MR_String) "rtpfd_freq",
  (MR_String) "rtpfd_percent",
  (MR_String) "rtpfd_summary"
};

#line 7142 "report.c"
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

#line 7157 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7162 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0
  }
};

#line 7171 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7176 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7181 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_proc_freq_data_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_proc_freq_data_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_proc_freq_data",
  {     report__report__du_name_ordered_recursion_type_proc_freq_data_0 },
  {     report__report__du_ptag_ordered_recursion_type_proc_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_proc_freq_data_0
};

#line 7198 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (report____Unify____recursion_type_proc_map_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_proc_map_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_proc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 7215 "report.c"
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

#line 7230 "report.c"
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

#line 7245 "report.c"
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

#line 7260 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7265 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1] = {
  (MR_String) "rtsmr_num_procs"
};

#line 7270 "report.c"
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

#line 7285 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 7293 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1] = {
  (MR_PseudoTypeInfo) &report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 7298 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1] = {
  (MR_String) "rtso_levels"
};

#line 7303 "report.c"
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

#line 7318 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 7323 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1] = {
  (MR_String) "rtse_error"
};

#line 7328 "report.c"
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

#line 7343 "report.c"
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

#line 7358 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4] = {
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7366 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_3
};

#line 7371 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_4
};

#line 7376 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_5
};

#line 7381 "report.c"
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

#line 7405 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7] = {
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_5,
  &report__report__du_functor_desc_recursion_type_simple_0_3,
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_4,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7416 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6
};

#line 7427 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_type_simple_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____recursion_type_simple_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_type_simple_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_type_simple",
  {     report__report__du_name_ordered_recursion_type_simple_0 },
  {     report__report__du_ptag_ordered_recursion_type_simple_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_type_simple_0
};

#line 7444 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1] = {
  (MR_Integer) 0
};

#line 7449 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0 = {
  (MR_String) "recursion_types_frequency_report",
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0,
  (MR_String) "rtfr_histogram"
};

#line 7456 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_recursion_types_frequency_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (report____Unify____recursion_types_frequency_report_0_0_10001)),
  ((MR_Box) (report____Compare____recursion_types_frequency_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "recursion_types_frequency_report",
  {     &report__report__notag_functor_desc_recursion_types_frequency_report_0 },
  {     &report__report__notag_functor_desc_recursion_types_frequency_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_recursion_types_frequency_report_0
};

#line 7473 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 7481 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4] = {
  (MR_String) "display_limit",
  (MR_String) "cost_kind",
  (MR_String) "incl_desc",
  (MR_String) "scope"
};

#line 7489 "report.c"
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

#line 7513 "report.c"
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

#line 7528 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7533 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_report_ordering_0_0
  }
};

#line 7542 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7547 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1] = {
  (MR_Integer) 0
};

#line 7552 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_report_ordering_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____report_ordering_0_0_10001)),
  ((MR_Box) (report____Compare____report_ordering_0_0_10001)),
  (MR_String) "report",
  (MR_String) "report_ordering",
  {     report__report__du_name_ordered_report_ordering_0 },
  {     report__report__du_ptag_ordered_report_ordering_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_report_ordering_0
};

#line 7569 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_report_ordering_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7575 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2] = {
  (MR_String) "tp_ordering",
  (MR_String) "tp_top_procs"
};

#line 7581 "report.c"
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

#line 7596 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7601 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_top_procs_report_0_0
  }
};

#line 7610 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7615 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1] = {
  (MR_Integer) 0
};

#line 7620 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_top_procs_report_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____top_procs_report_0_0_10001)),
  ((MR_Box) (report____Compare____top_procs_report_0_0_10001)),
  (MR_String) "report",
  (MR_String) "top_procs_report",
  {     report__report__du_name_ordered_top_procs_report_0 },
  {     report__report__du_ptag_ordered_top_procs_report_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_top_procs_report_0
};

#line 7637 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
};

#line 7643 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2] = {
  (MR_String) "vun_var_name",
  (MR_String) "vun_use"
};

#line 7649 "report.c"
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

#line 7664 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7669 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_var_use_and_name_0_0
  }
};

#line 7678 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7683 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1] = {
  (MR_Integer) 0
};

#line 7688 "report.c"
const MR_TypeCtorInfo_Struct report__report__type_ctor_info_var_use_and_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (report____Unify____var_use_and_name_0_0_10001)),
  ((MR_Box) (report____Compare____var_use_and_name_0_0_10001)),
  (MR_String) "report",
  (MR_String) "var_use_and_name",
  {     report__report__du_name_ordered_var_use_and_name_0 },
  {     report__report__du_ptag_ordered_var_use_and_name_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  report__report__functor_number_map_var_use_and_name_0
};

#line 7705 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 7708 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7710 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7712 "report.c"
{
#line 7714 "report.c"
  {
#line 7716 "report.c"
    MR_bool report__succeeded;

#line 7719 "report.c"
    {
#line 7721 "report.c"
      report__succeeded = report____Unify____ancestor_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7724 "report.c"
    return report__succeeded;
#line 7726 "report.c"
  }
#line 7728 "report.c"
}

#line 7731 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 7734 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7736 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7738 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7740 "report.c"
{
#line 7742 "report.c"
  {
#line 7744 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7747 "report.c"
    {
#line 7749 "report.c"
      report____Compare____ancestor_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7752 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7754 "report.c"
  }
#line 7756 "report.c"
}

#line 7759 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 7762 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7764 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7766 "report.c"
{
#line 7768 "report.c"
  {
#line 7770 "report.c"
    MR_bool report__succeeded;

#line 7773 "report.c"
    {
#line 7775 "report.c"
      report__succeeded = report____Unify____call_site_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7778 "report.c"
    return report__succeeded;
#line 7780 "report.c"
  }
#line 7782 "report.c"
}

#line 7785 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 7788 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7790 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7792 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7794 "report.c"
{
#line 7796 "report.c"
  {
#line 7798 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7801 "report.c"
    {
#line 7803 "report.c"
      report____Compare____call_site_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7806 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7808 "report.c"
  }
#line 7810 "report.c"
}

#line 7813 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 7816 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7818 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7820 "report.c"
{
#line 7822 "report.c"
  {
#line 7824 "report.c"
    MR_bool report__succeeded;

#line 7827 "report.c"
    {
#line 7829 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7832 "report.c"
    return report__succeeded;
#line 7834 "report.c"
  }
#line 7836 "report.c"
}

#line 7839 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 7842 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7844 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7846 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7848 "report.c"
{
#line 7850 "report.c"
  {
#line 7852 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7855 "report.c"
    {
#line 7857 "report.c"
      report____Compare____call_site_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7860 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7862 "report.c"
  }
#line 7864 "report.c"
}

#line 7867 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 7870 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7872 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7874 "report.c"
{
#line 7876 "report.c"
  {
#line 7878 "report.c"
    MR_bool report__succeeded;

#line 7881 "report.c"
    {
#line 7883 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_var_use_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7886 "report.c"
    return report__succeeded;
#line 7888 "report.c"
  }
#line 7890 "report.c"
}

#line 7893 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 7896 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7898 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7900 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7902 "report.c"
{
#line 7904 "report.c"
  {
#line 7906 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7909 "report.c"
    {
#line 7911 "report.c"
      report____Compare____call_site_dynamic_var_use_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7914 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7916 "report.c"
  }
#line 7918 "report.c"
}

#line 7921 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 7924 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7926 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7928 "report.c"
{
#line 7930 "report.c"
  {
#line 7932 "report.c"
    MR_bool report__succeeded;

#line 7935 "report.c"
    {
#line 7937 "report.c"
      report__succeeded = report____Unify____call_site_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7940 "report.c"
    return report__succeeded;
#line 7942 "report.c"
  }
#line 7944 "report.c"
}

#line 7947 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 7950 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7952 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7954 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7956 "report.c"
{
#line 7958 "report.c"
  {
#line 7960 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7963 "report.c"
    {
#line 7965 "report.c"
      report____Compare____call_site_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7968 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7970 "report.c"
  }
#line 7972 "report.c"
}

#line 7975 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 7978 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7980 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7982 "report.c"
{
#line 7984 "report.c"
  {
#line 7986 "report.c"
    MR_bool report__succeeded;

#line 7989 "report.c"
    {
#line 7991 "report.c"
      report__succeeded = report____Unify____call_site_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7994 "report.c"
    return report__succeeded;
#line 7996 "report.c"
  }
#line 7998 "report.c"
}

#line 8001 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 8004 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8006 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8008 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8010 "report.c"
{
#line 8012 "report.c"
  {
#line 8014 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8017 "report.c"
    {
#line 8019 "report.c"
      report____Compare____call_site_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8022 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8024 "report.c"
  }
#line 8026 "report.c"
}

#line 8029 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 8032 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8034 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8036 "report.c"
{
#line 8038 "report.c"
  {
#line 8040 "report.c"
    MR_bool report__succeeded;

#line 8043 "report.c"
    {
#line 8045 "report.c"
      report__succeeded = report____Unify____callers_counts_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8048 "report.c"
    return report__succeeded;
#line 8050 "report.c"
  }
#line 8052 "report.c"
}

#line 8055 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 8058 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8060 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8062 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8064 "report.c"
{
#line 8066 "report.c"
  {
#line 8068 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8071 "report.c"
    {
#line 8073 "report.c"
      report____Compare____callers_counts_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8076 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8078 "report.c"
  }
#line 8080 "report.c"
}

#line 8083 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 8086 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8088 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8090 "report.c"
{
#line 8092 "report.c"
  {
#line 8094 "report.c"
    MR_bool report__succeeded;

#line 8097 "report.c"
    {
#line 8099 "report.c"
      report__succeeded = report____Unify____clique_call_site_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8102 "report.c"
    return report__succeeded;
#line 8104 "report.c"
  }
#line 8106 "report.c"
}

#line 8109 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 8112 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8114 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8116 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8118 "report.c"
{
#line 8120 "report.c"
  {
#line 8122 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8125 "report.c"
    {
#line 8127 "report.c"
      report____Compare____clique_call_site_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8130 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8132 "report.c"
  }
#line 8134 "report.c"
}

#line 8137 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 8140 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8142 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8144 "report.c"
{
#line 8146 "report.c"
  {
#line 8148 "report.c"
    MR_bool report__succeeded;

#line 8151 "report.c"
    {
#line 8153 "report.c"
      report__succeeded = report____Unify____clique_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8156 "report.c"
    return report__succeeded;
#line 8158 "report.c"
  }
#line 8160 "report.c"
}

#line 8163 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 8166 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8168 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8170 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8172 "report.c"
{
#line 8174 "report.c"
  {
#line 8176 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8179 "report.c"
    {
#line 8181 "report.c"
      report____Compare____clique_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8184 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8186 "report.c"
  }
#line 8188 "report.c"
}

#line 8191 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 8194 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8196 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8198 "report.c"
{
#line 8200 "report.c"
  {
#line 8202 "report.c"
    MR_bool report__succeeded;

#line 8205 "report.c"
    {
#line 8207 "report.c"
      report__succeeded = report____Unify____clique_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8210 "report.c"
    return report__succeeded;
#line 8212 "report.c"
  }
#line 8214 "report.c"
}

#line 8217 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 8220 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8222 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8224 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8226 "report.c"
{
#line 8228 "report.c"
  {
#line 8230 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8233 "report.c"
    {
#line 8235 "report.c"
      report____Compare____clique_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8238 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8240 "report.c"
  }
#line 8242 "report.c"
}

#line 8245 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 8248 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8250 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8252 "report.c"
{
#line 8254 "report.c"
  {
#line 8256 "report.c"
    MR_bool report__succeeded;

#line 8259 "report.c"
    {
#line 8261 "report.c"
      report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8264 "report.c"
    return report__succeeded;
#line 8266 "report.c"
  }
#line 8268 "report.c"
}

#line 8271 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 8274 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8276 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8278 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8280 "report.c"
{
#line 8282 "report.c"
  {
#line 8284 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8287 "report.c"
    {
#line 8289 "report.c"
      report____Compare____clique_proc_dynamic_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8292 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8294 "report.c"
  }
#line 8296 "report.c"
}

#line 8299 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 8302 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8304 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8306 "report.c"
{
#line 8308 "report.c"
  {
#line 8310 "report.c"
    MR_bool report__succeeded;

#line 8313 "report.c"
    {
#line 8315 "report.c"
      report__succeeded = report____Unify____clique_proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8318 "report.c"
    return report__succeeded;
#line 8320 "report.c"
  }
#line 8322 "report.c"
}

#line 8325 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 8328 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8330 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8332 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8334 "report.c"
{
#line 8336 "report.c"
  {
#line 8338 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8341 "report.c"
    {
#line 8343 "report.c"
      report____Compare____clique_proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8346 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8348 "report.c"
  }
#line 8350 "report.c"
}

#line 8353 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 8356 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8358 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8360 "report.c"
{
#line 8362 "report.c"
  {
#line 8364 "report.c"
    MR_bool report__succeeded;

#line 8367 "report.c"
    {
#line 8369 "report.c"
      report__succeeded = report____Unify____clique_recursion_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8372 "report.c"
    return report__succeeded;
#line 8374 "report.c"
  }
#line 8376 "report.c"
}

#line 8379 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 8382 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8384 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8386 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8388 "report.c"
{
#line 8390 "report.c"
  {
#line 8392 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8395 "report.c"
    {
#line 8397 "report.c"
      report____Compare____clique_recursion_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8400 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8402 "report.c"
  }
#line 8404 "report.c"
}

#line 8407 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 8410 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8412 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8414 "report.c"
{
#line 8416 "report.c"
  {
#line 8418 "report.c"
    MR_bool report__succeeded;

#line 8421 "report.c"
    {
#line 8423 "report.c"
      report__succeeded = report____Unify____clique_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8426 "report.c"
    return report__succeeded;
#line 8428 "report.c"
  }
#line 8430 "report.c"
}

#line 8433 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 8436 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8438 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8440 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8442 "report.c"
{
#line 8444 "report.c"
  {
#line 8446 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8449 "report.c"
    {
#line 8451 "report.c"
      report____Compare____clique_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8454 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8456 "report.c"
  }
#line 8458 "report.c"
}

#line 8461 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 8464 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8466 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8468 "report.c"
{
#line 8470 "report.c"
  {
#line 8472 "report.c"
    MR_bool report__succeeded;

#line 8475 "report.c"
    {
#line 8477 "report.c"
      report__succeeded = report____Unify____data_struct_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8480 "report.c"
    return report__succeeded;
#line 8482 "report.c"
  }
#line 8484 "report.c"
}

#line 8487 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 8490 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8492 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8494 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8496 "report.c"
{
#line 8498 "report.c"
  {
#line 8500 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8503 "report.c"
    {
#line 8505 "report.c"
      report____Compare____data_struct_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8508 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8510 "report.c"
  }
#line 8512 "report.c"
}

#line 8515 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 8518 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8520 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8522 "report.c"
{
#line 8524 "report.c"
  {
#line 8526 "report.c"
    MR_bool report__succeeded;

#line 8529 "report.c"
    {
#line 8531 "report.c"
      report__succeeded = report____Unify____deep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8534 "report.c"
    return report__succeeded;
#line 8536 "report.c"
  }
#line 8538 "report.c"
}

#line 8541 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 8544 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8546 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8548 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8550 "report.c"
{
#line 8552 "report.c"
  {
#line 8554 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8557 "report.c"
    {
#line 8559 "report.c"
      report____Compare____deep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8562 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8564 "report.c"
  }
#line 8566 "report.c"
}

#line 8569 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 8572 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8574 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8576 "report.c"
{
#line 8578 "report.c"
  {
#line 8580 "report.c"
    MR_bool report__succeeded;

#line 8583 "report.c"
    {
#line 8585 "report.c"
      report__succeeded = report____Unify____field_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8588 "report.c"
    return report__succeeded;
#line 8590 "report.c"
  }
#line 8592 "report.c"
}

#line 8595 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 8598 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8600 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8602 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8604 "report.c"
{
#line 8606 "report.c"
  {
#line 8608 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8611 "report.c"
    {
#line 8613 "report.c"
      report____Compare____field_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8616 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8618 "report.c"
  }
#line 8620 "report.c"
}

#line 8623 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 8626 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8628 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8630 "report.c"
{
#line 8632 "report.c"
  {
#line 8634 "report.c"
    MR_bool report__succeeded;

#line 8637 "report.c"
    {
#line 8639 "report.c"
      report__succeeded = report____Unify____getter_or_setter_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8642 "report.c"
    return report__succeeded;
#line 8644 "report.c"
  }
#line 8646 "report.c"
}

#line 8649 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 8652 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8654 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8656 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8658 "report.c"
{
#line 8660 "report.c"
  {
#line 8662 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8665 "report.c"
    {
#line 8667 "report.c"
      report____Compare____getter_or_setter_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8670 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8672 "report.c"
  }
#line 8674 "report.c"
}

#line 8677 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 8680 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8682 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8684 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8686 "report.c"
{
#line 8688 "report.c"
  {
#line 8690 "report.c"
    MR_bool report__succeeded;

#line 8693 "report.c"
    {
#line 8695 "report.c"
      report__succeeded = report____Unify____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8698 "report.c"
    return report__succeeded;
#line 8700 "report.c"
  }
#line 8702 "report.c"
}

#line 8705 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 8708 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8710 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 8712 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8714 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8716 "report.c"
{
#line 8718 "report.c"
  {
#line 8720 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8723 "report.c"
    {
#line 8725 "report.c"
      report____Compare____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8728 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8730 "report.c"
  }
#line 8732 "report.c"
}

#line 8735 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 8738 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8740 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8742 "report.c"
{
#line 8744 "report.c"
  {
#line 8746 "report.c"
    MR_bool report__succeeded;

#line 8749 "report.c"
    {
#line 8751 "report.c"
      report__succeeded = report____Unify____gs_ds_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8754 "report.c"
    return report__succeeded;
#line 8756 "report.c"
  }
#line 8758 "report.c"
}

#line 8761 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 8764 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8766 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8768 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8770 "report.c"
{
#line 8772 "report.c"
  {
#line 8774 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8777 "report.c"
    {
#line 8779 "report.c"
      report____Compare____gs_ds_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8782 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8784 "report.c"
  }
#line 8786 "report.c"
}

#line 8789 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 8792 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8794 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8796 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8798 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8800 "report.c"
{
#line 8802 "report.c"
  {
#line 8804 "report.c"
    MR_bool report__succeeded;

#line 8807 "report.c"
    {
#line 8809 "report.c"
      report__succeeded = report____Unify____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8812 "report.c"
    return report__succeeded;
#line 8814 "report.c"
  }
#line 8816 "report.c"
}

#line 8819 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 8822 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8824 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8826 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 8828 "report.c"
  MR_Box report__wrapper_arg_4,
#line 8830 "report.c"
  MR_Box report__wrapper_arg_5)
#line 8832 "report.c"
{
#line 8834 "report.c"
  {
#line 8836 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8839 "report.c"
    {
#line 8841 "report.c"
      report____Compare____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_4), ((MR_Word) report__wrapper_arg_5));
    }
#line 8844 "report.c"
    *report__wrapper_arg_3 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8846 "report.c"
  }
#line 8848 "report.c"
}

#line 8851 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 8854 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8856 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8858 "report.c"
{
#line 8860 "report.c"
  {
#line 8862 "report.c"
    MR_bool report__succeeded;

#line 8865 "report.c"
    {
#line 8867 "report.c"
      report__succeeded = report____Unify____gs_field_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8870 "report.c"
    return report__succeeded;
#line 8872 "report.c"
  }
#line 8874 "report.c"
}

#line 8877 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 8880 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8882 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8884 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8886 "report.c"
{
#line 8888 "report.c"
  {
#line 8890 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8893 "report.c"
    {
#line 8895 "report.c"
      report____Compare____gs_field_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8898 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8900 "report.c"
  }
#line 8902 "report.c"
}

#line 8905 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 8908 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8910 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8912 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8914 "report.c"
{
#line 8916 "report.c"
  {
#line 8918 "report.c"
    MR_bool report__succeeded;

#line 8921 "report.c"
    {
#line 8923 "report.c"
      report__succeeded = report____Unify____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8926 "report.c"
    return report__succeeded;
#line 8928 "report.c"
  }
#line 8930 "report.c"
}

#line 8933 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 8936 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8938 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 8940 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8942 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8944 "report.c"
{
#line 8946 "report.c"
  {
#line 8948 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8951 "report.c"
    {
#line 8953 "report.c"
      report____Compare____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8956 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8958 "report.c"
  }
#line 8960 "report.c"
}

#line 8963 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 8966 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8968 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8970 "report.c"
{
#line 8972 "report.c"
  {
#line 8974 "report.c"
    MR_bool report__succeeded;

#line 8977 "report.c"
    {
#line 8979 "report.c"
      report__succeeded = report____Unify____gs_field_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8982 "report.c"
    return report__succeeded;
#line 8984 "report.c"
  }
#line 8986 "report.c"
}

#line 8989 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 8992 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8994 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8996 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8998 "report.c"
{
#line 9000 "report.c"
  {
#line 9002 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9005 "report.c"
    {
#line 9007 "report.c"
      report____Compare____gs_field_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9010 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9012 "report.c"
  }
#line 9014 "report.c"
}

#line 9017 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 9020 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9022 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9024 "report.c"
{
#line 9026 "report.c"
  {
#line 9028 "report.c"
    MR_bool report__succeeded;

#line 9031 "report.c"
    {
#line 9033 "report.c"
      report__succeeded = report____Unify____inheritable_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9036 "report.c"
    return report__succeeded;
#line 9038 "report.c"
  }
#line 9040 "report.c"
}

#line 9043 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 9046 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9048 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9050 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9052 "report.c"
{
#line 9054 "report.c"
  {
#line 9056 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9059 "report.c"
    {
#line 9061 "report.c"
      report____Compare____inheritable_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9064 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9066 "report.c"
  }
#line 9068 "report.c"
}

#line 9071 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 9074 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9076 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9078 "report.c"
{
#line 9080 "report.c"
  {
#line 9082 "report.c"
    MR_bool report__succeeded;

#line 9085 "report.c"
    {
#line 9087 "report.c"
      report__succeeded = report____Unify____maybe_have_module_rep_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9090 "report.c"
    return report__succeeded;
#line 9092 "report.c"
  }
#line 9094 "report.c"
}

#line 9097 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 9100 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9102 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9104 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9106 "report.c"
{
#line 9108 "report.c"
  {
#line 9110 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9113 "report.c"
    {
#line 9115 "report.c"
      report____Compare____maybe_have_module_rep_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9118 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9120 "report.c"
  }
#line 9122 "report.c"
}

#line 9125 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 9128 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9130 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9132 "report.c"
{
#line 9134 "report.c"
  {
#line 9136 "report.c"
    MR_bool report__succeeded;

#line 9139 "report.c"
    {
#line 9141 "report.c"
      report__succeeded = report____Unify____menu_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9144 "report.c"
    return report__succeeded;
#line 9146 "report.c"
  }
#line 9148 "report.c"
}

#line 9151 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 9154 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9156 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9158 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9160 "report.c"
{
#line 9162 "report.c"
  {
#line 9164 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9167 "report.c"
    {
#line 9169 "report.c"
      report____Compare____menu_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9172 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9174 "report.c"
  }
#line 9176 "report.c"
}

#line 9179 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 9182 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9184 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9186 "report.c"
{
#line 9188 "report.c"
  {
#line 9190 "report.c"
    MR_bool report__succeeded;

#line 9193 "report.c"
    {
#line 9195 "report.c"
      report__succeeded = report____Unify____message_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9198 "report.c"
    return report__succeeded;
#line 9200 "report.c"
  }
#line 9202 "report.c"
}

#line 9205 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 9208 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9210 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9212 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9214 "report.c"
{
#line 9216 "report.c"
  {
#line 9218 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9221 "report.c"
    {
#line 9223 "report.c"
      report____Compare____message_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9226 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9228 "report.c"
  }
#line 9230 "report.c"
}

#line 9233 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 9236 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9238 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9240 "report.c"
{
#line 9242 "report.c"
  {
#line 9244 "report.c"
    MR_bool report__succeeded;

#line 9247 "report.c"
    {
#line 9249 "report.c"
      report__succeeded = report____Unify____module_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9252 "report.c"
    return report__succeeded;
#line 9254 "report.c"
  }
#line 9256 "report.c"
}

#line 9259 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 9262 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9264 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9266 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9268 "report.c"
{
#line 9270 "report.c"
  {
#line 9272 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9275 "report.c"
    {
#line 9277 "report.c"
      report____Compare____module_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9280 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9282 "report.c"
  }
#line 9284 "report.c"
}

#line 9287 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 9290 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9292 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9294 "report.c"
{
#line 9296 "report.c"
  {
#line 9298 "report.c"
    MR_bool report__succeeded;

#line 9301 "report.c"
    {
#line 9303 "report.c"
      report__succeeded = report____Unify____module_getter_setters_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9306 "report.c"
    return report__succeeded;
#line 9308 "report.c"
  }
#line 9310 "report.c"
}

#line 9313 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 9316 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9318 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9320 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9322 "report.c"
{
#line 9324 "report.c"
  {
#line 9326 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9329 "report.c"
    {
#line 9331 "report.c"
      report____Compare____module_getter_setters_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9334 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9336 "report.c"
  }
#line 9338 "report.c"
}

#line 9341 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 9344 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9346 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9348 "report.c"
{
#line 9350 "report.c"
  {
#line 9352 "report.c"
    MR_bool report__succeeded;

#line 9355 "report.c"
    {
#line 9357 "report.c"
      report__succeeded = report____Unify____module_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9360 "report.c"
    return report__succeeded;
#line 9362 "report.c"
  }
#line 9364 "report.c"
}

#line 9367 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 9370 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9372 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9374 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9376 "report.c"
{
#line 9378 "report.c"
  {
#line 9380 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9383 "report.c"
    {
#line 9385 "report.c"
      report____Compare____module_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9388 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9390 "report.c"
  }
#line 9392 "report.c"
}

#line 9395 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 9398 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9400 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9402 "report.c"
{
#line 9404 "report.c"
  {
#line 9406 "report.c"
    MR_bool report__succeeded;

#line 9409 "report.c"
    {
#line 9411 "report.c"
      report__succeeded = report____Unify____module_rep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9414 "report.c"
    return report__succeeded;
#line 9416 "report.c"
  }
#line 9418 "report.c"
}

#line 9421 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 9424 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9426 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9428 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9430 "report.c"
{
#line 9432 "report.c"
  {
#line 9434 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9437 "report.c"
    {
#line 9439 "report.c"
      report____Compare____module_rep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9442 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9444 "report.c"
  }
#line 9446 "report.c"
}

#line 9449 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 9452 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9454 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9456 "report.c"
{
#line 9458 "report.c"
  {
#line 9460 "report.c"
    MR_bool report__succeeded;

#line 9463 "report.c"
    {
#line 9465 "report.c"
      report__succeeded = report____Unify____module_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9468 "report.c"
    return report__succeeded;
#line 9470 "report.c"
  }
#line 9472 "report.c"
}

#line 9475 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 9478 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9480 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9482 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9484 "report.c"
{
#line 9486 "report.c"
  {
#line 9488 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9491 "report.c"
    {
#line 9493 "report.c"
      report____Compare____module_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9496 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9498 "report.c"
  }
#line 9500 "report.c"
}

#line 9503 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 9506 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9508 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9510 "report.c"
{
#line 9512 "report.c"
  {
#line 9514 "report.c"
    MR_bool report__succeeded;

#line 9517 "report.c"
    {
#line 9519 "report.c"
      report__succeeded = report____Unify____normal_callee_id_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9522 "report.c"
    return report__succeeded;
#line 9524 "report.c"
  }
#line 9526 "report.c"
}

#line 9529 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 9532 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9534 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9536 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9538 "report.c"
{
#line 9540 "report.c"
  {
#line 9542 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9545 "report.c"
    {
#line 9547 "report.c"
      report____Compare____normal_callee_id_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9550 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9552 "report.c"
  }
#line 9554 "report.c"
}

#line 9557 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 9560 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9562 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9564 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9566 "report.c"
{
#line 9568 "report.c"
  {
#line 9570 "report.c"
    MR_bool report__succeeded;

#line 9573 "report.c"
    {
#line 9575 "report.c"
      report__succeeded = report____Unify____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9578 "report.c"
    return report__succeeded;
#line 9580 "report.c"
  }
#line 9582 "report.c"
}

#line 9585 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 9588 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9590 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9592 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9594 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9596 "report.c"
{
#line 9598 "report.c"
  {
#line 9600 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9603 "report.c"
    {
#line 9605 "report.c"
      report____Compare____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9608 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9610 "report.c"
  }
#line 9612 "report.c"
}

#line 9615 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 9618 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9620 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9622 "report.c"
{
#line 9624 "report.c"
  {
#line 9626 "report.c"
    MR_bool report__succeeded;

#line 9629 "report.c"
    {
#line 9631 "report.c"
      report__succeeded = report____Unify____proc_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9634 "report.c"
    return report__succeeded;
#line 9636 "report.c"
  }
#line 9638 "report.c"
}

#line 9641 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 9644 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9646 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9648 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9650 "report.c"
{
#line 9652 "report.c"
  {
#line 9654 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9657 "report.c"
    {
#line 9659 "report.c"
      report____Compare____proc_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9662 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9664 "report.c"
  }
#line 9666 "report.c"
}

#line 9669 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 9672 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9674 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9676 "report.c"
{
#line 9678 "report.c"
  {
#line 9680 "report.c"
    MR_bool report__succeeded;

#line 9683 "report.c"
    {
#line 9685 "report.c"
      report__succeeded = report____Unify____proc_callers_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9688 "report.c"
    return report__succeeded;
#line 9690 "report.c"
  }
#line 9692 "report.c"
}

#line 9695 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 9698 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9700 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9702 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9704 "report.c"
{
#line 9706 "report.c"
  {
#line 9708 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9711 "report.c"
    {
#line 9713 "report.c"
      report____Compare____proc_callers_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9716 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9718 "report.c"
  }
#line 9720 "report.c"
}

#line 9723 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 9726 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9728 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9730 "report.c"
{
#line 9732 "report.c"
  {
#line 9734 "report.c"
    MR_bool report__succeeded;

#line 9737 "report.c"
    {
#line 9739 "report.c"
      report__succeeded = report____Unify____proc_callers_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9742 "report.c"
    return report__succeeded;
#line 9744 "report.c"
  }
#line 9746 "report.c"
}

#line 9749 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 9752 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9754 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9756 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9758 "report.c"
{
#line 9760 "report.c"
  {
#line 9762 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9765 "report.c"
    {
#line 9767 "report.c"
      report____Compare____proc_callers_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9770 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9772 "report.c"
  }
#line 9774 "report.c"
}

#line 9777 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 9780 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9782 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9784 "report.c"
{
#line 9786 "report.c"
  {
#line 9788 "report.c"
    MR_bool report__succeeded;

#line 9791 "report.c"
    {
#line 9793 "report.c"
      report__succeeded = report____Unify____proc_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9796 "report.c"
    return report__succeeded;
#line 9798 "report.c"
  }
#line 9800 "report.c"
}

#line 9803 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 9806 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9808 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9810 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9812 "report.c"
{
#line 9814 "report.c"
  {
#line 9816 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9819 "report.c"
    {
#line 9821 "report.c"
      report____Compare____proc_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9824 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9826 "report.c"
  }
#line 9828 "report.c"
}

#line 9831 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 9834 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9836 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9838 "report.c"
{
#line 9840 "report.c"
  {
#line 9842 "report.c"
    MR_bool report__succeeded;

#line 9845 "report.c"
    {
#line 9847 "report.c"
      report__succeeded = report____Unify____proc_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9850 "report.c"
    return report__succeeded;
#line 9852 "report.c"
  }
#line 9854 "report.c"
}

#line 9857 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 9860 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9862 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9864 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9866 "report.c"
{
#line 9868 "report.c"
  {
#line 9870 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9873 "report.c"
    {
#line 9875 "report.c"
      report____Compare____proc_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9878 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9880 "report.c"
  }
#line 9882 "report.c"
}

#line 9885 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 9888 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9890 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9892 "report.c"
{
#line 9894 "report.c"
  {
#line 9896 "report.c"
    MR_bool report__succeeded;

#line 9899 "report.c"
    {
#line 9901 "report.c"
      report__succeeded = report____Unify____proc_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9904 "report.c"
    return report__succeeded;
#line 9906 "report.c"
  }
#line 9908 "report.c"
}

#line 9911 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 9914 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9916 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9918 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9920 "report.c"
{
#line 9922 "report.c"
  {
#line 9924 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9927 "report.c"
    {
#line 9929 "report.c"
      report____Compare____proc_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9932 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9934 "report.c"
  }
#line 9936 "report.c"
}

#line 9939 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 9942 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9944 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9946 "report.c"
{
#line 9948 "report.c"
  {
#line 9950 "report.c"
    MR_bool report__succeeded;

#line 9953 "report.c"
    {
#line 9955 "report.c"
      report__succeeded = report____Unify____proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9958 "report.c"
    return report__succeeded;
#line 9960 "report.c"
  }
#line 9962 "report.c"
}

#line 9965 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 9968 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9970 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9972 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9974 "report.c"
{
#line 9976 "report.c"
  {
#line 9978 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9981 "report.c"
    {
#line 9983 "report.c"
      report____Compare____proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9986 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9988 "report.c"
  }
#line 9990 "report.c"
}

#line 9993 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 9996 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9998 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10000 "report.c"
{
#line 10002 "report.c"
  {
#line 10004 "report.c"
    MR_bool report__succeeded;

#line 10007 "report.c"
    {
#line 10009 "report.c"
      report__succeeded = report____Unify____proc_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10012 "report.c"
    return report__succeeded;
#line 10014 "report.c"
  }
#line 10016 "report.c"
}

#line 10019 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 10022 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10024 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10026 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10028 "report.c"
{
#line 10030 "report.c"
  {
#line 10032 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10035 "report.c"
    {
#line 10037 "report.c"
      report____Compare____proc_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10040 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10042 "report.c"
  }
#line 10044 "report.c"
}

#line 10047 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 10050 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10052 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10054 "report.c"
{
#line 10056 "report.c"
  {
#line 10058 "report.c"
    MR_bool report__succeeded;

#line 10061 "report.c"
    {
#line 10063 "report.c"
      report__succeeded = report____Unify____procrep_coverage_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10066 "report.c"
    return report__succeeded;
#line 10068 "report.c"
  }
#line 10070 "report.c"
}

#line 10073 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 10076 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10078 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10080 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10082 "report.c"
{
#line 10084 "report.c"
  {
#line 10086 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10089 "report.c"
    {
#line 10091 "report.c"
      report____Compare____procrep_coverage_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10094 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10096 "report.c"
  }
#line 10098 "report.c"
}

#line 10101 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 10104 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10106 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10108 "report.c"
{
#line 10110 "report.c"
  {
#line 10112 "report.c"
    MR_bool report__succeeded;

#line 10115 "report.c"
    {
#line 10117 "report.c"
      report__succeeded = report____Unify____program_modules_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10120 "report.c"
    return report__succeeded;
#line 10122 "report.c"
  }
#line 10124 "report.c"
}

#line 10127 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 10130 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10132 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10134 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10136 "report.c"
{
#line 10138 "report.c"
  {
#line 10140 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10143 "report.c"
    {
#line 10145 "report.c"
      report____Compare____program_modules_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10148 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10150 "report.c"
  }
#line 10152 "report.c"
}

#line 10155 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 10158 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10160 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10162 "report.c"
{
#line 10164 "report.c"
  {
#line 10166 "report.c"
    MR_bool report__succeeded;

#line 10169 "report.c"
    {
#line 10171 "report.c"
      report__succeeded = report____Unify____recursion_level_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10174 "report.c"
    return report__succeeded;
#line 10176 "report.c"
  }
#line 10178 "report.c"
}

#line 10181 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 10184 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10186 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10188 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10190 "report.c"
{
#line 10192 "report.c"
  {
#line 10194 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10197 "report.c"
    {
#line 10199 "report.c"
      report____Compare____recursion_level_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10202 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10204 "report.c"
  }
#line 10206 "report.c"
}

#line 10209 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 10212 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10214 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10216 "report.c"
{
#line 10218 "report.c"
  {
#line 10220 "report.c"
    MR_bool report__succeeded;

#line 10223 "report.c"
    {
#line 10225 "report.c"
      report__succeeded = report____Unify____recursion_type_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10228 "report.c"
    return report__succeeded;
#line 10230 "report.c"
  }
#line 10232 "report.c"
}

#line 10235 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 10238 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10240 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10242 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10244 "report.c"
{
#line 10246 "report.c"
  {
#line 10248 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10251 "report.c"
    {
#line 10253 "report.c"
      report____Compare____recursion_type_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10256 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10258 "report.c"
  }
#line 10260 "report.c"
}

#line 10263 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 10266 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10268 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10270 "report.c"
{
#line 10272 "report.c"
  {
#line 10274 "report.c"
    MR_bool report__succeeded;

#line 10277 "report.c"
    {
#line 10279 "report.c"
      report__succeeded = report____Unify____recursion_type_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10282 "report.c"
    return report__succeeded;
#line 10284 "report.c"
  }
#line 10286 "report.c"
}

#line 10289 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 10292 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10294 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10296 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10298 "report.c"
{
#line 10300 "report.c"
  {
#line 10302 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10305 "report.c"
    {
#line 10307 "report.c"
      report____Compare____recursion_type_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10310 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10312 "report.c"
  }
#line 10314 "report.c"
}

#line 10317 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 10320 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10322 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10324 "report.c"
{
#line 10326 "report.c"
  {
#line 10328 "report.c"
    MR_bool report__succeeded;

#line 10331 "report.c"
    {
#line 10333 "report.c"
      report__succeeded = report____Unify____recursion_type_histogram_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10336 "report.c"
    return report__succeeded;
#line 10338 "report.c"
  }
#line 10340 "report.c"
}

#line 10343 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 10346 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10348 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10350 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10352 "report.c"
{
#line 10354 "report.c"
  {
#line 10356 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10359 "report.c"
    {
#line 10361 "report.c"
      report____Compare____recursion_type_histogram_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10364 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10366 "report.c"
  }
#line 10368 "report.c"
}

#line 10371 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 10374 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10376 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10378 "report.c"
{
#line 10380 "report.c"
  {
#line 10382 "report.c"
    MR_bool report__succeeded;

#line 10385 "report.c"
    {
#line 10387 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10390 "report.c"
    return report__succeeded;
#line 10392 "report.c"
  }
#line 10394 "report.c"
}

#line 10397 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 10400 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10402 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10404 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10406 "report.c"
{
#line 10408 "report.c"
  {
#line 10410 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10413 "report.c"
    {
#line 10415 "report.c"
      report____Compare____recursion_type_proc_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10418 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10420 "report.c"
  }
#line 10422 "report.c"
}

#line 10425 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 10428 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10430 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10432 "report.c"
{
#line 10434 "report.c"
  {
#line 10436 "report.c"
    MR_bool report__succeeded;

#line 10439 "report.c"
    {
#line 10441 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10444 "report.c"
    return report__succeeded;
#line 10446 "report.c"
  }
#line 10448 "report.c"
}

#line 10451 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 10454 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10456 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10458 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10460 "report.c"
{
#line 10462 "report.c"
  {
#line 10464 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10467 "report.c"
    {
#line 10469 "report.c"
      report____Compare____recursion_type_proc_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10472 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10474 "report.c"
  }
#line 10476 "report.c"
}

#line 10479 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 10482 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10484 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10486 "report.c"
{
#line 10488 "report.c"
  {
#line 10490 "report.c"
    MR_bool report__succeeded;

#line 10493 "report.c"
    {
#line 10495 "report.c"
      report__succeeded = report____Unify____recursion_type_simple_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10498 "report.c"
    return report__succeeded;
#line 10500 "report.c"
  }
#line 10502 "report.c"
}

#line 10505 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 10508 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10510 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10512 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10514 "report.c"
{
#line 10516 "report.c"
  {
#line 10518 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10521 "report.c"
    {
#line 10523 "report.c"
      report____Compare____recursion_type_simple_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10526 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10528 "report.c"
  }
#line 10530 "report.c"
}

#line 10533 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 10536 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10538 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10540 "report.c"
{
#line 10542 "report.c"
  {
#line 10544 "report.c"
    MR_bool report__succeeded;

#line 10547 "report.c"
    {
#line 10549 "report.c"
      report__succeeded = report____Unify____recursion_types_frequency_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10552 "report.c"
    return report__succeeded;
#line 10554 "report.c"
  }
#line 10556 "report.c"
}

#line 10559 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 10562 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10564 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10566 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10568 "report.c"
{
#line 10570 "report.c"
  {
#line 10572 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10575 "report.c"
    {
#line 10577 "report.c"
      report____Compare____recursion_types_frequency_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10580 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10582 "report.c"
  }
#line 10584 "report.c"
}

#line 10587 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 10590 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10592 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10594 "report.c"
{
#line 10596 "report.c"
  {
#line 10598 "report.c"
    MR_bool report__succeeded;

#line 10601 "report.c"
    {
#line 10603 "report.c"
      report__succeeded = report____Unify____report_ordering_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10606 "report.c"
    return report__succeeded;
#line 10608 "report.c"
  }
#line 10610 "report.c"
}

#line 10613 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 10616 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10618 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10620 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10622 "report.c"
{
#line 10624 "report.c"
  {
#line 10626 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10629 "report.c"
    {
#line 10631 "report.c"
      report____Compare____report_ordering_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10634 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10636 "report.c"
  }
#line 10638 "report.c"
}

#line 10641 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 10644 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10646 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10648 "report.c"
{
#line 10650 "report.c"
  {
#line 10652 "report.c"
    MR_bool report__succeeded;

#line 10655 "report.c"
    {
#line 10657 "report.c"
      report__succeeded = report____Unify____top_procs_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10660 "report.c"
    return report__succeeded;
#line 10662 "report.c"
  }
#line 10664 "report.c"
}

#line 10667 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 10670 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10672 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10674 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10676 "report.c"
{
#line 10678 "report.c"
  {
#line 10680 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10683 "report.c"
    {
#line 10685 "report.c"
      report____Compare____top_procs_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10688 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10690 "report.c"
  }
#line 10692 "report.c"
}

#line 10695 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 10698 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10700 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10702 "report.c"
{
#line 10704 "report.c"
  {
#line 10706 "report.c"
    MR_bool report__succeeded;

#line 10709 "report.c"
    {
#line 10711 "report.c"
      report__succeeded = report____Unify____var_use_and_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10714 "report.c"
    return report__succeeded;
#line 10716 "report.c"
  }
#line 10718 "report.c"
}

#line 10721 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 10724 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10726 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10728 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10730 "report.c"
{
#line 10732 "report.c"
  {
#line 10734 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10737 "report.c"
    {
#line 10739 "report.c"
      report____Compare____var_use_and_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10742 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10744 "report.c"
  }
#line 10746 "report.c"
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
#line 10773 "report.c"
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
#line 10795 "report.c"
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

#line 10856 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 549 "report.m"
        if (report__succeeded)
#line 10860 "report.c"
          {
#line 10862 "report.c"
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
#line 10898 "report.c"
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
#line 10920 "report.c"
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

#line 10987 "report.c"
        {
#line 10989 "report.c"
          report__succeeded = report____Unify____report_ordering_0_0(report__V_3_3, report__V_5_5);
        }
#line 381 "report.m"
        if (report__succeeded)
#line 381 "report.m"
          {
#line 10996 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[5];
#line 10998 "report.c"
            {
#line 11000 "report.c"
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
#line 11038 "report.c"
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
#line 11068 "report.c"
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
#line 11092 "report.c"
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
#line 11116 "report.c"
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

#line 11198 "report.c"
        {
#line 11200 "report.c"
          report__succeeded = query____Unify____display_limit_0_0(report__V_3_3, report__V_7_7);
        }
#line 617 "report.m"
        if (report__succeeded)
#line 617 "report.m"
          {
#line 11207 "report.c"
            report__succeeded = (report__V_4_4 == report__V_8_8);
#line 617 "report.m"
            if (report__succeeded)
#line 617 "report.m"
              {
#line 11213 "report.c"
                report__succeeded = (report__V_5_5 == report__V_9_9);
#line 617 "report.m"
                if (report__succeeded)
#line 11217 "report.c"
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
#line 11256 "report.c"
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

#line 11314 "report.c"
        {
#line 11316 "report.c"
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
#line 11352 "report.c"
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
#line 11384 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 280 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11390 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 11394 "report.c"
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
#line 11426 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 280 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11432 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 11436 "report.c"
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
#line 11468 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 280 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11474 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
      else
#line 11478 "report.c"
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
#line 11510 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
      else
#line 280 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11516 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
      else
#line 11520 "report.c"
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
#line 11533 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11539 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11545 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11551 "report.c"
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
#line 11575 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 11579 "report.c"
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
#line 11594 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11600 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11606 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11612 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
        else
#line 280 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11618 "report.c"
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
#line 11640 "report.c"
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
#line 11653 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11659 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11665 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
        else
#line 280 "report.m"
        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11671 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
        else
#line 280 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11677 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
        else
#line 280 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11683 "report.c"
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
#line 11811 "report.c"
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
#line 11836 "report.c"
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
#line 11861 "report.c"
            report__TypeInfo_19_19 = (MR_Word) &report_scalar_common_1[37];
#line 11863 "report.c"
            {
#line 11865 "report.c"
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
#line 11965 "report.c"
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
#line 11991 "report.c"
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
#line 12011 "report.c"
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

#line 12084 "report.c"
        report__succeeded = (report__V_3_3 == report__V_6_6);
#line 306 "report.m"
        if (report__succeeded)
#line 306 "report.m"
          {
#line 12090 "report.c"
            {
#line 12092 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_7_7);
            }
#line 306 "report.m"
            if (report__succeeded)
#line 306 "report.m"
              {
#line 12099 "report.c"
                report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 12101 "report.c"
                {
#line 12103 "report.c"
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
#line 12205 "report.c"
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
#line 12235 "report.c"
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
#line 12255 "report.c"
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
#line 12275 "report.c"
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

#line 12356 "report.c"
        report__succeeded = (report__V_3_3 == report__V_7_7);
#line 295 "report.m"
        if (report__succeeded)
#line 295 "report.m"
          {
#line 12362 "report.c"
            {
#line 12364 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_8_8);
            }
#line 295 "report.m"
            if (report__succeeded)
#line 295 "report.m"
              {
#line 12371 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[36];
#line 12373 "report.c"
                {
#line 12375 "report.c"
                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_14_14, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_9_9)));
                }
#line 295 "report.m"
                if (report__succeeded)
#line 295 "report.m"
                  {
#line 12382 "report.c"
                    report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_2[21];
#line 12384 "report.c"
                    {
#line 12386 "report.c"
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
#line 12428 "report.c"
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
#line 12442 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
      else
#line 222 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12448 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
      else
#line 222 "report.m"
      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12454 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
      else
#line 222 "report.m"
      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12460 "report.c"
        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
      else
#line 12464 "report.c"
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
#line 12479 "report.c"
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
#line 12499 "report.c"
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
#line 12522 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12528 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12534 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
        else
#line 12538 "report.c"
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
#line 12561 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12567 "report.c"
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
#line 12593 "report.c"
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
#line 12613 "report.c"
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
#line 12633 "report.c"
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
#line 12653 "report.c"
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
#line 12686 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12692 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
        else
#line 12696 "report.c"
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
#line 12711 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12717 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12723 "report.c"
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
#line 12747 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 12751 "report.c"
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
#line 12766 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12772 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12778 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12784 "report.c"
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
#line 12806 "report.c"
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
#line 12819 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12825 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12831 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12837 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
        else
#line 222 "report.m"
        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12843 "report.c"
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
#line 12932 "report.c"
            {
#line 12934 "report.c"
              report__succeeded = report____Unify____recursion_level_report_0_0(report__V_15_15, report__V_17_17);
            }
#line 222 "report.m"
            if (report__succeeded)
#line 12939 "report.c"
              {
#line 12941 "report.c"
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
#line 12991 "report.c"
            {
#line 12993 "report.c"
              report__succeeded = report____Unify____recursion_level_report_0_0(report__V_5_5, report__V_10_10);
            }
#line 222 "report.m"
            if (report__succeeded)
#line 222 "report.m"
              {
#line 13000 "report.c"
                {
#line 13002 "report.c"
                  report__succeeded = report____Unify____recursion_level_report_0_0(report__V_6_6, report__V_11_11);
                }
#line 222 "report.m"
                if (report__succeeded)
#line 222 "report.m"
                  {
#line 13009 "report.c"
                    report__succeeded = (report__V_7_7 == report__V_12_12);
#line 222 "report.m"
                    if (report__succeeded)
#line 222 "report.m"
                      {
#line 13015 "report.c"
                        report__succeeded = (report__V_8_8 == report__V_13_13);
#line 222 "report.m"
                        if (report__succeeded)
#line 13019 "report.c"
                          {
#line 13021 "report.c"
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
#line 13055 "report.c"
            report__TypeInfo_27_27 = (MR_Word) &report_scalar_common_1[34];
#line 13057 "report.c"
            {
#line 13059 "report.c"
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
#line 13085 "report.c"
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
#line 13110 "report.c"
            report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[35];
#line 13112 "report.c"
            {
#line 13114 "report.c"
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
#line 13152 "report.c"
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
#line 13186 "report.c"
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
#line 13206 "report.c"
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
#line 13226 "report.c"
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
#line 13246 "report.c"
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

#line 13325 "report.c"
        report__succeeded = (report__V_3_3 == report__V_8_8);
#line 263 "report.m"
        if (report__succeeded)
#line 263 "report.m"
          {
#line 13331 "report.c"
            report__succeeded = (report__V_4_4 == report__V_9_9);
#line 263 "report.m"
            if (report__succeeded)
#line 263 "report.m"
              {
#line 13337 "report.c"
                report__succeeded = (report__V_5_5 == report__V_10_10);
#line 263 "report.m"
                if (report__succeeded)
#line 263 "report.m"
                  {
#line 13343 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_11_11);
#line 263 "report.m"
                    if (report__succeeded)
#line 13347 "report.c"
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
#line 13388 "report.c"
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

#line 13446 "report.c"
        {
#line 13448 "report.c"
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
#line 13484 "report.c"
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
#line 13514 "report.c"
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
#line 13534 "report.c"
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

#line 13613 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 441 "report.m"
        if (report__succeeded)
#line 441 "report.m"
          {
#line 13619 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[30];
#line 13621 "report.c"
            {
#line 13623 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 441 "report.m"
            if (report__succeeded)
#line 441 "report.m"
              {
#line 13630 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[31];
#line 13632 "report.c"
                {
#line 13634 "report.c"
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
#line 13674 "report.c"
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
#line 13724 "report.c"
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
#line 13744 "report.c"
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
#line 13764 "report.c"
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
#line 13784 "report.c"
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
#line 13804 "report.c"
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
#line 13824 "report.c"
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
#line 13844 "report.c"
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

#line 13945 "report.c"
        report__succeeded = (report__V_22_22 == report__V_23_23);
#line 492 "report.m"
        if (report__succeeded)
#line 492 "report.m"
          {
#line 13951 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_12_12) == 0);
#line 492 "report.m"
            if (report__succeeded)
#line 492 "report.m"
              {
#line 13957 "report.c"
                report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 492 "report.m"
                if (report__succeeded)
#line 492 "report.m"
                  {
#line 13963 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 492 "report.m"
                    if (report__succeeded)
#line 492 "report.m"
                      {
#line 13969 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 492 "report.m"
                        if (report__succeeded)
#line 492 "report.m"
                          {
#line 13975 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_16_16);
#line 492 "report.m"
                            if (report__succeeded)
#line 492 "report.m"
                              {
#line 13981 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_17_17);
#line 492 "report.m"
                                if (report__succeeded)
#line 13985 "report.c"
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
#line 14032 "report.c"
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
#line 14058 "report.c"
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
#line 14078 "report.c"
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

#line 14153 "report.c"
        {
#line 14155 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_callers_counts_0, report__V_3_3, report__V_6_6);
        }
#line 391 "report.m"
        if (report__succeeded)
#line 391 "report.m"
          {
#line 14162 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 14164 "report.c"
            {
#line 14166 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 391 "report.m"
            if (report__succeeded)
#line 391 "report.m"
              {
#line 14173 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[29];
#line 14175 "report.c"
                {
#line 14177 "report.c"
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
#line 14234 "report.c"
  {
#line 14236 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 14239 "report.c"
    return report__succeeded;
#line 14241 "report.c"
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
#line 14270 "report.c"
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
#line 14320 "report.c"
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
#line 14344 "report.c"
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
#line 14364 "report.c"
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
#line 14384 "report.c"
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
#line 14404 "report.c"
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
#line 14424 "report.c"
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
#line 14444 "report.c"
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

#line 14557 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 506 "report.m"
        if (report__succeeded)
#line 506 "report.m"
          {
#line 14563 "report.c"
            report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 506 "report.m"
            if (report__succeeded)
#line 506 "report.m"
              {
#line 14569 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 506 "report.m"
                if (report__succeeded)
#line 506 "report.m"
                  {
#line 14575 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_16_16) == 0);
#line 506 "report.m"
                    if (report__succeeded)
#line 506 "report.m"
                      {
#line 14581 "report.c"
                        report__V_25_25 = (MR_Integer) report__V_3_3;
#line 14583 "report.c"
                        report__V_26_26 = (MR_Integer) report__V_11_11;
#line 14585 "report.c"
                        report__succeeded = (report__V_25_25 == report__V_26_26);
#line 506 "report.m"
                        if (report__succeeded)
#line 506 "report.m"
                          {
#line 14591 "report.c"
                            report__V_27_27 = (MR_Integer) report__V_4_4;
#line 14593 "report.c"
                            report__V_28_28 = (MR_Integer) report__V_12_12;
#line 14595 "report.c"
                            report__succeeded = (report__V_27_27 == report__V_28_28);
#line 506 "report.m"
                            if (report__succeeded)
#line 506 "report.m"
                              {
#line 14601 "report.c"
                                report__TypeInfo_23_23 = (MR_Word) &report_scalar_common_1[25];
#line 14603 "report.c"
                                {
#line 14605 "report.c"
                                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_23_23, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_17_17)));
                                }
#line 506 "report.m"
                                if (report__succeeded)
#line 506 "report.m"
                                  {
#line 14612 "report.c"
                                    report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[27];
#line 14614 "report.c"
                                    {
#line 14616 "report.c"
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
#line 14666 "report.c"
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
#line 14708 "report.c"
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
#line 14728 "report.c"
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
#line 14748 "report.c"
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
#line 14768 "report.c"
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
#line 14788 "report.c"
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

#line 14877 "report.c"
        report__succeeded = (report__V_18_18 == report__V_19_19);
#line 650 "report.m"
        if (report__succeeded)
#line 650 "report.m"
          {
#line 14883 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_10_10) == 0);
#line 650 "report.m"
            if (report__succeeded)
#line 650 "report.m"
              {
#line 14889 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 650 "report.m"
                if (report__succeeded)
#line 650 "report.m"
                  {
#line 14895 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_12_12) == 0);
#line 650 "report.m"
                    if (report__succeeded)
#line 650 "report.m"
                      {
#line 14901 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_13_13) == 0);
#line 650 "report.m"
                        if (report__succeeded)
#line 14905 "report.c"
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
#line 14948 "report.c"
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
#line 14986 "report.c"
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
#line 15006 "report.c"
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
#line 15026 "report.c"
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
#line 15046 "report.c"
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
#line 15070 "report.c"
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

#line 15161 "report.c"
        {
#line 15163 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_9_9);
        }
#line 448 "report.m"
        if (report__succeeded)
#line 448 "report.m"
          {
#line 15170 "report.c"
            {
#line 15172 "report.c"
              report__succeeded = report____Unify____proc_callers_0_0(report__V_4_4, report__V_10_10);
            }
#line 448 "report.m"
            if (report__succeeded)
#line 448 "report.m"
              {
#line 15179 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 448 "report.m"
                if (report__succeeded)
#line 448 "report.m"
                  {
#line 15185 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_12_12);
#line 448 "report.m"
                    if (report__succeeded)
#line 448 "report.m"
                      {
#line 15191 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_13_13);
#line 448 "report.m"
                        if (report__succeeded)
#line 448 "report.m"
                          {
#line 15197 "report.c"
                            report__TypeInfo_17_17 = (MR_Word) &report_scalar_common_1[24];
#line 15199 "report.c"
                            {
#line 15201 "report.c"
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
#line 15247 "report.c"
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
#line 15278 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
        else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15284 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
        else
#line 15288 "report.c"
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
#line 15303 "report.c"
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
#line 15327 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
        else
#line 15331 "report.c"
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
#line 15346 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
        else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15352 "report.c"
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
#line 15374 "report.c"
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
#line 15387 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
        else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15393 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
        else
#line 474 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15399 "report.c"
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
#line 15469 "report.c"
            report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[23];
#line 15471 "report.c"
            {
#line 15473 "report.c"
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
#line 15501 "report.c"
            report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[9];
#line 15503 "report.c"
            {
#line 15505 "report.c"
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
#line 15533 "report.c"
            report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_1[22];
#line 15535 "report.c"
            {
#line 15537 "report.c"
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
#line 15563 "report.c"
            report__TypeInfo_16_16 = (MR_Word) &report_scalar_common_1[5];
#line 15565 "report.c"
            {
#line 15567 "report.c"
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
#line 15605 "report.c"
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
#line 15627 "report.c"
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

#line 15697 "report.c"
        {
#line 15699 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 637 "report.m"
        if (report__succeeded)
#line 15704 "report.c"
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
#line 15741 "report.c"
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
#line 15791 "report.c"
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
#line 15811 "report.c"
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
#line 15831 "report.c"
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
#line 15851 "report.c"
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
#line 15871 "report.c"
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
#line 15891 "report.c"
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
#line 15911 "report.c"
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
#line 15931 "report.c"
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

#line 16042 "report.c"
        {
#line 16044 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_T_23, report__V_3_3, report__V_12_12);
        }
#line 562 "report.m"
        if (report__succeeded)
#line 562 "report.m"
          {
#line 16051 "report.c"
            report__succeeded = (report__V_4_4 == report__V_13_13);
#line 562 "report.m"
            if (report__succeeded)
#line 562 "report.m"
              {
#line 16057 "report.c"
                report__succeeded = (report__V_5_5 == report__V_14_14);
#line 562 "report.m"
                if (report__succeeded)
#line 562 "report.m"
                  {
#line 16063 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_15_15);
#line 562 "report.m"
                    if (report__succeeded)
#line 562 "report.m"
                      {
#line 16069 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_16_16);
#line 562 "report.m"
                        if (report__succeeded)
#line 562 "report.m"
                          {
#line 16075 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_17_17);
#line 562 "report.m"
                            if (report__succeeded)
#line 562 "report.m"
                              {
#line 16081 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_18_18);
#line 562 "report.m"
                                if (report__succeeded)
#line 562 "report.m"
                                  {
#line 16087 "report.c"
                                    {
#line 16089 "report.c"
                                      report__succeeded = report____Unify____inheritable_perf_0_0(report__V_10_10, report__V_19_19);
                                    }
#line 562 "report.m"
                                    if (report__succeeded)
#line 562 "report.m"
                                      {
#line 16096 "report.c"
                                        report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[20];
#line 16098 "report.c"
                                        {
#line 16100 "report.c"
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
#line 16152 "report.c"
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
#line 16174 "report.c"
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

#line 16235 "report.c"
        {
#line 16237 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 435 "report.m"
        if (report__succeeded)
#line 16242 "report.c"
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
#line 16277 "report.c"
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
#line 16303 "report.c"
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
#line 16327 "report.c"
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

#line 16400 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_6_6) == 0);
#line 320 "report.m"
        if (report__succeeded)
#line 320 "report.m"
          {
#line 16406 "report.c"
            report__succeeded = (report__V_4_4 == report__V_7_7);
#line 320 "report.m"
            if (report__succeeded)
#line 320 "report.m"
              {
#line 16412 "report.c"
                report__TypeInfo_11_11 = (MR_Word) &report_scalar_common_1[19];
#line 16414 "report.c"
                {
#line 16416 "report.c"
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
#line 16456 "report.c"
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
#line 16478 "report.c"
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

#line 16539 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 374 "report.m"
        if (report__succeeded)
#line 16543 "report.c"
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
#line 16595 "report.c"
  {
#line 16597 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 16600 "report.c"
    return report__succeeded;
#line 16602 "report.c"
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
#line 16631 "report.c"
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
#line 16653 "report.c"
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

#line 16720 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 366 "report.m"
        if (report__succeeded)
#line 366 "report.m"
          {
#line 16726 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_2[20];
#line 16728 "report.c"
            {
#line 16730 "report.c"
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
#line 16768 "report.c"
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
#line 16790 "report.c"
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

#line 16860 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 627 "report.m"
        if (report__succeeded)
#line 16864 "report.c"
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
#line 16899 "report.c"
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

#line 16957 "report.c"
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
#line 16992 "report.c"
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
#line 17046 "report.c"
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
#line 17066 "report.c"
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
#line 17086 "report.c"
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
#line 17106 "report.c"
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
#line 17126 "report.c"
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
#line 17146 "report.c"
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
#line 17166 "report.c"
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
#line 17186 "report.c"
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
#line 17206 "report.c"
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

#line 17315 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_13_13) == 0);
#line 110 "report.m"
        if (report__succeeded)
#line 110 "report.m"
          {
#line 17321 "report.c"
            report__succeeded = (report__V_4_4 == report__V_14_14);
#line 110 "report.m"
            if (report__succeeded)
#line 110 "report.m"
              {
#line 17327 "report.c"
                report__succeeded = (report__V_5_5 == report__V_15_15);
#line 110 "report.m"
                if (report__succeeded)
#line 110 "report.m"
                  {
#line 17333 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_16_16);
#line 110 "report.m"
                    if (report__succeeded)
#line 110 "report.m"
                      {
#line 17339 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_17_17);
#line 110 "report.m"
                        if (report__succeeded)
#line 110 "report.m"
                          {
#line 17345 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_18_18);
#line 110 "report.m"
                            if (report__succeeded)
#line 110 "report.m"
                              {
#line 17351 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_19_19);
#line 110 "report.m"
                                if (report__succeeded)
#line 110 "report.m"
                                  {
#line 17357 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_20_20);
#line 110 "report.m"
                                    if (report__succeeded)
#line 110 "report.m"
                                      {
#line 17363 "report.c"
                                        report__succeeded = (report__V_11_11 == report__V_21_21);
#line 110 "report.m"
                                        if (report__succeeded)
#line 17367 "report.c"
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
#line 17435 "report.c"
  {
#line 17437 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 17440 "report.c"
    return report__succeeded;
#line 17442 "report.c"
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
#line 17471 "report.c"
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
#line 17537 "report.c"
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
#line 17557 "report.c"
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
#line 17577 "report.c"
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
#line 17597 "report.c"
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
#line 17617 "report.c"
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
#line 17637 "report.c"
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
#line 17657 "report.c"
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
#line 17677 "report.c"
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
#line 17697 "report.c"
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
#line 17717 "report.c"
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
#line 17737 "report.c"
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
#line 17757 "report.c"
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

#line 17884 "report.c"
        report__succeeded = (report__V_3_3 == report__V_16_16);
#line 579 "report.m"
        if (report__succeeded)
#line 579 "report.m"
          {
#line 17890 "report.c"
            {
#line 17892 "report.c"
              report__succeeded = measurement_units____Unify____time_0_0(report__V_4_4, report__V_17_17);
            }
#line 579 "report.m"
            if (report__succeeded)
#line 579 "report.m"
              {
#line 17899 "report.c"
                {
#line 17901 "report.c"
                  report__succeeded = measurement_units____Unify____percent_0_0(report__V_5_5, report__V_18_18);
                }
#line 579 "report.m"
                if (report__succeeded)
#line 579 "report.m"
                  {
#line 17908 "report.c"
                    {
#line 17910 "report.c"
                      report__succeeded = measurement_units____Unify____time_0_0(report__V_6_6, report__V_19_19);
                    }
#line 579 "report.m"
                    if (report__succeeded)
#line 579 "report.m"
                      {
#line 17917 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_20_20);
#line 579 "report.m"
                        if (report__succeeded)
#line 579 "report.m"
                          {
#line 17923 "report.c"
                            {
#line 17925 "report.c"
                              report__succeeded = measurement_units____Unify____percent_0_0(report__V_8_8, report__V_21_21);
                            }
#line 579 "report.m"
                            if (report__succeeded)
#line 579 "report.m"
                              {
#line 17932 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_22_22);
#line 579 "report.m"
                                if (report__succeeded)
#line 579 "report.m"
                                  {
#line 17938 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_23_23);
#line 579 "report.m"
                                    if (report__succeeded)
#line 579 "report.m"
                                      {
#line 17944 "report.c"
                                        {
#line 17946 "report.c"
                                          report__succeeded = measurement_units____Unify____percent_0_0(report__V_11_11, report__V_24_24);
                                        }
#line 579 "report.m"
                                        if (report__succeeded)
#line 579 "report.m"
                                          {
#line 17953 "report.c"
                                            report__succeeded = (report__V_12_12 == report__V_25_25);
#line 579 "report.m"
                                            if (report__succeeded)
#line 579 "report.m"
                                              {
#line 17959 "report.c"
                                                {
#line 17961 "report.c"
                                                  report__succeeded = measurement_units____Unify____memory_0_0(report__V_13_13, report__V_26_26);
                                                }
#line 579 "report.m"
                                                if (report__succeeded)
#line 579 "report.m"
                                                  {
#line 17968 "report.c"
                                                    {
#line 17970 "report.c"
                                                      report__succeeded = measurement_units____Unify____percent_0_0(report__V_14_14, report__V_27_27);
                                                    }
#line 579 "report.m"
                                                    if (report__succeeded)
#line 17975 "report.c"
                                                      {
#line 17977 "report.c"
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
#line 18167 "report.c"
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
#line 18200 "report.c"
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
#line 18220 "report.c"
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
#line 18245 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
        else
#line 18249 "report.c"
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
#line 18264 "report.c"
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
#line 18286 "report.c"
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
#line 18299 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
        else
#line 343 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 18305 "report.c"
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
#line 18389 "report.c"
            {
#line 18391 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_3_3, report__V_6_6);
            }
#line 343 "report.m"
            if (report__succeeded)
#line 343 "report.m"
              {
#line 18398 "report.c"
                {
#line 18400 "report.c"
                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_4_4, report__V_7_7);
                }
#line 343 "report.m"
                if (report__succeeded)
#line 18405 "report.c"
                  {
#line 18407 "report.c"
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
#line 18435 "report.c"
            {
#line 18437 "report.c"
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
#line 18461 "report.c"
            {
#line 18463 "report.c"
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

#line 18563 "report.c"
    {
#line 18565 "report.c"
      report__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18567 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18569 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18571 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 2) = ((MR_Box) (report__TypeInfo_for_T_6));
#line 18573 "report.c"
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

#line 18609 "report.c"
    {
#line 18611 "report.c"
      report__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18613 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18615 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18617 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 2) = ((MR_Box) (report__TypeInfo_for_T_5));
#line 18619 "report.c"
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
#line 18736 "report.c"
  {
#line 18738 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 18741 "report.c"
    return report__succeeded;
#line 18743 "report.c"
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
#line 18772 "report.c"
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

#line 18830 "report.c"
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
#line 18865 "report.c"
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
#line 18890 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "report.m"
        else
#line 43 "report.m"
          {
#line 43 "report.m"
            report__succeeded = (report__V_4_4 > report__V_5_5);
#line 43 "report.m"
            if (report__succeeded)
#line 18900 "report.c"
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
#line 18928 "report.c"
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
#line 18962 "report.c"
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
#line 19034 "report.c"
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
#line 19068 "report.c"
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
#line 19102 "report.c"
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
#line 19136 "report.c"
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
#line 19170 "report.c"
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
#line 19204 "report.c"
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
#line 19238 "report.c"
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
#line 19272 "report.c"
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
#line 19306 "report.c"
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
#line 19340 "report.c"
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
#line 19374 "report.c"
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
#line 19408 "report.c"
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
#line 19442 "report.c"
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
#line 19476 "report.c"
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
#line 19510 "report.c"
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
#line 19542 "report.c"
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
#line 19595 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 2;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 19601 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 1;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 19607 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 0;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 19613 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 16;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 19619 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 18;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 19625 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 15;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 19631 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 17;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 19637 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 3;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 19643 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 6;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 19649 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 7;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 19655 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 8;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 19661 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 10;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 19667 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 12;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 19673 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 14;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 19679 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 13;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 19685 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 11;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 19691 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 5;
#line 43 "report.m"
    else
#line 43 "report.m"
    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 19697 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 4;
#line 43 "report.m"
    else
#line 19701 "report.c"
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
#line 19753 "report.c"
            report__TypeInfo_46_46 = (MR_Word) &report_scalar_common_2[1];
#line 19755 "report.c"
            {
#line 19757 "report.c"
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
#line 19785 "report.c"
            report__TypeInfo_49_49 = (MR_Word) &report_scalar_common_2[0];
#line 19787 "report.c"
            {
#line 19789 "report.c"
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

#line 19838 "report.c"
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
#line 19867 "report.c"
            report__TypeInfo_43_43 = (MR_Word) &report_scalar_common_2[15];
#line 19869 "report.c"
            {
#line 19871 "report.c"
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
#line 19899 "report.c"
            report__TypeInfo_44_44 = (MR_Word) &report_scalar_common_2[17];
#line 19901 "report.c"
            {
#line 19903 "report.c"
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
#line 19931 "report.c"
            report__TypeInfo_45_45 = (MR_Word) &report_scalar_common_2[14];
#line 19933 "report.c"
            {
#line 19935 "report.c"
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
#line 19963 "report.c"
            report__TypeInfo_47_47 = (MR_Word) &report_scalar_common_2[16];
#line 19965 "report.c"
            {
#line 19967 "report.c"
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
#line 19995 "report.c"
            report__TypeInfo_48_48 = (MR_Word) &report_scalar_common_2[2];
#line 19997 "report.c"
            {
#line 19999 "report.c"
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
#line 20027 "report.c"
            report__TypeInfo_50_50 = (MR_Word) &report_scalar_common_2[5];
#line 20029 "report.c"
            {
#line 20031 "report.c"
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
#line 20059 "report.c"
            report__TypeInfo_51_51 = (MR_Word) &report_scalar_common_2[6];
#line 20061 "report.c"
            {
#line 20063 "report.c"
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
#line 20091 "report.c"
            report__TypeInfo_52_52 = (MR_Word) &report_scalar_common_2[7];
#line 20093 "report.c"
            {
#line 20095 "report.c"
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
#line 20123 "report.c"
            report__TypeInfo_53_53 = (MR_Word) &report_scalar_common_2[9];
#line 20125 "report.c"
            {
#line 20127 "report.c"
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
#line 20155 "report.c"
            report__TypeInfo_54_54 = (MR_Word) &report_scalar_common_2[11];
#line 20157 "report.c"
            {
#line 20159 "report.c"
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
#line 20187 "report.c"
            report__TypeInfo_55_55 = (MR_Word) &report_scalar_common_2[13];
#line 20189 "report.c"
            {
#line 20191 "report.c"
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
#line 20219 "report.c"
            report__TypeInfo_56_56 = (MR_Word) &report_scalar_common_2[12];
#line 20221 "report.c"
            {
#line 20223 "report.c"
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
#line 20251 "report.c"
            report__TypeInfo_57_57 = (MR_Word) &report_scalar_common_2[10];
#line 20253 "report.c"
            {
#line 20255 "report.c"
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
#line 20283 "report.c"
            report__TypeInfo_58_58 = (MR_Word) &report_scalar_common_2[4];
#line 20285 "report.c"
            {
#line 20287 "report.c"
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
#line 20315 "report.c"
            report__TypeInfo_59_59 = (MR_Word) &report_scalar_common_2[3];
#line 20317 "report.c"
            {
#line 20319 "report.c"
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
#line 20345 "report.c"
            report__TypeInfo_60_60 = (MR_Word) &report_scalar_common_2[8];
#line 20347 "report.c"
            {
#line 20349 "report.c"
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
#line 20387 "report.c"
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

#line 20445 "report.c"
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
#line 20480 "report.c"
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
#line 20510 "report.c"
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
#line 20530 "report.c"
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

#line 20609 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 129 "report.m"
        if (report__succeeded)
#line 129 "report.m"
          {
#line 20615 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[15];
#line 20617 "report.c"
            {
#line 20619 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 129 "report.m"
            if (report__succeeded)
#line 129 "report.m"
              {
#line 20626 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[16];
#line 20628 "report.c"
                {
#line 20630 "report.c"
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
#line 20670 "report.c"
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
#line 20700 "report.c"
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
#line 20720 "report.c"
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

#line 20791 "report.c"
        report__succeeded = (report__V_12_12 == report__V_13_13);
#line 210 "report.m"
        if (report__succeeded)
#line 210 "report.m"
          {
#line 20797 "report.c"
            {
#line 20799 "report.c"
              report__succeeded = report____Unify____recursion_type_0_0(report__V_4_4, report__V_7_7);
            }
#line 210 "report.m"
            if (report__succeeded)
#line 20804 "report.c"
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
#line 20841 "report.c"
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
#line 20867 "report.c"
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
#line 20887 "report.c"
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

#line 20960 "report.c"
        {
#line 20962 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_6_6);
        }
#line 148 "report.m"
        if (report__succeeded)
#line 148 "report.m"
          {
#line 20969 "report.c"
            {
#line 20971 "report.c"
              report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(report__V_4_4, report__V_7_7);
            }
#line 148 "report.m"
            if (report__succeeded)
#line 148 "report.m"
              {
#line 20978 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[13];
#line 20980 "report.c"
                {
#line 20982 "report.c"
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
#line 21022 "report.c"
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
#line 21044 "report.c"
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

#line 21111 "report.c"
        {
#line 21113 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_5_5);
        }
#line 181 "report.m"
        if (report__succeeded)
#line 181 "report.m"
          {
#line 21120 "report.c"
            report__TypeInfo_10_10 = (MR_Word) &report_scalar_common_1[12];
#line 21122 "report.c"
            {
#line 21124 "report.c"
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
#line 21162 "report.c"
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
#line 21188 "report.c"
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
#line 21212 "report.c"
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

#line 21289 "report.c"
        {
#line 21291 "report.c"
          report__succeeded = report____Unify____clique_desc_0_0(report__V_3_3, report__V_6_6);
        }
#line 536 "report.m"
        if (report__succeeded)
#line 536 "report.m"
          {
#line 21298 "report.c"
            report__V_13_13 = (MR_Integer) report__V_4_4;
#line 21300 "report.c"
            report__V_14_14 = (MR_Integer) report__V_7_7;
#line 21302 "report.c"
            report__succeeded = (report__V_13_13 == report__V_14_14);
#line 536 "report.m"
            if (report__succeeded)
#line 536 "report.m"
              {
#line 21308 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[11];
#line 21310 "report.c"
                {
#line 21312 "report.c"
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
#line 21352 "report.c"
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
#line 21382 "report.c"
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
#line 21402 "report.c"
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

#line 21479 "report.c"
        report__succeeded = (report__V_13_13 == report__V_14_14);
#line 693 "report.m"
        if (report__succeeded)
#line 693 "report.m"
          {
#line 21485 "report.c"
            {
#line 21487 "report.c"
              report__succeeded = report____Unify____proc_desc_0_0(report__V_4_4, report__V_7_7);
            }
#line 693 "report.m"
            if (report__succeeded)
#line 693 "report.m"
              {
#line 21494 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[10];
#line 21496 "report.c"
                {
#line 21498 "report.c"
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
#line 21538 "report.c"
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
#line 21564 "report.c"
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
#line 21584 "report.c"
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

#line 21659 "report.c"
        {
#line 21661 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, report__V_3_3, report__V_6_6);
        }
#line 192 "report.m"
        if (report__succeeded)
#line 192 "report.m"
          {
#line 21668 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[7];
#line 21670 "report.c"
            {
#line 21672 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 192 "report.m"
            if (report__succeeded)
#line 192 "report.m"
              {
#line 21679 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[9];
#line 21681 "report.c"
                {
#line 21683 "report.c"
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
#line 21723 "report.c"
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
#line 21745 "report.c"
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

#line 21806 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 404 "report.m"
        if (report__succeeded)
#line 21810 "report.c"
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
#line 21845 "report.c"
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
#line 21887 "report.c"
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
#line 21911 "report.c"
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
#line 21931 "report.c"
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
#line 21951 "report.c"
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
#line 21971 "report.c"
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

#line 22070 "report.c"
        report__succeeded = (report__V_5_5 == report__V_11_11);
#line 518 "report.m"
        if (report__succeeded)
#line 518 "report.m"
          {
#line 22076 "report.c"
            report__succeeded = (report__V_6_6 == report__V_12_12);
#line 518 "report.m"
            if (report__succeeded)
#line 518 "report.m"
              {
#line 22082 "report.c"
                report__V_21_21 = (MR_Integer) report__V_3_3;
#line 22084 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22086 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 518 "report.m"
                if (report__succeeded)
#line 518 "report.m"
                  {
#line 22092 "report.c"
                    report__V_23_23 = (MR_Integer) report__V_4_4;
#line 22094 "report.c"
                    report__V_24_24 = (MR_Integer) report__V_10_10;
#line 22096 "report.c"
                    report__succeeded = (report__V_23_23 == report__V_24_24);
#line 518 "report.m"
                    if (report__succeeded)
#line 518 "report.m"
                      {
#line 22102 "report.c"
                        {
#line 22104 "report.c"
                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_7_7, report__V_13_13);
                        }
#line 518 "report.m"
                        if (report__succeeded)
#line 518 "report.m"
                          {
#line 22111 "report.c"
                            report__TypeInfo_20_20 = (MR_Word) &report_scalar_common_1[6];
#line 22113 "report.c"
                            {
#line 22115 "report.c"
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
#line 22161 "report.c"
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
#line 22187 "report.c"
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
#line 22207 "report.c"
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

#line 22282 "report.c"
        {
#line 22284 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_1[3], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_6_6)));
        }
#line 410 "report.m"
        if (report__succeeded)
#line 410 "report.m"
          {
#line 22291 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22293 "report.c"
            {
#line 22295 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 410 "report.m"
            if (report__succeeded)
#line 410 "report.m"
              {
#line 22302 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[5];
#line 22304 "report.c"
                {
#line 22306 "report.c"
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
#line 22346 "report.c"
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
#line 22368 "report.c"
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

#line 22435 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 543 "report.m"
        if (report__succeeded)
#line 543 "report.m"
          {
#line 22441 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[2];
#line 22443 "report.c"
            {
#line 22445 "report.c"
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
#line 22483 "report.c"
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
#line 22517 "report.c"
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
#line 22541 "report.c"
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
#line 22565 "report.c"
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

#line 22656 "report.c"
        report__succeeded = (report__V_17_17 == report__V_18_18);
#line 528 "report.m"
        if (report__succeeded)
#line 528 "report.m"
          {
#line 22662 "report.c"
            report__V_19_19 = (MR_Integer) report__V_4_4;
#line 22664 "report.c"
            report__V_20_20 = (MR_Integer) report__V_8_8;
#line 22666 "report.c"
            report__succeeded = (report__V_19_19 == report__V_20_20);
#line 528 "report.m"
            if (report__succeeded)
#line 528 "report.m"
              {
#line 22672 "report.c"
                report__V_21_21 = (MR_Integer) report__V_5_5;
#line 22674 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22676 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 528 "report.m"
                if (report__succeeded)
#line 528 "report.m"
                  {
#line 22682 "report.c"
                    report__TypeCtorInfo_16_16 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22684 "report.c"
                    {
#line 22686 "report.c"
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
#line 22728 "report.c"
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
#line 22786 "report.c"
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
#line 22810 "report.c"
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
#line 22830 "report.c"
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
#line 22850 "report.c"
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
#line 22870 "report.c"
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
#line 22890 "report.c"
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
#line 22910 "report.c"
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
#line 22930 "report.c"
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
#line 22950 "report.c"
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

#line 23073 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_15_15) == 0);
#line 663 "report.m"
        if (report__succeeded)
#line 663 "report.m"
          {
#line 23079 "report.c"
            report__succeeded = (report__V_6_6 == report__V_16_16);
#line 663 "report.m"
            if (report__succeeded)
#line 663 "report.m"
              {
#line 23085 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_17_17) == 0);
#line 663 "report.m"
                if (report__succeeded)
#line 663 "report.m"
                  {
#line 23091 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_18_18) == 0);
#line 663 "report.m"
                    if (report__succeeded)
#line 663 "report.m"
                      {
#line 23097 "report.c"
                        report__succeeded = (strcmp(report__V_9_9, report__V_19_19) == 0);
#line 663 "report.m"
                        if (report__succeeded)
#line 663 "report.m"
                          {
#line 23103 "report.c"
                            report__succeeded = (report__V_10_10 == report__V_20_20);
#line 663 "report.m"
                            if (report__succeeded)
#line 663 "report.m"
                              {
#line 23109 "report.c"
                                report__V_29_29 = (MR_Integer) report__V_3_3;
#line 23111 "report.c"
                                report__V_30_30 = (MR_Integer) report__V_13_13;
#line 23113 "report.c"
                                report__succeeded = (report__V_29_29 == report__V_30_30);
#line 663 "report.m"
                                if (report__succeeded)
#line 663 "report.m"
                                  {
#line 23119 "report.c"
                                    report__V_31_31 = (MR_Integer) report__V_4_4;
#line 23121 "report.c"
                                    report__V_32_32 = (MR_Integer) report__V_14_14;
#line 23123 "report.c"
                                    report__succeeded = (report__V_31_31 == report__V_32_32);
#line 663 "report.m"
                                    if (report__succeeded)
#line 663 "report.m"
                                      {
#line 23129 "report.c"
                                        {
#line 23131 "report.c"
                                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_11_11, report__V_21_21);
                                        }
#line 663 "report.m"
                                        if (report__succeeded)
#line 663 "report.m"
                                          {
#line 23138 "report.c"
                                            report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[0];
#line 23140 "report.c"
                                            {
#line 23142 "report.c"
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
#line 23196 "report.c"
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
#line 23230 "report.c"
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
#line 23254 "report.c"
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
#line 23274 "report.c"
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

#line 23355 "report.c"
        report__succeeded = (report__V_15_15 == report__V_16_16);
#line 677 "report.m"
        if (report__succeeded)
#line 677 "report.m"
          {
#line 23361 "report.c"
            report__V_17_17 = (MR_Integer) report__V_4_4;
#line 23363 "report.c"
            report__V_18_18 = (MR_Integer) report__V_8_8;
#line 23365 "report.c"
            report__succeeded = (report__V_17_17 == report__V_18_18);
#line 677 "report.m"
            if (report__succeeded)
#line 677 "report.m"
              {
#line 23371 "report.c"
                {
#line 23373 "report.c"
                  report__succeeded = report____Unify____proc_desc_0_0(report__V_5_5, report__V_9_9);
                }
#line 677 "report.m"
                if (report__succeeded)
#line 23378 "report.c"
                  {
#line 23380 "report.c"
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
